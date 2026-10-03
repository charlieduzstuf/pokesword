/* main functions 00ae8d10..00afa580 (84 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00ae8d10 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ae8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8d10ULL || rel >= 0xae8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8d80 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ae8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8d80ULL || rel >= 0xae8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8df0 size=16 callers=0 calls=0
*/
void sub_ae8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8df0ULL || rel >= 0xae8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8e00 size=16 callers=0 calls=0
*/
void sub_ae8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8e00ULL || rel >= 0xae8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8e10 size=16 callers=0 calls=0
*/
void sub_ae8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8e10ULL || rel >= 0xae8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8e20 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ae8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8e20ULL || rel >= 0xae8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8e60 size=32 callers=0 calls=0
*/
void sub_ae8e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8e60ULL || rel >= 0xae8e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8e80 size=16 callers=0 calls=0
*/
void sub_ae8e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8e80ULL || rel >= 0xae8e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8e90 size=16 callers=0 calls=0
*/
void sub_ae8e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8e90ULL || rel >= 0xae8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8ea0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ae8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8ea0ULL || rel >= 0xae8f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8f00 size=16 callers=0 calls=0
*/
void sub_ae8f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8f00ULL || rel >= 0xae8f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8f10 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ae8f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8f10ULL || rel >= 0xae8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8f50 size=32 callers=0 calls=0
*/
void sub_ae8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8f50ULL || rel >= 0xae8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8f70 size=16 callers=0 calls=0
*/
void sub_ae8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8f70ULL || rel >= 0xae8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8f80 size=16 callers=0 calls=0
*/
void sub_ae8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8f80ULL || rel >= 0xae8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8f90 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ae8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8f90ULL || rel >= 0xae8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae8ff0 size=16 callers=0 calls=0
*/
void sub_ae8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae8ff0ULL || rel >= 0xae9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9000 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ae9000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9000ULL || rel >= 0xae9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9040 size=32 callers=0 calls=0
*/
void sub_ae9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9040ULL || rel >= 0xae9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9060 size=16 callers=0 calls=0
*/
void sub_ae9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9060ULL || rel >= 0xae9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9070 size=16 callers=0 calls=0
*/
void sub_ae9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9070ULL || rel >= 0xae9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9080 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ae9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9080ULL || rel >= 0xae90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae90e0 size=16 callers=0 calls=0
*/
void sub_ae90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae90e0ULL || rel >= 0xae90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae90f0 size=16 callers=0 calls=0
*/
void sub_ae90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae90f0ULL || rel >= 0xae9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9100 size=16 callers=0 calls=0
*/
void sub_ae9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9100ULL || rel >= 0xae9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9110 size=16 callers=0 calls=0
*/
void sub_ae9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9110ULL || rel >= 0xae9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae9120 size=176 callers=0 calls=3
   calls: sub_acdd40, sub_ace030, sub_ae91d0
   ref: pane_P_icon_detail_f_00
*/
void pane_P_icon_detail_f_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae9120ULL || rel >= 0xae91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae91d0 size=464 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_ae91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae91d0ULL || rel >= 0xae93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae93a0 size=5296 callers=2 calls=13
   calls: player_icon_table_2, sub_1311c60, sub_1313430, sub_1314a80, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_acf3e0, sub_acfd90, sub_ad0610
   ... +1 more
   ref: pane_T_detail_f_06
   ref: pane_T_detail_f_09
   ref: pane_T_detail_f_11
   ref: pane_T_detail_f_00
   ref: pane_T_detail_f_05
   ref: pane_T_detail_f_03
   ref: pane_T_detail_f_19
   ref: pane_T_detail_f_10
*/
void pane_T_detail_f_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae93a0ULL || rel >= 0xaea850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aea850 size=32 callers=1 calls=0
*/
void sub_aea850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaea850ULL || rel >= 0xaea870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aea870 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_detail_btlcup_friend_00_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_detail_btlcup_friend_00_lyt.bin
*/
void uikit_btlspot_detail_btlcup_friend_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaea870ULL || rel >= 0xaeaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeaa50 size=576 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_aeaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeaa50ULL || rel >= 0xaeac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeac90 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_aeac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeac90ULL || rel >= 0xaeacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeacb0 size=32 callers=1 calls=0
*/
void sub_aeacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeacb0ULL || rel >= 0xaeacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeacd0 size=96 callers=0 calls=0
*/
void sub_aeacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeacd0ULL || rel >= 0xaead30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aead30 size=96 callers=0 calls=0
*/
void sub_aead30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaead30ULL || rel >= 0xaead90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aead90 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aead90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaead90ULL || rel >= 0xaeae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeae00 size=96 callers=0 calls=0
*/
void sub_aeae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeae00ULL || rel >= 0xaeae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeae60 size=96 callers=0 calls=0
*/
void sub_aeae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeae60ULL || rel >= 0xaeaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeaec0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aeaec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeaec0ULL || rel >= 0xaeaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeaf30 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aeaf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeaf30ULL || rel >= 0xaeafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeafa0 size=96 callers=0 calls=0
*/
void sub_aeafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeafa0ULL || rel >= 0xaeb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb000 size=96 callers=0 calls=0
*/
void sub_aeb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb000ULL || rel >= 0xaeb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb060 size=80 callers=0 calls=1
   calls: sub_14ab0c0
