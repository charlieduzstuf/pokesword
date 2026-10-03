/* main functions 00e224e0..00e3b520 (111 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00e224e0 size=240 callers=0 calls=6
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf00, sub_154bf60, sub_defc90
   ref: class_cast
*/
void class_cast_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe224e0ULL || rel >= 0xe225d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e225d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e225d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe225d0ULL || rel >= 0xe22600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22600 size=240 callers=0 calls=6
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf00, sub_154bf60, sub_defc90
   ref: class_cast
*/
void class_cast_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22600ULL || rel >= 0xe226f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e226f0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e226f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe226f0ULL || rel >= 0xe22720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22720 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22720ULL || rel >= 0xe22750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22750 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22750ULL || rel >= 0xe22780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22780 size=192 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22780ULL || rel >= 0xe22840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22840 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22840ULL || rel >= 0xe22870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22870 size=192 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22870ULL || rel >= 0xe22930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22930 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22930ULL || rel >= 0xe22960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22960 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf40, sub_defc90
   ref: class_cast
*/
void class_cast_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22960ULL || rel >= 0xe22a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22a30 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22a30ULL || rel >= 0xe22a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22a60 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf40, sub_defc90
   ref: class_cast
*/
void class_cast_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22a60ULL || rel >= 0xe22b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22b30 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22b30ULL || rel >= 0xe22b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22b60 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22b60ULL || rel >= 0xe22b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22b90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22b90ULL || rel >= 0xe22bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22bc0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22bc0ULL || rel >= 0xe22bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22bf0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22bf0ULL || rel >= 0xe22c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22c20 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22c20ULL || rel >= 0xe22c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22c50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22c50ULL || rel >= 0xe22c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22c80 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22c80ULL || rel >= 0xe22cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22cb0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22cb0ULL || rel >= 0xe22ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22ce0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22ce0ULL || rel >= 0xe22d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22d10 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22d10ULL || rel >= 0xe22d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22d40 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_defc90
   ref: class_cast
*/
void class_cast_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22d40ULL || rel >= 0xe22e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22e20 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22e20ULL || rel >= 0xe22e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22e50 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_defc90
   ref: class_cast
*/
void class_cast_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22e50ULL || rel >= 0xe22f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22f30 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22f30ULL || rel >= 0xe22f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22f60 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22f60ULL || rel >= 0xe22f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22f90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22f90ULL || rel >= 0xe22fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22fc0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22fc0ULL || rel >= 0xe22ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22ff0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22ff0ULL || rel >= 0xe23020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23020 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23020ULL || rel >= 0xe23050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23050 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23050ULL || rel >= 0xe23080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23080 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23080ULL || rel >= 0xe230b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e230b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e230b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe230b0ULL || rel >= 0xe230e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e230e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e230e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe230e0ULL || rel >= 0xe23110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23110 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23110ULL || rel >= 0xe23140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23140 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23140ULL || rel >= 0xe23170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23170 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23170ULL || rel >= 0xe231a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e231a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e231a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe231a0ULL || rel >= 0xe231d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e231d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e231d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe231d0ULL || rel >= 0xe23200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23200 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23200ULL || rel >= 0xe23230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23230 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23230ULL || rel >= 0xe23260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23260 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23260ULL || rel >= 0xe23290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23290 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23290ULL || rel >= 0xe232c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e232c0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e232c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe232c0ULL || rel >= 0xe232f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e232f0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e232f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe232f0ULL || rel >= 0xe23320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23320 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23320ULL || rel >= 0xe23350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23350 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23350ULL || rel >= 0xe23380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23380 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23380ULL || rel >= 0xe233b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e233b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e233b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe233b0ULL || rel >= 0xe233e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e233e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e233e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe233e0ULL || rel >= 0xe23410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23410 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23410ULL || rel >= 0xe23440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23440 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23440ULL || rel >= 0xe23470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23470 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23470ULL || rel >= 0xe234a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e234a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e234a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe234a0ULL || rel >= 0xe234d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e234d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e234d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe234d0ULL || rel >= 0xe23500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23500 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23500ULL || rel >= 0xe23530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23530 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23530ULL || rel >= 0xe23560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23560 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23560ULL || rel >= 0xe23590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23590 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23590ULL || rel >= 0xe235c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e235c0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e235c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe235c0ULL || rel >= 0xe235f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e235f0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e235f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe235f0ULL || rel >= 0xe23620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23620 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23620ULL || rel >= 0xe23650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23650 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23650ULL || rel >= 0xe23680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23680 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23680ULL || rel >= 0xe236b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e236b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e236b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe236b0ULL || rel >= 0xe236e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e236e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e236e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe236e0ULL || rel >= 0xe23710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23710 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23710ULL || rel >= 0xe23740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23740 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23740ULL || rel >= 0xe23770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23770 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23770ULL || rel >= 0xe237a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e237a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e237a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe237a0ULL || rel >= 0xe237d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e237d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e237d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe237d0ULL || rel >= 0xe23800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23800 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23800ULL || rel >= 0xe23830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23830 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23830ULL || rel >= 0xe23860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23860 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23860ULL || rel >= 0xe23890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23890 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23890ULL || rel >= 0xe238c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e238c0 size=192 callers=0 calls=5
   calls: class_cast_64, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe238c0ULL || rel >= 0xe23980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23980 size=240 callers=2 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154c260, sub_e05b20
   ref: class_cast
