/* main functions 016759d0..01687580 (192 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 016759d0 size=16 callers=0 calls=0
*/
void sub_16759d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16759d0ULL || rel >= 0x16759e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016759e0 size=272 callers=1 calls=2
   calls: sub_165e060, sub_1674f90
*/
void sub_16759e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16759e0ULL || rel >= 0x1675af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675af0 size=96 callers=2 calls=0
*/
void sub_1675af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675af0ULL || rel >= 0x1675b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675b50 size=144 callers=1 calls=2
   calls: sub_165e060, sub_1674ee0
*/
void sub_1675b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675b50ULL || rel >= 0x1675be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675be0 size=16 callers=0 calls=0
*/
void sub_1675be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675be0ULL || rel >= 0x1675bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675bf0 size=144 callers=1 calls=2
   calls: sub_165e060, sub_1674f90
*/
void sub_1675bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675bf0ULL || rel >= 0x1675c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675c80 size=16 callers=0 calls=0
*/
void sub_1675c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675c80ULL || rel >= 0x1675c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675c90 size=16 callers=0 calls=0
*/
void sub_1675c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675c90ULL || rel >= 0x1675ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675ca0 size=32 callers=0 calls=0
*/
void sub_1675ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675ca0ULL || rel >= 0x1675cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675cc0 size=64 callers=0 calls=1
   calls: sub_17499e0
*/
void sub_1675cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675cc0ULL || rel >= 0x1675d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675d00 size=16 callers=0 calls=0
*/
void sub_1675d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675d00ULL || rel >= 0x1675d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675d10 size=16 callers=0 calls=0
*/
void sub_1675d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675d10ULL || rel >= 0x1675d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675d20 size=16 callers=0 calls=0
*/
void sub_1675d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675d20ULL || rel >= 0x1675d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675d30 size=96 callers=1 calls=4
   calls: sub_1655080, sub_165af60, sub_165ba50, sub_1679c10
*/
void sub_1675d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675d30ULL || rel >= 0x1675d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675d90 size=80 callers=0 calls=3
   calls: sub_1655170, sub_165af80, sub_1679d30
*/
void sub_1675d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675d90ULL || rel >= 0x1675de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675de0 size=96 callers=0 calls=4
   calls: sub_1655170, sub_165af80, sub_165baa0, sub_1679d30
*/
void sub_1675de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675de0ULL || rel >= 0x1675e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675e40 size=400 callers=1 calls=8
   calls: sub_1652c70, sub_1652d30, sub_1655110, sub_165af90, sub_165b040, sub_165b0f0, sub_165e060, sub_165e140
   ref: LanMatchmakeUpdateJob::Update
