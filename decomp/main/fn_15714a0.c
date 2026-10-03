/* main functions 015714a0..01593090 (183 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 015714a0 size=80 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_15714a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15714a0ULL || rel >= 0x15714f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015714f0 size=80 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_15714f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15714f0ULL || rel >= 0x1571540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571540 size=32 callers=0 calls=0
*/
void sub_1571540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571540ULL || rel >= 0x1571560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571560 size=976 callers=0 calls=10
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_15cf190, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571560ULL || rel >= 0x1571930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571930 size=32 callers=0 calls=0
*/
void sub_1571930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571930ULL || rel >= 0x1571950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571950 size=32 callers=0 calls=0
*/
void sub_1571950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571950ULL || rel >= 0x1571970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571970 size=32 callers=0 calls=0
*/
void sub_1571970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571970ULL || rel >= 0x1571990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571990 size=32 callers=0 calls=0
*/
void sub_1571990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571990ULL || rel >= 0x15719b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015719b0 size=912 callers=0 calls=10
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_15cf190, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15719b0ULL || rel >= 0x1571d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571d40 size=32 callers=0 calls=0
*/
void sub_1571d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571d40ULL || rel >= 0x1571d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571d60 size=32 callers=0 calls=0
*/
void sub_1571d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571d60ULL || rel >= 0x1571d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571d80 size=32 callers=0 calls=0
*/
void sub_1571d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571d80ULL || rel >= 0x1571da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571da0 size=16 callers=0 calls=0
*/
void sub_1571da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571da0ULL || rel >= 0x1571db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571db0 size=640 callers=0 calls=8
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_1583e90, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571db0ULL || rel >= 0x1572030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572030 size=16 callers=0 calls=0
*/
void sub_1572030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572030ULL || rel >= 0x1572040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572040 size=16 callers=0 calls=0
*/
void sub_1572040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572040ULL || rel >= 0x1572050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572050 size=848 callers=0 calls=11
   calls: InstanceTable_201, InstanceTable_207, Result_2, Result_3, sub_1582cf0, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572050ULL || rel >= 0x15723a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015723a0 size=16 callers=0 calls=0
*/
void sub_15723a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15723a0ULL || rel >= 0x15723b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015723b0 size=32 callers=0 calls=0
*/
void sub_15723b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15723b0ULL || rel >= 0x15723d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015723d0 size=32 callers=0 calls=0
*/
void sub_15723d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15723d0ULL || rel >= 0x15723f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015723f0 size=16 callers=0 calls=0
*/
void sub_15723f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15723f0ULL || rel >= 0x1572400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572400 size=16 callers=0 calls=0
*/
void sub_1572400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572400ULL || rel >= 0x1572410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572410 size=16 callers=0 calls=0
*/
void sub_1572410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572410ULL || rel >= 0x1572420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572420 size=48 callers=0 calls=1
   calls: InstanceTable_26
*/
void sub_1572420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572420ULL || rel >= 0x1572450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572450 size=48 callers=0 calls=1
   calls: InstanceTable_26
*/
void sub_1572450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572450ULL || rel >= 0x1572480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572480 size=48 callers=0 calls=1
   calls: InstanceTable_26
*/
void sub_1572480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572480ULL || rel >= 0x15724b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015724b0 size=16 callers=0 calls=0
*/
void sub_15724b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15724b0ULL || rel >= 0x15724c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015724c0 size=704 callers=0 calls=5
   calls: InstanceTable_27, sub_15976b0, sub_15984f0, sub_15b9340, sub_15b9390
*/
void sub_15724c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15724c0ULL || rel >= 0x1572780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572780 size=16 callers=0 calls=0
*/
void sub_1572780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572780ULL || rel >= 0x1572790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572790 size=192 callers=0 calls=3
   calls: InstanceTable_27, sub_15984f0, sub_15b9390
*/
void sub_1572790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572790ULL || rel >= 0x1572850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572850 size=192 callers=0 calls=3
   calls: InstanceTable_27, sub_15984f0, sub_15b9390
*/
void sub_1572850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572850ULL || rel >= 0x1572910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572910 size=16 callers=0 calls=0
*/
void sub_1572910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572910ULL || rel >= 0x1572920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572920 size=864 callers=0 calls=9
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572920ULL || rel >= 0x1572c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572c80 size=16 callers=0 calls=0
*/
void sub_1572c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572c80ULL || rel >= 0x1572c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572c90 size=32 callers=0 calls=0
*/
void sub_1572c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572c90ULL || rel >= 0x1572cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572cb0 size=32 callers=0 calls=0
*/
void sub_1572cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572cb0ULL || rel >= 0x1572cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572cd0 size=32 callers=0 calls=0
*/
void sub_1572cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572cd0ULL || rel >= 0x1572cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01572cf0 size=960 callers=0 calls=10
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bc1e0, sub_15c5460, sub_15cbfc0, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1572cf0ULL || rel >= 0x15730b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015730b0 size=32 callers=0 calls=0
*/
void sub_15730b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15730b0ULL || rel >= 0x15730d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015730d0 size=16 callers=0 calls=0
*/
void sub_15730d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15730d0ULL || rel >= 0x15730e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015730e0 size=960 callers=0 calls=12
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_208, Result_2, Result_3, sub_15b6dc0, sub_15b8dc0, sub_15bc1e0, sub_15c5460, sub_15cbfc0, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15730e0ULL || rel >= 0x15734a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015734a0 size=304 callers=0 calls=3
   calls: InstanceTable_12, sub_15b9340, sub_15b9390
*/
void sub_15734a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15734a0ULL || rel >= 0x15735d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015735d0 size=1216 callers=1 calls=14
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_208, Result_2, Result_3, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bc1e0, sub_15c5460, sub_15cbfc0
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15735d0ULL || rel >= 0x1573a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01573a90 size=16 callers=0 calls=0
*/
void sub_1573a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1573a90ULL || rel >= 0x1573aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01573aa0 size=304 callers=0 calls=3
   calls: InstanceTable_13, sub_15b9340, sub_15b9390
*/
void sub_1573aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1573aa0ULL || rel >= 0x1573bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01573bd0 size=1216 callers=1 calls=14
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_208, Result_2, Result_3, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bc1e0, sub_15c5460, sub_15cbfc0
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1573bd0ULL || rel >= 0x1574090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574090 size=16 callers=0 calls=0
*/
void sub_1574090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574090ULL || rel >= 0x15740a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015740a0 size=48 callers=0 calls=1
   calls: InstanceTable_48
*/
void sub_15740a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15740a0ULL || rel >= 0x15740d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015740d0 size=48 callers=0 calls=1
   calls: InstanceTable_48
*/
void sub_15740d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15740d0ULL || rel >= 0x1574100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574100 size=48 callers=0 calls=1
   calls: InstanceTable_48
*/
void sub_1574100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574100ULL || rel >= 0x1574130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574130 size=48 callers=0 calls=1
   calls: InstanceTable_48
*/
void sub_1574130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574130ULL || rel >= 0x1574160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574160 size=48 callers=0 calls=1
   calls: InstanceTable_49
*/
void sub_1574160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574160ULL || rel >= 0x1574190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574190 size=48 callers=0 calls=1
   calls: InstanceTable_49
*/
void sub_1574190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574190ULL || rel >= 0x15741c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015741c0 size=48 callers=0 calls=1
   calls: InstanceTable_49
*/
void sub_15741c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15741c0ULL || rel >= 0x15741f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015741f0 size=48 callers=0 calls=1
   calls: InstanceTable_49
*/
void sub_15741f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15741f0ULL || rel >= 0x1574220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574220 size=16 callers=0 calls=0
*/
void sub_1574220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574220ULL || rel >= 0x1574230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574230 size=656 callers=0 calls=9
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574230ULL || rel >= 0x15744c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015744c0 size=16 callers=0 calls=0
*/
void sub_15744c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15744c0ULL || rel >= 0x15744d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015744d0 size=16 callers=0 calls=0
*/
void sub_15744d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15744d0ULL || rel >= 0x15744e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015744e0 size=656 callers=0 calls=9
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15744e0ULL || rel >= 0x1574770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574770 size=16 callers=0 calls=0
*/
void sub_1574770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574770ULL || rel >= 0x1574780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574780 size=48 callers=0 calls=1
   calls: InstanceTable_55
*/
void sub_1574780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574780ULL || rel >= 0x15747b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015747b0 size=48 callers=0 calls=1
   calls: InstanceTable_55
*/
void sub_15747b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15747b0ULL || rel >= 0x15747e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015747e0 size=48 callers=0 calls=1
   calls: InstanceTable_55