*/
void class_cast_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23980ULL || rel >= 0xe23a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23a70 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23a70ULL || rel >= 0xe23aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23aa0 size=192 callers=0 calls=5
   calls: class_cast_64, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23aa0ULL || rel >= 0xe23b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23b60 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23b60ULL || rel >= 0xe23b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23b90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23b90ULL || rel >= 0xe23bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23bc0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23bc0ULL || rel >= 0xe23bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23bf0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23bf0ULL || rel >= 0xe23c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23c20 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23c20ULL || rel >= 0xe23c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23c50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23c50ULL || rel >= 0xe23c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23c80 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23c80ULL || rel >= 0xe23cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23cb0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23cb0ULL || rel >= 0xe23ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23ce0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23ce0ULL || rel >= 0xe23d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23d10 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23d10ULL || rel >= 0xe23d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23d40 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23d40ULL || rel >= 0xe23d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23d70 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23d70ULL || rel >= 0xe23da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23da0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23da0ULL || rel >= 0xe23dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23dd0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23dd0ULL || rel >= 0xe23e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23e00 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23e00ULL || rel >= 0xe23e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23e30 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23e30ULL || rel >= 0xe23e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23e60 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23e60ULL || rel >= 0xe23e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23e90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23e90ULL || rel >= 0xe23ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23ec0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23ec0ULL || rel >= 0xe23ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23ef0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23ef0ULL || rel >= 0xe23f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23f20 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23f20ULL || rel >= 0xe23f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23f50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23f50ULL || rel >= 0xe23f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23f80 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23f80ULL || rel >= 0xe23fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23fb0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23fb0ULL || rel >= 0xe23fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e23fe0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e23fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23fe0ULL || rel >= 0xe24010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24010 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24010ULL || rel >= 0xe24040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24040 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24040ULL || rel >= 0xe24070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24070 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24070ULL || rel >= 0xe240a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e240a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e240a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe240a0ULL || rel >= 0xe240d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e240d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e240d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe240d0ULL || rel >= 0xe24100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24100 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24100ULL || rel >= 0xe24130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24130 size=272 callers=0 calls=7
   calls: sub_1549da0, sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24130ULL || rel >= 0xe24240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24240 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24240ULL || rel >= 0xe24270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24270 size=272 callers=0 calls=7
   calls: sub_1549da0, sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24270ULL || rel >= 0xe24380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24380 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24380ULL || rel >= 0xe243b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e243b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e243b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe243b0ULL || rel >= 0xe243e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e243e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e243e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe243e0ULL || rel >= 0xe24410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24410 size=208 callers=0 calls=5
   calls: class_cast_69, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24410ULL || rel >= 0xe244e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e244e0 size=336 callers=2 calls=7
   calls: sub_1549da0, sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe244e0ULL || rel >= 0xe24630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24630 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24630ULL || rel >= 0xe24660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24660 size=208 callers=0 calls=5
   calls: class_cast_69, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24660ULL || rel >= 0xe24730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24730 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24730ULL || rel >= 0xe24760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24760 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24760ULL || rel >= 0xe24790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24790 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24790ULL || rel >= 0xe247c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e247c0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e247c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe247c0ULL || rel >= 0xe247f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e247f0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e247f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe247f0ULL || rel >= 0xe24820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24820 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24820ULL || rel >= 0xe24850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24850 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24850ULL || rel >= 0xe24880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24880 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24880ULL || rel >= 0xe24950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24950 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24950ULL || rel >= 0xe24980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24980 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24980ULL || rel >= 0xe24a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24a50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24a50ULL || rel >= 0xe24a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24a80 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24a80ULL || rel >= 0xe24ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24ab0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24ab0ULL || rel >= 0xe24ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24ae0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24ae0ULL || rel >= 0xe24b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24b10 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24b10ULL || rel >= 0xe24b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24b40 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24b40ULL || rel >= 0xe24b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24b70 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24b70ULL || rel >= 0xe24ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24ba0 size=192 callers=0 calls=5
   calls: class_cast_74, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24ba0ULL || rel >= 0xe24c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24c60 size=240 callers=2 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_e05b20
   ref: class_cast
*/
void class_cast_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24c60ULL || rel >= 0xe24d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24d50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24d50ULL || rel >= 0xe24d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24d80 size=192 callers=0 calls=5
   calls: class_cast_74, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24d80ULL || rel >= 0xe24e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24e40 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e24e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24e40ULL || rel >= 0xe24e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24e70 size=192 callers=0 calls=5
   calls: class_cast_77, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24e70ULL || rel >= 0xe24f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e24f30 size=304 callers=2 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_1549da0, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05b20, sub_e05fe0
   ref: class_cast
*/
void class_cast_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24f30ULL || rel >= 0xe25060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25060 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25060ULL || rel >= 0xe25090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25090 size=192 callers=0 calls=5
   calls: class_cast_77, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25090ULL || rel >= 0xe25150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25150 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25150ULL || rel >= 0xe25180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25180 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25180ULL || rel >= 0xe251b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e251b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e251b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe251b0ULL || rel >= 0xe251e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e251e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e251e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe251e0ULL || rel >= 0xe25210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25210 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25210ULL || rel >= 0xe25240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25240 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25240ULL || rel >= 0xe25270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25270 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25270ULL || rel >= 0xe252a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e252a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e252a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe252a0ULL || rel >= 0xe252d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e252d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e252d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe252d0ULL || rel >= 0xe25300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25300 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25300ULL || rel >= 0xe25330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25330 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25330ULL || rel >= 0xe25360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25360 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25360ULL || rel >= 0xe25390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25390 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25390ULL || rel >= 0xe253c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e253c0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e253c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe253c0ULL || rel >= 0xe253f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e253f0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e253f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe253f0ULL || rel >= 0xe25420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25420 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25420ULL || rel >= 0xe25450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25450 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25450ULL || rel >= 0xe25480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25480 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25480ULL || rel >= 0xe254b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e254b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e254b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe254b0ULL || rel >= 0xe254e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e254e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e254e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe254e0ULL || rel >= 0xe25510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25510 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25510ULL || rel >= 0xe25540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25540 size=288 callers=0 calls=8
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_80, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90, sub_e042e0, sub_e05fe0
   ref: class_cast
*/
void class_cast_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25540ULL || rel >= 0xe25660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25660 size=384 callers=2 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25660ULL || rel >= 0xe257e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e257e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e257e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe257e0ULL || rel >= 0xe25810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25810 size=288 callers=0 calls=8
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_80, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90, sub_e042e0, sub_e05fe0
   ref: class_cast
*/
void class_cast_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25810ULL || rel >= 0xe25930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25930 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25930ULL || rel >= 0xe25960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25960 size=224 callers=0 calls=6
   calls: class_cast_83, sub_1549da0, sub_154ab20, sub_154bc50, sub_154c260, sub_defc90
   ref: class_cast
