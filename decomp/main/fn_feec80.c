/* main functions 00feec80..01004200 (128 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00feec80 size=352 callers=0 calls=1
   calls: sub_fefa30
*/
void sub_feec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeec80ULL || rel >= 0xfeede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feede0 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_feede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeede0ULL || rel >= 0xfeee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feee30 size=240 callers=0 calls=0
*/
void sub_feee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeee30ULL || rel >= 0xfeef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feef20 size=16 callers=0 calls=0
*/
void sub_feef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeef20ULL || rel >= 0xfeef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feef30 size=16 callers=0 calls=0
*/
void sub_feef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeef30ULL || rel >= 0xfeef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feef40 size=16 callers=0 calls=0
*/
void sub_feef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeef40ULL || rel >= 0xfeef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feef50 size=16 callers=0 calls=0
*/
void sub_feef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeef50ULL || rel >= 0xfeef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feef60 size=160 callers=0 calls=0
*/
void sub_feef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeef60ULL || rel >= 0xfef000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef000 size=480 callers=0 calls=6
   calls: gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_ff0710, sub_ff17c0, sub_ff1ed0
*/
void sub_fef000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef000ULL || rel >= 0xfef1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef1e0 size=160 callers=0 calls=0
*/
void sub_fef1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef1e0ULL || rel >= 0xfef280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef280 size=160 callers=0 calls=0
*/
void sub_fef280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef280ULL || rel >= 0xfef320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef320 size=160 callers=0 calls=0
*/
void sub_fef320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef320ULL || rel >= 0xfef3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef3c0 size=160 callers=0 calls=0
*/
void sub_fef3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef3c0ULL || rel >= 0xfef460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef460 size=240 callers=1 calls=1
   calls: sub_fefcb0
*/
void sub_fef460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef460ULL || rel >= 0xfef550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef550 size=272 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_fef790
*/
void sub_fef550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef550ULL || rel >= 0xfef660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef660 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_c70, sub_ff0710, sub_ff09b0, sub_ff1db0, sub_ff21a0
*/
void sub_fef660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef660ULL || rel >= 0xfef790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef790 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_fef790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef790ULL || rel >= 0xfef900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fef900 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_c70, sub_ff0710, sub_ff09b0, sub_ff1570, sub_ff1cc0
*/
void sub_fef900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef900ULL || rel >= 0xfefa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefa30 size=512 callers=1 calls=0
*/
void sub_fefa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefa30ULL || rel >= 0xfefc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefc30 size=128 callers=0 calls=0
*/
void sub_fefc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefc30ULL || rel >= 0xfefcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefcb0 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_fefcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefcb0ULL || rel >= 0xfefd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefd20 size=80 callers=0 calls=0
*/
void sub_fefd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefd20ULL || rel >= 0xfefd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefd70 size=80 callers=0 calls=0
*/
void sub_fefd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefd70ULL || rel >= 0xfefdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefdc0 size=80 callers=0 calls=0
*/
void sub_fefdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefdc0ULL || rel >= 0xfefe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefe10 size=80 callers=0 calls=0
*/
void sub_fefe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefe10ULL || rel >= 0xfefe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefe60 size=80 callers=0 calls=0
*/
void sub_fefe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefe60ULL || rel >= 0xfefeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fefeb0 size=80 callers=0 calls=0
*/
void sub_fefeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefeb0ULL || rel >= 0xfeff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feff00 size=80 callers=0 calls=0
*/
void sub_feff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeff00ULL || rel >= 0xfeff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feff50 size=80 callers=0 calls=0
*/
void sub_feff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeff50ULL || rel >= 0xfeffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feffa0 size=336 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_feffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeffa0ULL || rel >= 0xff00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff00f0 size=208 callers=1 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_ff00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff00f0ULL || rel >= 0xff01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff01c0 size=96 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_ff01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff01c0ULL || rel >= 0xff0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0220 size=16 callers=0 calls=0
*/
void sub_ff0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0220ULL || rel >= 0xff0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0230 size=16 callers=0 calls=0
*/
void sub_ff0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0230ULL || rel >= 0xff0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0240 size=240 callers=0 calls=0
*/
void sub_ff0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0240ULL || rel >= 0xff0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0330 size=16 callers=0 calls=0
*/
void sub_ff0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0330ULL || rel >= 0xff0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0340 size=16 callers=0 calls=0
*/
void sub_ff0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0340ULL || rel >= 0xff0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0350 size=128 callers=0 calls=0
*/
void sub_ff0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0350ULL || rel >= 0xff03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff03d0 size=368 callers=0 calls=10
   calls: network_poke_select_async_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
   ref: poke_select_async_data_holder.proto
*/
void network_poke_select_async_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff03d0ULL || rel >= 0xff0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0540 size=224 callers=3 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_poke_select_command_2, sub_c70, sub_ff17c0, sub_ff1ed0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
   ref: poke_select_async_data_holder.proto
*/
void network_poke_select_async_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0540ULL || rel >= 0xff0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0620 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_ff0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0620ULL || rel >= 0xff0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0680 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_poke_select_async_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_ff0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0680ULL || rel >= 0xff0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0710 size=32 callers=3 calls=0
*/
void sub_ff0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0710ULL || rel >= 0xff0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0730 size=352 callers=0 calls=6
   calls: gflnet3_generated_message_util, sub_c70, sub_ff1570, sub_ff17c0, sub_ff1db0, sub_ff1ed0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
*/
void network_poke_select_async_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0730ULL || rel >= 0xff0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0890 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_ff0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0890ULL || rel >= 0xff0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0920 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_ff0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0920ULL || rel >= 0xff09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff09b0 size=80 callers=2 calls=0
*/
void sub_ff09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff09b0ULL || rel >= 0xff0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0a00 size=16 callers=0 calls=0
*/
void sub_ff0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0a00ULL || rel >= 0xff0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0a10 size=96 callers=0 calls=2
   calls: sub_c70, sub_ff0a70
*/
void sub_ff0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0a10ULL || rel >= 0xff0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0a70 size=32 callers=1 calls=0
*/
void sub_ff0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0a70ULL || rel >= 0xff0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0a90 size=80 callers=0 calls=0
*/
void sub_ff0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0a90ULL || rel >= 0xff0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0ae0 size=736 callers=0 calls=10
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70, sub_ff1570, sub_ff1920, sub_ff1db0, sub_ff1fa0
*/
void sub_ff0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0ae0ULL || rel >= 0xff0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0dc0 size=96 callers=0 calls=1
   calls: sub_714af0
*/
void sub_ff0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0dc0ULL || rel >= 0xff0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0e20 size=224 callers=0 calls=0
*/
void sub_ff0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0e20ULL || rel >= 0xff0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0f00 size=144 callers=0 calls=3
   calls: sub_70d000, sub_ff1ac0, sub_ff2060
*/
void sub_ff0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0f00ULL || rel >= 0xff0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff0f90 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_poke_select_async_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
*/
void network_poke_select_async_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff0f90ULL || rel >= 0xff1060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1060 size=80 callers=0 calls=0
*/
void sub_ff1060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1060ULL || rel >= 0xff10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff10b0 size=16 callers=0 calls=0
*/
void sub_ff10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff10b0ULL || rel >= 0xff10c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff10c0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_ff10c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff10c0ULL || rel >= 0xff1130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1130 size=16 callers=0 calls=0
*/
void sub_ff1130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1130ULL || rel >= 0xff1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1140 size=32 callers=0 calls=0
*/
void sub_ff1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1140ULL || rel >= 0xff1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1160 size=16 callers=0 calls=0
*/
void sub_ff1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1160ULL || rel >= 0xff1170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1170 size=16 callers=0 calls=0
*/
void sub_ff1170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1170ULL || rel >= 0xff1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1180 size=16 callers=0 calls=0
*/
void sub_ff1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1180ULL || rel >= 0xff1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1190 size=352 callers=0 calls=10
   calls: network_poke_select_command_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
   ref: poke_select_command.proto
*/
void network_poke_select_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1190ULL || rel >= 0xff12f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff12f0 size=320 callers=8 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
   ref: poke_select_command.proto
*/
void network_poke_select_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff12f0ULL || rel >= 0xff1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1430 size=128 callers=0 calls=0
*/
void sub_ff1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1430ULL || rel >= 0xff14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff14b0 size=192 callers=0 calls=4
   calls: gflnet3_message_4, network_poke_select_command_2, sub_6fff50, sub_7007d0
