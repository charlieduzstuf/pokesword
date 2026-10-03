/* main functions 0103af30..0104d380 (132 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0103af30 size=32 callers=0 calls=0
*/
void sub_103af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103af30ULL || rel >= 0x103af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103af50 size=32 callers=0 calls=0
*/
void sub_103af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103af50ULL || rel >= 0x103af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103af70 size=352 callers=2 calls=2
   calls: sub_103b0d0, sub_89b480
*/
void sub_103af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103af70ULL || rel >= 0x103b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b0d0 size=416 callers=1 calls=1
   calls: sub_102a330
*/
void sub_103b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b0d0ULL || rel >= 0x103b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b270 size=80 callers=0 calls=0
*/
void sub_103b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b270ULL || rel >= 0x103b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b2c0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_103b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b2c0ULL || rel >= 0x103b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b330 size=16 callers=0 calls=0
*/
void sub_103b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b330ULL || rel >= 0x103b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b340 size=48 callers=0 calls=0
*/
void sub_103b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b340ULL || rel >= 0x103b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b370 size=64 callers=0 calls=0
*/
void sub_103b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b370ULL || rel >= 0x103b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b3b0 size=80 callers=0 calls=0
*/
void sub_103b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b3b0ULL || rel >= 0x103b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b400 size=80 callers=0 calls=0
*/
void sub_103b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b400ULL || rel >= 0x103b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b450 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_103b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b450ULL || rel >= 0x103b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b4c0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_103b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b4c0ULL || rel >= 0x103b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b530 size=80 callers=0 calls=0
*/
void sub_103b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b530ULL || rel >= 0x103b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b580 size=80 callers=0 calls=0
*/
void sub_103b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b580ULL || rel >= 0x103b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b5d0 size=368 callers=1 calls=1
   calls: sub_102a330
*/
void sub_103b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b5d0ULL || rel >= 0x103b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b740 size=160 callers=0 calls=0
*/
void sub_103b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b740ULL || rel >= 0x103b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b7e0 size=416 callers=0 calls=5
   calls: gflnet3_message_lite_2, sub_103c920, sub_103d2a0, sub_65da00, sub_65daf0
*/
void sub_103b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b7e0ULL || rel >= 0x103b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103b980 size=160 callers=0 calls=0
*/
void sub_103b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103b980ULL || rel >= 0x103ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ba20 size=160 callers=0 calls=0
*/
void sub_103ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ba20ULL || rel >= 0x103bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103bac0 size=160 callers=0 calls=0
*/
void sub_103bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103bac0ULL || rel >= 0x103bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103bb60 size=160 callers=0 calls=0
*/
void sub_103bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103bb60ULL || rel >= 0x103bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103bc00 size=368 callers=2 calls=1
   calls: sub_102a330
*/
void sub_103bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103bc00ULL || rel >= 0x103bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103bd70 size=320 callers=1 calls=0
*/
void sub_103bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103bd70ULL || rel >= 0x103beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103beb0 size=288 callers=2 calls=3
   calls: sub_103bfd0, sub_65da00, sub_65daf0
*/
void sub_103beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103beb0ULL || rel >= 0x103bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103bfd0 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_103bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103bfd0ULL || rel >= 0x103c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c140 size=240 callers=3 calls=3
   calls: sub_103ac20, sub_6d7d80, sub_89a0f0
*/
void sub_103c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c140ULL || rel >= 0x103c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c230 size=304 callers=1 calls=7
   calls: sub_103c6d0, sub_103ce20, sub_103d2a0, sub_103d3e0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_103c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c230ULL || rel >= 0x103c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c360 size=128 callers=0 calls=0
*/
void sub_103c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c360ULL || rel >= 0x103c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c3e0 size=256 callers=0 calls=9
   calls: network_pokemon_trade_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: pokemon_trade.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
*/
void network_pokemon_trade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c3e0ULL || rel >= 0x103c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c4e0 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: pokemon_trade.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
*/
void network_pokemon_trade_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c4e0ULL || rel >= 0x103c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c5f0 size=80 callers=0 calls=0
*/
void sub_103c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c5f0ULL || rel >= 0x103c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c640 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_pokemon_trade_2, sub_6fff50, sub_7007d0
*/
void sub_103c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c640ULL || rel >= 0x103c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c6d0 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_103c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c6d0ULL || rel >= 0x103c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c770 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
*/
void network_pokemon_trade_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c770ULL || rel >= 0x103c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c7d0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_103c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c7d0ULL || rel >= 0x103c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c870 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_103c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c870ULL || rel >= 0x103c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c910 size=16 callers=0 calls=0
*/
void sub_103c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c910ULL || rel >= 0x103c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c920 size=64 callers=3 calls=1
   calls: network_pokemon_trade_2
*/
void sub_103c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c920ULL || rel >= 0x103c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103c960 size=192 callers=0 calls=4
   calls: sub_103ca20, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_103c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c960ULL || rel >= 0x103ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ca20 size=32 callers=1 calls=0
*/
void sub_103ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ca20ULL || rel >= 0x103ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ca40 size=64 callers=0 calls=0
*/
void sub_103ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ca40ULL || rel >= 0x103ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ca80 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_103ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ca80ULL || rel >= 0x103cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cbb0 size=48 callers=0 calls=0
*/
void sub_103cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cbb0ULL || rel >= 0x103cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cbe0 size=64 callers=0 calls=0
*/
void sub_103cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cbe0ULL || rel >= 0x103cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cc20 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_103cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cc20ULL || rel >= 0x103ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ccc0 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_pokemon_trade_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
*/
void network_pokemon_trade_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ccc0ULL || rel >= 0x103cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cdd0 size=80 callers=0 calls=0
*/
void sub_103cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cdd0ULL || rel >= 0x103ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ce20 size=112 callers=1 calls=0
*/
void sub_103ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ce20ULL || rel >= 0x103ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ce90 size=16 callers=0 calls=0
*/
void sub_103ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ce90ULL || rel >= 0x103cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cea0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_103cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cea0ULL || rel >= 0x103cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cf10 size=16 callers=0 calls=0
*/
void sub_103cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cf10ULL || rel >= 0x103cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cf20 size=32 callers=0 calls=0
*/
void sub_103cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cf20ULL || rel >= 0x103cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cf40 size=16 callers=0 calls=0
*/
void sub_103cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cf40ULL || rel >= 0x103cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cf50 size=16 callers=0 calls=0
*/
void sub_103cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cf50ULL || rel >= 0x103cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cf60 size=16 callers=0 calls=0
*/
void sub_103cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cf60ULL || rel >= 0x103cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103cf70 size=352 callers=0 calls=10
   calls: network_pokemon_trade_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
   ref: pokemon_trade_data_holder.proto
   ref: CHECK failed: file != NULL: 
*/
void network_pokemon_trade_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103cf70ULL || rel >= 0x103d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d0d0 size=224 callers=3 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_pokemon_trade_2, sub_103c920, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
   ref: pokemon_trade_data_holder.proto
*/
void network_pokemon_trade_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d0d0ULL || rel >= 0x103d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d1b0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_103d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d1b0ULL || rel >= 0x103d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d210 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_pokemon_trade_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_103d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d210ULL || rel >= 0x103d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d2a0 size=32 callers=2 calls=0
*/
void sub_103d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d2a0ULL || rel >= 0x103d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d2c0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_103d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d2c0ULL || rel >= 0x103d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d350 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_103d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d350ULL || rel >= 0x103d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d3e0 size=64 callers=1 calls=0
*/
void sub_103d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d3e0ULL || rel >= 0x103d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d420 size=16 callers=0 calls=0
*/
void sub_103d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d420ULL || rel >= 0x103d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d430 size=96 callers=0 calls=2
   calls: sub_103d490, sub_c70
*/
void sub_103d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d430ULL || rel >= 0x103d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d490 size=32 callers=1 calls=0
*/
void sub_103d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d490ULL || rel >= 0x103d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d4b0 size=64 callers=0 calls=0
*/
void sub_103d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d4b0ULL || rel >= 0x103d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d4f0 size=416 callers=0 calls=8
   calls: sub_103c6d0, sub_103ca80, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_103d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d4f0ULL || rel >= 0x103d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d690 size=32 callers=0 calls=0