*/
void sub_aeb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb060ULL || rel >= 0xaeb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb0b0 size=16 callers=0 calls=0
*/
void sub_aeb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb0b0ULL || rel >= 0xaeb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb0c0 size=16 callers=0 calls=0
*/
void sub_aeb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb0c0ULL || rel >= 0xaeb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb0d0 size=16 callers=0 calls=0
*/
void sub_aeb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb0d0ULL || rel >= 0xaeb0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb0e0 size=16 callers=0 calls=0
*/
void sub_aeb0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb0e0ULL || rel >= 0xaeb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb0f0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb0f0ULL || rel >= 0xaeb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb130 size=32 callers=0 calls=0
*/
void sub_aeb130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb130ULL || rel >= 0xaeb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb150 size=16 callers=0 calls=0
*/
void sub_aeb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb150ULL || rel >= 0xaeb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb160 size=16 callers=0 calls=0
*/
void sub_aeb160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb160ULL || rel >= 0xaeb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb170 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb170ULL || rel >= 0xaeb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb1d0 size=16 callers=0 calls=0
*/
void sub_aeb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb1d0ULL || rel >= 0xaeb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb1e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb1e0ULL || rel >= 0xaeb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb220 size=32 callers=0 calls=0
*/
void sub_aeb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb220ULL || rel >= 0xaeb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb240 size=16 callers=0 calls=0
*/
void sub_aeb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb240ULL || rel >= 0xaeb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb250 size=16 callers=0 calls=0
*/
void sub_aeb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb250ULL || rel >= 0xaeb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb260 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb260ULL || rel >= 0xaeb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb2c0 size=16 callers=0 calls=0
*/
void sub_aeb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb2c0ULL || rel >= 0xaeb2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb2d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb2d0ULL || rel >= 0xaeb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb310 size=32 callers=0 calls=0
*/
void sub_aeb310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb310ULL || rel >= 0xaeb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb330 size=16 callers=0 calls=0
*/
void sub_aeb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb330ULL || rel >= 0xaeb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb340 size=16 callers=0 calls=0
*/
void sub_aeb340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb340ULL || rel >= 0xaeb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb350 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb350ULL || rel >= 0xaeb3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb3b0 size=16 callers=0 calls=0
*/
void sub_aeb3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb3b0ULL || rel >= 0xaeb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb3c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb3c0ULL || rel >= 0xaeb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb400 size=32 callers=0 calls=0
*/
void sub_aeb400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb400ULL || rel >= 0xaeb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb420 size=16 callers=0 calls=0
*/
void sub_aeb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb420ULL || rel >= 0xaeb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb430 size=16 callers=0 calls=0
*/
void sub_aeb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb430ULL || rel >= 0xaeb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb440 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb440ULL || rel >= 0xaeb4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb4a0 size=16 callers=0 calls=0
*/
void sub_aeb4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb4a0ULL || rel >= 0xaeb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb4b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb4b0ULL || rel >= 0xaeb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb4f0 size=32 callers=0 calls=0
*/
void sub_aeb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb4f0ULL || rel >= 0xaeb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb510 size=16 callers=0 calls=0
*/
void sub_aeb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb510ULL || rel >= 0xaeb520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb520 size=16 callers=0 calls=0
*/
void sub_aeb520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb520ULL || rel >= 0xaeb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb530 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb530ULL || rel >= 0xaeb590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb590 size=16 callers=0 calls=0
*/
void sub_aeb590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb590ULL || rel >= 0xaeb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb5a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb5a0ULL || rel >= 0xaeb5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb5e0 size=32 callers=0 calls=0
*/
void sub_aeb5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb5e0ULL || rel >= 0xaeb600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb600 size=16 callers=0 calls=0
*/
void sub_aeb600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb600ULL || rel >= 0xaeb610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb610 size=16 callers=0 calls=0
*/
void sub_aeb610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb610ULL || rel >= 0xaeb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb620 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb620ULL || rel >= 0xaeb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb680 size=16 callers=0 calls=0
*/
void sub_aeb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb680ULL || rel >= 0xaeb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb690 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb690ULL || rel >= 0xaeb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb6d0 size=32 callers=0 calls=0
*/
void sub_aeb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb6d0ULL || rel >= 0xaeb6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb6f0 size=16 callers=0 calls=0
*/
void sub_aeb6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb6f0ULL || rel >= 0xaeb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb700 size=16 callers=0 calls=0
*/
void sub_aeb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb700ULL || rel >= 0xaeb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb710 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb710ULL || rel >= 0xaeb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb770 size=176 callers=0 calls=3
   calls: sub_acdd40, sub_ace030, sub_aeb820
   ref: pane_P_icon_detail_t_00
*/
void pane_P_icon_detail_t_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb770ULL || rel >= 0xaeb820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb820 size=464 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_aeb820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb820ULL || rel >= 0xaeb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeb9f0 size=4544 callers=2 calls=13
   calls: player_icon_table_2, sub_1311c60, sub_1313430, sub_1314a80, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_acf3e0, sub_acfd90, sub_ad0610
   ... +1 more
   ref: pane_T_detail_t_04
   ref: pane_T_detail__06
   ref: pane_T_detail_t_01
   ref: pane_T_detail_t_15
   ref: pane_T_detail_t_17
   ref: pane_T_detail_t_18
   ref: pane_T_detail_t_19
   ref: pane_T_detail_t_05
*/
void pane_T_detail_t_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeb9f0ULL || rel >= 0xaecbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecbb0 size=32 callers=1 calls=0
*/
void sub_aecbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecbb0ULL || rel >= 0xaecbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecbd0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_detail_btlcup_00_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_detail_btlcup_00_lyt.bin
*/
void uikit_btlspot_detail_btlcup_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecbd0ULL || rel >= 0xaecdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecdb0 size=208 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_aecdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecdb0ULL || rel >= 0xaece80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aece80 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_aece80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaece80ULL || rel >= 0xaecea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecea0 size=32 callers=2 calls=0
*/
void sub_aecea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecea0ULL || rel >= 0xaecec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecec0 size=96 callers=0 calls=0
*/
void sub_aecec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecec0ULL || rel >= 0xaecf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecf20 size=96 callers=0 calls=0
*/
void sub_aecf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecf20ULL || rel >= 0xaecf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecf80 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aecf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecf80ULL || rel >= 0xaecff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aecff0 size=96 callers=0 calls=0
*/
void sub_aecff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaecff0ULL || rel >= 0xaed050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed050 size=96 callers=0 calls=0
*/
void sub_aed050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed050ULL || rel >= 0xaed0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed0b0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aed0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed0b0ULL || rel >= 0xaed120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed120 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aed120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed120ULL || rel >= 0xaed190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed190 size=96 callers=0 calls=0
*/
void sub_aed190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed190ULL || rel >= 0xaed1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed1f0 size=96 callers=0 calls=0
*/
void sub_aed1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed1f0ULL || rel >= 0xaed250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed250 size=80 callers=0 calls=1
   calls: sub_14ab0c0