*/
void sub_ff14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff14b0ULL || rel >= 0xff1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1570 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_ff1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1570ULL || rel >= 0xff1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1610 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
*/
void network_poke_select_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1610ULL || rel >= 0xff1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1670 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_ff1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1670ULL || rel >= 0xff1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1710 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_ff1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1710ULL || rel >= 0xff17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff17b0 size=16 callers=0 calls=0
*/
void sub_ff17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff17b0ULL || rel >= 0xff17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff17c0 size=64 callers=3 calls=1
   calls: network_poke_select_command_2
*/
void sub_ff17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff17c0ULL || rel >= 0xff1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1800 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_c70, sub_ff18c0
*/
void sub_ff1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1800ULL || rel >= 0xff18c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff18c0 size=32 callers=1 calls=0
*/
void sub_ff18c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff18c0ULL || rel >= 0xff18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff18e0 size=64 callers=0 calls=0
*/
void sub_ff18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff18e0ULL || rel >= 0xff1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1920 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_ff1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1920ULL || rel >= 0xff1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1a50 size=48 callers=0 calls=0
*/
void sub_ff1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1a50ULL || rel >= 0xff1a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1a80 size=64 callers=0 calls=0
*/
void sub_ff1a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1a80ULL || rel >= 0xff1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1ac0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_ff1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1ac0ULL || rel >= 0xff1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1b60 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_poke_select_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
*/
void network_poke_select_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1b60ULL || rel >= 0xff1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1c70 size=80 callers=0 calls=0
*/
void sub_ff1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1c70ULL || rel >= 0xff1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1cc0 size=112 callers=1 calls=0
*/
void sub_ff1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1cc0ULL || rel >= 0xff1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1d30 size=16 callers=0 calls=0
*/
void sub_ff1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1d30ULL || rel >= 0xff1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1d40 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_ff1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1d40ULL || rel >= 0xff1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1db0 size=32 callers=4 calls=0
*/
void sub_ff1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1db0ULL || rel >= 0xff1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1dd0 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
*/
void network_poke_select_command_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1dd0ULL || rel >= 0xff1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1e00 size=96 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_ff1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1e00ULL || rel >= 0xff1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1e60 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_ff1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1e60ULL || rel >= 0xff1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1ec0 size=16 callers=0 calls=0
*/
void sub_ff1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1ec0ULL || rel >= 0xff1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1ed0 size=64 callers=3 calls=1
   calls: network_poke_select_command_2
*/
void sub_ff1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1ed0ULL || rel >= 0xff1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1f10 size=96 callers=0 calls=2
   calls: sub_c70, sub_ff1f70
*/
void sub_ff1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1f10ULL || rel >= 0xff1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1f70 size=32 callers=1 calls=0
*/
void sub_ff1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1f70ULL || rel >= 0xff1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1f90 size=16 callers=0 calls=0
*/
void sub_ff1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1f90ULL || rel >= 0xff1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff1fa0 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_ff1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1fa0ULL || rel >= 0xff2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2040 size=16 callers=0 calls=0
*/
void sub_ff2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2040ULL || rel >= 0xff2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2050 size=16 callers=0 calls=0
*/
void sub_ff2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2050ULL || rel >= 0xff2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2060 size=16 callers=1 calls=0
*/
void sub_ff2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2060ULL || rel >= 0xff2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2070 size=224 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_poke_select_command_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/poke_select/prot
*/
void network_poke_select_command_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2070ULL || rel >= 0xff2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2150 size=80 callers=0 calls=0
*/
void sub_ff2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2150ULL || rel >= 0xff21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff21a0 size=32 callers=1 calls=0
*/
void sub_ff21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff21a0ULL || rel >= 0xff21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff21c0 size=16 callers=0 calls=0
*/
void sub_ff21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff21c0ULL || rel >= 0xff21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff21d0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_ff21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff21d0ULL || rel >= 0xff2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2240 size=16 callers=0 calls=0
*/
void sub_ff2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2240ULL || rel >= 0xff2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2250 size=32 callers=0 calls=0
*/
void sub_ff2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2250ULL || rel >= 0xff2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2270 size=16 callers=0 calls=0
*/
void sub_ff2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2270ULL || rel >= 0xff2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2280 size=16 callers=0 calls=0
*/
void sub_ff2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2280ULL || rel >= 0xff2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2290 size=16 callers=0 calls=0
*/
void sub_ff2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2290ULL || rel >= 0xff22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff22a0 size=32 callers=0 calls=0
*/
void sub_ff22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff22a0ULL || rel >= 0xff22c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff22c0 size=16 callers=0 calls=0
*/
void sub_ff22c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff22c0ULL || rel >= 0xff22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff22d0 size=16 callers=0 calls=0
*/
void sub_ff22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff22d0ULL || rel >= 0xff22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff22e0 size=16 callers=0 calls=0
*/
void sub_ff22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff22e0ULL || rel >= 0xff22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff22f0 size=224 callers=3 calls=2
   calls: sub_1050000, sub_1064d60
*/
void sub_ff22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff22f0ULL || rel >= 0xff23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff23d0 size=16 callers=4 calls=0
*/
void sub_ff23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff23d0ULL || rel >= 0xff23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff23e0 size=16 callers=4 calls=0
*/
void sub_ff23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff23e0ULL || rel >= 0xff23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff23f0 size=1552 callers=3 calls=18
   calls: StartCreateSession, sub_104dbb0, sub_104fb70, sub_1050060, sub_10619d0, sub_10619f0, sub_1064840, sub_1064a20, sub_106e130, sub_106e2e0, sub_106e2f0, sub_1078440
   ... +6 more
*/
void sub_ff23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff23f0ULL || rel >= 0xff2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2a00 size=416 callers=1 calls=7
   calls: sub_1064840, sub_1064a20, sub_106e130, sub_106e2d0, sub_106e2e0, sub_1078440, sub_ff3730
*/
void sub_ff2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2a00ULL || rel >= 0xff2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2ba0 size=384 callers=1 calls=6
   calls: sub_104ba50, sub_1061740, sub_1063fe0, sub_1064a20, sub_6c2450, sub_6c27d0
*/
void sub_ff2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2ba0ULL || rel >= 0xff2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2d20 size=416 callers=2 calls=3
   calls: RequestBrowseSession, sub_104dbb0, sub_f9cab0
*/
void sub_ff2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2d20ULL || rel >= 0xff2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2ec0 size=272 callers=1 calls=6
   calls: sub_1062370, sub_106b4d0, sub_106b4e0, sub_ff3490, sub_ff3a90, sub_ff3bb0
*/
void sub_ff2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2ec0ULL || rel >= 0xff2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff2fd0 size=752 callers=2 calls=8
   calls: StartJoinSession, sub_104dbb0, sub_10618e0, sub_1064a20, sub_106e2f0, sub_1078440, sub_f9cab0, sub_ff3ce0
*/
void sub_ff2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff2fd0ULL || rel >= 0xff32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff32c0 size=208 callers=3 calls=3
   calls: sub_1064a20, sub_106e2d0, sub_1078440
*/
void sub_ff32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff32c0ULL || rel >= 0xff3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3390 size=256 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_ff3390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3390ULL || rel >= 0xff3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3490 size=672 callers=1 calls=10
   calls: sub_1064840, sub_1064a20, sub_106b080, sub_106e130, sub_106e2d0, sub_106e2e0, sub_106e2f0, sub_106e300, sub_1078440, sub_ff3730
*/
void sub_ff3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3490ULL || rel >= 0xff3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3730 size=864 callers=2 calls=5
   calls: RequestLanConnection, RequestLocalConnection, sub_1064a20, sub_106e2e0, sub_1078440
