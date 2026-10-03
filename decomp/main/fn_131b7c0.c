/* main functions 0131b7c0..01334500 (161 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0131b7c0 size=288 callers=1 calls=2
   calls: sub_131b8e0, sub_e809c0
*/
void sub_131b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b7c0ULL || rel >= 0x131b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b8e0 size=528 callers=1 calls=3
   calls: sub_131baf0, sub_790490, sub_e7fe20
*/
void sub_131b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b8e0ULL || rel >= 0x131baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131baf0 size=1296 callers=1 calls=1
   calls: anonymous_2
*/
void sub_131baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131baf0ULL || rel >= 0x131c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c000 size=288 callers=1 calls=2
   calls: sub_131c120, sub_e809c0
*/
void sub_131c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c000ULL || rel >= 0x131c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c120 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_131c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c120ULL || rel >= 0x131c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c350 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_131c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c350ULL || rel >= 0x131c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c4a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_131c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c4a0ULL || rel >= 0x131c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c5e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_131c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c5e0ULL || rel >= 0x131c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c720 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_131c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c720ULL || rel >= 0x131c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c860 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_131c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c860ULL || rel >= 0x131c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131c9a0 size=416 callers=1 calls=1
   calls: anonymous
*/
void sub_131c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131c9a0ULL || rel >= 0x131cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131cb40 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/regulation/bin/uikit_regulation_top_00.bin
   ref: bin/appli/regulation/bin/regulation_top_00_lyt.bin
*/
void uikit_regulation_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131cb40ULL || rel >= 0x131cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131cd20 size=480 callers=0 calls=6
   calls: sub_131cf00, sub_131d130, sub_131dc00, sub_14e1a30, sub_e83930, sub_e84310
*/
void sub_131cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131cd20ULL || rel >= 0x131cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131cf00 size=560 callers=1 calls=2
   calls: sub_131f950, sub_67b990
*/
void sub_131cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131cf00ULL || rel >= 0x131d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131d130 size=432 callers=1 calls=1
   calls: sub_67b990
*/
void sub_131d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131d130ULL || rel >= 0x131d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131d2e0 size=16 callers=0 calls=0
*/
void sub_131d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131d2e0ULL || rel >= 0x131d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131d2f0 size=320 callers=0 calls=5
   calls: sub_131f7c0, sub_1502120, sub_5cfad0, sub_e807d0, sub_ea4760
*/
void sub_131d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131d2f0ULL || rel >= 0x131d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131d430 size=16 callers=1 calls=0
*/
void sub_131d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131d430ULL || rel >= 0x131d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131d440 size=1536 callers=0 calls=7
   calls: sub_13203a0, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_e83e60, sub_e84250
   ref: button_list_item_%02d
*/
void button_list_item__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131d440ULL || rel >= 0x131da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131da40 size=96 callers=1 calls=4
   calls: sub_14e1a30, sub_e80580, sub_e807f0, sub_e84310
*/
void sub_131da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131da40ULL || rel >= 0x131daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131daa0 size=96 callers=4 calls=3
   calls: sub_14e1a30, sub_e80580, sub_e84310
*/
void sub_131daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131daa0ULL || rel >= 0x131db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131db00 size=112 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_131db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131db00ULL || rel >= 0x131db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131db70 size=80 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_131db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131db70ULL || rel >= 0x131dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131dbc0 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_131dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131dbc0ULL || rel >= 0x131dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131dbe0 size=16 callers=2 calls=0
*/
void sub_131dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131dbe0ULL || rel >= 0x131dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131dbf0 size=16 callers=1 calls=0
*/
void sub_131dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131dbf0ULL || rel >= 0x131dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131dc00 size=288 callers=16 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_131dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131dc00ULL || rel >= 0x131dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131dd20 size=832 callers=1 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_131dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131dd20ULL || rel >= 0x131e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131e060 size=736 callers=1 calls=9
   calls: sub_67d450, sub_7c2280, sub_8dfba0, sub_8e0730, sub_8e0840, sub_8e0ae0, sub_8e0b00, sub_8e0de0, sub_e7eb10
*/
void sub_131e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e060ULL || rel >= 0x131e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131e340 size=576 callers=1 calls=0
*/
void sub_131e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e340ULL || rel >= 0x131e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131e580 size=32 callers=2 calls=0
*/
void sub_131e580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e580ULL || rel >= 0x131e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131e5a0 size=16 callers=0 calls=0
*/
void sub_131e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e5a0ULL || rel >= 0x131e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131e5b0 size=816 callers=0 calls=5
   calls: sub_1311c60, sub_131dc00, sub_14ab040, sub_14ac370, sub_e7eb10
   ref: pane_L_list_button_%02d_T_button_01
   ref: pane_L_list_button_%02d_L_new_00
   ref: pane_L_list_button_%02d_T_button_00
*/
void pane_L_list_button__02d_L_new_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e5b0ULL || rel >= 0x131e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131e8e0 size=1120 callers=0 calls=7
   calls: sub_105c390, sub_1311c60, sub_1315b90, sub_131dc00, sub_131dd20, sub_14ac370, sub_e7eb10
*/
void sub_131e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e8e0ULL || rel >= 0x131ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ed40 size=512 callers=1 calls=8
   calls: sub_1311c60, sub_1313270, sub_13133a0, sub_14eebd0, sub_14eebe0, sub_67d450, sub_e7eb10, sub_e84250
*/
void sub_131ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ed40ULL || rel >= 0x131ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ef40 size=96 callers=1 calls=0
*/
void sub_131ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ef40ULL || rel >= 0x131efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131efa0 size=368 callers=3 calls=3
   calls: sub_131ed40, sub_67d450, sub_e7eb10
*/
void sub_131efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131efa0ULL || rel >= 0x131f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f110 size=48 callers=2 calls=0
*/
void sub_131f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f110ULL || rel >= 0x131f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f140 size=32 callers=1 calls=0
*/
void sub_131f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f140ULL || rel >= 0x131f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f160 size=32 callers=1 calls=0
*/
void sub_131f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f160ULL || rel >= 0x131f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f180 size=208 callers=0 calls=0
*/
void sub_131f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f180ULL || rel >= 0x131f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f250 size=208 callers=0 calls=0
*/
void sub_131f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f250ULL || rel >= 0x131f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f320 size=16 callers=0 calls=0
*/
void sub_131f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f320ULL || rel >= 0x131f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f330 size=208 callers=0 calls=0
*/
void sub_131f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f330ULL || rel >= 0x131f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f400 size=208 callers=0 calls=0
*/
void sub_131f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f400ULL || rel >= 0x131f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f4d0 size=16 callers=0 calls=0
*/
void sub_131f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f4d0ULL || rel >= 0x131f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f4e0 size=16 callers=0 calls=0
*/
void sub_131f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f4e0ULL || rel >= 0x131f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f4f0 size=208 callers=0 calls=0
*/
void sub_131f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f4f0ULL || rel >= 0x131f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f5c0 size=208 callers=0 calls=0
*/
void sub_131f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f5c0ULL || rel >= 0x131f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f690 size=304 callers=0 calls=0
*/
void sub_131f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f690ULL || rel >= 0x131f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f7c0 size=400 callers=4 calls=2
   calls: sub_131f7c0, sub_e86260
*/
void sub_131f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f7c0ULL || rel >= 0x131f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131f950 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_131f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131f950ULL || rel >= 0x131fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fb20 size=240 callers=0 calls=0
*/
void sub_131fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fb20ULL || rel >= 0x131fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fc10 size=240 callers=0 calls=0
*/
void sub_131fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fc10ULL || rel >= 0x131fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fd00 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_131fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fd00ULL || rel >= 0x131fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fd70 size=16 callers=0 calls=0
*/
void sub_131fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fd70ULL || rel >= 0x131fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fd80 size=48 callers=0 calls=0
*/
void sub_131fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fd80ULL || rel >= 0x131fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fdb0 size=320 callers=0 calls=0
*/
void sub_131fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fdb0ULL || rel >= 0x131fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fef0 size=16 callers=0 calls=0
*/
void sub_131fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fef0ULL || rel >= 0x131ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ff00 size=240 callers=0 calls=0
*/
void sub_131ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ff00ULL || rel >= 0x131fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131fff0 size=240 callers=0 calls=0
*/
void sub_131fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131fff0ULL || rel >= 0x13200e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013200e0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_13200e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13200e0ULL || rel >= 0x1320150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320150 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_1320150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320150ULL || rel >= 0x13201c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013201c0 size=240 callers=0 calls=0
*/
void sub_13201c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13201c0ULL || rel >= 0x13202b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013202b0 size=240 callers=0 calls=0
*/
void sub_13202b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13202b0ULL || rel >= 0x13203a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013203a0 size=464 callers=1 calls=0
*/
void sub_13203a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13203a0ULL || rel >= 0x1320570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320570 size=48 callers=0 calls=0
*/
void sub_1320570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320570ULL || rel >= 0x13205a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013205a0 size=16 callers=0 calls=0
*/
void sub_13205a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13205a0ULL || rel >= 0x13205b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013205b0 size=32 callers=0 calls=0
*/
void sub_13205b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13205b0ULL || rel >= 0x13205d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013205d0 size=32 callers=0 calls=0
*/
void sub_13205d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13205d0ULL || rel >= 0x13205f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013205f0 size=128 callers=0 calls=0
*/
void sub_13205f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13205f0ULL || rel >= 0x1320670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320670 size=816 callers=0 calls=13
   calls: sub_13193d0, sub_13198d0, sub_131b690, sub_131c350, sub_131d430, sub_131db00, sub_131e060, sub_131e340, sub_795bc0, sub_c39c40, sub_d0c0, sub_e806b0
   ... +1 more
   ref: OptionBar
   ref: ViewTop