*/
void class_cast_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25960ULL || rel >= 0xe25a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25a40 size=256 callers=2 calls=5
   calls: class_cast_84, sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25a40ULL || rel >= 0xe25b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25b40 size=352 callers=1 calls=7
   calls: sub_1549da0, sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25b40ULL || rel >= 0xe25ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25ca0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25ca0ULL || rel >= 0xe25cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25cd0 size=224 callers=0 calls=6
   calls: class_cast_83, sub_1549da0, sub_154ab20, sub_154bc50, sub_154c260, sub_defc90
   ref: class_cast
*/
void class_cast_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25cd0ULL || rel >= 0xe25db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25db0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25db0ULL || rel >= 0xe25de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25de0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25de0ULL || rel >= 0xe25e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25e10 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25e10ULL || rel >= 0xe25e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25e40 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25e40ULL || rel >= 0xe25e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25e70 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25e70ULL || rel >= 0xe25ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25ea0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25ea0ULL || rel >= 0xe25ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25ed0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25ed0ULL || rel >= 0xe25f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25f00 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25f00ULL || rel >= 0xe25f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25f30 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25f30ULL || rel >= 0xe25f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25f60 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25f60ULL || rel >= 0xe25f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25f90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25f90ULL || rel >= 0xe25fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25fc0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25fc0ULL || rel >= 0xe25ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e25ff0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e25ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe25ff0ULL || rel >= 0xe26020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26020 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26020ULL || rel >= 0xe26050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26050 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26050ULL || rel >= 0xe26080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26080 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26080ULL || rel >= 0xe260b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e260b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e260b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe260b0ULL || rel >= 0xe260e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e260e0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e260e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe260e0ULL || rel >= 0xe26110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26110 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26110ULL || rel >= 0xe26140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26140 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26140ULL || rel >= 0xe261e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e261e0 size=176 callers=0 calls=5
   calls: sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bf40
*/
void sub_e261e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe261e0ULL || rel >= 0xe26290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26290 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26290ULL || rel >= 0xe262c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e262c0 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe262c0ULL || rel >= 0xe26360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26360 size=176 callers=0 calls=5
   calls: sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bf40
*/
void sub_e26360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26360ULL || rel >= 0xe26410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26410 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26410ULL || rel >= 0xe26440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26440 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26440ULL || rel >= 0xe26470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26470 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26470ULL || rel >= 0xe264a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e264a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e264a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe264a0ULL || rel >= 0xe264d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e264d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e264d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe264d0ULL || rel >= 0xe26500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26500 size=384 callers=0 calls=15
   calls: aligned_allocation_of_userdata_block_data_section_for_s_4, sub_15497e0, sub_15498c0, sub_154ab00, sub_154ab20, sub_154ae60, sub_154b480, sub_154bf00, sub_154c4f0, sub_154c880, sub_deb970, sub_defd50
   ... +3 more
   ref: sol: no matching function call takes this number of arguments and the specified types
*/
void sol_no_matching_function_call_takes_this_number_of_argum_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26500ULL || rel >= 0xe26680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26680 size=592 callers=2 calls=5
   calls: seperator_mark_2, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: aligned allocation of userdata block (pointer section) for '%s' failed
   ref: aligned allocation of userdata block (data section) for '%s' failed
*/
void aligned_allocation_of_userdata_block_data_section_for_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26680ULL || rel >= 0xe268d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e268d0 size=480 callers=2 calls=10
   calls: name, seperator_mark_2, sub_154bf60, sub_154c170, sub_154ca50, sub_154cfd0, sub_154d550, sub_1c0, too_many_upvalues, typeinfo
*/
void sub_e268d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe268d0ULL || rel >= 0xe26ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26ab0 size=112 callers=0 calls=3
   calls: class_check_2, sub_154af10, sub_154c260
*/
void sub_e26ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26ab0ULL || rel >= 0xe26b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26b20 size=32 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26b20ULL || rel >= 0xe26b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26b40 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26b40ULL || rel >= 0xe26b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26b70 size=384 callers=0 calls=15
   calls: aligned_allocation_of_userdata_block_data_section_for_s_4, sub_15497e0, sub_15498c0, sub_154ab00, sub_154ab20, sub_154ae60, sub_154b480, sub_154bf00, sub_154c4f0, sub_154c880, sub_deb970, sub_defd50
   ... +3 more
   ref: sol: no matching function call takes this number of arguments and the specified types
*/
void sol_no_matching_function_call_takes_this_number_of_argum_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26b70ULL || rel >= 0xe26cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26cf0 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26cf0ULL || rel >= 0xe26d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26d30 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e26d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26d30ULL || rel >= 0xe26d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e26d70 size=4992 callers=0 calls=122
   calls: name, newindex_100, newindex_101, newindex_102, newindex_103, newindex_104, newindex_105, newindex_106, newindex_107, newindex_108, newindex_109, newindex_110
   ... +110 more
   ref: class_cast
   ref: class_check
*/
void class_check_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe26d70ULL || rel >= 0xe280f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e280f0 size=400 callers=1 calls=11
   calls: sub_154aac0, sub_154ab20, sub_154ae60, sub_154bc50, sub_154bf00, sub_154c2e0, sub_154cd10, sub_ce0, sub_e31aa0, sub_e31be0, sub_e31d20