*/
void sub_15747e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15747e0ULL || rel >= 0x1574810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574810 size=16 callers=0 calls=0
*/
void sub_1574810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574810ULL || rel >= 0x1574820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574820 size=1120 callers=0 calls=11
   calls: InstanceTable_201, InstanceTable_207, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_15c5460, sub_15cbfc0, sub_15cf190, sub_1633be0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574820ULL || rel >= 0x1574c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574c80 size=32 callers=0 calls=0
*/
void sub_1574c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574c80ULL || rel >= 0x1574ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574ca0 size=32 callers=0 calls=0
*/
void sub_1574ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574ca0ULL || rel >= 0x1574cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574cc0 size=32 callers=0 calls=0
*/
void sub_1574cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574cc0ULL || rel >= 0x1574ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574ce0 size=96 callers=0 calls=2
   calls: sub_15c9350, sub_163b080
*/
void sub_1574ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574ce0ULL || rel >= 0x1574d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574d40 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_1574d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574d40ULL || rel >= 0x1574d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574d80 size=80 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_1574d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574d80ULL || rel >= 0x1574dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574dd0 size=80 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_1574dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574dd0ULL || rel >= 0x1574e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574e20 size=16 callers=0 calls=0
*/
void sub_1574e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574e20ULL || rel >= 0x1574e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574e30 size=80 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1574e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574e30ULL || rel >= 0x1574e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574e80 size=256 callers=8 calls=4
   calls: sub_1598d30, sub_15bb6c0, sub_15bc1e0, sub_15bc310
   ref: Unknown
*/
void Unknown_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574e80ULL || rel >= 0x1574f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01574f80 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c300, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1574f80ULL || rel >= 0x1575170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575170 size=80 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1575170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575170ULL || rel >= 0x15751c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015751c0 size=16 callers=0 calls=0
*/
void sub_15751c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15751c0ULL || rel >= 0x15751d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015751d0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c460, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15751d0ULL || rel >= 0x15753c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015753c0 size=16 callers=0 calls=0
*/
void sub_15753c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15753c0ULL || rel >= 0x15753d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015753d0 size=96 callers=0 calls=1
   calls: Unknown_5
*/
void sub_15753d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15753d0ULL || rel >= 0x1575430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575430 size=512 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c300, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575430ULL || rel >= 0x1575630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575630 size=96 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1575630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575630ULL || rel >= 0x1575690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575690 size=80 callers=0 calls=2
   calls: InstanceTable_207, Result_2
*/
void sub_1575690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575690ULL || rel >= 0x15756e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015756e0 size=80 callers=0 calls=2
   calls: InstanceTable_207, Result_2
*/
void sub_15756e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15756e0ULL || rel >= 0x1575730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575730 size=80 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1575730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575730ULL || rel >= 0x1575780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575780 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c660, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575780ULL || rel >= 0x1575970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575970 size=80 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1575970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575970ULL || rel >= 0x15759c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015759c0 size=16 callers=0 calls=0
*/
void sub_15759c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15759c0ULL || rel >= 0x15759d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015759d0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c980, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15759d0ULL || rel >= 0x1575bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575bc0 size=16 callers=0 calls=0
*/
void sub_1575bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575bc0ULL || rel >= 0x1575bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575bd0 size=16 callers=0 calls=0
*/
void sub_1575bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575bd0ULL || rel >= 0x1575be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575be0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a460, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575be0ULL || rel >= 0x1575dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575dc0 size=16 callers=0 calls=0
*/
void sub_1575dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575dc0ULL || rel >= 0x1575dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575dd0 size=16 callers=0 calls=0
*/
void sub_1575dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575dd0ULL || rel >= 0x1575de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575de0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a540, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575de0ULL || rel >= 0x1575fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575fc0 size=16 callers=0 calls=0
*/
void sub_1575fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575fc0ULL || rel >= 0x1575fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575fd0 size=16 callers=0 calls=0
*/
void sub_1575fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575fd0ULL || rel >= 0x1575fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01575fe0 size=528 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1575fe0ULL || rel >= 0x15761f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015761f0 size=16 callers=0 calls=0
*/
void sub_15761f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15761f0ULL || rel >= 0x1576200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576200 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c660, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576200ULL || rel >= 0x15763f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015763f0 size=16 callers=0 calls=0
*/
void sub_15763f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15763f0ULL || rel >= 0x1576400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576400 size=528 callers=4 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c660, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576400ULL || rel >= 0x1576610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576610 size=48 callers=0 calls=1
   calls: InstanceTable_26
*/
void sub_1576610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576610ULL || rel >= 0x1576640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576640 size=752 callers=4 calls=15
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c660, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576640ULL || rel >= 0x1576930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576930 size=192 callers=0 calls=3
   calls: InstanceTable_27, sub_15984f0, sub_15b9390
*/
void sub_1576930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576930ULL || rel >= 0x15769f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015769f0 size=16 callers=0 calls=0
*/
void sub_15769f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15769f0ULL || rel >= 0x1576a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576a00 size=80 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1576a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576a00ULL || rel >= 0x1576a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576a50 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158cb70, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576a50ULL || rel >= 0x1576c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576c40 size=80 callers=0 calls=1
   calls: Unknown_5
*/
void sub_1576c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576c40ULL || rel >= 0x1576c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576c90 size=16 callers=0 calls=0
*/
void sub_1576c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576c90ULL || rel >= 0x1576ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576ca0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a620, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576ca0ULL || rel >= 0x1576e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576e80 size=16 callers=0 calls=0
*/
void sub_1576e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576e80ULL || rel >= 0x1576e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576e90 size=16 callers=0 calls=0
*/
void sub_1576e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576e90ULL || rel >= 0x1576ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01576ea0 size=480 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a880, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1576ea0ULL || rel >= 0x1577080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577080 size=16 callers=0 calls=0
*/
void sub_1577080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577080ULL || rel >= 0x1577090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577090 size=80 callers=0 calls=1
   calls: InstanceTable_30
*/
void sub_1577090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577090ULL || rel >= 0x15770e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015770e0 size=48 callers=0 calls=1
   calls: InstanceTable_31
*/
void sub_15770e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15770e0ULL || rel >= 0x1577110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577110 size=608 callers=2 calls=15
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a880, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577110ULL || rel >= 0x1577370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577370 size=336 callers=0 calls=3
   calls: InstanceTable_31, sub_15986a0, sub_15b9390
*/
void sub_1577370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577370ULL || rel >= 0x15774c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015774c0 size=16 callers=0 calls=0
*/
void sub_15774c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15774c0ULL || rel >= 0x15774d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015774d0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a0f0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15774d0ULL || rel >= 0x15776b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015776b0 size=16 callers=0 calls=0
*/
void sub_15776b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15776b0ULL || rel >= 0x15776c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015776c0 size=16 callers=0 calls=0
*/
void sub_15776c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15776c0ULL || rel >= 0x15776d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015776d0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a2d0, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15776d0ULL || rel >= 0x15778b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015778b0 size=192 callers=0 calls=3
   calls: InstanceTable_34, sub_1598870, sub_15b9390
*/
void sub_15778b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15778b0ULL || rel >= 0x1577970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577970 size=752 callers=2 calls=15
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a0f0, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577970ULL || rel >= 0x1577c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577c60 size=192 callers=0 calls=3
   calls: InstanceTable_35, sub_1598a20, sub_15b9390
*/
void sub_1577c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577c60ULL || rel >= 0x1577d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01577d20 size=752 callers=2 calls=15
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a2d0, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1577d20ULL || rel >= 0x1578010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578010 size=80 callers=0 calls=1
   calls: InstanceTable_34
*/
void sub_1578010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578010ULL || rel >= 0x1578060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578060 size=80 callers=0 calls=1
   calls: InstanceTable_35