*/
void OptionBar_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320670ULL || rel >= 0x13209a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013209a0 size=176 callers=0 calls=4
   calls: sub_13193e0, sub_131b690, sub_131dbc0, sub_eb7790
*/
void sub_13209a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13209a0ULL || rel >= 0x1320a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320a50 size=16 callers=0 calls=0
*/
void sub_1320a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320a50ULL || rel >= 0x1320a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320a60 size=16 callers=0 calls=0
*/
void sub_1320a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320a60ULL || rel >= 0x1320a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320a70 size=16 callers=0 calls=0
*/
void sub_1320a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320a70ULL || rel >= 0x1320a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320a80 size=16 callers=0 calls=0
*/
void sub_1320a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320a80ULL || rel >= 0x1320a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320a90 size=16 callers=0 calls=0
*/
void sub_1320a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320a90ULL || rel >= 0x1320aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320aa0 size=16 callers=0 calls=0
*/
void sub_1320aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320aa0ULL || rel >= 0x1320ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320ab0 size=16 callers=0 calls=0
*/
void sub_1320ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320ab0ULL || rel >= 0x1320ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320ac0 size=16 callers=0 calls=0
*/
void sub_1320ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320ac0ULL || rel >= 0x1320ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320ad0 size=16 callers=0 calls=0
*/
void sub_1320ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320ad0ULL || rel >= 0x1320ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320ae0 size=304 callers=0 calls=0
*/
void sub_1320ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320ae0ULL || rel >= 0x1320c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320c10 size=368 callers=0 calls=5
   calls: sub_131c350, sub_131da40, sub_131dbe0, sub_c39c40, sub_d0c0
   ref: ViewTop
   ref: execute
*/
void execute_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320c10ULL || rel >= 0x1320d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320d80 size=448 callers=0 calls=6
   calls: sub_13193c0, sub_13193e0, sub_131b690, sub_131daa0, sub_131dbf0, sub_131efa0
*/
void sub_1320d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320d80ULL || rel >= 0x1320f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320f40 size=16 callers=0 calls=0
*/
void sub_1320f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f40ULL || rel >= 0x1320f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320f50 size=16 callers=0 calls=0
*/
void sub_1320f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f50ULL || rel >= 0x1320f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320f60 size=16 callers=0 calls=0
*/
void sub_1320f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f60ULL || rel >= 0x1320f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320f70 size=16 callers=0 calls=0
*/
void sub_1320f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f70ULL || rel >= 0x1320f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320f80 size=16 callers=0 calls=0
*/
void sub_1320f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f80ULL || rel >= 0x1320f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320f90 size=16 callers=0 calls=0
*/
void sub_1320f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f90ULL || rel >= 0x1320fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320fa0 size=16 callers=0 calls=0
*/
void sub_1320fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320fa0ULL || rel >= 0x1320fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320fb0 size=16 callers=0 calls=0
*/
void sub_1320fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320fb0ULL || rel >= 0x1320fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320fc0 size=16 callers=0 calls=0
*/
void sub_1320fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320fc0ULL || rel >= 0x1320fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01320fd0 size=304 callers=0 calls=0
*/
void sub_1320fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320fd0ULL || rel >= 0x1321100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321100 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/regulation/bin/regulation_progress_00_lyt.bin
*/
void regulation_progress_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321100ULL || rel >= 0x1321210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321210 size=16 callers=0 calls=0
*/
void sub_1321210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321210ULL || rel >= 0x1321220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321220 size=16 callers=0 calls=0
*/
void sub_1321220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321220ULL || rel >= 0x1321230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321230 size=16 callers=0 calls=0
*/
void sub_1321230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321230ULL || rel >= 0x1321240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321240 size=176 callers=1 calls=4
   calls: sub_e806b0, sub_e83430, sub_e83930, sub_eb6230
*/
void sub_1321240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321240ULL || rel >= 0x13212f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013212f0 size=80 callers=1 calls=1
   calls: sub_e83930
*/
void sub_13212f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13212f0ULL || rel >= 0x1321340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321340 size=64 callers=2 calls=1
   calls: sub_eb6230
*/
void sub_1321340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321340ULL || rel >= 0x1321380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321380 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_1321380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321380ULL || rel >= 0x13213a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013213a0 size=352 callers=5 calls=3
   calls: sub_1311c60, sub_67d450, sub_e7eb10
*/
void sub_13213a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13213a0ULL || rel >= 0x1321500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321500 size=16 callers=0 calls=0
*/
void sub_1321500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321500ULL || rel >= 0x1321510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321510 size=16 callers=0 calls=0
*/
void sub_1321510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321510ULL || rel >= 0x1321520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321520 size=16 callers=0 calls=0
*/
void sub_1321520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321520ULL || rel >= 0x1321530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321530 size=16 callers=0 calls=0
*/
void sub_1321530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321530ULL || rel >= 0x1321540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321540 size=16 callers=0 calls=0
*/
void sub_1321540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321540ULL || rel >= 0x1321550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321550 size=16 callers=0 calls=0
*/
void sub_1321550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321550ULL || rel >= 0x1321560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321560 size=16 callers=0 calls=0
*/
void sub_1321560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321560ULL || rel >= 0x1321570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321570 size=16 callers=0 calls=0
*/
void sub_1321570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321570ULL || rel >= 0x1321580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321580 size=304 callers=0 calls=0
*/
void sub_1321580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321580ULL || rel >= 0x13216b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013216b0 size=976 callers=0 calls=6
   calls: sub_13233b0, sub_5cfaf0, sub_79b990, sub_8dfd80, sub_c39c40, sub_d0c0
   ref: ViewProgress
   ref: dl_execute