*/
void sub_103d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d690ULL || rel >= 0x103d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d6b0 size=96 callers=0 calls=0
*/
void sub_103d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d6b0ULL || rel >= 0x103d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d710 size=112 callers=0 calls=2
   calls: sub_103cc20, sub_70d000
*/
void sub_103d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d710ULL || rel >= 0x103d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d780 size=336 callers=0 calls=5
   calls: gflnet3_generated_message_util, network_pokemon_trade_data_holder_2, sub_103c6d0, sub_103c920, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/pokemon_tr
*/
void network_pokemon_trade_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d780ULL || rel >= 0x103d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d8d0 size=80 callers=0 calls=0
*/
void sub_103d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d8d0ULL || rel >= 0x103d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d920 size=16 callers=0 calls=0
*/
void sub_103d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d920ULL || rel >= 0x103d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d930 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_103d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d930ULL || rel >= 0x103d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d9a0 size=16 callers=0 calls=0
*/
void sub_103d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d9a0ULL || rel >= 0x103d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d9b0 size=32 callers=0 calls=0
*/
void sub_103d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d9b0ULL || rel >= 0x103d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d9d0 size=16 callers=0 calls=0
*/
void sub_103d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d9d0ULL || rel >= 0x103d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d9e0 size=16 callers=0 calls=0
*/
void sub_103d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d9e0ULL || rel >= 0x103d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103d9f0 size=16 callers=0 calls=0
*/
void sub_103d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103d9f0ULL || rel >= 0x103da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103da00 size=128 callers=2 calls=0
*/
void sub_103da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103da00ULL || rel >= 0x103da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103da80 size=864 callers=1 calls=7
   calls: sub_103dde0, sub_103f760, sub_10408d0, sub_10617c0, sub_1061830, sub_5ecfa0, sub_6d7610
*/
void sub_103da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103da80ULL || rel >= 0x103dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103dde0 size=752 callers=1 calls=10
   calls: sub_1033f90, sub_103bc00, sub_1040f20, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_103dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103dde0ULL || rel >= 0x103e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103e0d0 size=256 callers=0 calls=0
*/
void sub_103e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e0d0ULL || rel >= 0x103e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103e1d0 size=208 callers=2 calls=2
   calls: sub_103da80, sub_5ed5e0
*/
void sub_103e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e1d0ULL || rel >= 0x103e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103e2a0 size=448 callers=2 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_103e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e2a0ULL || rel >= 0x103e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103e460 size=32 callers=1 calls=0
*/
void sub_103e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e460ULL || rel >= 0x103e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103e480 size=1392 callers=2 calls=19
   calls: sub_103e9f0, sub_103ee50, sub_103ef80, sub_1044cb0, sub_1044d60, sub_1044d70, sub_1044d80, sub_1044d90, sub_1044e60, sub_1044e70, sub_104dbb0, sub_104e0c0
   ... +7 more
*/
void sub_103e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e480ULL || rel >= 0x103e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103e9f0 size=1120 callers=1 calls=16
   calls: sub_1041550, sub_1041690, sub_1041920, sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490
   ... +4 more
*/
void sub_103e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103e9f0ULL || rel >= 0x103ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ee50 size=304 callers=5 calls=4
   calls: sub_103f0c0, sub_1041f50, sub_65da00, sub_65daf0
*/
void sub_103ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ee50ULL || rel >= 0x103ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ef80 size=320 callers=1 calls=4
   calls: sub_1040580, sub_6d1530, sub_6d7910, sub_89a0f0
*/
void sub_103ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ef80ULL || rel >= 0x103f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f0c0 size=480 callers=1 calls=4
   calls: sub_1040580, sub_1041a10, sub_65da00, sub_65daf0
*/
void sub_103f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f0c0ULL || rel >= 0x103f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f2a0 size=400 callers=0 calls=4
   calls: sub_103f430, sub_6ae9d0, sub_6d7ac0, sub_89b390
*/
void sub_103f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f2a0ULL || rel >= 0x103f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f430 size=288 callers=2 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_103f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f430ULL || rel >= 0x103f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f550 size=144 callers=0 calls=1
   calls: sub_10617c0
*/
void sub_103f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f550ULL || rel >= 0x103f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f5e0 size=144 callers=0 calls=1
   calls: sub_10617c0
*/
void sub_103f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f5e0ULL || rel >= 0x103f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f670 size=16 callers=0 calls=0
*/
void sub_103f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f670ULL || rel >= 0x103f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f680 size=16 callers=0 calls=0
*/
void sub_103f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f680ULL || rel >= 0x103f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f690 size=32 callers=1 calls=0
*/
void sub_103f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f690ULL || rel >= 0x103f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f6b0 size=32 callers=1 calls=0
*/
void sub_103f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f6b0ULL || rel >= 0x103f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f6d0 size=48 callers=0 calls=1
   calls: sub_11046d0
*/
void sub_103f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f6d0ULL || rel >= 0x103f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f700 size=16 callers=0 calls=0
*/
void sub_103f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f700ULL || rel >= 0x103f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f710 size=16 callers=0 calls=0
*/
void sub_103f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f710ULL || rel >= 0x103f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f720 size=16 callers=0 calls=0
*/
void sub_103f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f720ULL || rel >= 0x103f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f730 size=16 callers=0 calls=0
*/
void sub_103f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f730ULL || rel >= 0x103f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f740 size=16 callers=0 calls=0
*/
void sub_103f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f740ULL || rel >= 0x103f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f750 size=16 callers=0 calls=0
*/
void sub_103f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f750ULL || rel >= 0x103f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f760 size=608 callers=1 calls=4
   calls: sub_102a330, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_103f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f760ULL || rel >= 0x103f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103f9c0 size=496 callers=0 calls=3
   calls: sub_1040580, sub_6d0670, sub_89a0f0
*/
void sub_103f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103f9c0ULL || rel >= 0x103fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103fbb0 size=16 callers=0 calls=0
*/
void sub_103fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103fbb0ULL || rel >= 0x103fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103fbc0 size=240 callers=0 calls=0
*/
void sub_103fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103fbc0ULL || rel >= 0x103fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103fcb0 size=32 callers=0 calls=0
*/
void sub_103fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103fcb0ULL || rel >= 0x103fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103fcd0 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_103fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103fcd0ULL || rel >= 0x103fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103fd30 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_103fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103fd30ULL || rel >= 0x103fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103fdc0 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_103fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103fdc0ULL || rel >= 0x103ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ff30 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_103ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ff30ULL || rel >= 0x10400b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010400b0 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_10400b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10400b0ULL || rel >= 0x1040280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040280 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_1040280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040280ULL || rel >= 0x1040330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040330 size=16 callers=0 calls=0
*/
void sub_1040330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040330ULL || rel >= 0x1040340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040340 size=16 callers=0 calls=0
*/
void sub_1040340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040340ULL || rel >= 0x1040350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040350 size=16 callers=0 calls=0
*/
void sub_1040350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040350ULL || rel >= 0x1040360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040360 size=16 callers=0 calls=0
*/
void sub_1040360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040360ULL || rel >= 0x1040370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040370 size=16 callers=0 calls=0
*/
void sub_1040370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040370ULL || rel >= 0x1040380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040380 size=16 callers=0 calls=0
*/
void sub_1040380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040380ULL || rel >= 0x1040390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040390 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_1040390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040390ULL || rel >= 0x10403f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010403f0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_10403f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10403f0ULL || rel >= 0x1040480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040480 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_1040480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040480ULL || rel >= 0x1040530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040530 size=16 callers=0 calls=0
*/
void sub_1040530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040530ULL || rel >= 0x1040540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040540 size=16 callers=0 calls=0
*/
void sub_1040540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040540ULL || rel >= 0x1040550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040550 size=16 callers=0 calls=0
*/
void sub_1040550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040550ULL || rel >= 0x1040560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040560 size=32 callers=0 calls=0
*/
void sub_1040560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040560ULL || rel >= 0x1040580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040580 size=208 callers=5 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_1040580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040580ULL || rel >= 0x1040650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040650 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_1040650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040650ULL || rel >= 0x10406a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010406a0 size=16 callers=0 calls=0
*/
void sub_10406a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10406a0ULL || rel >= 0x10406b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010406b0 size=16 callers=0 calls=0
*/
void sub_10406b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10406b0ULL || rel >= 0x10406c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010406c0 size=16 callers=0 calls=0
*/
void sub_10406c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10406c0ULL || rel >= 0x10406d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010406d0 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_10406d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10406d0ULL || rel >= 0x1040750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040750 size=16 callers=0 calls=0
*/
void sub_1040750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040750ULL || rel >= 0x1040760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040760 size=32 callers=0 calls=0
*/
void sub_1040760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040760ULL || rel >= 0x1040780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040780 size=32 callers=0 calls=0
*/
void sub_1040780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040780ULL || rel >= 0x10407a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010407a0 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_10407a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10407a0ULL || rel >= 0x1040880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040880 size=16 callers=0 calls=0
*/
void sub_1040880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040880ULL || rel >= 0x1040890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040890 size=32 callers=0 calls=0
*/
void sub_1040890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040890ULL || rel >= 0x10408b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010408b0 size=32 callers=0 calls=0
*/
void sub_10408b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10408b0ULL || rel >= 0x10408d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010408d0 size=352 callers=2 calls=2
   calls: sub_1040a30, sub_89b480