*/
void sub_1578060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578060ULL || rel >= 0x15780b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015780b0 size=16 callers=0 calls=0
*/
void sub_15780b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15780b0ULL || rel >= 0x15780c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015780c0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a970, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15780c0ULL || rel >= 0x15782b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015782b0 size=16 callers=0 calls=0
*/
void sub_15782b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15782b0ULL || rel >= 0x15782c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015782c0 size=16 callers=0 calls=0
*/
void sub_15782c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15782c0ULL || rel >= 0x15782d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015782d0 size=640 callers=0 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a970, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15782d0ULL || rel >= 0x1578550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578550 size=16 callers=0 calls=0
*/
void sub_1578550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578550ULL || rel >= 0x1578560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578560 size=16 callers=0 calls=0
*/
void sub_1578560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578560ULL || rel >= 0x1578570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578570 size=592 callers=0 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158a970, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578570ULL || rel >= 0x15787c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015787c0 size=16 callers=0 calls=0
*/
void sub_15787c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15787c0ULL || rel >= 0x15787d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015787d0 size=16 callers=0 calls=0
*/
void sub_15787d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15787d0ULL || rel >= 0x15787e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015787e0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1590930, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15787e0ULL || rel >= 0x15789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015789d0 size=16 callers=0 calls=0
*/
void sub_15789d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15789d0ULL || rel >= 0x15789e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015789e0 size=16 callers=0 calls=0
*/
void sub_15789e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15789e0ULL || rel >= 0x15789f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015789f0 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1590930, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15789f0ULL || rel >= 0x1578be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578be0 size=16 callers=0 calls=0
*/
void sub_1578be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578be0ULL || rel >= 0x1578bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578bf0 size=16 callers=0 calls=0
*/
void sub_1578bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578bf0ULL || rel >= 0x1578c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578c00 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158ab60, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578c00ULL || rel >= 0x1578df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578df0 size=16 callers=0 calls=0
*/
void sub_1578df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578df0ULL || rel >= 0x1578e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578e00 size=16 callers=0 calls=0
*/
void sub_1578e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578e00ULL || rel >= 0x1578e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01578e10 size=512 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158aa70, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1578e10ULL || rel >= 0x1579010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579010 size=16 callers=0 calls=0
*/
void sub_1579010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579010ULL || rel >= 0x1579020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579020 size=16 callers=0 calls=0
*/
void sub_1579020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579020ULL || rel >= 0x1579030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579030 size=512 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158aa70, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579030ULL || rel >= 0x1579230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579230 size=16 callers=0 calls=0
*/
void sub_1579230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579230ULL || rel >= 0x1579240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579240 size=64 callers=0 calls=1
   calls: InstanceTable_44
*/
void sub_1579240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579240ULL || rel >= 0x1579280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579280 size=624 callers=2 calls=15
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158ec60, sub_158f560, sub_15b8dc0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579280ULL || rel >= 0x15794f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015794f0 size=64 callers=0 calls=1
   calls: InstanceTable_44
*/
void sub_15794f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15794f0ULL || rel >= 0x1579530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579530 size=224 callers=0 calls=3
   calls: InstanceTable_45, sub_1598bc0, sub_15b9390
*/
void sub_1579530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579530ULL || rel >= 0x1579610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579610 size=816 callers=2 calls=16
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158ec60, sub_158f560, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579610ULL || rel >= 0x1579940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579940 size=80 callers=0 calls=1
   calls: InstanceTable_45
*/
void sub_1579940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579940ULL || rel >= 0x1579990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579990 size=272 callers=0 calls=1
   calls: InstanceTable_46
*/
void sub_1579990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579990ULL || rel >= 0x1579aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579aa0 size=944 callers=1 calls=17
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c660, sub_158ec60, sub_158f560, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20
   ... +5 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579aa0ULL || rel >= 0x1579e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579e50 size=368 callers=0 calls=4
   calls: sub_15976b0, sub_15984f0, sub_1598bc0, sub_15b9390
*/
void sub_1579e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579e50ULL || rel >= 0x1579fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01579fc0 size=96 callers=0 calls=1
   calls: InstanceTable_47
*/
void sub_1579fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1579fc0ULL || rel >= 0x157a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a020 size=672 callers=1 calls=16
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158c660, sub_158ec60, sub_158f560, sub_15b8dc0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a020ULL || rel >= 0x157a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a2c0 size=560 callers=5 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158f560, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a2c0ULL || rel >= 0x157a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a4f0 size=48 callers=0 calls=1
   calls: InstanceTable_48
*/
void sub_157a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a4f0ULL || rel >= 0x157a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a520 size=640 callers=5 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a520ULL || rel >= 0x157a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a7a0 size=48 callers=0 calls=1
   calls: InstanceTable_49
*/
void sub_157a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a7a0ULL || rel >= 0x157a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a7d0 size=48 callers=0 calls=1
   calls: InstanceTable_50
*/
void sub_157a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a7d0ULL || rel >= 0x157a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157a800 size=528 callers=2 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158f560, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157a800ULL || rel >= 0x157aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157aa10 size=48 callers=0 calls=1
   calls: InstanceTable_50
*/
void sub_157aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157aa10ULL || rel >= 0x157aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157aa40 size=144 callers=0 calls=3
   calls: InstanceTable_51, sub_15b9340, sub_15b9390
*/
void sub_157aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157aa40ULL || rel >= 0x157aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157aad0 size=624 callers=4 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157aad0ULL || rel >= 0x157ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ad40 size=144 callers=0 calls=3
   calls: InstanceTable_51, sub_15b9340, sub_15b9390
*/
void sub_157ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ad40ULL || rel >= 0x157add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157add0 size=48 callers=0 calls=1
   calls: InstanceTable_51
*/
void sub_157add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157add0ULL || rel >= 0x157ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ae00 size=48 callers=0 calls=1
   calls: InstanceTable_51
*/
void sub_157ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ae00ULL || rel >= 0x157ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ae30 size=16 callers=0 calls=0
*/
void sub_157ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ae30ULL || rel >= 0x157ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ae40 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158ac40, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ae40ULL || rel >= 0x157b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b030 size=16 callers=0 calls=0
*/
void sub_157b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b030ULL || rel >= 0x157b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b040 size=16 callers=0 calls=0
*/
void sub_157b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b040ULL || rel >= 0x157b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b050 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158ad60, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b050ULL || rel >= 0x157b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b240 size=16 callers=0 calls=0
*/
void sub_157b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b240ULL || rel >= 0x157b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b250 size=16 callers=0 calls=0
*/
void sub_157b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b250ULL || rel >= 0x157b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b260 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1591630, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b260ULL || rel >= 0x157b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b440 size=16 callers=0 calls=0
*/
void sub_157b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b440ULL || rel >= 0x157b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b450 size=592 callers=4 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_158f560, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b450ULL || rel >= 0x157b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b6a0 size=48 callers=0 calls=1
   calls: InstanceTable_55
*/
void sub_157b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b6a0ULL || rel >= 0x157b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b6d0 size=64 callers=0 calls=1
   calls: InstanceTable_56
*/
void sub_157b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b6d0ULL || rel >= 0x157b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b710 size=560 callers=2 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b710ULL || rel >= 0x157b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b940 size=64 callers=0 calls=1
   calls: InstanceTable_56
*/
void sub_157b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b940ULL || rel >= 0x157b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b980 size=48 callers=0 calls=1
   calls: InstanceTable_57
*/
void sub_157b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b980ULL || rel >= 0x157b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157b9b0 size=640 callers=2 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157b9b0ULL || rel >= 0x157bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157bc30 size=48 callers=0 calls=1
   calls: InstanceTable_57
*/
void sub_157bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157bc30ULL || rel >= 0x157bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157bc60 size=64 callers=0 calls=1
   calls: InstanceTable_58
*/
void sub_157bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157bc60ULL || rel >= 0x157bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157bca0 size=608 callers=2 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157bca0ULL || rel >= 0x157bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157bf00 size=64 callers=0 calls=1
   calls: InstanceTable_58
*/
void sub_157bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157bf00ULL || rel >= 0x157bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157bf40 size=64 callers=0 calls=1
   calls: InstanceTable_59
*/
void sub_157bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157bf40ULL || rel >= 0x157bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157bf80 size=528 callers=2 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157bf80ULL || rel >= 0x157c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c190 size=64 callers=0 calls=1
   calls: InstanceTable_59
*/
void sub_157c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c190ULL || rel >= 0x157c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c1d0 size=48 callers=0 calls=1
   calls: InstanceTable_60
*/
void sub_157c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c1d0ULL || rel >= 0x157c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c200 size=496 callers=2 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c200ULL || rel >= 0x157c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c3f0 size=48 callers=0 calls=1
   calls: InstanceTable_60
*/
void sub_157c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c3f0ULL || rel >= 0x157c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c420 size=16 callers=0 calls=0
*/
void sub_157c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c420ULL || rel >= 0x157c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c430 size=576 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c430ULL || rel >= 0x157c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c670 size=16 callers=0 calls=0
*/
void sub_157c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c670ULL || rel >= 0x157c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c680 size=16 callers=0 calls=0
*/
void sub_157c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c680ULL || rel >= 0x157c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c690 size=576 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c690ULL || rel >= 0x157c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c8d0 size=16 callers=0 calls=0
*/
void sub_157c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c8d0ULL || rel >= 0x157c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c8e0 size=16 callers=0 calls=0
*/
void sub_157c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c8e0ULL || rel >= 0x157c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157c8f0 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1591a00, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157c8f0ULL || rel >= 0x157cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157cad0 size=16 callers=0 calls=0
*/
void sub_157cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157cad0ULL || rel >= 0x157cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157cae0 size=544 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1591a00, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157cae0ULL || rel >= 0x157cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157cd00 size=48 callers=0 calls=1
   calls: InstanceTable_65