*/
void sub_e280f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe280f0ULL || rel >= 0xe28280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28280 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28280ULL || rel >= 0xe28410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28410 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28410ULL || rel >= 0xe285a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e285a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe285a0ULL || rel >= 0xe28730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28730 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28730ULL || rel >= 0xe288c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e288c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe288c0ULL || rel >= 0xe28a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28a50 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28a50ULL || rel >= 0xe28be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28be0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28be0ULL || rel >= 0xe28d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28d70 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28d70ULL || rel >= 0xe28f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e28f00 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28f00ULL || rel >= 0xe29090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29090 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29090ULL || rel >= 0xe29220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29220 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29220ULL || rel >= 0xe293b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e293b0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe293b0ULL || rel >= 0xe29540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29540 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29540ULL || rel >= 0xe296d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e296d0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe296d0ULL || rel >= 0xe29860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29860 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29860ULL || rel >= 0xe299f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e299f0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe299f0ULL || rel >= 0xe29b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29b80 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29b80ULL || rel >= 0xe29d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29d10 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29d10ULL || rel >= 0xe29ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e29ea0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe29ea0ULL || rel >= 0xe2a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a030 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a030ULL || rel >= 0xe2a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a1c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a1c0ULL || rel >= 0xe2a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a350 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a350ULL || rel >= 0xe2a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a4e0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a4e0ULL || rel >= 0xe2a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a670 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a670ULL || rel >= 0xe2a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a800 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a800ULL || rel >= 0xe2a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2a990 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a990ULL || rel >= 0xe2ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2ab20 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ab20ULL || rel >= 0xe2acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2acb0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2acb0ULL || rel >= 0xe2ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2ae40 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ae40ULL || rel >= 0xe2afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2afd0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2afd0ULL || rel >= 0xe2b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2b160 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2b160ULL || rel >= 0xe2b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2b2f0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2b2f0ULL || rel >= 0xe2b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2b480 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2b480ULL || rel >= 0xe2b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2b610 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2b610ULL || rel >= 0xe2b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2b7a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2b7a0ULL || rel >= 0xe2b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2b930 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2b930ULL || rel >= 0xe2bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2bac0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2bac0ULL || rel >= 0xe2bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2bc50 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2bc50ULL || rel >= 0xe2bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2bde0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2bde0ULL || rel >= 0xe2bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2bf70 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2bf70ULL || rel >= 0xe2c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2c100 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c100ULL || rel >= 0xe2c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2c290 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c290ULL || rel >= 0xe2c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2c420 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c420ULL || rel >= 0xe2c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2c5b0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c5b0ULL || rel >= 0xe2c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2c740 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c740ULL || rel >= 0xe2c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2c8d0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2c8d0ULL || rel >= 0xe2ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2ca60 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ca60ULL || rel >= 0xe2cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2cbf0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2cbf0ULL || rel >= 0xe2cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2cd80 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2cd80ULL || rel >= 0xe2cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2cf10 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2cf10ULL || rel >= 0xe2d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2d0a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d0a0ULL || rel >= 0xe2d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2d230 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d230ULL || rel >= 0xe2d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2d3c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d3c0ULL || rel >= 0xe2d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2d550 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d550ULL || rel >= 0xe2d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2d6e0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d6e0ULL || rel >= 0xe2d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2d870 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d870ULL || rel >= 0xe2da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2da00 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_96(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2da00ULL || rel >= 0xe2db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2db90 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_97(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2db90ULL || rel >= 0xe2dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2dd20 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2dd20ULL || rel >= 0xe2deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2deb0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_99(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2deb0ULL || rel >= 0xe2e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e040 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e040ULL || rel >= 0xe2e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e1d0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e1d0ULL || rel >= 0xe2e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e360 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_102(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e360ULL || rel >= 0xe2e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e4f0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_103(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e4f0ULL || rel >= 0xe2e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e680 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_104(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e680ULL || rel >= 0xe2e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e810 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_105(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e810ULL || rel >= 0xe2e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2e9a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_106(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e9a0ULL || rel >= 0xe2eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2eb30 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_107(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2eb30ULL || rel >= 0xe2ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2ecc0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ecc0ULL || rel >= 0xe2ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2ee50 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_109(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ee50ULL || rel >= 0xe2efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2efe0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2efe0ULL || rel >= 0xe2f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2f170 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_111(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f170ULL || rel >= 0xe2f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2f300 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_112(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f300ULL || rel >= 0xe2f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2f490 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_113(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f490ULL || rel >= 0xe2f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2f620 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_114(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f620ULL || rel >= 0xe2f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2f7b0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_115(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f7b0ULL || rel >= 0xe2f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2f940 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_116(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f940ULL || rel >= 0xe2fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2fad0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_117(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2fad0ULL || rel >= 0xe2fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2fc60 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2fc60ULL || rel >= 0xe2fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2fdf0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_119(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2fdf0ULL || rel >= 0xe2ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e2ff80 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ff80ULL || rel >= 0xe30110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30110 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_121(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30110ULL || rel >= 0xe302a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e302a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_122(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe302a0ULL || rel >= 0xe30430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30430 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_123(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30430ULL || rel >= 0xe305c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e305c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe305c0ULL || rel >= 0xe30750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30750 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_125(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30750ULL || rel >= 0xe308e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e308e0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_126(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe308e0ULL || rel >= 0xe30a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30a70 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_127(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30a70ULL || rel >= 0xe30c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30c00 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30c00ULL || rel >= 0xe30d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30d90 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_129(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30d90ULL || rel >= 0xe30f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e30f20 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30f20ULL || rel >= 0xe310b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e310b0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_131(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe310b0ULL || rel >= 0xe31240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31240 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_132(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31240ULL || rel >= 0xe313d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e313d0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_133(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe313d0ULL || rel >= 0xe31560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31560 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_134(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31560ULL || rel >= 0xe316f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e316f0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_135(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe316f0ULL || rel >= 0xe31880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31880 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_136(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31880ULL || rel >= 0xe31a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31a10 size=80 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e31a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31a10ULL || rel >= 0xe31a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31a60 size=16 callers=0 calls=0
*/
void sub_e31a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31a60ULL || rel >= 0xe31a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31a70 size=16 callers=0 calls=0
*/
void sub_e31a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31a70ULL || rel >= 0xe31a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31a80 size=16 callers=0 calls=0
*/
void sub_e31a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31a80ULL || rel >= 0xe31a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31a90 size=16 callers=0 calls=0
*/
void sub_e31a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31a90ULL || rel >= 0xe31aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31aa0 size=320 callers=1 calls=3
   calls: seperator_mark_2, sub_1c0, sub_ce0
*/
void sub_e31aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31aa0ULL || rel >= 0xe31be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31be0 size=320 callers=1 calls=3
   calls: seperator_mark_2, sub_1c0, sub_ce0
*/
void sub_e31be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31be0ULL || rel >= 0xe31d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31d20 size=320 callers=1 calls=5
   calls: cannot_properly_align_memory_for_s_5, name, sub_154c170, sub_154cfd0, sub_154d550
*/
void sub_e31d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31d20ULL || rel >= 0xe31e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e31e60 size=448 callers=1 calls=5
   calls: seperator_mark_20, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: cannot properly align memory for '%s'
*/
void cannot_properly_align_memory_for_s_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31e60ULL || rel >= 0xe32020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32020 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e32020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32020ULL || rel >= 0xe32060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32060 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::HaxeSymbo
   ref: seperator_mark
*/
void seperator_mark_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32060ULL || rel >= 0xe32740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32740 size=240 callers=1 calls=1
   calls: typeinfo
*/
void sub_e32740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32740ULL || rel >= 0xe32830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32830 size=160 callers=6 calls=5
   calls: sub_154bf00, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e32830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32830ULL || rel >= 0xe328d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e328d0 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e328d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe328d0ULL || rel >= 0xe32a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32a80 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e32a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32a80ULL || rel >= 0xe32c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32c30 size=192 callers=2 calls=6
   calls: sub_154bf00, sub_154bf40, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e32c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32c30ULL || rel >= 0xe32cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32cf0 size=560 callers=0 calls=12
   calls: sub_154ab00, sub_154ae60, sub_154af10, sub_154b750, sub_154b940, sub_154bc50, sub_154bf00, sub_154c3b0, sub_154cb00, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e32cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32cf0ULL || rel >= 0xe32f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e32f20 size=416 callers=0 calls=7
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0, unknown_4
*/
void sub_e32f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe32f20ULL || rel >= 0xe330c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e330c0 size=224 callers=1 calls=5
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154cfd0
*/
void sub_e330c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe330c0ULL || rel >= 0xe331a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e331a0 size=352 callers=1 calls=7
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c170, sub_154c290, sub_154c880, sub_154cfd0
*/
void sub_e331a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe331a0ULL || rel >= 0xe33300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33300 size=96 callers=0 calls=3
   calls: sub_154ab20, sub_154b940, sub_154bc50
*/
void sub_e33300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33300ULL || rel >= 0xe33360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33360 size=96 callers=0 calls=3
   calls: sub_154ab20, sub_154b860, sub_154bc50
*/
void sub_e33360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33360ULL || rel >= 0xe333c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e333c0 size=128 callers=0 calls=4
   calls: sub_154ab20, sub_154b860, sub_154b940, sub_154bc50
*/
void sub_e333c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe333c0ULL || rel >= 0xe33440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33440 size=224 callers=1 calls=5
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154cfd0
*/
void sub_e33440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33440ULL || rel >= 0xe33520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33520 size=640 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e337b0, sub_e339e0, sub_e33bc0, sub_e33ca0
*/
void sub_e33520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33520ULL || rel >= 0xe337a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e337a0 size=16 callers=0 calls=0
   ref: sol: cannot modify the elements of an enumeration table
*/
void sol_cannot_modify_the_elements_of_an_enumeration_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe337a0ULL || rel >= 0xe337b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e337b0 size=560 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e337b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe337b0ULL || rel >= 0xe339e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e339e0 size=288 callers=10 calls=10
   calls: sub_154a9b0, sub_154ab00, sub_154ab20, sub_154bf00, sub_154bf60, sub_154c170, sub_154c880, sub_154ce50, sub_e33b00, typeinfo
*/
void sub_e339e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe339e0ULL || rel >= 0xe33b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33b00 size=192 callers=1 calls=5
   calls: sub_154a9b0, sub_154bf00, sub_154bf60, sub_154c880, typeinfo
*/
void sub_e33b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33b00ULL || rel >= 0xe33bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33bc0 size=224 callers=10 calls=5
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154d550
*/
void sub_e33bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33bc0ULL || rel >= 0xe33ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33ca0 size=224 callers=10 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf60, sub_154c880, sub_154ce50
*/
void sub_e33ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33ca0ULL || rel >= 0xe33d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33d80 size=512 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e33f80
*/
void sub_e33d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33d80ULL || rel >= 0xe33f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e33f80 size=320 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e33f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33f80ULL || rel >= 0xe340c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e340c0 size=512 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e342c0
*/
void sub_e340c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe340c0ULL || rel >= 0xe342c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e342c0 size=272 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e342c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe342c0ULL || rel >= 0xe343d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e343d0 size=560 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e34600
*/
void sub_e343d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe343d0ULL || rel >= 0xe34600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e34600 size=416 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e34600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe34600ULL || rel >= 0xe347a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e347a0 size=512 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e349a0
*/
void sub_e347a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe347a0ULL || rel >= 0xe349a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e349a0 size=320 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e349a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe349a0ULL || rel >= 0xe34ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e34ae0 size=512 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e34ce0
*/
void sub_e34ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe34ae0ULL || rel >= 0xe34ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e34ce0 size=272 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e34ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe34ce0ULL || rel >= 0xe34df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e34df0 size=592 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e35040
*/
void sub_e34df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe34df0ULL || rel >= 0xe35040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e35040 size=464 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e35040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35040ULL || rel >= 0xe35210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e35210 size=512 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e35410
*/
void sub_e35210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35210ULL || rel >= 0xe35410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e35410 size=272 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e35410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35410ULL || rel >= 0xe35520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e35520 size=1632 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e35b80
*/
void sub_e35520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35520ULL || rel >= 0xe35b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e35b80 size=2032 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e35b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35b80ULL || rel >= 0xe36370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36370 size=512 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_e339e0, sub_e33bc0, sub_e33ca0, sub_e36570
*/
void sub_e36370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36370ULL || rel >= 0xe36570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36570 size=320 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154bf40, sub_154c880, sub_154cfd0
*/
void sub_e36570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36570ULL || rel >= 0xe366b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e366b0 size=16 callers=0 calls=0
*/
void sub_e366b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe366b0ULL || rel >= 0xe366c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e366c0 size=16 callers=0 calls=0
*/
void sub_e366c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe366c0ULL || rel >= 0xe366d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e366d0 size=16 callers=0 calls=0
*/
void sub_e366d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe366d0ULL || rel >= 0xe366e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e366e0 size=16 callers=0 calls=0
*/
void sub_e366e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe366e0ULL || rel >= 0xe366f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e366f0 size=16 callers=0 calls=0
*/
void sub_e366f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe366f0ULL || rel >= 0xe36700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36700 size=32 callers=0 calls=0
*/
void sub_e36700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36700ULL || rel >= 0xe36720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36720 size=32 callers=0 calls=0
*/
void sub_e36720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36720ULL || rel >= 0xe36740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36740 size=32 callers=0 calls=0
*/
void sub_e36740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36740ULL || rel >= 0xe36760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36760 size=96 callers=0 calls=0
*/
void sub_e36760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36760ULL || rel >= 0xe367c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e367c0 size=48 callers=0 calls=0
*/
void sub_e367c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe367c0ULL || rel >= 0xe367f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e367f0 size=32 callers=0 calls=0
*/
void sub_e367f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe367f0ULL || rel >= 0xe36810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36810 size=16 callers=0 calls=0
*/
void sub_e36810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36810ULL || rel >= 0xe36820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36820 size=128 callers=0 calls=2
   calls: sub_13ed240, sub_ded9e0
*/
void sub_e36820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36820ULL || rel >= 0xe368a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e368a0 size=208 callers=0 calls=3
   calls: sub_13ed240, sub_971950, sub_ded9e0
*/
void sub_e368a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe368a0ULL || rel >= 0xe36970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36970 size=160 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_e36970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36970ULL || rel >= 0xe36a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36a10 size=176 callers=0 calls=2
   calls: sub_13ed240, sub_d46b10
*/
void sub_e36a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36a10ULL || rel >= 0xe36ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36ac0 size=320 callers=0 calls=1
   calls: sub_d05ee0
*/
void sub_e36ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36ac0ULL || rel >= 0xe36c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36c00 size=16 callers=0 calls=0
*/
void sub_e36c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36c00ULL || rel >= 0xe36c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36c10 size=208 callers=0 calls=0
*/
void sub_e36c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36c10ULL || rel >= 0xe36ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36ce0 size=32 callers=0 calls=0
*/
void sub_e36ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36ce0ULL || rel >= 0xe36d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36d00 size=144 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_e36d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36d00ULL || rel >= 0xe36d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36d90 size=144 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_e36d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36d90ULL || rel >= 0xe36e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36e20 size=160 callers=0 calls=2
   calls: sub_13ed240, sub_d42e80
*/
void sub_e36e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36e20ULL || rel >= 0xe36ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36ec0 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e36ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36ec0ULL || rel >= 0xe36f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36f00 size=32 callers=0 calls=0
*/
void sub_e36f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36f00ULL || rel >= 0xe36f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36f20 size=48 callers=0 calls=0
*/
void sub_e36f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36f20ULL || rel >= 0xe36f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36f50 size=32 callers=0 calls=0
*/
void sub_e36f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36f50ULL || rel >= 0xe36f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36f70 size=48 callers=0 calls=0
*/
void sub_e36f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36f70ULL || rel >= 0xe36fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36fa0 size=16 callers=0 calls=0
*/
void sub_e36fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36fa0ULL || rel >= 0xe36fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e36fb0 size=304 callers=2 calls=0
*/
void sub_e36fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe36fb0ULL || rel >= 0xe370e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e370e0 size=64 callers=0 calls=0
   ref: bin/field/param/symbol_encount_mons_param/symbol_encount_mons_param.bin
*/
void symbol_encount_mons_param(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe370e0ULL || rel >= 0xe37120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e37120 size=160 callers=3 calls=0
   ref: %lu_%u
*/
void lu__u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe37120ULL || rel >= 0xe371c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e371c0 size=32 callers=4 calls=0
*/
void sub_e371c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe371c0ULL || rel >= 0xe371e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e371e0 size=880 callers=1 calls=5
   calls: sub_971950, sub_d0b1a0, sub_d2dcc0, sub_e37550, sub_e379f0
*/
void sub_e371e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe371e0ULL || rel >= 0xe37550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e37550 size=1184 callers=1 calls=9
   calls: sub_c5da80, sub_c5dd90, sub_d2b260, sub_d2bdf0, sub_d2bfc0, sub_d2c180, sub_da0390, sub_da0960, sub_da1260
*/
void sub_e37550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe37550ULL || rel >= 0xe379f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e379f0 size=400 callers=1 calls=2
   calls: SymbolEncount, sub_cca0a0
*/
void sub_e379f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe379f0ULL || rel >= 0xe37b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e37b80 size=832 callers=10 calls=1
   calls: sub_e38d90
*/
void sub_e37b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe37b80ULL || rel >= 0xe37ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e37ec0 size=2224 callers=4 calls=1
   calls: sub_e36fb0
*/
void sub_e37ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe37ec0ULL || rel >= 0xe38770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e38770 size=1088 callers=2 calls=4
   calls: sub_13cce40, sub_c9f940, sub_d2ebf0, sub_d921b0
*/
void sub_e38770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe38770ULL || rel >= 0xe38bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e38bb0 size=304 callers=1 calls=4
   calls: sub_cdc0d0, sub_d0aa80, sub_d54e90, sub_e38d90
*/
void sub_e38bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe38bb0ULL || rel >= 0xe38ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e38ce0 size=176 callers=4 calls=1
   calls: sub_135a1a0
*/
void sub_e38ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe38ce0ULL || rel >= 0xe38d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e38d90 size=304 callers=3 calls=1
   calls: sub_13a6920
*/
void sub_e38d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe38d90ULL || rel >= 0xe38ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e38ec0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_e38ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe38ec0ULL || rel >= 0xe38f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e38f10 size=240 callers=0 calls=0
*/
void sub_e38f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe38f10ULL || rel >= 0xe39000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39000 size=240 callers=0 calls=0
*/
void sub_e39000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39000ULL || rel >= 0xe390f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e390f0 size=240 callers=0 calls=0
*/
void sub_e390f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe390f0ULL || rel >= 0xe391e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e391e0 size=240 callers=0 calls=0
*/
void sub_e391e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe391e0ULL || rel >= 0xe392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e392d0 size=240 callers=0 calls=0
*/
void sub_e392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe392d0ULL || rel >= 0xe393c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e393c0 size=240 callers=0 calls=0
*/
void sub_e393c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe393c0ULL || rel >= 0xe394b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e394b0 size=432 callers=1 calls=6
   calls: sub_e39820, sub_e39900, sub_e399e0, sub_e39ac0, sub_e39ba0, sub_ead3a0
*/
void sub_e394b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe394b0ULL || rel >= 0xe39660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39660 size=16 callers=1 calls=0
*/
void sub_e39660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39660ULL || rel >= 0xe39670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39670 size=16 callers=2 calls=0
*/
void sub_e39670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39670ULL || rel >= 0xe39680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39680 size=16 callers=1 calls=0
*/
void sub_e39680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39680ULL || rel >= 0xe39690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39690 size=64 callers=1 calls=1
   calls: sub_e39d70
*/
void sub_e39690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39690ULL || rel >= 0xe396d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e396d0 size=16 callers=3 calls=0
*/
void sub_e396d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe396d0ULL || rel >= 0xe396e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e396e0 size=16 callers=3 calls=0
*/
void sub_e396e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe396e0ULL || rel >= 0xe396f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e396f0 size=16 callers=3 calls=0
*/
void sub_e396f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe396f0ULL || rel >= 0xe39700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39700 size=16 callers=3 calls=0
*/
void sub_e39700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39700ULL || rel >= 0xe39710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39710 size=240 callers=0 calls=0
*/
void sub_e39710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39710ULL || rel >= 0xe39800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39800 size=16 callers=0 calls=0
*/
void sub_e39800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39800ULL || rel >= 0xe39810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39810 size=16 callers=0 calls=0
*/
void sub_e39810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39810ULL || rel >= 0xe39820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39820 size=224 callers=1 calls=1
   calls: sub_e39f10
*/
void sub_e39820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39820ULL || rel >= 0xe39900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39900 size=224 callers=1 calls=1
   calls: sub_e39c80
*/
void sub_e39900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39900ULL || rel >= 0xe399e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e399e0 size=224 callers=1 calls=1
   calls: sub_e3a1b0
*/
void sub_e399e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe399e0ULL || rel >= 0xe39ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39ac0 size=224 callers=1 calls=1
   calls: sub_e3a410
*/
void sub_e39ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39ac0ULL || rel >= 0xe39ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39ba0 size=224 callers=1 calls=1
   calls: sub_e3a670
*/
void sub_e39ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39ba0ULL || rel >= 0xe39c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39c80 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e39c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39c80ULL || rel >= 0xe39cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39cc0 size=32 callers=0 calls=0
*/
void sub_e39cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39cc0ULL || rel >= 0xe39ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39ce0 size=48 callers=0 calls=0
*/
void sub_e39ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39ce0ULL || rel >= 0xe39d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39d10 size=32 callers=0 calls=0
*/
void sub_e39d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39d10ULL || rel >= 0xe39d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39d30 size=48 callers=0 calls=0
*/
void sub_e39d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39d30ULL || rel >= 0xe39d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39d60 size=16 callers=0 calls=0
*/
void sub_e39d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39d60ULL || rel >= 0xe39d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39d70 size=352 callers=1 calls=1
   calls: sub_ead710
*/
void sub_e39d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39d70ULL || rel >= 0xe39ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39ed0 size=64 callers=0 calls=0
   ref: bin/field/param/nest_hole_table/nest_hole_level.bin
*/
void nest_hole_level(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39ed0ULL || rel >= 0xe39f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39f10 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e39f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39f10ULL || rel >= 0xe39f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39f50 size=32 callers=0 calls=0
*/
void sub_e39f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39f50ULL || rel >= 0xe39f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39f70 size=48 callers=0 calls=0
*/
void sub_e39f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39f70ULL || rel >= 0xe39fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39fa0 size=32 callers=0 calls=0
*/
void sub_e39fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39fa0ULL || rel >= 0xe39fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39fc0 size=48 callers=0 calls=0
*/
void sub_e39fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39fc0ULL || rel >= 0xe39ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e39ff0 size=16 callers=0 calls=0
*/
void sub_e39ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39ff0ULL || rel >= 0xe3a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a000 size=304 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a000ULL || rel >= 0xe3a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a130 size=64 callers=0 calls=0
*/
void sub_e3a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a130ULL || rel >= 0xe3a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a170 size=64 callers=0 calls=0
   ref: bin/field/param/nest_hole_table/nest_hole_encount.bin
*/
void nest_hole_encount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a170ULL || rel >= 0xe3a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a1b0 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e3a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a1b0ULL || rel >= 0xe3a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a1f0 size=32 callers=0 calls=0
*/
void sub_e3a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a1f0ULL || rel >= 0xe3a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a210 size=48 callers=0 calls=0
*/
void sub_e3a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a210ULL || rel >= 0xe3a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a240 size=32 callers=0 calls=0
*/
void sub_e3a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a240ULL || rel >= 0xe3a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a260 size=48 callers=0 calls=0
*/
void sub_e3a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a260ULL || rel >= 0xe3a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a290 size=16 callers=0 calls=0
*/
void sub_e3a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a290ULL || rel >= 0xe3a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a2a0 size=240 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a2a0ULL || rel >= 0xe3a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a390 size=64 callers=0 calls=0
*/
void sub_e3a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a390ULL || rel >= 0xe3a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a3d0 size=64 callers=0 calls=0
   ref: bin/field/param/nest_hole_table/nest_hole_drop_rewards.bin
*/
void nest_hole_drop_rewards(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a3d0ULL || rel >= 0xe3a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a410 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e3a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a410ULL || rel >= 0xe3a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a450 size=32 callers=0 calls=0
*/
void sub_e3a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a450ULL || rel >= 0xe3a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a470 size=48 callers=0 calls=0
*/
void sub_e3a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a470ULL || rel >= 0xe3a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a4a0 size=32 callers=0 calls=0
*/
void sub_e3a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a4a0ULL || rel >= 0xe3a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a4c0 size=48 callers=0 calls=0
*/
void sub_e3a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a4c0ULL || rel >= 0xe3a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a4f0 size=16 callers=0 calls=0
*/
void sub_e3a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a4f0ULL || rel >= 0xe3a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a500 size=240 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a500ULL || rel >= 0xe3a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a5f0 size=64 callers=0 calls=0
*/
void sub_e3a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a5f0ULL || rel >= 0xe3a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a630 size=64 callers=0 calls=0
   ref: bin/field/param/nest_hole_table/nest_hole_bonus_rewards.bin
*/
void nest_hole_bonus_rewards(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a630ULL || rel >= 0xe3a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a670 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_e3a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a670ULL || rel >= 0xe3a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a6c0 size=304 callers=0 calls=0
*/
void sub_e3a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a6c0ULL || rel >= 0xe3a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a7f0 size=16 callers=0 calls=0
*/
void sub_e3a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a7f0ULL || rel >= 0xe3a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a800 size=16 callers=0 calls=0
*/
void sub_e3a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a800ULL || rel >= 0xe3a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a810 size=16 callers=0 calls=0
*/
void sub_e3a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a810ULL || rel >= 0xe3a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a820 size=16 callers=0 calls=0
*/
void sub_e3a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a820ULL || rel >= 0xe3a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a830 size=16 callers=0 calls=0
*/
void sub_e3a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a830ULL || rel >= 0xe3a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a840 size=16 callers=3 calls=0
*/
void sub_e3a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a840ULL || rel >= 0xe3a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a850 size=16 callers=3 calls=0
*/
void sub_e3a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a850ULL || rel >= 0xe3a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a860 size=16 callers=2 calls=0
*/
void sub_e3a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a860ULL || rel >= 0xe3a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a870 size=16 callers=2 calls=0
*/
void sub_e3a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a870ULL || rel >= 0xe3a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a880 size=16 callers=2 calls=0
*/
void sub_e3a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a880ULL || rel >= 0xe3a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a890 size=16 callers=6 calls=0
*/
void sub_e3a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a890ULL || rel >= 0xe3a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a8a0 size=112 callers=4 calls=3
   calls: sub_e3b3d0, sub_e3b670, sub_e3bcc0
*/
void sub_e3a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a8a0ULL || rel >= 0xe3a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a910 size=96 callers=4 calls=2
   calls: sub_101b9e0, sub_e3a970
*/
void sub_e3a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a910ULL || rel >= 0xe3a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3a970 size=704 callers=4 calls=7
   calls: sub_101b8c0, sub_e3ae00, sub_e3aee0, sub_e3afc0, sub_e3b0a0, sub_ead610, sub_ead840
*/
void sub_e3a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3a970ULL || rel >= 0xe3ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ac30 size=96 callers=2 calls=2
   calls: sub_101bbb0, sub_e3a970
*/
void sub_e3ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ac30ULL || rel >= 0xe3ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ac90 size=16 callers=2 calls=0
*/
void sub_e3ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ac90ULL || rel >= 0xe3aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3aca0 size=16 callers=2 calls=0
*/
void sub_e3aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3aca0ULL || rel >= 0xe3acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3acb0 size=32 callers=4 calls=0
*/
void sub_e3acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3acb0ULL || rel >= 0xe3acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3acd0 size=32 callers=3 calls=0
*/
void sub_e3acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3acd0ULL || rel >= 0xe3acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3acf0 size=240 callers=0 calls=0
*/
void sub_e3acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3acf0ULL || rel >= 0xe3ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ade0 size=16 callers=0 calls=0
*/
void sub_e3ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ade0ULL || rel >= 0xe3adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3adf0 size=16 callers=0 calls=0
*/
void sub_e3adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3adf0ULL || rel >= 0xe3ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ae00 size=224 callers=1 calls=1
   calls: sub_e3b970
*/
void sub_e3ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ae00ULL || rel >= 0xe3aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3aee0 size=224 callers=1 calls=1
   calls: sub_e3b180
*/
void sub_e3aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3aee0ULL || rel >= 0xe3afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3afc0 size=224 callers=1 calls=1
   calls: sub_e3b430
*/
void sub_e3afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3afc0ULL || rel >= 0xe3b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b0a0 size=224 callers=1 calls=1
   calls: sub_e3b6d0
*/
void sub_e3b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b0a0ULL || rel >= 0xe3b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b180 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e3b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b180ULL || rel >= 0xe3b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b1c0 size=32 callers=0 calls=0
*/
void sub_e3b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b1c0ULL || rel >= 0xe3b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b1e0 size=48 callers=0 calls=0
*/
void sub_e3b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b1e0ULL || rel >= 0xe3b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b210 size=32 callers=0 calls=0
*/
void sub_e3b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b210ULL || rel >= 0xe3b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b230 size=48 callers=0 calls=0
*/
void sub_e3b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b230ULL || rel >= 0xe3b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b260 size=16 callers=0 calls=0
*/
void sub_e3b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b260ULL || rel >= 0xe3b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b270 size=288 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b270ULL || rel >= 0xe3b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b390 size=64 callers=3 calls=0
*/
void sub_e3b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b390ULL || rel >= 0xe3b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b3d0 size=32 callers=1 calls=1
   calls: sub_ead710
*/
void sub_e3b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b3d0ULL || rel >= 0xe3b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b3f0 size=64 callers=0 calls=0
   ref: bin/test/nest_hole/net_nest_hole_dai_encount.bin
*/
void net_nest_hole_dai_encount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b3f0ULL || rel >= 0xe3b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b430 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e3b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b430ULL || rel >= 0xe3b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b470 size=32 callers=0 calls=0
*/
void sub_e3b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b470ULL || rel >= 0xe3b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b490 size=48 callers=0 calls=0
*/
void sub_e3b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b490ULL || rel >= 0xe3b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b4c0 size=32 callers=0 calls=0
*/
void sub_e3b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b4c0ULL || rel >= 0xe3b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b4e0 size=48 callers=0 calls=0
*/
void sub_e3b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b4e0ULL || rel >= 0xe3b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b510 size=16 callers=0 calls=0
*/
void sub_e3b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b510ULL || rel >= 0xe3b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b520 size=272 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b520ULL || rel >= 0xe3b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