*/
void sub_10408d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10408d0ULL || rel >= 0x1040a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040a30 size=416 callers=1 calls=1
   calls: sub_102a330
*/
void sub_1040a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040a30ULL || rel >= 0x1040bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040bd0 size=80 callers=0 calls=0
*/
void sub_1040bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040bd0ULL || rel >= 0x1040c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040c20 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1040c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040c20ULL || rel >= 0x1040c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040c90 size=16 callers=0 calls=0
*/
void sub_1040c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040c90ULL || rel >= 0x1040ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040ca0 size=64 callers=0 calls=0
*/
void sub_1040ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040ca0ULL || rel >= 0x1040ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040ce0 size=32 callers=0 calls=0
*/
void sub_1040ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040ce0ULL || rel >= 0x1040d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040d00 size=80 callers=0 calls=0
*/
void sub_1040d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040d00ULL || rel >= 0x1040d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040d50 size=80 callers=0 calls=0
*/
void sub_1040d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040d50ULL || rel >= 0x1040da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040da0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1040da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040da0ULL || rel >= 0x1040e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040e10 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1040e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040e10ULL || rel >= 0x1040e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040e80 size=80 callers=0 calls=0
*/
void sub_1040e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040e80ULL || rel >= 0x1040ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040ed0 size=80 callers=0 calls=0
*/
void sub_1040ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040ed0ULL || rel >= 0x1040f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01040f20 size=368 callers=1 calls=1
   calls: sub_102a330
*/
void sub_1040f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1040f20ULL || rel >= 0x1041090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041090 size=160 callers=0 calls=0
*/
void sub_1041090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041090ULL || rel >= 0x1041130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041130 size=416 callers=0 calls=5
   calls: gflnet3_message_lite_2, network_sync_command_5, sub_1042a90, sub_65da00, sub_65daf0
*/
void sub_1041130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041130ULL || rel >= 0x10412d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010412d0 size=160 callers=0 calls=0
*/
void sub_10412d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10412d0ULL || rel >= 0x1041370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041370 size=160 callers=0 calls=0
*/
void sub_1041370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041370ULL || rel >= 0x1041410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041410 size=160 callers=0 calls=0
*/
void sub_1041410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041410ULL || rel >= 0x10414b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010414b0 size=160 callers=0 calls=0
*/
void sub_10414b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10414b0ULL || rel >= 0x1041550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041550 size=320 callers=1 calls=0
*/
void sub_1041550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041550ULL || rel >= 0x1041690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041690 size=288 callers=2 calls=3
   calls: sub_10417b0, sub_65da00, sub_65daf0
*/
void sub_1041690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041690ULL || rel >= 0x10417b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010417b0 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_10417b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10417b0ULL || rel >= 0x1041920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041920 size=240 callers=3 calls=3
   calls: sub_1040580, sub_6d7d80, sub_89a0f0
*/
void sub_1041920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041920ULL || rel >= 0x1041a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041a10 size=304 callers=1 calls=7
   calls: sub_1041f50, sub_10425b0, sub_1042a90, sub_1042bd0, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1041a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041a10ULL || rel >= 0x1041b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041b40 size=128 callers=0 calls=0
*/
void sub_1041b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041b40ULL || rel >= 0x1041bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041bc0 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: CHECK failed: file != NULL: 
   ref: sync_command.proto
*/
void network_sync_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041bc0ULL || rel >= 0x1041d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041d40 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_command.proto
*/
void network_sync_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041d40ULL || rel >= 0x1041de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041de0 size=80 callers=0 calls=0
*/
void sub_1041de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041de0ULL || rel >= 0x1041e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041e30 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_command.proto
*/
void network_sync_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041e30ULL || rel >= 0x1041f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041f50 size=32 callers=4 calls=0
*/
void sub_1041f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041f50ULL || rel >= 0x1041f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041f70 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
*/
void network_sync_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041f70ULL || rel >= 0x1041fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01041fa0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1041fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1041fa0ULL || rel >= 0x1042000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042000 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1042000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042000ULL || rel >= 0x1042060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042060 size=16 callers=0 calls=0
*/
void sub_1042060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042060ULL || rel >= 0x1042070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042070 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_command.proto
*/
void network_sync_command_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042070ULL || rel >= 0x1042140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042140 size=96 callers=0 calls=2
   calls: sub_10421a0, sub_c70
*/
void sub_1042140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042140ULL || rel >= 0x10421a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010421a0 size=32 callers=1 calls=0
*/
void sub_10421a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10421a0ULL || rel >= 0x10421c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010421c0 size=16 callers=0 calls=0
*/
void sub_10421c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10421c0ULL || rel >= 0x10421d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010421d0 size=304 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_10421d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10421d0ULL || rel >= 0x1042300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042300 size=32 callers=0 calls=0
*/
void sub_1042300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042300ULL || rel >= 0x1042320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042320 size=96 callers=0 calls=0
*/
void sub_1042320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042320ULL || rel >= 0x1042380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042380 size=112 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1042380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042380ULL || rel >= 0x10423f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010423f0 size=368 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_command.proto
*/
void network_sync_command_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10423f0ULL || rel >= 0x1042560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042560 size=80 callers=0 calls=0
*/
void sub_1042560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042560ULL || rel >= 0x10425b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010425b0 size=64 callers=1 calls=0
*/
void sub_10425b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10425b0ULL || rel >= 0x10425f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010425f0 size=16 callers=0 calls=0
*/
void sub_10425f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10425f0ULL || rel >= 0x1042600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042600 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1042600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042600ULL || rel >= 0x1042670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042670 size=16 callers=0 calls=0
*/
void sub_1042670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042670ULL || rel >= 0x1042680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042680 size=32 callers=0 calls=0
*/
void sub_1042680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042680ULL || rel >= 0x10426a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010426a0 size=16 callers=0 calls=0
*/
void sub_10426a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10426a0ULL || rel >= 0x10426b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010426b0 size=16 callers=0 calls=0
*/
void sub_10426b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10426b0ULL || rel >= 0x10426c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010426c0 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_command.proto
*/
void network_sync_command_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10426c0ULL || rel >= 0x1042760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042760 size=352 callers=0 calls=10
   calls: network_sync_save_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_save_data_holder.proto
*/
void network_sync_save_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042760ULL || rel >= 0x10428c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010428c0 size=224 callers=3 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_sync_command_2, network_sync_command_5, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
   ref: sync_save_data_holder.proto