*/
void sub_ff3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3730ULL || rel >= 0xff3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3a90 size=288 callers=1 calls=0
*/
void sub_ff3a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3a90ULL || rel >= 0xff3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3bb0 size=304 callers=1 calls=0
*/
void sub_ff3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3bb0ULL || rel >= 0xff3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3ce0 size=416 callers=1 calls=0
*/
void sub_ff3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3ce0ULL || rel >= 0xff3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3e80 size=48 callers=0 calls=0
*/
void sub_ff3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3e80ULL || rel >= 0xff3eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3eb0 size=64 callers=0 calls=0
*/
void sub_ff3eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3eb0ULL || rel >= 0xff3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3ef0 size=48 callers=0 calls=0
*/
void sub_ff3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3ef0ULL || rel >= 0xff3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3f20 size=48 callers=0 calls=0
*/
void sub_ff3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3f20ULL || rel >= 0xff3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3f50 size=32 callers=0 calls=0
*/
void sub_ff3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3f50ULL || rel >= 0xff3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3f70 size=64 callers=0 calls=0
*/
void sub_ff3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3f70ULL || rel >= 0xff3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3fb0 size=48 callers=0 calls=0
*/
void sub_ff3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3fb0ULL || rel >= 0xff3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff3fe0 size=48 callers=0 calls=0
*/
void sub_ff3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff3fe0ULL || rel >= 0xff4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4010 size=48 callers=0 calls=0
*/
void sub_ff4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4010ULL || rel >= 0xff4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4040 size=64 callers=0 calls=0
*/
void sub_ff4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4040ULL || rel >= 0xff4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4080 size=48 callers=0 calls=0
*/
void sub_ff4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4080ULL || rel >= 0xff40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff40b0 size=48 callers=0 calls=0
*/
void sub_ff40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff40b0ULL || rel >= 0xff40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff40e0 size=32 callers=0 calls=0
*/
void sub_ff40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff40e0ULL || rel >= 0xff4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4100 size=64 callers=0 calls=0
*/
void sub_ff4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4100ULL || rel >= 0xff4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4140 size=48 callers=0 calls=0
*/
void sub_ff4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4140ULL || rel >= 0xff4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4170 size=48 callers=0 calls=0
*/
void sub_ff4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4170ULL || rel >= 0xff41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff41a0 size=16 callers=0 calls=0
*/
void sub_ff41a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff41a0ULL || rel >= 0xff41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff41b0 size=16 callers=0 calls=0
*/
void sub_ff41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff41b0ULL || rel >= 0xff41c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff41c0 size=16 callers=0 calls=0
*/
void sub_ff41c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff41c0ULL || rel >= 0xff41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff41d0 size=16 callers=0 calls=0
*/
void sub_ff41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff41d0ULL || rel >= 0xff41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff41e0 size=16 callers=0 calls=0
*/
void sub_ff41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff41e0ULL || rel >= 0xff41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff41f0 size=16 callers=0 calls=0
*/
void sub_ff41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff41f0ULL || rel >= 0xff4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4200 size=16 callers=0 calls=0
*/
void sub_ff4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4200ULL || rel >= 0xff4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4210 size=16 callers=0 calls=0
*/
void sub_ff4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4210ULL || rel >= 0xff4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4220 size=128 callers=0 calls=0
*/
void sub_ff4220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4220ULL || rel >= 0xff42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff42a0 size=400 callers=3 calls=2
   calls: sub_5e2350, sub_ff83d0
*/
void sub_ff42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff42a0ULL || rel >= 0xff4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4430 size=400 callers=1 calls=2
   calls: sub_5e2350, sub_ff83d0
*/
void sub_ff4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4430ULL || rel >= 0xff45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff45c0 size=128 callers=8 calls=0
*/
void sub_ff45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff45c0ULL || rel >= 0xff4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff4640 size=4880 callers=8 calls=29
   calls: RequestAcquireAndAssociatePrincipalRomId, RequestCheckNSOLicense, RequestGetNexUniqueID, RequestInternetConnection, RequestLocalConnection, RequestSyncDelivery, sub_105c390, sub_11009c0, sub_136b6d0, sub_136b6e0, sub_136b6f0, sub_136b700
   ... +17 more
   ref: Play_UI_common_report
*/
void Play_UI_common_report_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff4640ULL || rel >= 0xff5950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5950 size=16 callers=0 calls=0
*/
void sub_ff5950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5950ULL || rel >= 0xff5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5960 size=16 callers=0 calls=0
*/
void sub_ff5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5960ULL || rel >= 0xff5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5970 size=368 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_ff5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5970ULL || rel >= 0xff5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5ae0 size=16 callers=0 calls=0
*/
void sub_ff5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5ae0ULL || rel >= 0xff5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5af0 size=240 callers=0 calls=0
*/
void sub_ff5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5af0ULL || rel >= 0xff5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5be0 size=16 callers=0 calls=0
*/
void sub_ff5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5be0ULL || rel >= 0xff5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5bf0 size=16 callers=0 calls=0
*/
void sub_ff5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5bf0ULL || rel >= 0xff5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c00 size=16 callers=0 calls=0
*/
void sub_ff5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c00ULL || rel >= 0xff5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c10 size=16 callers=0 calls=0
*/
void sub_ff5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c10ULL || rel >= 0xff5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c20 size=16 callers=0 calls=0
*/
void sub_ff5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c20ULL || rel >= 0xff5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c30 size=16 callers=0 calls=0
*/
void sub_ff5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c30ULL || rel >= 0xff5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c40 size=48 callers=0 calls=0
*/
void sub_ff5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c40ULL || rel >= 0xff5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c70 size=16 callers=0 calls=0
*/
void sub_ff5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c70ULL || rel >= 0xff5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c80 size=16 callers=0 calls=0
*/
void sub_ff5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c80ULL || rel >= 0xff5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5c90 size=16 callers=0 calls=0
*/
void sub_ff5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5c90ULL || rel >= 0xff5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5ca0 size=64 callers=0 calls=0
*/
void sub_ff5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5ca0ULL || rel >= 0xff5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5ce0 size=64 callers=0 calls=0
*/
void sub_ff5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5ce0ULL || rel >= 0xff5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5d20 size=48 callers=0 calls=0
*/
void sub_ff5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5d20ULL || rel >= 0xff5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5d50 size=48 callers=0 calls=0
*/
void sub_ff5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5d50ULL || rel >= 0xff5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5d80 size=48 callers=0 calls=0
*/
void sub_ff5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5d80ULL || rel >= 0xff5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5db0 size=64 callers=0 calls=0
*/
void sub_ff5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5db0ULL || rel >= 0xff5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5df0 size=48 callers=0 calls=0
*/
void sub_ff5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5df0ULL || rel >= 0xff5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5e20 size=48 callers=0 calls=0
*/
void sub_ff5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5e20ULL || rel >= 0xff5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5e50 size=224 callers=0 calls=2
   calls: sub_136b6f0, sub_136b700
*/
void sub_ff5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5e50ULL || rel >= 0xff5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5f30 size=16 callers=0 calls=0
*/
void sub_ff5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5f30ULL || rel >= 0xff5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5f40 size=16 callers=0 calls=0
*/
void sub_ff5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5f40ULL || rel >= 0xff5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5f50 size=16 callers=0 calls=0
*/
void sub_ff5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5f50ULL || rel >= 0xff5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5f60 size=80 callers=0 calls=0
*/
void sub_ff5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5f60ULL || rel >= 0xff5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5fb0 size=64 callers=0 calls=0
*/
void sub_ff5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5fb0ULL || rel >= 0xff5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff5ff0 size=48 callers=0 calls=0
*/
void sub_ff5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff5ff0ULL || rel >= 0xff6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6020 size=48 callers=0 calls=0
*/
void sub_ff6020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6020ULL || rel >= 0xff6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6050 size=48 callers=0 calls=0
*/
void sub_ff6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6050ULL || rel >= 0xff6080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6080 size=64 callers=0 calls=0
*/
void sub_ff6080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6080ULL || rel >= 0xff60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff60c0 size=48 callers=0 calls=0
*/
void sub_ff60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff60c0ULL || rel >= 0xff60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff60f0 size=48 callers=0 calls=0
*/
void sub_ff60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff60f0ULL || rel >= 0xff6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6120 size=368 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ff6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6120ULL || rel >= 0xff6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6290 size=144 callers=0 calls=0
*/
void sub_ff6290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6290ULL || rel >= 0xff6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6320 size=144 callers=0 calls=0
*/
void sub_ff6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6320ULL || rel >= 0xff63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff63b0 size=240 callers=0 calls=0
*/
void sub_ff63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff63b0ULL || rel >= 0xff64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff64a0 size=144 callers=0 calls=0
*/
void sub_ff64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff64a0ULL || rel >= 0xff6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6530 size=144 callers=0 calls=0
*/
void sub_ff6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6530ULL || rel >= 0xff65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff65c0 size=16 callers=0 calls=0
*/
void sub_ff65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff65c0ULL || rel >= 0xff65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff65d0 size=16 callers=0 calls=0
*/
void sub_ff65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff65d0ULL || rel >= 0xff65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff65e0 size=144 callers=0 calls=0
*/
void sub_ff65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff65e0ULL || rel >= 0xff6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6670 size=144 callers=0 calls=0
*/
void sub_ff6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6670ULL || rel >= 0xff6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6700 size=48 callers=0 calls=0
*/
void sub_ff6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6700ULL || rel >= 0xff6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6730 size=64 callers=0 calls=0
*/
void sub_ff6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6730ULL || rel >= 0xff6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6770 size=48 callers=0 calls=0
*/
void sub_ff6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6770ULL || rel >= 0xff67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff67a0 size=48 callers=0 calls=0
*/
void sub_ff67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff67a0ULL || rel >= 0xff67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff67d0 size=64 callers=0 calls=1
   calls: sub_ff8a60