*/
void ViewProgress(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13216b0ULL || rel >= 0x1321a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321a80 size=1296 callers=0 calls=14
   calls: sub_13193c0, sub_13193e0, sub_13198e0, sub_131b690, sub_1321240, sub_1321340, sub_1321380, sub_13213a0, sub_1321f90, sub_13223a0, sub_e806b0, sub_e807f0
   ... +2 more
*/
void sub_1321a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321a80ULL || rel >= 0x1321f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01321f90 size=1040 callers=1 calls=2
   calls: RequestSearchRegulation, sub_1390780
*/
void sub_1321f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1321f90ULL || rel >= 0x13223a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013223a0 size=1776 callers=1 calls=2
   calls: RequestDownloadRegulation, sub_13212f0
*/
void sub_13223a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13223a0ULL || rel >= 0x1322a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322a90 size=16 callers=0 calls=0
*/
void sub_1322a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322a90ULL || rel >= 0x1322aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322aa0 size=464 callers=1 calls=1
   calls: sub_6cd9d0
*/
void sub_1322aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322aa0ULL || rel >= 0x1322c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322c70 size=240 callers=0 calls=0
*/
void sub_1322c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322c70ULL || rel >= 0x1322d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322d60 size=240 callers=0 calls=0
*/
void sub_1322d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322d60ULL || rel >= 0x1322e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322e50 size=16 callers=0 calls=0
*/
void sub_1322e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322e50ULL || rel >= 0x1322e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322e60 size=256 callers=0 calls=0
*/
void sub_1322e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322e60ULL || rel >= 0x1322f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01322f60 size=256 callers=0 calls=0
*/
void sub_1322f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1322f60ULL || rel >= 0x1323060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323060 size=16 callers=0 calls=0
*/
void sub_1323060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323060ULL || rel >= 0x1323070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323070 size=16 callers=0 calls=0
*/
void sub_1323070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323070ULL || rel >= 0x1323080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323080 size=256 callers=0 calls=0
*/
void sub_1323080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323080ULL || rel >= 0x1323180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323180 size=256 callers=0 calls=0
*/
void sub_1323180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323180ULL || rel >= 0x1323280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323280 size=304 callers=0 calls=0
*/
void sub_1323280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323280ULL || rel >= 0x13233b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013233b0 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_13233b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13233b0ULL || rel >= 0x1323500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323500 size=112 callers=0 calls=1
   calls: sub_1322aa0
*/
void sub_1323500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323500ULL || rel >= 0x1323570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323570 size=64 callers=0 calls=0
*/
void sub_1323570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323570ULL || rel >= 0x13235b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013235b0 size=48 callers=0 calls=0
*/
void sub_13235b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13235b0ULL || rel >= 0x13235e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013235e0 size=48 callers=0 calls=0
*/
void sub_13235e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13235e0ULL || rel >= 0x1323610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323610 size=48 callers=0 calls=0
*/
void sub_1323610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323610ULL || rel >= 0x1323640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323640 size=64 callers=0 calls=0
*/
void sub_1323640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323640ULL || rel >= 0x1323680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323680 size=48 callers=0 calls=0
*/
void sub_1323680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323680ULL || rel >= 0x13236b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013236b0 size=48 callers=0 calls=0
*/
void sub_13236b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13236b0ULL || rel >= 0x13236e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013236e0 size=384 callers=0 calls=3
   calls: sub_1390870, sub_8e0190, sub_8e0b80
*/
void sub_13236e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13236e0ULL || rel >= 0x1323860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323860 size=64 callers=0 calls=0
*/
void sub_1323860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323860ULL || rel >= 0x13238a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013238a0 size=48 callers=0 calls=0
*/
void sub_13238a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13238a0ULL || rel >= 0x13238d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013238d0 size=48 callers=0 calls=0
*/
void sub_13238d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13238d0ULL || rel >= 0x1323900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323900 size=64 callers=0 calls=0
*/
void sub_1323900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323900ULL || rel >= 0x1323940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323940 size=64 callers=0 calls=0
*/
void sub_1323940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323940ULL || rel >= 0x1323980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323980 size=48 callers=0 calls=0
*/
void sub_1323980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323980ULL || rel >= 0x13239b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013239b0 size=48 callers=0 calls=0
*/
void sub_13239b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13239b0ULL || rel >= 0x13239e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013239e0 size=128 callers=0 calls=0
*/
void sub_13239e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13239e0ULL || rel >= 0x1323a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323a60 size=672 callers=0 calls=8
   calls: sub_13193d0, sub_131b690, sub_131c350, sub_131db70, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb77f0
   ref: OptionBar
   ref: ViewTop
*/
void OptionBar_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323a60ULL || rel >= 0x1323d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323d00 size=176 callers=0 calls=4
   calls: sub_13193e0, sub_131b690, sub_131dbc0, sub_eb7830
*/
void sub_1323d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323d00ULL || rel >= 0x1323db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323db0 size=320 callers=0 calls=4
   calls: sub_131c350, sub_c39c40, sub_e80580, sub_e806b0
   ref: ViewTop
*/
void ViewTop_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323db0ULL || rel >= 0x1323ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323ef0 size=16 callers=0 calls=0
*/
void sub_1323ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323ef0ULL || rel >= 0x1323f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f00 size=16 callers=0 calls=0
*/
void sub_1323f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f00ULL || rel >= 0x1323f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f10 size=16 callers=0 calls=0
*/
void sub_1323f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f10ULL || rel >= 0x1323f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f20 size=16 callers=0 calls=0
*/
void sub_1323f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f20ULL || rel >= 0x1323f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f30 size=16 callers=0 calls=0
*/
void sub_1323f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f30ULL || rel >= 0x1323f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f40 size=16 callers=0 calls=0
*/
void sub_1323f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f40ULL || rel >= 0x1323f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f50 size=16 callers=0 calls=0
*/
void sub_1323f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f50ULL || rel >= 0x1323f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f60 size=16 callers=0 calls=0
*/
void sub_1323f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f60ULL || rel >= 0x1323f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01323f70 size=304 callers=0 calls=0
*/
void sub_1323f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1323f70ULL || rel >= 0x13240a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013240a0 size=864 callers=0 calls=10
   calls: sub_131c350, sub_131ef40, sub_131f110, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb7e40
   ref: ViewTop
*/
void ViewTop_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13240a0ULL || rel >= 0x1324400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324400 size=832 callers=0 calls=12
   calls: sub_11011d0, sub_11013c0, sub_13193e0, sub_13198d0, sub_131b690, sub_131e580, sub_131f140, sub_1324740, sub_1324cb0, sub_eb8e80, sub_eb8ea0, unnamed_16
*/
void sub_1324400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324400ULL || rel >= 0x1324740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324740 size=448 callers=2 calls=8
   calls: sub_13193c0, sub_13198d0, sub_131b690, sub_131daa0, sub_131dbe0, sub_131e580, sub_8dfd80, sub_8e03b0
*/
void sub_1324740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324740ULL || rel >= 0x1324900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324900 size=16 callers=0 calls=0
*/
void sub_1324900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324900ULL || rel >= 0x1324910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324910 size=96 callers=0 calls=0
*/
void sub_1324910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324910ULL || rel >= 0x1324970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324970 size=96 callers=0 calls=0
*/
void sub_1324970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324970ULL || rel >= 0x13249d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013249d0 size=16 callers=0 calls=0
*/
void sub_13249d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13249d0ULL || rel >= 0x13249e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013249e0 size=96 callers=0 calls=0
*/
void sub_13249e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13249e0ULL || rel >= 0x1324a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324a40 size=96 callers=0 calls=0
*/
void sub_1324a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324a40ULL || rel >= 0x1324aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324aa0 size=16 callers=0 calls=0
*/
void sub_1324aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324aa0ULL || rel >= 0x1324ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324ab0 size=16 callers=0 calls=0
*/
void sub_1324ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324ab0ULL || rel >= 0x1324ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324ac0 size=96 callers=0 calls=0
*/
void sub_1324ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324ac0ULL || rel >= 0x1324b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324b20 size=96 callers=0 calls=0
*/
void sub_1324b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324b20ULL || rel >= 0x1324b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324b80 size=304 callers=0 calls=0
*/
void sub_1324b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324b80ULL || rel >= 0x1324cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324cb0 size=272 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_1324cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324cb0ULL || rel >= 0x1324dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324dc0 size=144 callers=0 calls=0
*/
void sub_1324dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324dc0ULL || rel >= 0x1324e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324e50 size=144 callers=0 calls=0
*/
void sub_1324e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324e50ULL || rel >= 0x1324ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324ee0 size=240 callers=0 calls=0
*/
void sub_1324ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324ee0ULL || rel >= 0x1324fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01324fd0 size=144 callers=0 calls=0
*/
void sub_1324fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324fd0ULL || rel >= 0x1325060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325060 size=144 callers=0 calls=0
*/
void sub_1325060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325060ULL || rel >= 0x13250f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013250f0 size=16 callers=0 calls=0
*/
void sub_13250f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13250f0ULL || rel >= 0x1325100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325100 size=16 callers=0 calls=0
*/
void sub_1325100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325100ULL || rel >= 0x1325110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325110 size=144 callers=0 calls=0
*/
void sub_1325110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325110ULL || rel >= 0x13251a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013251a0 size=144 callers=0 calls=0
*/
void sub_13251a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13251a0ULL || rel >= 0x1325230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325230 size=112 callers=1 calls=1
   calls: sub_13252a0
*/
void sub_1325230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325230ULL || rel >= 0x13252a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013252a0 size=288 callers=1 calls=3
   calls: sub_1325e60, sub_c38350, sub_e9db40
*/
void sub_13252a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13252a0ULL || rel >= 0x13253c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013253c0 size=16 callers=0 calls=0
*/
void sub_13253c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13253c0ULL || rel >= 0x13253d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013253d0 size=464 callers=0 calls=3
   calls: sub_1325f40, sub_1326020, sub_1330710
*/
void sub_13253d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13253d0ULL || rel >= 0x13255a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013255a0 size=16 callers=0 calls=0
*/
void sub_13255a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13255a0ULL || rel >= 0x13255b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013255b0 size=496 callers=0 calls=2
   calls: sub_104dbb0, sub_13257a0
*/
void sub_13255b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13255b0ULL || rel >= 0x13257a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013257a0 size=416 callers=1 calls=3
   calls: sub_1326100, sub_672c10, sub_c386f0
*/
void sub_13257a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13257a0ULL || rel >= 0x1325940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325940 size=160 callers=0 calls=0
*/
void sub_1325940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325940ULL || rel >= 0x13259e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013259e0 size=160 callers=0 calls=0
*/
void sub_13259e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13259e0ULL || rel >= 0x1325a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325a80 size=16 callers=0 calls=0
*/
void sub_1325a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325a80ULL || rel >= 0x1325a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325a90 size=160 callers=0 calls=0
*/
void sub_1325a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325a90ULL || rel >= 0x1325b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325b30 size=160 callers=0 calls=0
*/
void sub_1325b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325b30ULL || rel >= 0x1325bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325bd0 size=16 callers=0 calls=0
*/
void sub_1325bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325bd0ULL || rel >= 0x1325be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325be0 size=16 callers=0 calls=0
*/
void sub_1325be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325be0ULL || rel >= 0x1325bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325bf0 size=160 callers=0 calls=0
*/
void sub_1325bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325bf0ULL || rel >= 0x1325c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325c90 size=160 callers=0 calls=0
*/
void sub_1325c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325c90ULL || rel >= 0x1325d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325d30 size=304 callers=0 calls=0
*/
void sub_1325d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325d30ULL || rel >= 0x1325e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325e60 size=224 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1325e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325e60ULL || rel >= 0x1325f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01325f40 size=224 callers=1 calls=1
   calls: sub_132bb70
*/
void sub_1325f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1325f40ULL || rel >= 0x1326020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326020 size=224 callers=1 calls=1
   calls: sub_1334b00
*/
void sub_1326020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326020ULL || rel >= 0x1326100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326100 size=176 callers=1 calls=2
   calls: sub_13261b0, sub_e7b660
*/
void sub_1326100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326100ULL || rel >= 0x13261b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013261b0 size=224 callers=1 calls=3
   calls: sub_1327a30, sub_7c2da0, sub_e7b5e0
*/
void sub_13261b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13261b0ULL || rel >= 0x1326290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326290 size=2016 callers=0 calls=18
   calls: sub_1326a70, sub_1327b20, sub_1327c50, sub_1327d30, sub_1328090, sub_1328260, sub_13285f0, sub_132c250, sub_14303f0, sub_14334e0, sub_78f150, sub_78f240
   ... +6 more
   ref: View_SystemMessage
   ref: common/rental_team.dat
   ref: UploadTeamView
   ref: BattleTeamView
   ref: ViewTeamDetail
   ref: DownloadTeamView
   ref: ViewSelectMode
   ref: TipsView
*/
void BattleTeamView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326290ULL || rel >= 0x1326a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326a70 size=400 callers=1 calls=3
   calls: sub_1327b20, sub_132c200, sub_e7c160
*/
void sub_1326a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326a70ULL || rel >= 0x1326c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326c00 size=16 callers=0 calls=0
*/
void sub_1326c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326c00ULL || rel >= 0x1326c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326c10 size=304 callers=0 calls=4
   calls: BattleTeamView_2, sub_1327b20, sub_13287c0, sub_132c390
*/
void sub_1326c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326c10ULL || rel >= 0x1326d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326d40 size=16 callers=0 calls=0
*/
void sub_1326d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326d40ULL || rel >= 0x1326d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01326d50 size=864 callers=0 calls=8
   calls: sub_13285f0, sub_1328990, sub_1328ab0, sub_1328bd0, sub_1328cf0, sub_1328e10, sub_1328f30, sub_e7c160
*/
void sub_1326d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1326d50ULL || rel >= 0x13270b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013270b0 size=16 callers=0 calls=0
*/
void sub_13270b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13270b0ULL || rel >= 0x13270c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013270c0 size=544 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_13270c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13270c0ULL || rel >= 0x13272e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013272e0 size=16 callers=0 calls=0
*/
void sub_13272e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13272e0ULL || rel >= 0x13272f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013272f0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_13272f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13272f0ULL || rel >= 0x13273a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013273a0 size=16 callers=0 calls=0
*/
void sub_13273a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13273a0ULL || rel >= 0x13273b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013273b0 size=16 callers=0 calls=0
*/
void sub_13273b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13273b0ULL || rel >= 0x13273c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013273c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_13273c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13273c0ULL || rel >= 0x1327470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327470 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1327470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327470ULL || rel >= 0x1327520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327520 size=16 callers=0 calls=0
*/
void sub_1327520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327520ULL || rel >= 0x1327530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327530 size=16 callers=0 calls=0
*/
void sub_1327530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327530ULL || rel >= 0x1327540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327540 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1327540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327540ULL || rel >= 0x13275c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013275c0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_13275c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13275c0ULL || rel >= 0x1327730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327730 size=96 callers=0 calls=1
   calls: sub_1327950
*/
void sub_1327730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327730ULL || rel >= 0x1327790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327790 size=16 callers=0 calls=0
*/
void sub_1327790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327790ULL || rel >= 0x13277a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013277a0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_13277a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13277a0ULL || rel >= 0x1327840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327840 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1327840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327840ULL || rel >= 0x1327900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327900 size=16 callers=0 calls=0
*/
void sub_1327900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327900ULL || rel >= 0x1327910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327910 size=16 callers=0 calls=0
*/
void sub_1327910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327910ULL || rel >= 0x1327920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327920 size=16 callers=0 calls=0
*/
void sub_1327920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327920ULL || rel >= 0x1327930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327930 size=32 callers=0 calls=0
*/
void sub_1327930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327930ULL || rel >= 0x1327950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327950 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1327950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327950ULL || rel >= 0x1327a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327a30 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1327a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327a30ULL || rel >= 0x1327b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327b20 size=304 callers=9 calls=0
*/
void sub_1327b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327b20ULL || rel >= 0x1327c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327c50 size=224 callers=1 calls=1
   calls: sub_1329050
*/
void sub_1327c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327c50ULL || rel >= 0x1327d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327d30 size=288 callers=1 calls=2
   calls: sub_1327e50, sub_e809c0
*/
void sub_1327d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327d30ULL || rel >= 0x1327e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01327e50 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1327e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1327e50ULL || rel >= 0x1328090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328090 size=464 callers=28 calls=0
*/
void sub_1328090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328090ULL || rel >= 0x1328260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328260 size=288 callers=1 calls=2
   calls: sub_1328380, sub_e809c0
*/
void sub_1328260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328260ULL || rel >= 0x1328380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328380 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1328380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328380ULL || rel >= 0x13285f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013285f0 size=464 callers=62 calls=0
*/
void sub_13285f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13285f0ULL || rel >= 0x13287c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013287c0 size=464 callers=27 calls=0
*/
void sub_13287c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13287c0ULL || rel >= 0x1328990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328990 size=288 callers=1 calls=1
   calls: StateDownloadMyTeam
*/
void sub_1328990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328990ULL || rel >= 0x1328ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328ab0 size=288 callers=1 calls=1
   calls: StateSelectTopMenu
*/
void sub_1328ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328ab0ULL || rel >= 0x1328bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328bd0 size=288 callers=1 calls=1
   calls: StateDownloadTeamMenu
*/
void sub_1328bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328bd0ULL || rel >= 0x1328cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328cf0 size=288 callers=1 calls=1
   calls: StateUploadTeamMenu
*/
void sub_1328cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328cf0ULL || rel >= 0x1328e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328e10 size=288 callers=1 calls=1
   calls: StateSelectBattleTeam
*/
void sub_1328e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328e10ULL || rel >= 0x1328f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01328f30 size=288 callers=1 calls=1
   calls: StateConfirmBattleTeam
*/
void sub_1328f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1328f30ULL || rel >= 0x1329050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329050 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1329050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329050ULL || rel >= 0x13290c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013290c0 size=480 callers=2 calls=3
   calls: sub_1329bc0, sub_1329d10, sub_142ec00
   ref: UploadTeamView
   ref: BattleTeamView
   ref: ViewTeamDetail
   ref: DownloadTeamView
   ref: ViewSelectMode
*/
void BattleTeamView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13290c0ULL || rel >= 0x13292a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013292a0 size=1264 callers=18 calls=2
   calls: sub_e806b0, sub_eb6230
*/
void sub_13292a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13292a0ULL || rel >= 0x1329790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329790 size=96 callers=24 calls=1
   calls: sub_eb6530
*/
void sub_1329790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329790ULL || rel >= 0x13297f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013297f0 size=304 callers=10 calls=1
   calls: sub_eb6230
*/
void sub_13297f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13297f0ULL || rel >= 0x1329920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329920 size=80 callers=0 calls=0
*/
void sub_1329920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329920ULL || rel >= 0x1329970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329970 size=240 callers=0 calls=0
*/
void sub_1329970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329970ULL || rel >= 0x1329a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329a60 size=80 callers=0 calls=0
*/
void sub_1329a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329a60ULL || rel >= 0x1329ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329ab0 size=80 callers=0 calls=0
*/
void sub_1329ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329ab0ULL || rel >= 0x1329b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329b00 size=16 callers=0 calls=0
*/
void sub_1329b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329b00ULL || rel >= 0x1329b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329b10 size=16 callers=0 calls=0
*/
void sub_1329b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329b10ULL || rel >= 0x1329b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329b20 size=80 callers=0 calls=0
*/
void sub_1329b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329b20ULL || rel >= 0x1329b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329b70 size=80 callers=0 calls=0
*/
void sub_1329b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329b70ULL || rel >= 0x1329bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329bc0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1329bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329bc0ULL || rel >= 0x1329d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329d10 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1329d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329d10ULL || rel >= 0x1329e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329e60 size=272 callers=1 calls=3
   calls: anonymous, sub_132c7c0, sub_d0c0
   ref: StateSelectTopMenu
*/
void StateSelectTopMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329e60ULL || rel >= 0x1329f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01329f70 size=1120 callers=0 calls=18
   calls: sub_1327b20, sub_13287c0, sub_13292a0, sub_1329bc0, sub_132a3d0, sub_132b470, sub_132c350, sub_132c390, sub_132cb10, sub_5cfaf0, sub_795bc0, sub_79b990
   ... +6 more
   ref: ViewSelectMode
   ref: View_OptionBar
*/
void View_OptionBar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1329f70ULL || rel >= 0x132a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132a3d0 size=704 callers=2 calls=5
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_132a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132a3d0ULL || rel >= 0x132a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132a690 size=752 callers=0 calls=13
   calls: sub_13287c0, sub_13292a0, sub_1329790, sub_132a3d0, sub_132a980, sub_132b470, sub_132b6a0, sub_132cb20, sub_e807f0, sub_eb6230, sub_eb7790, sub_eb7830
   ... +1 more
*/
void sub_132a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132a690ULL || rel >= 0x132a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132a980 size=336 callers=1 calls=6
   calls: sub_13285f0, sub_132aae0, sub_132b470, sub_132bc40, sub_e807f0, sub_eb6230
*/
void sub_132a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132a980ULL || rel >= 0x132aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132aad0 size=16 callers=0 calls=0
*/
void sub_132aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132aad0ULL || rel >= 0x132aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132aae0 size=256 callers=1 calls=6
   calls: sub_13285f0, sub_13287c0, sub_13297f0, sub_132b470, sub_e807f0, sub_eb77f0
*/
void sub_132aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132aae0ULL || rel >= 0x132abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132abe0 size=288 callers=0 calls=0
*/
void sub_132abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132abe0ULL || rel >= 0x132ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad00 size=16 callers=0 calls=0
*/
void sub_132ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad00ULL || rel >= 0x132ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad10 size=16 callers=0 calls=0
*/
void sub_132ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad10ULL || rel >= 0x132ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad20 size=16 callers=0 calls=0
*/
void sub_132ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad20ULL || rel >= 0x132ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad30 size=16 callers=0 calls=0
*/
void sub_132ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad30ULL || rel >= 0x132ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad40 size=16 callers=0 calls=0
*/
void sub_132ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad40ULL || rel >= 0x132ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad50 size=16 callers=0 calls=0
*/
void sub_132ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad50ULL || rel >= 0x132ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad60 size=16 callers=0 calls=0
*/
void sub_132ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad60ULL || rel >= 0x132ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad70 size=16 callers=0 calls=0
*/
void sub_132ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad70ULL || rel >= 0x132ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ad80 size=304 callers=0 calls=0
*/
void sub_132ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ad80ULL || rel >= 0x132aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132aeb0 size=1472 callers=0 calls=9
   calls: anonymous_3, sub_14e1a30, sub_14e6550, sub_8f19b0, sub_e7eb10, sub_e7f7c0, sub_e83f20, sub_e840a0, sub_e843d0
   ref: ViewSelectMode
*/
void ViewSelectMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132aeb0ULL || rel >= 0x132b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b470 size=32 callers=8 calls=0
*/
void sub_132b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b470ULL || rel >= 0x132b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b490 size=512 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/rental_team/bin/rentalteam_menu_00_uikit.bin
   ref: bin/appli/rental_team/bin/rentalteam_menu_00_lyt.bin
*/
void rentalteam_menu_00_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b490ULL || rel >= 0x132b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b690 size=16 callers=0 calls=0
*/
void sub_132b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b690ULL || rel >= 0x132b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b6a0 size=32 callers=1 calls=0
*/
void sub_132b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b6a0ULL || rel >= 0x132b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b6c0 size=128 callers=0 calls=2
   calls: sub_e80580, sub_e806b0
*/
void sub_132b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b6c0ULL || rel >= 0x132b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b740 size=64 callers=0 calls=0
*/
void sub_132b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b740ULL || rel >= 0x132b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b780 size=96 callers=0 calls=0
*/
void sub_132b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b780ULL || rel >= 0x132b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b7e0 size=96 callers=0 calls=0
*/
void sub_132b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b7e0ULL || rel >= 0x132b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b840 size=16 callers=0 calls=0
*/
void sub_132b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b840ULL || rel >= 0x132b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b850 size=96 callers=0 calls=0
*/
void sub_132b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b850ULL || rel >= 0x132b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b8b0 size=96 callers=0 calls=0
*/
void sub_132b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b8b0ULL || rel >= 0x132b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b910 size=16 callers=0 calls=0
*/
void sub_132b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b910ULL || rel >= 0x132b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b920 size=16 callers=0 calls=0
*/
void sub_132b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b920ULL || rel >= 0x132b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b930 size=96 callers=0 calls=0
*/
void sub_132b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b930ULL || rel >= 0x132b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b990 size=96 callers=0 calls=0
*/
void sub_132b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b990ULL || rel >= 0x132b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132b9f0 size=32 callers=0 calls=0
*/
void sub_132b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132b9f0ULL || rel >= 0x132ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ba10 size=16 callers=0 calls=0
*/
void sub_132ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ba10ULL || rel >= 0x132ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ba20 size=16 callers=0 calls=0
*/
void sub_132ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ba20ULL || rel >= 0x132ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ba30 size=16 callers=0 calls=0
*/
void sub_132ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ba30ULL || rel >= 0x132ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ba40 size=304 callers=0 calls=0
*/
void sub_132ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ba40ULL || rel >= 0x132bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bb70 size=208 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_132bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bb70ULL || rel >= 0x132bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bc40 size=32 callers=38 calls=0
*/
void sub_132bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bc40ULL || rel >= 0x132bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bc60 size=80 callers=7 calls=0
*/
void sub_132bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bc60ULL || rel >= 0x132bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bcb0 size=48 callers=2 calls=0
*/
void sub_132bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bcb0ULL || rel >= 0x132bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bce0 size=48 callers=2 calls=0
*/
void sub_132bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bce0ULL || rel >= 0x132bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bd10 size=64 callers=1 calls=0
*/
void sub_132bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bd10ULL || rel >= 0x132bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bd50 size=128 callers=0 calls=0
*/
void sub_132bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bd50ULL || rel >= 0x132bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bdd0 size=128 callers=0 calls=0
*/
void sub_132bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bdd0ULL || rel >= 0x132be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132be50 size=240 callers=0 calls=0
*/
void sub_132be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132be50ULL || rel >= 0x132bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bf40 size=128 callers=0 calls=0
*/
void sub_132bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bf40ULL || rel >= 0x132bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132bfc0 size=128 callers=0 calls=0
*/
void sub_132bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132bfc0ULL || rel >= 0x132c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c040 size=16 callers=0 calls=0
*/
void sub_132c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c040ULL || rel >= 0x132c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c050 size=16 callers=0 calls=0
*/
void sub_132c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c050ULL || rel >= 0x132c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c060 size=128 callers=0 calls=0
*/
void sub_132c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c060ULL || rel >= 0x132c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c0e0 size=128 callers=0 calls=0
*/
void sub_132c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c0e0ULL || rel >= 0x132c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c160 size=160 callers=0 calls=0
*/
void sub_132c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c160ULL || rel >= 0x132c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c200 size=80 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_132c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c200ULL || rel >= 0x132c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c250 size=256 callers=1 calls=0
*/
void sub_132c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c250ULL || rel >= 0x132c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c350 size=32 callers=6 calls=0
*/
void sub_132c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c350ULL || rel >= 0x132c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c370 size=32 callers=4 calls=0
*/
void sub_132c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c370ULL || rel >= 0x132c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c390 size=32 callers=7 calls=0
*/
void sub_132c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c390ULL || rel >= 0x132c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c3b0 size=32 callers=2 calls=0
*/
void sub_132c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c3b0ULL || rel >= 0x132c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c3d0 size=160 callers=0 calls=0
*/
void sub_132c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c3d0ULL || rel >= 0x132c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c470 size=160 callers=0 calls=0
*/
void sub_132c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c470ULL || rel >= 0x132c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c510 size=16 callers=0 calls=0
*/
void sub_132c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c510ULL || rel >= 0x132c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c520 size=160 callers=0 calls=0
*/
void sub_132c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c520ULL || rel >= 0x132c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c5c0 size=160 callers=0 calls=0
*/
void sub_132c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c5c0ULL || rel >= 0x132c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c660 size=16 callers=0 calls=0
*/
void sub_132c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c660ULL || rel >= 0x132c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c670 size=16 callers=0 calls=0
*/
void sub_132c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c670ULL || rel >= 0x132c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c680 size=160 callers=0 calls=0
*/
void sub_132c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c680ULL || rel >= 0x132c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c720 size=160 callers=0 calls=0
*/
void sub_132c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c720ULL || rel >= 0x132c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132c7c0 size=848 callers=6 calls=1
   calls: sub_67b990
*/
void sub_132c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c7c0ULL || rel >= 0x132cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132cb10 size=16 callers=6 calls=0
*/
void sub_132cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cb10ULL || rel >= 0x132cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132cb20 size=160 callers=6 calls=3
   calls: sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_132cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cb20ULL || rel >= 0x132cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132cbc0 size=224 callers=13 calls=3
   calls: sub_67d450, sub_e7eb10, sub_eb8930
*/
void sub_132cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cbc0ULL || rel >= 0x132cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132cca0 size=16 callers=3 calls=0
*/
void sub_132cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cca0ULL || rel >= 0x132ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ccb0 size=48 callers=1 calls=0
*/
void sub_132ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ccb0ULL || rel >= 0x132cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132cce0 size=432 callers=0 calls=4
   calls: sub_67d450, sub_e7eb10, sub_e807f0, sub_eb8930
*/
void sub_132cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cce0ULL || rel >= 0x132ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ce90 size=48 callers=5 calls=0
*/
void sub_132ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ce90ULL || rel >= 0x132cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132cec0 size=448 callers=2 calls=3
   calls: sub_67d450, sub_e7eb10, sub_e807f0
*/
void sub_132cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132cec0ULL || rel >= 0x132d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d080 size=384 callers=4 calls=3
   calls: sub_132cec0, sub_67d450, sub_e7eb10
*/
void sub_132d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d080ULL || rel >= 0x132d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d200 size=592 callers=3 calls=3
   calls: sub_132cec0, sub_67d450, sub_e7eb10
*/
void sub_132d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d200ULL || rel >= 0x132d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d450 size=64 callers=6 calls=0
*/
void sub_132d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d450ULL || rel >= 0x132d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d490 size=64 callers=6 calls=1
   calls: sub_eb8a30
*/
void sub_132d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d490ULL || rel >= 0x132d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d4d0 size=288 callers=1 calls=3
   calls: anonymous, sub_132c7c0, sub_d0c0
   ref: StateDownloadMyTeam
*/
void StateDownloadMyTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d4d0ULL || rel >= 0x132d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d5f0 size=720 callers=0 calls=12
   calls: sub_1327b20, sub_13287c0, sub_13292a0, sub_132c350, sub_132c390, sub_132cb10, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_eb75e0, sub_eb7730
   ref: View_OptionBar
*/
void View_OptionBar_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d5f0ULL || rel >= 0x132d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132d8c0 size=1792 callers=0 calls=14
   calls: RequestDownloadMyTeam, RequestDownloadRentalTeam, sub_11009c0, sub_13287c0, sub_1329790, sub_132cb20, sub_132ce90, sub_132d450, sub_132d490, sub_132dfc0, sub_132e9d0, sub_eb7790
   ... +2 more
*/
void sub_132d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d8c0ULL || rel >= 0x132dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132dfc0 size=208 callers=3 calls=4
   calls: sub_13285f0, sub_13287c0, sub_13297f0, sub_eb77f0
*/
void sub_132dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132dfc0ULL || rel >= 0x132e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e090 size=16 callers=0 calls=0
*/
void sub_132e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e090ULL || rel >= 0x132e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e0a0 size=288 callers=0 calls=0
*/
void sub_132e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e0a0ULL || rel >= 0x132e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e1c0 size=16 callers=0 calls=0
*/
void sub_132e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e1c0ULL || rel >= 0x132e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e1d0 size=16 callers=0 calls=0
*/
void sub_132e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e1d0ULL || rel >= 0x132e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e1e0 size=16 callers=0 calls=0
*/
void sub_132e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e1e0ULL || rel >= 0x132e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e1f0 size=16 callers=0 calls=0
*/
void sub_132e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e1f0ULL || rel >= 0x132e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e200 size=16 callers=0 calls=0
*/
void sub_132e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e200ULL || rel >= 0x132e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e210 size=16 callers=0 calls=0
*/
void sub_132e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e210ULL || rel >= 0x132e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e220 size=16 callers=0 calls=0
*/
void sub_132e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e220ULL || rel >= 0x132e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e230 size=16 callers=0 calls=0
*/
void sub_132e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e230ULL || rel >= 0x132e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e240 size=304 callers=0 calls=0
*/
void sub_132e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e240ULL || rel >= 0x132e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e370 size=80 callers=0 calls=0
*/
void sub_132e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e370ULL || rel >= 0x132e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e3c0 size=64 callers=0 calls=0
*/
void sub_132e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e3c0ULL || rel >= 0x132e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e400 size=48 callers=0 calls=0
*/
void sub_132e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e400ULL || rel >= 0x132e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e430 size=48 callers=0 calls=0
*/
void sub_132e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e430ULL || rel >= 0x132e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e460 size=96 callers=0 calls=1
   calls: sub_1047680
*/
void sub_132e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e460ULL || rel >= 0x132e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e4c0 size=64 callers=0 calls=0
*/
void sub_132e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e4c0ULL || rel >= 0x132e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e500 size=48 callers=0 calls=0
*/
void sub_132e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e500ULL || rel >= 0x132e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e530 size=48 callers=0 calls=0
*/
void sub_132e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e530ULL || rel >= 0x132e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e560 size=112 callers=0 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_132e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e560ULL || rel >= 0x132e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e5d0 size=16 callers=0 calls=0
*/
void sub_132e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e5d0ULL || rel >= 0x132e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e5e0 size=16 callers=0 calls=0
*/
void sub_132e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e5e0ULL || rel >= 0x132e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e5f0 size=16 callers=0 calls=0
*/
void sub_132e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e5f0ULL || rel >= 0x132e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e600 size=16 callers=0 calls=0
*/
void sub_132e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e600ULL || rel >= 0x132e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e610 size=16 callers=0 calls=0
*/
void sub_132e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e610ULL || rel >= 0x132e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e620 size=16 callers=0 calls=0
*/
void sub_132e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e620ULL || rel >= 0x132e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e630 size=16 callers=0 calls=0
*/
void sub_132e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e630ULL || rel >= 0x132e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e640 size=208 callers=0 calls=4
   calls: sub_105b2c0, sub_107ad20, sub_13285f0, sub_132bcb0
*/
void sub_132e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e640ULL || rel >= 0x132e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e710 size=64 callers=0 calls=0
*/
void sub_132e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e710ULL || rel >= 0x132e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e750 size=48 callers=0 calls=0
*/
void sub_132e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e750ULL || rel >= 0x132e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e780 size=48 callers=0 calls=0
*/
void sub_132e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e780ULL || rel >= 0x132e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e7b0 size=96 callers=0 calls=1
   calls: sub_1047680
*/
void sub_132e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e7b0ULL || rel >= 0x132e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e810 size=64 callers=0 calls=0
*/
void sub_132e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e810ULL || rel >= 0x132e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e850 size=48 callers=0 calls=0
*/
void sub_132e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e850ULL || rel >= 0x132e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e880 size=48 callers=0 calls=0
*/
void sub_132e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e880ULL || rel >= 0x132e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e8b0 size=16 callers=0 calls=0
*/
void sub_132e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e8b0ULL || rel >= 0x132e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e8c0 size=16 callers=0 calls=0
*/
void sub_132e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e8c0ULL || rel >= 0x132e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e8d0 size=16 callers=0 calls=0
*/
void sub_132e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e8d0ULL || rel >= 0x132e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e8e0 size=16 callers=0 calls=0
*/
void sub_132e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e8e0ULL || rel >= 0x132e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e8f0 size=16 callers=0 calls=0
*/
void sub_132e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e8f0ULL || rel >= 0x132e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e900 size=16 callers=0 calls=0
*/
void sub_132e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e900ULL || rel >= 0x132e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e910 size=16 callers=0 calls=0
*/
void sub_132e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e910ULL || rel >= 0x132e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e920 size=16 callers=0 calls=0
*/
void sub_132e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e920ULL || rel >= 0x132e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e930 size=160 callers=0 calls=0
*/
void sub_132e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e930ULL || rel >= 0x132e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132e9d0 size=48 callers=4 calls=0
*/
void sub_132e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e9d0ULL || rel >= 0x132ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ea00 size=272 callers=1 calls=3
   calls: anonymous, sub_132c7c0, sub_d0c0
   ref: StateUploadTeamMenu
*/
void StateUploadTeamMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ea00ULL || rel >= 0x132eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132eb10 size=992 callers=0 calls=18
   calls: sub_1327b20, sub_1328090, sub_13287c0, sub_13292a0, sub_132c350, sub_132c370, sub_132c390, sub_132cb10, sub_132eef0, sub_1331380, sub_1331d70, sub_142ec00
   ... +6 more
   ref: UploadTeamView
   ref: View_OptionBar
*/
void View_OptionBar_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132eb10ULL || rel >= 0x132eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132eef0 size=592 callers=1 calls=5
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_132eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132eef0ULL || rel >= 0x132f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132f140 size=1712 callers=0 calls=21
   calls: RequestDeleteRentalTeam, sub_1328090, sub_13285f0, sub_13287c0, sub_1329790, sub_132bd10, sub_132cb20, sub_132cbc0, sub_132cca0, sub_132ce90, sub_132d450, sub_132e9d0
   ... +9 more
*/
void sub_132f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132f140ULL || rel >= 0x132f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132f7f0 size=272 callers=1 calls=5
   calls: sub_1328090, sub_13285f0, sub_1331e70, sub_1432fc0, sub_1433520
*/
void sub_132f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132f7f0ULL || rel >= 0x132f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132f900 size=960 callers=1 calls=7
   calls: sub_1328090, sub_13285f0, sub_132bc40, sub_132bc60, sub_132d080, sub_132d200, sub_1331ec0
*/
void sub_132f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132f900ULL || rel >= 0x132fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132fcc0 size=208 callers=2 calls=4
   calls: sub_13285f0, sub_13287c0, sub_13297f0, sub_eb77f0
*/
void sub_132fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132fcc0ULL || rel >= 0x132fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132fd90 size=16 callers=0 calls=0
*/
void sub_132fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132fd90ULL || rel >= 0x132fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132fda0 size=320 callers=0 calls=0
*/
void sub_132fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132fda0ULL || rel >= 0x132fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132fee0 size=16 callers=0 calls=0
*/
void sub_132fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132fee0ULL || rel >= 0x132fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132fef0 size=16 callers=0 calls=0
*/
void sub_132fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132fef0ULL || rel >= 0x132ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff00 size=16 callers=0 calls=0
*/
void sub_132ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff00ULL || rel >= 0x132ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff10 size=16 callers=0 calls=0
*/
void sub_132ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff10ULL || rel >= 0x132ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff20 size=16 callers=0 calls=0
*/
void sub_132ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff20ULL || rel >= 0x132ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff30 size=16 callers=0 calls=0
*/
void sub_132ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff30ULL || rel >= 0x132ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff40 size=16 callers=0 calls=0
*/
void sub_132ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff40ULL || rel >= 0x132ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff50 size=16 callers=0 calls=0
*/
void sub_132ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff50ULL || rel >= 0x132ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0132ff60 size=304 callers=0 calls=0
*/
void sub_132ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132ff60ULL || rel >= 0x1330090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330090 size=160 callers=0 calls=3
   calls: sub_13285f0, sub_132bce0, sub_132d490
*/
void sub_1330090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330090ULL || rel >= 0x1330130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330130 size=64 callers=0 calls=0
*/
void sub_1330130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330130ULL || rel >= 0x1330170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330170 size=48 callers=0 calls=0
*/
void sub_1330170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330170ULL || rel >= 0x13301a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013301a0 size=48 callers=0 calls=0
*/
void sub_13301a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13301a0ULL || rel >= 0x13301d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013301d0 size=112 callers=0 calls=1
   calls: sub_1047680
*/
void sub_13301d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13301d0ULL || rel >= 0x1330240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330240 size=64 callers=0 calls=0
*/
void sub_1330240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330240ULL || rel >= 0x1330280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330280 size=48 callers=0 calls=0
*/
void sub_1330280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330280ULL || rel >= 0x13302b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013302b0 size=48 callers=0 calls=0
*/
void sub_13302b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13302b0ULL || rel >= 0x13302e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013302e0 size=32 callers=0 calls=0
*/
void sub_13302e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13302e0ULL || rel >= 0x1330300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330300 size=16 callers=0 calls=0
*/
void sub_1330300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330300ULL || rel >= 0x1330310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330310 size=16 callers=0 calls=0
*/
void sub_1330310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330310ULL || rel >= 0x1330320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330320 size=16 callers=0 calls=0
*/
void sub_1330320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330320ULL || rel >= 0x1330330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330330 size=16 callers=0 calls=0
*/
void sub_1330330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330330ULL || rel >= 0x1330340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330340 size=16 callers=0 calls=0
*/
void sub_1330340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330340ULL || rel >= 0x1330350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330350 size=16 callers=0 calls=0
*/
void sub_1330350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330350ULL || rel >= 0x1330360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330360 size=16 callers=0 calls=0
*/
void sub_1330360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330360ULL || rel >= 0x1330370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330370 size=80 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_1330370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330370ULL || rel >= 0x13303c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013303c0 size=16 callers=0 calls=0
*/
void sub_13303c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13303c0ULL || rel >= 0x13303d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013303d0 size=16 callers=0 calls=0
*/
void sub_13303d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13303d0ULL || rel >= 0x13303e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013303e0 size=16 callers=0 calls=0
*/
void sub_13303e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13303e0ULL || rel >= 0x13303f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013303f0 size=16 callers=0 calls=0
*/
void sub_13303f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13303f0ULL || rel >= 0x1330400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330400 size=16 callers=0 calls=0
*/
void sub_1330400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330400ULL || rel >= 0x1330410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330410 size=16 callers=0 calls=0
*/
void sub_1330410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330410ULL || rel >= 0x1330420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330420 size=16 callers=0 calls=0
*/
void sub_1330420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330420ULL || rel >= 0x1330430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330430 size=16 callers=0 calls=0
*/
void sub_1330430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330430ULL || rel >= 0x1330440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330440 size=16 callers=0 calls=0
*/
void sub_1330440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330440ULL || rel >= 0x1330450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330450 size=16 callers=0 calls=0
*/
void sub_1330450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330450ULL || rel >= 0x1330460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330460 size=16 callers=0 calls=0
*/
void sub_1330460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330460ULL || rel >= 0x1330470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330470 size=16 callers=0 calls=0
*/
void sub_1330470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330470ULL || rel >= 0x1330480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330480 size=16 callers=0 calls=0
*/
void sub_1330480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330480ULL || rel >= 0x1330490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330490 size=16 callers=0 calls=0
*/
void sub_1330490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330490ULL || rel >= 0x13304a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013304a0 size=16 callers=0 calls=0
*/
void sub_13304a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13304a0ULL || rel >= 0x13304b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013304b0 size=112 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_13304b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13304b0ULL || rel >= 0x1330520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330520 size=16 callers=0 calls=0
*/
void sub_1330520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330520ULL || rel >= 0x1330530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330530 size=16 callers=0 calls=0
*/
void sub_1330530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330530ULL || rel >= 0x1330540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330540 size=16 callers=0 calls=0
*/
void sub_1330540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330540ULL || rel >= 0x1330550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330550 size=16 callers=0 calls=0
*/
void sub_1330550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330550ULL || rel >= 0x1330560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330560 size=16 callers=0 calls=0
*/
void sub_1330560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330560ULL || rel >= 0x1330570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330570 size=16 callers=0 calls=0
*/
void sub_1330570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330570ULL || rel >= 0x1330580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330580 size=16 callers=0 calls=0
*/
void sub_1330580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330580ULL || rel >= 0x1330590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330590 size=112 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_1330590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330590ULL || rel >= 0x1330600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330600 size=16 callers=0 calls=0
*/
void sub_1330600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330600ULL || rel >= 0x1330610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330610 size=16 callers=0 calls=0
*/
void sub_1330610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330610ULL || rel >= 0x1330620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330620 size=16 callers=0 calls=0
*/
void sub_1330620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330620ULL || rel >= 0x1330630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330630 size=16 callers=0 calls=0
*/
void sub_1330630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330630ULL || rel >= 0x1330640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330640 size=16 callers=0 calls=0
*/
void sub_1330640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330640ULL || rel >= 0x1330650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330650 size=16 callers=0 calls=0
*/
void sub_1330650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330650ULL || rel >= 0x1330660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330660 size=16 callers=0 calls=0
*/
void sub_1330660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330660ULL || rel >= 0x1330670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330670 size=160 callers=0 calls=0
*/
void sub_1330670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330670ULL || rel >= 0x1330710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01330710 size=3184 callers=1 calls=5
   calls: sub_1331380, sub_1332440, sub_1332690, sub_1435450, sub_5e2350
*/
void sub_1330710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1330710ULL || rel >= 0x1331380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331380 size=1568 callers=11 calls=8
   calls: sub_13285f0, sub_132bc60, sub_13319a0, sub_1376420, sub_1435450, sub_67be60, sub_7847d0, sub_785110
*/
void sub_1331380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331380ULL || rel >= 0x13319a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013319a0 size=944 callers=1 calls=9
   calls: sub_1332440, sub_134f490, sub_1353ad0, sub_1353b00, sub_1353b30, sub_1353ec0, sub_1435270, sub_1435450, sub_67be60
*/
void sub_13319a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13319a0ULL || rel >= 0x1331d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331d50 size=16 callers=9 calls=0
*/
void sub_1331d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331d50ULL || rel >= 0x1331d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331d60 size=16 callers=2 calls=0
*/
void sub_1331d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331d60ULL || rel >= 0x1331d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331d70 size=16 callers=2 calls=0
*/
void sub_1331d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331d70ULL || rel >= 0x1331d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331d80 size=176 callers=2 calls=1
   calls: sub_7847d0
*/
void sub_1331d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331d80ULL || rel >= 0x1331e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331e30 size=64 callers=1 calls=0
*/
void sub_1331e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331e30ULL || rel >= 0x1331e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331e70 size=64 callers=1 calls=0
*/
void sub_1331e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331e70ULL || rel >= 0x1331eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331eb0 size=16 callers=2 calls=0
*/
void sub_1331eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331eb0ULL || rel >= 0x1331ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331ec0 size=16 callers=5 calls=0
*/
void sub_1331ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331ec0ULL || rel >= 0x1331ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331ed0 size=224 callers=1 calls=7
   calls: sub_136b530, sub_136b580, sub_136b770, sub_67bdb0, sub_784e40, sub_7c2280, sub_7c2d80
*/
void sub_1331ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331ed0ULL || rel >= 0x1331fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01331fb0 size=816 callers=0 calls=0
*/
void sub_1331fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1331fb0ULL || rel >= 0x13322e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013322e0 size=16 callers=0 calls=0
*/
void sub_13322e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13322e0ULL || rel >= 0x13322f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013322f0 size=240 callers=0 calls=0
*/
void sub_13322f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13322f0ULL || rel >= 0x13323e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013323e0 size=16 callers=0 calls=0
*/
void sub_13323e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13323e0ULL || rel >= 0x13323f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013323f0 size=16 callers=0 calls=0
*/
void sub_13323f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13323f0ULL || rel >= 0x1332400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332400 size=16 callers=0 calls=0
*/
void sub_1332400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332400ULL || rel >= 0x1332410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332410 size=16 callers=0 calls=0
*/
void sub_1332410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332410ULL || rel >= 0x1332420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332420 size=16 callers=0 calls=0
*/
void sub_1332420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332420ULL || rel >= 0x1332430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332430 size=16 callers=0 calls=0
*/
void sub_1332430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332430ULL || rel >= 0x1332440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332440 size=592 callers=3 calls=1
   calls: sub_1434ea0
*/
void sub_1332440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332440ULL || rel >= 0x1332690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332690 size=448 callers=3 calls=0
*/
void sub_1332690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332690ULL || rel >= 0x1332850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332850 size=272 callers=1 calls=3
   calls: anonymous, sub_132c7c0, sub_d0c0
   ref: StateDownloadTeamMenu
*/
void StateDownloadTeamMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332850ULL || rel >= 0x1332960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332960 size=1024 callers=0 calls=19
   calls: sub_1327b20, sub_1328090, sub_13287c0, sub_13292a0, sub_132c350, sub_132c370, sub_132c390, sub_132c3b0, sub_132cb10, sub_1331380, sub_1331d60, sub_1332d60
   ... +7 more
   ref: DownloadTeamView
   ref: View_OptionBar
*/
void DownloadTeamView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332960ULL || rel >= 0x1332d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332d60 size=592 callers=1 calls=5
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_1332d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332d60ULL || rel >= 0x1332fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01332fb0 size=1712 callers=0 calls=18
   calls: RequestDownloadRentalTeam, sub_13285f0, sub_13287c0, sub_1329790, sub_132cb20, sub_132cbc0, sub_132cca0, sub_132ce90, sub_132d450, sub_132e9d0, sub_1333660, sub_1333770
   ... +6 more
*/
void sub_1332fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1332fb0ULL || rel >= 0x1333660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333660 size=272 callers=1 calls=5
   calls: sub_1328090, sub_13285f0, sub_1331e30, sub_1432fc0, sub_1433520
*/
void sub_1333660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333660ULL || rel >= 0x1333770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333770 size=1120 callers=1 calls=9
   calls: sub_1328090, sub_13285f0, sub_132bc40, sub_132d080, sub_132d200, sub_1331ec0, sub_1333fb0, sub_1334c20, sub_1376420
*/
void sub_1333770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333770ULL || rel >= 0x1333bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333bd0 size=208 callers=1 calls=4
   calls: sub_13285f0, sub_13287c0, sub_13297f0, sub_eb77f0
*/
void sub_1333bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333bd0ULL || rel >= 0x1333ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333ca0 size=16 callers=0 calls=0
*/
void sub_1333ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333ca0ULL || rel >= 0x1333cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333cb0 size=336 callers=0 calls=0
*/
void sub_1333cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333cb0ULL || rel >= 0x1333e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e00 size=16 callers=0 calls=0
*/
void sub_1333e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e00ULL || rel >= 0x1333e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e10 size=16 callers=0 calls=0
*/
void sub_1333e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e10ULL || rel >= 0x1333e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e20 size=16 callers=0 calls=0
*/
void sub_1333e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e20ULL || rel >= 0x1333e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e30 size=16 callers=0 calls=0
*/
void sub_1333e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e30ULL || rel >= 0x1333e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e40 size=16 callers=0 calls=0
*/
void sub_1333e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e40ULL || rel >= 0x1333e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e50 size=16 callers=0 calls=0
*/
void sub_1333e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e50ULL || rel >= 0x1333e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e60 size=16 callers=0 calls=0
*/
void sub_1333e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e60ULL || rel >= 0x1333e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e70 size=16 callers=0 calls=0
*/
void sub_1333e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e70ULL || rel >= 0x1333e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333e80 size=304 callers=0 calls=0
*/
void sub_1333e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333e80ULL || rel >= 0x1333fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01333fb0 size=464 callers=6 calls=0
*/
void sub_1333fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1333fb0ULL || rel >= 0x1334180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334180 size=416 callers=0 calls=5
   calls: sub_13285f0, sub_132d490, sub_1333fb0, sub_1335370, sub_67bdb0
*/
void sub_1334180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334180ULL || rel >= 0x1334320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334320 size=64 callers=0 calls=0
*/
void sub_1334320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334320ULL || rel >= 0x1334360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334360 size=48 callers=0 calls=0
*/
void sub_1334360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334360ULL || rel >= 0x1334390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334390 size=48 callers=0 calls=0
*/
void sub_1334390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334390ULL || rel >= 0x13343c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013343c0 size=160 callers=0 calls=3
   calls: sub_1047680, sub_13285f0, sub_132d490
*/
void sub_13343c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13343c0ULL || rel >= 0x1334460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334460 size=64 callers=0 calls=0
*/
void sub_1334460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334460ULL || rel >= 0x13344a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013344a0 size=48 callers=0 calls=0
*/
void sub_13344a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13344a0ULL || rel >= 0x13344d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013344d0 size=48 callers=0 calls=0
*/
void sub_13344d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13344d0ULL || rel >= 0x1334500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334500 size=352 callers=0 calls=4
   calls: sub_1328090, sub_13285f0, sub_132bc40, sub_1331ec0
*/
void sub_1334500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334500ULL || rel >= 0x1334660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