*/
void network_sync_save_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10428c0ULL || rel >= 0x10429a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010429a0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_10429a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10429a0ULL || rel >= 0x1042a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042a00 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_sync_save_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_1042a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042a00ULL || rel >= 0x1042a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042a90 size=32 callers=2 calls=0
*/
void sub_1042a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042a90ULL || rel >= 0x1042ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042ab0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1042ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042ab0ULL || rel >= 0x1042b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042b40 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1042b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042b40ULL || rel >= 0x1042bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042bd0 size=64 callers=1 calls=0
*/
void sub_1042bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042bd0ULL || rel >= 0x1042c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042c10 size=16 callers=0 calls=0
*/
void sub_1042c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042c10ULL || rel >= 0x1042c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042c20 size=96 callers=0 calls=2
   calls: sub_1042c80, sub_c70
*/
void sub_1042c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042c20ULL || rel >= 0x1042c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042c80 size=32 callers=1 calls=0
*/
void sub_1042c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042c80ULL || rel >= 0x1042ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042ca0 size=64 callers=0 calls=0
*/
void sub_1042ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042ca0ULL || rel >= 0x1042ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042ce0 size=416 callers=0 calls=8
   calls: sub_1041f50, sub_10421d0, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_1042ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042ce0ULL || rel >= 0x1042e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042e80 size=32 callers=0 calls=0
*/
void sub_1042e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042e80ULL || rel >= 0x1042ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042ea0 size=96 callers=0 calls=0
*/
void sub_1042ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042ea0ULL || rel >= 0x1042f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042f00 size=112 callers=0 calls=2
   calls: sub_1042380, sub_70d000
*/
void sub_1042f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042f00ULL || rel >= 0x1042f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01042f70 size=336 callers=0 calls=5
   calls: gflnet3_generated_message_util, network_sync_command_5, network_sync_save_data_holder_2, sub_1041f50, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/
*/
void network_sync_save_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1042f70ULL || rel >= 0x10430c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010430c0 size=80 callers=0 calls=0
*/
void sub_10430c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10430c0ULL || rel >= 0x1043110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043110 size=16 callers=0 calls=0
*/
void sub_1043110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043110ULL || rel >= 0x1043120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043120 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1043120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043120ULL || rel >= 0x1043190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043190 size=16 callers=0 calls=0
*/
void sub_1043190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043190ULL || rel >= 0x10431a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010431a0 size=32 callers=0 calls=0
*/
void sub_10431a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10431a0ULL || rel >= 0x10431c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010431c0 size=16 callers=0 calls=0
*/
void sub_10431c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10431c0ULL || rel >= 0x10431d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010431d0 size=16 callers=0 calls=0
*/
void sub_10431d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10431d0ULL || rel >= 0x10431e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010431e0 size=16 callers=0 calls=0
*/
void sub_10431e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10431e0ULL || rel >= 0x10431f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010431f0 size=80 callers=2 calls=1
   calls: sub_1044c60
*/
void sub_10431f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10431f0ULL || rel >= 0x1043240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043240 size=16 callers=0 calls=0
*/
void sub_1043240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043240ULL || rel >= 0x1043250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043250 size=480 callers=0 calls=8
   calls: sub_1052c50, sub_1377cd0, sub_1377d00, sub_1377d40, sub_1377d70, sub_144f1c0, sub_172bdd0, sub_c3b970
*/
void sub_1043250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043250ULL || rel >= 0x1043430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043430 size=256 callers=0 calls=2
   calls: sub_1377d90, sub_c3b970
*/
void sub_1043430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043430ULL || rel >= 0x1043530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043530 size=80 callers=0 calls=0
*/
void sub_1043530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043530ULL || rel >= 0x1043580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043580 size=240 callers=0 calls=0
*/
void sub_1043580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043580ULL || rel >= 0x1043670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043670 size=80 callers=0 calls=0
*/
void sub_1043670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043670ULL || rel >= 0x10436c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010436c0 size=80 callers=0 calls=0
*/
void sub_10436c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10436c0ULL || rel >= 0x1043710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043710 size=16 callers=0 calls=0
*/
void sub_1043710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043710ULL || rel >= 0x1043720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043720 size=16 callers=0 calls=0
*/
void sub_1043720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043720ULL || rel >= 0x1043730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043730 size=80 callers=0 calls=0
*/
void sub_1043730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043730ULL || rel >= 0x1043780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043780 size=80 callers=0 calls=0
*/
void sub_1043780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043780ULL || rel >= 0x10437d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010437d0 size=128 callers=0 calls=0
*/
void sub_10437d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10437d0ULL || rel >= 0x1043850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043850 size=128 callers=1 calls=1
   calls: sub_1044c60
*/
void sub_1043850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043850ULL || rel >= 0x10438d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010438d0 size=256 callers=0 calls=2
   calls: sub_13a1100, sub_eac9a0
*/
void sub_10438d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10438d0ULL || rel >= 0x10439d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010439d0 size=16 callers=0 calls=0
*/
void sub_10439d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10439d0ULL || rel >= 0x10439e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010439e0 size=16 callers=0 calls=0
*/
void sub_10439e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10439e0ULL || rel >= 0x10439f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010439f0 size=16 callers=0 calls=0
*/
void sub_10439f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10439f0ULL || rel >= 0x1043a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043a00 size=16 callers=0 calls=0
*/
void sub_1043a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043a00ULL || rel >= 0x1043a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043a10 size=16 callers=0 calls=0
*/
void sub_1043a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043a10ULL || rel >= 0x1043a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043a20 size=960 callers=0 calls=8
   calls: sub_1045040, sub_1045110, sub_12fac60, sub_1350010, sub_1350770, sub_1365920, sub_76f440, sub_76f6c0
   ref: MEET_BY_TRADE
*/
void MEET_BY_TRADE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043a20ULL || rel >= 0x1043de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043de0 size=192 callers=0 calls=3
   calls: sub_10453c0, sub_1350010, sub_1350770
*/
void sub_1043de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043de0ULL || rel >= 0x1043ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01043ea0 size=672 callers=0 calls=7
   calls: sub_13658f0, sub_13a10f0, sub_13a1100, sub_13a1150, sub_13a11f0, sub_eac930, sub_eac9a0
*/
void sub_1043ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1043ea0ULL || rel >= 0x1044140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044140 size=16 callers=0 calls=0
*/
void sub_1044140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044140ULL || rel >= 0x1044150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044150 size=16 callers=0 calls=0
*/
void sub_1044150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044150ULL || rel >= 0x1044160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044160 size=96 callers=0 calls=2
   calls: sub_13a1150, sub_13a11f0
*/
void sub_1044160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044160ULL || rel >= 0x10441c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010441c0 size=64 callers=0 calls=0
*/
void sub_10441c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10441c0ULL || rel >= 0x1044200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044200 size=48 callers=0 calls=0
*/
void sub_1044200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044200ULL || rel >= 0x1044230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044230 size=48 callers=0 calls=0
*/
void sub_1044230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044230ULL || rel >= 0x1044260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044260 size=112 callers=1 calls=1
   calls: sub_1044c60
*/
void sub_1044260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044260ULL || rel >= 0x10442d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010442d0 size=256 callers=0 calls=2
   calls: sub_13a1100, sub_eac9a0
*/
void sub_10442d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10442d0ULL || rel >= 0x10443d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010443d0 size=16 callers=0 calls=0
*/
void sub_10443d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10443d0ULL || rel >= 0x10443e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010443e0 size=16 callers=0 calls=0
*/
void sub_10443e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10443e0ULL || rel >= 0x10443f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010443f0 size=16 callers=0 calls=0
*/
void sub_10443f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10443f0ULL || rel >= 0x1044400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044400 size=16 callers=0 calls=0
*/
void sub_1044400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044400ULL || rel >= 0x1044410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044410 size=16 callers=0 calls=0
*/
void sub_1044410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044410ULL || rel >= 0x1044420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044420 size=960 callers=0 calls=6
   calls: sub_1045040, sub_1045110, sub_12fac60, sub_1365920, sub_76f440, sub_76f6c0
   ref: MEET_BY_TRADE
*/
void MEET_BY_TRADE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044420ULL || rel >= 0x10447e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010447e0 size=192 callers=0 calls=1
   calls: sub_10453c0