*/
void sub_ff67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff67d0ULL || rel >= 0xff6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6810 size=64 callers=0 calls=0
*/
void sub_ff6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6810ULL || rel >= 0xff6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6850 size=48 callers=0 calls=0
*/
void sub_ff6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6850ULL || rel >= 0xff6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6880 size=48 callers=0 calls=0
*/
void sub_ff6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6880ULL || rel >= 0xff68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff68b0 size=48 callers=0 calls=0
*/
void sub_ff68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff68b0ULL || rel >= 0xff68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff68e0 size=64 callers=0 calls=0
*/
void sub_ff68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff68e0ULL || rel >= 0xff6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6920 size=48 callers=0 calls=0
*/
void sub_ff6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6920ULL || rel >= 0xff6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6950 size=48 callers=0 calls=0
*/
void sub_ff6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6950ULL || rel >= 0xff6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6980 size=64 callers=0 calls=1
   calls: sub_ff8a60
*/
void sub_ff6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6980ULL || rel >= 0xff69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff69c0 size=64 callers=0 calls=0
*/
void sub_ff69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff69c0ULL || rel >= 0xff6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6a00 size=48 callers=0 calls=0
*/
void sub_ff6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6a00ULL || rel >= 0xff6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6a30 size=48 callers=0 calls=0
*/
void sub_ff6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6a30ULL || rel >= 0xff6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6a60 size=64 callers=0 calls=1
   calls: sub_ff8a60
*/
void sub_ff6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6a60ULL || rel >= 0xff6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6aa0 size=64 callers=0 calls=0
*/
void sub_ff6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6aa0ULL || rel >= 0xff6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6ae0 size=48 callers=0 calls=0
*/
void sub_ff6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6ae0ULL || rel >= 0xff6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6b10 size=48 callers=0 calls=0
*/
void sub_ff6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6b10ULL || rel >= 0xff6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6b40 size=64 callers=0 calls=1
   calls: sub_ff8a60
*/
void sub_ff6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6b40ULL || rel >= 0xff6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6b80 size=64 callers=0 calls=0
*/
void sub_ff6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6b80ULL || rel >= 0xff6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6bc0 size=48 callers=0 calls=0
*/
void sub_ff6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6bc0ULL || rel >= 0xff6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6bf0 size=48 callers=0 calls=0
*/
void sub_ff6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6bf0ULL || rel >= 0xff6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6c20 size=400 callers=0 calls=2
   calls: sub_e3a910, sub_e3ac90
*/
void sub_ff6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6c20ULL || rel >= 0xff6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6db0 size=64 callers=0 calls=0
*/
void sub_ff6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6db0ULL || rel >= 0xff6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6df0 size=48 callers=0 calls=0
*/
void sub_ff6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6df0ULL || rel >= 0xff6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6e20 size=48 callers=0 calls=0
*/
void sub_ff6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6e20ULL || rel >= 0xff6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6e50 size=48 callers=0 calls=0
*/
void sub_ff6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6e50ULL || rel >= 0xff6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6e80 size=64 callers=0 calls=0
*/
void sub_ff6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6e80ULL || rel >= 0xff6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6ec0 size=48 callers=0 calls=0
*/
void sub_ff6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6ec0ULL || rel >= 0xff6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6ef0 size=48 callers=0 calls=0
*/
void sub_ff6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6ef0ULL || rel >= 0xff6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6f20 size=64 callers=0 calls=0
*/
void sub_ff6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6f20ULL || rel >= 0xff6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6f60 size=64 callers=0 calls=0
*/
void sub_ff6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6f60ULL || rel >= 0xff6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6fa0 size=48 callers=0 calls=0
*/
void sub_ff6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6fa0ULL || rel >= 0xff6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff6fd0 size=48 callers=0 calls=0
*/
void sub_ff6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6fd0ULL || rel >= 0xff7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7000 size=48 callers=0 calls=0
*/
void sub_ff7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7000ULL || rel >= 0xff7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7030 size=64 callers=0 calls=0
*/
void sub_ff7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7030ULL || rel >= 0xff7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7070 size=48 callers=0 calls=0
*/
void sub_ff7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7070ULL || rel >= 0xff70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff70a0 size=48 callers=0 calls=0
*/
void sub_ff70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff70a0ULL || rel >= 0xff70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff70d0 size=48 callers=0 calls=0
*/
void sub_ff70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff70d0ULL || rel >= 0xff7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7100 size=64 callers=0 calls=0
*/
void sub_ff7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7100ULL || rel >= 0xff7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7140 size=48 callers=0 calls=0
*/
void sub_ff7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7140ULL || rel >= 0xff7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7170 size=48 callers=0 calls=0
*/
void sub_ff7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7170ULL || rel >= 0xff71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff71a0 size=48 callers=0 calls=0
*/
void sub_ff71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff71a0ULL || rel >= 0xff71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff71d0 size=64 callers=0 calls=0
*/
void sub_ff71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff71d0ULL || rel >= 0xff7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7210 size=48 callers=0 calls=0
*/
void sub_ff7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7210ULL || rel >= 0xff7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7240 size=48 callers=0 calls=0
*/
void sub_ff7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7240ULL || rel >= 0xff7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7270 size=32 callers=0 calls=0
*/
void sub_ff7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7270ULL || rel >= 0xff7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7290 size=16 callers=0 calls=0
*/
void sub_ff7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7290ULL || rel >= 0xff72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff72a0 size=16 callers=0 calls=0
*/
void sub_ff72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff72a0ULL || rel >= 0xff72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff72b0 size=16 callers=0 calls=0
*/
void sub_ff72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff72b0ULL || rel >= 0xff72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff72c0 size=32 callers=0 calls=0
*/
void sub_ff72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff72c0ULL || rel >= 0xff72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff72e0 size=16 callers=0 calls=0
*/
void sub_ff72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff72e0ULL || rel >= 0xff72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff72f0 size=16 callers=0 calls=0
*/
void sub_ff72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff72f0ULL || rel >= 0xff7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7300 size=16 callers=0 calls=0
*/
void sub_ff7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7300ULL || rel >= 0xff7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7310 size=32 callers=0 calls=0
*/
void sub_ff7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7310ULL || rel >= 0xff7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7330 size=16 callers=0 calls=0
*/
void sub_ff7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7330ULL || rel >= 0xff7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7340 size=16 callers=0 calls=0
*/
void sub_ff7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7340ULL || rel >= 0xff7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7350 size=16 callers=0 calls=0
*/
void sub_ff7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7350ULL || rel >= 0xff7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7360 size=128 callers=0 calls=0
*/
void sub_ff7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7360ULL || rel >= 0xff73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff73e0 size=320 callers=3 calls=2
   calls: sub_5e2350, sub_ff83d0
*/
void sub_ff73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff73e0ULL || rel >= 0xff7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7520 size=128 callers=3 calls=0
*/
void sub_ff7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7520ULL || rel >= 0xff75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff75a0 size=976 callers=3 calls=8
   calls: RequestLocalConnection, sub_105c390, sub_5cfad0, sub_794330, sub_ff86c0, sub_ff8740, sub_ff8950, sub_ff8980
   ref: Play_UI_common_report
