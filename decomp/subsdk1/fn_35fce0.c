/* subsdk1 functions 0035fce0..00391ef0 (17 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0035fce0 size=144 callers=2 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_35fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fce0ULL || rel >= 0x35fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fd70 size=144 callers=6 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_35fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fd70ULL || rel >= 0x35fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fe00 size=208 callers=12 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_35fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fe00ULL || rel >= 0x35fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fed0 size=304 callers=2 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_35fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fed0ULL || rel >= 0x360000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360000 size=400 callers=1 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_360000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360000ULL || rel >= 0x360190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360190 size=256 callers=1 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_360190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360190ULL || rel >= 0x360290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360290 size=256 callers=16 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_360290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360290ULL || rel >= 0x360390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360390 size=144 callers=3 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_360390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360390ULL || rel >= 0x360420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360420 size=160 callers=13 calls=1
   calls: mem_Alloc
*/
void sub_360420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360420ULL || rel >= 0x3604c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003604c0 size=192 callers=29 calls=1
   calls: mem_Alloc
*/
void sub_3604c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3604c0ULL || rel >= 0x360580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360580 size=192 callers=15 calls=1
   calls: mem_Alloc
*/
void sub_360580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360580ULL || rel >= 0x360640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360640 size=208 callers=7 calls=1
   calls: mem_Alloc
*/
void sub_360640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360640ULL || rel >= 0x360710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360710 size=128 callers=3 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_360710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360710ULL || rel >= 0x360790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360790 size=112 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_360790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360790ULL || rel >= 0x360800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360800 size=192 callers=22 calls=3
   calls: mem_Alloc, sub_2db4f0, sub_2ed320
   ref: unrecognized profile specifier "%s"
*/
void unrecognized_profile_specifier_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360800ULL || rel >= 0x3608c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003608c0 size=48 callers=19 calls=0
*/
void sub_3608c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3608c0ULL || rel >= 0x3608f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003608f0 size=288 callers=291 calls=4
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f560
*/
void sub_3608f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3608f0ULL || rel >= 0x360a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360a10 size=288 callers=1 calls=4
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f560
*/
void sub_360a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360a10ULL || rel >= 0x360b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360b30 size=128 callers=2 calls=0
*/
void sub_360b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360b30ULL || rel >= 0x360bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360bb0 size=144 callers=3 calls=0
*/
void sub_360bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360bb0ULL || rel >= 0x360c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360c40 size=288 callers=2 calls=4
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f560
*/
void sub_360c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360c40ULL || rel >= 0x360d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360d60 size=96 callers=4 calls=1
   calls: mem_Alloc
*/
void sub_360d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360d60ULL || rel >= 0x360dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360dc0 size=272 callers=0 calls=2
   calls: d_fatal_error_C9999, mem_Alloc
   ref: unsupported node type in DupNode
*/
void unsupported_node_type_in_DupNode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360dc0ULL || rel >= 0x360ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360ed0 size=96 callers=29 calls=1
   calls: mem_Alloc
*/
void sub_360ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360ed0ULL || rel >= 0x360f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360f30 size=112 callers=11 calls=1
   calls: mem_Alloc
*/
void sub_360f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360f30ULL || rel >= 0x360fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360fa0 size=128 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_360fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360fa0ULL || rel >= 0x361020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361020 size=144 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_361020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361020ULL || rel >= 0x3610b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003610b0 size=160 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_3610b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3610b0ULL || rel >= 0x361150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361150 size=96 callers=3 calls=1
   calls: mem_Alloc
*/
void sub_361150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361150ULL || rel >= 0x3611b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003611b0 size=96 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_3611b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3611b0ULL || rel >= 0x361210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361210 size=96 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_361210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361210ULL || rel >= 0x361270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361270 size=224 callers=2 calls=2
   calls: mem_Alloc, sub_36d630
*/
void sub_361270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361270ULL || rel >= 0x361350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361350 size=128 callers=4 calls=1
   calls: mem_Alloc
*/
void sub_361350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361350ULL || rel >= 0x3613d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003613d0 size=1408 callers=17 calls=5
   calls: d_fatal_error_C9999, invalid_discard_statement_encountered_in_DupStmt, mem_Alloc, sub_2ac7d0, sub_361270
   ref: invalid discard statement encountered in DupStmt
*/
void invalid_discard_statement_encountered_in_DupStmt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3613d0ULL || rel >= 0x361950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361950 size=64 callers=5 calls=1
   calls: sub_369ec0
*/
void sub_361950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361950ULL || rel >= 0x361990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361990 size=32 callers=0 calls=0
*/
void sub_361990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361990ULL || rel >= 0x3619b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003619b0 size=208 callers=8 calls=1
   calls: mem_Alloc
*/
void sub_3619b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3619b0ULL || rel >= 0x361a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361a80 size=208 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_361a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361a80ULL || rel >= 0x361b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361b50 size=144 callers=3 calls=2
   calls: sub_2dacc0, sub_361be0
   ref: too much data in initialization
   ref: too little data in initialization
*/
void too_much_data_in_initialization_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361b50ULL || rel >= 0x361be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361be0 size=432 callers=3 calls=3
   calls: mem_Alloc, sub_361be0, sub_362aa0
*/
void sub_361be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361be0ULL || rel >= 0x361d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361d90 size=1088 callers=2 calls=18
   calls: column_major, sub_2dacc0, sub_2db570, sub_2db630, sub_35f390, sub_35f400, sub_35f430, sub_36cd20, sub_36ce20, sub_36d9a0, sub_36d9d0, sub_36da30
   ... +6 more
   ref: GLSL 1.20 does not allow nested structs
   ref: the name "%s" is already defined
   ref: struct "%s" interface specification "%s" is not an interface
   ref: tag "%s" is not a struct
   ref: use of connectors such as '%s' is deprecated
   ref: redefinition of template %s, previous definition at %s(%d)
   ref: multiple inheritance not supported
*/
void multiple_inheritance_not_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361d90ULL || rel >= 0x3621d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003621d0 size=304 callers=1 calls=5
   calls: sub_2dacc0, sub_36cd20, sub_36d3c0, sub_36da30, sub_36dec0
   ref: the name "%s" is already defined