*/
void sub_10447e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10447e0ULL || rel >= 0x10448a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010448a0 size=672 callers=0 calls=7
   calls: sub_13658f0, sub_13a10f0, sub_13a1100, sub_13a1150, sub_13a11f0, sub_eac930, sub_eac9a0
*/
void sub_10448a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10448a0ULL || rel >= 0x1044b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044b40 size=16 callers=0 calls=0
*/
void sub_1044b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044b40ULL || rel >= 0x1044b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044b50 size=16 callers=0 calls=0
*/
void sub_1044b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044b50ULL || rel >= 0x1044b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044b60 size=96 callers=0 calls=2
   calls: sub_13a1150, sub_13a11f0
*/
void sub_1044b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044b60ULL || rel >= 0x1044bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044bc0 size=64 callers=0 calls=0
*/
void sub_1044bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044bc0ULL || rel >= 0x1044c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044c00 size=48 callers=0 calls=0
*/
void sub_1044c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044c00ULL || rel >= 0x1044c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044c30 size=48 callers=0 calls=0
*/
void sub_1044c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044c30ULL || rel >= 0x1044c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044c60 size=80 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_1044c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044c60ULL || rel >= 0x1044cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044cb0 size=176 callers=1 calls=0
*/
void sub_1044cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044cb0ULL || rel >= 0x1044d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044d60 size=16 callers=1 calls=0
*/
void sub_1044d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044d60ULL || rel >= 0x1044d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044d70 size=16 callers=1 calls=0
*/
void sub_1044d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044d70ULL || rel >= 0x1044d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044d80 size=16 callers=1 calls=0
*/
void sub_1044d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044d80ULL || rel >= 0x1044d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044d90 size=32 callers=1 calls=0
*/
void sub_1044d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044d90ULL || rel >= 0x1044db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044db0 size=176 callers=1 calls=3
   calls: sub_137f870, sub_137f950, sub_137f9c0
*/
void sub_1044db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044db0ULL || rel >= 0x1044e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044e60 size=16 callers=1 calls=0
*/
void sub_1044e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044e60ULL || rel >= 0x1044e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044e70 size=192 callers=1 calls=6
   calls: sub_1044db0, sub_137f6b0, sub_137f800, sub_137f870, sub_137f950, sub_137f9c0
*/
void sub_1044e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044e70ULL || rel >= 0x1044f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044f30 size=16 callers=0 calls=0
*/
void sub_1044f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044f30ULL || rel >= 0x1044f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044f40 size=16 callers=0 calls=0
*/
void sub_1044f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044f40ULL || rel >= 0x1044f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044f50 size=16 callers=0 calls=0
*/
void sub_1044f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044f50ULL || rel >= 0x1044f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044f60 size=16 callers=0 calls=0
*/
void sub_1044f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044f60ULL || rel >= 0x1044f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044f70 size=16 callers=0 calls=0
*/
void sub_1044f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044f70ULL || rel >= 0x1044f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044f80 size=80 callers=0 calls=0
*/
void sub_1044f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044f80ULL || rel >= 0x1044fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044fd0 size=16 callers=0 calls=0
*/
void sub_1044fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044fd0ULL || rel >= 0x1044fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01044fe0 size=80 callers=0 calls=0
*/
void sub_1044fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1044fe0ULL || rel >= 0x1045030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045030 size=16 callers=0 calls=0
*/
void sub_1045030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045030ULL || rel >= 0x1045040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045040 size=208 callers=4 calls=2
   calls: sub_1378970, sub_1380bd0
*/
void sub_1045040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045040ULL || rel >= 0x1045110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045110 size=688 callers=4 calls=11
   calls: sub_13000b0, sub_13038a0, sub_1379700, sub_1379a10, sub_7628f0, sub_762930, sub_767eb0, sub_767f90, sub_769380, sub_76f440, sub_76f6c0
*/
void sub_1045110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045110ULL || rel >= 0x10453c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010453c0 size=128 callers=2 calls=1
   calls: sub_1378970
*/
void sub_10453c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10453c0ULL || rel >= 0x1045440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045440 size=176 callers=0 calls=0
*/
void sub_1045440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045440ULL || rel >= 0x10454f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010454f0 size=80 callers=0 calls=0
*/
void sub_10454f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10454f0ULL || rel >= 0x1045540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045540 size=80 callers=0 calls=0
*/
void sub_1045540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045540ULL || rel >= 0x1045590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045590 size=128 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1045590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045590ULL || rel >= 0x1045610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045610 size=352 callers=0 calls=0
*/
void sub_1045610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045610ULL || rel >= 0x1045770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045770 size=16 callers=0 calls=0
*/
void sub_1045770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045770ULL || rel >= 0x1045780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045780 size=16 callers=0 calls=0
*/
void sub_1045780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045780ULL || rel >= 0x1045790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045790 size=16 callers=0 calls=0
*/
void sub_1045790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045790ULL || rel >= 0x10457a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010457a0 size=16 callers=0 calls=0
*/
void sub_10457a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10457a0ULL || rel >= 0x10457b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010457b0 size=16 callers=0 calls=0
*/
void sub_10457b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10457b0ULL || rel >= 0x10457c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010457c0 size=32 callers=1 calls=0
*/
void sub_10457c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10457c0ULL || rel >= 0x10457e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010457e0 size=16 callers=6 calls=0
*/
void sub_10457e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10457e0ULL || rel >= 0x10457f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010457f0 size=160 callers=1 calls=0
*/
void sub_10457f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10457f0ULL || rel >= 0x1045890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045890 size=272 callers=1 calls=1
   calls: sub_10460a0
*/
void sub_1045890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045890ULL || rel >= 0x10459a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010459a0 size=32 callers=2 calls=0
*/
void sub_10459a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10459a0ULL || rel >= 0x10459c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010459c0 size=64 callers=2 calls=0
*/
void sub_10459c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10459c0ULL || rel >= 0x1045a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045a00 size=784 callers=1 calls=6
   calls: sub_1045d10, sub_14beec0, sub_14bf040, sub_14bf2f0, sub_14bf490, sub_14bfb70
*/
void sub_1045a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045a00ULL || rel >= 0x1045d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045d10 size=640 callers=1 calls=4
   calls: sub_10461d0, sub_14bf750, sub_14bfbb0, sub_5fe6a0
*/
void sub_1045d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045d10ULL || rel >= 0x1045f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01045f90 size=240 callers=0 calls=0
*/
void sub_1045f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1045f90ULL || rel >= 0x1046080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046080 size=16 callers=0 calls=0
*/
void sub_1046080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046080ULL || rel >= 0x1046090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046090 size=16 callers=0 calls=0
*/
void sub_1046090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046090ULL || rel >= 0x10460a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010460a0 size=304 callers=1 calls=0
*/
void sub_10460a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10460a0ULL || rel >= 0x10461d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010461d0 size=576 callers=1 calls=0
*/
void sub_10461d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10461d0ULL || rel >= 0x1046410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046410 size=128 callers=0 calls=0
*/
void sub_1046410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046410ULL || rel >= 0x1046490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046490 size=80 callers=0 calls=0
*/
void sub_1046490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046490ULL || rel >= 0x10464e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010464e0 size=64 callers=1 calls=0
*/
void sub_10464e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10464e0ULL || rel >= 0x1046520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046520 size=416 callers=0 calls=0
*/
void sub_1046520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046520ULL || rel >= 0x10466c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010466c0 size=16 callers=13 calls=0
*/
void sub_10466c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10466c0ULL || rel >= 0x10466d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010466d0 size=432 callers=0 calls=3
   calls: sub_10473b0, sub_1392570, sub_7c2280
*/
void sub_10466d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10466d0ULL || rel >= 0x1046880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046880 size=560 callers=6 calls=6
   calls: sub_1046ab0, sub_13923d0, sub_6aedb0, sub_6aedc0, sub_7c2280, sub_eaa040
*/
void sub_1046880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046880ULL || rel >= 0x1046ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046ab0 size=1136 callers=1 calls=1
   calls: sub_10471d0
