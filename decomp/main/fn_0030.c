/* main functions 00000030..0001ea70 (1 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00000030 size=320 callers=0 calls=0
*/
void _start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ULL || rel >= 0x170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000170 size=64 callers=0 calls=0
*/
void sub_170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ULL || rel >= 0x1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001b0 size=16 callers=0 calls=0
*/
void sub_1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b0ULL || rel >= 0x1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001c0 size=16 callers=535 calls=0
*/
void sub_1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0ULL || rel >= 0x1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001d0 size=16 callers=0 calls=0
*/
void sub_1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0ULL || rel >= 0x1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001e0 size=16 callers=0 calls=0
*/
void sub_1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0ULL || rel >= 0x1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001f0 size=16 callers=0 calls=0
*/
void sub_1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0ULL || rel >= 0x200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000200 size=16 callers=0 calls=0
*/
void sub_200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200ULL || rel >= 0x210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000210 size=16 callers=0 calls=0
*/
void sub_210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210ULL || rel >= 0x220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000220 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220ULL || rel >= 0x270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000270 size=96 callers=0 calls=0
*/
void sub_270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270ULL || rel >= 0x2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000002d0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d0ULL || rel >= 0x320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000320 size=96 callers=0 calls=0
*/
void sub_320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320ULL || rel >= 0x380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000380 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380ULL || rel >= 0x3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000003d0 size=96 callers=0 calls=0
*/
void sub_3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0ULL || rel >= 0x430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000430 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430ULL || rel >= 0x480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000480 size=96 callers=0 calls=0
*/
void sub_480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x480ULL || rel >= 0x4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000004e0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<void (*)(const void *)>::name() [T = void (*)(const v
*/
void static_const_char_boost_detail_core_typeid__void_const_v(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0ULL || rel >= 0x510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000510 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510ULL || rel >= 0x560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000560 size=96 callers=0 calls=0
*/
void sub_560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x560ULL || rel >= 0x5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000005c0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0ULL || rel >= 0x610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000610 size=96 callers=0 calls=0
*/
void sub_610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610ULL || rel >= 0x670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000670 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670ULL || rel >= 0x6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000006c0 size=96 callers=0 calls=0
*/
void sub_6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0ULL || rel >= 0x720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000720 size=320 callers=0 calls=0
   ref: 33333srA
*/
void f_33333srA(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720ULL || rel >= 0x860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000860 size=96 callers=84 calls=3
   calls: sub_65d700, sub_65d830, sub_65d960
*/
void sub_860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860ULL || rel >= 0x8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000008c0 size=112 callers=88 calls=3
   calls: sub_65d700, sub_65d830, sub_65d960
*/
void sub_8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0ULL || rel >= 0x930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000930 size=128 callers=0 calls=3
   calls: sub_65d700, sub_65d830, sub_65d960
*/
void sub_930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930ULL || rel >= 0x9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000009b0 size=288 callers=0 calls=4
   calls: sub_27d0, sub_65d700, sub_65d830, sub_65d960
*/
void sub_9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0ULL || rel >= 0xad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000ad0 size=320 callers=1 calls=6
   calls: gflib3_tlsf_pool, sub_5cf8e0, sub_5cf8f0, sub_65ee80, sub_65f0c0, sub_65fb00
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflib3/include\mem/reallocatable_resource.h
*/
void gflib3_reallocatable_resource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0ULL || rel >= 0xc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000c10 size=96 callers=2 calls=3
   calls: sub_65d700, sub_65d830, sub_65d960
*/
void sub_c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10ULL || rel >= 0xc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000c70 size=112 callers=1562 calls=3
   calls: sub_65d700, sub_65d830, sub_65d960
*/
void sub_c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70ULL || rel >= 0xce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000ce0 size=112 callers=1502 calls=3
   calls: sub_65d700, sub_65d830, sub_65d960
*/
void sub_ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0ULL || rel >= 0xd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000d50 size=352 callers=0 calls=3
   calls: DebugHeap, GlobalHeap, sub_65f1c0
*/
void sub_d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50ULL || rel >= 0xeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000eb0 size=2880 callers=0 calls=12
   calls: sub_19f0, sub_2a10, sub_34e0, sub_5cf8e0, sub_5cf8f0, sub_5df190, sub_5df5d0, sub_5dfd20, sub_65d6f0, sub_65d940, sub_65f110, sub_65f1c0
*/
void sub_eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb0ULL || rel >= 0x19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000019f0 size=576 callers=1 calls=0
*/
void sub_19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f0ULL || rel >= 0x1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001c30 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c30ULL || rel >= 0x1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001c80 size=96 callers=0 calls=0
*/
void sub_1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c80ULL || rel >= 0x1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001ce0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_394_15_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce0ULL || rel >= 0x1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001d10 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_397_15_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d10ULL || rel >= 0x1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001d40 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_160_13_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d40ULL || rel >= 0x1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001d70 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_164_13_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d70ULL || rel >= 0x1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001da0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_692_11_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da0ULL || rel >= 0x1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001dd0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_394_15_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd0ULL || rel >= 0x1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e00 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_397_15_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e00ULL || rel >= 0x1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e30 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_160_13_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e30ULL || rel >= 0x1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e60 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_164_13_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e60ULL || rel >= 0x1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e90 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_692_11_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e90ULL || rel >= 0x1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001ec0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_394_15_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec0ULL || rel >= 0x1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001ef0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_397_15_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef0ULL || rel >= 0x1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001f20 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_160_13_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f20ULL || rel >= 0x1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001f50 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_164_13_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f50ULL || rel >= 0x1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001f80 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_692_11_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f80ULL || rel >= 0x1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001fb0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_402_15_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0ULL || rel >= 0x1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001fe0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_521_15_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe0ULL || rel >= 0x2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002010 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_402_15_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2010ULL || rel >= 0x2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002040 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_521_15_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2040ULL || rel >= 0x2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002070 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_402_15_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2070ULL || rel >= 0x20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000020a0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_521_15_name_T_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a0ULL || rel >= 0x20d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000020d0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_497_15_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d0ULL || rel >= 0x2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002100 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_connection_hpp_149_13_name_T_lambda_at_C(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2100ULL || rel >= 0x2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002130 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_537_13_name_T(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2130ULL || rel >= 0x2160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002160 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_497_15_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2160ULL || rel >= 0x2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002190 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_connection_hpp_149_13_name_T_lambda_at_C_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2190ULL || rel >= 0x21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000021c0 size=48 callers=0 calls=0
   ref: static const char *boost::detail::core_typeid_<(lambda at C:/jenkins\workspace\orion\RomBuild\progra
*/
void gflib3_signal_template_hpp_537_13_name_T_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c0ULL || rel >= 0x21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000021f0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f0ULL || rel >= 0x2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002240 size=96 callers=0 calls=0
*/
void sub_2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2240ULL || rel >= 0x22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000022a0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a0ULL || rel >= 0x22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000022f0 size=96 callers=0 calls=0
*/
void sub_22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f0ULL || rel >= 0x2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002350 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2350ULL || rel >= 0x23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000023a0 size=96 callers=0 calls=0
*/
void sub_23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a0ULL || rel >= 0x2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002400 size=112 callers=0 calls=2
   calls: sub_65edc0, sub_65f070
*/
void sub_2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2400ULL || rel >= 0x2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002470 size=112 callers=0 calls=3
   calls: sub_65edc0, sub_65f070, sub_65f220
*/
void sub_2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2470ULL || rel >= 0x24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000024e0 size=112 callers=0 calls=1
   calls: sub_27d0
*/
void sub_24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e0ULL || rel >= 0x2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002550 size=16 callers=0 calls=0
*/
void sub_2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2550ULL || rel >= 0x2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002560 size=48 callers=0 calls=1
   calls: sub_65f1b0
*/
void sub_2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2560ULL || rel >= 0x2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002590 size=176 callers=0 calls=2
   calls: sub_2900, sub_5cf8f0
*/
void sub_2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2590ULL || rel >= 0x2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002640 size=112 callers=0 calls=1
   calls: sub_27d0
*/
void sub_2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2640ULL || rel >= 0x26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000026b0 size=112 callers=0 calls=2
   calls: sub_65edc0, sub_65f070
*/
void sub_26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b0ULL || rel >= 0x2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002720 size=176 callers=0 calls=6
   calls: sub_65d700, sub_65d830, sub_65d960, sub_65edc0, sub_65f070, sub_65f220
*/
void sub_2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2720ULL || rel >= 0x27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000027d0 size=304 callers=7 calls=0
*/
void sub_27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d0ULL || rel >= 0x2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002900 size=272 callers=1 calls=8
   calls: sub_65d800, sub_65dc70, sub_65dc80, sub_65dc90, sub_65dd60, sub_65e010, sub_65e0c0, sub_65ea00
*/
void sub_2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2900ULL || rel >= 0x2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002a10 size=2144 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a10ULL || rel >= 0x3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003270 size=32 callers=0 calls=0
*/
void sub_3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3270ULL || rel >= 0x3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003290 size=32 callers=0 calls=0
*/
void sub_3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3290ULL || rel >= 0x32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000032b0 size=32 callers=0 calls=0
*/
void sub_32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b0ULL || rel >= 0x32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000032d0 size=32 callers=0 calls=0
*/
void sub_32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d0ULL || rel >= 0x32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000032f0 size=16 callers=0 calls=0
*/
void sub_32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f0ULL || rel >= 0x3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003300 size=16 callers=0 calls=0
*/
void sub_3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3300ULL || rel >= 0x3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003310 size=16 callers=0 calls=0
*/
void sub_3310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3310ULL || rel >= 0x3320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003320 size=32 callers=0 calls=0
*/
void sub_3320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3320ULL || rel >= 0x3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003340 size=288 callers=54 calls=2
   calls: sub_5cf8f0, sub_65f110
*/
void sub_3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3340ULL || rel >= 0x3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003460 size=128 callers=0 calls=0
*/
void sub_3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3460ULL || rel >= 0x34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000034e0 size=640 callers=1 calls=1
   calls: sub_5df1f0
*/
void sub_34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e0ULL || rel >= 0x3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003760 size=4000 callers=0 calls=65
   calls: AudioUsbDeviceOutput, SourceGlobal, background, battle_default_placement_data, battle_effect, constant_data, d6eee09e, live_comm_stamp, poke_memory_place, primitive_renderer_texture, sub_1105a40, sub_1306220
   ... +53 more
*/
void sub_3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3760ULL || rel >= 0x4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004700 size=576 callers=1 calls=1
   calls: sub_65f1c0
*/
void sub_4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4700ULL || rel >= 0x4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004940 size=3344 callers=1 calls=16
   calls: sub_10110, sub_10320, sub_5e20, sub_5e26a0, sub_5e2930, sub_5f50, sub_ceb0, sub_d700, sub_ea10, sub_ec20, sub_f4b0, sub_f6c0
   ... +4 more
   ref: shader/blend_cubemap.bnsh
   ref: shader/pingpong_blend_shader.bnsh
   ref: bin/graphics/mask_shader/mask_path.bnsh
   ref: shader/fog.bnsh
   ref: shader/outline.bnsh
   ref: shader/primitive_renderer_shader.bnsh
   ref: shader/gamma_correction.bnsh
   ref: shader/collisionmap_shader.bnsh
*/
void primitive_renderer_texture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4940ULL || rel >= 0x5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005650 size=288 callers=12 calls=1
   calls: sub_794310
   ref: AudioBuiltInSpeakerOutput
   ref: AudioUsbDeviceOutput
   ref: AudioStereoJackOutput
   ref: AudioTvOutput
   ref: HandDockMode
*/
void AudioUsbDeviceOutput(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5650ULL || rel >= 0x5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005770 size=208 callers=0 calls=12
   calls: sub_1306ce0, sub_130e090, sub_13184b0, sub_5840, sub_5df950, sub_e87c50, sub_e88360, sub_e89880, sub_e9f980, sub_ea2fe0, sub_eadcc0, unnamed_12
*/
void sub_5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5770ULL || rel >= 0x5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005840 size=336 callers=1 calls=0
*/
void sub_5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5840ULL || rel >= 0x5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005990 size=48 callers=0 calls=1
   calls: sub_59c0
*/
void sub_5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5990ULL || rel >= 0x59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000059c0 size=240 callers=1 calls=1
   calls: AudioUsbDeviceOutput
*/
void sub_59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59c0ULL || rel >= 0x5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005ab0 size=336 callers=0 calls=4
   calls: sub_5cf9c0, sub_5e8ef0, sub_5e98e0, sub_c5c0
*/
void sub_5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab0ULL || rel >= 0x5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005c00 size=160 callers=0 calls=2
   calls: sub_5cf9c0, sub_c6a0
*/
void sub_5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c00ULL || rel >= 0x5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005ca0 size=176 callers=0 calls=3
   calls: sub_5cf9c0, sub_5e3e80, sub_cbb0
*/
void sub_5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ca0ULL || rel >= 0x5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005d50 size=208 callers=0 calls=3
   calls: sub_5cf9c0, sub_681320, sub_cc90
*/
void sub_5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d50ULL || rel >= 0x5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005e20 size=304 callers=4 calls=3
   calls: sub_10530, sub_5e6180, sub_d0c0
*/
void sub_5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e20ULL || rel >= 0x5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005f50 size=304 callers=4 calls=3
   calls: sub_10910, sub_5e6180, sub_d0c0
*/
void sub_5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f50ULL || rel >= 0x6080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006080 size=32 callers=0 calls=0
*/
void sub_6080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6080ULL || rel >= 0x60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000060a0 size=32 callers=0 calls=0
*/
void sub_60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a0ULL || rel >= 0x60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000060c0 size=112 callers=0 calls=1
   calls: sub_2a10
*/
void sub_60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c0ULL || rel >= 0x6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006130 size=112 callers=0 calls=2
   calls: sub_2a10, sub_5df5d0
*/
void sub_6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6130ULL || rel >= 0x61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000061a0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_61a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a0ULL || rel >= 0x61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000061f0 size=96 callers=0 calls=0
*/
void sub_61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f0ULL || rel >= 0x6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006250 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6250ULL || rel >= 0x62a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000062a0 size=96 callers=0 calls=0
*/
void sub_62a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a0ULL || rel >= 0x6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006300 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6300ULL || rel >= 0x6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006350 size=96 callers=0 calls=0
*/
void sub_6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6350ULL || rel >= 0x63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000063b0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63b0ULL || rel >= 0x6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006400 size=96 callers=0 calls=0
*/
void sub_6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6400ULL || rel >= 0x6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006460 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6460ULL || rel >= 0x64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000064b0 size=96 callers=0 calls=0
*/
void sub_64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b0ULL || rel >= 0x6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006510 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6510ULL || rel >= 0x6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006560 size=96 callers=0 calls=0
*/
void sub_6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6560ULL || rel >= 0x65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000065c0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c0ULL || rel >= 0x6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006610 size=96 callers=0 calls=0
*/
void sub_6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6610ULL || rel >= 0x6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006670 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6670ULL || rel >= 0x66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000066c0 size=96 callers=0 calls=0
*/
void sub_66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c0ULL || rel >= 0x6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006720 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6720ULL || rel >= 0x6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006770 size=96 callers=0 calls=0
*/
void sub_6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6770ULL || rel >= 0x67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000067d0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67d0ULL || rel >= 0x6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006820 size=96 callers=0 calls=0
*/
void sub_6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6820ULL || rel >= 0x6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006880 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6880ULL || rel >= 0x68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000068d0 size=96 callers=0 calls=0
*/
void sub_68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d0ULL || rel >= 0x6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006930 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6930ULL || rel >= 0x6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006980 size=96 callers=0 calls=0
*/
void sub_6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6980ULL || rel >= 0x69e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000069e0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_69e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e0ULL || rel >= 0x6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006a30 size=96 callers=0 calls=0
*/
void sub_6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a30ULL || rel >= 0x6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006a90 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a90ULL || rel >= 0x6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006ae0 size=96 callers=0 calls=0
*/
void sub_6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ae0ULL || rel >= 0x6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006b40 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b40ULL || rel >= 0x6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006b90 size=96 callers=0 calls=0
*/
void sub_6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b90ULL || rel >= 0x6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006bf0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf0ULL || rel >= 0x6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006c40 size=96 callers=0 calls=0
*/
void sub_6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c40ULL || rel >= 0x6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006ca0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca0ULL || rel >= 0x6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006cf0 size=96 callers=0 calls=0
*/
void sub_6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cf0ULL || rel >= 0x6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006d50 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d50ULL || rel >= 0x6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006da0 size=96 callers=0 calls=0
*/
void sub_6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da0ULL || rel >= 0x6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006e00 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e00ULL || rel >= 0x6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006e50 size=96 callers=0 calls=0
*/
void sub_6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e50ULL || rel >= 0x6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006eb0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb0ULL || rel >= 0x6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006f00 size=96 callers=0 calls=0
*/
void sub_6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f00ULL || rel >= 0x6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006f60 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f60ULL || rel >= 0x6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00006fb0 size=96 callers=0 calls=0
*/
void sub_6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb0ULL || rel >= 0x7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007010 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7010ULL || rel >= 0x7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007060 size=96 callers=0 calls=0
*/
void sub_7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7060ULL || rel >= 0x70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000070c0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c0ULL || rel >= 0x7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007110 size=96 callers=0 calls=0
*/
void sub_7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7110ULL || rel >= 0x7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007170 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7170ULL || rel >= 0x71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000071c0 size=96 callers=0 calls=0
*/
void sub_71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c0ULL || rel >= 0x7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007220 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7220ULL || rel >= 0x7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007270 size=96 callers=0 calls=0
*/
void sub_7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7270ULL || rel >= 0x72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000072d0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72d0ULL || rel >= 0x7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007320 size=96 callers=0 calls=0
*/
void sub_7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7320ULL || rel >= 0x7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007380 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7380ULL || rel >= 0x73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000073d0 size=96 callers=0 calls=0
*/
void sub_73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73d0ULL || rel >= 0x7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007430 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7430ULL || rel >= 0x7480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007480 size=96 callers=0 calls=0
*/
void sub_7480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7480ULL || rel >= 0x74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000074e0 size=224 callers=1 calls=1
   calls: sub_130c730
*/
void sub_74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e0ULL || rel >= 0x75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000075c0 size=224 callers=1 calls=1
   calls: sub_7c2810
*/
void sub_75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c0ULL || rel >= 0x76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000076a0 size=224 callers=1 calls=1
   calls: sub_7bff60
*/
void sub_76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a0ULL || rel >= 0x7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007780 size=224 callers=1 calls=1
   calls: sub_eac550
*/
void sub_7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7780ULL || rel >= 0x7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007860 size=432 callers=1 calls=2
   calls: sub_ea46c0, sub_ea6a60
*/
void sub_7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7860ULL || rel >= 0x7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007a10 size=496 callers=0 calls=1
   calls: sub_7ec0
*/
void sub_7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a10ULL || rel >= 0x7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007c00 size=16 callers=0 calls=0
*/
void sub_7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c00ULL || rel >= 0x7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007c10 size=16 callers=0 calls=0
*/
void sub_7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c10ULL || rel >= 0x7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007c20 size=112 callers=0 calls=0
*/
void sub_7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c20ULL || rel >= 0x7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007c90 size=16 callers=0 calls=0
*/
void sub_7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c90ULL || rel >= 0x7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007ca0 size=112 callers=0 calls=0
*/
void sub_7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca0ULL || rel >= 0x7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007d10 size=16 callers=0 calls=0
*/
void sub_7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d10ULL || rel >= 0x7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007d20 size=208 callers=0 calls=0
*/
void sub_7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d20ULL || rel >= 0x7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007df0 size=208 callers=0 calls=0
*/
void sub_7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df0ULL || rel >= 0x7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007ec0 size=464 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec0ULL || rel >= 0x8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008090 size=208 callers=0 calls=0
*/
void sub_8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8090ULL || rel >= 0x8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008160 size=48 callers=0 calls=1
   calls: sub_7ec0
*/
void sub_8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8160ULL || rel >= 0x8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008190 size=32 callers=0 calls=0
*/
void sub_8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8190ULL || rel >= 0x81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000081b0 size=32 callers=0 calls=0
*/
void sub_81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b0ULL || rel >= 0x81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000081d0 size=208 callers=0 calls=0
*/
void sub_81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81d0ULL || rel >= 0x82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000082a0 size=592 callers=1 calls=0
*/
void sub_82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82a0ULL || rel >= 0x84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000084f0 size=384 callers=0 calls=0
*/
void sub_84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f0ULL || rel >= 0x8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008670 size=16 callers=0 calls=0
*/
void sub_8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8670ULL || rel >= 0x8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008680 size=16 callers=0 calls=0
*/
void sub_8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8680ULL || rel >= 0x8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008690 size=112 callers=0 calls=0
*/
void sub_8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8690ULL || rel >= 0x8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008700 size=16 callers=0 calls=0
*/
void sub_8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8700ULL || rel >= 0x8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008710 size=112 callers=0 calls=0
*/
void sub_8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8710ULL || rel >= 0x8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008780 size=224 callers=1 calls=1
   calls: sub_eaa380
*/
void sub_8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8780ULL || rel >= 0x8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008860 size=592 callers=1 calls=0
*/
void sub_8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8860ULL || rel >= 0x8ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008ab0 size=256 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_8ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0ULL || rel >= 0x8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008bb0 size=256 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb0ULL || rel >= 0x8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008cb0 size=16 callers=0 calls=0
*/
void sub_8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb0ULL || rel >= 0x8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008cc0 size=112 callers=0 calls=0
*/
void sub_8cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc0ULL || rel >= 0x8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008d30 size=16 callers=0 calls=0
*/
void sub_8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d30ULL || rel >= 0x8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008d40 size=112 callers=0 calls=0
*/
void sub_8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d40ULL || rel >= 0x8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008db0 size=32 callers=0 calls=0
*/
void sub_8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8db0ULL || rel >= 0x8dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008dd0 size=32 callers=0 calls=0
*/
void sub_8dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd0ULL || rel >= 0x8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008df0 size=224 callers=1 calls=1
   calls: sub_8ed0
*/
void sub_8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8df0ULL || rel >= 0x8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008ed0 size=416 callers=2 calls=2
   calls: sub_65d700, sub_7910a0
*/
void sub_8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed0ULL || rel >= 0x9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009070 size=256 callers=0 calls=0
*/
void sub_9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9070ULL || rel >= 0x9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009170 size=16 callers=0 calls=0
*/
void sub_9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9170ULL || rel >= 0x9180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009180 size=16 callers=0 calls=0
*/
void sub_9180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9180ULL || rel >= 0x9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009190 size=112 callers=0 calls=0
*/
void sub_9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9190ULL || rel >= 0x9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009200 size=16 callers=0 calls=0
*/
void sub_9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9200ULL || rel >= 0x9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009210 size=112 callers=0 calls=0
*/
void sub_9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9210ULL || rel >= 0x9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009280 size=400 callers=1 calls=0
*/
void sub_9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9280ULL || rel >= 0x9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009410 size=64 callers=0 calls=0
*/
void sub_9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9410ULL || rel >= 0x9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009450 size=64 callers=0 calls=0
*/
void sub_9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9450ULL || rel >= 0x9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009490 size=16 callers=0 calls=0
*/
void sub_9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9490ULL || rel >= 0x94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000094a0 size=112 callers=0 calls=0
*/
void sub_94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94a0ULL || rel >= 0x9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009510 size=16 callers=0 calls=0
*/
void sub_9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9510ULL || rel >= 0x9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009520 size=112 callers=0 calls=0
*/
void sub_9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9520ULL || rel >= 0x9590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009590 size=224 callers=1 calls=1
   calls: sub_137d560
*/
void sub_9590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9590ULL || rel >= 0x9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009670 size=224 callers=1 calls=1
   calls: sub_69e070
*/
void sub_9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9670ULL || rel >= 0x9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009750 size=256 callers=1 calls=1
   calls: sub_9850
*/
void sub_9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9750ULL || rel >= 0x9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009850 size=3264 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9850ULL || rel >= 0xa510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a510 size=688 callers=0 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_a970
*/
void sub_a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa510ULL || rel >= 0xa7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a7c0 size=16 callers=0 calls=0
*/
void sub_a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c0ULL || rel >= 0xa7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a7d0 size=16 callers=0 calls=0
*/
void sub_a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d0ULL || rel >= 0xa7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a7e0 size=112 callers=0 calls=0
*/
void sub_a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e0ULL || rel >= 0xa850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a850 size=16 callers=0 calls=0
*/
void sub_a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850ULL || rel >= 0xa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a860 size=112 callers=0 calls=0
*/
void sub_a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa860ULL || rel >= 0xa8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a8d0 size=16 callers=0 calls=0
*/
void sub_a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8d0ULL || rel >= 0xa8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a8e0 size=16 callers=0 calls=0
*/
void sub_a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e0ULL || rel >= 0xa8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a8f0 size=16 callers=0 calls=0
*/
void sub_a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f0ULL || rel >= 0xa900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a900 size=16 callers=0 calls=0
*/
void sub_a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa900ULL || rel >= 0xa910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a910 size=32 callers=0 calls=0
*/
void sub_a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa910ULL || rel >= 0xa930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a930 size=32 callers=0 calls=0
*/
void sub_a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa930ULL || rel >= 0xa950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a950 size=32 callers=0 calls=0
*/
void sub_a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa950ULL || rel >= 0xa970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a970 size=448 callers=18 calls=1
   calls: sub_5e2bc0
*/
void sub_a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa970ULL || rel >= 0xab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ab30 size=224 callers=1 calls=1
   calls: sub_1305e00
*/
void sub_ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab30ULL || rel >= 0xac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ac10 size=368 callers=1 calls=1
   calls: sub_11061d0
*/
void sub_ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac10ULL || rel >= 0xad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ad80 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad80ULL || rel >= 0xae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ae50 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae50ULL || rel >= 0xaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000af20 size=16 callers=0 calls=0
*/
void sub_af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf20ULL || rel >= 0xaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000af30 size=112 callers=0 calls=0
*/
void sub_af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf30ULL || rel >= 0xafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000afa0 size=16 callers=0 calls=0
*/
void sub_afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa0ULL || rel >= 0xafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000afb0 size=112 callers=0 calls=0
*/
void sub_afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb0ULL || rel >= 0xb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b020 size=368 callers=1 calls=1
   calls: sub_11061d0
*/
void sub_b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb020ULL || rel >= 0xb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b190 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb190ULL || rel >= 0xb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b260 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb260ULL || rel >= 0xb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b330 size=16 callers=0 calls=0
*/
void sub_b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb330ULL || rel >= 0xb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b340 size=112 callers=0 calls=0
*/
void sub_b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb340ULL || rel >= 0xb3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b3b0 size=16 callers=0 calls=0
*/
void sub_b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b0ULL || rel >= 0xb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b3c0 size=112 callers=0 calls=0
*/
void sub_b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c0ULL || rel >= 0xb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b430 size=368 callers=1 calls=1
   calls: sub_11061d0
*/
void sub_b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb430ULL || rel >= 0xb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b5a0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a0ULL || rel >= 0xb670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b670 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb670ULL || rel >= 0xb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b740 size=16 callers=0 calls=0
*/
void sub_b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb740ULL || rel >= 0xb750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b750 size=112 callers=0 calls=0
*/
void sub_b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb750ULL || rel >= 0xb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b7c0 size=16 callers=0 calls=0
*/
void sub_b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c0ULL || rel >= 0xb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b7d0 size=112 callers=0 calls=0
*/
void sub_b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d0ULL || rel >= 0xb840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000b840 size=480 callers=1 calls=0
*/
void sub_b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb840ULL || rel >= 0xba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ba20 size=800 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba20ULL || rel >= 0xbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bd40 size=16 callers=0 calls=0
*/
void sub_bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd40ULL || rel >= 0xbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bd50 size=16 callers=0 calls=0
*/
void sub_bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd50ULL || rel >= 0xbd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bd60 size=112 callers=0 calls=0
*/
void sub_bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd60ULL || rel >= 0xbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bdd0 size=16 callers=0 calls=0
*/
void sub_bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd0ULL || rel >= 0xbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bde0 size=112 callers=0 calls=0
*/
void sub_bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde0ULL || rel >= 0xbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000be50 size=224 callers=1 calls=1
   calls: sub_eada50
*/
void sub_be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe50ULL || rel >= 0xbf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bf30 size=224 callers=1 calls=1
   calls: sub_eade10
*/
void sub_bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf30ULL || rel >= 0xc010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c010 size=224 callers=1 calls=1
   calls: sub_e88670
*/
void sub_c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc010ULL || rel >= 0xc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c0f0 size=224 callers=1 calls=1
   calls: sub_f16f10
*/
void sub_c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f0ULL || rel >= 0xc1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c1d0 size=400 callers=1 calls=8
   calls: ExtDefaultCpuDispatcher, sub_1f44f0, sub_300ca0, sub_b3fd0, sub_b3fe0, sub_b4000, sub_b4020, sub_b4030
*/
void sub_c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1d0ULL || rel >= 0xc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c360 size=128 callers=0 calls=0
*/
void sub_c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc360ULL || rel >= 0xc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c3e0 size=128 callers=0 calls=0
*/
void sub_c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e0ULL || rel >= 0xc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c460 size=16 callers=0 calls=0
*/
void sub_c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc460ULL || rel >= 0xc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c470 size=112 callers=0 calls=0
*/
void sub_c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc470ULL || rel >= 0xc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c4e0 size=16 callers=0 calls=0
*/
void sub_c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e0ULL || rel >= 0xc4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c4f0 size=112 callers=0 calls=0
*/
void sub_c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f0ULL || rel >= 0xc560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c560 size=16 callers=0 calls=0
*/
void sub_c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc560ULL || rel >= 0xc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c570 size=32 callers=0 calls=0
*/
void sub_c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc570ULL || rel >= 0xc590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c590 size=32 callers=0 calls=0
*/
void sub_c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc590ULL || rel >= 0xc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c5b0 size=16 callers=0 calls=0
*/
void sub_c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5b0ULL || rel >= 0xc5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c5c0 size=224 callers=2 calls=1
   calls: sub_5e8f80
*/
void sub_c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5c0ULL || rel >= 0xc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c6a0 size=464 callers=2 calls=1
   calls: sub_c870
*/
void sub_c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a0ULL || rel >= 0xc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c870 size=288 callers=2 calls=2
   calls: sub_5cf8c0, sub_65d700
*/
void sub_c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc870ULL || rel >= 0xc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c990 size=144 callers=0 calls=0
*/
void sub_c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc990ULL || rel >= 0xca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ca20 size=144 callers=0 calls=0
*/
void sub_ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca20ULL || rel >= 0xcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cab0 size=16 callers=0 calls=0
*/
void sub_cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcab0ULL || rel >= 0xcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cac0 size=112 callers=0 calls=0
*/
void sub_cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac0ULL || rel >= 0xcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cb30 size=16 callers=0 calls=0
*/
void sub_cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb30ULL || rel >= 0xcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cb40 size=112 callers=0 calls=0
*/
void sub_cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb40ULL || rel >= 0xcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cbb0 size=224 callers=2 calls=1
   calls: sub_5e3c30
*/
void sub_cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbb0ULL || rel >= 0xcc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cc90 size=544 callers=2 calls=1
   calls: sub_65d700
*/
void sub_cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc90ULL || rel >= 0xceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ceb0 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceb0ULL || rel >= 0xd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d0c0 size=416 callers=657 calls=1
   calls: sub_5cff50
*/
void sub_d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c0ULL || rel >= 0xd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d260 size=672 callers=12 calls=4
   calls: sub_5e6180, sub_d510, sub_d5c0, sub_d670
*/
void sub_d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd260ULL || rel >= 0xd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d500 size=16 callers=0 calls=0
*/
void sub_d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd500ULL || rel >= 0xd510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d510 size=176 callers=6 calls=1
   calls: sub_d0c0
*/
void sub_d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd510ULL || rel >= 0xd5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d5c0 size=176 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c0ULL || rel >= 0xd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d670 size=144 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd670ULL || rel >= 0xd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d700 size=2192 callers=21 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_5faec0, sub_df90, sub_e840
*/
void sub_d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd700ULL || rel >= 0xdf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000df90 size=896 callers=22 calls=1
   calls: sub_e310
*/
void sub_df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf90ULL || rel >= 0xe310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e310 size=272 callers=1 calls=0
*/
void sub_e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe310ULL || rel >= 0xe420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e420 size=1056 callers=0 calls=0
*/
void sub_e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe420ULL || rel >= 0xe840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e840 size=464 callers=8 calls=0
*/
void sub_e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe840ULL || rel >= 0xea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ea10 size=528 callers=3 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea10ULL || rel >= 0xec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ec20 size=2192 callers=25 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_5fd620, sub_df90, sub_e840
*/
void sub_ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec20ULL || rel >= 0xf4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f4b0 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b0ULL || rel >= 0xf6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f6c0 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c0ULL || rel >= 0xf8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f8d0 size=528 callers=3 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d0ULL || rel >= 0xfae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000fae0 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae0ULL || rel >= 0xfcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000fcf0 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf0ULL || rel >= 0xff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ff00 size=528 callers=1 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff00ULL || rel >= 0x10110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010110 size=528 callers=1 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_10110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10110ULL || rel >= 0x10320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010320 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_10320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10320ULL || rel >= 0x10530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010530 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_10530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10530ULL || rel >= 0x105b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000105b0 size=864 callers=1 calls=0
*/
void sub_105b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b0ULL || rel >= 0x10910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010910 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_10910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10910ULL || rel >= 0x10990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010990 size=128 callers=0 calls=0
*/
void sub_10990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10990ULL || rel >= 0x10a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010a10 size=128 callers=0 calls=0
*/
void sub_10a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a10ULL || rel >= 0x10a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010a90 size=144 callers=1 calls=0
*/
void sub_10a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a90ULL || rel >= 0x10b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010b20 size=48 callers=0 calls=0
*/
void sub_10b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b20ULL || rel >= 0x10b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010b50 size=16 callers=1 calls=0
*/
void sub_10b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b50ULL || rel >= 0x10b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010b60 size=16 callers=0 calls=0
*/
void sub_10b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b60ULL || rel >= 0x10b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010b70 size=16 callers=0 calls=0
*/
void sub_10b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b70ULL || rel >= 0x10b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010b80 size=16 callers=0 calls=0
*/
void sub_10b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b80ULL || rel >= 0x10b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010b90 size=16 callers=0 calls=0
*/
void sub_10b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b90ULL || rel >= 0x10ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010ba0 size=16 callers=0 calls=0
*/
void sub_10ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba0ULL || rel >= 0x10bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010bb0 size=16 callers=0 calls=0
*/
void sub_10bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bb0ULL || rel >= 0x10bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010bc0 size=16 callers=0 calls=0
*/
void sub_10bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bc0ULL || rel >= 0x10bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010bd0 size=16 callers=0 calls=0
*/
void sub_10bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd0ULL || rel >= 0x10be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010be0 size=16 callers=0 calls=0
*/
void sub_10be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be0ULL || rel >= 0x10bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010bf0 size=16 callers=0 calls=0
*/
void sub_10bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf0ULL || rel >= 0x10c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c00 size=16 callers=0 calls=0
*/
void sub_10c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c00ULL || rel >= 0x10c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c10 size=16 callers=0 calls=0
*/
void sub_10c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c10ULL || rel >= 0x10c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c20 size=16 callers=0 calls=0
*/
void sub_10c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c20ULL || rel >= 0x10c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c30 size=16 callers=0 calls=0
*/
void sub_10c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c30ULL || rel >= 0x10c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c40 size=16 callers=0 calls=0
*/
void sub_10c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c40ULL || rel >= 0x10c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c50 size=16 callers=0 calls=0
*/
void sub_10c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c50ULL || rel >= 0x10c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c60 size=16 callers=0 calls=0
*/
void sub_10c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c60ULL || rel >= 0x10c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c70 size=16 callers=0 calls=0
*/
void sub_10c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c70ULL || rel >= 0x10c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c80 size=16 callers=0 calls=0
*/
void sub_10c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c80ULL || rel >= 0x10c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010c90 size=16 callers=0 calls=0
*/
void sub_10c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c90ULL || rel >= 0x10ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010ca0 size=16 callers=0 calls=0
*/
void sub_10ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca0ULL || rel >= 0x10cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010cb0 size=16 callers=0 calls=0
*/
void sub_10cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb0ULL || rel >= 0x10cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010cc0 size=16 callers=0 calls=0
*/
void sub_10cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc0ULL || rel >= 0x10cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010cd0 size=16 callers=0 calls=0
*/
void sub_10cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cd0ULL || rel >= 0x10ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010ce0 size=16 callers=0 calls=0
*/
void sub_10ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ce0ULL || rel >= 0x10cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010cf0 size=16 callers=0 calls=0
*/
void sub_10cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf0ULL || rel >= 0x10d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d00 size=16 callers=0 calls=0
*/
void sub_10d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d00ULL || rel >= 0x10d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d10 size=16 callers=0 calls=0
*/
void sub_10d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d10ULL || rel >= 0x10d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d20 size=16 callers=0 calls=0
*/
void sub_10d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d20ULL || rel >= 0x10d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d30 size=16 callers=0 calls=0
*/
void sub_10d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d30ULL || rel >= 0x10d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d40 size=16 callers=0 calls=0
*/
void sub_10d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d40ULL || rel >= 0x10d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d50 size=16 callers=0 calls=0
*/
void sub_10d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d50ULL || rel >= 0x10d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d60 size=16 callers=0 calls=0
*/
void sub_10d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d60ULL || rel >= 0x10d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d70 size=16 callers=0 calls=0
*/
void sub_10d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d70ULL || rel >= 0x10d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d80 size=16 callers=0 calls=0
*/
void sub_10d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d80ULL || rel >= 0x10d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010d90 size=16 callers=0 calls=0
*/
void sub_10d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d90ULL || rel >= 0x10da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010da0 size=16 callers=0 calls=0
*/
void sub_10da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10da0ULL || rel >= 0x10db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010db0 size=16 callers=0 calls=0
*/
void sub_10db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10db0ULL || rel >= 0x10dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010dc0 size=16 callers=0 calls=0
*/
void sub_10dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10dc0ULL || rel >= 0x10dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010dd0 size=16 callers=0 calls=0
*/
void sub_10dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10dd0ULL || rel >= 0x10de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010de0 size=16 callers=0 calls=0
*/
void sub_10de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10de0ULL || rel >= 0x10df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010df0 size=16 callers=0 calls=0
*/
void sub_10df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10df0ULL || rel >= 0x10e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010e00 size=16 callers=0 calls=0
*/
void sub_10e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e00ULL || rel >= 0x10e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010e10 size=16 callers=0 calls=0
*/
void sub_10e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e10ULL || rel >= 0x10e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010e20 size=16 callers=0 calls=0
*/
void sub_10e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e20ULL || rel >= 0x10e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010e30 size=224 callers=1 calls=4
   calls: sub_2ff4a0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e30ULL || rel >= 0x10f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010f10 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_10f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f10ULL || rel >= 0x10f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010f60 size=352 callers=1 calls=2
   calls: PsArray, PsArray_3
*/
void sub_10f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f60ULL || rel >= 0x110c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000110c0 size=256 callers=0 calls=4
   calls: PsArray_4, PsSwitchMutex, sub_2ff4c0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/co
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c0ULL || rel >= 0x111c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000111c0 size=16 callers=0 calls=0
*/
void sub_111c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111c0ULL || rel >= 0x111d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000111d0 size=16 callers=0 calls=0
*/
void sub_111d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d0ULL || rel >= 0x111e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000111e0 size=16 callers=1 calls=0
*/
void sub_111e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111e0ULL || rel >= 0x111f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000111f0 size=144 callers=1 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80
*/
void sub_111f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111f0ULL || rel >= 0x11280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011280 size=1296 callers=1 calls=6
   calls: sub_10f10, sub_11830, sub_12080, sub_2ff4b0, sub_300c80, sub_b1f90
*/
void sub_11280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11280ULL || rel >= 0x11790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011790 size=80 callers=1 calls=1
   calls: sub_12080
*/
void sub_11790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11790ULL || rel >= 0x117e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000117e0 size=80 callers=0 calls=1
   calls: sub_12080
*/
void sub_117e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x117e0ULL || rel >= 0x11830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011830 size=384 callers=2 calls=5
   calls: PsArray_4, PsSwitchMutex, sub_11c80, sub_2ff4c0, sub_300c80
*/
void sub_11830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11830ULL || rel >= 0x119b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000119b0 size=80 callers=1 calls=1
   calls: sub_12080
*/
void sub_119b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119b0ULL || rel >= 0x11a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011a00 size=224 callers=1 calls=2
   calls: sub_11ae0, sub_11ba0
*/
void sub_11a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11a00ULL || rel >= 0x11ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011ae0 size=192 callers=1 calls=3
   calls: PsArray_2, PsSwitchMutex, sub_2ff4c0
*/
void sub_11ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ae0ULL || rel >= 0x11ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011ba0 size=224 callers=1 calls=1
   calls: PsArray_3
*/
void sub_11ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ba0ULL || rel >= 0x11c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011c80 size=304 callers=20 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80
*/
void sub_11c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c80ULL || rel >= 0x11db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011db0 size=496 callers=0 calls=4
   calls: PsArray_4, PsSwitchMutex, sub_2ff4c0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/co
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db0ULL || rel >= 0x11fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011fa0 size=224 callers=5 calls=4
   calls: PsArray_2, PsSwitchMutex, sub_2ff4c0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/co
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fa0ULL || rel >= 0x12080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012080 size=224 callers=9 calls=3
   calls: PsArray_4, PsSwitchMutex, sub_2ff4c0
*/
void sub_12080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12080ULL || rel >= 0x12160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012160 size=16 callers=4 calls=0
*/
void sub_12160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12160ULL || rel >= 0x12170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012170 size=32 callers=2 calls=0
*/
void sub_12170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12170ULL || rel >= 0x12190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012190 size=304 callers=1 calls=3
   calls: PsArray_4, PsSwitchMutex, sub_2ff4c0
*/
void sub_12190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12190ULL || rel >= 0x122c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000122c0 size=32 callers=1 calls=0
*/
void sub_122c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122c0ULL || rel >= 0x122e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000122e0 size=32 callers=1 calls=0
*/
void sub_122e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122e0ULL || rel >= 0x12300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012300 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned char *>::getName() [T = unsigned char
*/
void PsArray(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12300ULL || rel >= 0x12460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012460 size=400 callers=7 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned char *>::getName() [T = unsigned char
*/
void PsArray_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12460ULL || rel >= 0x125f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000125f0 size=352 callers=7 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxcNpMemBlock *>::getName() [T = physx:
   ref: <allocation names disabled>
*/
void PsArray_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f0ULL || rel >= 0x12750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012750 size=400 callers=9 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxcNpMemBlock *>::getName() [T = physx:
   ref: <allocation names disabled>
*/
void PsArray_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12750ULL || rel >= 0x128e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000128e0 size=912 callers=1 calls=4
   calls: sub_12c70, sub_12d50, sub_14e50, sub_300c80
*/
void sub_128e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e0ULL || rel >= 0x12c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012c70 size=224 callers=3 calls=1
   calls: PsArray_6
*/
void sub_12c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70ULL || rel >= 0x12d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012d50 size=1568 callers=4 calls=1
   calls: sub_300c80
*/
void sub_12d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d50ULL || rel >= 0x13370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013370 size=560 callers=1 calls=2
   calls: sub_12d50, sub_300c80
*/
void sub_13370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13370ULL || rel >= 0x135a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000135a0 size=160 callers=1 calls=1
   calls: sub_15650
*/
void sub_135a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a0ULL || rel >= 0x13640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013640 size=96 callers=2 calls=1
   calls: PsArray_5
*/
void sub_13640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13640ULL || rel >= 0x136a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000136a0 size=160 callers=1 calls=1
   calls: sub_156a0
*/
void sub_136a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136a0ULL || rel >= 0x13740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013740 size=416 callers=2 calls=6
   calls: NonTrackedAlloc_69, sub_12c70, sub_138e0, sub_139c0, sub_13aa0, sub_160f0
*/
void sub_13740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13740ULL || rel >= 0x138e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000138e0 size=224 callers=4 calls=1
   calls: PsArray_7
*/
void sub_138e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138e0ULL || rel >= 0x139c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000139c0 size=224 callers=2 calls=1
   calls: PsArray_8
*/
void sub_139c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139c0ULL || rel >= 0x13aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013aa0 size=224 callers=2 calls=1
   calls: PsArray_9
*/
void sub_13aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa0ULL || rel >= 0x13b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013b80 size=448 callers=1 calls=6
   calls: NonTrackedAlloc_69, sub_12c70, sub_138e0, sub_139c0, sub_13aa0, sub_16100
*/
void sub_13b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b80ULL || rel >= 0x13d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013d40 size=64 callers=3 calls=1
   calls: sub_15520
*/
void sub_13d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d40ULL || rel >= 0x13d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013d80 size=64 callers=3 calls=1
   calls: sub_16110
*/
void sub_13d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d80ULL || rel >= 0x13dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013dc0 size=64 callers=4 calls=1
   calls: sub_16210
*/
void sub_13dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc0ULL || rel >= 0x13e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013e00 size=224 callers=3 calls=2
   calls: PsArray_75, sub_15f60
*/
void sub_13e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e00ULL || rel >= 0x13ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013ee0 size=96 callers=0 calls=3
   calls: sub_169d0, sub_17610, sub_17690
*/
void sub_13ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee0ULL || rel >= 0x13f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013f40 size=16 callers=1 calls=0
*/
void sub_13f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f40ULL || rel >= 0x13f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013f50 size=256 callers=1 calls=5
   calls: NonTrackedAlloc_4, PsArray_75, sub_169d0, sub_17610, sub_17690
*/
void sub_13f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f50ULL || rel >= 0x14050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014050 size=64 callers=0 calls=1
   calls: sub_17610
*/
void sub_14050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14050ULL || rel >= 0x14090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014090 size=304 callers=0 calls=1
   calls: PsArray_75
*/
void sub_14090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14090ULL || rel >= 0x141c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000141c0 size=256 callers=1 calls=0
*/
void sub_141c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c0ULL || rel >= 0x142c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000142c0 size=16 callers=1 calls=0
*/
void sub_142c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c0ULL || rel >= 0x142d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000142d0 size=160 callers=3 calls=1
   calls: sub_160f0
*/
void sub_142d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d0ULL || rel >= 0x14370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014370 size=112 callers=1 calls=1
   calls: PsArray_10
*/
void sub_14370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14370ULL || rel >= 0x143e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000143e0 size=96 callers=3 calls=1
   calls: sub_15f60
*/
void sub_143e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e0ULL || rel >= 0x14440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014440 size=16 callers=1 calls=0
*/
void sub_14440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14440ULL || rel >= 0x14450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014450 size=112 callers=2 calls=1
   calls: PsArray_10
*/
void sub_14450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14450ULL || rel >= 0x144c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000144c0 size=64 callers=1 calls=1
   calls: sub_1a400
*/
void sub_144c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c0ULL || rel >= 0x14500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014500 size=64 callers=1 calls=1
   calls: sub_1aa00
*/
void sub_14500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14500ULL || rel >= 0x14540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014540 size=32 callers=0 calls=0
*/
void sub_14540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14540ULL || rel >= 0x14560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014560 size=16 callers=0 calls=0
   ref: ThirdPassIslandGenTask
*/
void ThirdPassIslandGenTask(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14560ULL || rel >= 0x14570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014570 size=32 callers=0 calls=0
*/
void sub_14570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14570ULL || rel >= 0x14590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014590 size=16 callers=0 calls=0
   ref: PostThirdPassTask
*/
void PostThirdPassTask(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14590ULL || rel >= 0x145a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000145a0 size=416 callers=16 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::NodeIndex>::getName() [T = physx::I
*/
void PsArray_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a0ULL || rel >= 0x14740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014740 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PartitionEdge *>::getName() [T = physx:
*/
void PsArray_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14740ULL || rel >= 0x148a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000148a0 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::NodeIndex>::getName() [T = physx::I
*/
void PsArray_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a0ULL || rel >= 0x14a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014a00 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::ConstraintOrContactManager>::getNam
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a00ULL || rel >= 0x14b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014b60 size=352 callers=7 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Interaction *>::getName() [T = phys
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b60ULL || rel >= 0x14cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014cc0 size=400 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PartitionEdge *>::getName() [T = physx:
*/
void PsArray_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc0ULL || rel >= 0x14e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014e50 size=208 callers=2 calls=0
*/
void sub_14e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e50ULL || rel >= 0x14f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014f20 size=912 callers=2 calls=10
   calls: NonTrackedAlloc_69, PsArray_11, PsArray_138, PsArray_14, PsArray_7, sub_138e0, sub_152b0, sub_15490, sub_15520, sub_ed340
*/
void sub_14f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f20ULL || rel >= 0x152b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000152b0 size=480 callers=1 calls=1
   calls: PsArray_11
*/
void sub_152b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b0ULL || rel >= 0x15490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015490 size=144 callers=3 calls=1
   calls: PsArray_14
*/
void sub_15490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15490ULL || rel >= 0x15520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015520 size=304 callers=3 calls=1
   calls: PsArray_5
*/
void sub_15520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15520ULL || rel >= 0x15650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015650 size=80 callers=2 calls=1
   calls: sub_14f20
*/
void sub_15650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15650ULL || rel >= 0x156a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000156a0 size=80 callers=2 calls=1
   calls: sub_14f20
*/
void sub_156a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a0ULL || rel >= 0x156f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000156f0 size=352 callers=0 calls=4
   calls: NonTrackedAlloc_69, PsArray_12, PsArray_75, sub_15850
*/
void sub_156f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f0ULL || rel >= 0x15850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015850 size=320 callers=1 calls=1
   calls: PsArray_12
*/
void sub_15850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15850ULL || rel >= 0x15990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015990 size=944 callers=2 calls=3
   calls: PsArray_5, PsArray_75, sub_15d40
*/
void sub_15990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15990ULL || rel >= 0x15d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015d40 size=224 callers=1 calls=1
   calls: PsArray_13
*/
void sub_15d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d40ULL || rel >= 0x15e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015e20 size=320 callers=3 calls=1
   calls: NonTrackedAlloc_69
*/
void sub_15e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e20ULL || rel >= 0x15f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015f60 size=112 callers=3 calls=1
   calls: PsArray_75
*/
void sub_15f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f60ULL || rel >= 0x15fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015fd0 size=288 callers=3 calls=0
*/
void sub_15fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd0ULL || rel >= 0x160f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000160f0 size=16 callers=2 calls=0
*/
void sub_160f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f0ULL || rel >= 0x16100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016100 size=16 callers=2 calls=0
*/
void sub_16100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16100ULL || rel >= 0x16110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016110 size=256 callers=1 calls=1
   calls: PsArray_5
*/
void sub_16110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16110ULL || rel >= 0x16210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016210 size=32 callers=1 calls=0
*/
void sub_16210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16210ULL || rel >= 0x16230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016230 size=880 callers=12 calls=2
   calls: PsArray_5, PsArray_75
*/
void sub_16230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16230ULL || rel >= 0x165a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000165a0 size=768 callers=1 calls=1
   calls: PsArray_75
*/
void sub_165a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165a0ULL || rel >= 0x168a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000168a0 size=304 callers=1 calls=2
   calls: PsArray_5, sub_165a0
*/
void sub_168a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168a0ULL || rel >= 0x169d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000169d0 size=1568 callers=2 calls=3
   calls: PsArray_5, PsArray_75, sub_16230
*/
void sub_169d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169d0ULL || rel >= 0x16ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016ff0 size=1312 callers=0 calls=3
   calls: PsArray_5, PsArray_75, sub_16230
*/
void sub_16ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ff0ULL || rel >= 0x17510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017510 size=256 callers=1 calls=2
   calls: PsArray_13, sub_15990
*/
void sub_17510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17510ULL || rel >= 0x17610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017610 size=128 callers=3 calls=2
   calls: sub_15e20, sub_15fd0
*/
void sub_17610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17610ULL || rel >= 0x17690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017690 size=2576 callers=2 calls=6
   calls: PsArray_75, sub_138e0, sub_16230, sub_17510, sub_180a0, sub_ed340
*/
void sub_17690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17690ULL || rel >= 0x180a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000180a0 size=432 callers=1 calls=2
   calls: PsArray_75, sub_1a1a0
*/
void sub_180a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180a0ULL || rel >= 0x18250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018250 size=496 callers=1 calls=1
   calls: PsArray_15
*/
void sub_18250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18250ULL || rel >= 0x18440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018440 size=1648 callers=1 calls=4
   calls: PsArray_15, sub_18250, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../Common/src\CmPriorityQueue.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::QueueElement>::getName() [T = physx
*/
void CmPriorityQueue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18440ULL || rel >= 0x18ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018ab0 size=5872 callers=1 calls=11
   calls: CmPriorityQueue, NonTrackedAlloc_69, PsArray_10, PsArray_138, PsArray_16, PsArray_75, sub_15490, sub_168a0, sub_300c80, sub_300cb0, sub_ed340
   ref: <allocation names disabled>
   ref: ./../../Common/src\CmPriorityQueue.h
   ref: ./../../Common/src\CmBitMap.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::QueueElement>::getName() [T = physx
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ab0ULL || rel >= 0x1a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a1a0 size=608 callers=2 calls=0
*/
void sub_1a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1a0ULL || rel >= 0x1a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a400 size=1536 callers=1 calls=4
   calls: PsArray_5, PsArray_75, sub_15e20, sub_15fd0
*/
void sub_1a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a400ULL || rel >= 0x1aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001aa00 size=1264 callers=1 calls=8
   calls: NonTrackedAlloc_69, PsArray_14, PsArray_75, sub_15490, sub_15520, sub_15e20, sub_15fd0, sub_ed340
*/
void sub_1aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aa00ULL || rel >= 0x1aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001aef0 size=608 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::Node>::getName() [T = physx::IG::No
*/
void PsArray_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aef0ULL || rel >= 0x1b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b150 size=464 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::Edge>::getName() [T = physx::IG::Ed
*/
void PsArray_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b150ULL || rel >= 0x1b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b320 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::EdgeInstance>::getName() [T = physx
*/
void PsArray_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b320ULL || rel >= 0x1b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b480 size=272 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::Island>::getName() [T = physx::IG::
*/
void PsArray_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b480ULL || rel >= 0x1b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b590 size=512 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::TraversalState>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b590ULL || rel >= 0x1b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b790 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::IG::TraversalState>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b790ULL || rel >= 0x1b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b960 size=16 callers=1 calls=0
*/
void sub_1b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b960ULL || rel >= 0x1b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b970 size=16 callers=1 calls=0
*/
void sub_1b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b970ULL || rel >= 0x1b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b980 size=3824 callers=1 calls=1
   calls: sub_1c890
*/
void sub_1b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b980ULL || rel >= 0x1c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c870 size=16 callers=1 calls=0
*/
void sub_1c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c870ULL || rel >= 0x1c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c880 size=16 callers=1 calls=0
*/
void sub_1c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c880ULL || rel >= 0x1c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c890 size=128 callers=7 calls=1
   calls: sub_122e0
*/
void sub_1c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c890ULL || rel >= 0x1c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c910 size=1360 callers=1 calls=16
   calls: PsMutex, PsMutex_2, sub_10f60, sub_1ce60, sub_1cf40, sub_1d080, sub_1d130, sub_1d420, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_2ff8d0
   ... +4 more
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxsContactManager>::getName() [T = phys
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = phys
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: ./../../Common/src\CmPool.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
   ref: ./../../../../PxShared/src/foundation/include\PsSList.h
*/
void CmPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c910ULL || rel >= 0x1ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001ce60 size=224 callers=3 calls=3
   calls: sub_1ea70, sub_1ec50, sub_300c80
*/
void sub_1ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce60ULL || rel >= 0x1cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001cf40 size=224 callers=3 calls=3
   calls: sub_1f380, sub_1f620, sub_300c80
*/
void sub_1cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf40ULL || rel >= 0x1d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d020 size=96 callers=1 calls=3
   calls: sub_1d420, sub_300c80, sub_90770
*/
void sub_1d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d020ULL || rel >= 0x1d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d080 size=176 callers=3 calls=5
   calls: sub_1f3910, sub_20560, sub_2ff8e0, sub_2ff950, sub_300c80
*/
void sub_1d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d080ULL || rel >= 0x1d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d130 size=144 callers=2 calls=4
   calls: sub_11280, sub_2ff4b0, sub_300c80, sub_f61e0
*/
void sub_1d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d130ULL || rel >= 0x1d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d1c0 size=608 callers=1 calls=10
   calls: sub_1ce60, sub_1cf40, sub_1d020, sub_1d080, sub_1d130, sub_1d420, sub_2ff4b0, sub_300c80, sub_90770, sub_b1f90
*/
void sub_1d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d1c0ULL || rel >= 0x1d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d420 size=272 callers=4 calls=2
   calls: sub_202e0, sub_300c80
*/
void sub_1d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d420ULL || rel >= 0x1d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d530 size=96 callers=1 calls=1
   calls: sub_300c80
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/so
*/
void NonTrackedAlloc_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d530ULL || rel >= 0x1d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d590 size=336 callers=1 calls=2
   calls: CmPool_2, NonTrackedAlloc_69
*/
void sub_1d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d590ULL || rel >= 0x1d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6e0 size=768 callers=1 calls=4
   calls: PsArray_19, PsArray_20, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SpherePersistentContactManifold>::g
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::LargePersistentContactManifold>::ge
*/
void PsPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6e0ULL || rel >= 0x1d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d9e0 size=288 callers=5 calls=1
   calls: NonTrackedAlloc_69
*/
void sub_1d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9e0ULL || rel >= 0x1db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001db00 size=96 callers=7 calls=0
*/
void sub_1db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db00ULL || rel >= 0x1db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001db60 size=112 callers=0 calls=1
   calls: PsArray_2
*/
void sub_1db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db60ULL || rel >= 0x1dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dbd0 size=16 callers=1 calls=0
*/
void sub_1dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbd0ULL || rel >= 0x1dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dbe0 size=272 callers=1 calls=0
*/
void sub_1dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbe0ULL || rel >= 0x1dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dcf0 size=16 callers=0 calls=0
*/
void sub_1dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dcf0ULL || rel >= 0x1dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dd00 size=1920 callers=0 calls=4
   calls: NonTrackedAlloc_69, sub_20510, sub_2ff8f0, sub_2ff9b0
*/
void sub_1dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd00ULL || rel >= 0x1e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e480 size=32 callers=1 calls=0
*/
void sub_1e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e480ULL || rel >= 0x1e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e4a0 size=16 callers=0 calls=0
*/
void sub_1e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4a0ULL || rel >= 0x1e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e4b0 size=48 callers=1 calls=0
*/
void sub_1e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b0ULL || rel >= 0x1e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e4e0 size=160 callers=3 calls=3
   calls: sub_20610, sub_2ff8f0, sub_2ff9b0
*/
void sub_1e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4e0ULL || rel >= 0x1e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e580 size=48 callers=2 calls=0
*/
void sub_1e580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e580ULL || rel >= 0x1e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e5b0 size=384 callers=2 calls=0
*/
void sub_1e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5b0ULL || rel >= 0x1e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e730 size=416 callers=1 calls=0
*/
void sub_1e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e730ULL || rel >= 0x1e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e8d0 size=16 callers=2 calls=0
*/
void sub_1e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8d0ULL || rel >= 0x1e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e8e0 size=16 callers=5 calls=0
*/
void sub_1e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8e0ULL || rel >= 0x1e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e8f0 size=16 callers=1 calls=0
*/
void sub_1e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8f0ULL || rel >= 0x1e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e900 size=368 callers=1 calls=7
   calls: PsArray, PsArray_2, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e900ULL || rel >= 0x1ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001ea70 size=480 callers=1 calls=3
   calls: PsArray_17, PsSortInternals, sub_300c80
*/
void sub_1ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea70ULL || rel >= 0x1ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