*/
void the_name_s_is_already_defined(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3621d0ULL || rel >= 0x362300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362300 size=16 callers=11 calls=0
*/
void sub_362300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362300ULL || rel >= 0x362310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362310 size=80 callers=1 calls=0
*/
void sub_362310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362310ULL || rel >= 0x362360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362360 size=48 callers=2 calls=0
*/
void sub_362360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362360ULL || rel >= 0x362390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362390 size=176 callers=3 calls=0
*/
void sub_362390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362390ULL || rel >= 0x362440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362440 size=224 callers=5 calls=0
*/
void sub_362440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362440ULL || rel >= 0x362520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362520 size=256 callers=10 calls=0
*/
void sub_362520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362520ULL || rel >= 0x362620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362620 size=224 callers=5 calls=0
*/
void sub_362620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362620ULL || rel >= 0x362700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362700 size=128 callers=3 calls=2
   calls: sub_36df30, sub_36e110
*/
void sub_362700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362700ULL || rel >= 0x362780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362780 size=48 callers=8 calls=0
*/
void sub_362780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362780ULL || rel >= 0x3627b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003627b0 size=80 callers=36 calls=0
*/
void sub_3627b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3627b0ULL || rel >= 0x362800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362800 size=48 callers=5 calls=0
*/
void sub_362800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362800ULL || rel >= 0x362830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362830 size=48 callers=1 calls=0
*/
void sub_362830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362830ULL || rel >= 0x362860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362860 size=576 callers=12 calls=2
   calls: d_fatal_error_C9999, unexpected_expr_kind_in_IsExprEqual
   ref: unexpected expr kind in IsExprEqual
*/
void unexpected_expr_kind_in_IsExprEqual(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362860ULL || rel >= 0x362aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362aa0 size=144 callers=25 calls=4
   calls: sub_362aa0, sub_36d050, sub_36d4b0, sub_36d9a0
*/
void sub_362aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362aa0ULL || rel >= 0x362b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362b30 size=80 callers=2 calls=2
   calls: sub_36d9a0, sub_36d9d0
*/
void sub_362b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362b30ULL || rel >= 0x362b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362b80 size=368 callers=4 calls=7
   calls: sub_2ef620, sub_36d050, sub_36d110, sub_36d8e0, sub_36d9a0, sub_36d9d0, sub_36da30
*/
void sub_362b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362b80ULL || rel >= 0x362cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362cf0 size=176 callers=2 calls=4
   calls: sub_362b80, sub_36d9a0, sub_36d9d0, sub_36da30
*/
void sub_362cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362cf0ULL || rel >= 0x362da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362da0 size=448 callers=3 calls=7
   calls: sub_362b80, sub_362da0, sub_36d050, sub_36d8e0, sub_36d9a0, sub_36d9d0, sub_36da30
*/
void sub_362da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362da0ULL || rel >= 0x362f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362f60 size=9152 callers=28 calls=34
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, TMP_d_2, cast_not_allowed, expected_matrix_operand_to_s, implicit_cast_from_s_to_s, mem_Alloc, operands_to_s_must_be_scalar_or_vector, sub_2ac440, sub_2ac460, sub_2ac510, sub_2ac7d0, sub_2db630
   ... +22 more
   ref: OpenGL does not allow matrix casts without #version 120 or later
*/
void OpenGL_does_not_allow_matrix_casts_without_version_120_o(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362f60ULL || rel >= 0x365320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365320 size=272 callers=5 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_365320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365320ULL || rel >= 0x365430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365430 size=256 callers=9 calls=7
   calls: column_major, sub_2db630, sub_35f390, sub_35f400, sub_35f430, sub_36d000, sub_36d110
   ref: implicit cast from "%s" to "%s"
*/
void implicit_cast_from_s_to_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365430ULL || rel >= 0x365530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365530 size=816 callers=18 calls=7
   calls: mem_Alloc, sub_2dacc0, sub_366bb0, sub_36d000, sub_36d050, sub_36d550, sub_36d8e0
   ref: too much data in type constructor
*/
void too_much_data_in_type_constructor_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365530ULL || rel >= 0x365860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365860 size=192 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_365860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365860ULL || rel >= 0x365920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365920 size=624 callers=13 calls=7
   calls: mem_Alloc, sub_2dacc0, sub_36d110, sub_36d4b0, sub_36d630, sub_36e230, swizzle_too_long_s_3
   ref: swizzle mask element not present in operand "%s"
   ref: operands to "%s" must be scalar or vector
   ref: length of vector operands to "%s" cannot exceed 4
*/
void operands_to_s_must_be_scalar_or_vector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365920ULL || rel >= 0x365b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365b90 size=176 callers=19 calls=1
   calls: mem_Alloc
*/
void sub_365b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365b90ULL || rel >= 0x365c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365c40 size=256 callers=25 calls=1
   calls: mem_Alloc
*/
void sub_365c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365c40ULL || rel >= 0x365d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365d40 size=176 callers=2 calls=5
   calls: sub_362aa0, sub_365d40, sub_36d110, sub_36d9a0, unexpected_toBase_d_in_IsBaseCastValid
*/
void sub_365d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365d40ULL || rel >= 0x365df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365df0 size=288 callers=24 calls=1
   calls: mem_Alloc
*/
void sub_365df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365df0ULL || rel >= 0x365f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365f10 size=624 callers=6 calls=6
   calls: mem_Alloc, sub_2dacc0, sub_36d110, sub_36d6b0, sub_36e230, swizzle_too_long_s_4
   ref: expected matrix operand to "%s"
   ref: swizzle mask element not present in operand "%s"
   ref: dimensions of matrix operands to "%s" cannot exceed 4
*/
void expected_matrix_operand_to_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365f10ULL || rel >= 0x366180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366180 size=96 callers=1 calls=2
   calls: sub_36d9a0, sub_36d9d0
*/
void sub_366180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366180ULL || rel >= 0x3661e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003661e0 size=192 callers=1 calls=2
   calls: sub_365320, sub_3662a0
*/
void sub_3661e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3661e0ULL || rel >= 0x3662a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003662a0 size=336 callers=5 calls=0
*/
void sub_3662a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3662a0ULL || rel >= 0x3663f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003663f0 size=320 callers=3 calls=4
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_36d630, sub_36e230
   ref: Boolean expression expected
   ref: length of vector expressions cannot exceed 4
   ref: scalar Boolean expression expected
*/
void length_of_vector_expressions_cannot_exceed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3663f0ULL || rel >= 0x366530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366530 size=192 callers=6 calls=1
   calls: mem_Alloc
*/
void sub_366530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366530ULL || rel >= 0x3665f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003665f0 size=352 callers=11 calls=2
   calls: d_fatal_error_C9999, mem_Alloc
   ref: Invalid binary operator
*/
void Invalid_binary_operator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3665f0ULL || rel >= 0x366750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366750 size=240 callers=6 calls=1
   calls: mem_Alloc
*/
void sub_366750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366750ULL || rel >= 0x366840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366840 size=240 callers=6 calls=1
   calls: mem_Alloc
*/
void sub_366840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366840ULL || rel >= 0x366930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366930 size=480 callers=4 calls=6
   calls: mem_Alloc, sub_2db630, sub_337300, sub_36d050, sub_36da10, sub_36dce0
   ref: OpenGL requires the selected expressions to be of the same type
   ref: OpenGL does not allow selection of expressions of array type
*/
void OpenGL_does_not_allow_selection_of_expressions_of_array(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366930ULL || rel >= 0x366b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366b10 size=160 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_366b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366b10ULL || rel >= 0x366bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366bb0 size=112 callers=2 calls=1
   calls: sub_366bb0
*/
void sub_366bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366bb0ULL || rel >= 0x366c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366c20 size=224 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_366c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366c20ULL || rel >= 0x366d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366d00 size=224 callers=22 calls=1
   calls: mem_Alloc
*/
void sub_366d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366d00ULL || rel >= 0x366de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366de0 size=208 callers=8 calls=1
   calls: mem_Alloc
*/
void sub_366de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366de0ULL || rel >= 0x366eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366eb0 size=96 callers=27 calls=2
   calls: mem_Alloc, sub_365c40
*/
void sub_366eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366eb0ULL || rel >= 0x366f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366f10 size=192 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_366f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366f10ULL || rel >= 0x366fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366fd0 size=1184 callers=4 calls=13
   calls: d_fatal_error_C9999, fn_s, mem_Alloc, sub_2a5c60, sub_2a5cb0, sub_2a5d30, sub_2fdaa0, sub_302e20, sub_369ec0, sub_36cd20, sub_36da30, sub_36dce0
   ... +1 more
   ref: can't find %s function in stdlib
*/
void can_t_find_s_function_in_stdlib(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366fd0ULL || rel >= 0x367470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367470 size=48 callers=1 calls=0
*/
void sub_367470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367470ULL || rel >= 0x3674a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003674a0 size=16 callers=4 calls=0
*/
void sub_3674a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3674a0ULL || rel >= 0x3674b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003674b0 size=384 callers=2 calls=2
   calls: sub_2ac170, sub_2dacc0
   ref: TEXUNIT
   ref: invalid register semantic "%s"
*/
void TEXUNIT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3674b0ULL || rel >= 0x367630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367630 size=128 callers=23 calls=3
   calls: mem_Alloc, sub_1630, sub_3670
*/
void sub_367630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367630ULL || rel >= 0x3676b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003676b0 size=80 callers=1 calls=2
   calls: mem_Alloc, sub_3670
*/
void sub_3676b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3676b0ULL || rel >= 0x367700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367700 size=352 callers=7 calls=6
   calls: mem_Alloc, sub_2880, sub_2ed320, sub_2ed440, sub_3670, sub_367700
*/
void sub_367700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367700ULL || rel >= 0x367860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367860 size=224 callers=1 calls=5
   calls: mem_Alloc, sub_1630, sub_2060, sub_21b0, sub_3670
*/
void sub_367860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367860ULL || rel >= 0x367940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367940 size=368 callers=13 calls=3
   calls: mem_Alloc, sub_1630, sub_3670
*/
void sub_367940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367940ULL || rel >= 0x367ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367ab0 size=304 callers=14 calls=4
   calls: sub_2880, sub_367700, sub_367be0, sub_3910
*/
void sub_367ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367ab0ULL || rel >= 0x367be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367be0 size=608 callers=3 calls=3
   calls: sub_3608f0, sub_367be0, sub_369980
*/
void sub_367be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367be0ULL || rel >= 0x367e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367e40 size=80 callers=7 calls=1
   calls: sub_22e0
*/
void sub_367e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367e40ULL || rel >= 0x367e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367e90 size=192 callers=1 calls=1
   calls: sub_22e0
*/
void sub_367e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367e90ULL || rel >= 0x367f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367f50 size=160 callers=9 calls=0
*/
void sub_367f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367f50ULL || rel >= 0x367ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367ff0 size=832 callers=0 calls=3
   calls: d_fatal_error_C9999, sub_36cd20, sub_36d510
   ref: Invalid argument in function call
*/
void Invalid_argument_in_function_call(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367ff0ULL || rel >= 0x368330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368330 size=48 callers=4 calls=0
*/
void sub_368330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368330ULL || rel >= 0x368360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368360 size=144 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_368360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368360ULL || rel >= 0x3683f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003683f0 size=96 callers=0 calls=0
*/
void sub_3683f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3683f0ULL || rel >= 0x368450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368450 size=112 callers=1 calls=1
   calls: sub_2dacc0
   ref: no error detected since previous error token
*/
void no_error_detected_since_previous_error_token(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368450ULL || rel >= 0x3684c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003684c0 size=112 callers=3 calls=2
   calls: sub_369ec0, sub_36a750
*/
void sub_3684c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3684c0ULL || rel >= 0x368530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368530 size=96 callers=0 calls=0
*/
void sub_368530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368530ULL || rel >= 0x368590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368590 size=144 callers=0 calls=0
*/
void sub_368590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368590ULL || rel >= 0x368620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368620 size=192 callers=1 calls=1
   calls: sub_369ec0
*/
void sub_368620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368620ULL || rel >= 0x3686e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003686e0 size=48 callers=1 calls=1
   calls: sub_368710
*/
void sub_3686e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3686e0ULL || rel >= 0x368710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368710 size=416 callers=7 calls=2
   calls: sub_368710, sub_369bf0
*/
void sub_368710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368710ULL || rel >= 0x3688b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003688b0 size=4304 callers=1 calls=4
   calls: mem_Alloc, sub_36d110, sub_36d630, sub_36e230
*/
void sub_3688b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3688b0ULL || rel >= 0x369980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369980 size=224 callers=6 calls=1
   calls: sub_369980
*/
void sub_369980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369980ULL || rel >= 0x369a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a60 size=144 callers=0 calls=0
*/
void sub_369a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a60ULL || rel >= 0x369af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369af0 size=112 callers=0 calls=0
*/
void sub_369af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369af0ULL || rel >= 0x369b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369b60 size=48 callers=0 calls=0
*/
void sub_369b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369b60ULL || rel >= 0x369b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369b90 size=48 callers=0 calls=0
*/
void sub_369b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369b90ULL || rel >= 0x369bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369bc0 size=48 callers=0 calls=0
*/
void sub_369bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369bc0ULL || rel >= 0x369bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369bf0 size=352 callers=56 calls=1
   calls: sub_369bf0
*/
void sub_369bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369bf0ULL || rel >= 0x369d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369d50 size=368 callers=12 calls=1
   calls: sub_369d50
*/
void sub_369d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369d50ULL || rel >= 0x369ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369ec0 size=432 callers=101 calls=2
   calls: sub_369bf0, sub_369ec0
*/
void sub_369ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369ec0ULL || rel >= 0x36a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a070 size=144 callers=12 calls=1
   calls: sub_369ec0
*/
void sub_36a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a070ULL || rel >= 0x36a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a100 size=480 callers=15 calls=2
   calls: sub_369d50, sub_36a100
*/
void sub_36a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a100ULL || rel >= 0x36a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a2e0 size=464 callers=1 calls=2
   calls: sub_369d50, sub_36a100
*/
void sub_36a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a2e0ULL || rel >= 0x36a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a4b0 size=144 callers=8 calls=1
   calls: sub_369bf0
*/
void sub_36a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a4b0ULL || rel >= 0x36a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a540 size=368 callers=5 calls=1
   calls: sub_36a540
*/
void sub_36a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a540ULL || rel >= 0x36a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a6b0 size=160 callers=1 calls=0
*/
void sub_36a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a6b0ULL || rel >= 0x36a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a750 size=512 callers=50 calls=1
   calls: sub_36a750
*/
void sub_36a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a750ULL || rel >= 0x36a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a950 size=160 callers=1 calls=1
   calls: sub_36a750
*/
void sub_36a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a950ULL || rel >= 0x36a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a9f0 size=288 callers=5 calls=6
   calls: atomicCompSwap, sub_2f7cf0, sub_2f7fb0, sub_2f8290, sub_2fc060, sub_306070
*/
void sub_36a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a9f0ULL || rel >= 0x36ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ab10 size=976 callers=0 calls=10
   calls: TMP_d, atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f7fb0, sub_2f8290, sub_2fb460, sub_2fc060, sub_3177b0, sub_36a9f0
*/
void sub_36ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ab10ULL || rel >= 0x36aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036aee0 size=288 callers=1 calls=3
   calls: sub_2ed320, sub_2f6e10, sub_2f7410
*/
void sub_36aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36aee0ULL || rel >= 0x36b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b000 size=912 callers=0 calls=16
   calls: TMP_d, atomicCompSwap, mem_Alloc, sub_2db630, sub_2f7cf0, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2f9c60, sub_2facd0, sub_2fade0, sub_2fb460
   ... +4 more
   ref: no statement at the end of a switch block
*/
void no_statement_at_the_end_of_a_switch_block(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b000ULL || rel >= 0x36b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b390 size=448 callers=0 calls=4
   calls: sub_2dacc0, sub_2db4f0, sub_2f9210, sub_3188c0
   ref: Unreachable statement in switch body
   ref: default
   ref: duplicate %s label in switch
*/
void default_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b390ULL || rel >= 0x36b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b550 size=432 callers=0 calls=3
   calls: sub_2dacc0, sub_2f9210, sub_3188c0
   ref: duplicate %s label in switch
*/
void duplicate_s_label_in_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b550ULL || rel >= 0x36b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b700 size=368 callers=0 calls=4
   calls: atomicCompSwap, sub_2f7fb0, sub_2fb460, sub_36b870
*/
void sub_36b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b700ULL || rel >= 0x36b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b870 size=288 callers=2 calls=4
   calls: atomicCompSwap, sub_2f7fb0, sub_2facd0, sub_2fb460
*/
void sub_36b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b870ULL || rel >= 0x36b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b990 size=64 callers=7 calls=0
*/
void sub_36b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b990ULL || rel >= 0x36b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b9d0 size=96 callers=7 calls=0
*/
void sub_36b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b9d0ULL || rel >= 0x36ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ba30 size=48 callers=3 calls=0
*/
void sub_36ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ba30ULL || rel >= 0x36ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ba60 size=2160 callers=1 calls=7
   calls: d_fatal_error_C9999, mem_AddCleanup, mem_Alloc, mem_CreatePool, sub_36c3c0, sub_36cd20, symbol_s_already_in_table
   ref: ushort
   ref: string
   ref: cfloat
   ref: <*** start hal specific atoms ***>
   ref: InitSymbolTable -- Current scope dirty
   ref: sampler
   ref: double
   ref: ***shader***
*/
void vertexshader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ba60ULL || rel >= 0x36c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c2d0 size=160 callers=8 calls=0
*/
void sub_36c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c2d0ULL || rel >= 0x36c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c370 size=80 callers=6 calls=1
   calls: mem_Alloc
*/
void sub_36c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c370ULL || rel >= 0x36c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c3c0 size=432 callers=12 calls=2
   calls: mem_Alloc, symbol_s_already_in_table
*/
void sub_36c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c3c0ULL || rel >= 0x36c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c570 size=272 callers=6 calls=2
   calls: mem_Alloc, symbol_s_already_in_table
*/
void sub_36c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c570ULL || rel >= 0x36c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c680 size=368 callers=1 calls=3
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool
*/
void sub_36c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c680ULL || rel >= 0x36c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c7f0 size=352 callers=6 calls=3
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool
*/
void sub_36c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c7f0ULL || rel >= 0x36c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c950 size=32 callers=11 calls=0
*/
void sub_36c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c950ULL || rel >= 0x36c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c970 size=208 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_36c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c970ULL || rel >= 0x36ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ca40 size=320 callers=7 calls=1
   calls: sub_1260
   ref: symbol "%s" already in table
*/
void symbol_s_already_in_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ca40ULL || rel >= 0x36cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036cb80 size=416 callers=33 calls=3
   calls: mem_Alloc, sub_36cd20, symbol_s_already_in_table
   ref: @TMP%d
*/
void TMP_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36cb80ULL || rel >= 0x36cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036cd20 size=256 callers=37 calls=3
   calls: sub_1260, sub_2b3ae0, sub_36cd20
*/
void sub_36cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36cd20ULL || rel >= 0x36ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ce20 size=304 callers=1 calls=2
   calls: mem_Alloc, symbol_s_already_in_table
*/
void sub_36ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ce20ULL || rel >= 0x36cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036cf50 size=48 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_36cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36cf50ULL || rel >= 0x36cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036cf80 size=128 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_36cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36cf80ULL || rel >= 0x36d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d000 size=80 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_36d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d000ULL || rel >= 0x36d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d050 size=48 callers=39 calls=0
*/
void sub_36d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d050ULL || rel >= 0x36d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d080 size=144 callers=1 calls=2
   calls: mem_Alloc, sub_36d120
*/
void sub_36d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d080ULL || rel >= 0x36d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d110 size=16 callers=70 calls=0
*/
void sub_36d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d110ULL || rel >= 0x36d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d120 size=368 callers=13 calls=1
   calls: sub_36d120
*/
void sub_36d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d120ULL || rel >= 0x36d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d290 size=128 callers=4 calls=2
   calls: mem_Alloc, sub_36d120
*/
void sub_36d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d290ULL || rel >= 0x36d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d310 size=128 callers=0 calls=2
   calls: mem_Alloc, sub_36d120
*/
void sub_36d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d310ULL || rel >= 0x36d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d390 size=48 callers=3 calls=0
*/
void sub_36d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d390ULL || rel >= 0x36d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d3c0 size=32 callers=1 calls=0
*/
void sub_36d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d3c0ULL || rel >= 0x36d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d3e0 size=32 callers=28 calls=0
*/
void sub_36d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d3e0ULL || rel >= 0x36d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d400 size=48 callers=12 calls=0
*/
void sub_36d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d400ULL || rel >= 0x36d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d430 size=80 callers=1 calls=0
*/
void sub_36d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d430ULL || rel >= 0x36d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d480 size=48 callers=12 calls=0
*/
void sub_36d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d480ULL || rel >= 0x36d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d4b0 size=48 callers=52 calls=0
*/
void sub_36d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d4b0ULL || rel >= 0x36d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d4e0 size=16 callers=6 calls=0
*/
void sub_36d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d4e0ULL || rel >= 0x36d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d4f0 size=16 callers=1 calls=0
*/
void sub_36d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d4f0ULL || rel >= 0x36d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d500 size=16 callers=1 calls=0
*/
void sub_36d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d500ULL || rel >= 0x36d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d510 size=32 callers=18 calls=0
*/
void sub_36d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d510ULL || rel >= 0x36d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d530 size=32 callers=2 calls=0
*/
void sub_36d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d530ULL || rel >= 0x36d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d550 size=16 callers=24 calls=0
*/
void sub_36d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d550ULL || rel >= 0x36d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d560 size=208 callers=3 calls=0
*/
void sub_36d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d560ULL || rel >= 0x36d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d630 size=128 callers=65 calls=0
*/
void sub_36d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d630ULL || rel >= 0x36d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d6b0 size=176 callers=40 calls=0
*/
void sub_36d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d6b0ULL || rel >= 0x36d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d760 size=48 callers=9 calls=0
*/
void sub_36d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d760ULL || rel >= 0x36d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d790 size=64 callers=2 calls=1
   calls: sub_2ed320
*/
void sub_36d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d790ULL || rel >= 0x36d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d7d0 size=96 callers=1 calls=2
   calls: sub_2ed320, sub_36d830
*/
void sub_36d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d7d0ULL || rel >= 0x36d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d830 size=128 callers=8 calls=0
*/
void sub_36d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d830ULL || rel >= 0x36d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d8b0 size=48 callers=6 calls=0
*/
void sub_36d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d8b0ULL || rel >= 0x36d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d8e0 size=48 callers=16 calls=0
*/
void sub_36d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d8e0ULL || rel >= 0x36d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d910 size=48 callers=6 calls=0
*/
void sub_36d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d910ULL || rel >= 0x36d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d940 size=48 callers=5 calls=0
*/
void sub_36d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d940ULL || rel >= 0x36d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d970 size=48 callers=3 calls=0
*/
void sub_36d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d970ULL || rel >= 0x36d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d9a0 size=48 callers=56 calls=0
*/
void sub_36d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d9a0ULL || rel >= 0x36d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d9d0 size=64 callers=25 calls=0
*/
void sub_36d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d9d0ULL || rel >= 0x36da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036da10 size=32 callers=11 calls=0
*/
void sub_36da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36da10ULL || rel >= 0x36da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036da30 size=688 callers=34 calls=2
   calls: sub_340ca0, sub_36da30
*/
void sub_36da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36da30ULL || rel >= 0x36dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dce0 size=432 callers=5 calls=0
*/
void sub_36dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dce0ULL || rel >= 0x36de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036de90 size=16 callers=2 calls=0
*/
void sub_36de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36de90ULL || rel >= 0x36dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dea0 size=32 callers=1 calls=0
*/
void sub_36dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dea0ULL || rel >= 0x36dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dec0 size=32 callers=2 calls=0
*/
void sub_36dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dec0ULL || rel >= 0x36dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dee0 size=32 callers=3 calls=0
*/
void sub_36dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dee0ULL || rel >= 0x36df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036df00 size=48 callers=1 calls=0
*/
void sub_36df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36df00ULL || rel >= 0x36df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036df30 size=48 callers=2 calls=0
*/
void sub_36df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36df30ULL || rel >= 0x36df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036df60 size=32 callers=3 calls=0
*/
void sub_36df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36df60ULL || rel >= 0x36df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036df80 size=64 callers=6 calls=0
*/
void sub_36df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36df80ULL || rel >= 0x36dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dfc0 size=16 callers=1 calls=0
*/
void sub_36dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dfc0ULL || rel >= 0x36dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dfd0 size=144 callers=4 calls=1
   calls: sub_36cd20
*/
void sub_36dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dfd0ULL || rel >= 0x36e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e060 size=176 callers=3 calls=1
   calls: sub_1260
*/
void sub_36e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e060ULL || rel >= 0x36e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e110 size=96 callers=8 calls=1
   calls: sub_36cd20
*/
void sub_36e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e110ULL || rel >= 0x36e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e170 size=96 callers=1 calls=1
   calls: sub_36e060
*/
void sub_36e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e170ULL || rel >= 0x36e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e1d0 size=96 callers=2 calls=1
   calls: sub_36e060
*/
void sub_36e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e1d0ULL || rel >= 0x36e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e230 size=240 callers=87 calls=2
   calls: mem_Alloc, sub_36d120
*/
void sub_36e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e230ULL || rel >= 0x36e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e320 size=96 callers=5 calls=1
   calls: d_error_C_04d_3
   ref: type not an array
*/
void type_not_an_array(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e320ULL || rel >= 0x36e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e380 size=208 callers=3 calls=1
   calls: sub_36d120
*/
void sub_36e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e380ULL || rel >= 0x36e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e450 size=32 callers=6 calls=0
*/
void sub_36e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e450ULL || rel >= 0x36e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e470 size=336 callers=1 calls=1
   calls: sub_2dacc0
   ref: invalid character '%c' in swizzle "%s"
   ref: swizzle too long "%s"
*/
void swizzle_too_long_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e470ULL || rel >= 0x36e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e5c0 size=432 callers=1 calls=1
   calls: sub_2dacc0
   ref: invalid character '%c' in swizzle "%s"
   ref: swizzle too long "%s"
*/
void swizzle_too_long_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e5c0ULL || rel >= 0x36e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e770 size=64 callers=8 calls=0
   ref: *** bad base value ***
*/
void bad_base_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e770ULL || rel >= 0x36e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e7b0 size=48 callers=2 calls=0
   ref: *** bad samplerkind value ***
*/
void bad_samplerkind_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e7b0ULL || rel >= 0x36e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e7e0 size=48 callers=4 calls=0
   ref: *** bad samplerkind value ***
*/
void bad_samplerkind_value_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e7e0ULL || rel >= 0x36e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e810 size=240 callers=3 calls=0
*/
void sub_36e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e810ULL || rel >= 0x36e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e900 size=96 callers=5 calls=1
   calls: sub_36e960
*/
void sub_36e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e900ULL || rel >= 0x36e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e960 size=160 callers=8 calls=1
   calls: sub_36e960
*/
void sub_36e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e960ULL || rel >= 0x36ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ea00 size=176 callers=1 calls=2
   calls: sub_36e960, sub_36eab0
*/
void sub_36ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ea00ULL || rel >= 0x36eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036eab0 size=160 callers=2 calls=2
   calls: sub_36e960, sub_36eab0
*/
void sub_36eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36eab0ULL || rel >= 0x36eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036eb50 size=96 callers=1 calls=1
   calls: sub_36e960
*/
void sub_36eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36eb50ULL || rel >= 0x36ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ebb0 size=64 callers=0 calls=1
   calls: sub_2ed440
*/
void sub_36ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ebb0ULL || rel >= 0x36ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ebf0 size=256 callers=5 calls=2
   calls: sub_2ed440, sub_369ec0
*/
void sub_36ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ebf0ULL || rel >= 0x36ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ecf0 size=128 callers=1 calls=0
*/
void sub_36ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ecf0ULL || rel >= 0x36ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ed70 size=160 callers=0 calls=0
*/
void sub_36ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ed70ULL || rel >= 0x36ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ee10 size=144 callers=0 calls=0
*/
void sub_36ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ee10ULL || rel >= 0x36eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036eea0 size=336 callers=2 calls=1
   calls: sub_369ec0
*/
void sub_36eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36eea0ULL || rel >= 0x36eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036eff0 size=304 callers=1 calls=2
   calls: sub_302e20, sub_36cd20
*/
void sub_36eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36eff0ULL || rel >= 0x36f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f120 size=48 callers=1 calls=1
   calls: sub_3027f0
*/
void sub_36f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f120ULL || rel >= 0x36f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f150 size=432 callers=1 calls=3
   calls: sub_2bb020, sub_2dacc0, unpack_2uint
   ref: type mismatch with template arg #%d
   ref: non-constant template value argument #%d
*/
void type_mismatch_with_template_arg_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f150ULL || rel >= 0x36f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f300 size=128 callers=2 calls=4
   calls: s__d, sub_302da0, sub_307ee0, sub_3184b0
*/
void sub_36f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f300ULL || rel >= 0x36f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f380 size=32 callers=2 calls=0
*/
void sub_36f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f380ULL || rel >= 0x36f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f3a0 size=2000 callers=2 calls=26
   calls: bogus_code_p, interfaceNV, mem_AddCleanup, mem_Alloc, mem_CreatePool, s__d, sub_2a4ba0, sub_2bb020, sub_2dacc0, sub_2ed1a0, sub_2ed320, sub_2ed440
   ... +14 more
   ref: type mismatch with template arg #%d
   ref: %s : %s
   ref: not enough arguments for template
   ref: interface
   ref: too many arguments for template
   ref: struct
   ref: non-constant template value argument #%d
*/
void interface_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f3a0ULL || rel >= 0x36fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036fb70 size=192 callers=0 calls=2
   calls: sub_2f9ff0, sub_31b2a0
*/
void sub_36fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36fb70ULL || rel >= 0x36fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036fc30 size=704 callers=2 calls=7
   calls: nested_templates_not_supported, s__d, sub_2ed320, sub_2ed440, sub_3027f0, sub_302da0, sub_370340
*/
void sub_36fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36fc30ULL || rel >= 0x36fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036fef0 size=224 callers=3 calls=5
   calls: mem_Alloc, sub_2ed320, sub_2ed440, sub_36fef0, templates_not_supported
*/
void sub_36fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36fef0ULL || rel >= 0x36ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ffd0 size=16 callers=0 calls=0
*/
void sub_36ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ffd0ULL || rel >= 0x36ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ffe0 size=32 callers=1 calls=0
*/
void sub_36ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ffe0ULL || rel >= 0x370000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370000 size=64 callers=1 calls=1
   calls: sub_307ee0
*/
void sub_370000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370000ULL || rel >= 0x370040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370040 size=128 callers=0 calls=2
   calls: sub_2f9320, sub_317170
*/
void sub_370040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370040ULL || rel >= 0x3700c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003700c0 size=640 callers=4 calls=10
   calls: d_fatal_error_C9999, mem_Alloc, sub_2dacc0, sub_2ed320, sub_2ed440, sub_307ee0, sub_36fc30, sub_370340, sub_370820, templates_not_supported
   ref: nested templates not supported
   ref: Unexpected symbol kind %d in RemapSymbol
*/
void nested_templates_not_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3700c0ULL || rel >= 0x370340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370340 size=576 callers=7 calls=6
   calls: atomicCompSwap, nested_templates_not_supported, sub_2fade0, sub_2fb460, sub_370340, templates_not_supported
*/
void sub_370340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370340ULL || rel >= 0x370580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370580 size=672 callers=7 calls=9
   calls: sub_2dacc0, sub_2ed320, sub_2ed440, sub_317880, sub_318150, sub_318230, sub_36fef0, sub_370340, templates_not_supported
   ref: templates not supported
*/
void templates_not_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370580ULL || rel >= 0x370820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370820 size=224 callers=2 calls=5
   calls: nested_templates_not_supported, sub_2ed320, sub_2ed440, sub_3040b0, sub_370820
*/
void sub_370820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370820ULL || rel >= 0x370900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370900 size=80 callers=4 calls=1
   calls: sub_370950
*/
void sub_370900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370900ULL || rel >= 0x370950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370950 size=7488 callers=19 calls=6
   calls: mem_Alloc, sub_2f6e10, sub_2f7060, sub_370950, sub_4c0cb0, sub_4c0cd0
*/
void sub_370950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370950ULL || rel >= 0x372690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372690 size=128 callers=4 calls=1
   calls: sub_372710
*/
void sub_372690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372690ULL || rel >= 0x372710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372710 size=5696 callers=16 calls=5
   calls: mem_Alloc, sub_2f7060, sub_372710, sub_4c0cb0, sub_4c0cd0
*/
void sub_372710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372710ULL || rel >= 0x373d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373d50 size=48 callers=0 calls=0
*/
void sub_373d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373d50ULL || rel >= 0x373d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373d80 size=16 callers=0 calls=0
*/
void sub_373d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373d80ULL || rel >= 0x373d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373d90 size=32 callers=0 calls=0
*/
void sub_373d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373d90ULL || rel >= 0x373db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373db0 size=128 callers=2 calls=2
   calls: mem_Alloc, mem_CreatePool
*/
void sub_373db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373db0ULL || rel >= 0x373e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373e30 size=32 callers=2 calls=0
*/
void sub_373e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373e30ULL || rel >= 0x373e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373e50 size=16 callers=3 calls=0
*/
void sub_373e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373e50ULL || rel >= 0x373e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373e60 size=16 callers=5 calls=0
*/
void sub_373e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373e60ULL || rel >= 0x373e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373e70 size=128 callers=5 calls=1
   calls: sub_2a4dc0
*/
void sub_373e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373e70ULL || rel >= 0x373ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373ef0 size=48 callers=8 calls=0
*/
void sub_373ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373ef0ULL || rel >= 0x373f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373f20 size=32 callers=3 calls=0
*/
void sub_373f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373f20ULL || rel >= 0x373f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373f40 size=752 callers=1 calls=8
   calls: atomicCompSwap, sub_2f8290, sub_2fa960, sub_2fab10, sub_2fc060, sub_2fcb90, sub_3177b0, sub_317880
   ref: Offset
*/
void Offset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373f40ULL || rel >= 0x374230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374230 size=1904 callers=1 calls=16
   calls: Offset, TMP_d, atomicCompSwap, only_applies_to_pointers, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fab10, sub_2fbf60, sub_2fc060, sub_2fcb90
   ... +4 more
   ref: textureSize
*/
void textureSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374230ULL || rel >= 0x3749a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003749a0 size=1328 callers=1 calls=10
   calls: atomicCompSwap, sub_2f8290, sub_2fbf60, sub_2fc060, sub_2fcb90, sub_3177b0, sub_317880, sub_317960, sub_374ed0, textureSize
   ref: textureSize
*/
void textureSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3749a0ULL || rel >= 0x374ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374ed0 size=528 callers=2 calls=6
   calls: atomicCompSwap, only_applies_to_pointers, sub_2fbf60, sub_2fcb90, sub_3177b0, sub_317880
*/
void sub_374ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374ed0ULL || rel >= 0x3750e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003750e0 size=80 callers=6 calls=0
*/
void sub_3750e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3750e0ULL || rel >= 0x375130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375130 size=80 callers=3 calls=0
*/
void sub_375130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375130ULL || rel >= 0x375180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375180 size=32 callers=6 calls=0
*/
void sub_375180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375180ULL || rel >= 0x3751a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003751a0 size=16 callers=0 calls=0
*/
void sub_3751a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3751a0ULL || rel >= 0x3751b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003751b0 size=16 callers=0 calls=0
*/
void sub_3751b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3751b0ULL || rel >= 0x3751c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003751c0 size=624 callers=0 calls=2
   calls: sub_2e8be0, sub_2ed320
*/
void sub_3751c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3751c0ULL || rel >= 0x375430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375430 size=704 callers=0 calls=2
   calls: sub_2e8be0, sub_2ed320
*/
void sub_375430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375430ULL || rel >= 0x3756f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003756f0 size=208 callers=0 calls=1
   calls: sub_2e8be0
*/
void sub_3756f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3756f0ULL || rel >= 0x3757c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003757c0 size=16 callers=0 calls=0
*/
void sub_3757c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3757c0ULL || rel >= 0x3757d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003757d0 size=64 callers=0 calls=0
*/
void sub_3757d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3757d0ULL || rel >= 0x375810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375810 size=64 callers=0 calls=2
   calls: sub_112600, sub_339b0
*/
void sub_375810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375810ULL || rel >= 0x375850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375850 size=16 callers=0 calls=0
*/
void sub_375850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375850ULL || rel >= 0x375860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375860 size=32 callers=3 calls=0
*/
void sub_375860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375860ULL || rel >= 0x375880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375880 size=48 callers=5 calls=0
*/
void sub_375880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375880ULL || rel >= 0x3758b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003758b0 size=5456 callers=1 calls=31
   calls: No_semantic_for_s_arg_d, s_04d, sub_1126d0, sub_2acf90, sub_2c8360, sub_2c8720, sub_2c8c20, sub_2c8d50, sub_2c8f60, sub_2c9140, sub_2c93c0, sub_2c9400
   ... +19 more
   ref: Memory bank must be a constant
   ref: $store
   ref: Arguments to barrier builtin must be constant
   ref: Memory bank out of range
   ref: Argument %d to function %s must be a compile-time constant
   ref: _intrinsicNV()
*/
void store(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3758b0ULL || rel >= 0x376e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00376e00 size=240 callers=0 calls=2
   calls: sub_2ef620, sub_3188c0
*/
void sub_376e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x376e00ULL || rel >= 0x376ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00376ef0 size=464 callers=0 calls=8
   calls: sub_1126d0, sub_2acf90, sub_2dacc0, sub_330f0, sub_339b0, sub_33e80, sub_340a0, texlod
   ref: Component must be a constant in the range [0..3]
*/
void Component_must_be_a_constant_in_the_range_0_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x376ef0ULL || rel >= 0x3770c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003770c0 size=128 callers=0 calls=0
*/
void sub_3770c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3770c0ULL || rel >= 0x377140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377140 size=128 callers=0 calls=0
*/
void sub_377140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377140ULL || rel >= 0x3771c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003771c0 size=176 callers=1 calls=0
*/
void sub_3771c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3771c0ULL || rel >= 0x377270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377270 size=144 callers=2 calls=0
*/
void sub_377270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377270ULL || rel >= 0x377300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377300 size=16 callers=0 calls=0
*/
void sub_377300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377300ULL || rel >= 0x377310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377310 size=16 callers=0 calls=0
*/
void sub_377310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377310ULL || rel >= 0x377320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377320 size=96 callers=0 calls=1
   calls: sub_2220
*/
void sub_377320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377320ULL || rel >= 0x377380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377380 size=96 callers=0 calls=1
   calls: sub_2220
*/
void sub_377380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377380ULL || rel >= 0x3773e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003773e0 size=32 callers=0 calls=0
*/
void sub_3773e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3773e0ULL || rel >= 0x377400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377400 size=112 callers=0 calls=2
   calls: TRIANGLES_ADJACENCY_2, TRIANGLE_STRIP
*/
void sub_377400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377400ULL || rel >= 0x377470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377470 size=64 callers=3 calls=0
*/
void sub_377470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377470ULL || rel >= 0x3774b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003774b0 size=144 callers=0 calls=2
   calls: TRIANGLES_ADJACENCY, sub_377540
*/
void sub_3774b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3774b0ULL || rel >= 0x377540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377540 size=240 callers=6 calls=2
   calls: sub_2880, sub_2ed320
*/
void sub_377540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377540ULL || rel >= 0x377630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377630 size=80 callers=0 calls=1
   calls: sub_377540
*/
void sub_377630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377630ULL || rel >= 0x377680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377680 size=80 callers=0 calls=1
   calls: sub_377540
*/
void sub_377680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377680ULL || rel >= 0x3776d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003776d0 size=272 callers=0 calls=2
   calls: sub_2e8be0, sub_359610
*/
void sub_3776d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3776d0ULL || rel >= 0x3777e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003777e0 size=336 callers=0 calls=2
   calls: sub_1e40, sub_2e8be0
*/
void sub_3777e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3777e0ULL || rel >= 0x377930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377930 size=32 callers=0 calls=0
*/
void sub_377930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377930ULL || rel >= 0x377950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377950 size=528 callers=1 calls=3
   calls: glstate_vp, sub_2e0d80, sub_2e0e20
   ref: gpu_gp
   ref: LINE_OUT
   ref: gp4_1gp
   ref: gpu_vp
   ref: gp4_1vp
   ref: TRIANGLE_OUT
   ref: TRIANGLE_ADJ
   ref: POINT_OUT
*/
void TRIANGLE_OUT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377950ULL || rel >= 0x377b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377b60 size=240 callers=0 calls=3
   calls: NV_parameter_buffer_object2, mem_Alloc, sub_327740
*/
void sub_377b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377b60ULL || rel >= 0x377c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377c50 size=352 callers=0 calls=3
   calls: NV_parameter_buffer_object2, mem_Alloc, sub_32ba60
*/
void sub_377c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377c50ULL || rel >= 0x377db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377db0 size=208 callers=0 calls=3
   calls: NV_parameter_buffer_object2, mem_Alloc, sub_327740
*/
void sub_377db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377db0ULL || rel >= 0x377e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377e80 size=256 callers=0 calls=3
   calls: NV_parameter_buffer_object2, mem_Alloc, sub_327740
*/
void sub_377e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377e80ULL || rel >= 0x377f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377f80 size=352 callers=0 calls=3
   calls: NV_parameter_buffer_object2, mem_Alloc, sub_32ba60
*/
void sub_377f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377f80ULL || rel >= 0x3780e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003780e0 size=224 callers=0 calls=3
   calls: NV_parameter_buffer_object2, mem_Alloc, sub_327740
*/
void sub_3780e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3780e0ULL || rel >= 0x3781c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003781c0 size=112 callers=0 calls=2
   calls: sub_2a42a0, sub_2a49c0
   ref: BUFFER[%d]
*/
void BUFFER_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3781c0ULL || rel >= 0x378230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378230 size=912 callers=6 calls=4
   calls: mem_Alloc, sub_3990, sub_3c00, sub_3cb0
   ref: fastimul
   ref: NV_parameter_buffer_object2
   ref: assume integer multiply inputs have at most 24 significant bits
   ref: 3.4.0.1
   ref: binding
   ref: NVIDIA Corporation
*/
void NV_parameter_buffer_object2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378230ULL || rel >= 0x3785c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003785c0 size=176 callers=0 calls=1
   calls: sub_3750e0
*/
void sub_3785c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3785c0ULL || rel >= 0x378670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378670 size=32 callers=0 calls=0
*/
void sub_378670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378670ULL || rel >= 0x378690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378690 size=16 callers=0 calls=0
*/
void sub_378690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378690ULL || rel >= 0x3786a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003786a0 size=64 callers=0 calls=1
   calls: sub_2c6e40
   ref: gl_Layer=gl_LayerIn
   ref: gl_ViewportIndex=gl_ViewportIndexIn
*/
void gl_Layer_gl_LayerIn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3786a0ULL || rel >= 0x3786e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003786e0 size=112 callers=0 calls=0
*/
void sub_3786e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3786e0ULL || rel >= 0x378750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378750 size=160 callers=0 calls=0
*/
void sub_378750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378750ULL || rel >= 0x3787f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003787f0 size=160 callers=0 calls=0
*/
void sub_3787f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3787f0ULL || rel >= 0x378890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378890 size=80 callers=0 calls=0
*/
void sub_378890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378890ULL || rel >= 0x3788e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003788e0 size=16 callers=0 calls=0
*/
void sub_3788e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3788e0ULL || rel >= 0x3788f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003788f0 size=224 callers=0 calls=2
   calls: sub_3750e0, sub_375130
*/
void sub_3788f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3788f0ULL || rel >= 0x3789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003789d0 size=16 callers=0 calls=0
*/
void sub_3789d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3789d0ULL || rel >= 0x3789e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003789e0 size=112 callers=0 calls=0
*/
void sub_3789e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3789e0ULL || rel >= 0x378a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378a50 size=80 callers=0 calls=1
   calls: sub_2c6e40
   ref: gl_SamplePosition=gl_SamplePositions[gl_SampleID]
   ref: gl_Layer=gl_LayerIn
   ref: gl_ViewportIndex=gl_ViewportIndexIn
*/
void gl_Layer_gl_LayerIn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378a50ULL || rel >= 0x378aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378aa0 size=176 callers=0 calls=1
   calls: sub_3750e0
*/
void sub_378aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378aa0ULL || rel >= 0x378b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378b50 size=160 callers=0 calls=0
*/
void sub_378b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378b50ULL || rel >= 0x378bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378bf0 size=16 callers=0 calls=0
*/
void sub_378bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378bf0ULL || rel >= 0x378c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378c00 size=16 callers=0 calls=0
*/
void sub_378c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378c00ULL || rel >= 0x378c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378c10 size=208 callers=0 calls=2
   calls: sub_3750e0, sub_375130
*/
void sub_378c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378c10ULL || rel >= 0x378ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378ce0 size=192 callers=0 calls=0
*/
void sub_378ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378ce0ULL || rel >= 0x378da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378da0 size=16 callers=0 calls=0
*/
void sub_378da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378da0ULL || rel >= 0x378db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378db0 size=176 callers=0 calls=1
   calls: sub_3750e0
*/
void sub_378db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378db0ULL || rel >= 0x378e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378e60 size=32 callers=0 calls=0
*/
void sub_378e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378e60ULL || rel >= 0x378e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378e80 size=16 callers=0 calls=0
*/
void sub_378e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378e80ULL || rel >= 0x378e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378e90 size=208 callers=0 calls=2
   calls: sub_3750e0, sub_375130
*/
void sub_378e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378e90ULL || rel >= 0x378f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378f60 size=16 callers=0 calls=0
*/
void sub_378f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378f60ULL || rel >= 0x378f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378f70 size=640 callers=1 calls=3
   calls: glstate_vp, sub_2e0d80, sub_2e0e60
   ref: gp5tep
   ref: gp5tcp
*/
void gp5tep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378f70ULL || rel >= 0x3791f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003791f0 size=272 callers=0 calls=3
   calls: NV_shader_atomic_float64, mem_Alloc, sub_327740
*/
void sub_3791f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3791f0ULL || rel >= 0x379300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379300 size=432 callers=0 calls=3
   calls: NV_shader_atomic_float64, mem_Alloc, sub_32ba60
*/
void sub_379300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379300ULL || rel >= 0x3794b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003794b0 size=496 callers=0 calls=5
   calls: NV_shader_atomic_float64, mem_Alloc, sub_327740, sub_3990, sub_3dc0
   ref: Set control patch input size
   ref: OutputPatchSize
   ref: Set control patch output size
   ref: InputPatchSize
*/
void OutputPatchSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3794b0ULL || rel >= 0x3796a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003796a0 size=432 callers=0 calls=5
   calls: NV_shader_atomic_float64, mem_Alloc, sub_327740, sub_3990, sub_3dc0
   ref: Set control patch input size
   ref: OutputPatchSize
   ref: Set control patch output size
   ref: InputPatchSize
*/
void OutputPatchSize_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3796a0ULL || rel >= 0x379850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379850 size=224 callers=0 calls=3
   calls: NV_shader_atomic_float64, mem_Alloc, sub_327740
*/
void sub_379850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379850ULL || rel >= 0x379930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379930 size=288 callers=0 calls=3
   calls: NV_shader_atomic_float64, mem_Alloc, sub_32d750
*/
void sub_379930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379930ULL || rel >= 0x379a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379a50 size=384 callers=0 calls=0
*/
void sub_379a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379a50ULL || rel >= 0x379bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379bd0 size=128 callers=0 calls=0
*/
void sub_379bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379bd0ULL || rel >= 0x379c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379c50 size=1520 callers=0 calls=5
   calls: sub_2b7e60, sub_2dacc0, sub_2db4f0, sub_2db630, sub_3608f0
   ref: invalid value '%d' for layout qualifier '%s'
   ref: layout qualifier '%s' conflicts with previous declaration
   ref: GL_KHR_blend_equation_advanced
   ref: KHR_blend_equation_advanced
   ref: KHR_blend_equation_advanced=%d
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: unknown layout specifier '%s'
   ref: EXT_post_depth_coverage
*/
void NV_early_fragment_tests(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379c50ULL || rel >= 0x37a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a240 size=368 callers=0 calls=7
   calls: sub_2220, sub_2eac60, sub_3608f0, sub_367700, sub_36c570, sub_36cd20, sub_36cf80
   ref: $read-%s
*/
void read_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a240ULL || rel >= 0x37a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a3b0 size=96 callers=0 calls=1
   calls: sub_339b0
*/
void sub_37a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a3b0ULL || rel >= 0x37a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a410 size=192 callers=2 calls=5
   calls: sub_338f0, sub_33960, sub_339b0, sub_33f40, sub_34550
*/
void sub_37a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a410ULL || rel >= 0x37a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a4d0 size=1200 callers=3 calls=23
   calls: descriptor, sub_2c8c20, sub_2c8e00, sub_2c8f60, sub_2c9060, sub_2c93c0, sub_2c93e0, sub_330f0, sub_33140, sub_338f0, sub_33910, sub_33960
   ... +11 more
*/
void sub_37a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a4d0ULL || rel >= 0x37a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a980 size=672 callers=3 calls=12
   calls: BUFFER_d_d_3, TMP_d_2, s_04d, sub_2220, sub_2eac60, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_35cbd0, sub_3608f0, sub_36d290, sub_36e230
   ref: $descriptor
   ref: BUFFER[%d][%d]
   ref: $descriptorArr
*/
void descriptor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a980ULL || rel >= 0x37ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ac20 size=560 callers=0 calls=14
   calls: descriptor, sub_1126d0, sub_2c94e0, sub_2c9a90, sub_330f0, sub_33140, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33e80, sub_340a0
   ... +2 more
*/
void sub_37ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ac20ULL || rel >= 0x37ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ae50 size=560 callers=0 calls=13
   calls: descriptor, sub_2c94e0, sub_2c9a90, sub_330f0, sub_33140, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33e80, sub_340a0, sub_37a410
   ... +1 more
*/
void sub_37ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ae50ULL || rel >= 0x37b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b080 size=80 callers=0 calls=1
   calls: sub_2c8360
*/
void sub_37b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b080ULL || rel >= 0x37b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b0d0 size=272 callers=0 calls=10
   calls: s_04d, sub_2c94e0, sub_2cb650, sub_2cdcc0, sub_330f0, sub_339b0, sub_33e80, sub_340a0, sub_367630, sub_36e230
   ref: $storeSSBO
*/
void storeSSBO(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b0d0ULL || rel >= 0x37b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b1e0 size=2928 callers=1 calls=26
   calls: s_04d, store, sub_1126d0, sub_2c8720, sub_2c8d50, sub_2c9140, sub_2c9400, sub_2cb650, sub_2cb970, sub_2cdcc0, sub_2db630, sub_330f0
   ... +14 more
   ref: $store
   ref: $fsib/fsie
   ref: function "%s" not supported in this profile
   ref: $membar
*/
void fsie(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b1e0ULL || rel >= 0x37bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037bd50 size=1824 callers=6 calls=4
   calls: mem_Alloc, sub_3990, sub_3c00, sub_3cb0
   ref: fastimul
   ref: NV_shader_atomic_float
   ref: maxSamples
   ref: NV_parameter_buffer_object2
   ref: NV_bindless_texture
   ref: NV_sample_mask_override_coverage
   ref: assume integer multiply inputs have at most 24 significant bits
   ref: NV_shader_atomic_float64
*/
void NV_shader_atomic_float64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37bd50ULL || rel >= 0x37c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c470 size=192 callers=0 calls=2
   calls: sub_2220, sub_37d290
*/
void sub_37c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c470ULL || rel >= 0x37c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c530 size=192 callers=0 calls=2
   calls: sub_2220, sub_37d290
*/
void sub_37c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c530ULL || rel >= 0x37c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c5f0 size=32 callers=0 calls=0
*/
void sub_37c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c5f0ULL || rel >= 0x37c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c610 size=64 callers=0 calls=0
*/
void sub_37c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c610ULL || rel >= 0x37c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c650 size=176 callers=0 calls=1
   calls: sub_375180
*/
void sub_37c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c650ULL || rel >= 0x37c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c700 size=128 callers=0 calls=0
*/
void sub_37c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c700ULL || rel >= 0x37c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c780 size=32 callers=0 calls=0
*/
void sub_37c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c780ULL || rel >= 0x37c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c7a0 size=96 callers=0 calls=1
   calls: sub_2c6e40
   ref: gl_SamplePositionOES=gl_SamplePositions[gl_SampleID]
   ref: gl_SamplePosition=gl_SamplePositions[gl_SampleID]
   ref: gl_Layer=gl_LayerIn
   ref: gl_ViewportIndex=gl_ViewportIndexIn
*/
void gl_Layer_gl_LayerIn_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c7a0ULL || rel >= 0x37c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c800 size=96 callers=0 calls=1
   calls: sub_377270
*/
void sub_37c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c800ULL || rel >= 0x37c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c860 size=48 callers=0 calls=0
*/
void sub_37c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c860ULL || rel >= 0x37c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c890 size=224 callers=0 calls=8
   calls: sub_1126d0, sub_2c8e00, sub_330f0, sub_33910, sub_33960, sub_339b0, sub_33e80, sub_340a0
*/
void sub_37c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c890ULL || rel >= 0x37c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c970 size=160 callers=0 calls=5
   calls: sub_1126d0, sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_37c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c970ULL || rel >= 0x37ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ca10 size=64 callers=0 calls=2
   calls: sub_112600, sub_339b0
*/
void sub_37ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ca10ULL || rel >= 0x37ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ca50 size=384 callers=0 calls=0
*/
void sub_37ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ca50ULL || rel >= 0x37cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cbd0 size=368 callers=0 calls=0
*/
void sub_37cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cbd0ULL || rel >= 0x37cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cd40 size=160 callers=0 calls=2
   calls: sub_2a42a0, sub_2a49c0
   ref: BUFFER[%d]
*/
void BUFFER_d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cd40ULL || rel >= 0x37cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cde0 size=176 callers=0 calls=3
   calls: non_constant_expression_for_array_size, sub_2db630, sub_306070
   ref: samplers
   ref: profile doesn't support more than %d %s
*/
void samplers_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cde0ULL || rel >= 0x37ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ce90 size=96 callers=0 calls=0
   ref: SBO_BUFFER[%d]
   ref: BINDLESS_SBUFFER
*/
void BINDLESS_SBUFFER_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ce90ULL || rel >= 0x37cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cef0 size=16 callers=0 calls=0
*/
void sub_37cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cef0ULL || rel >= 0x37cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cf00 size=16 callers=0 calls=0
*/
void sub_37cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cf00ULL || rel >= 0x37cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cf10 size=16 callers=0 calls=0
*/
void sub_37cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cf10ULL || rel >= 0x37cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cf20 size=112 callers=0 calls=0
*/
void sub_37cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cf20ULL || rel >= 0x37cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cf90 size=16 callers=0 calls=0
*/
void sub_37cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cf90ULL || rel >= 0x37cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cfa0 size=80 callers=0 calls=3
   calls: sub_1126d0, sub_330f0, sub_339b0
*/
void sub_37cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cfa0ULL || rel >= 0x37cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cff0 size=288 callers=0 calls=0
*/
void sub_37cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cff0ULL || rel >= 0x37d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d110 size=288 callers=0 calls=0
*/
void sub_37d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d110ULL || rel >= 0x37d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d230 size=16 callers=0 calls=0
*/
void sub_37d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d230ULL || rel >= 0x37d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d240 size=16 callers=0 calls=0
*/
void sub_37d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d240ULL || rel >= 0x37d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d250 size=16 callers=0 calls=0
*/
void sub_37d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d250ULL || rel >= 0x37d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d260 size=16 callers=0 calls=0
*/
void sub_37d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d260ULL || rel >= 0x37d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d270 size=16 callers=0 calls=0
*/
void sub_37d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d270ULL || rel >= 0x37d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d280 size=16 callers=0 calls=0
*/
void sub_37d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d280ULL || rel >= 0x37d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d290 size=432 callers=4 calls=5
   calls: sub_2debb0, sub_2dfed0, sub_2dff70, sub_37d290, sub_37d440
*/
void sub_37d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d290ULL || rel >= 0x37d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d440 size=224 callers=2 calls=1
   calls: sub_37d440
*/
void sub_37d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d440ULL || rel >= 0x37d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d520 size=320 callers=0 calls=4
   calls: NOPERSPECTIVE_3, VERTEX, sub_2dacc0, unnamed_22
   ref: STREAM
   ref: %s semantic attribute "%s" has too big of a numeric index (%d)
*/
void STREAM_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d520ULL || rel >= 0x37d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d660 size=224 callers=0 calls=3
   calls: sub_2dacc0, sub_2e0010, unnamed_22
   ref: STREAM
   ref: %s semantic attribute "%s" has too big of a numeric index (%d)
*/
void STREAM_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d660ULL || rel >= 0x37d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d740 size=16 callers=0 calls=0
*/
void sub_37d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d740ULL || rel >= 0x37d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d750 size=32 callers=0 calls=0
*/
void sub_37d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d750ULL || rel >= 0x37d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d770 size=192 callers=0 calls=0
*/
void sub_37d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d770ULL || rel >= 0x37d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d830 size=208 callers=0 calls=1
   calls: sub_375180
*/
void sub_37d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d830ULL || rel >= 0x37d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d900 size=16 callers=0 calls=0
*/
void sub_37d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d900ULL || rel >= 0x37d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d910 size=144 callers=0 calls=0
*/
void sub_37d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d910ULL || rel >= 0x37d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d9a0 size=96 callers=0 calls=0
*/
void sub_37d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d9a0ULL || rel >= 0x37da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037da00 size=256 callers=0 calls=0
*/
void sub_37da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37da00ULL || rel >= 0x37db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037db00 size=32 callers=0 calls=0
*/
void sub_37db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37db00ULL || rel >= 0x37db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037db20 size=16 callers=0 calls=0
*/
void sub_37db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37db20ULL || rel >= 0x37db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037db30 size=16 callers=0 calls=0
*/
void sub_37db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37db30ULL || rel >= 0x37db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037db40 size=160 callers=0 calls=0
*/
void sub_37db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37db40ULL || rel >= 0x37dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037dbe0 size=128 callers=0 calls=0
*/
void sub_37dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37dbe0ULL || rel >= 0x37dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037dc60 size=224 callers=0 calls=1
   calls: sub_375180
*/
void sub_37dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37dc60ULL || rel >= 0x37dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037dd40 size=176 callers=0 calls=2
   calls: sub_377470, sub_377540
*/
void sub_37dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37dd40ULL || rel >= 0x37ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ddf0 size=128 callers=0 calls=0
*/
void sub_37ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ddf0ULL || rel >= 0x37de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037de70 size=16 callers=0 calls=0
*/
void sub_37de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37de70ULL || rel >= 0x37de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037de80 size=16 callers=0 calls=0
*/
void sub_37de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37de80ULL || rel >= 0x37de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037de90 size=240 callers=0 calls=0
*/
void sub_37de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37de90ULL || rel >= 0x37df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037df80 size=112 callers=0 calls=0
*/
void sub_37df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37df80ULL || rel >= 0x37dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037dff0 size=208 callers=0 calls=1
   calls: sub_375180
*/
void sub_37dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37dff0ULL || rel >= 0x37e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e0c0 size=112 callers=0 calls=2
   calls: sub_377470, sub_377540
*/
void sub_37e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e0c0ULL || rel >= 0x37e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e130 size=128 callers=0 calls=0
*/
void sub_37e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e130ULL || rel >= 0x37e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e1b0 size=32 callers=0 calls=0
*/
void sub_37e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e1b0ULL || rel >= 0x37e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e1d0 size=176 callers=0 calls=1
   calls: sub_375180
*/
void sub_37e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e1d0ULL || rel >= 0x37e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e280 size=112 callers=0 calls=0
*/
void sub_37e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e280ULL || rel >= 0x37e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e2f0 size=16 callers=0 calls=0
*/
void sub_37e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e2f0ULL || rel >= 0x37e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e300 size=32 callers=0 calls=0
*/
void sub_37e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e300ULL || rel >= 0x37e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e320 size=672 callers=0 calls=20
   calls: bb_controlflow_3, fsie, sub_2c8d50, sub_2c9140, sub_2cb580, sub_2cb970, sub_330f0, sub_33140, sub_33910, sub_33960, sub_339b0, sub_339f0
   ... +8 more
*/
void sub_37e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e320ULL || rel >= 0x37e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e5c0 size=112 callers=0 calls=0
*/
void sub_37e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e5c0ULL || rel >= 0x37e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e630 size=96 callers=0 calls=1
   calls: sub_3771c0
*/
void sub_37e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e630ULL || rel >= 0x37e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e690 size=96 callers=0 calls=1
   calls: sub_377270
*/
void sub_37e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e690ULL || rel >= 0x37e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e6f0 size=32 callers=0 calls=0
*/
void sub_37e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e6f0ULL || rel >= 0x37e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e710 size=48 callers=0 calls=0
*/
void sub_37e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e710ULL || rel >= 0x37e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e740 size=32 callers=0 calls=0
*/
void sub_37e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e740ULL || rel >= 0x37e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e760 size=160 callers=0 calls=1
   calls: sub_375180
*/
void sub_37e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e760ULL || rel >= 0x37e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e800 size=96 callers=0 calls=2
   calls: sub_377470, sub_377540
*/
void sub_37e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e800ULL || rel >= 0x37e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e860 size=112 callers=0 calls=0
*/
void sub_37e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e860ULL || rel >= 0x37e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e8d0 size=48 callers=0 calls=0
*/
void sub_37e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e8d0ULL || rel >= 0x37e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e900 size=464 callers=2 calls=6
   calls: BUFFER_d_d_3, sub_1630, sub_3608f0, sub_3670, sub_367940, sub_36d560
   ref: $descriptor_[%d][%d]
   ref: BUFFER[%d][%d]
*/
void BUFFER_d_d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e900ULL || rel >= 0x37ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ead0 size=1216 callers=1 calls=0
   ref: packSnorm2x16
   ref: faceforward
   ref: length
   ref: unpackUnorm2x16
   ref: modfstruct
   ref: packUnorm4x8
   ref: unpackHalf2x16
   ref: inversesqrt
*/
void interpolateAtCentroid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ead0ULL || rel >= 0x37ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ef90 size=1216 callers=4 calls=1
   calls: d_warning_C_04d_2
   ref: atomicStore
   ref: BitCount
   ref: bitCount
   ref: subgroupInverseBallot
   ref: transpose
   ref: usubBorrow
   ref: greaterThan
   ref: allInvocationsEqualARB
*/
void bitfieldReverse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ef90ULL || rel >= 0x37f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f450 size=768 callers=3 calls=1
   calls: d_warning_C_04d_2
   ref: gl_ClipDistance
   ref: gl_LocalInvocationIndex
   ref: gl_DrawIDARB
   ref: gl_PointCoord
   ref: gl_SubGroupLeMaskARB
   ref: gl_ViewIndex
   ref: gl_FragFullyCoveredNV
   ref: gl_Layer
*/
void gl_LocalInvocationIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f450ULL || rel >= 0x37f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f750 size=624 callers=2 calls=0
   ref: SaturatedConversion
   ref: Offset
   ref: Centroid
   ref: ViewportRelative
   ref: Constant
   ref: Coherent
   ref: Uniform
   ref: Sample
*/
void InputAttachmentIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f750ULL || rel >= 0x37f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f9c0 size=1040 callers=35 calls=4
   calls: InputAttachmentIndex, d_warning_C_04d_2, gl_LocalInvocationIndex, sub_309440
   ref: kernel decoration '%s'
   ref: SPIR-V: Unsupported %s
   ref: decoration '%s'
   ref: SPIR-V: Invalid %s
*/
void decoration_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f9c0ULL || rel >= 0x37fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037fdd0 size=304 callers=1 calls=5
   calls: sub_359610, sub_359640, sub_359670, sub_359700, sub_3608f0
*/
void sub_37fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37fdd0ULL || rel >= 0x37ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ff00 size=112 callers=0 calls=1
   calls: sub_301260
*/
void sub_37ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ff00ULL || rel >= 0x37ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ff70 size=48 callers=0 calls=0
*/
void sub_37ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ff70ULL || rel >= 0x37ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ffa0 size=240 callers=1 calls=3
   calls: sub_306070, sub_31b710, sub_31b820
*/
void sub_37ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ffa0ULL || rel >= 0x380090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380090 size=1008 callers=3 calls=8
   calls: decoration_s, input_attachment_index, sub_2f9880, sub_31b710, sub_31b820, sub_37ffa0, sub_380090, sub_380480
*/
void sub_380090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380090ULL || rel >= 0x380480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380480 size=192 callers=4 calls=3
   calls: sub_307630, sub_31b710, sub_380480
*/
void sub_380480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380480ULL || rel >= 0x380540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380540 size=304 callers=2 calls=6
   calls: d_warning_C_04d_2, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_3608f0
   ref: SPIR-V: Invalid %s
   ref: component value
*/
void component_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380540ULL || rel >= 0x380670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380670 size=1520 callers=2 calls=13
   calls: atomicCompSwap, sub_2ed440, sub_2f8290, sub_2fc060, sub_306070, sub_3177b0, sub_3188a0, sub_3188c0, sub_31b710, sub_31b820, sub_347090, sub_380c60
   ... +1 more
*/
void sub_380670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380670ULL || rel >= 0x380c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380c60 size=512 callers=5 calls=5
   calls: sub_306070, sub_3188c0, sub_31b710, sub_31b820, sub_380c60
*/
void sub_380c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380c60ULL || rel >= 0x380e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380e60 size=496 callers=0 calls=12
   calls: atomicCompSwap, sub_2fa960, sub_2fab10, sub_2fade0, sub_2fc060, sub_2fcb90, sub_2fce70, sub_3177b0, sub_31b710, sub_31b820, sub_3608f0, sub_380480
   ref: transpose
*/
void transpose(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380e60ULL || rel >= 0x381050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381050 size=704 callers=2 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2f9880, sub_2fc060, sub_3177b0, sub_380c60
*/
void sub_381050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381050ULL || rel >= 0x381310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381310 size=528 callers=0 calls=10
   calls: atomicCompSwap, sub_2f7fb0, sub_2f9880, sub_2fc060, sub_2fcb90, sub_3177b0, sub_31b710, sub_31b820, sub_3608f0, sub_381050
   ref: transpose
*/
void transpose_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381310ULL || rel >= 0x381520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381520 size=1328 callers=3 calls=13
   calls: TMP_d, atomicCompSwap, only_applies_to_pointers, sub_2f7fb0, sub_2f8290, sub_2fade0, sub_2fc060, sub_2fce70, sub_306070, sub_3177b0, sub_31b710, sub_31b820
   ... +1 more
*/
void sub_381520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381520ULL || rel >= 0x381a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381a50 size=1248 callers=3 calls=12
   calls: TMP_d, atomicCompSwap, only_applies_to_pointers, sub_2f7fb0, sub_2f8290, sub_2fc060, sub_306070, sub_3177b0, sub_31b710, sub_31b820, sub_381050, sub_381a50
*/
void sub_381a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381a50ULL || rel >= 0x381f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381f30 size=976 callers=1 calls=10
   calls: atomicCompSwap, decoration_s, sub_2ef040, sub_2f8290, sub_2fab10, sub_2fc060, sub_306070, sub_3177b0, sub_3188a0, sub_388b50
*/
void sub_381f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381f30ULL || rel >= 0x382300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382300 size=528 callers=3 calls=6
   calls: sub_2f9880, sub_2fab10, sub_3177b0, sub_317880, sub_3188c0, sub_31b820
*/
void sub_382300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382300ULL || rel >= 0x382510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382510 size=640 callers=1 calls=11
   calls: sub_2ed320, sub_2ed440, sub_2edb70, sub_2f6e10, sub_2f7fb0, sub_2f9880, sub_2facd0, sub_2fade0, sub_2fc060, sub_3188c0, sub_382790
*/
void sub_382510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382510ULL || rel >= 0x382790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382790 size=1392 callers=8 calls=8
   calls: sub_2ed320, sub_2f77f0, sub_2f7880, sub_2f7fb0, sub_2facd0, sub_382510, sub_382790, sub_382d00
*/
void sub_382790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382790ULL || rel >= 0x382d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382d00 size=656 callers=1 calls=5
   calls: sub_2ed320, sub_2ed440, sub_2edb70, sub_2f7fb0, sub_2facd0
*/
void sub_382d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382d00ULL || rel >= 0x382f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382f90 size=464 callers=1 calls=3
   calls: d_warning_C_04d_2, sub_2a4d70, sub_3608f0
   ref: version number
   ref: SPIR-V: Invalid %s
   ref: SPIR-V: Invalid magic number
   ref: __defaultname.%d
*/
void version_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382f90ULL || rel >= 0x383160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383160 size=192 callers=2 calls=4
   calls: s__d, sub_2f9880, sub_307ee0, sub_3608f0
   ref: @TMP_%d
*/
void TMP__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383160ULL || rel >= 0x383220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383220 size=368 callers=1 calls=2
   calls: GL_ARB_shader_subroutine, sub_3608f0
   ref: KHR_shader_subgroup_arithmetic
   ref: KHR_shader_subgroup_basic
   ref: KHR_shader_subgroup_ballot
   ref: KHR_shader_subgroup_shuffle
   ref: KHR_shader_subgroup_clustered
   ref: ARB_shader_ballot
   ref: KHR_shader_subgroup_shuffle_relative
   ref: ARB_shader_group_vote
*/
void KHR_shader_subgroup_vote(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383220ULL || rel >= 0x383390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383390 size=1440 callers=1 calls=8
   calls: d_warning_C_04d_2, interfaceNV_2, output_layout_qualifiers_supported_above_GL_version_d, struct_fn, sub_302f30, sub_309440, sub_3134b0, sub_315700
   ref: SPIR-V: Invalid %s
   ref: execution mode
*/
void execution_mode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383390ULL || rel >= 0x383930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383930 size=432 callers=1 calls=9
   calls: d_warning_C_04d_2, sub_2a4d70, sub_3595b0, sub_3595e0, sub_359610, sub_359640, sub_359670, sub_359700, sub_3608f0
   ref: %s_unused
   ref: SPIR-V: Invalid %s
   ref: execution model
*/
void execution_model(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383930ULL || rel >= 0x383ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383ae0 size=400 callers=3 calls=3
   calls: sub_2a4d70, sub_2a4dc0, sub_3608f0
*/
void sub_383ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383ae0ULL || rel >= 0x383c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383c70 size=384 callers=2 calls=4
   calls: gl_LocalInvocationIndex, sub_2a4d70, sub_2a4dc0, sub_3608f0
*/
void sub_383c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383c70ULL || rel >= 0x383df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383df0 size=752 callers=2 calls=5
   calls: gl_LocalInvocationIndex, sub_2a4d70, sub_2a4dc0, sub_3608f0, sub_383ae0
   ref: gl_PerVertex
*/
void gl_PerVertex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383df0ULL || rel >= 0x3840e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003840e0 size=192 callers=2 calls=2
   calls: sub_2f9880, sub_3840e0
*/
void sub_3840e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3840e0ULL || rel >= 0x3841a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003841a0 size=848 callers=1 calls=5
   calls: OES_texture_storage_multisample_2d_array_2, sub_2f9880, sub_303050, sub_3188c0, sub_3608f0
   ref: %simage%s%s%s
   ref: %ssampler%s%s%s%s
   ref: %ssubpassInput%s
   ref: _bindless
   ref: __%stexture%s%s%s%s_VK
   ref: 2DRect
   ref: Buffer
   ref: Shadow
*/
void bindless(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3841a0ULL || rel >= 0x3844f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003844f0 size=2560 callers=1 calls=27
   calls: d_warning_C_04d_2, decoration_s, interface, interfaceNV_2, mem_Alloc, struct_fn, sub_2a4d70, sub_2a4dc0, sub_2f8290, sub_2f9880, sub_3027f0, sub_3029c0
   ... +15 more
   ref: integer width
   ref: float width
   ref: SPIR-V: Invalid %s
   ref: _struct%d_member%d
   ref: storage class
   ref: __empty_mem%d
*/
void storage_class(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3844f0ULL || rel >= 0x384ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384ef0 size=1856 callers=2 calls=25
   calls: d_warning_C_04d_2, decoration_s, interfaceNV_2, mem_Alloc, struct_fn, sub_2ef1b0, sub_2f6e10, sub_2f8290, sub_2f97b0, sub_2f9880, sub_2fa960, sub_2fab10
   ... +13 more
   ref: @TMP_struct%d
   ref: SPIR-V: Invalid %s
   ref: constant
*/
void constant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384ef0ULL || rel >= 0x385630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385630 size=1296 callers=2 calls=17
   calls: TMP__d_2, TMP__d_3, TMP__d_4, TMP__d_5, TMP__d_6, TMP__d_7, TMP__d_8, d_warning_C_04d_2, matrixCompMult, mem_Alloc, sub_2bb020, sub_2f6e10
   ... +5 more
   ref: SPIR-V: Invalid %s
   ref: operation in OpSpecConstantOp
*/
void SPIR_V_Invalid_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385630ULL || rel >= 0x385b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385b40 size=640 callers=3 calls=15
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_306070, sub_307ee0, sub_3188a0, sub_346fd0, sub_347090, sub_3608f0
   ... +3 more
   ref: @TMP_%d
*/
void TMP__d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385b40ULL || rel >= 0x385dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385dc0 size=672 callers=2 calls=16
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fade0, sub_306070, sub_307ee0, sub_3188a0, sub_3188c0, sub_31bef0
   ... +4 more
   ref: @TMP_%d
*/
void TMP__d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385dc0ULL || rel >= 0x386060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386060 size=1840 callers=3 calls=20
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2b8230, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_307ee0, sub_3188a0, sub_3188c0
   ... +8 more
   ref: matrixCompMult
   ref: @TMP_%d
*/
void matrixCompMult(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386060ULL || rel >= 0x386790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386790 size=1440 callers=2 calls=21
   calls: atomicCompSwap, component_value, decoration_s, mem_Alloc, only_applies_to_pointers, s__d, sub_2bb020, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fab10, sub_2fbdc0
   ... +9 more
   ref: @TMP_%d
*/
void TMP__d_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386790ULL || rel >= 0x386d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386d30 size=1104 callers=2 calls=17
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fb000, sub_2fc060, sub_306070, sub_307ee0, sub_3177b0, sub_3188a0
   ... +5 more
   ref: @TMP_%d
*/
void TMP__d_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386d30ULL || rel >= 0x387180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387180 size=800 callers=2 calls=15
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_306070, sub_307ee0, sub_3188a0, sub_31bef0, sub_346fd0, sub_347090
   ... +3 more
   ref: @TMP_%d
*/
void TMP__d_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387180ULL || rel >= 0x3874a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003874a0 size=960 callers=2 calls=15
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fb460, sub_306070, sub_307ee0, sub_3188a0, sub_31bef0, sub_346fd0
   ... +3 more
   ref: @TMP_%d
*/
void TMP__d_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3874a0ULL || rel >= 0x387860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387860 size=1584 callers=2 calls=20
   calls: atomicCompSwap, bitfieldReverse, decoration_s, mem_Alloc, s__d, sub_2a4d70, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_307ee0, sub_3188a0
   ... +8 more
   ref: @TMP_%d
*/
void TMP__d_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387860ULL || rel >= 0x387e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387e90 size=544 callers=1 calls=6
   calls: decoration_s, invariant, sub_2f9880, sub_307ee0, sub_31bef0, sub_3608f0
*/
void sub_387e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387e90ULL || rel >= 0x3880b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003880b0 size=336 callers=1 calls=5
   calls: d_warning_C_04d_2, sub_2a4d70, sub_304030, sub_387e90, sub_388200
   ref: SPIR-V: Unexpected end of SPIR-V module
*/
void SPIR_V_Unexpected_end_of_SPIR_V_module(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3880b0ULL || rel >= 0x388200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388200 size=240 callers=4 calls=2
   calls: mem_Alloc, sub_3608f0
*/
void sub_388200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388200ULL || rel >= 0x3882f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003882f0 size=656 callers=1 calls=9
   calls: SPIR_V_Unexpected_end_of_SPIR_V_module, decoration_s, fn_s_2, overload, sub_2f9880, sub_307ee0, sub_31bef0, sub_3608f0, uniform
*/
void sub_3882f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3882f0ULL || rel >= 0x388580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388580 size=1488 callers=1 calls=18
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2a4d70, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_307ee0, sub_3188a0, sub_3188c0
   ... +6 more
   ref: modfstruct
   ref: @TMP_%d
   ref: frexpstruct
*/
void frexpstruct(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388580ULL || rel >= 0x388b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388b50 size=176 callers=97 calls=3
   calls: sub_2b8720, sub_2fb000, undefined_variable_s
*/
void sub_388b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388b50ULL || rel >= 0x388c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388c00 size=1200 callers=1 calls=22
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2ed320, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2fb000, sub_2fc060, sub_306070, sub_307ee0
   ... +10 more
   ref: @TMP_%d
*/
void TMP__d_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388c00ULL || rel >= 0x3890b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003890b0 size=1088 callers=1 calls=19
   calls: atomicCompSwap, mem_Alloc, sub_2b8230, sub_2b8720, sub_2ed320, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2fb000, sub_2fc060, sub_306070, sub_3177b0
   ... +7 more
*/
void sub_3890b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3890b0ULL || rel >= 0x3894f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003894f0 size=528 callers=1 calls=10
   calls: TMP_d, atomicCompSwap, mem_Alloc, sub_2f8290, sub_2f9880, sub_306070, sub_3188a0, sub_346fd0, sub_347090, sub_388b50
*/
void sub_3894f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3894f0ULL || rel >= 0x389700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389700 size=464 callers=1 calls=12
   calls: atomicCompSwap, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_306070, sub_307ee0, sub_3188a0, sub_346fd0, sub_347090, sub_3608f0, sub_388b50
   ref: @TMP_%d
*/
void TMP__d_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389700ULL || rel >= 0x3898d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003898d0 size=96 callers=2 calls=1
   calls: sub_3898d0
*/
void sub_3898d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3898d0ULL || rel >= 0x389930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389930 size=4272 callers=2 calls=40
   calls: EXT_bindless_texture, NV_uniform_buffer_object, atomicCompSwap, d_warning_C_04d_2, decoration_s, interfaceNV_2, location_qualifier_on_builtins, mem_Alloc, precision_specifier_with_invalid_type, s__d, struct_fn, sub_2f6e10
   ... +28 more
   ref: gl_LocalInvocationIndex
   ref: @TMPARR_%d
   ref: gl_WorkGroupSize
   ref: SPIR-V: Invalid %s
   ref: gl_out
   ref: gl_SubgroupID
   ref: @TMP_%d
   ref: __defaultname
*/
void gl_LocalInvocationIndex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389930ULL || rel >= 0x38a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a9e0 size=864 callers=1 calls=13
   calls: atomicCompSwap, mem_Alloc, sub_2f6e10, sub_2f8290, sub_2f9880, sub_2fc060, sub_306070, sub_3177b0, sub_3188a0, sub_346fd0, sub_347090, sub_380670
   ... +1 more
*/
void sub_38a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a9e0ULL || rel >= 0x38ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ad40 size=1376 callers=1 calls=16
   calls: mem_Alloc, only_applies_to_pointers, sub_2f6e10, sub_2f8290, sub_2f9880, sub_2fb000, sub_2fc060, sub_306070, sub_3177b0, sub_3188a0, sub_3188c0, sub_31b820
   ... +4 more
*/
void sub_38ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ad40ULL || rel >= 0x38b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b2a0 size=816 callers=3 calls=10
   calls: atomicCompSwap, non_constant_expression_for_array_size, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fab10, sub_2fb000, sub_2fc060, sub_3177b0, sub_38b2a0
*/
void sub_38b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b2a0ULL || rel >= 0x38b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b5d0 size=1008 callers=1 calls=15
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_306070, sub_307ee0, sub_3188a0, sub_31bef0, sub_346fd0
   ... +3 more
   ref: @TMP_%d
*/
void TMP__d_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b5d0ULL || rel >= 0x38b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b9c0 size=288 callers=1 calls=7
   calls: atomicCompSwap, sub_2f8290, sub_306070, sub_3188a0, sub_347090, sub_388b50, sub_38bae0
*/
void sub_38b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b9c0ULL || rel >= 0x38bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bae0 size=512 callers=1 calls=3
   calls: sub_2a4d70, sub_2ed1a0, sub_2ed440
*/
void sub_38bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bae0ULL || rel >= 0x38bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bce0 size=800 callers=1 calls=11
   calls: mem_Alloc, sub_2a4d70, sub_2f8290, sub_2fb460, sub_306070, sub_3188a0, sub_346fd0, sub_347080, sub_347090, sub_347170, sub_388b50
*/
void sub_38bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bce0ULL || rel >= 0x38c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c000 size=1776 callers=1 calls=24
   calls: atomicCompSwap, decoration_s, invariant, mem_Alloc, overload, s__d, struct_fn, sub_2f6e10, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fce70
   ... +12 more
   ref: @TMP_%d
*/
void TMP__d_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c000ULL || rel >= 0x38c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c6f0 size=240 callers=1 calls=8
   calls: mem_Alloc, sub_2f8290, sub_2fade0, sub_306070, sub_3188a0, sub_346fd0, sub_347090, sub_388b50
*/
void sub_38c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c6f0ULL || rel >= 0x38c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c7e0 size=1744 callers=1 calls=25
   calls: atomicCompSwap, bitfieldReverse, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fab10, sub_2fade0, sub_2fc060, sub_2fcb90, sub_306070, sub_307ee0
   ... +13 more
   ref: atomicCounter
   ref: atomicCounterIncrement
   ref: atomicCounterDecrement
   ref: @TMP_%d
*/
void atomicCounterIncrement(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c7e0ULL || rel >= 0x38ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ceb0 size=480 callers=1 calls=9
   calls: mem_Alloc, sub_2f8290, sub_2fcb90, sub_306070, sub_3188a0, sub_346fd0, sub_347090, sub_3608f0, sub_388b50
   ref: atomicExchange
   ref: imageAtomicExchange
*/
void imageAtomicExchange(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ceb0ULL || rel >= 0x38d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d090 size=336 callers=1 calls=10
   calls: mem_Alloc, sub_2f8290, sub_2fa960, sub_2fcd30, sub_306070, sub_3188a0, sub_346fd0, sub_347090, sub_3608f0, sub_388b50
*/
void sub_38d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d090ULL || rel >= 0x38d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d1e0 size=704 callers=1 calls=15
   calls: atomicCompSwap, bitfieldReverse, mem_Alloc, s__d, sub_2a4d70, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_307ee0, sub_3188a0, sub_346fd0
   ... +3 more
   ref: %s%s%s
   ref: subgroupBallot
   ref: subgroup
   ref: @TMP_%d
*/
void subgroupBallot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d1e0ULL || rel >= 0x38d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d4a0 size=11728 callers=1 calls=35
   calls: atomicCompSwap, d_warning_C_04d_2, mem_Alloc, s__d, sub_2ef0f0, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fab10, sub_2fb000, sub_2fc060, sub_2fcb90
   ... +23 more
   ref: Offset
   ref: sparseTexture
   ref: textureProjGrad
   ref: textureSamples
   ref: sparseImageLoad
   ref: kernel image opcode
   ref: textureGrad
   ref: SPIR-V: Unsupported %s
*/
void sparseTextureGather(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d4a0ULL || rel >= 0x390270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390270 size=912 callers=1 calls=18
   calls: TMP__d_2, atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fcd30, sub_306070, sub_307ee0, sub_3188a0
   ... +6 more
   ref: intBitsToFloat
   ref: floatBitsToUint
   ref: uintBitsToFloat
   ref: floatBitsToInt
   ref: packFloat2x16
   ref: @TMP_%d
*/
void uintBitsToFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390270ULL || rel >= 0x390600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390600 size=1056 callers=1 calls=18
   calls: atomicCompSwap, decoration_s, mem_Alloc, s__d, sub_2bb020, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fab10, sub_306070, sub_307ee0, sub_3188a0
   ... +6 more
   ref: @TMP_%d
*/
void TMP__d_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390600ULL || rel >= 0x390a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390a20 size=512 callers=1 calls=8
   calls: mem_Alloc, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_3188a0, sub_3188c0, sub_388b50
   ref: memoryBarrierImage
   ref: groupMemoryBarrier
   ref: memoryBarrierShared
   ref: memoryBarrier
   ref: memoryBarrierBuffer
*/
void memoryBarrierShared(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390a20ULL || rel >= 0x390c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390c20 size=320 callers=1 calls=9
   calls: mem_Alloc, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_3188a0, sub_3188c0, sub_346fd0, sub_388b50
   ref: barrier
*/
void barrier(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390c20ULL || rel >= 0x390d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390d60 size=944 callers=1 calls=16
   calls: atomicCompSwap, mem_Alloc, s__d, sub_2a4d70, sub_2ed320, sub_2ed440, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_306070, sub_307ee0, sub_3188a0
   ... +4 more
   ref: phi_%d
   ref: @TMP_%d
*/
void phi__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390d60ULL || rel >= 0x391110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391110 size=832 callers=2 calls=15
   calls: mem_Alloc, sub_2f6e10, sub_2f8290, sub_2f9880, sub_2fa960, sub_2fab10, sub_306070, sub_3177b0, sub_317880, sub_3188a0, sub_3188c0, sub_31b820
   ... +3 more
*/
void sub_391110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391110ULL || rel >= 0x391450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391450 size=1280 callers=1 calls=19
   calls: atomicCompSwap, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fab10, sub_2fade0, sub_2fc060, sub_306070, sub_307ee0, sub_3177b0, sub_317880
   ... +7 more
   ref: @TMP_%d
*/
void TMP__d_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391450ULL || rel >= 0x391950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391950 size=192 callers=0 calls=5
   calls: sub_2f7fb0, sub_2f8290, sub_306070, sub_3188a0, sub_388b50
*/
void sub_391950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391950ULL || rel >= 0x391a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391a10 size=400 callers=1 calls=10
   calls: atomicCompSwap, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_307ee0, sub_346fd0, sub_347090, sub_3608f0, sub_381f30
   ref: @TMP_%d
*/
void TMP__d_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391a10ULL || rel >= 0x391ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391ba0 size=192 callers=1 calls=4
   calls: mem_Alloc, sub_2f9880, sub_346fd0, sub_347090
*/
void sub_391ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391ba0ULL || rel >= 0x391c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391c60 size=656 callers=1 calls=14
   calls: atomicCompSwap, bitfieldReverse, mem_Alloc, s__d, sub_2f8290, sub_2f9880, sub_2fcb90, sub_306070, sub_307ee0, sub_3188a0, sub_346fd0, sub_347090
   ... +2 more
   ref: @TMP_%d
*/
void TMP__d_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391c60ULL || rel >= 0x391ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391ef0 size=2656 callers=1 calls=60
   calls: SPIR_V_Invalid_s, TMP__d, TMP__d_10, TMP__d_11, TMP__d_12, TMP__d_13, TMP__d_14, TMP__d_15, TMP__d_16, TMP__d_2, TMP__d_3, TMP__d_4
   ... +48 more
   ref: phi_%d
   ref: SPIR-V: Unexpected end of SPIR-V module
   ref: EmitVertex
   ref: SPIR-V: Invalid %s
   ref: EmitStreamVertex
   ref: EndStreamPrimitive
   ref: opcode
   ref: EndPrimitive
*/
void EndStreamPrimitive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391ef0ULL || rel >= 0x392950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