*/
void sub_1046ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046ab0ULL || rel >= 0x1046f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046f20 size=128 callers=1 calls=2
   calls: sub_6aedb0, sub_6aedc0
*/
void sub_1046f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046f20ULL || rel >= 0x1046fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01046fa0 size=464 callers=1 calls=4
   calls: sub_13923d0, sub_6aedb0, sub_6aedc0, sub_7c2280
*/
void sub_1046fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1046fa0ULL || rel >= 0x1047170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047170 size=16 callers=5 calls=0
*/
void sub_1047170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047170ULL || rel >= 0x1047180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047180 size=80 callers=17 calls=0
*/
void sub_1047180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047180ULL || rel >= 0x10471d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010471d0 size=480 callers=1 calls=0
*/
void sub_10471d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10471d0ULL || rel >= 0x10473b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010473b0 size=560 callers=3 calls=0
*/
void sub_10473b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10473b0ULL || rel >= 0x10475e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010475e0 size=160 callers=0 calls=0
*/
void sub_10475e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10475e0ULL || rel >= 0x1047680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047680 size=32 callers=26 calls=0
*/
void sub_1047680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047680ULL || rel >= 0x10476a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010476a0 size=128 callers=0 calls=0
*/
void sub_10476a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10476a0ULL || rel >= 0x1047720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047720 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1047720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047720ULL || rel >= 0x1047770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047770 size=80 callers=0 calls=0
*/
void sub_1047770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047770ULL || rel >= 0x10477c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010477c0 size=80 callers=0 calls=0
*/
void sub_10477c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10477c0ULL || rel >= 0x1047810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047810 size=80 callers=0 calls=0
*/
void sub_1047810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047810ULL || rel >= 0x1047860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047860 size=80 callers=0 calls=0
*/
void sub_1047860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047860ULL || rel >= 0x10478b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010478b0 size=80 callers=0 calls=0
*/
void sub_10478b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10478b0ULL || rel >= 0x1047900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047900 size=80 callers=0 calls=0
*/
void sub_1047900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047900ULL || rel >= 0x1047950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047950 size=176 callers=1 calls=3
   calls: sub_1052c20, sub_15b8d60, sub_1749800
*/
void sub_1047950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047950ULL || rel >= 0x1047a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047a00 size=16 callers=1 calls=0
*/
void sub_1047a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047a00ULL || rel >= 0x1047a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047a10 size=720 callers=0 calls=5
   calls: RequestCheckConnectivity, sub_1047cf0, sub_104c020, sub_104dbb0, sub_15b8d60
*/
void sub_1047a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047a10ULL || rel >= 0x1047ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047ce0 size=16 callers=0 calls=0
*/
void sub_1047ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047ce0ULL || rel >= 0x1047cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047cf0 size=224 callers=2 calls=3
   calls: sub_174de50, sub_174e340, sub_174ebf0
*/
void sub_1047cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047cf0ULL || rel >= 0x1047dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047dd0 size=240 callers=0 calls=0
*/
void sub_1047dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047dd0ULL || rel >= 0x1047ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047ec0 size=16 callers=0 calls=0
*/
void sub_1047ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047ec0ULL || rel >= 0x1047ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047ed0 size=16 callers=0 calls=0
*/
void sub_1047ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047ed0ULL || rel >= 0x1047ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047ee0 size=96 callers=0 calls=0
*/
void sub_1047ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047ee0ULL || rel >= 0x1047f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047f40 size=64 callers=0 calls=0
*/
void sub_1047f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047f40ULL || rel >= 0x1047f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047f80 size=48 callers=0 calls=0
*/
void sub_1047f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047f80ULL || rel >= 0x1047fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047fb0 size=48 callers=0 calls=0
*/
void sub_1047fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047fb0ULL || rel >= 0x1047fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01047fe0 size=80 callers=0 calls=0
*/
void sub_1047fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1047fe0ULL || rel >= 0x1048030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048030 size=64 callers=0 calls=0
*/
void sub_1048030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048030ULL || rel >= 0x1048070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048070 size=48 callers=0 calls=0
*/
void sub_1048070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048070ULL || rel >= 0x10480a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010480a0 size=48 callers=0 calls=0
*/
void sub_10480a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10480a0ULL || rel >= 0x10480d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010480d0 size=128 callers=0 calls=0
*/
void sub_10480d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10480d0ULL || rel >= 0x1048150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048150 size=16 callers=1 calls=0
*/
void sub_1048150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048150ULL || rel >= 0x1048160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048160 size=48 callers=3 calls=0
*/
void sub_1048160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048160ULL || rel >= 0x1048190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048190 size=352 callers=1 calls=1
   calls: sub_136e710
*/
void sub_1048190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048190ULL || rel >= 0x10482f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010482f0 size=384 callers=5 calls=0
*/
void sub_10482f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10482f0ULL || rel >= 0x1048470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048470 size=384 callers=16 calls=0
*/
void sub_1048470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048470ULL || rel >= 0x10485f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010485f0 size=96 callers=3 calls=0
*/
void sub_10485f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10485f0ULL || rel >= 0x1048650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048650 size=128 callers=0 calls=0
*/
void sub_1048650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048650ULL || rel >= 0x10486d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010486d0 size=448 callers=1 calls=0
*/
void sub_10486d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10486d0ULL || rel >= 0x1048890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048890 size=16 callers=10 calls=0
*/
void sub_1048890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048890ULL || rel >= 0x10488a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010488a0 size=16 callers=1 calls=0
*/
void sub_10488a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10488a0ULL || rel >= 0x10488b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010488b0 size=16 callers=3 calls=0
*/
void sub_10488b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10488b0ULL || rel >= 0x10488c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010488c0 size=304 callers=2 calls=0
*/
void sub_10488c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10488c0ULL || rel >= 0x10489f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010489f0 size=16 callers=1 calls=0
*/
void sub_10489f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10489f0ULL || rel >= 0x1048a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048a00 size=128 callers=0 calls=0
*/
void sub_1048a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048a00ULL || rel >= 0x1048a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048a80 size=80 callers=8 calls=1
   calls: sub_5e2350
*/
void sub_1048a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048a80ULL || rel >= 0x1048ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048ad0 size=112 callers=0 calls=1
   calls: sub_7bf6d0
*/
void sub_1048ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048ad0ULL || rel >= 0x1048b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048b40 size=112 callers=0 calls=1
   calls: sub_7bf6d0
*/
void sub_1048b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048b40ULL || rel >= 0x1048bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048bb0 size=112 callers=0 calls=1
   calls: sub_7bf6d0
*/
void sub_1048bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048bb0ULL || rel >= 0x1048c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048c20 size=112 callers=0 calls=1
   calls: sub_7bf6d0
*/
void sub_1048c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048c20ULL || rel >= 0x1048c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048c90 size=112 callers=0 calls=1
   calls: sub_7bf6d0
*/
void sub_1048c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048c90ULL || rel >= 0x1048d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048d00 size=112 callers=0 calls=1
   calls: sub_7bf6d0
*/
void sub_1048d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048d00ULL || rel >= 0x1048d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048d70 size=112 callers=4 calls=2
   calls: sub_1048de0, sub_7847d0
*/
void sub_1048d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048d70ULL || rel >= 0x1048de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048de0 size=400 callers=10 calls=10
   calls: monsname, sub_1100aa0, sub_1100ad0, sub_67b990, sub_67bdb0, sub_762890, sub_762fd0, sub_767550, sub_767670, sub_7676c0
*/
void sub_1048de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048de0ULL || rel >= 0x1048f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01048f70 size=336 callers=3 calls=9
   calls: monsname, sub_1100aa0, sub_1100ad0, sub_136b500, sub_136b520, sub_136b590, sub_67b990, sub_67bdb0, sub_67be60
*/
void sub_1048f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1048f70ULL || rel >= 0x10490c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010490c0 size=240 callers=0 calls=0
*/
void sub_10490c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10490c0ULL || rel >= 0x10491b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010491b0 size=16 callers=0 calls=0
*/
void sub_10491b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10491b0ULL || rel >= 0x10491c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010491c0 size=16 callers=0 calls=0
*/
void sub_10491c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10491c0ULL || rel >= 0x10491d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010491d0 size=128 callers=0 calls=0
*/
void sub_10491d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10491d0ULL || rel >= 0x1049250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049250 size=864 callers=2 calls=7
   calls: sub_10495b0, sub_1049f60, sub_5cf9c0, sub_6c1c70, sub_6c2a10, sub_6c3260, sub_6c54e0
