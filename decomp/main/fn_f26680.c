/* main functions 00f26680..00f48b60 (120 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00f26680 size=16 callers=0 calls=0
*/
void sub_f26680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26680ULL || rel >= 0xf26690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26690 size=16 callers=0 calls=0
*/
void sub_f26690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26690ULL || rel >= 0xf266a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f266a0 size=16 callers=0 calls=0
*/
void sub_f266a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf266a0ULL || rel >= 0xf266b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f266b0 size=304 callers=0 calls=0
*/
void sub_f266b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf266b0ULL || rel >= 0xf267e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f267e0 size=32 callers=0 calls=0
*/
void sub_f267e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf267e0ULL || rel >= 0xf26800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26800 size=16 callers=0 calls=0
*/
void sub_f26800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26800ULL || rel >= 0xf26810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26810 size=16 callers=0 calls=0
*/
void sub_f26810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26810ULL || rel >= 0xf26820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26820 size=16 callers=0 calls=0
*/
void sub_f26820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26820ULL || rel >= 0xf26830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26830 size=32 callers=0 calls=0
*/
void sub_f26830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26830ULL || rel >= 0xf26850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26850 size=16 callers=0 calls=0
*/
void sub_f26850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26850ULL || rel >= 0xf26860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26860 size=16 callers=0 calls=0
*/
void sub_f26860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26860ULL || rel >= 0xf26870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26870 size=16 callers=0 calls=0
*/
void sub_f26870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26870ULL || rel >= 0xf26880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26880 size=16 callers=0 calls=0
*/
void sub_f26880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26880ULL || rel >= 0xf26890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26890 size=16 callers=0 calls=0
*/
void sub_f26890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26890ULL || rel >= 0xf268a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f268a0 size=16 callers=0 calls=0
*/
void sub_f268a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf268a0ULL || rel >= 0xf268b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f268b0 size=16 callers=0 calls=0
*/
void sub_f268b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf268b0ULL || rel >= 0xf268c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f268c0 size=128 callers=0 calls=0
*/
void sub_f268c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf268c0ULL || rel >= 0xf26940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26940 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_f26940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26940ULL || rel >= 0xf26990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26990 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_f26990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26990ULL || rel >= 0xf269e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f269e0 size=112 callers=4 calls=2
   calls: sub_14aad40, sub_e83430
*/
void sub_f269e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf269e0ULL || rel >= 0xf26a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26a50 size=32 callers=3 calls=0
*/
void sub_f26a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26a50ULL || rel >= 0xf26a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26a70 size=32 callers=2 calls=0
   ref: anime_ptn_icon
*/
void anime_ptn_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26a70ULL || rel >= 0xf26a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26a90 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/live_comm_bg_00_lyt.bin
*/
void live_comm_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26a90ULL || rel >= 0xf26ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26ba0 size=16 callers=0 calls=0
*/
void sub_f26ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26ba0ULL || rel >= 0xf26bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26bb0 size=16 callers=0 calls=0
*/
void sub_f26bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26bb0ULL || rel >= 0xf26bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26bc0 size=16 callers=0 calls=0
*/
void sub_f26bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26bc0ULL || rel >= 0xf26bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26bd0 size=16 callers=0 calls=0
*/
void sub_f26bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26bd0ULL || rel >= 0xf26be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26be0 size=16 callers=0 calls=0
*/
void sub_f26be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26be0ULL || rel >= 0xf26bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26bf0 size=16 callers=0 calls=0
*/
void sub_f26bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26bf0ULL || rel >= 0xf26c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26c00 size=16 callers=0 calls=0
*/
void sub_f26c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26c00ULL || rel >= 0xf26c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26c10 size=16 callers=0 calls=0
*/
void sub_f26c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26c10ULL || rel >= 0xf26c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26c20 size=16 callers=0 calls=0
*/
void sub_f26c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26c20ULL || rel >= 0xf26c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26c30 size=304 callers=0 calls=0
*/
void sub_f26c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26c30ULL || rel >= 0xf26d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26d60 size=2928 callers=0 calls=13
   calls: color_unselect_3, sub_14aad40, sub_14ba7b0, sub_5cfad0, sub_67b990, sub_7a3c20, sub_8f3180, sub_e7eb10, sub_e83430, sub_e83d70, sub_e84310, sub_f278d0
   ... +1 more
   ref: net_button
   ref: sort_button
   ref: cancel_button
   ref: stamp_button
   ref: close_button
*/
void net_button_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26d60ULL || rel >= 0xf278d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f278d0 size=1248 callers=1 calls=2
   calls: sub_e83e60, sub_e84250
*/
void sub_f278d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf278d0ULL || rel >= 0xf27db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f27db0 size=832 callers=1 calls=4
   calls: sub_14b2b20, sub_17ac790, sub_7a3a10, sub_93c570
   ref: color_select
   ref: color_unselect
*/
void color_unselect_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf27db0ULL || rel >= 0xf280f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f280f0 size=32 callers=14 calls=0
*/
void sub_f280f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf280f0ULL || rel >= 0xf28110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28110 size=272 callers=14 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_f28110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28110ULL || rel >= 0xf28220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28220 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_f28220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28220ULL || rel >= 0xf28270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28270 size=32 callers=9 calls=0
   ref: anime_select_menu
   ref: anime_select_stamp
*/
void anime_select_menu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28270ULL || rel >= 0xf28290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28290 size=160 callers=2 calls=1
   calls: sub_14ab2b0
   ref: anime_select_menu
   ref: anime_select_stamp
*/
void anime_select_menu_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28290ULL || rel >= 0xf28330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28330 size=576 callers=1 calls=9
   calls: sub_149f4e0, sub_14aad40, sub_14e1b40, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_7a4ba0, sub_e833a0
   ref: anime_stamp_on
   ref: anime_stamp_off
*/
void anime_stamp_off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28330ULL || rel >= 0xf28570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28570 size=16 callers=3 calls=0
*/
void sub_f28570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28570ULL || rel >= 0xf28580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28580 size=1008 callers=4 calls=9
   calls: sub_14aad40, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_7a4ba0, sub_e833a0, sub_f28970, sub_f28d40
   ref: anime_stamp_on
   ref: anime_stamp_off
*/
void anime_stamp_off_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28580ULL || rel >= 0xf28970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28970 size=976 callers=2 calls=10
   calls: sub_1064970, sub_106dc30, sub_106dfe0, sub_106ea00, sub_106f330, sub_1078420, sub_1078430, sub_1078460, sub_10784a0, sub_f2a0d0
*/
void sub_f28970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28970ULL || rel >= 0xf28d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28d40 size=288 callers=3 calls=0
*/
void sub_f28d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28d40ULL || rel >= 0xf28e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f28e60 size=512 callers=1 calls=2
   calls: sub_14aad40, sub_e833a0
   ref: anime_stamp_off
*/
void anime_stamp_off_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28e60ULL || rel >= 0xf29060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29060 size=528 callers=1 calls=5
   calls: sub_106dfe0, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0
   ref: stamp_table
   ref: stampId
*/
void stamp_table_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29060ULL || rel >= 0xf29270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29270 size=240 callers=2 calls=0
*/
void sub_f29270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29270ULL || rel >= 0xf29360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29360 size=192 callers=0 calls=0
*/
void sub_f29360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29360ULL || rel >= 0xf29420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29420 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/live_comm_app_top_00_lyt.bin
   ref: bin/appli/live_comm/bin/uikit_live_comm_app_top_00.bin
*/
void uikit_live_comm_app_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29420ULL || rel >= 0xf29610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29610 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/live_comm_app_top_00_lyt.bin
   ref: bin/appli/live_comm/bin/uikit_live_comm_app_top_00.bin
*/
void uikit_live_comm_app_top_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29610ULL || rel >= 0xf297f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f297f0 size=416 callers=2 calls=5
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_14eebf0
   ref: stamp_table
   ref: stampId
*/
void stamp_table_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf297f0ULL || rel >= 0xf29990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29990 size=144 callers=16 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_14eebf0
*/
void sub_f29990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29990ULL || rel >= 0xf29a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29a20 size=160 callers=4 calls=2
   calls: sub_14e1a00, sub_e83e60
*/
void sub_f29a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29a20ULL || rel >= 0xf29ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29ac0 size=304 callers=1 calls=1
   calls: sub_7a3a10
*/
void sub_f29ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29ac0ULL || rel >= 0xf29bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29bf0 size=608 callers=1 calls=4
   calls: sub_14e3670, sub_67d450, sub_93c570, sub_e7eb10
*/
void sub_f29bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29bf0ULL || rel >= 0xf29e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29e50 size=240 callers=1 calls=3
   calls: Play_UI_common_decide_5, sub_14e3680, sub_93c570
*/
void sub_f29e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29e50ULL || rel >= 0xf29f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f29f40 size=272 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f29f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29f40ULL || rel >= 0xf2a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a050 size=16 callers=0 calls=0
*/
void sub_f2a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a050ULL || rel >= 0xf2a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a060 size=16 callers=0 calls=0
*/
void sub_f2a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a060ULL || rel >= 0xf2a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a070 size=16 callers=0 calls=0
*/
void sub_f2a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a070ULL || rel >= 0xf2a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a080 size=16 callers=0 calls=0
*/
void sub_f2a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a080ULL || rel >= 0xf2a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a090 size=16 callers=0 calls=0
*/
void sub_f2a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a090ULL || rel >= 0xf2a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a0a0 size=16 callers=0 calls=0
*/
void sub_f2a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a0a0ULL || rel >= 0xf2a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a0b0 size=16 callers=0 calls=0
*/
void sub_f2a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a0b0ULL || rel >= 0xf2a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a0c0 size=16 callers=0 calls=0
*/
void sub_f2a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a0c0ULL || rel >= 0xf2a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a0d0 size=704 callers=1 calls=0
*/
void sub_f2a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a0d0ULL || rel >= 0xf2a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a390 size=512 callers=1 calls=4
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0
   ref: filter
   ref: stamp_table
   ref: stampId