*/
void Play_UI_common_report_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff75a0ULL || rel >= 0xff7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7970 size=288 callers=0 calls=0
*/
void sub_ff7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7970ULL || rel >= 0xff7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7a90 size=16 callers=0 calls=0
*/
void sub_ff7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7a90ULL || rel >= 0xff7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7aa0 size=240 callers=0 calls=0
*/
void sub_ff7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7aa0ULL || rel >= 0xff7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7b90 size=16 callers=0 calls=0
*/
void sub_ff7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7b90ULL || rel >= 0xff7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7ba0 size=16 callers=0 calls=0
*/
void sub_ff7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7ba0ULL || rel >= 0xff7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7bb0 size=16 callers=0 calls=0
*/
void sub_ff7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7bb0ULL || rel >= 0xff7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7bc0 size=16 callers=0 calls=0
*/
void sub_ff7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7bc0ULL || rel >= 0xff7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7bd0 size=16 callers=0 calls=0
*/
void sub_ff7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7bd0ULL || rel >= 0xff7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7be0 size=16 callers=0 calls=0
*/
void sub_ff7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7be0ULL || rel >= 0xff7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7bf0 size=48 callers=0 calls=0
*/
void sub_ff7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7bf0ULL || rel >= 0xff7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7c20 size=16 callers=0 calls=0
*/
void sub_ff7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7c20ULL || rel >= 0xff7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7c30 size=16 callers=0 calls=0
*/
void sub_ff7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7c30ULL || rel >= 0xff7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7c40 size=16 callers=0 calls=0
*/
void sub_ff7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7c40ULL || rel >= 0xff7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7c50 size=48 callers=0 calls=0
*/
void sub_ff7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7c50ULL || rel >= 0xff7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7c80 size=64 callers=0 calls=0
*/
void sub_ff7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7c80ULL || rel >= 0xff7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7cc0 size=48 callers=0 calls=0
*/
void sub_ff7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7cc0ULL || rel >= 0xff7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7cf0 size=48 callers=0 calls=0
*/
void sub_ff7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7cf0ULL || rel >= 0xff7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7d20 size=48 callers=0 calls=0
*/
void sub_ff7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7d20ULL || rel >= 0xff7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7d50 size=64 callers=0 calls=0
*/
void sub_ff7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7d50ULL || rel >= 0xff7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7d90 size=48 callers=0 calls=0
*/
void sub_ff7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7d90ULL || rel >= 0xff7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7dc0 size=48 callers=0 calls=0
*/
void sub_ff7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7dc0ULL || rel >= 0xff7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7df0 size=32 callers=0 calls=0
*/
void sub_ff7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7df0ULL || rel >= 0xff7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e10 size=16 callers=0 calls=0
*/
void sub_ff7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e10ULL || rel >= 0xff7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e20 size=16 callers=0 calls=0
*/
void sub_ff7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e20ULL || rel >= 0xff7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e30 size=16 callers=0 calls=0
*/
void sub_ff7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e30ULL || rel >= 0xff7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e40 size=32 callers=0 calls=0
*/
void sub_ff7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e40ULL || rel >= 0xff7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e60 size=16 callers=0 calls=0
*/
void sub_ff7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e60ULL || rel >= 0xff7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e70 size=16 callers=0 calls=0
*/
void sub_ff7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e70ULL || rel >= 0xff7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e80 size=16 callers=0 calls=0
*/
void sub_ff7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e80ULL || rel >= 0xff7e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7e90 size=128 callers=0 calls=0
*/
void sub_ff7e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7e90ULL || rel >= 0xff7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7f10 size=176 callers=0 calls=0
*/
void sub_ff7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7f10ULL || rel >= 0xff7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff7fc0 size=128 callers=0 calls=0
*/
void sub_ff7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7fc0ULL || rel >= 0xff8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8040 size=176 callers=0 calls=0
*/
void sub_ff8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8040ULL || rel >= 0xff80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff80f0 size=128 callers=0 calls=0
*/
void sub_ff80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff80f0ULL || rel >= 0xff8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8170 size=176 callers=0 calls=0
*/
void sub_ff8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8170ULL || rel >= 0xff8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8220 size=128 callers=0 calls=0
*/
void sub_ff8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8220ULL || rel >= 0xff82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff82a0 size=176 callers=0 calls=0
*/
void sub_ff82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff82a0ULL || rel >= 0xff8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8350 size=128 callers=0 calls=0
*/
void sub_ff8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8350ULL || rel >= 0xff83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff83d0 size=752 callers=3 calls=1
   calls: sub_67b990
*/
void sub_ff83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff83d0ULL || rel >= 0xff86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff86c0 size=128 callers=2 calls=3
   calls: sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_ff86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff86c0ULL || rel >= 0xff8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8740 size=224 callers=3 calls=3
   calls: sub_67d450, sub_e807f0, sub_eb8930
*/
void sub_ff8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8740ULL || rel >= 0xff8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8820 size=304 callers=0 calls=2
   calls: sub_67d450, sub_e807f0
*/
void sub_ff8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8820ULL || rel >= 0xff8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8950 size=48 callers=2 calls=0
*/
void sub_ff8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8950ULL || rel >= 0xff8980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8980 size=224 callers=3 calls=3
   calls: sub_67d450, sub_e807f0, sub_eb8930
*/
void sub_ff8980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8980ULL || rel >= 0xff8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8a60 size=64 callers=6 calls=1
   calls: sub_eb8a30
*/
void sub_ff8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8a60ULL || rel >= 0xff8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8aa0 size=432 callers=1 calls=1
   calls: sub_5d0b10
*/
void sub_ff8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8aa0ULL || rel >= 0xff8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8c50 size=80 callers=1 calls=1
   calls: sub_5d0e50
*/
void sub_ff8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8c50ULL || rel >= 0xff8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8ca0 size=64 callers=0 calls=1
   calls: sub_6a0d90
*/
void sub_ff8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8ca0ULL || rel >= 0xff8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8ce0 size=16 callers=0 calls=0
*/
void sub_ff8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8ce0ULL || rel >= 0xff8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8cf0 size=16 callers=0 calls=0
*/
void sub_ff8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8cf0ULL || rel >= 0xff8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8d00 size=16 callers=0 calls=0
*/
void sub_ff8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8d00ULL || rel >= 0xff8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8d10 size=128 callers=0 calls=0
*/
void sub_ff8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8d10ULL || rel >= 0xff8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8d90 size=368 callers=0 calls=0
*/
void sub_ff8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8d90ULL || rel >= 0xff8f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff8f00 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff8f00ULL || rel >= 0xff91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff91e0 size=96 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ff91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff91e0ULL || rel >= 0xff9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9240 size=144 callers=0 calls=0
*/
void sub_ff9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9240ULL || rel >= 0xff92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff92d0 size=144 callers=0 calls=0
*/
void sub_ff92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff92d0ULL || rel >= 0xff9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9360 size=144 callers=0 calls=0
*/
void sub_ff9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9360ULL || rel >= 0xff93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff93f0 size=144 callers=0 calls=0
*/
void sub_ff93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff93f0ULL || rel >= 0xff9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9480 size=144 callers=0 calls=0
*/
void sub_ff9480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9480ULL || rel >= 0xff9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9510 size=144 callers=0 calls=0
*/
void sub_ff9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9510ULL || rel >= 0xff95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff95a0 size=144 callers=0 calls=0
*/
void sub_ff95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff95a0ULL || rel >= 0xff9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9630 size=144 callers=0 calls=0
*/
void sub_ff9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9630ULL || rel >= 0xff96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff96c0 size=1776 callers=1 calls=22
   calls: sub_1049ac0, sub_1049ae0, sub_1049b00, sub_1049b20, sub_104c020, sub_104dbb0, sub_104e040, sub_104fb70, sub_1050060, sub_105c390, sub_106e4e0, sub_106eb00
   ... +10 more
*/
void sub_ff96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff96c0ULL || rel >= 0xff9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9db0 size=304 callers=0 calls=3
   calls: sub_1049b20, sub_6a0d40, sub_e71830
*/
void sub_ff9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9db0ULL || rel >= 0xff9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ff9ee0 size=352 callers=1 calls=1
   calls: StartRandomMatching
*/
void sub_ff9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff9ee0ULL || rel >= 0xffa040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa040 size=448 callers=1 calls=1
   calls: RequestBackgroundTradeStart
*/
void sub_ffa040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa040ULL || rel >= 0xffa200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa200 size=256 callers=1 calls=4
   calls: sub_1052c20, sub_1345d20, sub_1345f00, sub_6a0d40
*/
void sub_ffa200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa200ULL || rel >= 0xffa300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa300 size=432 callers=1 calls=1
   calls: RequestRecoverConnection