*/
void sub_1049250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049250ULL || rel >= 0x10495b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010495b0 size=272 callers=2 calls=1
   calls: sub_6c31e0
*/
void sub_10495b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10495b0ULL || rel >= 0x10496c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010496c0 size=768 callers=1 calls=11
   calls: sub_104b850, sub_104b950, sub_104be20, sub_1062380, sub_6c1cd0, sub_6c2000, sub_6c2200, sub_6c2430, sub_6c2b60, sub_6c2ba0, sub_6c57b0
*/
void sub_10496c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10496c0ULL || rel >= 0x10499c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010499c0 size=224 callers=1 calls=2
   calls: sub_10495b0, sub_6c3260
*/
void sub_10499c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10499c0ULL || rel >= 0x1049aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049aa0 size=32 callers=1 calls=0
*/
void sub_1049aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049aa0ULL || rel >= 0x1049ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049ac0 size=32 callers=3 calls=0
*/
void sub_1049ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049ac0ULL || rel >= 0x1049ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049ae0 size=32 callers=2 calls=0
*/
void sub_1049ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049ae0ULL || rel >= 0x1049b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049b00 size=32 callers=6 calls=0
*/
void sub_1049b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049b00ULL || rel >= 0x1049b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049b20 size=32 callers=11 calls=0
*/
void sub_1049b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049b20ULL || rel >= 0x1049b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049b40 size=144 callers=2 calls=2
   calls: sub_6aed00, sub_6c3180
*/
void sub_1049b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049b40ULL || rel >= 0x1049bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049bd0 size=80 callers=5 calls=0
*/
void sub_1049bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049bd0ULL || rel >= 0x1049c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049c20 size=96 callers=13 calls=0
*/
void sub_1049c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049c20ULL || rel >= 0x1049c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049c80 size=128 callers=1 calls=1
   calls: sub_6c32e0
*/
void sub_1049c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049c80ULL || rel >= 0x1049d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049d00 size=16 callers=3 calls=0
*/
void sub_1049d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049d00ULL || rel >= 0x1049d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049d10 size=16 callers=1 calls=0
*/
void sub_1049d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049d10ULL || rel >= 0x1049d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049d20 size=160 callers=0 calls=0
*/
void sub_1049d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049d20ULL || rel >= 0x1049dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049dc0 size=160 callers=0 calls=0
*/
void sub_1049dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049dc0ULL || rel >= 0x1049e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049e60 size=16 callers=0 calls=0
*/
void sub_1049e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049e60ULL || rel >= 0x1049e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049e70 size=112 callers=0 calls=0
*/
void sub_1049e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049e70ULL || rel >= 0x1049ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049ee0 size=16 callers=0 calls=0
*/
void sub_1049ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049ee0ULL || rel >= 0x1049ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049ef0 size=112 callers=0 calls=0
*/
void sub_1049ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049ef0ULL || rel >= 0x1049f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01049f60 size=224 callers=1 calls=1
   calls: sub_106d800
*/
void sub_1049f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1049f60ULL || rel >= 0x104a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a040 size=128 callers=0 calls=0
*/
void sub_104a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a040ULL || rel >= 0x104a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a0c0 size=64 callers=1 calls=1
   calls: sub_104a310
*/
void sub_104a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a0c0ULL || rel >= 0x104a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a100 size=112 callers=1 calls=1
   calls: sub_104a310
*/
void sub_104a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a100ULL || rel >= 0x104a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a170 size=16 callers=1 calls=0
*/
void sub_104a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a170ULL || rel >= 0x104a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a180 size=16 callers=2 calls=0
*/
void sub_104a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a180ULL || rel >= 0x104a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a190 size=16 callers=3 calls=0
*/
void sub_104a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a190ULL || rel >= 0x104a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a1a0 size=64 callers=2 calls=0
*/
void sub_104a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a1a0ULL || rel >= 0x104a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a1e0 size=64 callers=1 calls=0
*/
void sub_104a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a1e0ULL || rel >= 0x104a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a220 size=112 callers=1 calls=0
*/
void sub_104a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a220ULL || rel >= 0x104a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a290 size=112 callers=1 calls=0
*/
void sub_104a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a290ULL || rel >= 0x104a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a300 size=16 callers=2 calls=0
*/
void sub_104a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a300ULL || rel >= 0x104a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a310 size=240 callers=2 calls=0
*/
void sub_104a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a310ULL || rel >= 0x104a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a400 size=128 callers=0 calls=0
*/
void sub_104a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a400ULL || rel >= 0x104a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a480 size=208 callers=2 calls=6
   calls: sub_104a0c0, sub_104a9d0, sub_104ab60, sub_104ab70, sub_104ab80, sub_104aba0
*/
void sub_104a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a480ULL || rel >= 0x104a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a550 size=288 callers=2 calls=8
   calls: sub_104a220, sub_104ab60, sub_104ab70, sub_104ab80, sub_104ab90, sub_104aba0, sub_104ad10, sub_104ad80
*/
void sub_104a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a550ULL || rel >= 0x104a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a670 size=192 callers=3 calls=4
   calls: sub_104ab60, sub_104ab70, sub_104ab80, sub_104aba0
*/
void sub_104a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a670ULL || rel >= 0x104a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a730 size=112 callers=2 calls=0
*/
void sub_104a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a730ULL || rel >= 0x104a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a7a0 size=160 callers=3 calls=1
   calls: sub_104a300
*/
void sub_104a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a7a0ULL || rel >= 0x104a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a840 size=16 callers=1 calls=0
*/
void sub_104a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a840ULL || rel >= 0x104a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a850 size=384 callers=1 calls=0
*/
void sub_104a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a850ULL || rel >= 0x104a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104a9d0 size=272 callers=1 calls=0
*/
void sub_104a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a9d0ULL || rel >= 0x104aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104aae0 size=128 callers=0 calls=0
*/
void sub_104aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104aae0ULL || rel >= 0x104ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ab60 size=16 callers=6 calls=0
*/
void sub_104ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ab60ULL || rel >= 0x104ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ab70 size=16 callers=4 calls=0
*/
void sub_104ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ab70ULL || rel >= 0x104ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ab80 size=16 callers=4 calls=0
*/
void sub_104ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ab80ULL || rel >= 0x104ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ab90 size=16 callers=4 calls=0
*/
void sub_104ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ab90ULL || rel >= 0x104aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104aba0 size=16 callers=3 calls=0
*/
void sub_104aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104aba0ULL || rel >= 0x104abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104abb0 size=352 callers=4 calls=0
*/
void sub_104abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104abb0ULL || rel >= 0x104ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ad10 size=112 callers=8 calls=0
*/
void sub_104ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ad10ULL || rel >= 0x104ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ad80 size=48 callers=1 calls=0
*/
void sub_104ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ad80ULL || rel >= 0x104adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104adb0 size=368 callers=1 calls=1
   calls: sub_104abb0
*/
void sub_104adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104adb0ULL || rel >= 0x104af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104af20 size=560 callers=1 calls=7
   calls: sub_104a170, sub_104a180, sub_104a1a0, sub_104a1e0, sub_104a290, sub_104a300, sub_104abb0
*/
void sub_104af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104af20ULL || rel >= 0x104b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b150 size=32 callers=0 calls=0
*/
void sub_104b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b150ULL || rel >= 0x104b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b170 size=16 callers=0 calls=0
*/
void sub_104b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b170ULL || rel >= 0x104b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b180 size=48 callers=0 calls=0
*/
void sub_104b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b180ULL || rel >= 0x104b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b1b0 size=48 callers=1 calls=0
*/
void sub_104b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b1b0ULL || rel >= 0x104b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b1e0 size=16 callers=0 calls=0
*/
void sub_104b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b1e0ULL || rel >= 0x104b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b1f0 size=32 callers=0 calls=0
*/
void sub_104b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b1f0ULL || rel >= 0x104b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b210 size=32 callers=0 calls=0
*/
void sub_104b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b210ULL || rel >= 0x104b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b230 size=32 callers=0 calls=0
*/
void sub_104b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b230ULL || rel >= 0x104b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b250 size=32 callers=0 calls=0
*/
void sub_104b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b250ULL || rel >= 0x104b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b270 size=128 callers=0 calls=0
*/
void sub_104b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b270ULL || rel >= 0x104b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b2f0 size=224 callers=1 calls=2
   calls: sub_104a100, sub_104a1a0