*/
void stamp_table_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a390ULL || rel >= 0xf2a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a590 size=304 callers=0 calls=0
*/
void sub_f2a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a590ULL || rel >= 0xf2a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a6c0 size=32 callers=0 calls=0
*/
void sub_f2a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a6c0ULL || rel >= 0xf2a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a6e0 size=16 callers=0 calls=0
*/
void sub_f2a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a6e0ULL || rel >= 0xf2a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a6f0 size=16 callers=0 calls=0
*/
void sub_f2a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a6f0ULL || rel >= 0xf2a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a700 size=16 callers=0 calls=0
*/
void sub_f2a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a700ULL || rel >= 0xf2a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a710 size=32 callers=0 calls=0
*/
void sub_f2a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a710ULL || rel >= 0xf2a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a730 size=16 callers=0 calls=0
*/
void sub_f2a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a730ULL || rel >= 0xf2a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a740 size=16 callers=0 calls=0
*/
void sub_f2a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a740ULL || rel >= 0xf2a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a750 size=16 callers=0 calls=0
*/
void sub_f2a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a750ULL || rel >= 0xf2a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2a760 size=1504 callers=0 calls=8
   calls: sub_106dfe0, sub_1106200, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_14f1f00, sub_e83430
   ref: filter
   ref: stamp_table
   ref: tagLabel
   ref: stampId
*/
void stamp_table_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a760ULL || rel >= 0xf2ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ad40 size=16 callers=0 calls=0
*/
void sub_f2ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ad40ULL || rel >= 0xf2ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ad50 size=16 callers=0 calls=0
*/
void sub_f2ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ad50ULL || rel >= 0xf2ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ad60 size=16 callers=0 calls=0
*/
void sub_f2ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ad60ULL || rel >= 0xf2ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ad70 size=928 callers=0 calls=12
   calls: sub_106dfe0, sub_1106200, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_14e39e0, sub_1500c40, sub_93c570, sub_f29ac0, sub_f29bf0, sub_f29e50
   ref: stamp_table
   ref: stampId
*/
void stamp_table_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ad70ULL || rel >= 0xf2b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2b110 size=16 callers=0 calls=0
*/
void sub_f2b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b110ULL || rel >= 0xf2b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2b120 size=16 callers=0 calls=0
*/
void sub_f2b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b120ULL || rel >= 0xf2b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2b130 size=16 callers=0 calls=0
*/
void sub_f2b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b130ULL || rel >= 0xf2b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2b140 size=4320 callers=0 calls=30
   calls: place_name_5, player_icon_table_3, sub_106dfe0, sub_1106200, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_11069b0, sub_1106cd0, sub_1313c10
   ... +18 more
   ref: pokeIconPosX
   ref: textLabel
   ref: width_offset
   ref: filter
   ref: pokeIconPosY
   ref: stamp_table
   ref: tagLabel
   ref: fieldImageName
*/
void fieldImageName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b140ULL || rel >= 0xf2c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c220 size=16 callers=0 calls=0
*/
void sub_f2c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c220ULL || rel >= 0xf2c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c230 size=16 callers=0 calls=0
*/
void sub_f2c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c230ULL || rel >= 0xf2c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c240 size=16 callers=0 calls=0
*/
void sub_f2c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c240ULL || rel >= 0xf2c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c250 size=528 callers=0 calls=1
   calls: sub_7a3a10
*/
void sub_f2c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c250ULL || rel >= 0xf2c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c460 size=16 callers=0 calls=0
*/
void sub_f2c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c460ULL || rel >= 0xf2c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c470 size=16 callers=0 calls=0
*/
void sub_f2c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c470ULL || rel >= 0xf2c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c480 size=16 callers=0 calls=0
*/
void sub_f2c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c480ULL || rel >= 0xf2c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c490 size=32 callers=0 calls=0
*/
void sub_f2c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c490ULL || rel >= 0xf2c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c4b0 size=16 callers=0 calls=0
*/
void sub_f2c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c4b0ULL || rel >= 0xf2c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c4c0 size=16 callers=0 calls=0
*/
void sub_f2c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c4c0ULL || rel >= 0xf2c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c4d0 size=16 callers=0 calls=0
*/
void sub_f2c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c4d0ULL || rel >= 0xf2c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c4e0 size=128 callers=0 calls=0
*/
void sub_f2c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c4e0ULL || rel >= 0xf2c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c560 size=1168 callers=0 calls=11
   calls: sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0, sub_f21c90, sub_f23100, sub_f233a0, sub_f234f0, sub_f2cc50
   ref: LiveCommViewTop
   ref: LiveCommViewBg
   ref: LiveCommStateEnd
   ref: LiveCommViewBattle
   ref: LiveCommViewParts
*/
void LiveCommViewBattle_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c560ULL || rel >= 0xf2c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2c9f0 size=160 callers=0 calls=3
   calls: sub_eb6530, sub_eb7830, sub_f21c90
*/
void sub_f2c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c9f0ULL || rel >= 0xf2ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ca90 size=16 callers=0 calls=0
*/
void sub_f2ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ca90ULL || rel >= 0xf2caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2caa0 size=16 callers=0 calls=0
*/
void sub_f2caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2caa0ULL || rel >= 0xf2cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cab0 size=16 callers=0 calls=0
*/
void sub_f2cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cab0ULL || rel >= 0xf2cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cac0 size=16 callers=0 calls=0
*/
void sub_f2cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cac0ULL || rel >= 0xf2cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cad0 size=16 callers=0 calls=0
*/
void sub_f2cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cad0ULL || rel >= 0xf2cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cae0 size=16 callers=0 calls=0
*/
void sub_f2cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cae0ULL || rel >= 0xf2caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2caf0 size=16 callers=0 calls=0
*/
void sub_f2caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2caf0ULL || rel >= 0xf2cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cb00 size=16 callers=0 calls=0
*/
void sub_f2cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cb00ULL || rel >= 0xf2cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cb10 size=16 callers=0 calls=0
*/
void sub_f2cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cb10ULL || rel >= 0xf2cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cb20 size=304 callers=0 calls=0
*/
void sub_f2cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cb20ULL || rel >= 0xf2cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cc50 size=336 callers=5 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f2cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cc50ULL || rel >= 0xf2cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2cda0 size=128 callers=0 calls=0
*/
void sub_f2cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cda0ULL || rel >= 0xf2ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ce20 size=3296 callers=0 calls=38
   calls: anime_net_off, anime_ptn_new, anime_select_menu, sub_105c390, sub_1350ab0, sub_13a10f0, sub_13a1100, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_5cfad0, sub_5cfaf0
   ... +26 more
   ref: LiveCommStateTop
   ref: LiveCommViewTop
   ref: LiveCommViewIcon
   ref: LiveCommViewBg
   ref: LiveCommViewBattle
   ref: LiveCommViewParts
*/
void LiveCommViewBattle_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ce20ULL || rel >= 0xf2db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2db00 size=144 callers=1 calls=4
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_14e6550
*/
void sub_f2db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2db00ULL || rel >= 0xf2db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2db90 size=624 callers=5 calls=0
*/
void sub_f2db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2db90ULL || rel >= 0xf2de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2de00 size=208 callers=3 calls=5
   calls: sub_14aad40, sub_14e1a00, sub_e833a0, sub_e83870, sub_e83c60
   ref: anime_new_in
   ref: anime_new_out
   ref: anime_ptn_new