*/
void sub_ffa300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa300ULL || rel >= 0xffa4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa4b0 size=16 callers=7 calls=0
*/
void sub_ffa4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa4b0ULL || rel >= 0xffa4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa4c0 size=16 callers=4 calls=0
*/
void sub_ffa4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa4c0ULL || rel >= 0xffa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa4d0 size=16 callers=1 calls=0
*/
void sub_ffa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa4d0ULL || rel >= 0xffa4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa4e0 size=32 callers=1 calls=0
*/
void sub_ffa4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa4e0ULL || rel >= 0xffa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa500 size=320 callers=1 calls=7
   calls: sub_104e050, sub_136e8b0, sub_1481a10, sub_fc28c0, sub_fc2a50, sub_fc2ac0, sub_ffaa70
*/
void sub_ffa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa500ULL || rel >= 0xffa640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa640 size=32 callers=2 calls=0
*/
void sub_ffa640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa640ULL || rel >= 0xffa660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa660 size=48 callers=3 calls=0
*/
void sub_ffa660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa660ULL || rel >= 0xffa690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa690 size=272 callers=1 calls=6
   calls: sub_104e040, sub_105c390, sub_10f67c0, sub_10f79f0, sub_10f7a10, sub_6a0d40
*/
void sub_ffa690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa690ULL || rel >= 0xffa7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa7a0 size=48 callers=3 calls=0
*/
void sub_ffa7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa7a0ULL || rel >= 0xffa7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa7d0 size=144 callers=5 calls=2
   calls: sub_104dbb0, sub_6a0d40
*/
void sub_ffa7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa7d0ULL || rel >= 0xffa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffa860 size=528 callers=1 calls=10
   calls: sub_1052c20, sub_106e4e0, sub_106ea50, sub_106eb00, sub_136b520, sub_136b580, sub_136b590, sub_67b990, sub_67bdb0, sub_f18350
*/
void sub_ffa860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa860ULL || rel >= 0xffaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffaa70 size=448 callers=1 calls=4
   calls: sub_1052c50, sub_10617e0, sub_144f1c0, sub_c3bb20
*/
void sub_ffaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffaa70ULL || rel >= 0xffac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffac30 size=96 callers=0 calls=0
*/
void sub_ffac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffac30ULL || rel >= 0xffac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffac90 size=96 callers=0 calls=0
*/
void sub_ffac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffac90ULL || rel >= 0xffacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffacf0 size=48 callers=0 calls=0
*/
void sub_ffacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffacf0ULL || rel >= 0xffad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffad20 size=48 callers=0 calls=0
*/
void sub_ffad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffad20ULL || rel >= 0xffad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffad50 size=64 callers=0 calls=0
*/
void sub_ffad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffad50ULL || rel >= 0xffad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffad90 size=64 callers=0 calls=0
*/
void sub_ffad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffad90ULL || rel >= 0xffadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffadd0 size=48 callers=0 calls=0
*/
void sub_ffadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffadd0ULL || rel >= 0xffae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffae00 size=48 callers=0 calls=0
*/
void sub_ffae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffae00ULL || rel >= 0xffae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffae30 size=240 callers=0 calls=0
*/
void sub_ffae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffae30ULL || rel >= 0xffaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffaf20 size=16 callers=0 calls=0
*/
void sub_ffaf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffaf20ULL || rel >= 0xffaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffaf30 size=16 callers=0 calls=0
*/
void sub_ffaf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffaf30ULL || rel >= 0xffaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffaf40 size=64 callers=0 calls=0
*/
void sub_ffaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffaf40ULL || rel >= 0xffaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffaf80 size=64 callers=0 calls=0
*/
void sub_ffaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffaf80ULL || rel >= 0xffafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffafc0 size=48 callers=0 calls=0
*/
void sub_ffafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffafc0ULL || rel >= 0xffaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffaff0 size=48 callers=0 calls=0
*/
void sub_ffaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffaff0ULL || rel >= 0xffb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb020 size=48 callers=0 calls=0
*/
void sub_ffb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb020ULL || rel >= 0xffb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb050 size=64 callers=0 calls=0
*/
void sub_ffb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb050ULL || rel >= 0xffb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb090 size=48 callers=0 calls=0
*/
void sub_ffb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb090ULL || rel >= 0xffb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb0c0 size=48 callers=0 calls=0
*/
void sub_ffb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb0c0ULL || rel >= 0xffb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb0f0 size=144 callers=0 calls=3
   calls: sub_106e4e0, sub_106eb00, sub_f18350
*/
void sub_ffb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb0f0ULL || rel >= 0xffb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb180 size=64 callers=0 calls=0
*/
void sub_ffb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb180ULL || rel >= 0xffb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb1c0 size=48 callers=0 calls=0
*/
void sub_ffb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb1c0ULL || rel >= 0xffb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb1f0 size=48 callers=0 calls=0
*/
void sub_ffb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb1f0ULL || rel >= 0xffb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb220 size=448 callers=0 calls=6
   calls: sub_106e4e0, sub_106eb00, sub_1377780, sub_1377d60, sub_c3b970, sub_f18350
*/
void sub_ffb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb220ULL || rel >= 0xffb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb3e0 size=64 callers=0 calls=0
*/
void sub_ffb3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb3e0ULL || rel >= 0xffb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb420 size=48 callers=0 calls=0
*/
void sub_ffb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb420ULL || rel >= 0xffb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb450 size=48 callers=0 calls=0
*/
void sub_ffb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb450ULL || rel >= 0xffb480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb480 size=656 callers=1 calls=3
   calls: sub_5e2350, sub_8dfd80, sub_ffe520
*/
void sub_ffb480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb480ULL || rel >= 0xffb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffb710 size=1040 callers=0 calls=0
*/
void sub_ffb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb710ULL || rel >= 0xffbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffbb20 size=16 callers=0 calls=0
*/
void sub_ffbb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffbb20ULL || rel >= 0xffbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffbb30 size=16 callers=0 calls=0
*/
void sub_ffbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffbb30ULL || rel >= 0xffbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffbb40 size=16 callers=0 calls=0
*/
void sub_ffbb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffbb40ULL || rel >= 0xffbb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffbb50 size=16 callers=0 calls=0
*/
void sub_ffbb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffbb50ULL || rel >= 0xffbb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffbb60 size=16 callers=0 calls=0
*/
void sub_ffbb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffbb60ULL || rel >= 0xffbb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffbb70 size=1296 callers=2 calls=14
   calls: sub_1004940, sub_1005a30, sub_1005fc0, sub_1006520, sub_1006a80, sub_1006fe0, sub_1007570, sub_1007af0, sub_1008080, sub_6ae810, sub_6ae890, sub_6aea40
   ... +2 more
*/
void sub_ffbb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffbb70ULL || rel >= 0xffc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffc080 size=1264 callers=1 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_ffc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc080ULL || rel >= 0xffc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffc570 size=16 callers=2 calls=0
*/
void sub_ffc570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc570ULL || rel >= 0xffc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffc580 size=192 callers=1 calls=3
   calls: sub_6aeb70, sub_6d1070, sub_ffc640
*/
void sub_ffc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc580ULL || rel >= 0xffc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffc640 size=320 callers=1 calls=4
   calls: sub_10056e0, sub_6d1530, sub_6d7910, sub_89a0f0
*/
void sub_ffc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc640ULL || rel >= 0xffc780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffc780 size=48 callers=1 calls=1
   calls: sub_ffc7b0
*/
void sub_ffc780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc780ULL || rel >= 0xffc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffc7b0 size=1120 callers=1 calls=16
   calls: sub_1009250, sub_1009390, sub_1009620, sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490
   ... +4 more
*/
void sub_ffc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc7b0ULL || rel >= 0xffcc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffcc10 size=336 callers=0 calls=1
   calls: sub_89b390
*/
void sub_ffcc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffcc10ULL || rel >= 0xffcd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffcd60 size=96 callers=3 calls=0
*/
void sub_ffcd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffcd60ULL || rel >= 0xffcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffcdc0 size=64 callers=2 calls=0
*/
void sub_ffcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffcdc0ULL || rel >= 0xffce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffce00 size=496 callers=2 calls=8
   calls: sub_10158e0, sub_1015930, sub_1061800, sub_6ae890, sub_6d1070, sub_89b390, sub_ffcff0, sub_ffd130
*/
void sub_ffce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffce00ULL || rel >= 0xffcff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffcff0 size=320 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_ffcff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffcff0ULL || rel >= 0xffd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd130 size=480 callers=4 calls=4
   calls: sub_10056e0, sub_1009710, sub_65da00, sub_65daf0