*/
void sub_157cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157cd00ULL || rel >= 0x157cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157cd30 size=480 callers=1 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157cd30ULL || rel >= 0x157cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157cf10 size=16 callers=0 calls=0
*/
void sub_157cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157cf10ULL || rel >= 0x157cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157cf20 size=512 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157cf20ULL || rel >= 0x157d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d120 size=16 callers=0 calls=0
*/
void sub_157d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d120ULL || rel >= 0x157d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d130 size=496 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1591910, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d130ULL || rel >= 0x157d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d320 size=16 callers=0 calls=0
*/
void sub_157d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d320ULL || rel >= 0x157d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d330 size=576 callers=0 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_1591910, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d330ULL || rel >= 0x157d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d570 size=96 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_157d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d570ULL || rel >= 0x157d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d5d0 size=80 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_157d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d5d0ULL || rel >= 0x157d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157d620 size=1312 callers=0 calls=13
   calls: BOUNDARY_s, null_2, sub_1591c40, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15bc1e0, sub_15bc310, sub_15bd4f0, sub_15bd810, sub_15bd850, sub_15c5e40
   ... +1 more
   ref: Content-Disposition: form-data; name="file"
   ref: Content-Disposition: form-data; name="
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157d620ULL || rel >= 0x157db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157db40 size=592 callers=0 calls=4
   calls: InstanceTable_206, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157db40ULL || rel >= 0x157dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157dd90 size=192 callers=2 calls=3
   calls: InstanceTable_363, sub_15b9390, sub_15bc310
*/
void sub_157dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157dd90ULL || rel >= 0x157de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157de50 size=16 callers=0 calls=0
*/
void sub_157de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157de50ULL || rel >= 0x157de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157de60 size=48 callers=0 calls=1
   calls: sub_157dd90
*/
void sub_157de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157de60ULL || rel >= 0x157de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157de90 size=48 callers=0 calls=1
   calls: sub_157dd90
*/
void sub_157de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157de90ULL || rel >= 0x157dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157dec0 size=736 callers=0 calls=10
   calls: Result_3, sub_15b6dc0, sub_15b8dc0, sub_15bab00, sub_15bc5d0, sub_15c5e40, sub_15cc060, sub_1633d10, sub_1641660, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: invalidurl
*/
void invalidurl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157dec0ULL || rel >= 0x157e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157e1a0 size=608 callers=0 calls=12
   calls: CallContext, Result_2, invalidurl_2, sub_15b6dc0, sub_15b8dc0, sub_15bab00, sub_15bc310, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157e1a0ULL || rel >= 0x157e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157e400 size=496 callers=0 calls=12
   calls: CallContext, Result_2, invalidurl_2, sub_15b6dc0, sub_15b8dc0, sub_15bead0, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_16418d0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157e400ULL || rel >= 0x157e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157e5f0 size=400 callers=7 calls=8
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15bab00, sub_15bb6c0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: invalidurl
*/
void invalidurl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157e5f0ULL || rel >= 0x157e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157e780 size=1168 callers=0 calls=10
   calls: Result_2, invalidurl_2, sub_15b77e0, sub_15b8dc0, sub_15b9f90, sub_15bc310, sub_15bc850, sub_15bce60, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: http://
   ref: https://
*/
void unnamed_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157e780ULL || rel >= 0x157ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ec10 size=48 callers=0 calls=0
*/
void sub_157ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ec10ULL || rel >= 0x157ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ec40 size=832 callers=0 calls=10
   calls: Result_2, invalidurl_2, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bbc70, sub_15bbd10, sub_15c5e40, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ec40ULL || rel >= 0x157ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157ef80 size=288 callers=0 calls=5
   calls: Result_2, invalidurl_2, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157ef80ULL || rel >= 0x157f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f0a0 size=16 callers=0 calls=0
*/
void sub_157f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f0a0ULL || rel >= 0x157f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f0b0 size=16 callers=0 calls=0
*/
void sub_157f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f0b0ULL || rel >= 0x157f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f0c0 size=16 callers=0 calls=0
*/
void sub_157f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f0c0ULL || rel >= 0x157f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f0d0 size=304 callers=0 calls=7
   calls: InstanceTable_206, Result_2, invalidurl_2, sub_10fb680, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f0d0ULL || rel >= 0x157f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f200 size=16 callers=0 calls=0
*/
void sub_157f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f200ULL || rel >= 0x157f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f210 size=240 callers=2 calls=4
   calls: InstanceTable_363, sub_15b9390, sub_15bc310, sub_15cf3c0
*/
void sub_157f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f210ULL || rel >= 0x157f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f300 size=32 callers=0 calls=0
*/
void sub_157f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f300ULL || rel >= 0x157f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f320 size=16 callers=0 calls=0
*/
void sub_157f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f320ULL || rel >= 0x157f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f330 size=48 callers=0 calls=1
   calls: sub_157f210
*/
void sub_157f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f330ULL || rel >= 0x157f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f360 size=48 callers=0 calls=1
   calls: sub_157f210
*/
void sub_157f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f360ULL || rel >= 0x157f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f390 size=784 callers=0 calls=11
   calls: Result_3, sub_1597be0, sub_15aa0d0, sub_15b6dc0, sub_15b8dc0, sub_15bab00, sub_15c5e40, sub_15cc060, sub_1633d10, sub_1641660, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f390ULL || rel >= 0x157f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f6a0 size=720 callers=0 calls=15
   calls: InstanceTable_78, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9f90, sub_15bc1e0, sub_15bc310, sub_15bce60, sub_15bead0, sub_15c5e40, sub_15cbf00, sub_15cc0b0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: http://
   ref: https://
*/
void unnamed_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f6a0ULL || rel >= 0x157f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157f970 size=496 callers=0 calls=9
   calls: CallContext, InstanceTable_78, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157f970ULL || rel >= 0x157fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157fb60 size=336 callers=7 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157fb60ULL || rel >= 0x157fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157fcb0 size=384 callers=0 calls=8
   calls: CallContext, InstanceTable_78, Result_2, sub_15b8dc0, sub_15bc5d0, sub_15c5e40, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157fcb0ULL || rel >= 0x157fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0157fe30 size=720 callers=0 calls=6
   calls: InstanceTable_78, Result_2, sub_15b8dc0, sub_15c5e40, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157fe30ULL || rel >= 0x1580100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580100 size=432 callers=0 calls=7
   calls: InstanceTable_78, Result_2, sub_15b8dc0, sub_15bbc70, sub_15bbd10, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580100ULL || rel >= 0x15802b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015802b0 size=400 callers=0 calls=7
   calls: InstanceTable_78, Result_2, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15802b0ULL || rel >= 0x1580440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580440 size=16 callers=0 calls=0
*/
void sub_1580440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580440ULL || rel >= 0x1580450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580450 size=352 callers=0 calls=7
   calls: InstanceTable_206, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15bc310, sub_15c5e40, sub_6a5230
   ref: Content-Length
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580450ULL || rel >= 0x15805b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015805b0 size=16 callers=0 calls=0
*/
void sub_15805b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15805b0ULL || rel >= 0x15805c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015805c0 size=592 callers=0 calls=4
   calls: InstanceTable_206, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15805c0ULL || rel >= 0x1580810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580810 size=16 callers=0 calls=0
*/
void sub_1580810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580810ULL || rel >= 0x1580820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580820 size=320 callers=2 calls=4
   calls: InstanceTable_363, sub_15b9390, sub_15bc310, sub_15cf3c0
*/
void sub_1580820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580820ULL || rel >= 0x1580960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580960 size=16 callers=0 calls=0
*/
void sub_1580960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580960ULL || rel >= 0x1580970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580970 size=48 callers=0 calls=1
   calls: sub_1580820
*/
void sub_1580970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580970ULL || rel >= 0x15809a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015809a0 size=48 callers=0 calls=1
   calls: sub_1580820
*/
void sub_15809a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15809a0ULL || rel >= 0x15809d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015809d0 size=832 callers=0 calls=12
   calls: Result_3, sub_107b670, sub_1597be0, sub_15aa0d0, sub_15b6dc0, sub_15b8dc0, sub_15bab00, sub_15c5e40, sub_15cc060, sub_1633d10, sub_1641660, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15809d0ULL || rel >= 0x1580d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580d10 size=720 callers=0 calls=15
   calls: InstanceTable_87, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9f90, sub_15bc1e0, sub_15bc310, sub_15bce60, sub_15bead0, sub_15c5e40, sub_15cbf00, sub_15cc0b0
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: http://
   ref: https://