*/
void LanMatchmakeUpdateJob_Update(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675e40ULL || rel >= 0x1675fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01675fd0 size=2064 callers=0 calls=34
   calls: sub_1652c70, sub_1652d30, sub_1652de0, sub_1652f90, sub_1653150, sub_1653860, sub_16551b0, sub_1655ea0, sub_1657400, sub_1657430, sub_165b480, sub_165c600
   ... +22 more
*/
void sub_1675fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675fd0ULL || rel >= 0x16767e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016767e0 size=80 callers=1 calls=2
   calls: sub_1655290, sub_165b040
*/
void sub_16767e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16767e0ULL || rel >= 0x1676830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01676830 size=128 callers=0 calls=2
   calls: sub_1655110, sub_1655190
*/
void sub_1676830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1676830ULL || rel >= 0x16768b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016768b0 size=32 callers=0 calls=0
*/
void sub_16768b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16768b0ULL || rel >= 0x16768d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016768d0 size=1232 callers=1 calls=20
   calls: IN_ANY_ADDR_d, sub_1652ca0, sub_1652d30, sub_1652de0, sub_1652f90, sub_1653150, sub_1655ca0, sub_165b5f0, sub_165c960, sub_165c9b0, sub_165ca00, sub_165e060
   ... +8 more
*/
void sub_16768d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16768d0ULL || rel >= 0x1676da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01676da0 size=2624 callers=1 calls=25
   calls: IN_ANY_ADDR_d, sub_1652ca0, sub_1652d30, sub_1652de0, sub_1652f90, sub_1653150, sub_1655ca0, sub_1657430, sub_165b5f0, sub_165c960, sub_165c9b0, sub_165ca00
   ... +13 more
*/
void sub_1676da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1676da0ULL || rel >= 0x16777e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016777e0 size=16 callers=0 calls=0
*/
void sub_16777e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16777e0ULL || rel >= 0x16777f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016777f0 size=656 callers=4 calls=4
   calls: sub_167aed0, sub_1749820, sub_17499e0, sub_1749a80
*/
void sub_16777f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16777f0ULL || rel >= 0x1677a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01677a80 size=192 callers=9 calls=1
   calls: sub_167af50
*/
void sub_1677a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1677a80ULL || rel >= 0x1677b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01677b40 size=16 callers=0 calls=0
*/
void sub_1677b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1677b40ULL || rel >= 0x1677b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01677b50 size=48 callers=0 calls=1
   calls: sub_1677a80
*/
void sub_1677b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1677b50ULL || rel >= 0x1677b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01677b80 size=48 callers=0 calls=1
   calls: sub_1677a80
*/
void sub_1677b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1677b80ULL || rel >= 0x1677bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01677bb0 size=400 callers=18 calls=3
   calls: sub_1749820, sub_17499e0, sub_1749a80
*/
void sub_1677bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1677bb0ULL || rel >= 0x1677d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01677d40 size=1280 callers=8 calls=7
   calls: sub_167b070, sub_167b080, sub_167b090, sub_167b0c0, sub_1733e70, sub_1733e80, sub_1749a80
*/
void sub_1677d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1677d40ULL || rel >= 0x1678240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678240 size=16 callers=1 calls=0
*/
void sub_1678240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678240ULL || rel >= 0x1678250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678250 size=16 callers=3 calls=0
*/
void sub_1678250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678250ULL || rel >= 0x1678260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678260 size=16 callers=0 calls=0
*/
void sub_1678260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678260ULL || rel >= 0x1678270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678270 size=16 callers=1 calls=0
*/
void sub_1678270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678270ULL || rel >= 0x1678280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678280 size=16 callers=3 calls=0
*/
void sub_1678280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678280ULL || rel >= 0x1678290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678290 size=16 callers=0 calls=0
*/
void sub_1678290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678290ULL || rel >= 0x16782a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016782a0 size=16 callers=1 calls=0
*/
void sub_16782a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16782a0ULL || rel >= 0x16782b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016782b0 size=16 callers=1 calls=0
*/
void sub_16782b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16782b0ULL || rel >= 0x16782c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016782c0 size=16 callers=1 calls=0
*/
void sub_16782c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16782c0ULL || rel >= 0x16782d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016782d0 size=16 callers=3 calls=0
*/
void sub_16782d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16782d0ULL || rel >= 0x16782e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016782e0 size=16 callers=9 calls=0
*/
void sub_16782e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16782e0ULL || rel >= 0x16782f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016782f0 size=16 callers=2 calls=0
*/
void sub_16782f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16782f0ULL || rel >= 0x1678300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678300 size=16 callers=2 calls=0
*/
void sub_1678300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678300ULL || rel >= 0x1678310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678310 size=16 callers=4 calls=0
*/
void sub_1678310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678310ULL || rel >= 0x1678320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678320 size=128 callers=2 calls=1
   calls: sub_165e060
*/
void sub_1678320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678320ULL || rel >= 0x16783a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016783a0 size=288 callers=1 calls=0
*/
void sub_16783a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16783a0ULL || rel >= 0x16784c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016784c0 size=160 callers=1 calls=6
   calls: sub_167b070, sub_167b080, sub_167b090, sub_167b0c0, sub_1733e70, sub_1733e80
*/
void sub_16784c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16784c0ULL || rel >= 0x1678560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678560 size=16 callers=3 calls=0
*/
void sub_1678560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678560ULL || rel >= 0x1678570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678570 size=16 callers=2 calls=0
*/
void sub_1678570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678570ULL || rel >= 0x1678580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678580 size=16 callers=1 calls=0
*/
void sub_1678580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678580ULL || rel >= 0x1678590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678590 size=16 callers=9 calls=0
*/
void sub_1678590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678590ULL || rel >= 0x16785a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016785a0 size=16 callers=1 calls=0
*/
void sub_16785a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16785a0ULL || rel >= 0x16785b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016785b0 size=16 callers=9 calls=0
*/
void sub_16785b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16785b0ULL || rel >= 0x16785c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016785c0 size=16 callers=2 calls=0
*/
void sub_16785c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16785c0ULL || rel >= 0x16785d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016785d0 size=16 callers=12 calls=0
*/
void sub_16785d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16785d0ULL || rel >= 0x16785e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016785e0 size=96 callers=2 calls=0
*/
void sub_16785e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16785e0ULL || rel >= 0x1678640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678640 size=160 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1678640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678640ULL || rel >= 0x16786e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016786e0 size=16 callers=0 calls=0
*/
void sub_16786e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16786e0ULL || rel >= 0x16786f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016786f0 size=16 callers=9 calls=0
*/
void sub_16786f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16786f0ULL || rel >= 0x1678700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678700 size=16 callers=1 calls=0
*/
void sub_1678700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678700ULL || rel >= 0x1678710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678710 size=1456 callers=0 calls=10
   calls: sub_1652de0, sub_1652f60, sub_1652f90, sub_1653150, sub_165e060, sub_167b0c0, sub_1749ce0, sub_1749d80, sub_1749d90, sub_1749da0
*/
void sub_1678710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678710ULL || rel >= 0x1678cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678cc0 size=16 callers=0 calls=0
*/
void sub_1678cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678cc0ULL || rel >= 0x1678cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01678cd0 size=1104 callers=0 calls=16
   calls: sub_1652c70, sub_1652d30, sub_1652d50, sub_1652de0, sub_1652f60, sub_1652f90, sub_1653520, sub_165c080, sub_165e060, sub_167b0c0, sub_1733e80, sub_1749f10
   ... +4 more
*/
void sub_1678cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678cd0ULL || rel >= 0x1679120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679120 size=16 callers=0 calls=0
*/
void sub_1679120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679120ULL || rel >= 0x1679130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679130 size=96 callers=0 calls=5
   calls: sub_1652c70, sub_1652d30, sub_167aed0, sub_167af50, sub_167b850
*/
void sub_1679130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679130ULL || rel >= 0x1679190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679190 size=96 callers=0 calls=5
   calls: sub_1652c70, sub_1652d30, sub_167aed0, sub_167af50, sub_167b850
*/
void sub_1679190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679190ULL || rel >= 0x16791f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016791f0 size=1472 callers=1 calls=12
   calls: sub_1652c70, sub_1652d30, sub_1653630, sub_165e060, sub_167aed0, sub_167af50, sub_167b0c0, sub_167b850, sub_1749ce0, sub_1749d80, sub_1749d90, sub_1749da0
*/
void sub_16791f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16791f0ULL || rel >= 0x16797b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016797b0 size=1104 callers=2 calls=15
   calls: sub_1652c70, sub_1652d30, sub_1653790, sub_165c080, sub_165e060, sub_167aed0, sub_167af50, sub_167b0c0, sub_167b850, sub_1733e80, sub_1749f10, sub_1749f30
   ... +3 more
*/
void sub_16797b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16797b0ULL || rel >= 0x1679c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679c00 size=16 callers=0 calls=0
*/
void sub_1679c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679c00ULL || rel >= 0x1679c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679c10 size=288 callers=9 calls=1
   calls: sub_1733d10
*/
void sub_1679c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679c10ULL || rel >= 0x1679d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679d30 size=16 callers=16 calls=0
*/
void sub_1679d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679d30ULL || rel >= 0x1679d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679d40 size=16 callers=0 calls=0
*/
void sub_1679d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679d40ULL || rel >= 0x1679d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679d50 size=48 callers=0 calls=1
   calls: sub_1733d30
*/
void sub_1679d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679d50ULL || rel >= 0x1679d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679d80 size=48 callers=0 calls=1
   calls: sub_1733d30
*/
void sub_1679d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679d80ULL || rel >= 0x1679db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679db0 size=272 callers=0 calls=1
   calls: sub_1733d70
*/
void sub_1679db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679db0ULL || rel >= 0x1679ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679ec0 size=32 callers=2 calls=0
*/
void sub_1679ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679ec0ULL || rel >= 0x1679ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679ee0 size=32 callers=1 calls=0
*/
void sub_1679ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679ee0ULL || rel >= 0x1679f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679f00 size=160 callers=12 calls=1
   calls: sub_165e060
*/
void sub_1679f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679f00ULL || rel >= 0x1679fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01679fa0 size=160 callers=12 calls=1
   calls: sub_165e060
*/
void sub_1679fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1679fa0ULL || rel >= 0x167a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167a040 size=752 callers=4 calls=2
   calls: sub_1678240, sub_1678320
*/
void sub_167a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167a040ULL || rel >= 0x167a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167a330 size=1568 callers=0 calls=1
   calls: sub_165e060
*/
void sub_167a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167a330ULL || rel >= 0x167a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167a950 size=16 callers=0 calls=0
*/
void sub_167a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167a950ULL || rel >= 0x167a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167a960 size=864 callers=1 calls=1
   calls: sub_165e060
*/
void sub_167a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167a960ULL || rel >= 0x167acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167acc0 size=16 callers=0 calls=0
*/
void sub_167acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167acc0ULL || rel >= 0x167acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167acd0 size=16 callers=0 calls=0
*/
void sub_167acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167acd0ULL || rel >= 0x167ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ace0 size=16 callers=0 calls=0
*/
void sub_167ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ace0ULL || rel >= 0x167acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167acf0 size=48 callers=1 calls=1
   calls: sub_167ad20
*/
void sub_167acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167acf0ULL || rel >= 0x167ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ad20 size=416 callers=2 calls=1
   calls: sub_1733d50
*/
void sub_167ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ad20ULL || rel >= 0x167aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167aec0 size=16 callers=1 calls=0
*/
void sub_167aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167aec0ULL || rel >= 0x167aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167aed0 size=128 callers=21 calls=1
   calls: sub_1733e20
*/
void sub_167aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167aed0ULL || rel >= 0x167af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167af50 size=32 callers=21 calls=0
*/
void sub_167af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167af50ULL || rel >= 0x167af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167af70 size=48 callers=0 calls=0
*/
void sub_167af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167af70ULL || rel >= 0x167afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167afa0 size=64 callers=0 calls=1
   calls: sub_1733e40
*/
void sub_167afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167afa0ULL || rel >= 0x167afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167afe0 size=64 callers=0 calls=1
   calls: sub_1733e40
*/
void sub_167afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167afe0ULL || rel >= 0x167b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b020 size=80 callers=0 calls=1
   calls: sub_1733e60
*/
void sub_167b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b020ULL || rel >= 0x167b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b070 size=16 callers=17 calls=0
*/
void sub_167b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b070ULL || rel >= 0x167b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b080 size=16 callers=17 calls=0
*/
void sub_167b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b080ULL || rel >= 0x167b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b090 size=48 callers=18 calls=1
   calls: sub_165bea0
*/
void sub_167b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b090ULL || rel >= 0x167b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b0c0 size=16 callers=23 calls=0
*/
void sub_167b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b0c0ULL || rel >= 0x167b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b0d0 size=880 callers=0 calls=4
   calls: sub_165be70, sub_165be90, sub_165c180, sub_165e060
*/
void sub_167b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b0d0ULL || rel >= 0x167b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b440 size=16 callers=0 calls=0
*/
void sub_167b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b440ULL || rel >= 0x167b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b450 size=1008 callers=0 calls=4
   calls: sub_165bea0, sub_165c190, sub_165e060, sub_1733e70
*/
void sub_167b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b450ULL || rel >= 0x167b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b840 size=16 callers=0 calls=0
*/
void sub_167b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b840ULL || rel >= 0x167b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b850 size=16 callers=4 calls=0
*/
void sub_167b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b850ULL || rel >= 0x167b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b860 size=16 callers=0 calls=0
*/
void sub_167b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b860ULL || rel >= 0x167b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b870 size=96 callers=2 calls=1
   calls: sub_1735d50
*/
void sub_167b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b870ULL || rel >= 0x167b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b8d0 size=16 callers=3 calls=0
*/
void sub_167b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b8d0ULL || rel >= 0x167b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b8e0 size=16 callers=0 calls=0
*/
void sub_167b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b8e0ULL || rel >= 0x167b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b8f0 size=80 callers=0 calls=1
   calls: sub_1735d70
*/
void sub_167b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b8f0ULL || rel >= 0x167b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b940 size=16 callers=1 calls=0
*/
void sub_167b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b940ULL || rel >= 0x167b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b950 size=16 callers=1 calls=0
*/
void sub_167b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b950ULL || rel >= 0x167b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b960 size=16 callers=1 calls=0
*/
void sub_167b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b960ULL || rel >= 0x167b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b970 size=32 callers=6 calls=0
*/
void sub_167b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b970ULL || rel >= 0x167b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167b990 size=192 callers=2 calls=1
   calls: sub_165e060
*/
void sub_167b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167b990ULL || rel >= 0x167ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ba50 size=192 callers=0 calls=1
   calls: sub_165e060
*/
void sub_167ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ba50ULL || rel >= 0x167bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bb10 size=16 callers=0 calls=0
*/
void sub_167bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bb10ULL || rel >= 0x167bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bb20 size=16 callers=0 calls=0
*/
void sub_167bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bb20ULL || rel >= 0x167bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bb30 size=224 callers=1 calls=5
   calls: SDK_MW_Nintendo_PiaLocal_5_18_0, sub_16524a0, sub_1652a90, sub_165dee0, sub_165e060
   ref: pia local heap
*/
void pia_local_heap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bb30ULL || rel >= 0x167bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bc10 size=96 callers=0 calls=3
   calls: sub_1652b20, sub_165dfb0, sub_167bc70
*/
void sub_167bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bc10ULL || rel >= 0x167bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bc70 size=176 callers=2 calls=3
   calls: sub_1652bd0, sub_1652c30, sub_165e060
*/
void sub_167bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bc70ULL || rel >= 0x167bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bd20 size=16 callers=1 calls=0
*/
void sub_167bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bd20ULL || rel >= 0x167bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bd30 size=176 callers=1 calls=2
   calls: sub_1652bf0, sub_165e060
*/
void sub_167bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bd30ULL || rel >= 0x167bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bde0 size=16 callers=1 calls=0
*/
void sub_167bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bde0ULL || rel >= 0x167bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bdf0 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+PiaLocal-5_18_0
*/
void SDK_MW_Nintendo_PiaLocal_5_18_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bdf0ULL || rel >= 0x167be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167be00 size=128 callers=2 calls=1
   calls: sub_1688680
*/
void sub_167be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167be00ULL || rel >= 0x167be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167be80 size=16 callers=3 calls=0
*/
void sub_167be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167be80ULL || rel >= 0x167be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167be90 size=16 callers=0 calls=0
*/
void sub_167be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167be90ULL || rel >= 0x167bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bea0 size=48 callers=0 calls=1
   calls: sub_16886f0
*/
void sub_167bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bea0ULL || rel >= 0x167bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bed0 size=96 callers=0 calls=1
   calls: sub_1688720
*/
void sub_167bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bed0ULL || rel >= 0x167bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bf30 size=160 callers=2 calls=1
   calls: sub_165e060
*/
void sub_167bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bf30ULL || rel >= 0x167bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167bfd0 size=160 callers=2 calls=1
   calls: sub_165e060
*/
void sub_167bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167bfd0ULL || rel >= 0x167c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c070 size=192 callers=0 calls=1
   calls: sub_165e060
*/
void sub_167c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c070ULL || rel >= 0x167c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c130 size=16 callers=0 calls=0
*/
void sub_167c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c130ULL || rel >= 0x167c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c140 size=16 callers=0 calls=0
*/
void sub_167c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c140ULL || rel >= 0x167c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c150 size=16 callers=0 calls=0
*/
void sub_167c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c150ULL || rel >= 0x167c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c160 size=16 callers=0 calls=0
*/
void sub_167c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c160ULL || rel >= 0x167c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c170 size=16 callers=0 calls=0
*/
void sub_167c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c170ULL || rel >= 0x167c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c180 size=16 callers=0 calls=0
*/
void sub_167c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c180ULL || rel >= 0x167c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c190 size=16 callers=0 calls=0
*/
void sub_167c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c190ULL || rel >= 0x167c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c1a0 size=16 callers=0 calls=0
*/
void sub_167c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c1a0ULL || rel >= 0x167c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c1b0 size=16 callers=0 calls=0
*/
void sub_167c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c1b0ULL || rel >= 0x167c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c1c0 size=128 callers=0 calls=0
*/
void sub_167c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c1c0ULL || rel >= 0x167c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c240 size=64 callers=1 calls=1
   calls: sub_168be30
*/
void sub_167c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c240ULL || rel >= 0x167c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c280 size=48 callers=0 calls=1
   calls: sub_168bed0
*/
void sub_167c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c280ULL || rel >= 0x167c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c2b0 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_167c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c2b0ULL || rel >= 0x167c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c350 size=48 callers=0 calls=1
   calls: sub_168bea0
*/
void sub_167c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c350ULL || rel >= 0x167c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c380 size=16 callers=0 calls=0
*/
void sub_167c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c380ULL || rel >= 0x167c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c390 size=128 callers=0 calls=0
*/
void sub_167c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c390ULL || rel >= 0x167c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c410 size=48 callers=1 calls=1
   calls: sub_168df70
*/
void sub_167c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c410ULL || rel >= 0x167c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c440 size=16 callers=0 calls=0
*/
void sub_167c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c440ULL || rel >= 0x167c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c450 size=48 callers=0 calls=1
   calls: sub_168dfa0
*/
void sub_167c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c450ULL || rel >= 0x167c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c480 size=16 callers=0 calls=0
*/
void sub_167c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c480ULL || rel >= 0x167c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c490 size=16 callers=0 calls=0
*/
void sub_167c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c490ULL || rel >= 0x167c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c4a0 size=16 callers=0 calls=0
*/
void sub_167c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c4a0ULL || rel >= 0x167c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c4b0 size=16 callers=0 calls=0
*/
void sub_167c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c4b0ULL || rel >= 0x167c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c4c0 size=16 callers=0 calls=0
*/
void sub_167c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c4c0ULL || rel >= 0x167c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c4d0 size=16 callers=0 calls=0
*/
void sub_167c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c4d0ULL || rel >= 0x167c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c4e0 size=16 callers=0 calls=0
*/
void sub_167c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c4e0ULL || rel >= 0x167c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c4f0 size=16 callers=0 calls=0
*/
void sub_167c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c4f0ULL || rel >= 0x167c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c500 size=16 callers=0 calls=0
*/
void sub_167c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c500ULL || rel >= 0x167c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c510 size=16 callers=0 calls=0
*/
void sub_167c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c510ULL || rel >= 0x167c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c520 size=16 callers=0 calls=0
*/
void sub_167c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c520ULL || rel >= 0x167c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c530 size=16 callers=0 calls=0
*/
void sub_167c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c530ULL || rel >= 0x167c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c540 size=16 callers=0 calls=0
*/
void sub_167c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c540ULL || rel >= 0x167c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c550 size=16 callers=0 calls=0
*/
void sub_167c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c550ULL || rel >= 0x167c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c560 size=16 callers=0 calls=0
*/
void sub_167c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c560ULL || rel >= 0x167c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c570 size=16 callers=0 calls=0
*/
void sub_167c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c570ULL || rel >= 0x167c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c580 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_168df70, sub_17162d0
*/
void sub_167c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c580ULL || rel >= 0x167c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c5d0 size=64 callers=0 calls=0
*/
void sub_167c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c5d0ULL || rel >= 0x167c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c610 size=256 callers=0 calls=5
   calls: sub_165e060, sub_167f1d0, sub_173d6d0, sub_173d700, sub_173d790
*/
void sub_167c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c610ULL || rel >= 0x167c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c710 size=16 callers=0 calls=0
*/
void sub_167c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c710ULL || rel >= 0x167c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c720 size=16 callers=0 calls=0
*/
void sub_167c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c720ULL || rel >= 0x167c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c730 size=16 callers=0 calls=0
*/
void sub_167c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c730ULL || rel >= 0x167c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c740 size=16 callers=0 calls=0
*/
void sub_167c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c740ULL || rel >= 0x167c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c750 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_167cfd0, sub_17162d0
*/
void sub_167c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c750ULL || rel >= 0x167c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c790 size=64 callers=0 calls=0
*/
void sub_167c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c790ULL || rel >= 0x167c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c7d0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_167ea00, sub_17162d0
*/
void sub_167c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c7d0ULL || rel >= 0x167c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c810 size=64 callers=0 calls=0
*/
void sub_167c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c810ULL || rel >= 0x167c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c850 size=16 callers=0 calls=0
*/
void sub_167c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c850ULL || rel >= 0x167c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c860 size=16 callers=0 calls=0
*/
void sub_167c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c860ULL || rel >= 0x167c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c870 size=16 callers=0 calls=0
*/
void sub_167c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c870ULL || rel >= 0x167c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c880 size=16 callers=0 calls=0
*/
void sub_167c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c880ULL || rel >= 0x167c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c890 size=16 callers=0 calls=0
*/
void sub_167c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c890ULL || rel >= 0x167c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c8a0 size=16 callers=0 calls=0
*/
void sub_167c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c8a0ULL || rel >= 0x167c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c8b0 size=16 callers=0 calls=0
*/
void sub_167c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c8b0ULL || rel >= 0x167c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c8c0 size=16 callers=0 calls=0
*/
void sub_167c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c8c0ULL || rel >= 0x167c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c8d0 size=16 callers=0 calls=0
*/
void sub_167c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c8d0ULL || rel >= 0x167c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c8e0 size=16 callers=0 calls=0
*/
void sub_167c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c8e0ULL || rel >= 0x167c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c8f0 size=16 callers=0 calls=0
*/
void sub_167c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c8f0ULL || rel >= 0x167c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c900 size=16 callers=0 calls=0
*/
void sub_167c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c900ULL || rel >= 0x167c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c910 size=16 callers=0 calls=0
*/
void sub_167c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c910ULL || rel >= 0x167c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c920 size=16 callers=0 calls=0
*/
void sub_167c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c920ULL || rel >= 0x167c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c930 size=16 callers=0 calls=0
*/
void sub_167c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c930ULL || rel >= 0x167c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c940 size=16 callers=0 calls=0
*/
void sub_167c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c940ULL || rel >= 0x167c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c950 size=16 callers=0 calls=0
*/
void sub_167c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c950ULL || rel >= 0x167c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c960 size=16 callers=0 calls=0
*/
void sub_167c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c960ULL || rel >= 0x167c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c970 size=16 callers=0 calls=0
*/
void sub_167c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c970ULL || rel >= 0x167c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c980 size=16 callers=0 calls=0
*/
void sub_167c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c980ULL || rel >= 0x167c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c990 size=16 callers=0 calls=0
*/
void sub_167c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c990ULL || rel >= 0x167c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c9a0 size=16 callers=0 calls=0
*/
void sub_167c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c9a0ULL || rel >= 0x167c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c9b0 size=16 callers=0 calls=0
*/
void sub_167c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c9b0ULL || rel >= 0x167c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c9c0 size=16 callers=0 calls=0
*/
void sub_167c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c9c0ULL || rel >= 0x167c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c9d0 size=16 callers=0 calls=0
*/
void sub_167c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c9d0ULL || rel >= 0x167c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c9e0 size=16 callers=0 calls=0
*/
void sub_167c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c9e0ULL || rel >= 0x167c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167c9f0 size=16 callers=0 calls=0
*/
void sub_167c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167c9f0ULL || rel >= 0x167ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca00 size=16 callers=0 calls=0
*/
void sub_167ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca00ULL || rel >= 0x167ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca10 size=16 callers=0 calls=0
*/
void sub_167ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca10ULL || rel >= 0x167ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca20 size=16 callers=0 calls=0
*/
void sub_167ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca20ULL || rel >= 0x167ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca30 size=16 callers=0 calls=0
*/
void sub_167ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca30ULL || rel >= 0x167ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca40 size=16 callers=0 calls=0
*/
void sub_167ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca40ULL || rel >= 0x167ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca50 size=16 callers=0 calls=0
*/
void sub_167ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca50ULL || rel >= 0x167ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca60 size=16 callers=0 calls=0
*/
void sub_167ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca60ULL || rel >= 0x167ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca70 size=16 callers=0 calls=0
*/
void sub_167ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca70ULL || rel >= 0x167ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca80 size=16 callers=0 calls=0
*/
void sub_167ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca80ULL || rel >= 0x167ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ca90 size=16 callers=0 calls=0
*/
void sub_167ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ca90ULL || rel >= 0x167caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167caa0 size=16 callers=0 calls=0
*/
void sub_167caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167caa0ULL || rel >= 0x167cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cab0 size=16 callers=0 calls=0
*/
void sub_167cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cab0ULL || rel >= 0x167cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cac0 size=16 callers=0 calls=0
*/
void sub_167cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cac0ULL || rel >= 0x167cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cad0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_167cc10, sub_17162d0
*/
void sub_167cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cad0ULL || rel >= 0x167cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cb20 size=64 callers=0 calls=0
*/
void sub_167cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cb20ULL || rel >= 0x167cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cb60 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_167d6d0, sub_17162d0
*/
void sub_167cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cb60ULL || rel >= 0x167cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cbb0 size=64 callers=0 calls=0
*/
void sub_167cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cbb0ULL || rel >= 0x167cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cbf0 size=16 callers=0 calls=0
*/
void sub_167cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cbf0ULL || rel >= 0x167cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cc00 size=16 callers=0 calls=0
*/
void sub_167cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cc00ULL || rel >= 0x167cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cc10 size=256 callers=1 calls=3
   calls: sub_1652bd0, sub_1685cb0, sub_17162d0
*/
void sub_167cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cc10ULL || rel >= 0x167cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cd10 size=160 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_167cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cd10ULL || rel >= 0x167cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cdb0 size=144 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_167cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cdb0ULL || rel >= 0x167ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ce40 size=16 callers=0 calls=0
*/
void sub_167ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ce40ULL || rel >= 0x167ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ce50 size=16 callers=0 calls=0
*/
void sub_167ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ce50ULL || rel >= 0x167ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ce60 size=16 callers=0 calls=0
*/
void sub_167ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ce60ULL || rel >= 0x167ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ce70 size=16 callers=0 calls=0
*/
void sub_167ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ce70ULL || rel >= 0x167ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ce80 size=16 callers=0 calls=0
*/
void sub_167ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ce80ULL || rel >= 0x167ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ce90 size=16 callers=0 calls=0
*/
void sub_167ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ce90ULL || rel >= 0x167cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cea0 size=128 callers=0 calls=0
*/
void sub_167cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cea0ULL || rel >= 0x167cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cf20 size=48 callers=0 calls=0
*/
void sub_167cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cf20ULL || rel >= 0x167cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cf50 size=128 callers=0 calls=0
*/
void sub_167cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cf50ULL || rel >= 0x167cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167cfd0 size=64 callers=1 calls=2
   calls: sub_165ff10, sub_168bcb0
*/
void sub_167cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167cfd0ULL || rel >= 0x167d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d010 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_167d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d010ULL || rel >= 0x167d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d040 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_167d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d040ULL || rel >= 0x167d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d070 size=48 callers=0 calls=2
   calls: sub_165ff30, sub_168bcd0
*/
void sub_167d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d070ULL || rel >= 0x167d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d0a0 size=48 callers=0 calls=2
   calls: sub_165ff30, sub_168bcd0
*/
void sub_167d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d0a0ULL || rel >= 0x167d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d0d0 size=176 callers=0 calls=2
   calls: sub_165e060, sub_1695d00
*/
void sub_167d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d0d0ULL || rel >= 0x167d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d180 size=560 callers=0 calls=8
   calls: sub_1652c70, sub_1652d30, sub_1653b50, sub_165b480, sub_165e060, sub_165fb30, sub_165fd50, sub_165fd90
*/
void sub_167d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d180ULL || rel >= 0x167d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d3b0 size=656 callers=0 calls=7
   calls: sub_1652ca0, sub_1652d30, sub_1652de0, sub_1653bb0, sub_165c9b0, sub_165e060, sub_1716400
*/
void sub_167d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d3b0ULL || rel >= 0x167d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d640 size=16 callers=0 calls=0
*/
void sub_167d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d640ULL || rel >= 0x167d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d650 size=128 callers=0 calls=0
*/
void sub_167d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d650ULL || rel >= 0x167d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167d6d0 size=912 callers=1 calls=5
   calls: sub_1652bd0, sub_1685cb0, sub_168c910, sub_17162d0, sub_1733d10
*/
void sub_167d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167d6d0ULL || rel >= 0x167da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167da60 size=160 callers=0 calls=1
   calls: sub_1716390
*/
void sub_167da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167da60ULL || rel >= 0x167db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167db00 size=176 callers=0 calls=2
   calls: sub_168c960, sub_1716390
*/
void sub_167db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167db00ULL || rel >= 0x167dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167dbb0 size=176 callers=0 calls=1
   calls: sub_168de10
*/
void sub_167dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167dbb0ULL || rel >= 0x167dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167dc60 size=80 callers=0 calls=0
*/
void sub_167dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167dc60ULL || rel >= 0x167dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167dcb0 size=224 callers=0 calls=1
   calls: sub_165e060
*/
void sub_167dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167dcb0ULL || rel >= 0x167dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167dd90 size=80 callers=0 calls=0
*/
void sub_167dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167dd90ULL || rel >= 0x167dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167dde0 size=16 callers=0 calls=0
*/
void sub_167dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167dde0ULL || rel >= 0x167ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ddf0 size=1456 callers=0 calls=9
   calls: sub_165bc90, sub_165bea0, sub_16807a0, sub_1682180, sub_1689b30, sub_169ad10, sub_169ad40, sub_172dee0, sub_1733e70
*/
void sub_167ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ddf0ULL || rel >= 0x167e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e3a0 size=176 callers=0 calls=2
   calls: sub_165e060, sub_1686260
*/
void sub_167e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e3a0ULL || rel >= 0x167e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e450 size=16 callers=0 calls=0
*/
void sub_167e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e450ULL || rel >= 0x167e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e460 size=464 callers=0 calls=6
   calls: sub_1652ca0, sub_1652d30, sub_1652de0, sub_1689e10, sub_172be70, sub_174de50
*/
void sub_167e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e460ULL || rel >= 0x167e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e630 size=400 callers=0 calls=4
   calls: sub_165e060, sub_1695fb0, sub_169acc0, sub_169ad40
*/
void sub_167e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e630ULL || rel >= 0x167e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e7c0 size=16 callers=0 calls=0
*/
void sub_167e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e7c0ULL || rel >= 0x167e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e7d0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_167e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e7d0ULL || rel >= 0x167e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e830 size=32 callers=0 calls=0
*/
void sub_167e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e830ULL || rel >= 0x167e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e850 size=16 callers=0 calls=0
*/
void sub_167e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e850ULL || rel >= 0x167e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e860 size=16 callers=0 calls=0
*/
void sub_167e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e860ULL || rel >= 0x167e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e870 size=16 callers=0 calls=0
*/
void sub_167e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e870ULL || rel >= 0x167e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e880 size=32 callers=0 calls=0
*/
void sub_167e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e880ULL || rel >= 0x167e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e8a0 size=32 callers=0 calls=0
*/
void sub_167e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e8a0ULL || rel >= 0x167e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e8c0 size=48 callers=0 calls=0
*/
void sub_167e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e8c0ULL || rel >= 0x167e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e8f0 size=16 callers=0 calls=0
*/
void sub_167e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e8f0ULL || rel >= 0x167e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e900 size=48 callers=0 calls=0
*/
void sub_167e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e900ULL || rel >= 0x167e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e930 size=32 callers=0 calls=0
*/
void sub_167e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e930ULL || rel >= 0x167e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e950 size=16 callers=0 calls=0
*/
void sub_167e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e950ULL || rel >= 0x167e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e960 size=16 callers=0 calls=0
*/
void sub_167e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e960ULL || rel >= 0x167e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e970 size=16 callers=0 calls=0
*/
void sub_167e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e970ULL || rel >= 0x167e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167e980 size=128 callers=0 calls=0
*/
void sub_167e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167e980ULL || rel >= 0x167ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ea00 size=64 callers=1 calls=2
   calls: sub_165ff10, sub_1690cb0
*/
void sub_167ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ea00ULL || rel >= 0x167ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ea40 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_167ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ea40ULL || rel >= 0x167ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ea70 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_167ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ea70ULL || rel >= 0x167eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167eaa0 size=48 callers=0 calls=2
   calls: sub_165ff30, sub_1690cd0
*/
void sub_167eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167eaa0ULL || rel >= 0x167ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ead0 size=48 callers=0 calls=2
   calls: sub_165ff30, sub_1690cd0
*/
void sub_167ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ead0ULL || rel >= 0x167eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167eb00 size=656 callers=0 calls=7
   calls: sub_1652ca0, sub_1652d30, sub_1652de0, sub_1653bb0, sub_165c9b0, sub_165e060, sub_1716400
*/
void sub_167eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167eb00ULL || rel >= 0x167ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ed90 size=800 callers=0 calls=9
   calls: IN_ANY_ADDR_d, sub_1652c70, sub_1652cf0, sub_1652d30, sub_1655c80, sub_1655c90, sub_165b5f0, sub_165e060, sub_1695be0
*/
void sub_167ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ed90ULL || rel >= 0x167f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f0b0 size=16 callers=0 calls=0
*/
void sub_167f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f0b0ULL || rel >= 0x167f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f0c0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_167f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f0c0ULL || rel >= 0x167f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f120 size=16 callers=0 calls=0
*/
void sub_167f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f120ULL || rel >= 0x167f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f130 size=16 callers=0 calls=0
*/
void sub_167f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f130ULL || rel >= 0x167f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f140 size=16 callers=0 calls=0
*/
void sub_167f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f140ULL || rel >= 0x167f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f150 size=128 callers=0 calls=0
*/
void sub_167f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f150ULL || rel >= 0x167f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f1d0 size=208 callers=1 calls=5
   calls: sub_1655c60, sub_1689be0, sub_168bd00, sub_1691a90, sub_174e350
*/
void sub_167f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f1d0ULL || rel >= 0x167f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f2a0 size=160 callers=1 calls=6
   calls: sub_1655c70, sub_1689120, sub_1689c20, sub_168bd10, sub_1690d10, sub_174e350
*/
void sub_167f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f2a0ULL || rel >= 0x167f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f340 size=48 callers=0 calls=1
   calls: sub_167f2a0
*/
void sub_167f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f340ULL || rel >= 0x167f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f370 size=944 callers=0 calls=6
   calls: sub_1652bd0, sub_1652c70, sub_165af60, sub_165e060, sub_1691e40, sub_17162d0
*/
void sub_167f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f370ULL || rel >= 0x167f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f720 size=32 callers=4 calls=0
*/
void sub_167f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f720ULL || rel >= 0x167f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f740 size=16 callers=0 calls=0
*/
void sub_167f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f740ULL || rel >= 0x167f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f750 size=288 callers=0 calls=2
   calls: sub_165af80, sub_1716390
*/
void sub_167f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f750ULL || rel >= 0x167f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f870 size=192 callers=0 calls=3
   calls: sub_165e060, sub_167f930, sub_167fab0
*/
void sub_167f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f870ULL || rel >= 0x167f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167f930 size=384 callers=3 calls=0
*/
void sub_167f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167f930ULL || rel >= 0x167fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fab0 size=400 callers=23 calls=2
   calls: sub_165e060, sub_165fb10
*/
void sub_167fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fab0ULL || rel >= 0x167fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fc40 size=112 callers=0 calls=4
   calls: sub_1655c80, sub_1655c90, sub_165fb70, sub_167fcb0
*/
void sub_167fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fc40ULL || rel >= 0x167fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fcb0 size=256 callers=4 calls=7
   calls: sub_1655c80, sub_1655c90, sub_165b040, sub_165e060, sub_165ffd0, sub_174e2a0, sub_174e2c0
*/
void sub_167fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fcb0ULL || rel >= 0x167fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fdb0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16826d0, sub_17162d0
*/
void sub_167fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fdb0ULL || rel >= 0x167fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fe00 size=64 callers=0 calls=0
*/
void sub_167fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fe00ULL || rel >= 0x167fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fe40 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1685a70, sub_17162d0
*/
void sub_167fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fe40ULL || rel >= 0x167fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fe90 size=64 callers=0 calls=0
*/
void sub_167fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fe90ULL || rel >= 0x167fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fed0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1682920, sub_17162d0
*/
void sub_167fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fed0ULL || rel >= 0x167ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ff20 size=64 callers=0 calls=0
*/
void sub_167ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ff20ULL || rel >= 0x167ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ff60 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1685480, sub_17162d0
*/
void sub_167ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ff60ULL || rel >= 0x167ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167ffb0 size=64 callers=0 calls=0
*/
void sub_167ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ffb0ULL || rel >= 0x167fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0167fff0 size=640 callers=0 calls=2
   calls: sub_1652bd0, sub_17162d0
*/
void sub_167fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fff0ULL || rel >= 0x1680270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680270 size=128 callers=0 calls=1
   calls: sub_17163e0
*/
void sub_1680270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680270ULL || rel >= 0x16802f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016802f0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1684c20, sub_17162d0
*/
void sub_16802f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16802f0ULL || rel >= 0x1680340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680340 size=64 callers=0 calls=0
*/
void sub_1680340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680340ULL || rel >= 0x1680380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680380 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_1685500, sub_17162d0
*/
void sub_1680380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680380ULL || rel >= 0x16803d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016803d0 size=64 callers=0 calls=0
*/
void sub_16803d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16803d0ULL || rel >= 0x1680410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680410 size=16 callers=0 calls=0
*/
void sub_1680410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680410ULL || rel >= 0x1680420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680420 size=352 callers=0 calls=1
   calls: sub_1693ca0
*/
void sub_1680420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680420ULL || rel >= 0x1680580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680580 size=320 callers=0 calls=1
   calls: sub_1694230
*/
void sub_1680580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680580ULL || rel >= 0x16806c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016806c0 size=80 callers=0 calls=2
   calls: sub_1652cf0, sub_165e140
*/
void sub_16806c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16806c0ULL || rel >= 0x1680710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680710 size=64 callers=0 calls=0
*/
void sub_1680710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680710ULL || rel >= 0x1680750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680750 size=48 callers=0 calls=0
*/
void sub_1680750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680750ULL || rel >= 0x1680780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680780 size=32 callers=0 calls=0
*/
void sub_1680780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680780ULL || rel >= 0x16807a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016807a0 size=32 callers=8 calls=0
*/
void sub_16807a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16807a0ULL || rel >= 0x16807c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016807c0 size=48 callers=2 calls=1
   calls: sub_167fab0
*/
void sub_16807c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16807c0ULL || rel >= 0x16807f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016807f0 size=48 callers=1 calls=1
   calls: sub_167fab0
*/
void sub_16807f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16807f0ULL || rel >= 0x1680820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680820 size=48 callers=4 calls=1
   calls: sub_167fab0
*/
void sub_1680820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680820ULL || rel >= 0x1680850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680850 size=144 callers=4 calls=2
   calls: sub_165e060, sub_167fab0
*/
void sub_1680850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680850ULL || rel >= 0x16808e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016808e0 size=464 callers=4 calls=12
   calls: sub_1652c70, sub_1652d30, sub_1655c80, sub_1655c90, sub_165af90, sub_165b0f0, sub_165e060, sub_165e140, sub_165ff70, sub_165ffe0, sub_174e2a0, sub_174e2c0
*/
void sub_16808e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16808e0ULL || rel >= 0x1680ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680ab0 size=16 callers=0 calls=0
*/
void sub_1680ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680ab0ULL || rel >= 0x1680ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680ac0 size=432 callers=0 calls=5
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_1692ea0, sub_1696090
*/
void sub_1680ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680ac0ULL || rel >= 0x1680c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680c70 size=272 callers=0 calls=2
   calls: sub_165e060, sub_1692ea0
*/
void sub_1680c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680c70ULL || rel >= 0x1680d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680d80 size=48 callers=0 calls=0
*/
void sub_1680d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680d80ULL || rel >= 0x1680db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680db0 size=208 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1680db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680db0ULL || rel >= 0x1680e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680e80 size=272 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1680e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680e80ULL || rel >= 0x1680f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01680f90 size=528 callers=0 calls=8
   calls: sub_1652ca0, sub_1652d30, sub_1652de0, sub_165bc90, sub_165bea0, sub_165e060, sub_1733e70, sub_174de50
*/
void sub_1680f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680f90ULL || rel >= 0x16811a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016811a0 size=560 callers=0 calls=6
   calls: sub_1655c80, sub_1655c90, sub_165bc90, sub_165bea0, sub_165e060, sub_1733e70
*/
void sub_16811a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16811a0ULL || rel >= 0x16813d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016813d0 size=80 callers=0 calls=2
   calls: sub_16936b0, sub_1694a60
*/
void sub_16813d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16813d0ULL || rel >= 0x1681420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681420 size=304 callers=0 calls=3
   calls: sub_1655c80, sub_1655c90, sub_165e060
*/
void sub_1681420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681420ULL || rel >= 0x1681550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681550 size=160 callers=0 calls=4
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_167fab0
*/
void sub_1681550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681550ULL || rel >= 0x16815f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016815f0 size=160 callers=0 calls=4
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_167fab0
*/
void sub_16815f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16815f0ULL || rel >= 0x1681690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681690 size=304 callers=0 calls=7
   calls: sub_1652de0, sub_1653890, sub_1655c80, sub_1655c90, sub_165e060, sub_167fab0, sub_1694a60
*/
void sub_1681690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681690ULL || rel >= 0x16817c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016817c0 size=944 callers=0 calls=5
   calls: sub_1652d30, sub_165e060, sub_165e140, sub_1687030, sub_1694a60
*/
void sub_16817c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16817c0ULL || rel >= 0x1681b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681b70 size=96 callers=0 calls=0
*/
void sub_1681b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681b70ULL || rel >= 0x1681bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681bd0 size=112 callers=0 calls=3
   calls: sub_165e060, sub_171e0e0, sub_171e1e0
*/
void sub_1681bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681bd0ULL || rel >= 0x1681c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681c40 size=80 callers=0 calls=0
*/
void sub_1681c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681c40ULL || rel >= 0x1681c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681c90 size=128 callers=0 calls=2
   calls: sub_165e060, sub_167fab0
*/
void sub_1681c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681c90ULL || rel >= 0x1681d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681d10 size=192 callers=0 calls=3
   calls: sub_165be70, sub_165be80, sub_1716400
*/
void sub_1681d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681d10ULL || rel >= 0x1681dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681dd0 size=16 callers=0 calls=0
*/
void sub_1681dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681dd0ULL || rel >= 0x1681de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681de0 size=16 callers=0 calls=0
*/
void sub_1681de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681de0ULL || rel >= 0x1681df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681df0 size=256 callers=0 calls=2
   calls: sub_165e060, sub_16962f0
*/
void sub_1681df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681df0ULL || rel >= 0x1681ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681ef0 size=160 callers=0 calls=0
*/
void sub_1681ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681ef0ULL || rel >= 0x1681f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681f90 size=48 callers=0 calls=0
*/
void sub_1681f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681f90ULL || rel >= 0x1681fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01681fc0 size=80 callers=0 calls=0
*/
void sub_1681fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681fc0ULL || rel >= 0x1682010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682010 size=368 callers=0 calls=4
   calls: sub_1652ca0, sub_1652d30, sub_1652de0, sub_1716400
*/
void sub_1682010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682010ULL || rel >= 0x1682180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682180 size=64 callers=8 calls=0
*/
void sub_1682180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682180ULL || rel >= 0x16821c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016821c0 size=272 callers=4 calls=8
   calls: sub_1652d30, sub_1652d50, sub_1655c80, sub_1655c90, sub_165e060, sub_165fd90, sub_165fea0, sub_167fab0
*/
void sub_16821c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16821c0ULL || rel >= 0x16822d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016822d0 size=64 callers=2 calls=2
   calls: sub_1655c80, sub_165fb70
*/
void sub_16822d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16822d0ULL || rel >= 0x1682310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682310 size=128 callers=4 calls=2
   calls: sub_165e060, sub_167fab0
*/
void sub_1682310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682310ULL || rel >= 0x1682390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682390 size=80 callers=0 calls=1
   calls: sub_1690c70
*/
void sub_1682390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682390ULL || rel >= 0x16823e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016823e0 size=128 callers=0 calls=1
   calls: sub_1696350
*/
void sub_16823e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16823e0ULL || rel >= 0x1682460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682460 size=288 callers=0 calls=0
*/
void sub_1682460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682460ULL || rel >= 0x1682580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682580 size=16 callers=0 calls=0
*/
void sub_1682580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682580ULL || rel >= 0x1682590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682590 size=16 callers=0 calls=0
*/
void sub_1682590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682590ULL || rel >= 0x16825a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016825a0 size=16 callers=0 calls=0
*/
void sub_16825a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16825a0ULL || rel >= 0x16825b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016825b0 size=16 callers=0 calls=0
*/
void sub_16825b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16825b0ULL || rel >= 0x16825c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016825c0 size=16 callers=0 calls=0
*/
void sub_16825c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16825c0ULL || rel >= 0x16825d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016825d0 size=16 callers=0 calls=0
*/
void sub_16825d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16825d0ULL || rel >= 0x16825e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016825e0 size=64 callers=0 calls=0
*/
void sub_16825e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16825e0ULL || rel >= 0x1682620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682620 size=16 callers=0 calls=0
*/
void sub_1682620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682620ULL || rel >= 0x1682630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682630 size=32 callers=0 calls=0
*/
void sub_1682630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682630ULL || rel >= 0x1682650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682650 size=128 callers=0 calls=0
*/
void sub_1682650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682650ULL || rel >= 0x16826d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016826d0 size=48 callers=1 calls=1
   calls: sub_16882b0
*/
void sub_16826d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16826d0ULL || rel >= 0x1682700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682700 size=16 callers=0 calls=0
*/
void sub_1682700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682700ULL || rel >= 0x1682710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682710 size=48 callers=0 calls=1
   calls: sub_1688310
*/
void sub_1682710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682710ULL || rel >= 0x1682740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682740 size=336 callers=0 calls=6
   calls: LdnBackgroundProcessJob_CreateNetworkPrivate, sub_1655110, sub_1655190, sub_1655850, sub_165e060, sub_165e140
   ref: LocalCreateNetworkJob::WaitCreateNetwork
*/
void LocalCreateNetworkJob_WaitCreateNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682740ULL || rel >= 0x1682890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682890 size=16 callers=0 calls=0
*/
void sub_1682890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682890ULL || rel >= 0x16828a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016828a0 size=128 callers=0 calls=0
*/
void sub_16828a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16828a0ULL || rel >= 0x1682920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682920 size=144 callers=1 calls=1
   calls: sub_1687440
*/
void sub_1682920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682920ULL || rel >= 0x16829b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016829b0 size=16 callers=0 calls=0
*/
void sub_16829b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16829b0ULL || rel >= 0x16829c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016829c0 size=48 callers=0 calls=1
   calls: sub_1687490
*/
void sub_16829c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16829c0ULL || rel >= 0x16829f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016829f0 size=48 callers=0 calls=1
   calls: sub_167fcb0
*/
void sub_16829f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16829f0ULL || rel >= 0x1682a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682a20 size=272 callers=0 calls=4
   calls: LocalBackgroundProcessJob_CreateNetwork, sub_165e060, sub_165e140, sub_1682b30
*/
void sub_1682a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682a20ULL || rel >= 0x1682b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682b30 size=208 callers=2 calls=2
   calls: sub_165e060, sub_1693c70
*/
void sub_1682b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682b30ULL || rel >= 0x1682c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682c00 size=752 callers=0 calls=17
   calls: sub_1655220, sub_1655290, sub_1657400, sub_165e060, sub_165e140, sub_167f720, sub_167fab0, sub_16807c0, sub_16808e0, sub_16821c0, sub_1682310, sub_1682ef0
   ... +5 more
   ref: LdnBackgroundProcessJob::WaitCreateNetworkEvent
*/
void LdnBackgroundProcessJob_WaitCreateNetworkEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682c00ULL || rel >= 0x1682ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01682ef0 size=352 callers=4 calls=1
   calls: sub_168c880
*/
void sub_1682ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1682ef0ULL || rel >= 0x1683050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683050 size=448 callers=0 calls=9
   calls: sub_1655220, sub_1655290, sub_165e060, sub_165e140, sub_167fab0, sub_167fcb0, sub_16807f0, sub_16822d0, sub_16928b0
   ref: LdnBackgroundProcessJob::WaitDisconnected
*/
void LdnBackgroundProcessJob_WaitDisconnected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683050ULL || rel >= 0x1683210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683210 size=272 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_1683320, sub_1687700
   ref: LdnBackgroundProcessJob::ScanNetwork
*/
void LdnBackgroundProcessJob_ScanNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683210ULL || rel >= 0x1683320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683320 size=176 callers=2 calls=2
   calls: sub_165e060, sub_1693c70
*/
void sub_1683320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683320ULL || rel >= 0x16833d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016833d0 size=720 callers=0 calls=10
   calls: sub_16551b0, sub_1655220, sub_1655c80, sub_1655c90, sub_165e060, sub_165e140, sub_167fab0, sub_1680820, sub_1680850, sub_1692ea0
*/
void sub_16833d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16833d0ULL || rel >= 0x16836a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016836a0 size=464 callers=0 calls=5
   calls: LocalBackgroundProcessJob_ConnectNetwork, sub_1655c80, sub_1655c90, sub_165e060, sub_1695fb0
*/
void sub_16836a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16836a0ULL || rel >= 0x1683870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683870 size=832 callers=0 calls=13
   calls: sub_1655220, sub_1655290, sub_165e060, sub_165e140, sub_167f720, sub_167fab0, sub_1680820, sub_16808e0, sub_16821c0, sub_1682310, sub_1682ef0, sub_1683bb0
   ... +1 more
   ref: LdnBackgroundProcessJob::WaitConnectNetworkEvent
*/
void LdnBackgroundProcessJob_WaitConnectNetworkEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683870ULL || rel >= 0x1683bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683bb0 size=144 callers=1 calls=2
   calls: sub_165e060, sub_167fab0
*/
void sub_1683bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683bb0ULL || rel >= 0x1683c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683c40 size=448 callers=0 calls=9
   calls: sub_1655220, sub_1655290, sub_165e060, sub_165e140, sub_167fab0, sub_167fcb0, sub_1680850, sub_16822d0, sub_16928b0
   ref: LdnBackgroundProcessJob::WaitDisconnected
*/
void LdnBackgroundProcessJob_WaitDisconnected_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683c40ULL || rel >= 0x1683e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683e00 size=448 callers=2 calls=7
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_165e140, sub_1682b30, sub_1687700, sub_16961c0
   ref: LdnBackgroundProcessJob::UpdateCreateNetworkSettingForFixedChannel
   ref: LdnBackgroundProcessJob::CreateNetworkPrivate
*/
void LdnBackgroundProcessJob_CreateNetworkPrivate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683e00ULL || rel >= 0x1683fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01683fc0 size=272 callers=0 calls=6
   calls: sub_1657400, sub_167f720, sub_1687ad0, sub_16881f0, sub_1696ab0, sub_1697210
   ref: LdnBackgroundProcessJob::CreateNetworkPrivate
*/
void LdnBackgroundProcessJob_CreateNetworkPrivate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1683fc0ULL || rel >= 0x16840d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016840d0 size=656 callers=0 calls=12
   calls: sub_1655220, sub_1655290, sub_165e060, sub_165e140, sub_167f930, sub_167fab0, sub_16807c0, sub_16808e0, sub_16821c0, sub_1682310, sub_1682ef0, sub_16928b0
   ref: LdnBackgroundProcessJob::WaitCreateNetworkEvent
*/
void LdnBackgroundProcessJob_WaitCreateNetworkEvent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16840d0ULL || rel >= 0x1684360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684360 size=272 callers=1 calls=4
   calls: sub_165e060, sub_165e140, sub_1683320, sub_1687700
   ref: LdnBackgroundProcessJob::ScanNetworkPrivate
*/
void LdnBackgroundProcessJob_ScanNetworkPrivate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684360ULL || rel >= 0x1684470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684470 size=736 callers=0 calls=10
   calls: sub_16551b0, sub_1655220, sub_1655c80, sub_1655c90, sub_165e060, sub_165e140, sub_167fab0, sub_1680820, sub_1680850, sub_1692ea0
*/
void sub_1684470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684470ULL || rel >= 0x1684750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684750 size=256 callers=1 calls=4
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_1687700
   ref: LdnBackgroundProcessJob::ConnectNetworkPrivate
*/
void LdnBackgroundProcessJob_ConnectNetworkPrivate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684750ULL || rel >= 0x1684850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684850 size=832 callers=0 calls=13
   calls: sub_1655220, sub_1655290, sub_165e060, sub_165e140, sub_167f720, sub_167f930, sub_167fab0, sub_1680820, sub_16808e0, sub_16821c0, sub_1682310, sub_1682ef0
   ... +1 more
   ref: LdnBackgroundProcessJob::WaitConnectNetworkEvent
*/
void LdnBackgroundProcessJob_WaitConnectNetworkEvent_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684850ULL || rel >= 0x1684b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684b90 size=16 callers=0 calls=0
*/
void sub_1684b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684b90ULL || rel >= 0x1684ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684ba0 size=128 callers=0 calls=0
*/
void sub_1684ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684ba0ULL || rel >= 0x1684c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684c20 size=80 callers=1 calls=1
   calls: sub_168a830
*/
void sub_1684c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684c20ULL || rel >= 0x1684c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684c70 size=16 callers=0 calls=0
*/
void sub_1684c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684c70ULL || rel >= 0x1684c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684c80 size=48 callers=0 calls=1
   calls: sub_168a8a0
*/
void sub_1684c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684c80ULL || rel >= 0x1684cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684cb0 size=48 callers=0 calls=1
   calls: sub_168aac0
*/
void sub_1684cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684cb0ULL || rel >= 0x1684ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684ce0 size=224 callers=0 calls=4
   calls: LdnBackgroundProcessJob_CreateNetworkPrivate, sub_1655330, sub_1655850, sub_1692780
   ref: LdnHostMigrationJob::WaitCreateNetwork
   ref: LdnHostMigrationJob::WaitForCancel
*/
void LdnHostMigrationJob_WaitForCancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684ce0ULL || rel >= 0x1684dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684dc0 size=336 callers=0 calls=6
   calls: sub_1653bb0, sub_1655220, sub_1655330, sub_165c600, sub_165e060, sub_168ad20
   ref: LocalHostMigrationJob::WaitUntilAllClientsConnection
   ref: LdnHostMigrationJob::WaitForCancel
*/
void LdnHostMigrationJob_WaitForCancel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684dc0ULL || rel >= 0x1684f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684f10 size=64 callers=0 calls=1
   calls: sub_165c600
   ref: LdnHostMigrationJob::WaitBeforeFirstCall
*/
void LdnHostMigrationJob_WaitBeforeFirstCall(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684f10ULL || rel >= 0x1684f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684f50 size=144 callers=0 calls=2
   calls: sub_165c600, sub_165c6b0
   ref: LdnHostMigrationJob::ConnectNetwork
*/
void LdnHostMigrationJob_ConnectNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684f50ULL || rel >= 0x1684fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01684fe0 size=208 callers=0 calls=4
   calls: LdnBackgroundProcessJob_ConnectNetworkPrivate, sub_1655330, sub_1655850, sub_1692780
   ref: LdnHostMigrationJob::WaitConnectNetwork
   ref: LdnHostMigrationJob::WaitForCancel
*/
void LdnHostMigrationJob_WaitForCancel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1684fe0ULL || rel >= 0x16850b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016850b0 size=688 callers=0 calls=10
   calls: sub_1653bb0, sub_16551b0, sub_1655220, sub_1655330, sub_165c600, sub_165e060, sub_1680850, sub_168ad20, sub_16928b0, sub_1693c80
   ref: LdnHostMigrationJob::WaitRetry
   ref: LdnHostMigrationJob::WaitForCancel
*/
void LdnHostMigrationJob_WaitRetry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16850b0ULL || rel >= 0x1685360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685360 size=144 callers=0 calls=2
   calls: sub_165c600, sub_165c6b0
   ref: LdnHostMigrationJob::ConnectNetwork
*/
void LdnHostMigrationJob_ConnectNetwork_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685360ULL || rel >= 0x16853f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016853f0 size=16 callers=0 calls=0
*/
void sub_16853f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16853f0ULL || rel >= 0x1685400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685400 size=128 callers=0 calls=0
*/
void sub_1685400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685400ULL || rel >= 0x1685480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685480 size=48 callers=1 calls=1
   calls: sub_1688a70
*/
void sub_1685480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685480ULL || rel >= 0x16854b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016854b0 size=16 callers=0 calls=0
*/
void sub_16854b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16854b0ULL || rel >= 0x16854c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016854c0 size=48 callers=0 calls=1
   calls: sub_1688ab0
*/
void sub_16854c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16854c0ULL || rel >= 0x16854f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016854f0 size=16 callers=0 calls=0
*/
void sub_16854f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16854f0ULL || rel >= 0x1685500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685500 size=48 callers=1 calls=1
   calls: sub_168a4c0
*/
void sub_1685500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685500ULL || rel >= 0x1685530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685530 size=16 callers=0 calls=0
*/
void sub_1685530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685530ULL || rel >= 0x1685540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685540 size=48 callers=0 calls=1
   calls: sub_168a500
*/
void sub_1685540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685540ULL || rel >= 0x1685570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685570 size=16 callers=0 calls=0
*/
void sub_1685570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685570ULL || rel >= 0x1685580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685580 size=128 callers=0 calls=0
*/
void sub_1685580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685580ULL || rel >= 0x1685600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685600 size=64 callers=0 calls=1
   calls: sub_1688230
*/
void sub_1685600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685600ULL || rel >= 0x1685640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685640 size=128 callers=0 calls=4
   calls: sub_1652d30, sub_1652d50, sub_1687310, sub_1687370
*/
void sub_1685640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685640ULL || rel >= 0x16856c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016856c0 size=208 callers=0 calls=3
   calls: sub_1652d50, sub_165e140, sub_167fab0
*/
void sub_16856c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16856c0ULL || rel >= 0x1685790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685790 size=192 callers=0 calls=1
   calls: sub_1652de0
*/
void sub_1685790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685790ULL || rel >= 0x1685850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685850 size=16 callers=0 calls=0
*/
void sub_1685850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685850ULL || rel >= 0x1685860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685860 size=32 callers=0 calls=0
*/
void sub_1685860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685860ULL || rel >= 0x1685880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685880 size=48 callers=0 calls=0
*/
void sub_1685880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685880ULL || rel >= 0x16858b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016858b0 size=16 callers=0 calls=0
*/
void sub_16858b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16858b0ULL || rel >= 0x16858c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016858c0 size=32 callers=0 calls=0
*/
void sub_16858c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16858c0ULL || rel >= 0x16858e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016858e0 size=64 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_16858e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16858e0ULL || rel >= 0x1685920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685920 size=16 callers=0 calls=0
*/
void sub_1685920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685920ULL || rel >= 0x1685930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685930 size=16 callers=0 calls=0
*/
void sub_1685930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685930ULL || rel >= 0x1685940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685940 size=16 callers=0 calls=0
*/
void sub_1685940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685940ULL || rel >= 0x1685950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685950 size=32 callers=0 calls=0
*/
void sub_1685950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685950ULL || rel >= 0x1685970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685970 size=16 callers=0 calls=0
*/
void sub_1685970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685970ULL || rel >= 0x1685980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685980 size=16 callers=0 calls=0
*/
void sub_1685980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685980ULL || rel >= 0x1685990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685990 size=16 callers=0 calls=0
*/
void sub_1685990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685990ULL || rel >= 0x16859a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016859a0 size=16 callers=0 calls=0
*/
void sub_16859a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16859a0ULL || rel >= 0x16859b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016859b0 size=16 callers=0 calls=0
*/
void sub_16859b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16859b0ULL || rel >= 0x16859c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016859c0 size=16 callers=0 calls=0
*/
void sub_16859c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16859c0ULL || rel >= 0x16859d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016859d0 size=16 callers=0 calls=0
*/
void sub_16859d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16859d0ULL || rel >= 0x16859e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016859e0 size=16 callers=0 calls=0
*/
void sub_16859e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16859e0ULL || rel >= 0x16859f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016859f0 size=128 callers=0 calls=0
*/
void sub_16859f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16859f0ULL || rel >= 0x1685a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685a70 size=48 callers=1 calls=1
   calls: sub_169a810
*/
void sub_1685a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685a70ULL || rel >= 0x1685aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685aa0 size=16 callers=0 calls=0
*/
void sub_1685aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685aa0ULL || rel >= 0x1685ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685ab0 size=48 callers=0 calls=1
   calls: sub_169a870
*/
void sub_1685ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685ab0ULL || rel >= 0x1685ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685ae0 size=320 callers=0 calls=6
   calls: LdnBackgroundProcessJob_ScanNetworkPrivate, sub_1655110, sub_1655190, sub_1655850, sub_165e060, sub_165e140
   ref: LdnScanNetworkJob::WaitScanNetwork
*/
void LdnScanNetworkJob_WaitScanNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685ae0ULL || rel >= 0x1685c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685c20 size=16 callers=0 calls=0
*/
void sub_1685c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685c20ULL || rel >= 0x1685c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685c30 size=128 callers=0 calls=0
*/
void sub_1685c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685c30ULL || rel >= 0x1685cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01685cb0 size=1184 callers=2 calls=3
   calls: sub_169ac20, sub_1733e20, sub_1733e60
*/
void sub_1685cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1685cb0ULL || rel >= 0x1686150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686150 size=128 callers=0 calls=1
   calls: sub_1733e40
*/
void sub_1686150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686150ULL || rel >= 0x16861d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016861d0 size=16 callers=0 calls=0
*/
void sub_16861d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16861d0ULL || rel >= 0x16861e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016861e0 size=128 callers=0 calls=2
   calls: sub_169ac40, sub_1733e40
*/
void sub_16861e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16861e0ULL || rel >= 0x1686260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686260 size=432 callers=1 calls=2
   calls: sub_165bea0, sub_169ac60
*/
void sub_1686260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686260ULL || rel >= 0x1686410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686410 size=192 callers=0 calls=2
   calls: sub_169ac90, sub_1733e70
*/
void sub_1686410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686410ULL || rel >= 0x16864d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016864d0 size=16 callers=0 calls=0
*/
void sub_16864d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16864d0ULL || rel >= 0x16864e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016864e0 size=16 callers=0 calls=0
*/
void sub_16864e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16864e0ULL || rel >= 0x16864f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016864f0 size=16 callers=0 calls=0
*/
void sub_16864f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16864f0ULL || rel >= 0x1686500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686500 size=16 callers=0 calls=0
*/
void sub_1686500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686500ULL || rel >= 0x1686510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686510 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1686510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686510ULL || rel >= 0x1686590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686590 size=16 callers=0 calls=0
*/
void sub_1686590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686590ULL || rel >= 0x16865a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016865a0 size=16 callers=0 calls=0
*/
void sub_16865a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16865a0ULL || rel >= 0x16865b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016865b0 size=256 callers=0 calls=4
   calls: sub_165bea0, sub_165e060, sub_1733e70, sub_1733e80
*/
void sub_16865b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16865b0ULL || rel >= 0x16866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016866b0 size=144 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16866b0ULL || rel >= 0x1686740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686740 size=16 callers=0 calls=0
*/
void sub_1686740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686740ULL || rel >= 0x1686750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686750 size=352 callers=0 calls=2
   calls: sub_16899e0, sub_1689db0
*/
void sub_1686750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686750ULL || rel >= 0x16868b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016868b0 size=32 callers=0 calls=0
*/
void sub_16868b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16868b0ULL || rel >= 0x16868d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016868d0 size=16 callers=0 calls=0
*/
void sub_16868d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16868d0ULL || rel >= 0x16868e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016868e0 size=16 callers=0 calls=0
*/
void sub_16868e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16868e0ULL || rel >= 0x16868f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016868f0 size=80 callers=0 calls=1
   calls: sub_1733e60
*/
void sub_16868f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16868f0ULL || rel >= 0x1686940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686940 size=48 callers=0 calls=1
   calls: sub_1733e40
*/
void sub_1686940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686940ULL || rel >= 0x1686970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686970 size=16 callers=0 calls=0
*/
void sub_1686970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686970ULL || rel >= 0x1686980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686980 size=48 callers=0 calls=0
*/
void sub_1686980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686980ULL || rel >= 0x16869b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016869b0 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_16869b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16869b0ULL || rel >= 0x1686b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686b90 size=128 callers=0 calls=0
*/
void sub_1686b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686b90ULL || rel >= 0x1686c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686c10 size=64 callers=0 calls=1
   calls: sub_1733d70
*/
void sub_1686c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686c10ULL || rel >= 0x1686c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686c50 size=16 callers=0 calls=0
*/
void sub_1686c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686c50ULL || rel >= 0x1686c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686c60 size=80 callers=0 calls=1
   calls: sub_1733d50
*/
void sub_1686c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686c60ULL || rel >= 0x1686cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686cb0 size=48 callers=0 calls=1
   calls: sub_1733d30
*/
void sub_1686cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686cb0ULL || rel >= 0x1686ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686ce0 size=16 callers=0 calls=0
*/
void sub_1686ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686ce0ULL || rel >= 0x1686cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686cf0 size=16 callers=0 calls=0
*/
void sub_1686cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686cf0ULL || rel >= 0x1686d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686d00 size=128 callers=0 calls=0
*/
void sub_1686d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686d00ULL || rel >= 0x1686d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686d80 size=64 callers=3 calls=1
   calls: sub_169ae90
*/
void sub_1686d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686d80ULL || rel >= 0x1686dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686dc0 size=16 callers=4 calls=0
*/
void sub_1686dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686dc0ULL || rel >= 0x1686dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686dd0 size=48 callers=0 calls=1
   calls: sub_169aed0
*/
void sub_1686dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686dd0ULL || rel >= 0x1686e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686e00 size=48 callers=0 calls=1
   calls: sub_169aef0
*/
void sub_1686e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686e00ULL || rel >= 0x1686e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686e30 size=160 callers=3 calls=1
   calls: sub_165e060
*/
void sub_1686e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686e30ULL || rel >= 0x1686ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686ed0 size=192 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1686ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686ed0ULL || rel >= 0x1686f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686f90 size=16 callers=0 calls=0
*/
void sub_1686f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686f90ULL || rel >= 0x1686fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686fa0 size=16 callers=0 calls=0
*/
void sub_1686fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686fa0ULL || rel >= 0x1686fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01686fb0 size=128 callers=0 calls=0
*/
void sub_1686fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1686fb0ULL || rel >= 0x1687030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687030 size=64 callers=13 calls=1
   calls: sub_1652c70
*/
void sub_1687030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687030ULL || rel >= 0x1687070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687070 size=16 callers=4 calls=0
*/
void sub_1687070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687070ULL || rel >= 0x1687080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687080 size=256 callers=1 calls=3
   calls: sub_1652f60, sub_1653370, sub_165e060
*/
void sub_1687080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687080ULL || rel >= 0x1687180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687180 size=208 callers=1 calls=2
   calls: sub_1653520, sub_165e060
*/
void sub_1687180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687180ULL || rel >= 0x1687250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687250 size=32 callers=93 calls=0
*/
void sub_1687250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687250ULL || rel >= 0x1687270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687270 size=96 callers=1 calls=1
   calls: sub_1653b50
*/
void sub_1687270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687270ULL || rel >= 0x16872d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016872d0 size=64 callers=1 calls=1
   calls: sub_1652cf0
*/
void sub_16872d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16872d0ULL || rel >= 0x1687310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687310 size=96 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1687310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687310ULL || rel >= 0x1687370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687370 size=96 callers=1 calls=2
   calls: sub_1652cf0, sub_165e060
*/
void sub_1687370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687370ULL || rel >= 0x16873d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016873d0 size=16 callers=0 calls=0
*/
void sub_16873d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16873d0ULL || rel >= 0x16873e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016873e0 size=32 callers=0 calls=0
*/
void sub_16873e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16873e0ULL || rel >= 0x1687400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687400 size=64 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1687400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687400ULL || rel >= 0x1687440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687440 size=80 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_1687440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687440ULL || rel >= 0x1687490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687490 size=64 callers=1 calls=1
   calls: sub_1660a30
*/
void sub_1687490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687490ULL || rel >= 0x16874d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016874d0 size=16 callers=0 calls=0
*/
void sub_16874d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16874d0ULL || rel >= 0x16874e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016874e0 size=160 callers=1 calls=2
   calls: sub_1655220, sub_165e060
*/
void sub_16874e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16874e0ULL || rel >= 0x1687580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01687580 size=176 callers=1 calls=4
   calls: sub_1655330, sub_16559c0, sub_1655a80, sub_165e060
*/
void sub_1687580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1687580ULL || rel >= 0x1687630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