*/
void sub_104b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b2f0ULL || rel >= 0x104b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b3d0 size=192 callers=0 calls=2
   calls: sub_1049b40, sub_104bc30
*/
void sub_104b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b3d0ULL || rel >= 0x104b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b490 size=80 callers=0 calls=0
*/
void sub_104b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b490ULL || rel >= 0x104b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b4e0 size=80 callers=0 calls=0
*/
void sub_104b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b4e0ULL || rel >= 0x104b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b530 size=176 callers=0 calls=0
*/
void sub_104b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b530ULL || rel >= 0x104b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b5e0 size=80 callers=0 calls=0
*/
void sub_104b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b5e0ULL || rel >= 0x104b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b630 size=80 callers=0 calls=0
*/
void sub_104b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b630ULL || rel >= 0x104b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b680 size=176 callers=0 calls=0
*/
void sub_104b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b680ULL || rel >= 0x104b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b730 size=80 callers=0 calls=0
*/
void sub_104b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b730ULL || rel >= 0x104b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b780 size=80 callers=0 calls=0
*/
void sub_104b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b780ULL || rel >= 0x104b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b7d0 size=128 callers=0 calls=0
*/
void sub_104b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b7d0ULL || rel >= 0x104b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b850 size=256 callers=1 calls=1
   calls: sub_106d0b0
*/
void sub_104b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b850ULL || rel >= 0x104b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104b950 size=256 callers=1 calls=1
   calls: sub_104b1b0
*/
void sub_104b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b950ULL || rel >= 0x104ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ba50 size=448 callers=3 calls=2
   calls: sub_106c6c0, sub_106c9a0
*/
void sub_104ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ba50ULL || rel >= 0x104bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bc10 size=32 callers=0 calls=0
*/
void sub_104bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bc10ULL || rel >= 0x104bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bc30 size=448 callers=1 calls=2
   calls: sub_104adb0, sub_104af20
*/
void sub_104bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bc30ULL || rel >= 0x104bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bdf0 size=16 callers=0 calls=0
*/
void sub_104bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bdf0ULL || rel >= 0x104be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104be00 size=32 callers=0 calls=0
*/
void sub_104be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104be00ULL || rel >= 0x104be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104be20 size=48 callers=1 calls=0
*/
void sub_104be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104be20ULL || rel >= 0x104be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104be50 size=16 callers=0 calls=0
*/
void sub_104be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104be50ULL || rel >= 0x104be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104be60 size=32 callers=0 calls=0
*/
void sub_104be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104be60ULL || rel >= 0x104be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104be80 size=32 callers=0 calls=0
*/
void sub_104be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104be80ULL || rel >= 0x104bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bea0 size=32 callers=0 calls=0
*/
void sub_104bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bea0ULL || rel >= 0x104bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bec0 size=32 callers=0 calls=0
*/
void sub_104bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bec0ULL || rel >= 0x104bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bee0 size=128 callers=0 calls=0
*/
void sub_104bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bee0ULL || rel >= 0x104bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bf60 size=96 callers=14 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bf60ULL || rel >= 0x104bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104bfc0 size=96 callers=0 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bfc0ULL || rel >= 0x104c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c020 size=96 callers=9 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c020ULL || rel >= 0x104c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c080 size=96 callers=0 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c080ULL || rel >= 0x104c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c0e0 size=96 callers=26 calls=3
   calls: sub_104d700, sub_104da30, sub_15bbd10
*/
void sub_104c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c0e0ULL || rel >= 0x104c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c140 size=96 callers=5 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c140ULL || rel >= 0x104c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c1a0 size=128 callers=2 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c1a0ULL || rel >= 0x104c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c220 size=272 callers=0 calls=4
   calls: sub_104d4e0, sub_104d700, sub_104da30, sub_165e140
*/
void sub_104c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c220ULL || rel >= 0x104c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c330 size=96 callers=0 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c330ULL || rel >= 0x104c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c390 size=96 callers=0 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c390ULL || rel >= 0x104c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c3f0 size=416 callers=1 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c3f0ULL || rel >= 0x104c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c590 size=128 callers=1 calls=2
   calls: sub_104d700, sub_104da30
*/
void sub_104c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c590ULL || rel >= 0x104c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c610 size=320 callers=1 calls=2
   calls: sub_104c750, sub_104ca50
*/
void sub_104c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c610ULL || rel >= 0x104c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c750 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_104c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c750ULL || rel >= 0x104c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c910 size=16 callers=0 calls=0
*/
void sub_104c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c910ULL || rel >= 0x104c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c920 size=16 callers=0 calls=0
*/
void sub_104c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c920ULL || rel >= 0x104c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c930 size=16 callers=0 calls=0
*/
void sub_104c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c930ULL || rel >= 0x104c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c940 size=144 callers=0 calls=1
   calls: sub_104cb80
*/
void sub_104c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c940ULL || rel >= 0x104c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c9d0 size=16 callers=0 calls=0
*/
void sub_104c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c9d0ULL || rel >= 0x104c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c9e0 size=16 callers=0 calls=0
*/
void sub_104c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c9e0ULL || rel >= 0x104c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104c9f0 size=16 callers=0 calls=0
*/
void sub_104c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c9f0ULL || rel >= 0x104ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ca00 size=16 callers=0 calls=0
*/
void sub_104ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ca00ULL || rel >= 0x104ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ca10 size=16 callers=0 calls=0
*/
void sub_104ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ca10ULL || rel >= 0x104ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ca20 size=16 callers=0 calls=0
*/
void sub_104ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ca20ULL || rel >= 0x104ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ca30 size=16 callers=0 calls=0
*/
void sub_104ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ca30ULL || rel >= 0x104ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ca40 size=16 callers=0 calls=0
*/
void sub_104ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ca40ULL || rel >= 0x104ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ca50 size=304 callers=1 calls=0
*/
void sub_104ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ca50ULL || rel >= 0x104cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104cb80 size=272 callers=1 calls=3
   calls: sub_104cc90, sub_672c10, sub_c386f0
*/
void sub_104cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104cb80ULL || rel >= 0x104cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104cc90 size=272 callers=1 calls=2
   calls: sub_104cda0, sub_e7b660
*/
void sub_104cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104cc90ULL || rel >= 0x104cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104cda0 size=224 callers=1 calls=3
   calls: sub_104ce80, sub_7c2da0, sub_e7b5e0
*/
void sub_104cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104cda0ULL || rel >= 0x104ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ce80 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_104ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ce80ULL || rel >= 0x104cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104cf70 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_104cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104cf70ULL || rel >= 0x104cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104cff0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_104cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104cff0ULL || rel >= 0x104d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d160 size=96 callers=0 calls=1
   calls: sub_104d380
*/
void sub_104d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d160ULL || rel >= 0x104d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d1c0 size=16 callers=0 calls=0
*/
void sub_104d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d1c0ULL || rel >= 0x104d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d1d0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_104d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d1d0ULL || rel >= 0x104d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d270 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_104d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d270ULL || rel >= 0x104d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d330 size=16 callers=0 calls=0
*/
void sub_104d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d330ULL || rel >= 0x104d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d340 size=16 callers=0 calls=0
*/
void sub_104d340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d340ULL || rel >= 0x104d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d350 size=16 callers=0 calls=0
*/
void sub_104d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d350ULL || rel >= 0x104d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d360 size=32 callers=0 calls=0
*/
void sub_104d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d360ULL || rel >= 0x104d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d380 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_104d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d380ULL || rel >= 0x104d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