*/
void sub_aed250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed250ULL || rel >= 0xaed2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed2a0 size=16 callers=0 calls=0
*/
void sub_aed2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed2a0ULL || rel >= 0xaed2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed2b0 size=16 callers=0 calls=0
*/
void sub_aed2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed2b0ULL || rel >= 0xaed2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed2c0 size=16 callers=0 calls=0
*/
void sub_aed2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed2c0ULL || rel >= 0xaed2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed2d0 size=16 callers=0 calls=0
*/
void sub_aed2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed2d0ULL || rel >= 0xaed2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed2e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aed2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed2e0ULL || rel >= 0xaed320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed320 size=32 callers=0 calls=0
*/
void sub_aed320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed320ULL || rel >= 0xaed340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed340 size=16 callers=0 calls=0
*/
void sub_aed340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed340ULL || rel >= 0xaed350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed350 size=16 callers=0 calls=0
*/
void sub_aed350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed350ULL || rel >= 0xaed360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed360 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aed360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed360ULL || rel >= 0xaed3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed3c0 size=16 callers=0 calls=0
*/
void sub_aed3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed3c0ULL || rel >= 0xaed3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed3d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aed3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed3d0ULL || rel >= 0xaed410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed410 size=32 callers=0 calls=0
*/
void sub_aed410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed410ULL || rel >= 0xaed430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed430 size=16 callers=0 calls=0
*/
void sub_aed430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed430ULL || rel >= 0xaed440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed440 size=16 callers=0 calls=0
*/
void sub_aed440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed440ULL || rel >= 0xaed450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed450 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aed450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed450ULL || rel >= 0xaed4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed4b0 size=576 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_aed4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed4b0ULL || rel >= 0xaed6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed6f0 size=16 callers=0 calls=0
*/
void sub_aed6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed6f0ULL || rel >= 0xaed700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed700 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aed700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed700ULL || rel >= 0xaed740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed740 size=32 callers=0 calls=0
*/
void sub_aed740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed740ULL || rel >= 0xaed760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed760 size=16 callers=0 calls=0
*/
void sub_aed760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed760ULL || rel >= 0xaed770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed770 size=16 callers=0 calls=0
*/
void sub_aed770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed770ULL || rel >= 0xaed780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed780 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aed780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed780ULL || rel >= 0xaed7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed7e0 size=16 callers=0 calls=0
*/
void sub_aed7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed7e0ULL || rel >= 0xaed7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed7f0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aed7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed7f0ULL || rel >= 0xaed830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed830 size=32 callers=0 calls=0
*/
void sub_aed830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed830ULL || rel >= 0xaed850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed850 size=16 callers=0 calls=0
*/
void sub_aed850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed850ULL || rel >= 0xaed860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed860 size=16 callers=0 calls=0
*/
void sub_aed860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed860ULL || rel >= 0xaed870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed870 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aed870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed870ULL || rel >= 0xaed8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed8d0 size=16 callers=0 calls=0
*/
void sub_aed8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed8d0ULL || rel >= 0xaed8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed8e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aed8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed8e0ULL || rel >= 0xaed920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed920 size=32 callers=0 calls=0
*/
void sub_aed920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed920ULL || rel >= 0xaed940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed940 size=16 callers=0 calls=0
*/
void sub_aed940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed940ULL || rel >= 0xaed950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed950 size=16 callers=0 calls=0
*/
void sub_aed950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed950ULL || rel >= 0xaed960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed960 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aed960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed960ULL || rel >= 0xaed9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed9c0 size=16 callers=0 calls=0
*/
void sub_aed9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed9c0ULL || rel >= 0xaed9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aed9d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aed9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaed9d0ULL || rel >= 0xaeda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeda10 size=32 callers=0 calls=0
*/
void sub_aeda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeda10ULL || rel >= 0xaeda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeda30 size=16 callers=0 calls=0
*/
void sub_aeda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeda30ULL || rel >= 0xaeda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeda40 size=16 callers=0 calls=0
*/
void sub_aeda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeda40ULL || rel >= 0xaeda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeda50 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeda50ULL || rel >= 0xaedab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedab0 size=16 callers=0 calls=0
*/
void sub_aedab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedab0ULL || rel >= 0xaedac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedac0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aedac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedac0ULL || rel >= 0xaedb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedb00 size=32 callers=0 calls=0
*/
void sub_aedb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedb00ULL || rel >= 0xaedb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedb20 size=16 callers=0 calls=0
*/
void sub_aedb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedb20ULL || rel >= 0xaedb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedb30 size=16 callers=0 calls=0
*/
void sub_aedb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedb30ULL || rel >= 0xaedb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedb40 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aedb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedb40ULL || rel >= 0xaedba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedba0 size=16 callers=0 calls=0
*/
void sub_aedba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedba0ULL || rel >= 0xaedbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedbb0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aedbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedbb0ULL || rel >= 0xaedbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedbf0 size=32 callers=0 calls=0
*/
void sub_aedbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedbf0ULL || rel >= 0xaedc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedc10 size=16 callers=0 calls=0
*/
void sub_aedc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedc10ULL || rel >= 0xaedc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedc20 size=16 callers=0 calls=0
*/
void sub_aedc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedc20ULL || rel >= 0xaedc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedc30 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aedc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedc30ULL || rel >= 0xaedc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedc90 size=16 callers=0 calls=0
*/
void sub_aedc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedc90ULL || rel >= 0xaedca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedca0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aedca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedca0ULL || rel >= 0xaedce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedce0 size=32 callers=0 calls=0
*/
void sub_aedce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedce0ULL || rel >= 0xaedd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedd00 size=16 callers=0 calls=0
*/
void sub_aedd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedd00ULL || rel >= 0xaedd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedd10 size=16 callers=0 calls=0
*/
void sub_aedd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedd10ULL || rel >= 0xaedd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedd20 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aedd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedd20ULL || rel >= 0xaedd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedd80 size=208 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_aedd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedd80ULL || rel >= 0xaede50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aede50 size=16 callers=0 calls=0
*/
void sub_aede50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaede50ULL || rel >= 0xaede60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aede60 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aede60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaede60ULL || rel >= 0xaedea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedea0 size=32 callers=0 calls=0
*/
void sub_aedea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedea0ULL || rel >= 0xaedec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedec0 size=16 callers=0 calls=0
*/
void sub_aedec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedec0ULL || rel >= 0xaeded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeded0 size=16 callers=0 calls=0
*/
void sub_aeded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeded0ULL || rel >= 0xaedee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedee0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aedee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedee0ULL || rel >= 0xaedf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedf40 size=16 callers=0 calls=0
*/
void sub_aedf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedf40ULL || rel >= 0xaedf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedf50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aedf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedf50ULL || rel >= 0xaedf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedf90 size=32 callers=0 calls=0
*/
void sub_aedf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedf90ULL || rel >= 0xaedfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedfb0 size=16 callers=0 calls=0
*/
void sub_aedfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedfb0ULL || rel >= 0xaedfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedfc0 size=16 callers=0 calls=0
*/
void sub_aedfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedfc0ULL || rel >= 0xaedfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aedfd0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aedfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaedfd0ULL || rel >= 0xaee030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aee030 size=112 callers=0 calls=5
   calls: sub_14e1b40, sub_acdd40, sub_acdfb0, sub_acf300, sub_e840a0
   ref: pane_N_menu_rankmatch_detail
   ref: grid_Menu