*/
void unnamed_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580d10ULL || rel >= 0x1580fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01580fe0 size=496 callers=0 calls=9
   calls: CallContext, InstanceTable_87, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1580fe0ULL || rel >= 0x15811d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015811d0 size=336 callers=7 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15811d0ULL || rel >= 0x1581320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581320 size=384 callers=0 calls=8
   calls: CallContext, InstanceTable_87, Result_2, sub_15b8dc0, sub_15bc5d0, sub_15c5e40, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581320ULL || rel >= 0x15814a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015814a0 size=736 callers=0 calls=6
   calls: InstanceTable_87, Result_2, sub_15b8dc0, sub_15c5e40, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15814a0ULL || rel >= 0x1581780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581780 size=432 callers=0 calls=7
   calls: InstanceTable_87, Result_2, sub_15b8dc0, sub_15bbc70, sub_15bbd10, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581780ULL || rel >= 0x1581930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581930 size=400 callers=0 calls=7
   calls: InstanceTable_87, Result_2, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581930ULL || rel >= 0x1581ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581ac0 size=16 callers=0 calls=0
*/
void sub_1581ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581ac0ULL || rel >= 0x1581ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581ad0 size=352 callers=0 calls=7
   calls: InstanceTable_206, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15bc310, sub_15c5e40, sub_6a5230
   ref: Content-Length
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581ad0ULL || rel >= 0x1581c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581c30 size=16 callers=0 calls=0
*/
void sub_1581c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581c30ULL || rel >= 0x1581c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581c40 size=608 callers=0 calls=4
   calls: InstanceTable_206, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581c40ULL || rel >= 0x1581ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581ea0 size=16 callers=0 calls=0
*/
void sub_1581ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581ea0ULL || rel >= 0x1581eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581eb0 size=224 callers=1 calls=2
   calls: InstanceTable_363, sub_15b9390
*/
void sub_1581eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581eb0ULL || rel >= 0x1581f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581f90 size=48 callers=0 calls=1
   calls: sub_1581eb0