*/
void sub_ffd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd130ULL || rel >= 0xffd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd310 size=16 callers=2 calls=0
*/
void sub_ffd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd310ULL || rel >= 0xffd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd320 size=48 callers=7 calls=0
*/
void sub_ffd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd320ULL || rel >= 0xffd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd350 size=64 callers=1 calls=0
*/
void sub_ffd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd350ULL || rel >= 0xffd390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd390 size=48 callers=1 calls=0
*/
void sub_ffd390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd390ULL || rel >= 0xffd3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd3c0 size=112 callers=1 calls=4
   calls: sub_10158e0, sub_1015930, sub_6d1070, sub_ffd130
*/
void sub_ffd3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd3c0ULL || rel >= 0xffd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd430 size=384 callers=2 calls=5
   calls: sub_1010e30, sub_65da00, sub_65daf0, sub_6d1070, sub_ffd5b0
*/
void sub_ffd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd430ULL || rel >= 0xffd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd5b0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009840, sub_65da00, sub_65daf0
*/
void sub_ffd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd5b0ULL || rel >= 0xffd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd790 size=32 callers=1 calls=0
*/
void sub_ffd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd790ULL || rel >= 0xffd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd7b0 size=16 callers=1 calls=0
*/
void sub_ffd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd7b0ULL || rel >= 0xffd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd7c0 size=16 callers=1 calls=0
*/
void sub_ffd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd7c0ULL || rel >= 0xffd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd7d0 size=16 callers=1 calls=0
*/
void sub_ffd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd7d0ULL || rel >= 0xffd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd7e0 size=32 callers=10 calls=0
*/
void sub_ffd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd7e0ULL || rel >= 0xffd800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd800 size=112 callers=1 calls=4
   calls: sub_10158e0, sub_1015930, sub_6d1070, sub_ffd130
*/
void sub_ffd800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd800ULL || rel >= 0xffd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffd870 size=816 callers=1 calls=11
   calls: sub_1012560, sub_65da00, sub_65daf0, sub_6d1070, sub_6f6640, sub_89b390, sub_8e0040, sub_c70, sub_ce0, sub_ffdba0, sub_ffdcc0
*/
void sub_ffd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffd870ULL || rel >= 0xffdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffdba0 size=288 callers=5 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_ffdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffdba0ULL || rel >= 0xffdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffdcc0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009970, sub_65da00, sub_65daf0
*/
void sub_ffdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffdcc0ULL || rel >= 0xffdea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffdea0 size=112 callers=1 calls=4
   calls: sub_100af80, sub_100afd0, sub_6d1070, sub_ffdf10
*/
void sub_ffdea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffdea0ULL || rel >= 0xffdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffdf10 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009aa0, sub_65da00, sub_65daf0
*/
void sub_ffdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffdf10ULL || rel >= 0xffe0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe0f0 size=16 callers=1 calls=0
*/
void sub_ffe0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe0f0ULL || rel >= 0xffe100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe100 size=16 callers=1 calls=0
*/
void sub_ffe100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe100ULL || rel >= 0xffe110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe110 size=16 callers=1 calls=0
*/
void sub_ffe110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe110ULL || rel >= 0xffe120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe120 size=112 callers=4 calls=1
   calls: sub_8e0670
*/
void sub_ffe120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe120ULL || rel >= 0xffe190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe190 size=16 callers=1 calls=0
*/
void sub_ffe190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe190ULL || rel >= 0xffe1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe1a0 size=336 callers=1 calls=5
   calls: sub_10131c0, sub_65da00, sub_65daf0, sub_6d1070, sub_ffe2f0
*/
void sub_ffe1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe1a0ULL || rel >= 0xffe2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe2f0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009bd0, sub_65da00, sub_65daf0
*/
void sub_ffe2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe2f0ULL || rel >= 0xffe4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe4d0 size=32 callers=1 calls=0
*/
void sub_ffe4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe4d0ULL || rel >= 0xffe4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe4f0 size=16 callers=1 calls=0
*/
void sub_ffe4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe4f0ULL || rel >= 0xffe500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe500 size=32 callers=2 calls=0
*/
void sub_ffe500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe500ULL || rel >= 0xffe520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe520 size=288 callers=1 calls=0
*/
void sub_ffe520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe520ULL || rel >= 0xffe640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe640 size=16 callers=1 calls=0
*/
void sub_ffe640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe640ULL || rel >= 0xffe650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffe650 size=960 callers=1 calls=11
   calls: sub_100f9a0, sub_65da00, sub_65daf0, sub_6d1070, sub_6f6640, sub_784f40, sub_89b390, sub_c70, sub_ce0, sub_ffdba0, sub_ffea10
*/
void sub_ffe650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe650ULL || rel >= 0xffea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffea10 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009d00, sub_65da00, sub_65daf0
*/
void sub_ffea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffea10ULL || rel >= 0xffebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffebf0 size=336 callers=1 calls=5
   calls: sub_1013cd0, sub_65da00, sub_65daf0, sub_6d1070, sub_ffed40
*/
void sub_ffebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffebf0ULL || rel >= 0xffed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffed40 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009e30, sub_65da00, sub_65daf0
*/
void sub_ffed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffed40ULL || rel >= 0xffef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffef20 size=112 callers=1 calls=4
   calls: sub_10142c0, sub_1014310, sub_6d1070, sub_ffef90
*/
void sub_ffef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffef20ULL || rel >= 0xffef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ffef90 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_1009f60, sub_65da00, sub_65daf0
*/
void sub_ffef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffef90ULL || rel >= 0xfff170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff170 size=16 callers=1 calls=0
*/
void sub_fff170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff170ULL || rel >= 0xfff180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff180 size=32 callers=2 calls=0
*/
void sub_fff180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff180ULL || rel >= 0xfff1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff1a0 size=192 callers=1 calls=0
*/
void sub_fff1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff1a0ULL || rel >= 0xfff260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff260 size=16 callers=1 calls=0
*/
void sub_fff260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff260ULL || rel >= 0xfff270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff270 size=368 callers=0 calls=1
   calls: sub_1061810
*/
void sub_fff270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff270ULL || rel >= 0xfff3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff3e0 size=336 callers=1 calls=5
   calls: sub_1010440, sub_65da00, sub_65daf0, sub_6d1070, sub_fff530
*/
void sub_fff3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff3e0ULL || rel >= 0xfff530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff530 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_100a090, sub_65da00, sub_65daf0
*/
void sub_fff530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff530ULL || rel >= 0xfff710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff710 size=32 callers=1 calls=0
*/
void sub_fff710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff710ULL || rel >= 0xfff730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff730 size=16 callers=1 calls=0
*/
void sub_fff730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff730ULL || rel >= 0xfff740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff740 size=192 callers=2 calls=0
*/
void sub_fff740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff740ULL || rel >= 0xfff800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff800 size=240 callers=1 calls=4
   calls: sub_1016d10, sub_65da00, sub_65daf0, sub_fff8f0
*/
void sub_fff800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff800ULL || rel >= 0xfff8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fff8f0 size=288 callers=1 calls=5
   calls: sub_100a1c0, sub_100a2e0, sub_65da00, sub_65daf0, sub_6d7ab0
*/
void sub_fff8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff8f0ULL || rel >= 0xfffa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fffa10 size=16 callers=1 calls=0
*/
void sub_fffa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfffa10ULL || rel >= 0xfffa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fffa20 size=48 callers=8 calls=0
*/
void sub_fffa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfffa20ULL || rel >= 0xfffa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fffa50 size=112 callers=2 calls=4
   calls: sub_100f000, sub_100f050, sub_6d1070, sub_fffac0
*/
void sub_fffa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfffa50ULL || rel >= 0xfffac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fffac0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_100a580, sub_65da00, sub_65daf0
*/
void sub_fffac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfffac0ULL || rel >= 0xfffca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fffca0 size=80 callers=1 calls=0
*/
void sub_fffca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfffca0ULL || rel >= 0xfffcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fffcf0 size=944 callers=2 calls=8
   calls: sub_10000a0, sub_10047d0, sub_100e6b0, sub_1061830, sub_65da00, sub_65daf0, sub_6d1070, sub_722e50
*/
void sub_fffcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfffcf0ULL || rel >= 0x10000a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010000a0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_100a6b0, sub_65da00, sub_65daf0
*/
void sub_10000a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10000a0ULL || rel >= 0x1000280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000280 size=32 callers=2 calls=0
*/
void sub_1000280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000280ULL || rel >= 0x10002a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010002a0 size=368 callers=9 calls=5
   calls: sub_1000410, sub_10006e0, sub_1018740, sub_65da00, sub_65daf0