*/
void anime_ptn_new(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2de00ULL || rel >= 0xf2ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ded0 size=608 callers=3 calls=0
*/
void sub_f2ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ded0ULL || rel >= 0xf2e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2e130 size=304 callers=4 calls=3
   calls: sub_e7eb10, sub_e833a0, sub_f248f0
   ref: anime_net_on
   ref: anime_net_off
*/
void anime_net_off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2e130ULL || rel >= 0xf2e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2e260 size=1568 callers=0 calls=51
   calls: Play_UI_common_report_2, Play_UI_common_report_3, anime_L_menu_02_passive, anime_L_menu_02_passive_2, anime_new_out, anime_new_out_2, anime_new_out_3, anime_ptn_new, sub_13a1150, sub_13a11f0, sub_14bacd0, sub_14e1a00
   ... +39 more
*/
void sub_f2e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2e260ULL || rel >= 0xf2e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2e880 size=896 callers=1 calls=19
   calls: anime_select_menu_2, sub_1049d00, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_e833a0, sub_eb6230, sub_eb6530, sub_eb7790, sub_eba100
   ... +7 more
   ref: anime_L_menu_02_passive
*/
void anime_L_menu_02_passive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2e880ULL || rel >= 0xf2ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2ec00 size=3856 callers=1 calls=40
   calls: anime_select_menu, anime_stamp_off_2, stamp_table_3, sub_1047180, sub_105c390, sub_106dea0, sub_106dfe0, sub_1314a80, sub_1365930, sub_14aad40, sub_14e1a00, sub_14e1a30
   ... +28 more
   ref: anime_new_out
*/
void anime_new_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ec00ULL || rel >= 0xf2fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2fb10 size=256 callers=1 calls=6
   calls: anime_select_menu_2, stamp_table_2, sub_14e1a00, sub_f25020, sub_f280f0, sub_f29990
*/
void sub_f2fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2fb10ULL || rel >= 0xf2fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2fc10 size=416 callers=1 calls=12
   calls: anime_select_menu, sub_14aad40, sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_e833a0, sub_e83c60, sub_eb6230, sub_f248d0, sub_f24f00, sub_f280f0, sub_f29990
   ref: anime_new_out
*/
void anime_new_out_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2fc10ULL || rel >= 0xf2fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f2fdb0 size=1136 callers=1 calls=11
   calls: sub_1064970, sub_14e1a00, sub_67d450, sub_e80580, sub_f1a140, sub_f21c90, sub_f280f0, sub_f33060, sub_f33430, sub_f344c0, sub_f345f0
*/
void sub_f2fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2fdb0ULL || rel >= 0xf30220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30220 size=1040 callers=1 calls=19
   calls: anime_stamp_off_2, stamp_table_4, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_e83430, sub_e83930, sub_eb8a30, sub_eb8c60, sub_eb8ea0
   ... +7 more
*/
void sub_f30220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30220ULL || rel >= 0xf30630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30630 size=288 callers=1 calls=4
   calls: sub_67d450, sub_eb8c60, sub_f21c90, sub_f33060
*/
void sub_f30630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30630ULL || rel >= 0xf30750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30750 size=784 callers=1 calls=11
   calls: sub_14e1a00, sub_c3b970, sub_e80580, sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, sub_f33060, sub_f33430, sub_ffa4b0, sub_ffa4c0
*/
void sub_f30750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30750ULL || rel >= 0xf30a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30a60 size=288 callers=1 calls=3
   calls: sub_e80580, sub_f21c90, sub_f33060
*/
void sub_f30a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30a60ULL || rel >= 0xf30b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30b80 size=272 callers=1 calls=3
   calls: sub_67d450, sub_f21c90, sub_f33060
*/
void sub_f30b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30b80ULL || rel >= 0xf30c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30c90 size=336 callers=1 calls=8
   calls: sub_14e1a00, sub_e80580, sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, sub_f21c90, sub_f33430
*/
void sub_f30c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30c90ULL || rel >= 0xf30de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f30de0 size=640 callers=1 calls=8
   calls: sub_1377ba0, sub_1377d30, sub_c3b970, sub_eb8e80, sub_f1f030, sub_f21c90, sub_f33060, sub_ffa4b0
*/
void sub_f30de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30de0ULL || rel >= 0xf31060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31060 size=256 callers=1 calls=6
   calls: sub_14e1a00, sub_e80580, sub_e807f0, sub_eb8e80, sub_f21c90, sub_f33430
*/
void sub_f31060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31060ULL || rel >= 0xf31160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31160 size=288 callers=1 calls=3
   calls: sub_67d450, sub_f21c90, sub_f33060
*/
void sub_f31160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31160ULL || rel >= 0xf31280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31280 size=288 callers=1 calls=5
   calls: sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, sub_f21c90
*/
void sub_f31280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31280ULL || rel >= 0xf313a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f313a0 size=544 callers=1 calls=6
   calls: sub_13133a0, sub_67be60, sub_67d450, sub_e79ac0, sub_f21c90, sub_f33060
*/
void sub_f313a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf313a0ULL || rel >= 0xf315c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f315c0 size=176 callers=1 calls=4
   calls: sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0
*/
void sub_f315c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf315c0ULL || rel >= 0xf31670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31670 size=176 callers=1 calls=4
   calls: sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0
*/
void sub_f31670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31670ULL || rel >= 0xf31720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31720 size=336 callers=1 calls=7
   calls: sub_67bdb0, sub_67bdc0, sub_67c7e0, sub_e80580, sub_eb8e80, sub_f21c90, sub_ffa4b0
*/
void sub_f31720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31720ULL || rel >= 0xf31870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31870 size=784 callers=1 calls=11
   calls: sub_1064970, sub_14e1a00, sub_e80580, sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, sub_f1a140, sub_f21c90, sub_f33060, sub_f345f0
*/
void sub_f31870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31870ULL || rel >= 0xf31b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31b80 size=432 callers=1 calls=4
   calls: sub_1345e70, sub_67d450, sub_f21c90, sub_f33060
*/
void sub_f31b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31b80ULL || rel >= 0xf31d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31d30 size=336 callers=1 calls=5
   calls: sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, sub_f21c90
*/
void sub_f31d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31d30ULL || rel >= 0xf31e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f31e80 size=544 callers=1 calls=6
   calls: sub_13133a0, sub_67be60, sub_67d450, sub_e79ac0, sub_f21c90, sub_f33060
*/
void sub_f31e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf31e80ULL || rel >= 0xf320a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f320a0 size=176 callers=1 calls=4
   calls: sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0
*/
void sub_f320a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf320a0ULL || rel >= 0xf32150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f32150 size=176 callers=1 calls=4
   calls: sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0
*/
void sub_f32150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32150ULL || rel >= 0xf32200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f32200 size=336 callers=1 calls=7
   calls: sub_67bdb0, sub_67bdc0, sub_67c7e0, sub_e80580, sub_eb8e80, sub_f21c90, sub_ffa4b0
*/
void sub_f32200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32200ULL || rel >= 0xf32350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f32350 size=384 callers=1 calls=7
   calls: sub_67d450, sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, sub_f21c90, sub_f33060
*/
void sub_f32350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32350ULL || rel >= 0xf324d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f324d0 size=800 callers=1 calls=15
   calls: sub_1046880, sub_106dea0, sub_1314a80, sub_67be60, sub_67c010, sub_7c2280, sub_e807f0, sub_eadb10, sub_eadcf0, sub_eb8a30, sub_eb8c60, sub_eb8ea0
   ... +3 more
*/
void sub_f324d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf324d0ULL || rel >= 0xf327f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f327f0 size=880 callers=1 calls=16
   calls: anime_select_menu, anime_stamp_off_2, sub_14aad40, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e807f0, sub_e833a0, sub_e83c60, sub_eb8e80, sub_f248d0, sub_f24f00
   ... +4 more
   ref: anime_new_out
*/
void anime_new_out_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf327f0ULL || rel >= 0xf32b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f32b60 size=368 callers=1 calls=9
   calls: sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_e833a0, sub_f248d0, sub_f280f0, sub_f29990
   ref: anime_L_menu_02_passive
*/
void anime_L_menu_02_passive_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32b60ULL || rel >= 0xf32cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f32cd0 size=16 callers=0 calls=0
*/
void sub_f32cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32cd0ULL || rel >= 0xf32ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f32ce0 size=896 callers=0 calls=6
   calls: RequestPokemonValidation, sub_105c390, sub_783bd0, sub_f1f030, sub_f21c90, sub_f33060
*/
void sub_f32ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32ce0ULL || rel >= 0xf33060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f33060 size=976 callers=28 calls=8
   calls: sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb7e40, sub_eb8930, sub_f21c90
*/
void sub_f33060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf33060ULL || rel >= 0xf33430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f33430 size=192 callers=9 calls=3
   calls: sub_14e1a00, sub_f29990, sub_f2db00
*/
void sub_f33430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf33430ULL || rel >= 0xf334f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f334f0 size=1824 callers=3 calls=0
*/
void sub_f334f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf334f0ULL || rel >= 0xf33c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f33c10 size=320 callers=1 calls=4
   calls: sub_1377d60, sub_c3b970, sub_f33430, sub_f344c0
*/
void sub_f33c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf33c10ULL || rel >= 0xf33d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f33d50 size=864 callers=2 calls=9
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_f21c90, sub_f248d0, sub_f280f0, sub_f29990, sub_f33060, sub_f34300
*/
void sub_f33d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf33d50ULL || rel >= 0xf340b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f340b0 size=592 callers=2 calls=1
   calls: sub_106dc30
*/
void sub_f340b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf340b0ULL || rel >= 0xf34300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34300 size=448 callers=1 calls=1
   calls: sub_67d450
*/
void sub_f34300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34300ULL || rel >= 0xf344c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f344c0 size=304 callers=5 calls=3
   calls: sub_1377d50, sub_c3b970, sub_ffa4c0
*/
void sub_f344c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf344c0ULL || rel >= 0xf345f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f345f0 size=848 callers=2 calls=2
   calls: sub_b2f890, sub_b2fb20
*/
void sub_f345f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf345f0ULL || rel >= 0xf34940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34940 size=528 callers=0 calls=8
   calls: sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_f248d0, sub_f280f0, sub_f29990
*/
void sub_f34940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34940ULL || rel >= 0xf34b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34b50 size=496 callers=2 calls=18
   calls: anime_ptn_new, anime_select_menu, anime_stamp_off_3, sub_14aad40, sub_14e0990, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e807f0, sub_e833a0, sub_e83c60, sub_f248d0
   ... +6 more
   ref: anime_new_out
*/
void anime_new_out_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34b50ULL || rel >= 0xf34d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34d40 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f34d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34d40ULL || rel >= 0xf34de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34de0 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f34de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34de0ULL || rel >= 0xf34e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34e80 size=16 callers=0 calls=0
*/
void sub_f34e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34e80ULL || rel >= 0xf34e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34e90 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f34e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34e90ULL || rel >= 0xf34f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34f40 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f34f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34f40ULL || rel >= 0xf34ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f34ff0 size=16 callers=0 calls=0
*/
void sub_f34ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34ff0ULL || rel >= 0xf35000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35000 size=16 callers=0 calls=0
*/
void sub_f35000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35000ULL || rel >= 0xf35010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35010 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f35010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35010ULL || rel >= 0xf350c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f350c0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f350c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf350c0ULL || rel >= 0xf35170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35170 size=560 callers=2 calls=1
   calls: sub_106dc30
*/
void sub_f35170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35170ULL || rel >= 0xf353a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f353a0 size=304 callers=0 calls=0
*/
void sub_f353a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf353a0ULL || rel >= 0xf354d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f354d0 size=48 callers=0 calls=0
*/
void sub_f354d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf354d0ULL || rel >= 0xf35500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35500 size=16 callers=0 calls=0
*/
void sub_f35500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35500ULL || rel >= 0xf35510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35510 size=16 callers=0 calls=0
*/
void sub_f35510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35510ULL || rel >= 0xf35520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35520 size=16 callers=0 calls=0
*/
void sub_f35520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35520ULL || rel >= 0xf35530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35530 size=288 callers=1 calls=1
   calls: sub_ff42a0
*/
void sub_f35530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35530ULL || rel >= 0xf35650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35650 size=272 callers=1 calls=1
   calls: sub_ff73e0
*/
void sub_f35650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35650ULL || rel >= 0xf35760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35760 size=160 callers=0 calls=4
   calls: anime_net_off, anime_new_out_4, sub_f25a90, sub_f35810
*/
void sub_f35760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35760ULL || rel >= 0xf35800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35800 size=16 callers=0 calls=0
*/
void sub_f35800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35800ULL || rel >= 0xf35810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35810 size=608 callers=2 calls=1
   calls: sub_106dc30
*/
void sub_f35810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35810ULL || rel >= 0xf35a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35a70 size=16 callers=0 calls=0
*/
void sub_f35a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35a70ULL || rel >= 0xf35a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35a80 size=16 callers=0 calls=0
*/
void sub_f35a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35a80ULL || rel >= 0xf35a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35a90 size=160 callers=0 calls=4
   calls: anime_net_off, anime_new_out_4, sub_f25a90, sub_f35810
*/
void sub_f35a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35a90ULL || rel >= 0xf35b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35b30 size=16 callers=0 calls=0
*/
void sub_f35b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35b30ULL || rel >= 0xf35b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35b40 size=16 callers=0 calls=0
*/
void sub_f35b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35b40ULL || rel >= 0xf35b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35b50 size=16 callers=0 calls=0
*/
void sub_f35b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35b50ULL || rel >= 0xf35b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35b60 size=160 callers=0 calls=2
   calls: sub_eb8a30, sub_f33060
*/
void sub_f35b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35b60ULL || rel >= 0xf35c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35c00 size=64 callers=0 calls=0
*/
void sub_f35c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35c00ULL || rel >= 0xf35c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35c40 size=48 callers=0 calls=0
*/
void sub_f35c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35c40ULL || rel >= 0xf35c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35c70 size=48 callers=0 calls=0
*/
void sub_f35c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35c70ULL || rel >= 0xf35ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35ca0 size=96 callers=0 calls=1
   calls: sub_f33060
*/
void sub_f35ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35ca0ULL || rel >= 0xf35d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35d00 size=64 callers=0 calls=0
*/
void sub_f35d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35d00ULL || rel >= 0xf35d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35d40 size=48 callers=0 calls=0
*/
void sub_f35d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35d40ULL || rel >= 0xf35d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35d70 size=48 callers=0 calls=0
*/
void sub_f35d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35d70ULL || rel >= 0xf35da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35da0 size=128 callers=0 calls=0
*/
void sub_f35da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35da0ULL || rel >= 0xf35e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f35e20 size=512 callers=0 calls=6
   calls: sub_14aad40, sub_14ba7b0, sub_5cfad0, sub_8f3180, sub_e83d70, sub_f36040
   ref: blacklist_button
   ref: back_button
*/
void blacklist_button(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf35e20ULL || rel >= 0xf36020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36020 size=32 callers=2 calls=0
*/
void sub_f36020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36020ULL || rel >= 0xf36040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36040 size=768 callers=1 calls=2
   calls: sub_e83e60, sub_e84250
*/
void sub_f36040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36040ULL || rel >= 0xf36340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36340 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_f36340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36340ULL || rel >= 0xf36390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36390 size=608 callers=1 calls=9
   calls: sub_136b770, sub_149f4e0, sub_14e1a30, sub_14edac0, sub_14eead0, sub_14f1840, sub_14f1850, sub_14f1870, sub_7a4ba0
*/
void sub_f36390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36390ULL || rel >= 0xf365f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f365f0 size=144 callers=1 calls=1
   calls: sub_136b770
*/
void sub_f365f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf365f0ULL || rel >= 0xf36680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36680 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/uikit_live_comm_app_icon_00.bin
   ref: bin/appli/live_comm/bin/live_comm_app_icon_00_lyt.bin
*/
void uikit_live_comm_app_icon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36680ULL || rel >= 0xf36870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36870 size=80 callers=0 calls=0
*/
void sub_f36870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36870ULL || rel >= 0xf368c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f368c0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/uikit_live_comm_app_icon_00.bin
   ref: bin/appli/live_comm/bin/live_comm_app_icon_00_lyt.bin
*/
void uikit_live_comm_app_icon_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf368c0ULL || rel >= 0xf36aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36aa0 size=272 callers=2 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_f36aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36aa0ULL || rel >= 0xf36bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36bb0 size=112 callers=0 calls=0
*/
void sub_f36bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36bb0ULL || rel >= 0xf36c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36c20 size=112 callers=0 calls=0
*/
void sub_f36c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36c20ULL || rel >= 0xf36c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36c90 size=16 callers=0 calls=0
*/
void sub_f36c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36c90ULL || rel >= 0xf36ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36ca0 size=112 callers=0 calls=0
*/
void sub_f36ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36ca0ULL || rel >= 0xf36d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36d10 size=112 callers=0 calls=0
*/
void sub_f36d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36d10ULL || rel >= 0xf36d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36d80 size=16 callers=0 calls=0
*/
void sub_f36d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36d80ULL || rel >= 0xf36d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36d90 size=16 callers=0 calls=0
*/
void sub_f36d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36d90ULL || rel >= 0xf36da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36da0 size=112 callers=0 calls=0
*/
void sub_f36da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36da0ULL || rel >= 0xf36e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36e10 size=112 callers=0 calls=0
*/
void sub_f36e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36e10ULL || rel >= 0xf36e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36e80 size=304 callers=0 calls=0
*/
void sub_f36e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36e80ULL || rel >= 0xf36fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f36fb0 size=416 callers=0 calls=5
   calls: sub_1106320, sub_11063e0, sub_1106cd0, sub_e7eb10, sub_f36aa0
   ref: player_icon_table
   ref: icomMsg
*/
void player_icon_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36fb0ULL || rel >= 0xf37150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37150 size=16 callers=0 calls=0
*/
void sub_f37150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37150ULL || rel >= 0xf37160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37160 size=16 callers=0 calls=0
*/
void sub_f37160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37160ULL || rel >= 0xf37170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37170 size=16 callers=0 calls=0
*/
void sub_f37170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37170ULL || rel >= 0xf37180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37180 size=336 callers=0 calls=6
   calls: sub_136b760, sub_136b770, sub_14aad40, sub_14f1f00, sub_1500c40, sub_e83430
*/
void sub_f37180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37180ULL || rel >= 0xf372d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f372d0 size=16 callers=0 calls=0
*/
void sub_f372d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf372d0ULL || rel >= 0xf372e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f372e0 size=16 callers=0 calls=0
*/
void sub_f372e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf372e0ULL || rel >= 0xf372f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f372f0 size=16 callers=0 calls=0
*/
void sub_f372f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf372f0ULL || rel >= 0xf37300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37300 size=352 callers=0 calls=6
   calls: player_icon_table_3, sub_136b770, sub_14aad40, sub_e83430, sub_e83930, sub_e83a20
*/
void sub_f37300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37300ULL || rel >= 0xf37460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37460 size=16 callers=0 calls=0
*/
void sub_f37460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37460ULL || rel >= 0xf37470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37470 size=16 callers=0 calls=0
*/
void sub_f37470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37470ULL || rel >= 0xf37480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37480 size=16 callers=0 calls=0
*/
void sub_f37480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37480ULL || rel >= 0xf37490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37490 size=128 callers=0 calls=0
*/
void sub_f37490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37490ULL || rel >= 0xf37510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37510 size=1248 callers=0 calls=17
   calls: anime_net_off, anime_ptn_icon, sub_105c390, sub_14aad40, sub_c39c40, sub_d0c0, sub_e807f0, sub_eb6230, sub_f21c90, sub_f23100, sub_f23250, sub_f233a0
   ... +5 more
   ref: LiveCommViewTop
   ref: LiveCommViewIcon
   ref: LiveCommViewBg
   ref: LiveCommStateIcon
   ref: LiveCommViewParts
*/
void LiveCommViewParts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37510ULL || rel >= 0xf379f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f379f0 size=432 callers=0 calls=6
   calls: sub_e80580, sub_eb6530, sub_f21c90, sub_f36020, sub_f365f0, sub_f37ba0
*/
void sub_f379f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf379f0ULL || rel >= 0xf37ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37ba0 size=336 callers=1 calls=6
   calls: sub_14aad40, sub_eb6230, sub_f21c90, sub_f26620, sub_f269e0, sub_f36020
*/
void sub_f37ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37ba0ULL || rel >= 0xf37cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37cf0 size=16 callers=0 calls=0
*/
void sub_f37cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37cf0ULL || rel >= 0xf37d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d00 size=16 callers=0 calls=0
*/
void sub_f37d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d00ULL || rel >= 0xf37d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d10 size=16 callers=0 calls=0
*/
void sub_f37d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d10ULL || rel >= 0xf37d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d20 size=16 callers=0 calls=0
*/
void sub_f37d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d20ULL || rel >= 0xf37d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d30 size=16 callers=0 calls=0
*/
void sub_f37d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d30ULL || rel >= 0xf37d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d40 size=16 callers=0 calls=0
*/
void sub_f37d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d40ULL || rel >= 0xf37d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d50 size=16 callers=0 calls=0
*/
void sub_f37d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d50ULL || rel >= 0xf37d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d60 size=16 callers=0 calls=0
*/
void sub_f37d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d60ULL || rel >= 0xf37d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d70 size=16 callers=0 calls=0
*/
void sub_f37d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d70ULL || rel >= 0xf37d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37d80 size=304 callers=0 calls=0
*/
void sub_f37d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37d80ULL || rel >= 0xf37eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37eb0 size=128 callers=0 calls=0
*/
void sub_f37eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37eb0ULL || rel >= 0xf37f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f37f30 size=1136 callers=0 calls=18
   calls: anime_select_menu, anime_stamp_off, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_e83430, sub_e83930, sub_eb6230, sub_eb7730, sub_f21c90, sub_f23100
   ... +6 more
   ref: LiveCommViewTop
   ref: LiveCommViewBg
   ref: LiveCommViewParts
   ref: LiveCommStateStart
*/
void LiveCommStateStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37f30ULL || rel >= 0xf383a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f383a0 size=16 callers=0 calls=0
*/
void sub_f383a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf383a0ULL || rel >= 0xf383b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f383b0 size=16 callers=0 calls=0
*/
void sub_f383b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf383b0ULL || rel >= 0xf383c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f383c0 size=16 callers=0 calls=0
*/
void sub_f383c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf383c0ULL || rel >= 0xf383d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f383d0 size=16 callers=0 calls=0
*/
void sub_f383d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf383d0ULL || rel >= 0xf383e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f383e0 size=16 callers=0 calls=0
*/
void sub_f383e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf383e0ULL || rel >= 0xf383f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f383f0 size=16 callers=0 calls=0
*/
void sub_f383f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf383f0ULL || rel >= 0xf38400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38400 size=16 callers=0 calls=0
*/
void sub_f38400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38400ULL || rel >= 0xf38410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38410 size=16 callers=0 calls=0
*/
void sub_f38410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38410ULL || rel >= 0xf38420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38420 size=16 callers=0 calls=0
*/
void sub_f38420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38420ULL || rel >= 0xf38430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38430 size=16 callers=0 calls=0
*/
void sub_f38430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38430ULL || rel >= 0xf38440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38440 size=304 callers=0 calls=0
*/
void sub_f38440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38440ULL || rel >= 0xf38570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38570 size=128 callers=0 calls=0
*/
void sub_f38570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38570ULL || rel >= 0xf385f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f385f0 size=1712 callers=0 calls=9
   calls: grid_00_2, sub_14aad40, sub_14ba7b0, sub_5cfad0, sub_67b990, sub_8f3180, sub_e7eb10, sub_e83d70, sub_f38cc0
   ref: reset_button
   ref: battle_button_00
   ref: battle_button_01
   ref: battle_button_02
   ref: pass_button
   ref: back_button
*/
void battle_button_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf385f0ULL || rel >= 0xf38ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38ca0 size=32 callers=1 calls=0
*/
void sub_f38ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38ca0ULL || rel >= 0xf38cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38cc0 size=272 callers=18 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_f38cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38cc0ULL || rel >= 0xf38dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38dd0 size=320 callers=2 calls=5
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_14e6550, sub_e840a0
   ref: grid_00
*/
void grid_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38dd0ULL || rel >= 0xf38f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38f10 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_f38f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38f10ULL || rel >= 0xf38f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38f60 size=64 callers=1 calls=1
   calls: sub_14e6550
*/
void sub_f38f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38f60ULL || rel >= 0xf38fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f38fa0 size=352 callers=0 calls=1
   calls: sub_14e6d50
*/
void sub_f38fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf38fa0ULL || rel >= 0xf39100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39100 size=400 callers=3 calls=3
   calls: sub_13133a0, sub_e7eb10, sub_f38cc0
*/
void sub_f39100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39100ULL || rel >= 0xf39290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39290 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/uikit_live_comm_app_battle_00.bin
   ref: bin/appli/live_comm/bin/live_comm_app_btl_00_lyt.bin
*/
void uikit_live_comm_app_battle_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39290ULL || rel >= 0xf39470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39470 size=528 callers=1 calls=6
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_f1d9b0
   ref: stamp_table
   ref: fieldImageName
   ref: stampId
*/
void fieldImageName_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39470ULL || rel >= 0xf39680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39680 size=96 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f39680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39680ULL || rel >= 0xf396e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f396e0 size=96 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f396e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf396e0ULL || rel >= 0xf39740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39740 size=16 callers=0 calls=0
*/
void sub_f39740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39740ULL || rel >= 0xf39750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39750 size=96 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f39750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39750ULL || rel >= 0xf397b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f397b0 size=96 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f397b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf397b0ULL || rel >= 0xf39810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39810 size=16 callers=0 calls=0
*/
void sub_f39810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39810ULL || rel >= 0xf39820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39820 size=16 callers=0 calls=0
*/
void sub_f39820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39820ULL || rel >= 0xf39830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39830 size=96 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f39830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39830ULL || rel >= 0xf39890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39890 size=96 callers=0 calls=1
   calls: sub_f1d800
*/
void sub_f39890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39890ULL || rel >= 0xf398f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f398f0 size=304 callers=0 calls=0
*/
void sub_f398f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf398f0ULL || rel >= 0xf39a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39a20 size=320 callers=0 calls=3
   calls: fieldImageName_2, sub_e7eb10, sub_f38cc0
*/
void sub_f39a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39a20ULL || rel >= 0xf39b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39b60 size=16 callers=0 calls=0
*/
void sub_f39b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39b60ULL || rel >= 0xf39b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39b70 size=16 callers=0 calls=0
*/
void sub_f39b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39b70ULL || rel >= 0xf39b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39b80 size=16 callers=0 calls=0
*/
void sub_f39b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39b80ULL || rel >= 0xf39b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39b90 size=128 callers=0 calls=0
*/
void sub_f39b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39b90ULL || rel >= 0xf39c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f39c10 size=1712 callers=0 calls=23
   calls: anime_ptn_icon, sub_1350ab0, sub_14e1a00, sub_17919c0, sub_5cfaf0, sub_67be60, sub_7847f0, sub_79b990, sub_8efdd0, sub_c39c40, sub_d0c0, sub_e807f0
   ... +11 more
   ref: LiveCommViewTop
   ref: LiveCommViewBg
   ref: LiveCommViewBattle
   ref: LiveCommStateBattle
   ref: LiveCommViewParts
   ref: anime_reset_off
*/
void LiveCommStateBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf39c10ULL || rel >= 0xf3a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3a2c0 size=496 callers=0 calls=15
   calls: anime_reset_off, anime_reset_on, sub_14bacd0, sub_14e1a00, sub_14e1b40, sub_e80580, sub_e807f0, sub_eb6230, sub_eb8a30, sub_eb8c60, sub_eb8e80, sub_f269e0
   ... +3 more
*/
void sub_f3a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3a2c0ULL || rel >= 0xf3a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3a4b0 size=240 callers=1 calls=3
   calls: sub_14e1a00, sub_e80580, sub_eb6530
*/
void sub_f3a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3a4b0ULL || rel >= 0xf3a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3a5a0 size=1024 callers=1 calls=14
   calls: sub_14e1a00, sub_14e1b40, sub_17919c0, sub_67bdb0, sub_67bdc0, sub_67be60, sub_67c7e0, sub_8efdd0, sub_e80580, sub_e833a0, sub_f21c90, sub_f39100
   ... +2 more
   ref: anime_reset_off
*/
void anime_reset_off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3a5a0ULL || rel >= 0xf3a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3a9a0 size=384 callers=1 calls=9
   calls: sub_14e1a00, sub_17919c0, sub_8efdd0, sub_e79ac0, sub_e833a0, sub_eb8a30, sub_eb8c60, sub_f21c90, sub_f39100
   ref: anime_reset_on
*/
void anime_reset_on(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3a9a0ULL || rel >= 0xf3ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3ab20 size=176 callers=1 calls=2
   calls: sub_14e1a00, sub_eb8e80
*/
void sub_f3ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ab20ULL || rel >= 0xf3abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3abd0 size=16 callers=0 calls=0
*/
void sub_f3abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3abd0ULL || rel >= 0xf3abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3abe0 size=784 callers=3 calls=6
   calls: sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8930
*/
void sub_f3abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3abe0ULL || rel >= 0xf3aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3aef0 size=16 callers=0 calls=0
*/
void sub_f3aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3aef0ULL || rel >= 0xf3af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af00 size=16 callers=0 calls=0
*/
void sub_f3af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af00ULL || rel >= 0xf3af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af10 size=16 callers=0 calls=0
*/
void sub_f3af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af10ULL || rel >= 0xf3af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af20 size=16 callers=0 calls=0
*/
void sub_f3af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af20ULL || rel >= 0xf3af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af30 size=16 callers=0 calls=0
*/
void sub_f3af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af30ULL || rel >= 0xf3af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af40 size=16 callers=0 calls=0
*/
void sub_f3af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af40ULL || rel >= 0xf3af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af50 size=16 callers=0 calls=0
*/
void sub_f3af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af50ULL || rel >= 0xf3af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af60 size=16 callers=0 calls=0
*/
void sub_f3af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af60ULL || rel >= 0xf3af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3af70 size=304 callers=0 calls=0
*/
void sub_f3af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3af70ULL || rel >= 0xf3b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b0a0 size=128 callers=0 calls=0
*/
void sub_f3b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b0a0ULL || rel >= 0xf3b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b120 size=144 callers=1 calls=1
   calls: sub_f3b1b0
*/
void sub_f3b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b120ULL || rel >= 0xf3b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b1b0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_e9db40, sub_f3cda0
*/
void sub_f3b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b1b0ULL || rel >= 0xf3b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b2d0 size=304 callers=0 calls=1
   calls: sub_f3b400
*/
void sub_f3b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b2d0ULL || rel >= 0xf3b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b400 size=304 callers=1 calls=1
   calls: sub_e89590
*/
void sub_f3b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b400ULL || rel >= 0xf3b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b530 size=16 callers=0 calls=0
*/
void sub_f3b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b530ULL || rel >= 0xf3b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b540 size=16 callers=0 calls=0
*/
void sub_f3b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b540ULL || rel >= 0xf3b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b550 size=16 callers=0 calls=0
*/
void sub_f3b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b550ULL || rel >= 0xf3b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b560 size=16 callers=0 calls=0
*/
void sub_f3b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b560ULL || rel >= 0xf3b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b570 size=16 callers=0 calls=0
*/
void sub_f3b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b570ULL || rel >= 0xf3b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b580 size=16 callers=0 calls=0
*/
void sub_f3b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b580ULL || rel >= 0xf3b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b590 size=192 callers=0 calls=3
   calls: sub_14e0350, sub_14e0550, sub_6aedd0
*/
void sub_f3b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b590ULL || rel >= 0xf3b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b650 size=224 callers=0 calls=3
   calls: sub_104e040, sub_14e0450, sub_6aedd0
*/
void sub_f3b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b650ULL || rel >= 0xf3b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3b730 size=3536 callers=0 calls=14
   calls: sub_104dbb0, sub_142b3f0, sub_1435450, sub_ba04f0, sub_c39c40, sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ec9830, sub_f3c500, sub_f3c610, sub_f3db40
   ... +2 more
*/
void sub_f3b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b730ULL || rel >= 0xf3c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c500 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_f3cec0
*/
void sub_f3c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c500ULL || rel >= 0xf3c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c610 size=256 callers=2 calls=2
   calls: sub_f3c740, sub_fc2480
*/
void sub_f3c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c610ULL || rel >= 0xf3c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c710 size=16 callers=0 calls=0
*/
void sub_f3c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c710ULL || rel >= 0xf3c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c720 size=16 callers=0 calls=0
*/
void sub_f3c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c720ULL || rel >= 0xf3c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c730 size=16 callers=0 calls=0
*/
void sub_f3c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c730ULL || rel >= 0xf3c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c740 size=256 callers=2 calls=1
   calls: sub_f3c840
*/
void sub_f3c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c740ULL || rel >= 0xf3c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3c840 size=1072 callers=1 calls=0
*/
void sub_f3c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3c840ULL || rel >= 0xf3cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3cc70 size=304 callers=0 calls=0
*/
void sub_f3cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3cc70ULL || rel >= 0xf3cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3cda0 size=288 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_f3cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3cda0ULL || rel >= 0xf3cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3cec0 size=224 callers=1 calls=2
   calls: sub_e7b660, sub_f3cfa0
*/
void sub_f3cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3cec0ULL || rel >= 0xf3cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3cfa0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_f3d080
*/
void sub_f3cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3cfa0ULL || rel >= 0xf3d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d080 size=272 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f3d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d080ULL || rel >= 0xf3d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d190 size=208 callers=6 calls=1
   calls: sub_3340
*/
void sub_f3d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d190ULL || rel >= 0xf3d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d260 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f3d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d260ULL || rel >= 0xf3d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d420 size=96 callers=0 calls=1
   calls: sub_f3d660
*/
void sub_f3d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d420ULL || rel >= 0xf3d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d480 size=16 callers=0 calls=0
*/
void sub_f3d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d480ULL || rel >= 0xf3d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d490 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_f3d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d490ULL || rel >= 0xf3d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d540 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_f3d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d540ULL || rel >= 0xf3d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d610 size=16 callers=0 calls=0
*/
void sub_f3d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d610ULL || rel >= 0xf3d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d620 size=16 callers=0 calls=0
*/
void sub_f3d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d620ULL || rel >= 0xf3d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d630 size=16 callers=0 calls=0
*/
void sub_f3d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d630ULL || rel >= 0xf3d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d640 size=32 callers=0 calls=0
*/
void sub_f3d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d640ULL || rel >= 0xf3d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d660 size=256 callers=4 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_f3d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d660ULL || rel >= 0xf3d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d760 size=128 callers=0 calls=0
*/
void sub_f3d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d760ULL || rel >= 0xf3d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d7e0 size=16 callers=72 calls=0
*/
void sub_f3d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d7e0ULL || rel >= 0xf3d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d7f0 size=16 callers=1 calls=0
*/
void sub_f3d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d7f0ULL || rel >= 0xf3d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d800 size=16 callers=32 calls=0
*/
void sub_f3d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d800ULL || rel >= 0xf3d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d810 size=16 callers=7 calls=0
*/
void sub_f3d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d810ULL || rel >= 0xf3d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d820 size=224 callers=1 calls=2
   calls: sub_a7a360, sub_eb96a0
*/
void sub_f3d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d820ULL || rel >= 0xf3d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3d900 size=368 callers=18 calls=4
   calls: sub_13a10f0, sub_13a1100, sub_13a1150, sub_13a11f0
*/
void sub_f3d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d900ULL || rel >= 0xf3da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3da70 size=64 callers=10 calls=1
   calls: sub_eb7730
*/
void sub_f3da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3da70ULL || rel >= 0xf3dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3dab0 size=16 callers=12 calls=0
*/
void sub_f3dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3dab0ULL || rel >= 0xf3dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3dac0 size=48 callers=10 calls=1
   calls: sub_eb77f0
*/
void sub_f3dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3dac0ULL || rel >= 0xf3daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3daf0 size=16 callers=13 calls=0
*/
void sub_f3daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3daf0ULL || rel >= 0xf3db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3db00 size=64 callers=1 calls=0
*/
void sub_f3db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3db00ULL || rel >= 0xf3db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3db40 size=16 callers=2 calls=0
*/
void sub_f3db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3db40ULL || rel >= 0xf3db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3db50 size=2128 callers=0 calls=19
   calls: sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_79b250, sub_a7b850, sub_e7c0f0, sub_e7e890, sub_f3d660, sub_f3d820, sub_f3e3a0, sub_f3f520
   ... +7 more
   ref: OptionBar
   ref: common/live_tournament.dat
   ref: ViewMatchmake
   ref: ViewTop
   ref: common/btlspot.dat
   ref: ViewDetail00
   ref: SystemMessageView
   ref: ViewBg
*/
void ViewTitle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3db50ULL || rel >= 0xf3e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3e3a0 size=464 callers=1 calls=3
   calls: sub_e7c160, sub_e7c210, sub_f3f520
*/
void sub_f3e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e3a0ULL || rel >= 0xf3e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3e570 size=256 callers=0 calls=2
   calls: sub_e7ea20, sub_f3f520
*/
void sub_f3e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e570ULL || rel >= 0xf3e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3e670 size=16 callers=0 calls=0
*/
void sub_f3e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e670ULL || rel >= 0xf3e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3e680 size=16 callers=0 calls=0
*/
void sub_f3e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e680ULL || rel >= 0xf3e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3e690 size=1232 callers=0 calls=12
   calls: sub_e7c160, sub_f3f520, sub_f40f40, sub_f41090, sub_f411d0, sub_f41350, sub_f414a0, sub_f415f0, sub_f41730, sub_f41880, sub_f419d0, sub_f41b10
*/
void sub_f3e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e690ULL || rel >= 0xf3eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3eb60 size=480 callers=0 calls=5
   calls: sub_1049c20, sub_f3f520, sub_fe3e70, sub_fe55a0, sub_fe5e20
*/
void sub_f3eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3eb60ULL || rel >= 0xf3ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3ed40 size=80 callers=0 calls=1
   calls: sub_f3d190
*/
void sub_f3ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ed40ULL || rel >= 0xf3ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3ed90 size=80 callers=0 calls=1
   calls: sub_f3d190
*/
void sub_f3ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ed90ULL || rel >= 0xf3ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3ede0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f3ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ede0ULL || rel >= 0xf3ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3ee90 size=80 callers=0 calls=1
   calls: sub_f3d190
*/
void sub_f3ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ee90ULL || rel >= 0xf3eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3eee0 size=80 callers=0 calls=1
   calls: sub_f3d190
*/
void sub_f3eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3eee0ULL || rel >= 0xf3ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3ef30 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f3ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ef30ULL || rel >= 0xf3efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3efe0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f3efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3efe0ULL || rel >= 0xf3f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f090 size=80 callers=0 calls=1
   calls: sub_f3d190
*/
void sub_f3f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f090ULL || rel >= 0xf3f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f0e0 size=80 callers=0 calls=1
   calls: sub_f3d190
*/
void sub_f3f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f0e0ULL || rel >= 0xf3f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f130 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f3f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f130ULL || rel >= 0xf3f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f1d0 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f3f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f1d0ULL || rel >= 0xf3f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f270 size=16 callers=0 calls=0
*/
void sub_f3f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f270ULL || rel >= 0xf3f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f280 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f3f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f280ULL || rel >= 0xf3f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f320 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f3f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f320ULL || rel >= 0xf3f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f3c0 size=16 callers=0 calls=0
*/
void sub_f3f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f3c0ULL || rel >= 0xf3f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f3d0 size=16 callers=0 calls=0
*/
void sub_f3f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f3d0ULL || rel >= 0xf3f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f3e0 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f3f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f3e0ULL || rel >= 0xf3f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f480 size=160 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f3f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f480ULL || rel >= 0xf3f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f520 size=304 callers=103 calls=0
*/
void sub_f3f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f520ULL || rel >= 0xf3f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f650 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f3f770
*/
void sub_f3f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f650ULL || rel >= 0xf3f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f770 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f3f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f770ULL || rel >= 0xf3f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3f9b0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f3fad0
*/
void sub_f3f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f9b0ULL || rel >= 0xf3fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3fad0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f3fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3fad0ULL || rel >= 0xf3fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3fd00 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f3fe20
*/
void sub_f3fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3fd00ULL || rel >= 0xf3fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f3fe20 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f3fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3fe20ULL || rel >= 0xf40050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40050 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f40170
*/
void sub_f40050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40050ULL || rel >= 0xf40170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40170 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f402f0
*/
void sub_f40170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40170ULL || rel >= 0xf402f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f402f0 size=560 callers=1 calls=1
   calls: anonymous_2
*/
void sub_f402f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf402f0ULL || rel >= 0xf40520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40520 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f40640
*/
void sub_f40520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40520ULL || rel >= 0xf40640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40640 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f40640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40640ULL || rel >= 0xf40880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40880 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f409a0
*/
void sub_f40880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40880ULL || rel >= 0xf409a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f409a0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f409a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf409a0ULL || rel >= 0xf40bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40bd0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f40cf0
*/
void sub_f40bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40bd0ULL || rel >= 0xf40cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40cf0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f40cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40cf0ULL || rel >= 0xf40f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f40f40 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_f40f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf40f40ULL || rel >= 0xf41090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41090 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f41090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41090ULL || rel >= 0xf411d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f411d0 size=384 callers=1 calls=1
   calls: anonymous
*/
void sub_f411d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf411d0ULL || rel >= 0xf41350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41350 size=336 callers=1 calls=2
   calls: anonymous, sub_e76a20
*/
void sub_f41350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41350ULL || rel >= 0xf414a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f414a0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_f414a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf414a0ULL || rel >= 0xf415f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f415f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f415f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf415f0ULL || rel >= 0xf41730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41730 size=336 callers=1 calls=2
   calls: anonymous, sub_e76a20
*/
void sub_f41730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41730ULL || rel >= 0xf41880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41880 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_f41880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41880ULL || rel >= 0xf419d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f419d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f419d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf419d0ULL || rel >= 0xf41b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41b10 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f41b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41b10ULL || rel >= 0xf41c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41c50 size=128 callers=0 calls=0
*/
void sub_f41c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41c50ULL || rel >= 0xf41cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41cd0 size=784 callers=0 calls=9
   calls: sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_f3d7e0, sub_f3f520, sub_f41fe0, sub_f42090, sub_f42ed0
   ref: ViewBg
*/
void ViewBg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41cd0ULL || rel >= 0xf41fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f41fe0 size=176 callers=4 calls=4
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_f43640
*/
void sub_f41fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf41fe0ULL || rel >= 0xf42090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42090 size=432 callers=2 calls=4
   calls: sub_f3d7e0, sub_f3f520, sub_fe3340, sub_fe3bd0
*/
void sub_f42090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42090ULL || rel >= 0xf42240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42240 size=176 callers=0 calls=3
   calls: sub_eb8c60, sub_f42850, sub_f43500
*/
void sub_f42240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42240ULL || rel >= 0xf422f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f422f0 size=1376 callers=0 calls=19
   calls: NONE_NONE_8, sub_7f4580, sub_e88750, sub_e89590, sub_eb8a30, sub_f3d7e0, sub_f3d800, sub_f3f520, sub_f41fe0, sub_f42b90, sub_f43570, sub_f43630
   ... +7 more
*/
void sub_f422f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf422f0ULL || rel >= 0xf42850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42850 size=192 callers=1 calls=5
   calls: sub_104fb70, sub_1050060, sub_eb8c60, sub_f41fe0, sub_f42090
*/
void sub_f42850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42850ULL || rel >= 0xf42910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42910 size=16 callers=0 calls=0
*/
void sub_f42910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42910ULL || rel >= 0xf42920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42920 size=96 callers=0 calls=0
*/
void sub_f42920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42920ULL || rel >= 0xf42980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42980 size=96 callers=0 calls=0
*/
void sub_f42980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42980ULL || rel >= 0xf429e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f429e0 size=16 callers=0 calls=0
*/
void sub_f429e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf429e0ULL || rel >= 0xf429f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f429f0 size=96 callers=0 calls=0
*/
void sub_f429f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf429f0ULL || rel >= 0xf42a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42a50 size=96 callers=0 calls=0
*/
void sub_f42a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42a50ULL || rel >= 0xf42ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42ab0 size=16 callers=0 calls=0
*/
void sub_f42ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42ab0ULL || rel >= 0xf42ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42ac0 size=16 callers=0 calls=0
*/
void sub_f42ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42ac0ULL || rel >= 0xf42ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42ad0 size=96 callers=0 calls=0
*/
void sub_f42ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42ad0ULL || rel >= 0xf42b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42b30 size=96 callers=0 calls=0
*/
void sub_f42b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42b30ULL || rel >= 0xf42b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42b90 size=528 callers=4 calls=0
*/
void sub_f42b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42b90ULL || rel >= 0xf42da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42da0 size=304 callers=0 calls=0
*/
void sub_f42da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42da0ULL || rel >= 0xf42ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f42ed0 size=336 callers=11 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f42ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf42ed0ULL || rel >= 0xf43020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43020 size=128 callers=0 calls=0
*/
void sub_f43020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43020ULL || rel >= 0xf430a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f430a0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/live_tournament_bg_00_lyt.bin
*/
void live_tournament_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf430a0ULL || rel >= 0xf431b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f431b0 size=16 callers=0 calls=0
*/
void sub_f431b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf431b0ULL || rel >= 0xf431c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f431c0 size=592 callers=0 calls=1
   calls: sub_67b990
*/
void sub_f431c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf431c0ULL || rel >= 0xf43410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43410 size=16 callers=0 calls=0
*/
void sub_f43410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43410ULL || rel >= 0xf43420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43420 size=192 callers=0 calls=4
   calls: sub_1502120, sub_5cfad0, sub_ea4760, sub_eb6530
*/
void sub_f43420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43420ULL || rel >= 0xf434e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f434e0 size=32 callers=12 calls=1
   calls: sub_eb6530
*/
void sub_f434e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf434e0ULL || rel >= 0xf43500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43500 size=64 callers=2 calls=2
   calls: sub_e80580, sub_e807f0
*/
void sub_f43500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43500ULL || rel >= 0xf43540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43540 size=48 callers=1 calls=1
   calls: sub_e80580
*/
void sub_f43540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43540ULL || rel >= 0xf43570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43570 size=48 callers=5 calls=1
   calls: sub_e80580
*/
void sub_f43570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43570ULL || rel >= 0xf435a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f435a0 size=96 callers=8 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f435a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf435a0ULL || rel >= 0xf43600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43600 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_f43600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43600ULL || rel >= 0xf43630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43630 size=16 callers=2 calls=0
*/
void sub_f43630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43630ULL || rel >= 0xf43640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43640 size=640 callers=22 calls=5
   calls: sub_1311c60, sub_1313430, sub_67d450, sub_7c2af0, sub_e7eb10
*/
void sub_f43640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43640ULL || rel >= 0xf438c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f438c0 size=448 callers=5 calls=3
   calls: sub_1311c60, sub_67d450, sub_e7eb10
*/
void sub_f438c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf438c0ULL || rel >= 0xf43a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43a80 size=48 callers=10 calls=0
*/
void sub_f43a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43a80ULL || rel >= 0xf43ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43ab0 size=240 callers=13 calls=2
   calls: sub_67d450, sub_e7eb10
*/
void sub_f43ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43ab0ULL || rel >= 0xf43ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43ba0 size=144 callers=0 calls=0
*/
void sub_f43ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43ba0ULL || rel >= 0xf43c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43c30 size=144 callers=0 calls=0
*/
void sub_f43c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43c30ULL || rel >= 0xf43cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43cc0 size=16 callers=0 calls=0
*/
void sub_f43cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43cc0ULL || rel >= 0xf43cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43cd0 size=144 callers=0 calls=0
*/
void sub_f43cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43cd0ULL || rel >= 0xf43d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43d60 size=144 callers=0 calls=0
*/
void sub_f43d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43d60ULL || rel >= 0xf43df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43df0 size=16 callers=0 calls=0
*/
void sub_f43df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43df0ULL || rel >= 0xf43e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43e00 size=16 callers=0 calls=0
*/
void sub_f43e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43e00ULL || rel >= 0xf43e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43e10 size=144 callers=0 calls=0
*/
void sub_f43e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43e10ULL || rel >= 0xf43ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43ea0 size=144 callers=0 calls=0
*/
void sub_f43ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43ea0ULL || rel >= 0xf43f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f43f30 size=304 callers=0 calls=0
*/
void sub_f43f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf43f30ULL || rel >= 0xf44060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f44060 size=1744 callers=0 calls=22
   calls: OptionBar_5, sub_1354690, sub_138c760, sub_138c900, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0, sub_f3d810, sub_f3da70
   ... +10 more
   ref: ViewTop
   ref: ViewBg
   ref: ViewTitle
   ref: get_pass
*/
void ViewTitle_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44060ULL || rel >= 0xf44730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f44730 size=464 callers=1 calls=5
   calls: sub_795bc0, sub_c39c40, sub_eb7570, sub_eb75e0, sub_f43ab0
   ref: OptionBar
*/
void OptionBar_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44730ULL || rel >= 0xf44900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f44900 size=192 callers=11 calls=4
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_f43640
*/
void sub_f44900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44900ULL || rel >= 0xf449c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f449c0 size=320 callers=8 calls=6
   calls: sub_e806b0, sub_e807f0, sub_eb7e40, sub_f43640, sub_f438c0, sub_f43a80
*/
void sub_f449c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf449c0ULL || rel >= 0xf44b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f44b00 size=400 callers=0 calls=5
   calls: normal_panel_2, sub_eb8e80, sub_f3dab0, sub_f3f520, sub_f496c0
*/
void sub_f44b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44b00ULL || rel >= 0xf44c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f44c90 size=512 callers=0 calls=9
   calls: normal_panel_3, sub_e80580, sub_f3d7e0, sub_f3d800, sub_f3f520, sub_f493e0, sub_f497a0, sub_f498c0, sub_f49ae0
*/
void sub_f44c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44c90ULL || rel >= 0xf44e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f44e90 size=4544 callers=0 calls=50
   calls: normal_panel_3, sub_1049c20, sub_1049d00, sub_104fb70, sub_1050000, sub_1354690, sub_138c760, sub_138c900, sub_6aeb70, sub_7c2d80, sub_8dfba0, sub_8dfd80
   ... +38 more
*/
void sub_f44e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44e90ULL || rel >= 0xf46050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46050 size=704 callers=0 calls=14
   calls: normal_panel_3, sub_138cb20, sub_8dfba0, sub_8e0960, sub_eb8e80, sub_eb8ea0, sub_f3d800, sub_f3dac0, sub_f3daf0, sub_f3f520, sub_f44900, sub_f449c0
   ... +2 more
*/
void sub_f46050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46050ULL || rel >= 0xf46310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46310 size=160 callers=0 calls=3
   calls: sub_1049c20, sub_104ffc0, sub_bb3d50
*/
void sub_f46310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46310ULL || rel >= 0xf463b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f463b0 size=464 callers=2 calls=6
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080, sub_8e0670, sub_8e06c0
*/
void sub_f463b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf463b0ULL || rel >= 0xf46580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46580 size=416 callers=2 calls=5
   calls: sub_138c900, sub_8dfd80, sub_8e0080, sub_8e0670, sub_8e06c0
*/
void sub_f46580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46580ULL || rel >= 0xf46720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46720 size=304 callers=1 calls=4
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080
*/
void sub_f46720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46720ULL || rel >= 0xf46850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46850 size=272 callers=1 calls=3
   calls: sub_138cb20, sub_8dfd80, sub_8e0080
*/
void sub_f46850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46850ULL || rel >= 0xf46960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46960 size=1024 callers=1 calls=17
   calls: sub_104bf60, sub_104fb70, sub_1050000, sub_1064840, sub_106e130, sub_6aea40, sub_6aeb70, sub_6d1070, sub_bb2b10, sub_bb5a90, sub_bb9d40, sub_bb9d90
   ... +5 more
*/
void sub_f46960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46960ULL || rel >= 0xf46d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46d60 size=304 callers=1 calls=4
   calls: sub_1049c20, sub_104a7a0, sub_f471e0, sub_f48c70
*/
void sub_f46d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46d60ULL || rel >= 0xf46e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f46e90 size=400 callers=1 calls=1
   calls: RequestLanConnection
*/
void sub_f46e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf46e90ULL || rel >= 0xf47020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47020 size=448 callers=1 calls=5
   calls: sub_6ae890, sub_6d7610, sub_bb3860, sub_bb5e90, sub_bb6eb0
*/
void sub_f47020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47020ULL || rel >= 0xf471e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f471e0 size=416 callers=1 calls=1
   calls: RequestLocalConnection
*/
void sub_f471e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf471e0ULL || rel >= 0xf47380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47380 size=528 callers=1 calls=5
   calls: sub_89b390, sub_8dfd80, sub_8e0080, sub_8e0670, sub_8e06c0
*/
void sub_f47380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47380ULL || rel >= 0xf47590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47590 size=432 callers=1 calls=6
   calls: sub_104a190, sub_104a7a0, sub_8dfd80, sub_8e0080, sub_8e0670, sub_8e06c0
*/
void sub_f47590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47590ULL || rel >= 0xf47740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47740 size=480 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_bb5420, sub_f49010
*/
void sub_f47740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47740ULL || rel >= 0xf47920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47920 size=208 callers=2 calls=6
   calls: normal_panel_3, sub_eb8a30, sub_eb8a80, sub_eb8e80, sub_f3d800, sub_f3f520
*/
void sub_f47920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47920ULL || rel >= 0xf479f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f479f0 size=48 callers=0 calls=0
*/
void sub_f479f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf479f0ULL || rel >= 0xf47a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47a20 size=48 callers=0 calls=0
*/
void sub_f47a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47a20ULL || rel >= 0xf47a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47a50 size=48 callers=0 calls=1
   calls: sub_104bf60
*/
void sub_f47a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47a50ULL || rel >= 0xf47a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47a80 size=48 callers=0 calls=1
   calls: sub_104bf60
*/
void sub_f47a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47a80ULL || rel >= 0xf47ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47ab0 size=16 callers=0 calls=0
*/
void sub_f47ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47ab0ULL || rel >= 0xf47ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47ac0 size=16 callers=0 calls=0
*/
void sub_f47ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47ac0ULL || rel >= 0xf47ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47ad0 size=16 callers=0 calls=0
*/
void sub_f47ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47ad0ULL || rel >= 0xf47ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47ae0 size=16 callers=0 calls=0
*/
void sub_f47ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47ae0ULL || rel >= 0xf47af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47af0 size=32 callers=0 calls=0
*/
void sub_f47af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47af0ULL || rel >= 0xf47b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47b10 size=32 callers=0 calls=0
*/
void sub_f47b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47b10ULL || rel >= 0xf47b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47b30 size=448 callers=0 calls=3
   calls: sub_6d7ac0, sub_89b390, sub_bb4330
*/
void sub_f47b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47b30ULL || rel >= 0xf47cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47cf0 size=16 callers=0 calls=0
*/
void sub_f47cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47cf0ULL || rel >= 0xf47d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47d00 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_f47d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47d00ULL || rel >= 0xf47d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47d50 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_f47d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47d50ULL || rel >= 0xf47da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47da0 size=576 callers=0 calls=4
   calls: sub_104a480, sub_104a550, sub_104ab60, sub_104ad10
*/
void sub_f47da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47da0ULL || rel >= 0xf47fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f47fe0 size=240 callers=0 calls=0
*/
void sub_f47fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf47fe0ULL || rel >= 0xf480d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f480d0 size=16 callers=0 calls=0
*/
void sub_f480d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf480d0ULL || rel >= 0xf480e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f480e0 size=16 callers=0 calls=0
*/
void sub_f480e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf480e0ULL || rel >= 0xf480f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f480f0 size=16 callers=0 calls=0
*/
void sub_f480f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf480f0ULL || rel >= 0xf48100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48100 size=16 callers=0 calls=0
*/
void sub_f48100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48100ULL || rel >= 0xf48110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48110 size=16 callers=0 calls=0
*/
void sub_f48110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48110ULL || rel >= 0xf48120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48120 size=16 callers=0 calls=0
*/
void sub_f48120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48120ULL || rel >= 0xf48130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48130 size=16 callers=0 calls=0
*/
void sub_f48130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48130ULL || rel >= 0xf48140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48140 size=16 callers=0 calls=0
*/
void sub_f48140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48140ULL || rel >= 0xf48150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48150 size=16 callers=0 calls=0
*/
void sub_f48150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48150ULL || rel >= 0xf48160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48160 size=16 callers=0 calls=0
*/
void sub_f48160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48160ULL || rel >= 0xf48170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48170 size=192 callers=0 calls=0
*/
void sub_f48170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48170ULL || rel >= 0xf48230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48230 size=192 callers=0 calls=0
*/
void sub_f48230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48230ULL || rel >= 0xf482f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f482f0 size=240 callers=0 calls=0
*/
void sub_f482f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf482f0ULL || rel >= 0xf483e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f483e0 size=192 callers=0 calls=0
*/
void sub_f483e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf483e0ULL || rel >= 0xf484a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f484a0 size=192 callers=0 calls=0
*/
void sub_f484a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf484a0ULL || rel >= 0xf48560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48560 size=16 callers=0 calls=0
*/
void sub_f48560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48560ULL || rel >= 0xf48570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48570 size=16 callers=0 calls=0
*/
void sub_f48570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48570ULL || rel >= 0xf48580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48580 size=192 callers=0 calls=0
*/
void sub_f48580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48580ULL || rel >= 0xf48640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48640 size=192 callers=0 calls=0
*/
void sub_f48640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48640ULL || rel >= 0xf48700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48700 size=304 callers=0 calls=0
*/
void sub_f48700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48700ULL || rel >= 0xf48830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48830 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f48830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48830ULL || rel >= 0xf48980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48980 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f48980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48980ULL || rel >= 0xf48ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48ad0 size=32 callers=0 calls=0
*/
void sub_f48ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48ad0ULL || rel >= 0xf48af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48af0 size=64 callers=0 calls=0
*/
void sub_f48af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48af0ULL || rel >= 0xf48b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48b30 size=48 callers=0 calls=0
*/
void sub_f48b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48b30ULL || rel >= 0xf48b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48b60 size=48 callers=0 calls=0
*/
void sub_f48b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48b60ULL || rel >= 0xf48b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