*/
void sub_1581f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581f90ULL || rel >= 0x1581fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01581fc0 size=816 callers=0 calls=8
   calls: Result_3, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15c5e40, sub_15cc060, sub_1633d10, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1581fc0ULL || rel >= 0x15822f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015822f0 size=464 callers=0 calls=9
   calls: CallContext, InstanceTable_97, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15822f0ULL || rel >= 0x15824c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015824c0 size=496 callers=0 calls=7
   calls: Result_3, sub_15b8dc0, sub_15c5e40, sub_15cc060, sub_1633d10, sub_6a5230, sub_6abc20
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_96(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15824c0ULL || rel >= 0x15826b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015826b0 size=352 callers=2 calls=7
   calls: InstanceTable_206, InstanceTable_208, sub_15925b0, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_97(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15826b0ULL || rel >= 0x1582810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01582810 size=1248 callers=0 calls=10
   calls: InstanceTable_97, Result_2, sub_1598f90, sub_15990f0, sub_15b8dc0, sub_15b9340, sub_15c5e40, sub_6a5230, sub_6a54a0, sub_6a8500
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1582810ULL || rel >= 0x1582cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01582cf0 size=592 callers=1 calls=8
   calls: sub_107b670, sub_15b9390, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15cf190, sub_15cf460, sub_6abc20
*/
void sub_1582cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1582cf0ULL || rel >= 0x1582f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01582f40 size=128 callers=0 calls=4
   calls: InstanceTable_363, sub_1582fc0, sub_1592780, sub_15b9390
*/
void sub_1582f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1582f40ULL || rel >= 0x1582fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01582fc0 size=224 callers=5 calls=1
   calls: sub_15b9390
*/
void sub_1582fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1582fc0ULL || rel >= 0x15830a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015830a0 size=144 callers=0 calls=5
   calls: InstanceTable_363, sub_1582fc0, sub_1592780, sub_15b9390, sub_15cc040
*/
void sub_15830a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15830a0ULL || rel >= 0x1583130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01583130 size=688 callers=0 calls=10
   calls: Result_3, sub_158c8a0, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15c5e40, sub_15cc060, sub_1633d10, sub_1641660, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_99(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1583130ULL || rel >= 0x15833e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015833e0 size=464 callers=0 calls=9
   calls: CallContext, InstanceTable_101, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15833e0ULL || rel >= 0x15835b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015835b0 size=336 callers=5 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15835b0ULL || rel >= 0x1583700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01583700 size=896 callers=0 calls=16
   calls: CallContext, InstanceTable_101, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9f90, sub_15bc1e0, sub_15bc310, sub_15bce60, sub_15bead0, sub_15c5e40, sub_15cbf00
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: http://
   ref: https://
*/
void unnamed_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1583700ULL || rel >= 0x1583a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01583a80 size=736 callers=0 calls=12
   calls: CallContext, InstanceTable_101, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bbc70, sub_15bbd10, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_102(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1583a80ULL || rel >= 0x1583d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01583d60 size=304 callers=0 calls=5
   calls: InstanceTable_101, Result_2, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_103(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1583d60ULL || rel >= 0x1583e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01583e90 size=496 callers=1 calls=6
   calls: Result_3, sub_107b1e0, sub_15cbfc0, sub_15cf190, sub_1633be0, sub_6abc20
*/
void sub_1583e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1583e90ULL || rel >= 0x1584080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584080 size=128 callers=0 calls=4
   calls: InstanceTable_363, sub_107ab40, sub_1592960, sub_15b9390
*/
void sub_1584080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584080ULL || rel >= 0x1584100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584100 size=144 callers=0 calls=5
   calls: InstanceTable_363, sub_107ab40, sub_1592960, sub_15b9390, sub_15cc040
*/
void sub_1584100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584100ULL || rel >= 0x1584190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584190 size=688 callers=0 calls=10
   calls: Result_3, sub_158c550, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15c5e40, sub_15cc060, sub_1633d10, sub_1641660, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_104(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584190ULL || rel >= 0x1584440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584440 size=464 callers=0 calls=9
   calls: CallContext, InstanceTable_106, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_105(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584440ULL || rel >= 0x1584610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584610 size=336 callers=5 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_106(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584610ULL || rel >= 0x1584760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584760 size=896 callers=0 calls=16
   calls: CallContext, InstanceTable_106, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9f90, sub_15bc1e0, sub_15bc310, sub_15bce60, sub_15bead0, sub_15c5e40, sub_15cbf00
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: http://
   ref: https://
*/
void unnamed_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584760ULL || rel >= 0x1584ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584ae0 size=736 callers=0 calls=12
   calls: CallContext, InstanceTable_106, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bbc70, sub_15bbd10, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_107(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584ae0ULL || rel >= 0x1584dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584dc0 size=304 callers=0 calls=5
   calls: InstanceTable_106, Result_2, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584dc0ULL || rel >= 0x1584ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584ef0 size=256 callers=1 calls=3
   calls: InstanceTable_363, sub_15b9390, sub_15bc310
*/
void sub_1584ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584ef0ULL || rel >= 0x1584ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01584ff0 size=48 callers=0 calls=1
   calls: sub_1584ef0
*/
void sub_1584ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1584ff0ULL || rel >= 0x1585020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01585020 size=832 callers=0 calls=10
   calls: Result_2, Result_3, sub_1592a80, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_1633d10, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_109(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1585020ULL || rel >= 0x1585360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01585360 size=576 callers=0 calls=12
   calls: CallContext, InstanceTable_112, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1585360ULL || rel >= 0x15855a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015855a0 size=832 callers=0 calls=9
   calls: Result_2, Result_3, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_1633d10, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_111(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15855a0ULL || rel >= 0x15858e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015858e0 size=320 callers=10 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_112(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15858e0ULL || rel >= 0x1585a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01585a20 size=1168 callers=0 calls=13
   calls: InstanceTable_112, Result_2, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: invalidurl
*/
void invalidurl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1585a20ULL || rel >= 0x1585eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01585eb0 size=512 callers=0 calls=9
   calls: InstanceTable_112, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_113(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1585eb0ULL || rel >= 0x15860b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015860b0 size=448 callers=0 calls=8
   calls: InstanceTable_112, Result_2, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_114(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15860b0ULL || rel >= 0x1586270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01586270 size=1040 callers=0 calls=12
   calls: InstanceTable_112, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15c5e40, sub_15cbf00, sub_15cc060, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_115(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1586270ULL || rel >= 0x1586680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01586680 size=1232 callers=0 calls=11
   calls: InstanceTable_112, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_116(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1586680ULL || rel >= 0x1586b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01586b50 size=304 callers=0 calls=6
   calls: InstanceTable_112, Result_2, sub_15b8dc0, sub_15c5e40, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_117(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1586b50ULL || rel >= 0x1586c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01586c80 size=48 callers=0 calls=0
*/
void sub_1586c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1586c80ULL || rel >= 0x1586cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01586cb0 size=592 callers=0 calls=10
   calls: InstanceTable_112, Result_2, sub_15b8a10, sub_15b8dc0, sub_15bbc70, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1586cb0ULL || rel >= 0x1586f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01586f00 size=256 callers=1 calls=3
   calls: InstanceTable_363, sub_15b9390, sub_15bc310
*/
void sub_1586f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1586f00ULL || rel >= 0x1587000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01587000 size=48 callers=0 calls=1
   calls: sub_1586f00
*/
void sub_1587000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1587000ULL || rel >= 0x1587030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01587030 size=832 callers=0 calls=10
   calls: Result_2, Result_3, sub_1592d10, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_1633d10, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_119(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1587030ULL || rel >= 0x1587370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01587370 size=576 callers=0 calls=12
   calls: CallContext, InstanceTable_122, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1587370ULL || rel >= 0x15875b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015875b0 size=832 callers=0 calls=9
   calls: Result_2, Result_3, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_1633d10, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_121(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15875b0ULL || rel >= 0x15878f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015878f0 size=320 callers=11 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_122(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15878f0ULL || rel >= 0x1587a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01587a30 size=1168 callers=0 calls=13
   calls: InstanceTable_122, Result_2, sub_15b8dc0, sub_15ba6a0, sub_15ba780, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: invalidurl
*/
void invalidurl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1587a30ULL || rel >= 0x1587ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01587ec0 size=512 callers=0 calls=9
   calls: InstanceTable_122, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_123(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1587ec0ULL || rel >= 0x15880c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015880c0 size=448 callers=0 calls=8
   calls: InstanceTable_122, Result_2, sub_15b8dc0, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15880c0ULL || rel >= 0x1588280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01588280 size=1040 callers=0 calls=12
   calls: InstanceTable_122, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15c5e40, sub_15cbf00, sub_15cc060, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_125(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1588280ULL || rel >= 0x1588690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01588690 size=1376 callers=0 calls=12
   calls: InstanceTable_122, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_126(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1588690ULL || rel >= 0x1588bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01588bf0 size=304 callers=0 calls=6
   calls: InstanceTable_122, Result_2, sub_15b8dc0, sub_15c5e40, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_127(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1588bf0ULL || rel >= 0x1588d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01588d20 size=48 callers=0 calls=0
*/
void sub_1588d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1588d20ULL || rel >= 0x1588d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01588d50 size=592 callers=0 calls=10
   calls: InstanceTable_122, Result_2, sub_15b8a10, sub_15b8dc0, sub_15bbc70, sub_15c3ed0, sub_15c5e40, sub_15c6480, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1588d50ULL || rel >= 0x1588fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01588fa0 size=208 callers=1 calls=3
   calls: InstanceTable_363, sub_1589070, sub_15b9390
*/
void sub_1588fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1588fa0ULL || rel >= 0x1589070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01589070 size=224 callers=4 calls=1
   calls: sub_15b9390
*/
void sub_1589070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1589070ULL || rel >= 0x1589150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01589150 size=128 callers=0 calls=0
*/
void sub_1589150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1589150ULL || rel >= 0x15891d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015891d0 size=48 callers=0 calls=1
   calls: sub_1588fa0
*/
void sub_15891d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15891d0ULL || rel >= 0x1589200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01589200 size=736 callers=0 calls=10
   calls: Result_3, sub_107b670, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15c5e40, sub_15cc060, sub_1633d10, sub_1641660, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_129(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1589200ULL || rel >= 0x15894e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015894e0 size=464 callers=0 calls=9
   calls: CallContext, InstanceTable_131, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5e40, sub_15cbf00, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15894e0ULL || rel >= 0x15896b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015896b0 size=320 callers=5 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_131(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15896b0ULL || rel >= 0x15897f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015897f0 size=896 callers=0 calls=16
   calls: CallContext, InstanceTable_131, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9f90, sub_15bc1e0, sub_15bc310, sub_15bce60, sub_15bead0, sub_15c5e40, sub_15cbf00
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: http://
   ref: https://
*/
void unnamed_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15897f0ULL || rel >= 0x1589b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01589b70 size=576 callers=0 calls=11
   calls: CallContext, InstanceTable_131, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bbd10, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_132(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1589b70ULL || rel >= 0x1589db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01589db0 size=416 callers=0 calls=7
   calls: InstanceTable_131, Result_2, sub_15b8dc0, sub_15bbc70, sub_15bbd10, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_133(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1589db0ULL || rel >= 0x1589f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01589f50 size=416 callers=1 calls=5
   calls: sub_158bc50, sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_162d630
*/
void sub_1589f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1589f50ULL || rel >= 0x158a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a0f0 size=480 callers=2 calls=7
   calls: sub_1589f50, sub_158bc50, sub_158c210, sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_162d630
*/
void sub_158a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a0f0ULL || rel >= 0x158a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a2d0 size=400 callers=2 calls=5
   calls: sub_158bc50, sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_162d630
*/
void sub_158a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a2d0ULL || rel >= 0x158a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a460 size=224 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_15c8ca0
*/
void sub_158a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a460ULL || rel >= 0x158a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a540 size=224 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_15c8ca0
*/
void sub_158a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a540ULL || rel >= 0x158a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a620 size=240 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_15c8ca0
*/
void sub_158a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a620ULL || rel >= 0x158a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a710 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_158a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a710ULL || rel >= 0x158a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a780 size=16 callers=0 calls=0
*/
void sub_158a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a780ULL || rel >= 0x158a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a790 size=80 callers=4 calls=1
   calls: sub_16305b0
*/
void sub_158a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a790ULL || rel >= 0x158a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a7e0 size=80 callers=2 calls=1
   calls: sub_16305b0
*/
void sub_158a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a7e0ULL || rel >= 0x158a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a830 size=80 callers=2 calls=1
   calls: sub_16305b0
*/
void sub_158a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a830ULL || rel >= 0x158a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a880 size=240 callers=2 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a880ULL || rel >= 0x158a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158a970 size=256 callers=3 calls=3
   calls: sub_158c210, sub_15c8aa0, sub_15c8ad0
*/
void sub_158a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158a970ULL || rel >= 0x158aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158aa70 size=240 callers=2 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158aa70ULL || rel >= 0x158ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ab60 size=224 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_158ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ab60ULL || rel >= 0x158ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ac40 size=288 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ac40ULL || rel >= 0x158ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ad60 size=288 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ad60ULL || rel >= 0x158ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ae80 size=368 callers=1 calls=1
   calls: sub_162d000
*/
void sub_158ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ae80ULL || rel >= 0x158aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158aff0 size=1344 callers=2 calls=6
   calls: sub_158b530, sub_158bd80, sub_15a7030, sub_15b7b20, sub_162d000, sub_162d6a0
*/
void sub_158aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158aff0ULL || rel >= 0x158b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158b530 size=448 callers=2 calls=3
   calls: sub_158ef20, sub_1599840, sub_15999a0
*/
void sub_158b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158b530ULL || rel >= 0x158b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158b6f0 size=416 callers=1 calls=0
*/
void sub_158b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158b6f0ULL || rel >= 0x158b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158b890 size=400 callers=1 calls=0
*/
void sub_158b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158b890ULL || rel >= 0x158ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ba20 size=480 callers=2 calls=0
*/
void sub_158ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ba20ULL || rel >= 0x158bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158bc00 size=80 callers=5 calls=1
   calls: sub_6abc20
*/
void sub_158bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158bc00ULL || rel >= 0x158bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158bc50 size=304 callers=10 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158bc50ULL || rel >= 0x158bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158bd80 size=416 callers=2 calls=1
   calls: sub_15afb10
*/
void sub_158bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158bd80ULL || rel >= 0x158bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158bf20 size=464 callers=2 calls=0
*/
void sub_158bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158bf20ULL || rel >= 0x158c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c0f0 size=32 callers=4 calls=0
*/
void sub_158c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c0f0ULL || rel >= 0x158c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c110 size=224 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_15c8ca0
*/
void sub_158c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c110ULL || rel >= 0x158c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c1f0 size=32 callers=1 calls=0
*/
void sub_158c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c1f0ULL || rel >= 0x158c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c210 size=240 callers=3 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c210ULL || rel >= 0x158c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c300 size=352 callers=2 calls=4
   calls: sub_158c210, sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_158c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c300ULL || rel >= 0x158c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c460 size=240 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c460ULL || rel >= 0x158c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c550 size=272 callers=1 calls=5
   calls: sub_107b670, sub_1593120, sub_15bab00, sub_15cf360, sub_6abc20
*/
void sub_158c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c550ULL || rel >= 0x158c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c660 size=576 callers=6 calls=7
   calls: sub_158bc50, sub_158c110, sub_158f260, sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_162d630
*/
void sub_158c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c660ULL || rel >= 0x158c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c8a0 size=224 callers=1 calls=5
   calls: sub_107b670, sub_1593120, sub_15bab00, sub_15cf360, sub_6abc20
*/
void sub_158c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c8a0ULL || rel >= 0x158c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158c980 size=496 callers=1 calls=6
   calls: sub_158bc50, sub_158f260, sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_162d630
*/
void sub_158c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158c980ULL || rel >= 0x158cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158cb70 size=336 callers=1 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_158cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158cb70ULL || rel >= 0x158ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ccc0 size=256 callers=1 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_134(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ccc0ULL || rel >= 0x158cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158cdc0 size=288 callers=0 calls=4
   calls: sub_158fd60, sub_15b9390, sub_15bc310, sub_16340b0
*/
void sub_158cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158cdc0ULL || rel >= 0x158cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158cee0 size=176 callers=0 calls=3
   calls: sub_1582fc0, sub_1590450, sub_16340b0
*/
void sub_158cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158cee0ULL || rel >= 0x158cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158cf90 size=16 callers=0 calls=0
*/
void sub_158cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158cf90ULL || rel >= 0x158cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158cfa0 size=16 callers=0 calls=0
*/
void sub_158cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158cfa0ULL || rel >= 0x158cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158cfb0 size=112 callers=0 calls=3
   calls: sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158cfb0ULL || rel >= 0x158d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d020 size=16 callers=0 calls=0
*/
void sub_158d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d020ULL || rel >= 0x158d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d030 size=112 callers=0 calls=3
   calls: sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d030ULL || rel >= 0x158d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d0a0 size=336 callers=0 calls=6
   calls: sub_158aff0, sub_1593490, sub_15b7a70, sub_15cf190, sub_16340b0, sub_6abc20
*/
void sub_158d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d0a0ULL || rel >= 0x158d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d1f0 size=272 callers=0 calls=4
   calls: sub_1590e30, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d1f0ULL || rel >= 0x158d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d300 size=176 callers=0 calls=3
   calls: sub_1589070, sub_15906c0, sub_16340b0
*/
void sub_158d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d300ULL || rel >= 0x158d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d3b0 size=16 callers=0 calls=0
*/
void sub_158d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d3b0ULL || rel >= 0x158d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d3c0 size=208 callers=0 calls=3
   calls: sub_1590c40, sub_15b9390, sub_16340b0
*/
void sub_158d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d3c0ULL || rel >= 0x158d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d490 size=272 callers=0 calls=4
   calls: sub_158ffb0, sub_15b9390, sub_15bc310, sub_16340b0
*/
void sub_158d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d490ULL || rel >= 0x158d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d5a0 size=224 callers=0 calls=4
   calls: sub_15935d0, sub_15b9390, sub_15c8ce0, sub_16340b0
*/
void sub_158d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d5a0ULL || rel >= 0x158d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d680 size=112 callers=0 calls=2
   calls: sub_158ed50, sub_16340b0
*/
void sub_158d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d680ULL || rel >= 0x158d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d6f0 size=112 callers=0 calls=2
   calls: sub_158ed50, sub_16340b0
*/
void sub_158d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d6f0ULL || rel >= 0x158d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d760 size=320 callers=0 calls=4
   calls: sub_1593a50, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d760ULL || rel >= 0x158d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d8a0 size=16 callers=0 calls=0
*/
void sub_158d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d8a0ULL || rel >= 0x158d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d8b0 size=112 callers=0 calls=3
   calls: sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d8b0ULL || rel >= 0x158d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d920 size=160 callers=0 calls=3
   calls: sub_1594280, sub_15b9390, sub_16340b0
*/
void sub_158d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d920ULL || rel >= 0x158d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158d9c0 size=160 callers=0 calls=1
   calls: sub_16340b0
*/
void sub_158d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158d9c0ULL || rel >= 0x158da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158da60 size=16 callers=0 calls=0
*/
void sub_158da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158da60ULL || rel >= 0x158da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158da70 size=224 callers=0 calls=4
   calls: sub_158ed50, sub_158f340, sub_15b7a70, sub_16340b0
*/
void sub_158da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158da70ULL || rel >= 0x158db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158db50 size=176 callers=0 calls=3
   calls: sub_15901e0, sub_1592960, sub_16340b0
*/
void sub_158db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158db50ULL || rel >= 0x158dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158dc00 size=304 callers=0 calls=4
   calls: sub_158f850, sub_15b9390, sub_15bc310, sub_16340b0
*/
void sub_158dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158dc00ULL || rel >= 0x158dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158dd30 size=16 callers=0 calls=0
*/
void sub_158dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158dd30ULL || rel >= 0x158dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158dd40 size=224 callers=0 calls=4
   calls: sub_1594710, sub_15b9390, sub_15c8ce0, sub_16340b0
*/
void sub_158dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158dd40ULL || rel >= 0x158de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158de20 size=160 callers=0 calls=3
   calls: sub_1594b90, sub_15b9390, sub_16340b0
*/
void sub_158de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158de20ULL || rel >= 0x158dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158dec0 size=112 callers=0 calls=2
   calls: sub_158bf20, sub_16340b0
*/
void sub_158dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158dec0ULL || rel >= 0x158df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158df30 size=256 callers=0 calls=4
   calls: sub_1595030, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158df30ULL || rel >= 0x158e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e030 size=16 callers=0 calls=0
*/
void sub_158e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e030ULL || rel >= 0x158e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e040 size=16 callers=0 calls=0
*/
void sub_158e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e040ULL || rel >= 0x158e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e050 size=432 callers=0 calls=7
   calls: sub_158f650, sub_158f850, sub_15b9390, sub_15bc310, sub_15cf190, sub_15cf3c0, sub_16340b0
*/
void sub_158e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e050ULL || rel >= 0x158e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e200 size=112 callers=0 calls=2
   calls: sub_158ba20, sub_16340b0
*/
void sub_158e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e200ULL || rel >= 0x158e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e270 size=256 callers=0 calls=4
   calls: sub_1595440, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e270ULL || rel >= 0x158e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e370 size=272 callers=0 calls=4
   calls: sub_1590e30, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e370ULL || rel >= 0x158e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e480 size=16 callers=0 calls=0
*/
void sub_158e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e480ULL || rel >= 0x158e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e490 size=16 callers=0 calls=0
*/
void sub_158e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e490ULL || rel >= 0x158e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e4a0 size=112 callers=0 calls=3
   calls: sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e4a0ULL || rel >= 0x158e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e510 size=256 callers=0 calls=4
   calls: sub_1595840, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e510ULL || rel >= 0x158e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e610 size=16 callers=0 calls=0
*/
void sub_158e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e610ULL || rel >= 0x158e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e620 size=112 callers=0 calls=3
   calls: sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e620ULL || rel >= 0x158e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e690 size=112 callers=0 calls=2
   calls: sub_158ed50, sub_16340b0
*/
void sub_158e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e690ULL || rel >= 0x158e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e700 size=256 callers=0 calls=4
   calls: sub_1595840, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e700ULL || rel >= 0x158e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e800 size=256 callers=0 calls=4
   calls: sub_1595c40, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e800ULL || rel >= 0x158e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e900 size=208 callers=0 calls=3
   calls: sub_1590c40, sub_15b9390, sub_16340b0
*/
void sub_158e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e900ULL || rel >= 0x158e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e9d0 size=16 callers=0 calls=0
*/
void sub_158e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e9d0ULL || rel >= 0x158e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e9e0 size=16 callers=0 calls=0
*/
void sub_158e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e9e0ULL || rel >= 0x158e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158e9f0 size=16 callers=0 calls=0
*/
void sub_158e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e9f0ULL || rel >= 0x158ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ea00 size=16 callers=0 calls=0
*/
void sub_158ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ea00ULL || rel >= 0x158ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ea10 size=192 callers=0 calls=5
   calls: sub_1591730, sub_15cf190, sub_15cf3c0, sub_15cf460, sub_16340b0
*/
void sub_158ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ea10ULL || rel >= 0x158ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ead0 size=256 callers=0 calls=4
   calls: sub_1596390, sub_15b0a30, sub_15b9390, sub_16340b0
*/
void sub_158ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ead0ULL || rel >= 0x158ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ebd0 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_158ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ebd0ULL || rel >= 0x158ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ec60 size=240 callers=4 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ec60ULL || rel >= 0x158ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ed50 size=464 callers=7 calls=0
*/
void sub_158ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ed50ULL || rel >= 0x158ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ef20 size=416 callers=1 calls=1
   calls: sub_158ed50
*/
void sub_158ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ef20ULL || rel >= 0x158f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f0c0 size=80 callers=1 calls=0
*/
void sub_158f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f0c0ULL || rel >= 0x158f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f110 size=336 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f110ULL || rel >= 0x158f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f260 size=224 callers=2 calls=3
   calls: sub_158f110, sub_15c8aa0, sub_15c8ad0
*/
void sub_158f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f260ULL || rel >= 0x158f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f340 size=544 callers=1 calls=2
   calls: sub_15b7b20, sub_15c8ce0
*/
void sub_158f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f340ULL || rel >= 0x158f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f560 size=240 callers=7 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_158f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f560ULL || rel >= 0x158f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f650 size=512 callers=2 calls=1
   calls: sub_162d6a0
*/
void sub_158f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f650ULL || rel >= 0x158f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158f850 size=640 callers=4 calls=4
   calls: Buffer_2, sub_158fad0, sub_15aa220, sub_162d000
*/
void sub_158f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158f850ULL || rel >= 0x158fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158fad0 size=656 callers=8 calls=5
   calls: sub_158ae80, sub_1599b70, sub_1599d50, sub_15bc1e0, sub_15bc310
*/
void sub_158fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158fad0ULL || rel >= 0x158fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158fd60 size=592 callers=1 calls=4
   calls: Buffer_2, sub_158fad0, sub_15aa220, sub_162d000
*/
void sub_158fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158fd60ULL || rel >= 0x158ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0158ffb0 size=560 callers=1 calls=3
   calls: Buffer_2, sub_15aa220, sub_162d000
*/
void sub_158ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158ffb0ULL || rel >= 0x15901e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015901e0 size=624 callers=1 calls=4
   calls: Buffer_2, sub_158fad0, sub_15aa220, sub_162d000
*/
void sub_15901e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15901e0ULL || rel >= 0x1590450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01590450 size=624 callers=1 calls=4
   calls: Buffer_2, sub_158fad0, sub_15aa220, sub_162d000
*/
void sub_1590450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1590450ULL || rel >= 0x15906c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015906c0 size=624 callers=1 calls=4
   calls: Buffer_2, sub_158fad0, sub_15aa220, sub_162d000
*/
void sub_15906c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15906c0ULL || rel >= 0x1590930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01590930 size=784 callers=2 calls=6
   calls: sub_15b7d40, sub_15c8aa0, sub_15c8ad0, sub_15c8ca0, sub_162cec0, sub_16345b0
*/
void sub_1590930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1590930ULL || rel >= 0x1590c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01590c40 size=496 callers=2 calls=1
   calls: sub_1590e30
*/
void sub_1590c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1590c40ULL || rel >= 0x1590e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01590e30 size=896 callers=5 calls=9
   calls: sub_158aff0, sub_1593490, sub_1597ee0, sub_1598350, sub_15b7a70, sub_15b9340, sub_15b9390, sub_15cf190, sub_6abc20
*/
void sub_1590e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1590e30ULL || rel >= 0x15911b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015911b0 size=576 callers=1 calls=0
*/
void sub_15911b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15911b0ULL || rel >= 0x15913f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015913f0 size=576 callers=1 calls=0
*/
void sub_15913f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15913f0ULL || rel >= 0x1591630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591630 size=256 callers=1 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_1591630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591630ULL || rel >= 0x1591730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591730 size=480 callers=2 calls=1
   calls: sub_162d6a0
*/
void sub_1591730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591730ULL || rel >= 0x1591910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591910 size=240 callers=2 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_1591910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591910ULL || rel >= 0x1591a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591a00 size=240 callers=2 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_162d630
*/
void sub_1591a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591a00ULL || rel >= 0x1591af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591af0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_1591af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591af0ULL || rel >= 0x1591b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591b20 size=32 callers=0 calls=0
*/
void sub_1591b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591b20ULL || rel >= 0x1591b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591b40 size=16 callers=0 calls=0
*/
void sub_1591b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591b40ULL || rel >= 0x1591b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591b50 size=32 callers=0 calls=0
*/
void sub_1591b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591b50ULL || rel >= 0x1591b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591b70 size=16 callers=0 calls=0
*/
void sub_1591b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591b70ULL || rel >= 0x1591b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591b80 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_1591b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591b80ULL || rel >= 0x1591bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591bb0 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_1591bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591bb0ULL || rel >= 0x1591c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591c00 size=16 callers=0 calls=0
*/
void sub_1591c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591c00ULL || rel >= 0x1591c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591c10 size=16 callers=0 calls=0
*/
void sub_1591c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591c10ULL || rel >= 0x1591c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591c20 size=16 callers=0 calls=0
*/
void sub_1591c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591c20ULL || rel >= 0x1591c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591c30 size=16 callers=0 calls=0
*/
void sub_1591c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591c30ULL || rel >= 0x1591c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591c40 size=576 callers=3 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_1591c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591c40ULL || rel >= 0x1591e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591e80 size=112 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_1591e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591e80ULL || rel >= 0x1591ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591ef0 size=112 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_1591ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591ef0ULL || rel >= 0x1591f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591f60 size=112 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_1591f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591f60ULL || rel >= 0x1591fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01591fd0 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_1591fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591fd0ULL || rel >= 0x1592020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592020 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_1592020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592020ULL || rel >= 0x1592070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592070 size=16 callers=0 calls=0
*/
void sub_1592070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592070ULL || rel >= 0x1592080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592080 size=160 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_1592080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592080ULL || rel >= 0x1592120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592120 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592120ULL || rel >= 0x15921c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015921c0 size=160 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15921c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15921c0ULL || rel >= 0x1592260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592260 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_1592260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592260ULL || rel >= 0x15922b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015922b0 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_15922b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15922b0ULL || rel >= 0x1592300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592300 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_1592300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592300ULL || rel >= 0x1592350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592350 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_1592350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592350ULL || rel >= 0x1592390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592390 size=64 callers=0 calls=1
   calls: sub_15cf3c0
*/
void sub_1592390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592390ULL || rel >= 0x15923d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015923d0 size=160 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_15923d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15923d0ULL || rel >= 0x1592470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592470 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592470ULL || rel >= 0x1592510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592510 size=160 callers=0 calls=2
   calls: sub_15b9390, sub_15bc310
*/
void sub_1592510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592510ULL || rel >= 0x15925b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015925b0 size=416 callers=1 calls=3
   calls: sub_15b9340, sub_15b9390, sub_15bbd10
*/
void sub_15925b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15925b0ULL || rel >= 0x1592750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592750 size=48 callers=0 calls=1
   calls: sub_1592780
*/
void sub_1592750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592750ULL || rel >= 0x1592780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592780 size=272 callers=4 calls=2
   calls: sub_15b9390, sub_15cf3c0
*/
void sub_1592780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592780ULL || rel >= 0x1592890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592890 size=48 callers=0 calls=1
   calls: sub_1592780
*/
void sub_1592890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592890ULL || rel >= 0x15928c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015928c0 size=48 callers=0 calls=1
   calls: sub_1582fc0
*/
void sub_15928c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15928c0ULL || rel >= 0x15928f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015928f0 size=48 callers=0 calls=1
   calls: sub_1582fc0
*/
void sub_15928f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15928f0ULL || rel >= 0x1592920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592920 size=16 callers=0 calls=0
*/
void sub_1592920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592920ULL || rel >= 0x1592930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592930 size=48 callers=0 calls=1
   calls: sub_1592960
*/
void sub_1592930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592930ULL || rel >= 0x1592960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592960 size=224 callers=5 calls=1
   calls: sub_15b9390
*/
void sub_1592960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592960ULL || rel >= 0x1592a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592a40 size=48 callers=0 calls=1
   calls: sub_1592960
*/
void sub_1592a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592a40ULL || rel >= 0x1592a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592a70 size=16 callers=0 calls=0
*/
void sub_1592a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592a70ULL || rel >= 0x1592a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592a80 size=496 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_1592a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592a80ULL || rel >= 0x1592c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592c70 size=16 callers=0 calls=0
*/
void sub_1592c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592c70ULL || rel >= 0x1592c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592c80 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592c80ULL || rel >= 0x1592cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592cc0 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592cc0ULL || rel >= 0x1592d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592d00 size=16 callers=0 calls=0
*/
void sub_1592d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592d00ULL || rel >= 0x1592d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592d10 size=496 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_1592d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592d10ULL || rel >= 0x1592f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592f00 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592f00ULL || rel >= 0x1592f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592f40 size=64 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592f40ULL || rel >= 0x1592f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592f80 size=16 callers=0 calls=0
*/
void sub_1592f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592f80ULL || rel >= 0x1592f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01592f90 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1592f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1592f90ULL || rel >= 0x1593010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593010 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1593010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593010ULL || rel >= 0x1593090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01593090 size=48 callers=0 calls=1
   calls: sub_1589070
*/
void sub_1593090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1593090ULL || rel >= 0x15930c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