*/
void pane_N_menu_rankmatch_detail(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaee030ULL || rel >= 0xaee0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aee0a0 size=64 callers=1 calls=2
   calls: sub_acf300, sub_e840a0
   ref: grid_Menu
*/
void grid_Menu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaee0a0ULL || rel >= 0xaee0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aee0e0 size=32 callers=1 calls=0
*/
void sub_aee0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaee0e0ULL || rel >= 0xaee100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aee100 size=2000 callers=1 calls=4
   calls: sub_67bdb0, sub_67d450, sub_adaea0, sub_e83ac0
   ref: pane_L_rankmatch_button_01_T_button_l_00
   ref: pane_T_rank_detail_04
   ref: pane_L_rankmatch_rank_00_T_rank_02
   ref: pane_T_x_button_00
   ref: L_rankmatch_rank_00
   ref: pane_T_rank_detail_02
   ref: pane_T_rank_detail_00
   ref: pane_L_rankmatch_button_00_T_button_l_00
*/
void pane_T_rank_detail_04(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaee100ULL || rel >= 0xaee8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aee8d0 size=832 callers=2 calls=6
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_acf3e0, sub_e83ac0
   ref: pane_T_rankmatch_00
*/
void pane_T_rankmatch_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaee8d0ULL || rel >= 0xaeec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeec10 size=576 callers=3 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_rank_detail_01
*/
void pane_T_rank_detail_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeec10ULL || rel >= 0xaeee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeee50 size=576 callers=3 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_rank_detail_03
*/
void pane_T_rank_detail_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeee50ULL || rel >= 0xaef090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef090 size=576 callers=2 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_rank_detail_05
*/
void pane_T_rank_detail_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef090ULL || rel >= 0xaef2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef2d0 size=32 callers=1 calls=1
   calls: sub_e840a0
   ref: grid_Menu
*/
void grid_Menu_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef2d0ULL || rel >= 0xaef2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef2f0 size=64 callers=1 calls=2
   calls: sub_14e6550, sub_e840a0
   ref: grid_Menu
*/
void grid_Menu_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef2f0ULL || rel >= 0xaef330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef330 size=128 callers=0 calls=3
   calls: sub_14e6550, sub_acf300, sub_e840a0
   ref: grid_Menu
*/
void grid_Menu_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef330ULL || rel >= 0xaef3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef3b0 size=32 callers=1 calls=0
*/
void sub_aef3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef3b0ULL || rel >= 0xaef3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef3d0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_menu_rankmatch_00_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_menu_rankmatch_00_lyt.bin
*/
void uikit_btlspot_menu_rankmatch_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef3d0ULL || rel >= 0xaef5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef5b0 size=1024 callers=0 calls=6
   calls: sub_14e1a00, sub_ace570, sub_ace620, sub_ace880, sub_e83e60, sub_f0cc60
*/
void sub_aef5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef5b0ULL || rel >= 0xaef9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef9b0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_aef9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef9b0ULL || rel >= 0xaef9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef9d0 size=32 callers=2 calls=0
*/
void sub_aef9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef9d0ULL || rel >= 0xaef9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aef9f0 size=96 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_aef9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaef9f0ULL || rel >= 0xaefa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefa50 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aefa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefa50ULL || rel >= 0xaefb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefb00 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_aefb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefb00ULL || rel >= 0xaefb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefb70 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_aefb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefb70ULL || rel >= 0xaefbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefbe0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aefbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefbe0ULL || rel >= 0xaefc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefc90 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_aefc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefc90ULL || rel >= 0xaefd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefd40 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_aefd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefd40ULL || rel >= 0xaefdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefdb0 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_aefdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefdb0ULL || rel >= 0xaefe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefe20 size=16 callers=0 calls=0
*/
void sub_aefe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefe20ULL || rel >= 0xaefe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefe30 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aefe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefe30ULL || rel >= 0xaefe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefe70 size=32 callers=0 calls=0
*/
void sub_aefe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefe70ULL || rel >= 0xaefe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefe90 size=16 callers=0 calls=0
*/
void sub_aefe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefe90ULL || rel >= 0xaefea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefea0 size=16 callers=0 calls=0
*/
void sub_aefea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefea0ULL || rel >= 0xaefeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aefeb0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aefeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaefeb0ULL || rel >= 0xaeff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeff10 size=16 callers=0 calls=0
*/
void sub_aeff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeff10ULL || rel >= 0xaeff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeff20 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_aeff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeff20ULL || rel >= 0xaeff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeff60 size=32 callers=0 calls=0
*/
void sub_aeff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeff60ULL || rel >= 0xaeff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeff80 size=16 callers=0 calls=0
*/
void sub_aeff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeff80ULL || rel >= 0xaeff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeff90 size=16 callers=0 calls=0
*/
void sub_aeff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeff90ULL || rel >= 0xaeffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aeffa0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_aeffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaeffa0ULL || rel >= 0xaf0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0000 size=16 callers=0 calls=0
*/
void sub_af0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0000ULL || rel >= 0xaf0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0010 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0010ULL || rel >= 0xaf0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0050 size=32 callers=0 calls=0
*/
void sub_af0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0050ULL || rel >= 0xaf0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0070 size=16 callers=0 calls=0
*/
void sub_af0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0070ULL || rel >= 0xaf0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0080 size=16 callers=0 calls=0
*/
void sub_af0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0080ULL || rel >= 0xaf0090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0090 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af0090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0090ULL || rel >= 0xaf00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af00f0 size=16 callers=0 calls=0
*/
void sub_af00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf00f0ULL || rel >= 0xaf0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0100 size=16 callers=0 calls=0
*/
void sub_af0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0100ULL || rel >= 0xaf0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0110 size=16 callers=0 calls=0
*/
void sub_af0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0110ULL || rel >= 0xaf0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0120 size=16 callers=0 calls=0
*/
void sub_af0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0120ULL || rel >= 0xaf0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0130 size=32 callers=0 calls=0
*/
void sub_af0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0130ULL || rel >= 0xaf0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0150 size=16 callers=0 calls=0
*/
void sub_af0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0150ULL || rel >= 0xaf0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0160 size=16 callers=0 calls=0
*/
void sub_af0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0160ULL || rel >= 0xaf0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0170 size=16 callers=0 calls=0
*/
void sub_af0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0170ULL || rel >= 0xaf0180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0180 size=64 callers=0 calls=1
   calls: sub_acdd40
*/
void sub_af0180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0180ULL || rel >= 0xaf01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af01c0 size=464 callers=0 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_af01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf01c0ULL || rel >= 0xaf0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af0390 size=4448 callers=2 calls=11
   calls: sub_1311c60, sub_1313430, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_acf3e0, sub_acfd90, sub_ad0610, sub_e83ac0
   ref: pane_T_detail_o_15
   ref: pane_T_detail_o_12
   ref: pane_T_detail_o_16
   ref: pane_T_detail_o_11
   ref: pane_T_detail_o_01
   ref: pane_T_detail_o_00
   ref: pane_T_detail_o_02
   ref: pane_T_detail_o_17
*/
void pane_T_detail_o_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf0390ULL || rel >= 0xaf14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af14f0 size=32 callers=1 calls=0
*/
void sub_af14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf14f0ULL || rel >= 0xaf1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1510 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_detail_btlcup_official_00_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_detail_btlcup_official_00_lyt.bin
*/
void uikit_btlspot_detail_btlcup_official_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1510ULL || rel >= 0xaf16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af16f0 size=1248 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_af16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf16f0ULL || rel >= 0xaf1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1bd0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_af1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1bd0ULL || rel >= 0xaf1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1bf0 size=32 callers=1 calls=0
*/
void sub_af1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1bf0ULL || rel >= 0xaf1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1c10 size=16 callers=0 calls=0
*/
void sub_af1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1c10ULL || rel >= 0xaf1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1c20 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_af1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1c20ULL || rel >= 0xaf1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1c90 size=16 callers=0 calls=0
*/
void sub_af1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1c90ULL || rel >= 0xaf1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1ca0 size=16 callers=0 calls=0
*/
void sub_af1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1ca0ULL || rel >= 0xaf1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1cb0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_af1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1cb0ULL || rel >= 0xaf1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1d20 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_af1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1d20ULL || rel >= 0xaf1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1d90 size=16 callers=0 calls=0
*/
void sub_af1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1d90ULL || rel >= 0xaf1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1da0 size=16 callers=0 calls=0
*/
void sub_af1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1da0ULL || rel >= 0xaf1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1db0 size=80 callers=0 calls=1
   calls: sub_14ab0c0
*/
void sub_af1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1db0ULL || rel >= 0xaf1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1e00 size=16 callers=0 calls=0
*/
void sub_af1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1e00ULL || rel >= 0xaf1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1e10 size=16 callers=0 calls=0
*/
void sub_af1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1e10ULL || rel >= 0xaf1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1e20 size=16 callers=0 calls=0
*/
void sub_af1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1e20ULL || rel >= 0xaf1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1e30 size=16 callers=0 calls=0
*/
void sub_af1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1e30ULL || rel >= 0xaf1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1e40 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1e40ULL || rel >= 0xaf1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1e80 size=32 callers=0 calls=0
*/
void sub_af1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1e80ULL || rel >= 0xaf1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1ea0 size=16 callers=0 calls=0
*/
void sub_af1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1ea0ULL || rel >= 0xaf1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1eb0 size=16 callers=0 calls=0
*/
void sub_af1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1eb0ULL || rel >= 0xaf1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1ec0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1ec0ULL || rel >= 0xaf1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1f20 size=16 callers=0 calls=0
*/
void sub_af1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1f20ULL || rel >= 0xaf1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1f30 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1f30ULL || rel >= 0xaf1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1f70 size=32 callers=0 calls=0
*/
void sub_af1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1f70ULL || rel >= 0xaf1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1f90 size=16 callers=0 calls=0
*/
void sub_af1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1f90ULL || rel >= 0xaf1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1fa0 size=16 callers=0 calls=0
*/
void sub_af1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1fa0ULL || rel >= 0xaf1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af1fb0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf1fb0ULL || rel >= 0xaf2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2010 size=16 callers=0 calls=0
*/
void sub_af2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2010ULL || rel >= 0xaf2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2020 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2020ULL || rel >= 0xaf2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2060 size=32 callers=0 calls=0
*/
void sub_af2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2060ULL || rel >= 0xaf2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2080 size=16 callers=0 calls=0
*/
void sub_af2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2080ULL || rel >= 0xaf2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2090 size=16 callers=0 calls=0
*/
void sub_af2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2090ULL || rel >= 0xaf20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af20a0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af20a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf20a0ULL || rel >= 0xaf2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2100 size=16 callers=0 calls=0
*/
void sub_af2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2100ULL || rel >= 0xaf2110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2110 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2110ULL || rel >= 0xaf2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2150 size=32 callers=0 calls=0
*/
void sub_af2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2150ULL || rel >= 0xaf2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2170 size=16 callers=0 calls=0
*/
void sub_af2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2170ULL || rel >= 0xaf2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2180 size=16 callers=0 calls=0
*/
void sub_af2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2180ULL || rel >= 0xaf2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2190 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2190ULL || rel >= 0xaf21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af21f0 size=16 callers=0 calls=0
*/
void sub_af21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf21f0ULL || rel >= 0xaf2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2200 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2200ULL || rel >= 0xaf2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2240 size=32 callers=0 calls=0
*/
void sub_af2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2240ULL || rel >= 0xaf2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2260 size=16 callers=0 calls=0
*/
void sub_af2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2260ULL || rel >= 0xaf2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2270 size=16 callers=0 calls=0
*/
void sub_af2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2270ULL || rel >= 0xaf2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2280 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2280ULL || rel >= 0xaf22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af22e0 size=16 callers=0 calls=0
*/
void sub_af22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf22e0ULL || rel >= 0xaf22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af22f0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf22f0ULL || rel >= 0xaf2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2330 size=32 callers=0 calls=0
*/
void sub_af2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2330ULL || rel >= 0xaf2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2350 size=16 callers=0 calls=0
*/
void sub_af2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2350ULL || rel >= 0xaf2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2360 size=16 callers=0 calls=0
*/
void sub_af2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2360ULL || rel >= 0xaf2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2370 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2370ULL || rel >= 0xaf23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af23d0 size=16 callers=0 calls=0
*/
void sub_af23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf23d0ULL || rel >= 0xaf23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af23e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf23e0ULL || rel >= 0xaf2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2420 size=32 callers=0 calls=0
*/
void sub_af2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2420ULL || rel >= 0xaf2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2440 size=16 callers=0 calls=0
*/
void sub_af2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2440ULL || rel >= 0xaf2450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2450 size=16 callers=0 calls=0
*/
void sub_af2450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2450ULL || rel >= 0xaf2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2460 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2460ULL || rel >= 0xaf24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af24c0 size=16 callers=0 calls=0
*/
void sub_af24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf24c0ULL || rel >= 0xaf24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af24d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf24d0ULL || rel >= 0xaf2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2510 size=32 callers=0 calls=0
*/
void sub_af2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2510ULL || rel >= 0xaf2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2530 size=16 callers=0 calls=0
*/
void sub_af2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2530ULL || rel >= 0xaf2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2540 size=16 callers=0 calls=0
*/
void sub_af2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2540ULL || rel >= 0xaf2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2550 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2550ULL || rel >= 0xaf25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af25b0 size=16 callers=0 calls=0
*/
void sub_af25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf25b0ULL || rel >= 0xaf25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af25c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf25c0ULL || rel >= 0xaf2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2600 size=32 callers=0 calls=0
*/
void sub_af2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2600ULL || rel >= 0xaf2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2620 size=16 callers=0 calls=0
*/
void sub_af2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2620ULL || rel >= 0xaf2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2630 size=16 callers=0 calls=0
*/
void sub_af2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2630ULL || rel >= 0xaf2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2640 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2640ULL || rel >= 0xaf26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af26a0 size=16 callers=0 calls=0
*/
void sub_af26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf26a0ULL || rel >= 0xaf26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af26b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf26b0ULL || rel >= 0xaf26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af26f0 size=32 callers=0 calls=0
*/
void sub_af26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf26f0ULL || rel >= 0xaf2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2710 size=16 callers=0 calls=0
*/
void sub_af2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2710ULL || rel >= 0xaf2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2720 size=16 callers=0 calls=0
*/
void sub_af2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2720ULL || rel >= 0xaf2730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2730 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2730ULL || rel >= 0xaf2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2790 size=16 callers=0 calls=0
*/
void sub_af2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2790ULL || rel >= 0xaf27a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af27a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af27a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf27a0ULL || rel >= 0xaf27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af27e0 size=32 callers=0 calls=0
*/
void sub_af27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf27e0ULL || rel >= 0xaf2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2800 size=16 callers=0 calls=0
*/
void sub_af2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2800ULL || rel >= 0xaf2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2810 size=16 callers=0 calls=0
*/
void sub_af2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2810ULL || rel >= 0xaf2820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2820 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2820ULL || rel >= 0xaf2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2880 size=16 callers=0 calls=0
*/
void sub_af2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2880ULL || rel >= 0xaf2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2890 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2890ULL || rel >= 0xaf28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af28d0 size=32 callers=0 calls=0
*/
void sub_af28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf28d0ULL || rel >= 0xaf28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af28f0 size=16 callers=0 calls=0
*/
void sub_af28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf28f0ULL || rel >= 0xaf2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2900 size=16 callers=0 calls=0
*/
void sub_af2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2900ULL || rel >= 0xaf2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2910 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2910ULL || rel >= 0xaf2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2970 size=16 callers=0 calls=0
*/
void sub_af2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2970ULL || rel >= 0xaf2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2980 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2980ULL || rel >= 0xaf29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af29c0 size=32 callers=0 calls=0
*/
void sub_af29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf29c0ULL || rel >= 0xaf29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af29e0 size=16 callers=0 calls=0
*/
void sub_af29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf29e0ULL || rel >= 0xaf29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af29f0 size=16 callers=0 calls=0
*/
void sub_af29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf29f0ULL || rel >= 0xaf2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2a00 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2a00ULL || rel >= 0xaf2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2a60 size=16 callers=0 calls=0
*/
void sub_af2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2a60ULL || rel >= 0xaf2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2a70 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2a70ULL || rel >= 0xaf2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2ab0 size=32 callers=0 calls=0
*/
void sub_af2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2ab0ULL || rel >= 0xaf2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2ad0 size=16 callers=0 calls=0
*/
void sub_af2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2ad0ULL || rel >= 0xaf2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2ae0 size=16 callers=0 calls=0
*/
void sub_af2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2ae0ULL || rel >= 0xaf2af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2af0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2af0ULL || rel >= 0xaf2b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2b50 size=16 callers=0 calls=0
*/
void sub_af2b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2b50ULL || rel >= 0xaf2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2b60 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2b60ULL || rel >= 0xaf2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2ba0 size=32 callers=0 calls=0
*/
void sub_af2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2ba0ULL || rel >= 0xaf2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2bc0 size=16 callers=0 calls=0
*/
void sub_af2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2bc0ULL || rel >= 0xaf2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2bd0 size=16 callers=0 calls=0
*/
void sub_af2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2bd0ULL || rel >= 0xaf2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2be0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2be0ULL || rel >= 0xaf2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2c40 size=16 callers=0 calls=0
*/
void sub_af2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2c40ULL || rel >= 0xaf2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2c50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2c50ULL || rel >= 0xaf2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2c90 size=32 callers=0 calls=0
*/
void sub_af2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2c90ULL || rel >= 0xaf2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2cb0 size=16 callers=0 calls=0
*/
void sub_af2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2cb0ULL || rel >= 0xaf2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2cc0 size=16 callers=0 calls=0
*/
void sub_af2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2cc0ULL || rel >= 0xaf2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2cd0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2cd0ULL || rel >= 0xaf2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2d30 size=608 callers=0 calls=5
   calls: sub_14ba7b0, sub_8f3180, sub_acdd40, sub_acf300, sub_e84250
*/
void sub_af2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2d30ULL || rel >= 0xaf2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af2f90 size=960 callers=0 calls=8
   calls: sub_149f4e0, sub_14e1a30, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1860, sub_14f1870, sub_7a4ba0
*/
void sub_af2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf2f90ULL || rel >= 0xaf3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af3350 size=16 callers=0 calls=0
*/
void sub_af3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf3350ULL || rel >= 0xaf3360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af3360 size=6000 callers=0 calls=10
   calls: player_icon_table_2, sub_1311c60, sub_1313430, sub_1314a80, sub_1315b90, sub_14ac370, sub_67b990, sub_67be60, sub_67d450, sub_acf3e0
*/
void sub_af3360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf3360ULL || rel >= 0xaf4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4ad0 size=16 callers=0 calls=0
*/
void sub_af4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4ad0ULL || rel >= 0xaf4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4ae0 size=32 callers=1 calls=0
*/
void sub_af4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4ae0ULL || rel >= 0xaf4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4b00 size=32 callers=1 calls=0
*/
void sub_af4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4b00ULL || rel >= 0xaf4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4b20 size=368 callers=1 calls=3
   calls: sub_1311c60, sub_14ac370, sub_67d450
*/
void sub_af4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4b20ULL || rel >= 0xaf4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4c90 size=400 callers=1 calls=3
   calls: sub_1311c60, sub_14ac370, sub_67d450
*/
void sub_af4c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4c90ULL || rel >= 0xaf4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4e20 size=80 callers=2 calls=1
   calls: sub_14ab0c0
*/
void sub_af4e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4e20ULL || rel >= 0xaf4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af4e70 size=416 callers=2 calls=1
   calls: sub_14ab0c0
*/
void sub_af4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf4e70ULL || rel >= 0xaf5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5010 size=32 callers=1 calls=0
*/
void sub_af5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5010ULL || rel >= 0xaf5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5030 size=64 callers=0 calls=1
   calls: sub_14eead0
*/
void sub_af5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5030ULL || rel >= 0xaf5070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5070 size=672 callers=0 calls=6
   calls: sub_14e1a00, sub_ace100, sub_ace460, sub_ace570, sub_ace620, sub_f0cc60
   ref: msg_ui_btlspot_help_08
*/
void msg_ui_btlspot_help_08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5070ULL || rel >= 0xaf5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5310 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_list_tournament_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_list_tournament_lyt.bin
*/
void uikit_btlspot_list_tournament_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5310ULL || rel >= 0xaf54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af54f0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_af54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf54f0ULL || rel >= 0xaf5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5510 size=64 callers=2 calls=1
   calls: sub_ace0e0
*/
void sub_af5510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5510ULL || rel >= 0xaf5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5550 size=112 callers=0 calls=0
*/
void sub_af5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5550ULL || rel >= 0xaf55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af55c0 size=112 callers=0 calls=0
*/
void sub_af55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf55c0ULL || rel >= 0xaf5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5630 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_af5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5630ULL || rel >= 0xaf56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af56a0 size=112 callers=0 calls=0
*/
void sub_af56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf56a0ULL || rel >= 0xaf5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5710 size=112 callers=0 calls=0
*/
void sub_af5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5710ULL || rel >= 0xaf5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5780 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_af5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5780ULL || rel >= 0xaf57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af57f0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_af57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf57f0ULL || rel >= 0xaf5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5860 size=112 callers=0 calls=0
*/
void sub_af5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5860ULL || rel >= 0xaf58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af58d0 size=112 callers=0 calls=0
*/
void sub_af58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf58d0ULL || rel >= 0xaf5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5940 size=48 callers=0 calls=0
*/
void sub_af5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5940ULL || rel >= 0xaf5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5970 size=16 callers=0 calls=0
*/
void sub_af5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5970ULL || rel >= 0xaf5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5980 size=32 callers=0 calls=0
*/
void sub_af5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5980ULL || rel >= 0xaf59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af59a0 size=32 callers=0 calls=0
*/
void sub_af59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf59a0ULL || rel >= 0xaf59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af59c0 size=16 callers=0 calls=0
*/
void sub_af59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf59c0ULL || rel >= 0xaf59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af59d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf59d0ULL || rel >= 0xaf5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5a10 size=32 callers=0 calls=0
*/
void sub_af5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5a10ULL || rel >= 0xaf5a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5a30 size=16 callers=0 calls=0
*/
void sub_af5a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5a30ULL || rel >= 0xaf5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5a40 size=16 callers=0 calls=0
*/
void sub_af5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5a40ULL || rel >= 0xaf5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5a50 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5a50ULL || rel >= 0xaf5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5ab0 size=16 callers=0 calls=0
*/
void sub_af5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5ab0ULL || rel >= 0xaf5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5ac0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5ac0ULL || rel >= 0xaf5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5b00 size=32 callers=0 calls=0
*/
void sub_af5b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5b00ULL || rel >= 0xaf5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5b20 size=16 callers=0 calls=0
*/
void sub_af5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5b20ULL || rel >= 0xaf5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5b30 size=16 callers=0 calls=0
*/
void sub_af5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5b30ULL || rel >= 0xaf5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5b40 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5b40ULL || rel >= 0xaf5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5ba0 size=112 callers=0 calls=2
   calls: sub_14e2410, sub_e83e60
*/
void sub_af5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5ba0ULL || rel >= 0xaf5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5c10 size=16 callers=0 calls=0
*/
void sub_af5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5c10ULL || rel >= 0xaf5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5c20 size=16 callers=0 calls=0
*/
void sub_af5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5c20ULL || rel >= 0xaf5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5c30 size=16 callers=0 calls=0
*/
void sub_af5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5c30ULL || rel >= 0xaf5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af5c40 size=1248 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_af5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf5c40ULL || rel >= 0xaf6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6120 size=16 callers=0 calls=0
*/
void sub_af6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6120ULL || rel >= 0xaf6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6130 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6130ULL || rel >= 0xaf6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6170 size=32 callers=0 calls=0
*/
void sub_af6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6170ULL || rel >= 0xaf6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6190 size=16 callers=0 calls=0
*/
void sub_af6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6190ULL || rel >= 0xaf61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af61a0 size=16 callers=0 calls=0
*/
void sub_af61a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf61a0ULL || rel >= 0xaf61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af61b0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf61b0ULL || rel >= 0xaf6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6210 size=16 callers=0 calls=0
*/
void sub_af6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6210ULL || rel >= 0xaf6220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6220 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6220ULL || rel >= 0xaf6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6260 size=32 callers=0 calls=0
*/
void sub_af6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6260ULL || rel >= 0xaf6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6280 size=16 callers=0 calls=0
*/
void sub_af6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6280ULL || rel >= 0xaf6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6290 size=16 callers=0 calls=0
*/
void sub_af6290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6290ULL || rel >= 0xaf62a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af62a0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af62a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf62a0ULL || rel >= 0xaf6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6300 size=16 callers=0 calls=0
*/
void sub_af6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6300ULL || rel >= 0xaf6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6310 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6310ULL || rel >= 0xaf6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6350 size=32 callers=0 calls=0
*/
void sub_af6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6350ULL || rel >= 0xaf6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6370 size=16 callers=0 calls=0
*/
void sub_af6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6370ULL || rel >= 0xaf6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6380 size=16 callers=0 calls=0
*/
void sub_af6380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6380ULL || rel >= 0xaf6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6390 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6390ULL || rel >= 0xaf63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af63f0 size=16 callers=0 calls=0
*/
void sub_af63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf63f0ULL || rel >= 0xaf6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6400 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6400ULL || rel >= 0xaf6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6440 size=32 callers=0 calls=0
*/
void sub_af6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6440ULL || rel >= 0xaf6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6460 size=16 callers=0 calls=0
*/
void sub_af6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6460ULL || rel >= 0xaf6470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6470 size=16 callers=0 calls=0
*/
void sub_af6470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6470ULL || rel >= 0xaf6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6480 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6480ULL || rel >= 0xaf64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af64e0 size=16 callers=0 calls=0
*/
void sub_af64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf64e0ULL || rel >= 0xaf64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af64f0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf64f0ULL || rel >= 0xaf6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6530 size=32 callers=0 calls=0
*/
void sub_af6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6530ULL || rel >= 0xaf6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6550 size=16 callers=0 calls=0
*/
void sub_af6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6550ULL || rel >= 0xaf6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6560 size=16 callers=0 calls=0
*/
void sub_af6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6560ULL || rel >= 0xaf6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6570 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6570ULL || rel >= 0xaf65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af65d0 size=16 callers=0 calls=0
*/
void sub_af65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf65d0ULL || rel >= 0xaf65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af65e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf65e0ULL || rel >= 0xaf6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6620 size=32 callers=0 calls=0
*/
void sub_af6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6620ULL || rel >= 0xaf6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6640 size=16 callers=0 calls=0
*/
void sub_af6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6640ULL || rel >= 0xaf6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6650 size=16 callers=0 calls=0
*/
void sub_af6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6650ULL || rel >= 0xaf6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6660 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6660ULL || rel >= 0xaf66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af66c0 size=16 callers=0 calls=0
*/
void sub_af66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf66c0ULL || rel >= 0xaf66d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af66d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af66d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf66d0ULL || rel >= 0xaf6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6710 size=32 callers=0 calls=0
*/
void sub_af6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6710ULL || rel >= 0xaf6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6730 size=16 callers=0 calls=0
*/
void sub_af6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6730ULL || rel >= 0xaf6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6740 size=16 callers=0 calls=0
*/
void sub_af6740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6740ULL || rel >= 0xaf6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6750 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6750ULL || rel >= 0xaf67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af67b0 size=16 callers=0 calls=0
*/
void sub_af67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf67b0ULL || rel >= 0xaf67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af67c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf67c0ULL || rel >= 0xaf6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6800 size=32 callers=0 calls=0
*/
void sub_af6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6800ULL || rel >= 0xaf6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6820 size=16 callers=0 calls=0
*/
void sub_af6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6820ULL || rel >= 0xaf6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6830 size=16 callers=0 calls=0
*/
void sub_af6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6830ULL || rel >= 0xaf6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6840 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6840ULL || rel >= 0xaf68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af68a0 size=16 callers=0 calls=0
*/
void sub_af68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf68a0ULL || rel >= 0xaf68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af68b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf68b0ULL || rel >= 0xaf68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af68f0 size=32 callers=0 calls=0
*/
void sub_af68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf68f0ULL || rel >= 0xaf6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6910 size=16 callers=0 calls=0
*/
void sub_af6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6910ULL || rel >= 0xaf6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6920 size=16 callers=0 calls=0
*/
void sub_af6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6920ULL || rel >= 0xaf6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6930 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6930ULL || rel >= 0xaf6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6990 size=16 callers=0 calls=0
*/
void sub_af6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6990ULL || rel >= 0xaf69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af69a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf69a0ULL || rel >= 0xaf69e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af69e0 size=32 callers=0 calls=0
*/
void sub_af69e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf69e0ULL || rel >= 0xaf6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6a00 size=16 callers=0 calls=0
*/
void sub_af6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6a00ULL || rel >= 0xaf6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6a10 size=16 callers=0 calls=0
*/
void sub_af6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6a10ULL || rel >= 0xaf6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6a20 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6a20ULL || rel >= 0xaf6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6a80 size=16 callers=0 calls=0
*/
void sub_af6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6a80ULL || rel >= 0xaf6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6a90 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6a90ULL || rel >= 0xaf6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6ad0 size=32 callers=0 calls=0
*/
void sub_af6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6ad0ULL || rel >= 0xaf6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6af0 size=16 callers=0 calls=0
*/
void sub_af6af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6af0ULL || rel >= 0xaf6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6b00 size=16 callers=0 calls=0
*/
void sub_af6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6b00ULL || rel >= 0xaf6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6b10 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6b10ULL || rel >= 0xaf6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6b70 size=16 callers=0 calls=0
*/
void sub_af6b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6b70ULL || rel >= 0xaf6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6b80 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6b80ULL || rel >= 0xaf6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6bc0 size=32 callers=0 calls=0
*/
void sub_af6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6bc0ULL || rel >= 0xaf6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6be0 size=16 callers=0 calls=0
*/
void sub_af6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6be0ULL || rel >= 0xaf6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6bf0 size=16 callers=0 calls=0
*/
void sub_af6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6bf0ULL || rel >= 0xaf6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6c00 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6c00ULL || rel >= 0xaf6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6c60 size=16 callers=0 calls=0
*/
void sub_af6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6c60ULL || rel >= 0xaf6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6c70 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6c70ULL || rel >= 0xaf6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6cb0 size=32 callers=0 calls=0
*/
void sub_af6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6cb0ULL || rel >= 0xaf6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6cd0 size=16 callers=0 calls=0
*/
void sub_af6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6cd0ULL || rel >= 0xaf6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6ce0 size=16 callers=0 calls=0
*/
void sub_af6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6ce0ULL || rel >= 0xaf6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6cf0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6cf0ULL || rel >= 0xaf6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6d50 size=16 callers=0 calls=0
*/
void sub_af6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6d50ULL || rel >= 0xaf6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6d60 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6d60ULL || rel >= 0xaf6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6da0 size=32 callers=0 calls=0
*/
void sub_af6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6da0ULL || rel >= 0xaf6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6dc0 size=16 callers=0 calls=0
*/
void sub_af6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6dc0ULL || rel >= 0xaf6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6dd0 size=16 callers=0 calls=0
*/
void sub_af6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6dd0ULL || rel >= 0xaf6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6de0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6de0ULL || rel >= 0xaf6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6e40 size=16 callers=0 calls=0
*/
void sub_af6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6e40ULL || rel >= 0xaf6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6e50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6e50ULL || rel >= 0xaf6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6e90 size=32 callers=0 calls=0
*/
void sub_af6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6e90ULL || rel >= 0xaf6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6eb0 size=16 callers=0 calls=0
*/
void sub_af6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6eb0ULL || rel >= 0xaf6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6ec0 size=16 callers=0 calls=0
*/
void sub_af6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6ec0ULL || rel >= 0xaf6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6ed0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6ed0ULL || rel >= 0xaf6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6f30 size=16 callers=0 calls=0
*/
void sub_af6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6f30ULL || rel >= 0xaf6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6f40 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_af6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6f40ULL || rel >= 0xaf6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6f80 size=32 callers=0 calls=0
*/
void sub_af6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6f80ULL || rel >= 0xaf6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6fa0 size=16 callers=0 calls=0
*/
void sub_af6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6fa0ULL || rel >= 0xaf6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6fb0 size=16 callers=0 calls=0
*/
void sub_af6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6fb0ULL || rel >= 0xaf6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af6fc0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_af6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6fc0ULL || rel >= 0xaf7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af7020 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_af7020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf7020ULL || rel >= 0xaf7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af7180 size=416 callers=0 calls=7
   calls: sub_aba100, sub_ac4880, sub_ac5b50, sub_af7320, sub_afb6e0, sub_afb760, sub_d0c0
   ref: StateBtlSpotCompBattle
*/
void StateBtlSpotCompBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf7180ULL || rel >= 0xaf7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af7320 size=304 callers=34 calls=5
   calls: sub_abcc70, sub_ac4880, sub_ac5b50, sub_afa5a0, sub_afb6e0
*/
void sub_af7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf7320ULL || rel >= 0xaf7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af7450 size=16 callers=0 calls=0
*/
void sub_af7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf7450ULL || rel >= 0xaf7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af7460 size=3584 callers=0 calls=35
   calls: NONE_NONE_2, RequestLeaveSession, sub_104c020, sub_104dd50, sub_10617c0, sub_10619f0, sub_11009c0, sub_ab9fd0, sub_aba260, sub_aba270, sub_ac0c80, sub_ac4880
   ... +23 more
   ref: StateBtlSpotCompPrepareMatching
   ref: StateBtlSpotTop
*/
void StateBtlSpotCompPrepareMatching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf7460ULL || rel >= 0xaf8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af8260 size=448 callers=1 calls=7
   calls: sub_1052c20, sub_abc680, sub_abf2d0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_af8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf8260ULL || rel >= 0xaf8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af8420 size=688 callers=1 calls=8
   calls: RequestGetStats, sub_11009c0, sub_15b9390, sub_ab97d0, sub_ab97f0, sub_af7320, sub_afab30, sub_e71830
*/
void sub_af8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf8420ULL || rel >= 0xaf86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af86d0 size=240 callers=3 calls=5
   calls: sub_abf2c0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_af86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf86d0ULL || rel >= 0xaf87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af87c0 size=224 callers=3 calls=5
   calls: sub_abf400, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_af87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf87c0ULL || rel >= 0xaf88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af88a0 size=608 callers=1 calls=9
   calls: sub_1052c20, sub_136b520, sub_136b580, sub_136b590, sub_67b990, sub_ac4880, sub_ac5b50, sub_afb660, sub_afb6e0
*/
void sub_af88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf88a0ULL || rel >= 0xaf8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af8b00 size=784 callers=1 calls=9
   calls: RequestStartRound, sub_10619d0, sub_6a4d30, sub_ab97d0, sub_ab97f0, sub_ac5b50, sub_af7320, sub_afa5a0, sub_afb8c0
*/
void sub_af8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf8b00ULL || rel >= 0xaf8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af8e10 size=560 callers=1 calls=2
   calls: RequestCheckConnectivity, sub_e71830
*/
void sub_af8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf8e10ULL || rel >= 0xaf9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af9040 size=368 callers=1 calls=7
   calls: sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0, sub_ab97d0, sub_abb7d0, sub_af7320
*/
void sub_af9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf9040ULL || rel >= 0xaf91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af91b0 size=336 callers=2 calls=4
   calls: sub_ab9ea0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_af91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf91b0ULL || rel >= 0xaf9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af9300 size=832 callers=1 calls=9
   calls: RequestEndRound, sub_6a4d30, sub_ab97f0, sub_aba260, sub_ac5b50, sub_af7320, sub_af97c0, sub_afa5a0, sub_afb8c0
*/
void sub_af9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf9300ULL || rel >= 0xaf9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af9640 size=384 callers=1 calls=1
   calls: sub_afa6d0
*/
void sub_af9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf9640ULL || rel >= 0xaf97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00af97c0 size=2656 callers=1 calls=28
   calls: sub_136b530, sub_136b550, sub_136b580, sub_136b590, sub_136b690, sub_136b710, sub_136b770, sub_158a830, sub_15bc1e0, sub_15bc310, sub_16305c0, sub_6a0d90
   ... +16 more
*/
void sub_af97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf97c0ULL || rel >= 0xafa220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa220 size=96 callers=0 calls=0
*/
void sub_afa220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa220ULL || rel >= 0xafa280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa280 size=96 callers=0 calls=0
*/
void sub_afa280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa280ULL || rel >= 0xafa2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa2e0 size=96 callers=0 calls=0
*/
void sub_afa2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa2e0ULL || rel >= 0xafa340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa340 size=96 callers=0 calls=0
*/
void sub_afa340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa340ULL || rel >= 0xafa3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa3a0 size=96 callers=0 calls=0
*/
void sub_afa3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa3a0ULL || rel >= 0xafa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa400 size=96 callers=0 calls=0
*/
void sub_afa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa400ULL || rel >= 0xafa460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa460 size=288 callers=4 calls=8
   calls: sub_762930, sub_762940, sub_762d70, sub_764b40, sub_7670a0, sub_7670b0, sub_767160, sub_7847d0
*/
void sub_afa460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa460ULL || rel >= 0xafa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa580 size=16 callers=0 calls=0
*/
void sub_afa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa580ULL || rel >= 0xafa590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

