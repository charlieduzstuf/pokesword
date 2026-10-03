/* main functions 0107b3f0..01091db0 (135 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0107b3f0 size=48 callers=0 calls=1
   calls: sub_107ab40
*/
void sub_107b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b3f0ULL || rel >= 0x107b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b420 size=16 callers=0 calls=0
*/
void sub_107b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b420ULL || rel >= 0x107b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b430 size=16 callers=0 calls=0
*/
void sub_107b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b430ULL || rel >= 0x107b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b440 size=16 callers=0 calls=0
*/
void sub_107b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b440ULL || rel >= 0x107b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b450 size=16 callers=0 calls=0
*/
void sub_107b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b450ULL || rel >= 0x107b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b460 size=16 callers=0 calls=0
*/
void sub_107b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b460ULL || rel >= 0x107b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b470 size=512 callers=1 calls=2
   calls: sub_107b8a0, sub_158f0c0
*/
void sub_107b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b470ULL || rel >= 0x107b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b670 size=560 callers=8 calls=4
   calls: sub_15b9340, sub_15b9390, sub_15bab00, sub_15bc1e0
*/
void sub_107b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b670ULL || rel >= 0x107b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b8a0 size=592 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_107b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b8a0ULL || rel >= 0x107baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107baf0 size=64 callers=3 calls=1
   calls: sub_107baf0
*/
void sub_107baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107baf0ULL || rel >= 0x107bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bb30 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_107bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bb30ULL || rel >= 0x107bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bb70 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_107bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bb70ULL || rel >= 0x107bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bbb0 size=16 callers=0 calls=0
*/
void sub_107bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bbb0ULL || rel >= 0x107bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bbc0 size=96 callers=0 calls=0
*/
void sub_107bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bbc0ULL || rel >= 0x107bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bc20 size=16 callers=0 calls=0
*/
void sub_107bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bc20ULL || rel >= 0x107bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bc30 size=48 callers=0 calls=0
*/
void sub_107bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bc30ULL || rel >= 0x107bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107bc60 size=464 callers=3 calls=0
*/
void sub_107bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107bc60ULL || rel >= 0x107be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107be30 size=128 callers=0 calls=0
*/
void sub_107be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107be30ULL || rel >= 0x107beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107beb0 size=2112 callers=1 calls=10
   calls: sub_107c6f0, sub_107c870, sub_1084990, sub_1084d40, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_784f40, sub_f9cab0
   ref: RequestUploadCompetitionTeam
*/
void RequestUploadCompetitionTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107beb0ULL || rel >= 0x107c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107c6f0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1085320, sub_6ce100
*/
void sub_107c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107c6f0ULL || rel >= 0x107c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107c870 size=384 callers=9 calls=3
   calls: sub_1054f70, sub_1085f00, sub_6ce100
*/
void sub_107c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107c870ULL || rel >= 0x107c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107c9f0 size=2064 callers=1 calls=9
   calls: sub_107c870, sub_107d200, sub_1084d40, sub_1087230, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestDownloadCompetitionTeam
*/
void RequestDownloadCompetitionTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107c9f0ULL || rel >= 0x107d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107d200 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10875e0, sub_6ce100
*/
void sub_107d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107d200ULL || rel >= 0x107d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107d380 size=1744 callers=1 calls=9
   calls: sub_107da50, sub_107db80, sub_107dd00, sub_1088d10, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestCheckAndEntryCompetition
*/
void RequestCheckAndEntryCompetition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107d380ULL || rel >= 0x107da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107da50 size=304 callers=24 calls=1
   calls: sub_5e2350
*/
void sub_107da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107da50ULL || rel >= 0x107db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107db80 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10892f0, sub_6ce100
*/
void sub_107db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107db80ULL || rel >= 0x107dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107dd00 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1089dc0, sub_6ce100
*/
void sub_107dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107dd00ULL || rel >= 0x107de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107de80 size=1936 callers=1 calls=11
   calls: sub_10563d0, sub_107da50, sub_107e610, sub_107e790, sub_108b030, sub_1100970, sub_15b7b20, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestCreateUserCompetition
*/
void RequestCreateUserCompetition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107de80ULL || rel >= 0x107e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107e610 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_108b600, sub_6ce100
*/
void sub_107e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107e610ULL || rel >= 0x107e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107e790 size=384 callers=25 calls=3
   calls: sub_1054f70, sub_108c250, sub_6ce100
*/
void sub_107e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107e790ULL || rel >= 0x107e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107e910 size=1920 callers=3 calls=10
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_107f090, sub_108d500, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestSearchCompetition
*/
void RequestSearchCompetition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107e910ULL || rel >= 0x107f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107f090 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_108dc90, sub_6ce100
*/
void sub_107f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107f090ULL || rel >= 0x107f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107f210 size=2064 callers=3 calls=9
   calls: sub_107fa20, sub_107fba0, sub_108ef90, sub_108f540, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetCompetition
*/
void RequestGetCompetition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107f210ULL || rel >= 0x107fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107fa20 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_108fb20, sub_6ce100
*/
void sub_107fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107fa20ULL || rel >= 0x107fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107fba0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10906f0, sub_6ce100
*/
void sub_107fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107fba0ULL || rel >= 0x107fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107fd20 size=2064 callers=1 calls=9
   calls: sub_1080530, sub_10806b0, sub_1091e40, sub_1092430, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetRankMatchSetting
*/
void RequestGetRankMatchSetting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107fd20ULL || rel >= 0x1080530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01080530 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1092a10, sub_6ce100
*/
void sub_1080530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1080530ULL || rel >= 0x10806b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010806b0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10935e0, sub_6ce100
*/
void sub_10806b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10806b0ULL || rel >= 0x1080830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01080830 size=1872 callers=7 calls=10
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_1080f80, sub_10948c0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetOrCreateStats
*/
void RequestGetOrCreateStats(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1080830ULL || rel >= 0x1080f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01080f80 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1094dd0, sub_6ce100
*/
void sub_1080f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1080f80ULL || rel >= 0x1081100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01081100 size=1888 callers=4 calls=11
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_1081860, sub_1083e90, sub_10960d0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetStats
*/
void RequestGetStats(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1081100ULL || rel >= 0x1081860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01081860 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1096980, sub_6ce100
*/
void sub_1081860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1081860ULL || rel >= 0x10819e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010819e0 size=1904 callers=2 calls=10
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_1082150, sub_1097810, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestStartRound
*/
void RequestStartRound(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10819e0ULL || rel >= 0x1082150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01082150 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1097c40, sub_6ce100
*/
void sub_1082150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1082150ULL || rel >= 0x10822d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010822d0 size=1616 callers=2 calls=8
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_1082920, sub_1100970, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestEndRound
*/
void RequestEndRound(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10822d0ULL || rel >= 0x1082920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01082920 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1098af0, sub_6ce100
*/
void sub_1082920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1082920ULL || rel >= 0x1082aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01082aa0 size=2080 callers=5 calls=9
   calls: sub_10832c0, sub_1083440, sub_1099d50, sub_109a170, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetCompetitionRankingRank
*/
void RequestGetCompetitionRankingRank(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1082aa0ULL || rel >= 0x10832c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010832c0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_109a750, sub_6ce100
*/
void sub_10832c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10832c0ULL || rel >= 0x1083440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01083440 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_109b320, sub_6ce100
*/
void sub_1083440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1083440ULL || rel >= 0x10835c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010835c0 size=1872 callers=4 calls=10
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_1083d10, sub_109c620, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestCheckConnectivity
*/
void RequestCheckConnectivity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10835c0ULL || rel >= 0x1083d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01083d10 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_109ca30, sub_6ce100
*/
void sub_1083d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1083d10ULL || rel >= 0x1083e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01083e90 size=544 callers=1 calls=3
   calls: sub_15b05a0, sub_15b9340, sub_15b9390
*/
void sub_1083e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1083e90ULL || rel >= 0x10840b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010840b0 size=144 callers=0 calls=0
*/
void sub_10840b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10840b0ULL || rel >= 0x1084140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084140 size=144 callers=0 calls=0
*/
void sub_1084140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084140ULL || rel >= 0x10841d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010841d0 size=240 callers=0 calls=0
*/
void sub_10841d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10841d0ULL || rel >= 0x10842c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010842c0 size=144 callers=0 calls=0
*/
void sub_10842c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10842c0ULL || rel >= 0x1084350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084350 size=144 callers=0 calls=0
*/
void sub_1084350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084350ULL || rel >= 0x10843e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010843e0 size=16 callers=0 calls=0
*/
void sub_10843e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10843e0ULL || rel >= 0x10843f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010843f0 size=16 callers=0 calls=0
*/
void sub_10843f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10843f0ULL || rel >= 0x1084400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084400 size=144 callers=0 calls=0
*/
void sub_1084400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084400ULL || rel >= 0x1084490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084490 size=144 callers=0 calls=0
*/
void sub_1084490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084490ULL || rel >= 0x1084520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084520 size=144 callers=0 calls=0
*/
void sub_1084520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084520ULL || rel >= 0x10845b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010845b0 size=144 callers=0 calls=0
*/
void sub_10845b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10845b0ULL || rel >= 0x1084640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084640 size=240 callers=0 calls=0
*/
void sub_1084640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084640ULL || rel >= 0x1084730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084730 size=144 callers=0 calls=0
*/
void sub_1084730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084730ULL || rel >= 0x10847c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010847c0 size=144 callers=0 calls=0
*/
void sub_10847c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10847c0ULL || rel >= 0x1084850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084850 size=16 callers=0 calls=0
*/
void sub_1084850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084850ULL || rel >= 0x1084860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084860 size=16 callers=0 calls=0
*/
void sub_1084860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084860ULL || rel >= 0x1084870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084870 size=144 callers=0 calls=0
*/
void sub_1084870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084870ULL || rel >= 0x1084900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084900 size=144 callers=0 calls=0
*/
void sub_1084900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084900ULL || rel >= 0x1084990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084990 size=272 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1084990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084990ULL || rel >= 0x1084aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084aa0 size=80 callers=0 calls=0
*/
void sub_1084aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084aa0ULL || rel >= 0x1084af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084af0 size=240 callers=0 calls=0
*/
void sub_1084af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084af0ULL || rel >= 0x1084be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084be0 size=80 callers=0 calls=0
*/
void sub_1084be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084be0ULL || rel >= 0x1084c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084c30 size=80 callers=0 calls=0
*/
void sub_1084c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084c30ULL || rel >= 0x1084c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084c80 size=16 callers=0 calls=0
*/
void sub_1084c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084c80ULL || rel >= 0x1084c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084c90 size=16 callers=0 calls=0
*/
void sub_1084c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084c90ULL || rel >= 0x1084ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084ca0 size=80 callers=0 calls=0
*/
void sub_1084ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084ca0ULL || rel >= 0x1084cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084cf0 size=80 callers=0 calls=0
*/
void sub_1084cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084cf0ULL || rel >= 0x1084d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084d40 size=304 callers=9 calls=1
   calls: sub_6ce110
*/
void sub_1084d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084d40ULL || rel >= 0x1084e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084e70 size=256 callers=0 calls=0
*/
void sub_1084e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084e70ULL || rel >= 0x1084f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084f70 size=16 callers=0 calls=0
*/
void sub_1084f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084f70ULL || rel >= 0x1084f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084f80 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1084f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084f80ULL || rel >= 0x1084ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01084ff0 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1084ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1084ff0ULL || rel >= 0x1085140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085140 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1085140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085140ULL || rel >= 0x10851a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010851a0 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10851a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10851a0ULL || rel >= 0x1085200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085200 size=16 callers=0 calls=0
*/
void sub_1085200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085200ULL || rel >= 0x1085210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085210 size=16 callers=0 calls=0
*/
void sub_1085210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085210ULL || rel >= 0x1085220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085220 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1085220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085220ULL || rel >= 0x1085290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085290 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1085290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085290ULL || rel >= 0x1085300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085300 size=16 callers=0 calls=0
*/
void sub_1085300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085300ULL || rel >= 0x1085310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085310 size=16 callers=0 calls=0
*/
void sub_1085310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085310ULL || rel >= 0x1085320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085320 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1085320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085320ULL || rel >= 0x1085480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085480 size=176 callers=0 calls=0
*/
void sub_1085480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085480ULL || rel >= 0x1085530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085530 size=176 callers=0 calls=0
*/
void sub_1085530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085530ULL || rel >= 0x10855e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010855e0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10855e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10855e0ULL || rel >= 0x1085650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085650 size=64 callers=0 calls=1
   calls: sub_1085c80
*/
void sub_1085650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085650ULL || rel >= 0x1085690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085690 size=16 callers=0 calls=0
*/
void sub_1085690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085690ULL || rel >= 0x10856a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010856a0 size=48 callers=0 calls=0
*/
void sub_10856a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10856a0ULL || rel >= 0x10856d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010856d0 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10856d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10856d0ULL || rel >= 0x1085750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085750 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1085750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085750ULL || rel >= 0x10857c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010857c0 size=176 callers=0 calls=0
*/
void sub_10857c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10857c0ULL || rel >= 0x1085870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085870 size=176 callers=0 calls=0
*/
void sub_1085870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085870ULL || rel >= 0x1085920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085920 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1085920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085920ULL || rel >= 0x1085990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085990 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1085990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085990ULL || rel >= 0x1085a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085a00 size=176 callers=0 calls=0
*/
void sub_1085a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085a00ULL || rel >= 0x1085ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085ab0 size=176 callers=0 calls=0
*/
void sub_1085ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085ab0ULL || rel >= 0x1085b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085b60 size=48 callers=0 calls=0
*/
void sub_1085b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085b60ULL || rel >= 0x1085b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085b90 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1085b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085b90ULL || rel >= 0x1085c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085c10 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1085c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085c10ULL || rel >= 0x1085c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085c80 size=592 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1085c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085c80ULL || rel >= 0x1085ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085ed0 size=16 callers=0 calls=0
*/
void sub_1085ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085ed0ULL || rel >= 0x1085ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085ee0 size=16 callers=0 calls=0
*/
void sub_1085ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085ee0ULL || rel >= 0x1085ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085ef0 size=16 callers=0 calls=0
*/
void sub_1085ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085ef0ULL || rel >= 0x1085f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01085f00 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1085f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1085f00ULL || rel >= 0x1086040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086040 size=176 callers=0 calls=0
*/
void sub_1086040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086040ULL || rel >= 0x10860f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010860f0 size=176 callers=0 calls=0
*/
void sub_10860f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10860f0ULL || rel >= 0x10861a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010861a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10861a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10861a0ULL || rel >= 0x1086210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086210 size=64 callers=0 calls=1
   calls: sub_10868c0
*/
void sub_1086210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086210ULL || rel >= 0x1086250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086250 size=16 callers=0 calls=0
*/
void sub_1086250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086250ULL || rel >= 0x1086260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086260 size=48 callers=0 calls=0
*/
void sub_1086260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086260ULL || rel >= 0x1086290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086290 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1086290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086290ULL || rel >= 0x1086350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086350 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1086350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086350ULL || rel >= 0x10863c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010863c0 size=176 callers=0 calls=0
*/
void sub_10863c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10863c0ULL || rel >= 0x1086470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086470 size=176 callers=0 calls=0
*/
void sub_1086470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086470ULL || rel >= 0x1086520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086520 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1086520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086520ULL || rel >= 0x1086590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086590 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1086590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086590ULL || rel >= 0x1086600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086600 size=176 callers=0 calls=0
*/
void sub_1086600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086600ULL || rel >= 0x10866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010866b0 size=176 callers=0 calls=0
*/
void sub_10866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10866b0ULL || rel >= 0x1086760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086760 size=48 callers=0 calls=0
*/
void sub_1086760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086760ULL || rel >= 0x1086790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086790 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1086790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086790ULL || rel >= 0x1086850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086850 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1086850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086850ULL || rel >= 0x10868c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010868c0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10868c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10868c0ULL || rel >= 0x1086b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086b00 size=16 callers=0 calls=0
*/
void sub_1086b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086b00ULL || rel >= 0x1086b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086b10 size=16 callers=0 calls=0
*/
void sub_1086b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086b10ULL || rel >= 0x1086b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086b20 size=16 callers=0 calls=0
*/
void sub_1086b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086b20ULL || rel >= 0x1086b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086b30 size=64 callers=0 calls=0
*/
void sub_1086b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086b30ULL || rel >= 0x1086b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086b70 size=80 callers=0 calls=0
*/
void sub_1086b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086b70ULL || rel >= 0x1086bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086bc0 size=96 callers=0 calls=0
*/
void sub_1086bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086bc0ULL || rel >= 0x1086c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086c20 size=32 callers=0 calls=0
*/
void sub_1086c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086c20ULL || rel >= 0x1086c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086c40 size=64 callers=0 calls=0
*/
void sub_1086c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086c40ULL || rel >= 0x1086c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086c80 size=64 callers=0 calls=0
*/
void sub_1086c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086c80ULL || rel >= 0x1086cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086cc0 size=32 callers=0 calls=0
*/
void sub_1086cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086cc0ULL || rel >= 0x1086ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086ce0 size=16 callers=0 calls=0
*/
void sub_1086ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086ce0ULL || rel >= 0x1086cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086cf0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_1086cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086cf0ULL || rel >= 0x1086d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086d50 size=64 callers=0 calls=0
*/
void sub_1086d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086d50ULL || rel >= 0x1086d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086d90 size=32 callers=0 calls=0
*/
void sub_1086d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086d90ULL || rel >= 0x1086db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086db0 size=16 callers=0 calls=0
*/
void sub_1086db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086db0ULL || rel >= 0x1086dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086dc0 size=144 callers=0 calls=0
*/
void sub_1086dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086dc0ULL || rel >= 0x1086e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086e50 size=144 callers=0 calls=0
*/
void sub_1086e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086e50ULL || rel >= 0x1086ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086ee0 size=240 callers=0 calls=0
*/
void sub_1086ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086ee0ULL || rel >= 0x1086fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01086fd0 size=144 callers=0 calls=0
*/
void sub_1086fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1086fd0ULL || rel >= 0x1087060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087060 size=144 callers=0 calls=0
*/
void sub_1087060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087060ULL || rel >= 0x10870f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010870f0 size=16 callers=0 calls=0
*/
void sub_10870f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10870f0ULL || rel >= 0x1087100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087100 size=16 callers=0 calls=0
*/
void sub_1087100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087100ULL || rel >= 0x1087110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087110 size=144 callers=0 calls=0
*/
void sub_1087110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087110ULL || rel >= 0x10871a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010871a0 size=144 callers=0 calls=0
*/
void sub_10871a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10871a0ULL || rel >= 0x1087230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087230 size=272 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1087230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087230ULL || rel >= 0x1087340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087340 size=80 callers=0 calls=0
*/
void sub_1087340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087340ULL || rel >= 0x1087390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087390 size=240 callers=0 calls=0
*/
void sub_1087390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087390ULL || rel >= 0x1087480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087480 size=80 callers=0 calls=0
*/
void sub_1087480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087480ULL || rel >= 0x10874d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010874d0 size=80 callers=0 calls=0
*/
void sub_10874d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10874d0ULL || rel >= 0x1087520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087520 size=16 callers=0 calls=0
*/
void sub_1087520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087520ULL || rel >= 0x1087530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087530 size=16 callers=0 calls=0
*/
void sub_1087530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087530ULL || rel >= 0x1087540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087540 size=80 callers=0 calls=0
*/
void sub_1087540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087540ULL || rel >= 0x1087590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087590 size=80 callers=0 calls=0
*/
void sub_1087590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087590ULL || rel >= 0x10875e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010875e0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10875e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10875e0ULL || rel >= 0x1087740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087740 size=176 callers=0 calls=0
*/
void sub_1087740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087740ULL || rel >= 0x10877f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010877f0 size=176 callers=0 calls=0
*/
void sub_10877f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10877f0ULL || rel >= 0x10878a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010878a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10878a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10878a0ULL || rel >= 0x1087910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087910 size=64 callers=0 calls=1
   calls: sub_1087f40
*/
void sub_1087910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087910ULL || rel >= 0x1087950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087950 size=16 callers=0 calls=0
*/
void sub_1087950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087950ULL || rel >= 0x1087960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087960 size=48 callers=0 calls=0
*/
void sub_1087960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087960ULL || rel >= 0x1087990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087990 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1087990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087990ULL || rel >= 0x1087a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087a10 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1087a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087a10ULL || rel >= 0x1087a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087a80 size=176 callers=0 calls=0
*/
void sub_1087a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087a80ULL || rel >= 0x1087b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087b30 size=176 callers=0 calls=0
*/
void sub_1087b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087b30ULL || rel >= 0x1087be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087be0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1087be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087be0ULL || rel >= 0x1087c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087c50 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1087c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087c50ULL || rel >= 0x1087cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087cc0 size=176 callers=0 calls=0
*/
void sub_1087cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087cc0ULL || rel >= 0x1087d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087d70 size=176 callers=0 calls=0
*/
void sub_1087d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087d70ULL || rel >= 0x1087e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087e20 size=48 callers=0 calls=0
*/
void sub_1087e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087e20ULL || rel >= 0x1087e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087e50 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1087e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087e50ULL || rel >= 0x1087ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087ed0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1087ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087ed0ULL || rel >= 0x1087f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01087f40 size=592 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1087f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1087f40ULL || rel >= 0x1088190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088190 size=16 callers=0 calls=0
*/
void sub_1088190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088190ULL || rel >= 0x10881a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010881a0 size=16 callers=0 calls=0
*/
void sub_10881a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10881a0ULL || rel >= 0x10881b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010881b0 size=16 callers=0 calls=0
*/
void sub_10881b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10881b0ULL || rel >= 0x10881c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010881c0 size=32 callers=0 calls=0
*/
void sub_10881c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10881c0ULL || rel >= 0x10881e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010881e0 size=80 callers=0 calls=0
*/
void sub_10881e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10881e0ULL || rel >= 0x1088230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088230 size=96 callers=0 calls=0
*/
void sub_1088230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088230ULL || rel >= 0x1088290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088290 size=32 callers=0 calls=0
*/
void sub_1088290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088290ULL || rel >= 0x10882b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010882b0 size=64 callers=0 calls=0
*/
void sub_10882b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10882b0ULL || rel >= 0x10882f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010882f0 size=64 callers=0 calls=0
*/
void sub_10882f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10882f0ULL || rel >= 0x1088330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088330 size=32 callers=0 calls=0
*/
void sub_1088330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088330ULL || rel >= 0x1088350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088350 size=16 callers=0 calls=0
*/
void sub_1088350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088350ULL || rel >= 0x1088360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088360 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_1088360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088360ULL || rel >= 0x10883c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010883c0 size=64 callers=0 calls=0
*/
void sub_10883c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10883c0ULL || rel >= 0x1088400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088400 size=32 callers=0 calls=0
*/
void sub_1088400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088400ULL || rel >= 0x1088420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088420 size=16 callers=0 calls=0
*/
void sub_1088420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088420ULL || rel >= 0x1088430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088430 size=144 callers=0 calls=0
*/
void sub_1088430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088430ULL || rel >= 0x10884c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010884c0 size=144 callers=0 calls=0
*/
void sub_10884c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10884c0ULL || rel >= 0x1088550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088550 size=240 callers=0 calls=0
*/
void sub_1088550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088550ULL || rel >= 0x1088640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088640 size=144 callers=0 calls=0
*/
void sub_1088640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088640ULL || rel >= 0x10886d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010886d0 size=144 callers=0 calls=0
*/
void sub_10886d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10886d0ULL || rel >= 0x1088760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088760 size=16 callers=0 calls=0
*/
void sub_1088760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088760ULL || rel >= 0x1088770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088770 size=16 callers=0 calls=0
*/
void sub_1088770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088770ULL || rel >= 0x1088780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088780 size=144 callers=0 calls=0
*/
void sub_1088780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088780ULL || rel >= 0x1088810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088810 size=144 callers=0 calls=0
*/
void sub_1088810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088810ULL || rel >= 0x10888a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010888a0 size=144 callers=0 calls=0
*/
void sub_10888a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10888a0ULL || rel >= 0x1088930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088930 size=144 callers=0 calls=0
*/
void sub_1088930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088930ULL || rel >= 0x10889c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010889c0 size=240 callers=0 calls=0
*/
void sub_10889c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10889c0ULL || rel >= 0x1088ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088ab0 size=144 callers=0 calls=0
*/
void sub_1088ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088ab0ULL || rel >= 0x1088b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088b40 size=144 callers=0 calls=0
*/
void sub_1088b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088b40ULL || rel >= 0x1088bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088bd0 size=16 callers=0 calls=0
*/
void sub_1088bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088bd0ULL || rel >= 0x1088be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088be0 size=16 callers=0 calls=0
*/
void sub_1088be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088be0ULL || rel >= 0x1088bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088bf0 size=144 callers=0 calls=0
*/
void sub_1088bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088bf0ULL || rel >= 0x1088c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088c80 size=144 callers=0 calls=0
*/
void sub_1088c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088c80ULL || rel >= 0x1088d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088d10 size=304 callers=1 calls=1
   calls: sub_6ce110
*/
void sub_1088d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088d10ULL || rel >= 0x1088e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088e40 size=256 callers=0 calls=0
*/
void sub_1088e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088e40ULL || rel >= 0x1088f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088f40 size=16 callers=0 calls=0
*/
void sub_1088f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088f40ULL || rel >= 0x1088f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088f50 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1088f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088f50ULL || rel >= 0x1088fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01088fc0 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1088fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1088fc0ULL || rel >= 0x1089110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089110 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1089110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089110ULL || rel >= 0x1089170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089170 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1089170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089170ULL || rel >= 0x10891d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010891d0 size=16 callers=0 calls=0
*/
void sub_10891d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10891d0ULL || rel >= 0x10891e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010891e0 size=16 callers=0 calls=0
*/
void sub_10891e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10891e0ULL || rel >= 0x10891f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010891f0 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10891f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10891f0ULL || rel >= 0x1089260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089260 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1089260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089260ULL || rel >= 0x10892d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010892d0 size=16 callers=0 calls=0
*/
void sub_10892d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10892d0ULL || rel >= 0x10892e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010892e0 size=16 callers=0 calls=0
*/
void sub_10892e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10892e0ULL || rel >= 0x10892f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010892f0 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10892f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10892f0ULL || rel >= 0x1089430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089430 size=144 callers=0 calls=0
*/
void sub_1089430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089430ULL || rel >= 0x10894c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010894c0 size=144 callers=0 calls=0
*/
void sub_10894c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10894c0ULL || rel >= 0x1089550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089550 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1089550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089550ULL || rel >= 0x10895c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010895c0 size=64 callers=0 calls=1
   calls: sub_1089b70
*/
void sub_10895c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10895c0ULL || rel >= 0x1089600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089600 size=16 callers=0 calls=0
*/
void sub_1089600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089600ULL || rel >= 0x1089610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089610 size=48 callers=0 calls=0
*/
void sub_1089610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089610ULL || rel >= 0x1089640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089640 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1089640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089640ULL || rel >= 0x10896c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010896c0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10896c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10896c0ULL || rel >= 0x1089730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089730 size=144 callers=0 calls=0
*/
void sub_1089730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089730ULL || rel >= 0x10897c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010897c0 size=144 callers=0 calls=0
*/
void sub_10897c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10897c0ULL || rel >= 0x1089850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089850 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1089850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089850ULL || rel >= 0x10898c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010898c0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10898c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10898c0ULL || rel >= 0x1089930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089930 size=144 callers=0 calls=0
*/
void sub_1089930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089930ULL || rel >= 0x10899c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010899c0 size=144 callers=0 calls=0
*/
void sub_10899c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10899c0ULL || rel >= 0x1089a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089a50 size=48 callers=0 calls=0
*/
void sub_1089a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089a50ULL || rel >= 0x1089a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089a80 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1089a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089a80ULL || rel >= 0x1089b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089b00 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1089b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089b00ULL || rel >= 0x1089b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089b70 size=544 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1089b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089b70ULL || rel >= 0x1089d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089d90 size=16 callers=0 calls=0
*/
void sub_1089d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089d90ULL || rel >= 0x1089da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089da0 size=16 callers=0 calls=0
*/
void sub_1089da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089da0ULL || rel >= 0x1089db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089db0 size=16 callers=0 calls=0
*/
void sub_1089db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089db0ULL || rel >= 0x1089dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089dc0 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1089dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089dc0ULL || rel >= 0x1089f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089f00 size=176 callers=0 calls=0
*/
void sub_1089f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089f00ULL || rel >= 0x1089fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01089fb0 size=176 callers=0 calls=0
*/
void sub_1089fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1089fb0ULL || rel >= 0x108a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a060 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a060ULL || rel >= 0x108a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a0d0 size=64 callers=0 calls=1
   calls: sub_108a780
*/
void sub_108a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a0d0ULL || rel >= 0x108a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a110 size=16 callers=0 calls=0
*/
void sub_108a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a110ULL || rel >= 0x108a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a120 size=48 callers=0 calls=0
*/
void sub_108a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a120ULL || rel >= 0x108a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a150 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a150ULL || rel >= 0x108a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a210 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a210ULL || rel >= 0x108a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a280 size=176 callers=0 calls=0
*/
void sub_108a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a280ULL || rel >= 0x108a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a330 size=176 callers=0 calls=0
*/
void sub_108a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a330ULL || rel >= 0x108a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a3e0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a3e0ULL || rel >= 0x108a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a450 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a450ULL || rel >= 0x108a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a4c0 size=176 callers=0 calls=0
*/
void sub_108a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a4c0ULL || rel >= 0x108a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a570 size=176 callers=0 calls=0
*/
void sub_108a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a570ULL || rel >= 0x108a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a620 size=48 callers=0 calls=0
*/
void sub_108a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a620ULL || rel >= 0x108a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a650 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a650ULL || rel >= 0x108a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a710 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a710ULL || rel >= 0x108a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a780 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_108a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a780ULL || rel >= 0x108a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a9c0 size=16 callers=0 calls=0
*/
void sub_108a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a9c0ULL || rel >= 0x108a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108a9d0 size=64 callers=0 calls=0
*/
void sub_108a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108a9d0ULL || rel >= 0x108aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aa10 size=32 callers=0 calls=0
*/
void sub_108aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aa10ULL || rel >= 0x108aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aa30 size=16 callers=0 calls=0
*/
void sub_108aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aa30ULL || rel >= 0x108aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aa40 size=64 callers=0 calls=0
*/
void sub_108aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aa40ULL || rel >= 0x108aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aa80 size=64 callers=0 calls=0
*/
void sub_108aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aa80ULL || rel >= 0x108aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aac0 size=32 callers=0 calls=0
*/
void sub_108aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aac0ULL || rel >= 0x108aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aae0 size=16 callers=0 calls=0
*/
void sub_108aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aae0ULL || rel >= 0x108aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aaf0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_108aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aaf0ULL || rel >= 0x108ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ab50 size=64 callers=0 calls=0
*/
void sub_108ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ab50ULL || rel >= 0x108ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ab90 size=32 callers=0 calls=0
*/
void sub_108ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ab90ULL || rel >= 0x108abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108abb0 size=16 callers=0 calls=0
*/
void sub_108abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108abb0ULL || rel >= 0x108abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108abc0 size=144 callers=0 calls=0
*/
void sub_108abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108abc0ULL || rel >= 0x108ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ac50 size=144 callers=0 calls=0
*/
void sub_108ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ac50ULL || rel >= 0x108ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ace0 size=240 callers=0 calls=0
*/
void sub_108ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ace0ULL || rel >= 0x108add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108add0 size=144 callers=0 calls=0
*/
void sub_108add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108add0ULL || rel >= 0x108ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ae60 size=144 callers=0 calls=0
*/
void sub_108ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ae60ULL || rel >= 0x108aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108aef0 size=16 callers=0 calls=0
*/
void sub_108aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108aef0ULL || rel >= 0x108af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108af00 size=16 callers=0 calls=0
*/
void sub_108af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108af00ULL || rel >= 0x108af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108af10 size=144 callers=0 calls=0
*/
void sub_108af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108af10ULL || rel >= 0x108afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108afa0 size=144 callers=0 calls=0
*/
void sub_108afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108afa0ULL || rel >= 0x108b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b030 size=288 callers=1 calls=3
   calls: sub_15b7a70, sub_5e2350, sub_6a9530
*/
void sub_108b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b030ULL || rel >= 0x108b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b150 size=144 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b150ULL || rel >= 0x108b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b1e0 size=144 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b1e0ULL || rel >= 0x108b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b270 size=240 callers=0 calls=0
*/
void sub_108b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b270ULL || rel >= 0x108b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b360 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b360ULL || rel >= 0x108b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b400 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b400ULL || rel >= 0x108b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b4a0 size=16 callers=0 calls=0
*/
void sub_108b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b4a0ULL || rel >= 0x108b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b4b0 size=16 callers=0 calls=0
*/
void sub_108b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b4b0ULL || rel >= 0x108b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b4c0 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b4c0ULL || rel >= 0x108b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b560 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b560ULL || rel >= 0x108b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b600 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_108b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b600ULL || rel >= 0x108b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b760 size=176 callers=0 calls=0
*/
void sub_108b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b760ULL || rel >= 0x108b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b810 size=176 callers=0 calls=0
*/
void sub_108b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b810ULL || rel >= 0x108b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b8c0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b8c0ULL || rel >= 0x108b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b930 size=64 callers=0 calls=1
   calls: sub_108bfe0
*/
void sub_108b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b930ULL || rel >= 0x108b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b970 size=16 callers=0 calls=0
*/
void sub_108b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b970ULL || rel >= 0x108b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b980 size=48 callers=0 calls=0
*/
void sub_108b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b980ULL || rel >= 0x108b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108b9b0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108b9b0ULL || rel >= 0x108ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ba70 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ba70ULL || rel >= 0x108bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bae0 size=176 callers=0 calls=0
*/
void sub_108bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bae0ULL || rel >= 0x108bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bb90 size=176 callers=0 calls=0
*/
void sub_108bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bb90ULL || rel >= 0x108bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bc40 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bc40ULL || rel >= 0x108bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bcb0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bcb0ULL || rel >= 0x108bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bd20 size=176 callers=0 calls=0
*/
void sub_108bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bd20ULL || rel >= 0x108bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bdd0 size=176 callers=0 calls=0
*/
void sub_108bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bdd0ULL || rel >= 0x108be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108be80 size=48 callers=0 calls=0
*/
void sub_108be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108be80ULL || rel >= 0x108beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108beb0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108beb0ULL || rel >= 0x108bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bf70 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bf70ULL || rel >= 0x108bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108bfe0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_108bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108bfe0ULL || rel >= 0x108c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c220 size=16 callers=0 calls=0
*/
void sub_108c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c220ULL || rel >= 0x108c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c230 size=16 callers=0 calls=0
*/
void sub_108c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c230ULL || rel >= 0x108c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c240 size=16 callers=0 calls=0
*/
void sub_108c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c240ULL || rel >= 0x108c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c250 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_108c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c250ULL || rel >= 0x108c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c390 size=176 callers=0 calls=0
*/
void sub_108c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c390ULL || rel >= 0x108c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c440 size=176 callers=0 calls=0
*/
void sub_108c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c440ULL || rel >= 0x108c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c4f0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c4f0ULL || rel >= 0x108c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c560 size=64 callers=0 calls=1
   calls: sub_108cc10
*/
void sub_108c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c560ULL || rel >= 0x108c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c5a0 size=16 callers=0 calls=0
*/
void sub_108c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c5a0ULL || rel >= 0x108c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c5b0 size=48 callers=0 calls=0
*/
void sub_108c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c5b0ULL || rel >= 0x108c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c5e0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c5e0ULL || rel >= 0x108c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c6a0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c6a0ULL || rel >= 0x108c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c710 size=176 callers=0 calls=0
*/
void sub_108c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c710ULL || rel >= 0x108c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c7c0 size=176 callers=0 calls=0
*/
void sub_108c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c7c0ULL || rel >= 0x108c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c870 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c870ULL || rel >= 0x108c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c8e0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c8e0ULL || rel >= 0x108c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108c950 size=176 callers=0 calls=0
*/
void sub_108c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108c950ULL || rel >= 0x108ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ca00 size=176 callers=0 calls=0
*/
void sub_108ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ca00ULL || rel >= 0x108cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cab0 size=48 callers=0 calls=0
*/
void sub_108cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cab0ULL || rel >= 0x108cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cae0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cae0ULL || rel >= 0x108cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cba0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cba0ULL || rel >= 0x108cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cc10 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_108cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cc10ULL || rel >= 0x108ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ce50 size=32 callers=0 calls=0
*/
void sub_108ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ce50ULL || rel >= 0x108ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ce70 size=80 callers=0 calls=0
*/
void sub_108ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ce70ULL || rel >= 0x108cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cec0 size=96 callers=0 calls=0
*/
void sub_108cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cec0ULL || rel >= 0x108cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cf20 size=32 callers=0 calls=0
*/
void sub_108cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cf20ULL || rel >= 0x108cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cf40 size=16 callers=0 calls=0
*/
void sub_108cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cf40ULL || rel >= 0x108cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cf50 size=64 callers=0 calls=0
*/
void sub_108cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cf50ULL || rel >= 0x108cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cf90 size=32 callers=0 calls=0
*/
void sub_108cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cf90ULL || rel >= 0x108cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cfb0 size=16 callers=0 calls=0
*/
void sub_108cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cfb0ULL || rel >= 0x108cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108cfc0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_108cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108cfc0ULL || rel >= 0x108d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d020 size=64 callers=0 calls=0
*/
void sub_108d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d020ULL || rel >= 0x108d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d060 size=32 callers=0 calls=0
*/
void sub_108d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d060ULL || rel >= 0x108d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d080 size=16 callers=0 calls=0
*/
void sub_108d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d080ULL || rel >= 0x108d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d090 size=144 callers=0 calls=0
*/
void sub_108d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d090ULL || rel >= 0x108d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d120 size=144 callers=0 calls=0
*/
void sub_108d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d120ULL || rel >= 0x108d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d1b0 size=240 callers=0 calls=0
*/
void sub_108d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d1b0ULL || rel >= 0x108d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d2a0 size=144 callers=0 calls=0
*/
void sub_108d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d2a0ULL || rel >= 0x108d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d330 size=144 callers=0 calls=0
*/
void sub_108d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d330ULL || rel >= 0x108d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d3c0 size=16 callers=0 calls=0
*/
void sub_108d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d3c0ULL || rel >= 0x108d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d3d0 size=16 callers=0 calls=0
*/
void sub_108d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d3d0ULL || rel >= 0x108d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d3e0 size=144 callers=0 calls=0
*/
void sub_108d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d3e0ULL || rel >= 0x108d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d470 size=144 callers=0 calls=0
*/
void sub_108d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d470ULL || rel >= 0x108d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d500 size=512 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_108d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d500ULL || rel >= 0x108d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d700 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_108d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d700ULL || rel >= 0x108d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d7c0 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_108d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d7c0ULL || rel >= 0x108d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d880 size=240 callers=0 calls=0
*/
void sub_108d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d880ULL || rel >= 0x108d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108d970 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_108d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d970ULL || rel >= 0x108da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108da30 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_108da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108da30ULL || rel >= 0x108daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108daf0 size=16 callers=0 calls=0
*/
void sub_108daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108daf0ULL || rel >= 0x108db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108db00 size=16 callers=0 calls=0
*/
void sub_108db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108db00ULL || rel >= 0x108db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108db10 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_108db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108db10ULL || rel >= 0x108dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108dbd0 size=192 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_108dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108dbd0ULL || rel >= 0x108dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108dc90 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_108dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108dc90ULL || rel >= 0x108ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ddf0 size=176 callers=0 calls=0
*/
void sub_108ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ddf0ULL || rel >= 0x108dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108dea0 size=176 callers=0 calls=0
*/
void sub_108dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108dea0ULL || rel >= 0x108df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108df50 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108df50ULL || rel >= 0x108dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108dfc0 size=64 callers=0 calls=1
   calls: sub_108e670
*/
void sub_108dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108dfc0ULL || rel >= 0x108e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e000 size=16 callers=0 calls=0
*/
void sub_108e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e000ULL || rel >= 0x108e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e010 size=48 callers=0 calls=0
*/
void sub_108e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e010ULL || rel >= 0x108e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e040 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e040ULL || rel >= 0x108e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e100 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e100ULL || rel >= 0x108e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e170 size=176 callers=0 calls=0
*/
void sub_108e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e170ULL || rel >= 0x108e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e220 size=176 callers=0 calls=0
*/
void sub_108e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e220ULL || rel >= 0x108e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e2d0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e2d0ULL || rel >= 0x108e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e340 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e340ULL || rel >= 0x108e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e3b0 size=176 callers=0 calls=0
*/
void sub_108e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e3b0ULL || rel >= 0x108e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e460 size=176 callers=0 calls=0
*/
void sub_108e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e460ULL || rel >= 0x108e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e510 size=48 callers=0 calls=0
*/
void sub_108e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e510ULL || rel >= 0x108e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e540 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e540ULL || rel >= 0x108e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e600 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e600ULL || rel >= 0x108e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e670 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_108e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e670ULL || rel >= 0x108e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e8b0 size=16 callers=0 calls=0
*/
void sub_108e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e8b0ULL || rel >= 0x108e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e8c0 size=16 callers=0 calls=0
*/
void sub_108e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e8c0ULL || rel >= 0x108e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e8d0 size=16 callers=0 calls=0
*/
void sub_108e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e8d0ULL || rel >= 0x108e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e8e0 size=32 callers=0 calls=0
*/
void sub_108e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e8e0ULL || rel >= 0x108e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e900 size=80 callers=0 calls=0
*/
void sub_108e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e900ULL || rel >= 0x108e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e950 size=96 callers=0 calls=0
*/
void sub_108e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e950ULL || rel >= 0x108e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e9b0 size=32 callers=0 calls=0
*/
void sub_108e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e9b0ULL || rel >= 0x108e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e9d0 size=16 callers=0 calls=0
*/
void sub_108e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e9d0ULL || rel >= 0x108e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108e9e0 size=64 callers=0 calls=0
*/
void sub_108e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108e9e0ULL || rel >= 0x108ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ea20 size=32 callers=0 calls=0
*/
void sub_108ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ea20ULL || rel >= 0x108ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ea40 size=16 callers=0 calls=0
*/
void sub_108ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ea40ULL || rel >= 0x108ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ea50 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_108ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ea50ULL || rel >= 0x108eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108eab0 size=64 callers=0 calls=0
*/
void sub_108eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108eab0ULL || rel >= 0x108eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108eaf0 size=32 callers=0 calls=0
*/
void sub_108eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108eaf0ULL || rel >= 0x108eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108eb10 size=16 callers=0 calls=0
*/
void sub_108eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108eb10ULL || rel >= 0x108eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108eb20 size=144 callers=0 calls=0
*/
void sub_108eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108eb20ULL || rel >= 0x108ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ebb0 size=144 callers=0 calls=0
*/
void sub_108ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ebb0ULL || rel >= 0x108ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ec40 size=240 callers=0 calls=0
*/
void sub_108ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ec40ULL || rel >= 0x108ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ed30 size=144 callers=0 calls=0
*/
void sub_108ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ed30ULL || rel >= 0x108edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108edc0 size=144 callers=0 calls=0
*/
void sub_108edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108edc0ULL || rel >= 0x108ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ee50 size=16 callers=0 calls=0
*/
void sub_108ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ee50ULL || rel >= 0x108ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ee60 size=16 callers=0 calls=0
*/
void sub_108ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ee60ULL || rel >= 0x108ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ee70 size=144 callers=0 calls=0
*/
void sub_108ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ee70ULL || rel >= 0x108ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ef00 size=144 callers=0 calls=0
*/
void sub_108ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ef00ULL || rel >= 0x108ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ef90 size=256 callers=1 calls=2
   calls: sub_5e2350, sub_6a9530
*/
void sub_108ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ef90ULL || rel >= 0x108f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f090 size=144 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f090ULL || rel >= 0x108f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f120 size=144 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f120ULL || rel >= 0x108f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f1b0 size=240 callers=0 calls=0
*/
void sub_108f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f1b0ULL || rel >= 0x108f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f2a0 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f2a0ULL || rel >= 0x108f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f340 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f340ULL || rel >= 0x108f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f3e0 size=16 callers=0 calls=0
*/
void sub_108f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f3e0ULL || rel >= 0x108f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f3f0 size=16 callers=0 calls=0
*/
void sub_108f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f3f0ULL || rel >= 0x108f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f400 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f400ULL || rel >= 0x108f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f4a0 size=160 callers=0 calls=2
   calls: sub_15cf3c0, sub_6a8ff0
*/
void sub_108f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f4a0ULL || rel >= 0x108f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f540 size=304 callers=1 calls=1
   calls: sub_6ce110
*/
void sub_108f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f540ULL || rel >= 0x108f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f670 size=256 callers=0 calls=0
*/
void sub_108f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f670ULL || rel >= 0x108f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f770 size=16 callers=0 calls=0
*/
void sub_108f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f770ULL || rel >= 0x108f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f780 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_108f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f780ULL || rel >= 0x108f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f7f0 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f7f0ULL || rel >= 0x108f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f940 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f940ULL || rel >= 0x108f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108f9a0 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f9a0ULL || rel >= 0x108fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fa00 size=16 callers=0 calls=0
*/
void sub_108fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fa00ULL || rel >= 0x108fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fa10 size=16 callers=0 calls=0
*/
void sub_108fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fa10ULL || rel >= 0x108fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fa20 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_108fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fa20ULL || rel >= 0x108fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fa90 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_108fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fa90ULL || rel >= 0x108fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fb00 size=16 callers=0 calls=0
*/
void sub_108fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fb00ULL || rel >= 0x108fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fb10 size=16 callers=0 calls=0
*/
void sub_108fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fb10ULL || rel >= 0x108fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fb20 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_108fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fb20ULL || rel >= 0x108fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fc80 size=176 callers=0 calls=0
*/
void sub_108fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fc80ULL || rel >= 0x108fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fd30 size=176 callers=0 calls=0
*/
void sub_108fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fd30ULL || rel >= 0x108fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fde0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_108fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fde0ULL || rel >= 0x108fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fe50 size=64 callers=0 calls=1
   calls: sub_1090480
*/
void sub_108fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fe50ULL || rel >= 0x108fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fe90 size=16 callers=0 calls=0
*/
void sub_108fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fe90ULL || rel >= 0x108fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fea0 size=48 callers=0 calls=0
*/
void sub_108fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fea0ULL || rel >= 0x108fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108fed0 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108fed0ULL || rel >= 0x108ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ff50 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_108ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ff50ULL || rel >= 0x108ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0108ffc0 size=176 callers=0 calls=0
*/
void sub_108ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108ffc0ULL || rel >= 0x1090070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090070 size=176 callers=0 calls=0
*/
void sub_1090070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090070ULL || rel >= 0x1090120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090120 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1090120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090120ULL || rel >= 0x1090190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090190 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1090190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090190ULL || rel >= 0x1090200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090200 size=176 callers=0 calls=0
*/
void sub_1090200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090200ULL || rel >= 0x10902b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010902b0 size=176 callers=0 calls=0
*/
void sub_10902b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10902b0ULL || rel >= 0x1090360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090360 size=48 callers=0 calls=0
*/
void sub_1090360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090360ULL || rel >= 0x1090390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090390 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1090390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090390ULL || rel >= 0x1090410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090410 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1090410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090410ULL || rel >= 0x1090480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090480 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1090480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090480ULL || rel >= 0x10906c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010906c0 size=16 callers=0 calls=0
*/
void sub_10906c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10906c0ULL || rel >= 0x10906d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010906d0 size=16 callers=0 calls=0
*/
void sub_10906d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10906d0ULL || rel >= 0x10906e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010906e0 size=16 callers=0 calls=0
*/
void sub_10906e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10906e0ULL || rel >= 0x10906f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010906f0 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10906f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10906f0ULL || rel >= 0x1090830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090830 size=176 callers=0 calls=0
*/
void sub_1090830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090830ULL || rel >= 0x10908e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010908e0 size=176 callers=0 calls=0
*/
void sub_10908e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10908e0ULL || rel >= 0x1090990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090990 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1090990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090990ULL || rel >= 0x1090a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090a00 size=64 callers=0 calls=1
   calls: sub_10910b0
*/
void sub_1090a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090a00ULL || rel >= 0x1090a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090a40 size=16 callers=0 calls=0
*/
void sub_1090a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090a40ULL || rel >= 0x1090a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090a50 size=48 callers=0 calls=0
*/
void sub_1090a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090a50ULL || rel >= 0x1090a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090a80 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1090a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090a80ULL || rel >= 0x1090b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090b40 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1090b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090b40ULL || rel >= 0x1090bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090bb0 size=176 callers=0 calls=0
*/
void sub_1090bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090bb0ULL || rel >= 0x1090c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090c60 size=176 callers=0 calls=0
*/
void sub_1090c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090c60ULL || rel >= 0x1090d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090d10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1090d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090d10ULL || rel >= 0x1090d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090d80 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1090d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090d80ULL || rel >= 0x1090df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090df0 size=176 callers=0 calls=0
*/
void sub_1090df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090df0ULL || rel >= 0x1090ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090ea0 size=176 callers=0 calls=0
*/
void sub_1090ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090ea0ULL || rel >= 0x1090f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090f50 size=48 callers=0 calls=0
*/
void sub_1090f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090f50ULL || rel >= 0x1090f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01090f80 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1090f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1090f80ULL || rel >= 0x1091040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091040 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1091040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091040ULL || rel >= 0x10910b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010910b0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10910b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10910b0ULL || rel >= 0x10912f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010912f0 size=32 callers=0 calls=0
*/
void sub_10912f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10912f0ULL || rel >= 0x1091310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091310 size=80 callers=0 calls=0
*/
void sub_1091310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091310ULL || rel >= 0x1091360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091360 size=96 callers=0 calls=0
*/
void sub_1091360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091360ULL || rel >= 0x10913c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010913c0 size=32 callers=0 calls=0
*/
void sub_10913c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10913c0ULL || rel >= 0x10913e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010913e0 size=64 callers=0 calls=0
*/
void sub_10913e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10913e0ULL || rel >= 0x1091420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091420 size=64 callers=0 calls=0
*/
void sub_1091420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091420ULL || rel >= 0x1091460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091460 size=32 callers=0 calls=0
*/
void sub_1091460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091460ULL || rel >= 0x1091480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091480 size=16 callers=0 calls=0
*/
void sub_1091480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091480ULL || rel >= 0x1091490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091490 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_1091490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091490ULL || rel >= 0x10914f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010914f0 size=64 callers=0 calls=0
*/
void sub_10914f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10914f0ULL || rel >= 0x1091530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091530 size=32 callers=0 calls=0
*/
void sub_1091530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091530ULL || rel >= 0x1091550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091550 size=16 callers=0 calls=0
*/
void sub_1091550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091550ULL || rel >= 0x1091560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091560 size=144 callers=0 calls=0
*/
void sub_1091560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091560ULL || rel >= 0x10915f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010915f0 size=144 callers=0 calls=0
*/
void sub_10915f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10915f0ULL || rel >= 0x1091680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091680 size=240 callers=0 calls=0
*/
void sub_1091680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091680ULL || rel >= 0x1091770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091770 size=144 callers=0 calls=0
*/
void sub_1091770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091770ULL || rel >= 0x1091800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091800 size=144 callers=0 calls=0
*/
void sub_1091800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091800ULL || rel >= 0x1091890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091890 size=16 callers=0 calls=0
*/
void sub_1091890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091890ULL || rel >= 0x10918a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010918a0 size=16 callers=0 calls=0
*/
void sub_10918a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10918a0ULL || rel >= 0x10918b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010918b0 size=144 callers=0 calls=0
*/
void sub_10918b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10918b0ULL || rel >= 0x1091940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091940 size=144 callers=0 calls=0
*/
void sub_1091940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091940ULL || rel >= 0x10919d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010919d0 size=144 callers=0 calls=0
*/
void sub_10919d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10919d0ULL || rel >= 0x1091a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091a60 size=144 callers=0 calls=0
*/
void sub_1091a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091a60ULL || rel >= 0x1091af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091af0 size=240 callers=0 calls=0
*/
void sub_1091af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091af0ULL || rel >= 0x1091be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091be0 size=144 callers=0 calls=0
*/
void sub_1091be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091be0ULL || rel >= 0x1091c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091c70 size=144 callers=0 calls=0
*/
void sub_1091c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091c70ULL || rel >= 0x1091d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091d00 size=16 callers=0 calls=0
*/
void sub_1091d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091d00ULL || rel >= 0x1091d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091d10 size=16 callers=0 calls=0
*/
void sub_1091d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091d10ULL || rel >= 0x1091d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091d20 size=144 callers=0 calls=0
*/
void sub_1091d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091d20ULL || rel >= 0x1091db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01091db0 size=144 callers=0 calls=0
*/
void sub_1091db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1091db0ULL || rel >= 0x1091e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