*/
void sub_10002a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10002a0ULL || rel >= 0x1000410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000410 size=720 callers=4 calls=0
*/
void sub_1000410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000410ULL || rel >= 0x10006e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010006e0 size=288 callers=1 calls=5
   calls: sub_100a1c0, sub_100a7e0, sub_65da00, sub_65daf0, sub_6d7ab0
*/
void sub_10006e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10006e0ULL || rel >= 0x1000800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000800 size=224 callers=4 calls=0
*/
void sub_1000800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000800ULL || rel >= 0x10008e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010008e0 size=192 callers=9 calls=0
*/
void sub_10008e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10008e0ULL || rel >= 0x10009a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010009a0 size=224 callers=9 calls=1
   calls: sub_6ae9d0
*/
void sub_10009a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10009a0ULL || rel >= 0x1000a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000a80 size=144 callers=1 calls=0
*/
void sub_1000a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000a80ULL || rel >= 0x1000b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000b10 size=64 callers=1 calls=0
*/
void sub_1000b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000b10ULL || rel >= 0x1000b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000b50 size=592 callers=1 calls=7
   calls: sub_1000da0, sub_1014af0, sub_65da00, sub_65daf0, sub_6f6640, sub_c70, sub_ce0
*/
void sub_1000b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000b50ULL || rel >= 0x1000da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000da0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_100a910, sub_65da00, sub_65daf0
*/
void sub_1000da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000da0ULL || rel >= 0x1000f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01000f80 size=256 callers=1 calls=4
   calls: sub_10158e0, sub_65da00, sub_65daf0, sub_ffd130
*/
void sub_1000f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000f80ULL || rel >= 0x1001080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001080 size=176 callers=1 calls=0
*/
void sub_1001080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001080ULL || rel >= 0x1001130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001130 size=16 callers=2 calls=0
*/
void sub_1001130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001130ULL || rel >= 0x1001140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001140 size=48 callers=1 calls=0
*/
void sub_1001140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001140ULL || rel >= 0x1001170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001170 size=16 callers=1 calls=0
*/
void sub_1001170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001170ULL || rel >= 0x1001180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001180 size=336 callers=2 calls=5
   calls: sub_10012d0, sub_1011ad0, sub_65da00, sub_65daf0, sub_6d1070
*/
void sub_1001180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001180ULL || rel >= 0x10012d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010012d0 size=480 callers=1 calls=4
   calls: sub_10056e0, sub_100aa40, sub_65da00, sub_65daf0
*/
void sub_10012d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10012d0ULL || rel >= 0x10014b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010014b0 size=32 callers=1 calls=0
*/
void sub_10014b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10014b0ULL || rel >= 0x10014d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010014d0 size=16 callers=1 calls=0
*/
void sub_10014d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10014d0ULL || rel >= 0x10014e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010014e0 size=128 callers=8 calls=2
   calls: sub_10617a0, sub_10619f0
*/
void sub_10014e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10014e0ULL || rel >= 0x1001560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001560 size=480 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1001560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001560ULL || rel >= 0x1001740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001740 size=320 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1001740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001740ULL || rel >= 0x1001880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001880 size=624 callers=0 calls=3
   calls: sub_1004850, sub_89b390, sub_8e0310
*/
void sub_1001880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001880ULL || rel >= 0x1001af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001af0 size=320 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1001af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001af0ULL || rel >= 0x1001c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01001c30 size=1200 callers=0 calls=8
   calls: sub_10020e0, sub_1048a80, sub_1048d70, sub_1061810, sub_783bd0, sub_785320, sub_89b390, sub_8e0670
*/
void sub_1001c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1001c30ULL || rel >= 0x10020e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010020e0 size=800 callers=1 calls=10
   calls: sub_1052ca0, sub_1100e00, sub_136b550, sub_6a0d40, sub_783bd0, sub_785320, sub_8ddc00, sub_8ddc20, sub_8dde50, sub_8ddec0
*/
void sub_10020e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10020e0ULL || rel >= 0x1002400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002400 size=320 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1002400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002400ULL || rel >= 0x1002540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002540 size=464 callers=0 calls=2
   calls: sub_1000410, sub_89b390
*/
void sub_1002540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002540ULL || rel >= 0x1002710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002710 size=304 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1002710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002710ULL || rel >= 0x1002840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002840 size=448 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1002840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002840ULL || rel >= 0x1002a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002a00 size=64 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_1002a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002a00ULL || rel >= 0x1002a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002a40 size=64 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_1002a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002a40ULL || rel >= 0x1002a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002a80 size=368 callers=0 calls=3
   calls: sub_1002bf0, sub_6d7ac0, sub_89b390
*/
void sub_1002a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002a80ULL || rel >= 0x1002bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002bf0 size=288 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_1002bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002bf0ULL || rel >= 0x1002d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002d10 size=16 callers=0 calls=0
*/
void sub_1002d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002d10ULL || rel >= 0x1002d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002d20 size=352 callers=0 calls=3
   calls: sub_1002e80, sub_6d7ac0, sub_89b390
*/
void sub_1002d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002d20ULL || rel >= 0x1002e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002e80 size=288 callers=3 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_1002e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002e80ULL || rel >= 0x1002fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002fa0 size=16 callers=0 calls=0
*/
void sub_1002fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002fa0ULL || rel >= 0x1002fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01002fb0 size=768 callers=0 calls=4
   calls: sub_1002e80, sub_10032b0, sub_6d7ac0, sub_89b390
*/
void sub_1002fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1002fb0ULL || rel >= 0x10032b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010032b0 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_10032b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10032b0ULL || rel >= 0x10033e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010033e0 size=16 callers=0 calls=0
*/
void sub_10033e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10033e0ULL || rel >= 0x10033f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010033f0 size=368 callers=0 calls=3
   calls: sub_6d7ac0, sub_89b390, sub_ffdba0
*/
void sub_10033f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10033f0ULL || rel >= 0x1003560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003560 size=16 callers=0 calls=0
*/
void sub_1003560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003560ULL || rel >= 0x1003570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003570 size=448 callers=0 calls=4
   calls: sub_1003730, sub_6ae9d0, sub_6d7ac0, sub_89b390
*/
void sub_1003570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003570ULL || rel >= 0x1003730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003730 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_1003730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003730ULL || rel >= 0x1003860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003860 size=16 callers=0 calls=0
*/
void sub_1003860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003860ULL || rel >= 0x1003870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003870 size=368 callers=0 calls=3
   calls: sub_6d7ac0, sub_89b390, sub_ffdba0
*/
void sub_1003870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003870ULL || rel >= 0x10039e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010039e0 size=16 callers=0 calls=0
*/
void sub_10039e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10039e0ULL || rel >= 0x10039f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010039f0 size=368 callers=0 calls=2
   calls: sub_1002e80, sub_89b390
*/
void sub_10039f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10039f0ULL || rel >= 0x1003b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003b60 size=16 callers=0 calls=0
*/
void sub_1003b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003b60ULL || rel >= 0x1003b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003b70 size=32 callers=0 calls=0
*/
void sub_1003b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003b70ULL || rel >= 0x1003b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003b90 size=32 callers=0 calls=0
*/
void sub_1003b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003b90ULL || rel >= 0x1003bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003bb0 size=448 callers=0 calls=3
   calls: sub_1003d70, sub_6d7ac0, sub_89b390
*/
void sub_1003bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003bb0ULL || rel >= 0x1003d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003d70 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_1003d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003d70ULL || rel >= 0x1003ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003ea0 size=16 callers=0 calls=0
*/
void sub_1003ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003ea0ULL || rel >= 0x1003eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003eb0 size=32 callers=0 calls=0
*/
void sub_1003eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003eb0ULL || rel >= 0x1003ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003ed0 size=32 callers=0 calls=0
*/
void sub_1003ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003ed0ULL || rel >= 0x1003ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01003ef0 size=368 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7ac0, sub_89b390, sub_ffdba0
*/
void sub_1003ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003ef0ULL || rel >= 0x1004060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01004060 size=16 callers=0 calls=0
*/
void sub_1004060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1004060ULL || rel >= 0x1004070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01004070 size=400 callers=0 calls=3
   calls: sub_1004200, sub_6d7ac0, sub_89b390
*/
void sub_1004070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1004070ULL || rel >= 0x1004200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01004200 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_1004200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1004200ULL || rel >= 0x1004330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

