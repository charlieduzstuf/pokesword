/* main functions 00f08240..00f26670 (119 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00f08240 size=336 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_eb6230, sub_f04a20
   ref: State_Intro_End
   ref: Confirm
*/
void State_Intro_End(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08240ULL || rel >= 0xf08390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08390 size=16 callers=0 calls=0
*/
void sub_f08390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08390ULL || rel >= 0xf083a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f083a0 size=16 callers=0 calls=0
*/
void sub_f083a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf083a0ULL || rel >= 0xf083b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f083b0 size=16 callers=0 calls=0
*/
void sub_f083b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf083b0ULL || rel >= 0xf083c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f083c0 size=16 callers=0 calls=0
*/
void sub_f083c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf083c0ULL || rel >= 0xf083d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f083d0 size=16 callers=0 calls=0
*/
void sub_f083d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf083d0ULL || rel >= 0xf083e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f083e0 size=16 callers=0 calls=0
*/
void sub_f083e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf083e0ULL || rel >= 0xf083f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f083f0 size=16 callers=0 calls=0
*/
void sub_f083f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf083f0ULL || rel >= 0xf08400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08400 size=336 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_f05190, sub_f0cb30
   ref: PlayerSelect
   ref: State_Intro_HeroSelect
*/
void State_Intro_HeroSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08400ULL || rel >= 0xf08550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08550 size=176 callers=0 calls=2
   calls: sub_effcc0, sub_f019e0
*/
void sub_f08550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08550ULL || rel >= 0xf08600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08600 size=16 callers=0 calls=0
*/
void sub_f08600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08600ULL || rel >= 0xf08610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08610 size=16 callers=0 calls=0
*/
void sub_f08610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08610ULL || rel >= 0xf08620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08620 size=16 callers=0 calls=0
*/
void sub_f08620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08620ULL || rel >= 0xf08630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08630 size=16 callers=0 calls=0
*/
void sub_f08630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08630ULL || rel >= 0xf08640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08640 size=16 callers=0 calls=0
*/
void sub_f08640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08640ULL || rel >= 0xf08650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08650 size=16 callers=0 calls=0
*/
void sub_f08650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08650ULL || rel >= 0xf08660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08660 size=16 callers=0 calls=0
*/
void sub_f08660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08660ULL || rel >= 0xf08670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08670 size=16 callers=0 calls=0
*/
void sub_f08670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08670ULL || rel >= 0xf08680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08680 size=16 callers=0 calls=0
*/
void sub_f08680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08680ULL || rel >= 0xf08690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08690 size=304 callers=0 calls=0
*/
void sub_f08690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08690ULL || rel >= 0xf087c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f087c0 size=320 callers=0 calls=4
   calls: strinput, sub_67b990, sub_67bfa0, sub_d0c0
   ref: State_Intro_NameInput
*/
void State_Intro_NameInput(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf087c0ULL || rel >= 0xf08900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08900 size=256 callers=0 calls=4
   calls: sub_136b500, sub_67bdc0, sub_e76980, sub_e76a30
*/
void sub_f08900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08900ULL || rel >= 0xf08a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08a00 size=80 callers=0 calls=1
   calls: sub_e769b0
*/
void sub_f08a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08a00ULL || rel >= 0xf08a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08a50 size=96 callers=0 calls=0
*/
void sub_f08a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08a50ULL || rel >= 0xf08ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08ab0 size=96 callers=0 calls=0
*/
void sub_f08ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08ab0ULL || rel >= 0xf08b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08b10 size=16 callers=0 calls=0
*/
void sub_f08b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08b10ULL || rel >= 0xf08b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08b20 size=96 callers=0 calls=0
*/
void sub_f08b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08b20ULL || rel >= 0xf08b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08b80 size=96 callers=0 calls=0
*/
void sub_f08b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08b80ULL || rel >= 0xf08be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08be0 size=16 callers=0 calls=0
*/
void sub_f08be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08be0ULL || rel >= 0xf08bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08bf0 size=16 callers=0 calls=0
*/
void sub_f08bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08bf0ULL || rel >= 0xf08c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08c00 size=96 callers=0 calls=0
*/
void sub_f08c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08c00ULL || rel >= 0xf08c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08c60 size=96 callers=0 calls=0
*/
void sub_f08c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08c60ULL || rel >= 0xf08cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08cc0 size=304 callers=0 calls=0
*/
void sub_f08cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08cc0ULL || rel >= 0xf08df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f08df0 size=528 callers=0 calls=8
   calls: sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230, sub_f019e0, sub_f05040, sub_f05190, sub_f0ca00
   ref: PlayerSelect
   ref: LangSelect
   ref: State_FromLsToHs
*/
void State_FromLsToHs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf08df0ULL || rel >= 0xf09000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09000 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_f09000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09000ULL || rel >= 0xf09040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09040 size=16 callers=0 calls=0
*/
void sub_f09040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09040ULL || rel >= 0xf09050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09050 size=16 callers=0 calls=0
*/
void sub_f09050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09050ULL || rel >= 0xf09060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09060 size=16 callers=0 calls=0
*/
void sub_f09060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09060ULL || rel >= 0xf09070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09070 size=16 callers=0 calls=0
*/
void sub_f09070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09070ULL || rel >= 0xf09080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09080 size=16 callers=0 calls=0
*/
void sub_f09080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09080ULL || rel >= 0xf09090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09090 size=16 callers=0 calls=0
*/
void sub_f09090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09090ULL || rel >= 0xf090a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f090a0 size=480 callers=0 calls=6
   calls: sub_c39c40, sub_c444b0, sub_d0c0, sub_e806b0, sub_f05040, sub_f09300
   ref: LangSelect
   ref: State_LangSelect_First
   ref: BackGround
*/
void State_LangSelect_First(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf090a0ULL || rel >= 0xf09280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09280 size=32 callers=0 calls=0
*/
void sub_f09280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09280ULL || rel >= 0xf092a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f092a0 size=16 callers=0 calls=0
*/
void sub_f092a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf092a0ULL || rel >= 0xf092b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f092b0 size=16 callers=0 calls=0
*/
void sub_f092b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf092b0ULL || rel >= 0xf092c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f092c0 size=16 callers=0 calls=0
*/
void sub_f092c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf092c0ULL || rel >= 0xf092d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f092d0 size=16 callers=0 calls=0
*/
void sub_f092d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf092d0ULL || rel >= 0xf092e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f092e0 size=16 callers=0 calls=0
*/
void sub_f092e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf092e0ULL || rel >= 0xf092f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f092f0 size=16 callers=0 calls=0
*/
void sub_f092f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf092f0ULL || rel >= 0xf09300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09300 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f09300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09300ULL || rel >= 0xf09450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09450 size=336 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_f05040, sub_f0c0f0
   ref: LangSelect
   ref: State_LangSelect_Top
*/
void State_LangSelect_Top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09450ULL || rel >= 0xf095a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f095a0 size=160 callers=0 calls=2
   calls: sub_f019e0, sub_f09640
*/
void sub_f095a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf095a0ULL || rel >= 0xf09640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09640 size=304 callers=1 calls=4
   calls: sub_13574d0, sub_136b5a0, sub_7c22f0, sub_7c2af0
*/
void sub_f09640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09640ULL || rel >= 0xf09770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09770 size=16 callers=0 calls=0
*/
void sub_f09770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09770ULL || rel >= 0xf09780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09780 size=16 callers=0 calls=0
*/
void sub_f09780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09780ULL || rel >= 0xf09790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09790 size=16 callers=0 calls=0
*/
void sub_f09790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09790ULL || rel >= 0xf097a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f097a0 size=16 callers=0 calls=0
*/
void sub_f097a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf097a0ULL || rel >= 0xf097b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f097b0 size=16 callers=0 calls=0
*/
void sub_f097b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf097b0ULL || rel >= 0xf097c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f097c0 size=16 callers=0 calls=0
*/
void sub_f097c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf097c0ULL || rel >= 0xf097d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f097d0 size=16 callers=0 calls=0
*/
void sub_f097d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf097d0ULL || rel >= 0xf097e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f097e0 size=16 callers=0 calls=0
*/
void sub_f097e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf097e0ULL || rel >= 0xf097f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f097f0 size=16 callers=0 calls=0
*/
void sub_f097f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf097f0ULL || rel >= 0xf09800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09800 size=304 callers=0 calls=0
*/
void sub_f09800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09800ULL || rel >= 0xf09930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09930 size=304 callers=0 calls=0
*/
void sub_f09930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09930ULL || rel >= 0xf09a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09a60 size=928 callers=0 calls=7
   calls: sub_c1b030, sub_c39c40, sub_d0c0, sub_effdb0, sub_f019e0, sub_f09300, sub_f0a140
   ref: State_Loading_End
   ref: BackGround
*/
void State_Loading_End(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09a60ULL || rel >= 0xf09e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09e00 size=240 callers=0 calls=8
   calls: demo_data, sub_c1bcb0, sub_c1bce0, sub_c1bd10, sub_e806b0, sub_eb6230, sub_f0b810, sub_f0b830
*/
void sub_f09e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09e00ULL || rel >= 0xf09ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09ef0 size=16 callers=0 calls=0
*/
void sub_f09ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09ef0ULL || rel >= 0xf09f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09f00 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_f09f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09f00ULL || rel >= 0xf09f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09f60 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_f09f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09f60ULL || rel >= 0xf09fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f09fc0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_f09fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf09fc0ULL || rel >= 0xf0a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a020 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_f0a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a020ULL || rel >= 0xf0a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a080 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_f0a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a080ULL || rel >= 0xf0a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a0e0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_f0a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a0e0ULL || rel >= 0xf0a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a140 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f0a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a140ULL || rel >= 0xf0a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a290 size=592 callers=0 calls=9
   calls: sub_c39c40, sub_d0c0, sub_e806b0, sub_effe50, sub_f019e0, sub_f09300, sub_f0a140, sub_f0b600, sub_f0b810
   ref: State_Loading_First
   ref: BackGround
*/
void State_Loading_First(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a290ULL || rel >= 0xf0a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a4e0 size=16 callers=0 calls=0
*/
void sub_f0a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a4e0ULL || rel >= 0xf0a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a4f0 size=16 callers=0 calls=0
*/
void sub_f0a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a4f0ULL || rel >= 0xf0a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a500 size=16 callers=0 calls=0
*/
void sub_f0a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a500ULL || rel >= 0xf0a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a510 size=16 callers=0 calls=0
*/
void sub_f0a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a510ULL || rel >= 0xf0a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a520 size=16 callers=0 calls=0
*/
void sub_f0a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a520ULL || rel >= 0xf0a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a530 size=16 callers=0 calls=0
*/
void sub_f0a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a530ULL || rel >= 0xf0a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a540 size=16 callers=0 calls=0
*/
void sub_f0a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a540ULL || rel >= 0xf0a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a550 size=80 callers=0 calls=1
   calls: sub_d0c0
   ref: State_Loading_Top
*/
void State_Loading_Top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a550ULL || rel >= 0xf0a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a5a0 size=144 callers=0 calls=2
   calls: sub_b4c080, sub_f0a630
*/
void sub_f0a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a5a0ULL || rel >= 0xf0a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a630 size=352 callers=3 calls=0
*/
void sub_f0a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a630ULL || rel >= 0xf0a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a790 size=16 callers=0 calls=0
*/
void sub_f0a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a790ULL || rel >= 0xf0a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a7a0 size=16 callers=0 calls=0
*/
void sub_f0a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a7a0ULL || rel >= 0xf0a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a7b0 size=16 callers=0 calls=0
*/
void sub_f0a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a7b0ULL || rel >= 0xf0a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a7c0 size=16 callers=0 calls=0
*/
void sub_f0a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a7c0ULL || rel >= 0xf0a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a7d0 size=16 callers=0 calls=0
*/
void sub_f0a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a7d0ULL || rel >= 0xf0a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a7e0 size=16 callers=0 calls=0
*/
void sub_f0a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a7e0ULL || rel >= 0xf0a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a7f0 size=16 callers=0 calls=0
*/
void sub_f0a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a7f0ULL || rel >= 0xf0a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a800 size=16 callers=0 calls=0
*/
void sub_f0a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a800ULL || rel >= 0xf0a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a810 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/startup/bin/startup_bg_00_lyt.bin
*/
void startup_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a810ULL || rel >= 0xf0a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a920 size=16 callers=0 calls=0
*/
void sub_f0a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a920ULL || rel >= 0xf0a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a930 size=16 callers=0 calls=0
*/
void sub_f0a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a930ULL || rel >= 0xf0a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a940 size=16 callers=0 calls=0
*/
void sub_f0a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a940ULL || rel >= 0xf0a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a950 size=16 callers=0 calls=0
*/
void sub_f0a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a950ULL || rel >= 0xf0a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a960 size=16 callers=0 calls=0
*/
void sub_f0a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a960ULL || rel >= 0xf0a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a970 size=16 callers=0 calls=0
*/
void sub_f0a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a970ULL || rel >= 0xf0a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a980 size=16 callers=0 calls=0
*/
void sub_f0a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a980ULL || rel >= 0xf0a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a990 size=16 callers=0 calls=0
*/
void sub_f0a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a990ULL || rel >= 0xf0a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0a9a0 size=304 callers=0 calls=0
*/
void sub_f0a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a9a0ULL || rel >= 0xf0aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0aad0 size=528 callers=0 calls=6
   calls: sub_14e1a30, sub_5cfad0, sub_8efdd0, sub_e806b0, sub_e83e60, sub_e84310
*/
void sub_f0aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0aad0ULL || rel >= 0xf0ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ace0 size=80 callers=0 calls=0
*/
void sub_f0ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ace0ULL || rel >= 0xf0ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ad30 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/player_select/bin/player_select_01_lyt.bin
   ref: bin/appli/player_select/bin/uikit_setting_player_select_01.bin
*/
void uikit_setting_player_select_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ad30ULL || rel >= 0xf0af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0af10 size=1216 callers=1 calls=11
   calls: sub_13149a0, sub_14ac370, sub_14e1a30, sub_14e6550, sub_17919c0, sub_5cfad0, sub_67d450, sub_7a3a10, sub_8f19b0, sub_e7ea90, sub_e84190
*/
void sub_f0af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0af10ULL || rel >= 0xf0b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b3d0 size=128 callers=1 calls=4
   calls: sub_14e1a30, sub_1500c40, sub_e807f0, sub_e84190
*/
void sub_f0b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b3d0ULL || rel >= 0xf0b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b450 size=16 callers=0 calls=0
*/
void sub_f0b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b450ULL || rel >= 0xf0b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b460 size=16 callers=0 calls=0
*/
void sub_f0b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b460ULL || rel >= 0xf0b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b470 size=16 callers=0 calls=0
*/
void sub_f0b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b470ULL || rel >= 0xf0b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b480 size=16 callers=0 calls=0
*/
void sub_f0b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b480ULL || rel >= 0xf0b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b490 size=16 callers=0 calls=0
*/
void sub_f0b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b490ULL || rel >= 0xf0b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b4a0 size=16 callers=0 calls=0
*/
void sub_f0b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b4a0ULL || rel >= 0xf0b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b4b0 size=16 callers=0 calls=0
*/
void sub_f0b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b4b0ULL || rel >= 0xf0b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b4c0 size=16 callers=0 calls=0
*/
void sub_f0b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b4c0ULL || rel >= 0xf0b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b4d0 size=16 callers=0 calls=0
*/
void sub_f0b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b4d0ULL || rel >= 0xf0b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b4e0 size=16 callers=0 calls=0
*/
void sub_f0b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b4e0ULL || rel >= 0xf0b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b4f0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/startup/bin/startup_demo_00_lyt.bin
*/
void startup_demo_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b4f0ULL || rel >= 0xf0b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b600 size=528 callers=1 calls=3
   calls: sub_5cfad0, sub_8f19b0, sub_e7ea90
*/
void sub_f0b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b600ULL || rel >= 0xf0b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b810 size=32 callers=2 calls=0
*/
void sub_f0b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b810ULL || rel >= 0xf0b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b830 size=32 callers=1 calls=0
*/
void sub_f0b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b830ULL || rel >= 0xf0b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b850 size=16 callers=0 calls=0
*/
void sub_f0b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b850ULL || rel >= 0xf0b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b860 size=16 callers=0 calls=0
*/
void sub_f0b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b860ULL || rel >= 0xf0b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b870 size=16 callers=0 calls=0
*/
void sub_f0b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b870ULL || rel >= 0xf0b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b880 size=16 callers=0 calls=0
*/
void sub_f0b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b880ULL || rel >= 0xf0b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b890 size=16 callers=0 calls=0
*/
void sub_f0b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b890ULL || rel >= 0xf0b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b8a0 size=16 callers=0 calls=0
*/
void sub_f0b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b8a0ULL || rel >= 0xf0b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b8b0 size=16 callers=0 calls=0
*/
void sub_f0b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b8b0ULL || rel >= 0xf0b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b8c0 size=16 callers=0 calls=0
*/
void sub_f0b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b8c0ULL || rel >= 0xf0b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0b8d0 size=304 callers=0 calls=0
*/
void sub_f0b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0b8d0ULL || rel >= 0xf0ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ba00 size=16 callers=0 calls=0
*/
void sub_f0ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ba00ULL || rel >= 0xf0ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ba10 size=1760 callers=0 calls=7
   calls: sub_14e1a30, sub_7c22b0, sub_8f19b0, sub_e7eb10, sub_e83430, sub_e83930, sub_e84310
*/
void sub_f0ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ba10ULL || rel >= 0xf0c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c0f0 size=112 callers=1 calls=3
   calls: sub_1500c40, sub_e807f0, sub_e84190
*/
void sub_f0c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c0f0ULL || rel >= 0xf0c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c160 size=400 callers=0 calls=0
*/
void sub_f0c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c160ULL || rel >= 0xf0c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c2f0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/language/bin/language_lyt.bin
   ref: bin/appli/language/bin/uikit_setting_language.bin
*/
void uikit_setting_language(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c2f0ULL || rel >= 0xf0c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c4d0 size=16 callers=0 calls=0
*/
void sub_f0c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c4d0ULL || rel >= 0xf0c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c4e0 size=16 callers=0 calls=0
*/
void sub_f0c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c4e0ULL || rel >= 0xf0c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c4f0 size=16 callers=0 calls=0
*/
void sub_f0c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c4f0ULL || rel >= 0xf0c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c500 size=16 callers=0 calls=0
*/
void sub_f0c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c500ULL || rel >= 0xf0c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c510 size=16 callers=0 calls=0
*/
void sub_f0c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c510ULL || rel >= 0xf0c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c520 size=16 callers=0 calls=0
*/
void sub_f0c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c520ULL || rel >= 0xf0c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c530 size=16 callers=0 calls=0
*/
void sub_f0c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c530ULL || rel >= 0xf0c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c540 size=16 callers=0 calls=0
*/
void sub_f0c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c540ULL || rel >= 0xf0c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c550 size=704 callers=0 calls=5
   calls: sub_14e1a30, sub_7a3c20, sub_e84190, sub_e84310, sub_f0cc60
*/
void sub_f0c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c550ULL || rel >= 0xf0c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c810 size=16 callers=0 calls=0
*/
void sub_f0c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c810ULL || rel >= 0xf0c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0c820 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/player_select/bin/uikit_setting_player_select_00.bin
   ref: bin/appli/player_select/bin/player_select_00_lyt.bin
*/
void uikit_setting_player_select_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0c820ULL || rel >= 0xf0ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ca00 size=304 callers=1 calls=3
   calls: sub_5cfad0, sub_8f19b0, sub_e7ea90
*/
void sub_f0ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ca00ULL || rel >= 0xf0cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cb30 size=112 callers=1 calls=3
   calls: sub_1500c40, sub_e807f0, sub_e84190
*/
void sub_f0cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cb30ULL || rel >= 0xf0cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cba0 size=16 callers=0 calls=0
*/
void sub_f0cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cba0ULL || rel >= 0xf0cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cbb0 size=16 callers=0 calls=0
*/
void sub_f0cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cbb0ULL || rel >= 0xf0cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cbc0 size=16 callers=0 calls=0
*/
void sub_f0cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cbc0ULL || rel >= 0xf0cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cbd0 size=16 callers=0 calls=0
*/
void sub_f0cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cbd0ULL || rel >= 0xf0cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cbe0 size=16 callers=0 calls=0
*/
void sub_f0cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cbe0ULL || rel >= 0xf0cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cbf0 size=16 callers=0 calls=0
*/
void sub_f0cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cbf0ULL || rel >= 0xf0cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc00 size=16 callers=0 calls=0
*/
void sub_f0cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc00ULL || rel >= 0xf0cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc10 size=16 callers=0 calls=0
*/
void sub_f0cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc10ULL || rel >= 0xf0cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc20 size=16 callers=0 calls=0
*/
void sub_f0cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc20ULL || rel >= 0xf0cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc30 size=16 callers=0 calls=0
*/
void sub_f0cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc30ULL || rel >= 0xf0cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc40 size=16 callers=0 calls=0
*/
void sub_f0cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc40ULL || rel >= 0xf0cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc50 size=16 callers=0 calls=0
*/
void sub_f0cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc50ULL || rel >= 0xf0cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cc60 size=480 callers=21 calls=2
   calls: sub_f0cc60, sub_f0ce40
*/
void sub_f0cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cc60ULL || rel >= 0xf0ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ce40 size=304 callers=25 calls=0
*/
void sub_f0ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ce40ULL || rel >= 0xf0cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cf70 size=16 callers=0 calls=0
*/
void sub_f0cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cf70ULL || rel >= 0xf0cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cf80 size=16 callers=0 calls=0
*/
void sub_f0cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cf80ULL || rel >= 0xf0cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cf90 size=16 callers=0 calls=0
*/
void sub_f0cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cf90ULL || rel >= 0xf0cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cfa0 size=16 callers=0 calls=0
*/
void sub_f0cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cfa0ULL || rel >= 0xf0cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0cfb0 size=976 callers=1 calls=1
   calls: sub_67b990
*/
void sub_f0cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0cfb0ULL || rel >= 0xf0d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0d380 size=112 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_f0d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d380ULL || rel >= 0xf0d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0d3f0 size=112 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_f0d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d3f0ULL || rel >= 0xf0d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0d460 size=224 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_f0d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d460ULL || rel >= 0xf0d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0d540 size=912 callers=0 calls=14
   calls: sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_c46830, sub_e7c0f0, sub_e7e400, sub_e7e890, sub_ea3d20, sub_ea5dd0, sub_ea5df0, sub_f0d8d0
   ... +2 more
   ref: font_fs_42_00.bffnt
   ref: View_Top
   ref: common/level_up.dat
   ref: MessageView
*/
void MessageView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d540ULL || rel >= 0xf0d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0d8d0 size=448 callers=1 calls=3
   calls: sub_e7c160, sub_e7c210, sub_f0e420
*/
void sub_f0d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d8d0ULL || rel >= 0xf0da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0da90 size=32 callers=0 calls=0
*/
void sub_f0da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0da90ULL || rel >= 0xf0dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0dab0 size=352 callers=0 calls=2
   calls: sub_e7eb10, sub_f0eda0
   ref: View_Top
*/
void View_Top_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0dab0ULL || rel >= 0xf0dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0dc10 size=96 callers=0 calls=3
   calls: sub_ea3d20, sub_ea5de0, sub_ea5e60
*/
void sub_f0dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0dc10ULL || rel >= 0xf0dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0dc70 size=512 callers=0 calls=4
   calls: sub_e7c160, sub_f0efe0, sub_f0f120, sub_f0f2a0
*/
void sub_f0dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0dc70ULL || rel >= 0xf0de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0de70 size=96 callers=0 calls=3
   calls: sub_ea3d20, sub_ea5de0, sub_ea5e60
*/
void sub_f0de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0de70ULL || rel >= 0xf0ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ded0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f0ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ded0ULL || rel >= 0xf0e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e070 size=16 callers=0 calls=0
*/
void sub_f0e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e070ULL || rel >= 0xf0e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e080 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f0e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e080ULL || rel >= 0xf0e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e130 size=16 callers=0 calls=0
*/
void sub_f0e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e130ULL || rel >= 0xf0e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e140 size=16 callers=0 calls=0
*/
void sub_f0e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e140ULL || rel >= 0xf0e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e150 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f0e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e150ULL || rel >= 0xf0e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e200 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f0e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e200ULL || rel >= 0xf0e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e2b0 size=16 callers=0 calls=0
*/
void sub_f0e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e2b0ULL || rel >= 0xf0e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e2c0 size=16 callers=0 calls=0
*/
void sub_f0e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e2c0ULL || rel >= 0xf0e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e2d0 size=208 callers=0 calls=0
*/
void sub_f0e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e2d0ULL || rel >= 0xf0e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e3a0 size=16 callers=0 calls=0
*/
void sub_f0e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e3a0ULL || rel >= 0xf0e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e3b0 size=16 callers=0 calls=0
*/
void sub_f0e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e3b0ULL || rel >= 0xf0e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e3c0 size=16 callers=0 calls=0
*/
void sub_f0e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e3c0ULL || rel >= 0xf0e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e3d0 size=16 callers=0 calls=0
*/
void sub_f0e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e3d0ULL || rel >= 0xf0e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e3e0 size=16 callers=0 calls=0
*/
void sub_f0e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e3e0ULL || rel >= 0xf0e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e3f0 size=16 callers=0 calls=0
*/
void sub_f0e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e3f0ULL || rel >= 0xf0e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e400 size=16 callers=0 calls=0
*/
void sub_f0e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e400ULL || rel >= 0xf0e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e410 size=16 callers=0 calls=0
*/
void sub_f0e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e410ULL || rel >= 0xf0e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e420 size=304 callers=10 calls=0
*/
void sub_f0e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e420ULL || rel >= 0xf0e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e550 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f0e670
*/
void sub_f0e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e550ULL || rel >= 0xf0e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e670 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f0e7f0
*/
void sub_f0e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e670ULL || rel >= 0xf0e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e7f0 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_f0e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e7f0ULL || rel >= 0xf0e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0e970 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f0ea90
*/
void sub_f0e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e970ULL || rel >= 0xf0ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ea90 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f0ec10
*/
void sub_f0ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ea90ULL || rel >= 0xf0ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ec10 size=304 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_f0ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ec10ULL || rel >= 0xf0ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ed40 size=48 callers=0 calls=0
*/
void sub_f0ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ed40ULL || rel >= 0xf0ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ed70 size=16 callers=0 calls=0
*/
void sub_f0ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ed70ULL || rel >= 0xf0ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ed80 size=16 callers=0 calls=0
*/
void sub_f0ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ed80ULL || rel >= 0xf0ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ed90 size=16 callers=0 calls=0
*/
void sub_f0ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ed90ULL || rel >= 0xf0eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0eda0 size=272 callers=5 calls=2
   calls: sub_5cfaf0, sub_f0eeb0
*/
void sub_f0eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0eda0ULL || rel >= 0xf0eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0eeb0 size=304 callers=1 calls=0
*/
void sub_f0eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0eeb0ULL || rel >= 0xf0efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0efe0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f0efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0efe0ULL || rel >= 0xf0f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0f120 size=384 callers=1 calls=1
   calls: anonymous
*/
void sub_f0f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0f120ULL || rel >= 0xf0f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0f2a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f0f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0f2a0ULL || rel >= 0xf0f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0f3e0 size=400 callers=0 calls=5
   calls: sub_14aad40, sub_14ab040, sub_67b990, sub_e80580, sub_e807f0
*/
void sub_f0f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0f3e0ULL || rel >= 0xf0f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0f570 size=160 callers=4 calls=2
   calls: sub_14ab040, sub_e833a0
   ref: anime_levelwin_out
*/
void anime_levelwin_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0f570ULL || rel >= 0xf0f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0f610 size=2192 callers=1 calls=5
   calls: L_gauge_EXP_00, P_grptxt_lvup_00, sub_14ab040, sub_7847d0, sub_f0fea0
   ref: T_ParamName_05
   ref: pane_%s
   ref: T_ParamName_01
   ref: pane_%s_%s
   ref: L_pokeplate_%02d
   ref: T_ParamName_00
   ref: T_ParamName_04
   ref: T_ParamName_02
*/
void T_ParamName_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0f610ULL || rel >= 0xf0fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0fea0 size=256 callers=18 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_f0fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0fea0ULL || rel >= 0xf0ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ffa0 size=48 callers=0 calls=1
   calls: sub_e82ef0
*/
void sub_f0ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ffa0ULL || rel >= 0xf0ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f0ffd0 size=48 callers=2 calls=1
   calls: sub_e82ef0
*/
void sub_f0ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0ffd0ULL || rel >= 0xf10000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10000 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/lvup/bin/uikit_lvup_window.bin
   ref: bin/appli/lvup/bin/lvup_window_00_lyt.bin
*/
void uikit_lvup_window(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10000ULL || rel >= 0xf101e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f101e0 size=16 callers=0 calls=0
*/
void sub_f101e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf101e0ULL || rel >= 0xf101f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f101f0 size=96 callers=0 calls=1
   calls: sub_ea4760
*/
void sub_f101f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf101f0ULL || rel >= 0xf10250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10250 size=64 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_in
   ref: anime_keep
*/
void anime_keep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10250ULL || rel >= 0xf10290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10290 size=16 callers=1 calls=0
   ref: anime_out
*/
void anime_out_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10290ULL || rel >= 0xf102a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f102a0 size=368 callers=1 calls=4
   calls: sub_14aad40, sub_1502120, sub_5cfad0, sub_e83540
   ref: Play_UI_common_lv_up_window
*/
void Play_UI_common_lv_up_window(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf102a0ULL || rel >= 0xf10410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10410 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_f10410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10410ULL || rel >= 0xf10450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10450 size=352 callers=2 calls=1
   calls: sub_14ab2b0
*/
void sub_f10450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10450ULL || rel >= 0xf105b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f105b0 size=192 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_f105b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf105b0ULL || rel >= 0xf10670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10670 size=1376 callers=2 calls=2
   calls: sub_1315b90, sub_f0fea0
   ref: pane_%s
   ref: T_ParamTotal_04
   ref: T_ParamTotal_03
   ref: pane_%s_%s
   ref: T_ParamTotal_00
   ref: T_ParamTotal_02
   ref: T_ParamTotal_01
   ref: T_ParamTotal_05
*/
void T_ParamTotal_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10670ULL || rel >= 0xf10bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f10bd0 size=1376 callers=1 calls=2
   calls: sub_1315b90, sub_f0fea0
   ref: T_ParamAdd_04
   ref: pane_%s
   ref: T_ParamAdd_00
   ref: T_ParamAdd_02
   ref: pane_%s_%s
   ref: T_ParamAdd_05
   ref: T_ParamAdd_03
   ref: T_ParamAdd_01
*/
void T_ParamAdd_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10bd0ULL || rel >= 0xf11130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11130 size=48 callers=2 calls=1
   calls: sub_e807f0
*/
void sub_f11130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11130ULL || rel >= 0xf11160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11160 size=112 callers=1 calls=3
   calls: Play_UI_common_lv_gauge_up, sub_767950, sub_7847d0
*/
void sub_f11160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11160ULL || rel >= 0xf111d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f111d0 size=320 callers=0 calls=0
*/
void sub_f111d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf111d0ULL || rel >= 0xf11310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11310 size=16 callers=0 calls=0
*/
void sub_f11310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11310ULL || rel >= 0xf11320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11320 size=16 callers=0 calls=0
*/
void sub_f11320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11320ULL || rel >= 0xf11330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11330 size=16 callers=0 calls=0
*/
void sub_f11330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11330ULL || rel >= 0xf11340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11340 size=16 callers=0 calls=0
*/
void sub_f11340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11340ULL || rel >= 0xf11350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11350 size=16 callers=0 calls=0
*/
void sub_f11350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11350ULL || rel >= 0xf11360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11360 size=16 callers=0 calls=0
*/
void sub_f11360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11360ULL || rel >= 0xf11370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11370 size=16 callers=0 calls=0
*/
void sub_f11370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11370ULL || rel >= 0xf11380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11380 size=16 callers=0 calls=0
*/
void sub_f11380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11380ULL || rel >= 0xf11390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11390 size=48 callers=0 calls=1
   calls: sub_e833a0
   ref: anime_add_in
*/
void anime_add_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11390ULL || rel >= 0xf113c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f113c0 size=16 callers=0 calls=0
*/
void sub_f113c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf113c0ULL || rel >= 0xf113d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f113d0 size=16 callers=0 calls=0
*/
void sub_f113d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf113d0ULL || rel >= 0xf113e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f113e0 size=16 callers=0 calls=0
*/
void sub_f113e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf113e0ULL || rel >= 0xf113f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f113f0 size=1616 callers=1 calls=3
   calls: sub_14ba7b0, sub_5e2350, sub_8f3180
   ref: pane_%s
   ref: P_pokeIcon_00
   ref: pane_%s_%s
   ref: L_pokeplate_%02d
   ref: L_pokeIcon_00
   ref: L_gauge_EXP_00
*/
void L_gauge_EXP_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf113f0ULL || rel >= 0xf11a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f11a40 size=1936 callers=1 calls=12
   calls: T_lv_00, sub_14ab040, sub_14bbf30, sub_67d450, sub_764b40, sub_7658a0, sub_765930, sub_7659e0, sub_7670a0, sub_767950, sub_8f2470, sub_e83930
   ref: switch
   ref: pane_%s
   ref: anime_%s
   ref: T_pokeName_00
   ref: pane_%s_%s
   ref: gauge_scale
   ref: anime_%s_%s
   ref: P_grptxt_lvup_00
*/
void P_grptxt_lvup_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf11a40ULL || rel >= 0xf121d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f121d0 size=288 callers=4 calls=2
   calls: sub_67d450, sub_8f2570
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_lv_00
*/
void T_lv_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf121d0ULL || rel >= 0xf122f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f122f0 size=720 callers=1 calls=4
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_e83430
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: exp_in
   ref: T_exp_00
*/
void T_exp_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf122f0ULL || rel >= 0xf125c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f125c0 size=464 callers=4 calls=4
   calls: sub_14aad40, sub_e83430, sub_e83930, sub_e83a20
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: levelup_in
   ref: P_grptxt_lvup_00
*/
void P_grptxt_lvup_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf125c0ULL || rel >= 0xf12790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f12790 size=1872 callers=1 calls=5
   calls: P_grptxt_lvup_00_2, T_lv_00, sub_1502120, sub_5cfad0, sub_e83930
   ref: anime_%s
   ref: Play_UI_common_lv_gauge_full
   ref: gauge_scale
   ref: anime_%s_%s
   ref: Play_UI_common_lv_gauge_up
*/
void Play_UI_common_lv_gauge_up(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf12790ULL || rel >= 0xf12ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f12ee0 size=544 callers=2 calls=1
   calls: sub_e83430
   ref: anime_%s
   ref: HP_max
   ref: anime_%s_%s
   ref: L_pokeIcon_00
*/
void L_pokeIcon_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf12ee0ULL || rel >= 0xf13100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13100 size=544 callers=1 calls=1
   calls: sub_e83930
   ref: anime_%s
   ref: HP_max
   ref: anime_%s_%s
   ref: L_pokeIcon_00
*/
void L_pokeIcon_00_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13100ULL || rel >= 0xf13320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13320 size=144 callers=1 calls=4
   calls: sub_764b40, sub_7658a0, sub_765930, sub_7659e0
*/
void sub_f13320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13320ULL || rel >= 0xf133b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f133b0 size=208 callers=1 calls=4
   calls: sub_764b40, sub_7658a0, sub_765930, sub_7659e0
*/
void sub_f133b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf133b0ULL || rel >= 0xf13480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13480 size=288 callers=1 calls=3
   calls: P_grptxt_lvup_00_2, T_lv_00, sub_e83930
   ref: anime_%s
   ref: gauge_scale
   ref: anime_%s_%s
*/
void gauge_scale(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13480ULL || rel >= 0xf135a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f135a0 size=80 callers=0 calls=0
*/
void sub_f135a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf135a0ULL || rel >= 0xf135f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f135f0 size=240 callers=0 calls=0
*/
void sub_f135f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf135f0ULL || rel >= 0xf136e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f136e0 size=80 callers=0 calls=0
*/
void sub_f136e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf136e0ULL || rel >= 0xf13730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13730 size=80 callers=0 calls=0
*/
void sub_f13730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13730ULL || rel >= 0xf13780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13780 size=16 callers=0 calls=0
*/
void sub_f13780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13780ULL || rel >= 0xf13790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13790 size=16 callers=0 calls=0
*/
void sub_f13790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13790ULL || rel >= 0xf137a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f137a0 size=80 callers=0 calls=0
*/
void sub_f137a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf137a0ULL || rel >= 0xf137f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f137f0 size=80 callers=0 calls=0
*/
void sub_f137f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf137f0ULL || rel >= 0xf13840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13840 size=368 callers=0 calls=4
   calls: anime_out_3, sub_c39c40, sub_d0c0, sub_f0eda0
   ref: View_Top
*/
void View_Top_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13840ULL || rel >= 0xf139b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f139b0 size=16 callers=0 calls=0
*/
void sub_f139b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf139b0ULL || rel >= 0xf139c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f139c0 size=320 callers=0 calls=4
   calls: sub_c39c40, sub_e80580, sub_e806b0, sub_f0eda0
   ref: View_Top
*/
void View_Top_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf139c0ULL || rel >= 0xf13b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13b00 size=16 callers=0 calls=0
*/
void sub_f13b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13b00ULL || rel >= 0xf13b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13b10 size=16 callers=0 calls=0
*/
void sub_f13b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13b10ULL || rel >= 0xf13b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13b20 size=16 callers=0 calls=0
*/
void sub_f13b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13b20ULL || rel >= 0xf13b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13b30 size=16 callers=0 calls=0
*/
void sub_f13b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13b30ULL || rel >= 0xf13b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13b40 size=16 callers=0 calls=0
*/
void sub_f13b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13b40ULL || rel >= 0xf13b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13b50 size=1152 callers=0 calls=14
   calls: L_pokeIcon_00_2, P_grptxt_lvup_00_2, T_ParamName_05, anime_keep, sub_14aad40, sub_767950, sub_7847d0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_f0cfb0, sub_f0e420
   ... +2 more
   ref: View_Top
*/
void View_Top_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13b50ULL || rel >= 0xf13fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13fd0 size=16 callers=0 calls=0
*/
void sub_f13fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13fd0ULL || rel >= 0xf13fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13fe0 size=16 callers=0 calls=0
*/
void sub_f13fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13fe0ULL || rel >= 0xf13ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f13ff0 size=16 callers=0 calls=0
*/
void sub_f13ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf13ff0ULL || rel >= 0xf14000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14000 size=16 callers=0 calls=0
*/
void sub_f14000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14000ULL || rel >= 0xf14010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14010 size=16 callers=0 calls=0
*/
void sub_f14010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14010ULL || rel >= 0xf14020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14020 size=16 callers=0 calls=0
*/
void sub_f14020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14020ULL || rel >= 0xf14030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14030 size=16 callers=0 calls=0
*/
void sub_f14030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14030ULL || rel >= 0xf14040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14040 size=16 callers=0 calls=0
*/
void sub_f14040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14040ULL || rel >= 0xf14050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14050 size=16 callers=0 calls=0
*/
void sub_f14050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14050ULL || rel >= 0xf14060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14060 size=16 callers=0 calls=0
*/
void sub_f14060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14060ULL || rel >= 0xf14070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14070 size=304 callers=0 calls=0
*/
void sub_f14070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14070ULL || rel >= 0xf141a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f141a0 size=992 callers=0 calls=9
   calls: sub_764b40, sub_767950, sub_7847d0, sub_c39c40, sub_d0c0, sub_e806b0, sub_f0eda0, sub_f11130, sub_f16430
   ref: View_Top
   ref: execute
   ref: MessageView
*/
void MessageView_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf141a0ULL || rel >= 0xf14580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14580 size=2608 callers=0 calls=20
   calls: LEARN_SKILL_6, L_pokeIcon_00_2, L_pokeIcon_00_3, Play_UI_common_lv_gauge_up_2, Play_UI_common_lv_up_window, T_ParamAdd_05, T_ParamTotal_05, anime_levelwin_out, sub_1502120, sub_5cfad0, sub_764b40, sub_767950
   ... +8 more
   ref: Stop_UI_common_lv_gauge_up
   ref: Play_UI_common_lv_up_parameter
*/
void Stop_UI_common_lv_gauge_up(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14580ULL || rel >= 0xf14fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f14fb0 size=1792 callers=1 calls=9
   calls: sub_12f6970, sub_764b40, sub_764c30, sub_764df0, sub_765180, sub_7658b0, sub_767950, sub_7847d0, sub_c39c40
*/
void sub_f14fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf14fb0ULL || rel >= 0xf156b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f156b0 size=688 callers=1 calls=7
   calls: T_exp_00, sub_1502120, sub_764b40, sub_767950, sub_7847d0, sub_f13320, sub_f133b0
   ref: Play_UI_common_lv_gauge_up
*/
void Play_UI_common_lv_gauge_up_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf156b0ULL || rel >= 0xf15960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f15960 size=384 callers=1 calls=3
   calls: sub_12fafe0, sub_764b40, sub_766da0
   ref: LEARN_SKILL
*/
void LEARN_SKILL_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf15960ULL || rel >= 0xf15ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f15ae0 size=240 callers=1 calls=4
   calls: sub_e807f0, sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_f15ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf15ae0ULL || rel >= 0xf15bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f15bd0 size=768 callers=4 calls=6
   calls: sub_e807f0, sub_eb8930, sub_f0d380, sub_f0d3f0, sub_f0d460, sub_f0e420
*/
void sub_f15bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf15bd0ULL || rel >= 0xf15ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f15ed0 size=224 callers=1 calls=3
   calls: gauge_scale, sub_767950, sub_7847d0
*/
void sub_f15ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf15ed0ULL || rel >= 0xf15fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f15fb0 size=64 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_f15fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf15fb0ULL || rel >= 0xf15ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f15ff0 size=112 callers=0 calls=0
*/
void sub_f15ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf15ff0ULL || rel >= 0xf16060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16060 size=112 callers=0 calls=0
*/
void sub_f16060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16060ULL || rel >= 0xf160d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f160d0 size=16 callers=0 calls=0
*/
void sub_f160d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf160d0ULL || rel >= 0xf160e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f160e0 size=128 callers=0 calls=0
*/
void sub_f160e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf160e0ULL || rel >= 0xf16160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16160 size=128 callers=0 calls=0
*/
void sub_f16160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16160ULL || rel >= 0xf161e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f161e0 size=16 callers=0 calls=0
*/
void sub_f161e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf161e0ULL || rel >= 0xf161f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f161f0 size=16 callers=0 calls=0
*/
void sub_f161f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf161f0ULL || rel >= 0xf16200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16200 size=128 callers=0 calls=0
*/
void sub_f16200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16200ULL || rel >= 0xf16280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16280 size=128 callers=0 calls=0
*/
void sub_f16280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16280ULL || rel >= 0xf16300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16300 size=304 callers=0 calls=0
*/
void sub_f16300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16300ULL || rel >= 0xf16430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16430 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f16430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16430ULL || rel >= 0xf16580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16580 size=80 callers=0 calls=1
   calls: sub_f15ed0
*/
void sub_f16580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16580ULL || rel >= 0xf165d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f165d0 size=16 callers=0 calls=0
*/
void sub_f165d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf165d0ULL || rel >= 0xf165e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f165e0 size=16 callers=0 calls=0
*/
void sub_f165e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf165e0ULL || rel >= 0xf165f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f165f0 size=16 callers=0 calls=0
*/
void sub_f165f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf165f0ULL || rel >= 0xf16600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16600 size=64 callers=0 calls=0
*/
void sub_f16600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16600ULL || rel >= 0xf16640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16640 size=16 callers=0 calls=0
*/
void sub_f16640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16640ULL || rel >= 0xf16650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16650 size=16 callers=0 calls=0
*/
void sub_f16650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16650ULL || rel >= 0xf16660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16660 size=16 callers=0 calls=0
*/
void sub_f16660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16660ULL || rel >= 0xf16670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16670 size=64 callers=0 calls=0
*/
void sub_f16670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16670ULL || rel >= 0xf166b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f166b0 size=16 callers=0 calls=0
*/
void sub_f166b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf166b0ULL || rel >= 0xf166c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f166c0 size=16 callers=0 calls=0
*/
void sub_f166c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf166c0ULL || rel >= 0xf166d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f166d0 size=16 callers=0 calls=0
*/
void sub_f166d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf166d0ULL || rel >= 0xf166e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f166e0 size=64 callers=0 calls=0
*/
void sub_f166e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf166e0ULL || rel >= 0xf16720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16720 size=16 callers=0 calls=0
*/
void sub_f16720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16720ULL || rel >= 0xf16730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16730 size=16 callers=0 calls=0
*/
void sub_f16730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16730ULL || rel >= 0xf16740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16740 size=16 callers=0 calls=0
*/
void sub_f16740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16740ULL || rel >= 0xf16750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16750 size=208 callers=0 calls=3
   calls: sub_1313580, sub_f0e420, wazaname
*/
void sub_f16750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16750ULL || rel >= 0xf16820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16820 size=16 callers=0 calls=0
*/
void sub_f16820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16820ULL || rel >= 0xf16830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16830 size=16 callers=0 calls=0
*/
void sub_f16830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16830ULL || rel >= 0xf16840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16840 size=16 callers=0 calls=0
*/
void sub_f16840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16840ULL || rel >= 0xf16850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16850 size=272 callers=0 calls=1
   calls: sub_f15bd0
*/
void sub_f16850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16850ULL || rel >= 0xf16960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16960 size=16 callers=0 calls=0
*/
void sub_f16960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16960ULL || rel >= 0xf16970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16970 size=16 callers=0 calls=0
*/
void sub_f16970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16970ULL || rel >= 0xf16980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16980 size=16 callers=0 calls=0
*/
void sub_f16980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16980ULL || rel >= 0xf16990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16990 size=256 callers=0 calls=4
   calls: sub_1313580, sub_1315b90, sub_764b40, sub_f0e420
*/
void sub_f16990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16990ULL || rel >= 0xf16a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16a90 size=16 callers=0 calls=0
*/
void sub_f16a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16a90ULL || rel >= 0xf16aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16aa0 size=16 callers=0 calls=0
*/
void sub_f16aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16aa0ULL || rel >= 0xf16ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ab0 size=16 callers=0 calls=0
*/
void sub_f16ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ab0ULL || rel >= 0xf16ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ac0 size=16 callers=0 calls=0
*/
void sub_f16ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ac0ULL || rel >= 0xf16ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ad0 size=16 callers=0 calls=0
*/
void sub_f16ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ad0ULL || rel >= 0xf16ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ae0 size=16 callers=0 calls=0
*/
void sub_f16ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ae0ULL || rel >= 0xf16af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16af0 size=16 callers=0 calls=0
*/
void sub_f16af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16af0ULL || rel >= 0xf16b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16b00 size=16 callers=0 calls=0
*/
void sub_f16b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16b00ULL || rel >= 0xf16b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16b10 size=16 callers=0 calls=0
*/
void sub_f16b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16b10ULL || rel >= 0xf16b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16b20 size=16 callers=0 calls=0
*/
void sub_f16b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16b20ULL || rel >= 0xf16b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16b30 size=16 callers=0 calls=0
*/
void sub_f16b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16b30ULL || rel >= 0xf16b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16b40 size=208 callers=0 calls=3
   calls: sub_1313580, sub_f0e420, wazaname
*/
void sub_f16b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16b40ULL || rel >= 0xf16c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c10 size=16 callers=0 calls=0
*/
void sub_f16c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c10ULL || rel >= 0xf16c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c20 size=16 callers=0 calls=0
*/
void sub_f16c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c20ULL || rel >= 0xf16c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c30 size=16 callers=0 calls=0
*/
void sub_f16c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c30ULL || rel >= 0xf16c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c40 size=16 callers=0 calls=0
*/
void sub_f16c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c40ULL || rel >= 0xf16c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c50 size=16 callers=0 calls=0
*/
void sub_f16c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c50ULL || rel >= 0xf16c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c60 size=16 callers=0 calls=0
*/
void sub_f16c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c60ULL || rel >= 0xf16c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c70 size=16 callers=0 calls=0
*/
void sub_f16c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c70ULL || rel >= 0xf16c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16c80 size=224 callers=0 calls=3
   calls: sub_1313580, sub_f0e420, wazaname
*/
void sub_f16c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16c80ULL || rel >= 0xf16d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16d60 size=16 callers=0 calls=0
*/
void sub_f16d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16d60ULL || rel >= 0xf16d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16d70 size=16 callers=0 calls=0
*/
void sub_f16d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16d70ULL || rel >= 0xf16d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16d80 size=16 callers=0 calls=0
*/
void sub_f16d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16d80ULL || rel >= 0xf16d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16d90 size=16 callers=0 calls=0
*/
void sub_f16d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16d90ULL || rel >= 0xf16da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16da0 size=16 callers=0 calls=0
*/
void sub_f16da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16da0ULL || rel >= 0xf16db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16db0 size=16 callers=0 calls=0
*/
void sub_f16db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16db0ULL || rel >= 0xf16dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16dc0 size=16 callers=0 calls=0
*/
void sub_f16dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16dc0ULL || rel >= 0xf16dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16dd0 size=208 callers=0 calls=3
   calls: sub_1313580, sub_f0e420, wazaname
*/
void sub_f16dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16dd0ULL || rel >= 0xf16ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ea0 size=16 callers=0 calls=0
*/
void sub_f16ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ea0ULL || rel >= 0xf16eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16eb0 size=16 callers=0 calls=0
*/
void sub_f16eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16eb0ULL || rel >= 0xf16ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ec0 size=16 callers=0 calls=0
*/
void sub_f16ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ec0ULL || rel >= 0xf16ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ed0 size=16 callers=0 calls=0
*/
void sub_f16ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ed0ULL || rel >= 0xf16ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ee0 size=16 callers=0 calls=0
*/
void sub_f16ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ee0ULL || rel >= 0xf16ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16ef0 size=16 callers=0 calls=0
*/
void sub_f16ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16ef0ULL || rel >= 0xf16f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16f00 size=16 callers=0 calls=0
*/
void sub_f16f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16f00ULL || rel >= 0xf16f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f16f10 size=544 callers=2 calls=4
   calls: sub_67b990, sub_f17130, sub_f176f0, sub_f17920
*/
void sub_f16f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf16f10ULL || rel >= 0xf17130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f17130 size=1472 callers=1 calls=4
   calls: sub_106dc30, sub_11061d0, sub_1106200, sub_1106f30
*/
void sub_f17130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf17130ULL || rel >= 0xf176f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f176f0 size=560 callers=1 calls=0
*/
void sub_f176f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf176f0ULL || rel >= 0xf17920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f17920 size=352 callers=4 calls=0
*/
void sub_f17920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf17920ULL || rel >= 0xf17a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f17a80 size=80 callers=1 calls=1
   calls: sub_f17ad0
*/
void sub_f17a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf17a80ULL || rel >= 0xf17ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f17ad0 size=592 callers=1 calls=2
   calls: sub_1064450, sub_f1d5c0
*/
void sub_f17ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf17ad0ULL || rel >= 0xf17d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f17d20 size=1584 callers=0 calls=7
   calls: sub_1062350, sub_1062360, sub_1064a20, sub_f18630, sub_f19000, sub_f1a950, sub_f1c880
*/
void sub_f17d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf17d20ULL || rel >= 0xf18350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f18350 size=320 callers=8 calls=3
   calls: sub_1064450, sub_106eae0, sub_eac210
*/
void sub_f18350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf18350ULL || rel >= 0xf18490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f18490 size=416 callers=5 calls=3
   calls: sub_106eae0, sub_eac210, sub_f1d2d0
*/
void sub_f18490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf18490ULL || rel >= 0xf18630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f18630 size=2512 callers=5 calls=40
   calls: sub_101bdd0, sub_105c390, sub_106dc30, sub_106de30, sub_106dfe0, sub_106e9f0, sub_106ea00, sub_106ea10, sub_106ea20, sub_106ea30, sub_106ea40, sub_106eab0
   ... +28 more
*/
void sub_f18630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf18630ULL || rel >= 0xf19000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f19000 size=592 callers=1 calls=12
   calls: sub_1064970, sub_1064e20, sub_106bb10, sub_106bb20, sub_106bb30, sub_106bb40, sub_106bb50, sub_106dc30, sub_106de30, sub_106dfe0, sub_f18630, sub_f19250
*/
void sub_f19000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf19000ULL || rel >= 0xf19250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f19250 size=816 callers=1 calls=7
   calls: sub_106de30, sub_106dfe0, sub_106e9f0, sub_106ea00, sub_10783f0, sub_1078400, sub_1078420
*/
void sub_f19250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf19250ULL || rel >= 0xf19580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f19580 size=3008 callers=1 calls=0
*/
void sub_f19580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf19580ULL || rel >= 0xf1a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a140 size=1360 callers=2 calls=30
   calls: sub_1064970, sub_106dc30, sub_106e9f0, sub_106ea00, sub_106ea10, sub_106ea20, sub_106ea30, sub_106ea40, sub_106eab0, sub_106ead0, sub_106eaf0, sub_106fcf0
   ... +18 more
*/
void sub_f1a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a140ULL || rel >= 0xf1a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a690 size=224 callers=0 calls=0
*/
void sub_f1a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a690ULL || rel >= 0xf1a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a770 size=224 callers=0 calls=0
*/
void sub_f1a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a770ULL || rel >= 0xf1a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a850 size=16 callers=0 calls=0
*/
void sub_f1a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a850ULL || rel >= 0xf1a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a860 size=112 callers=0 calls=0
*/
void sub_f1a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a860ULL || rel >= 0xf1a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a8d0 size=16 callers=0 calls=0
*/
void sub_f1a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a8d0ULL || rel >= 0xf1a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a8e0 size=112 callers=0 calls=0
*/
void sub_f1a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a8e0ULL || rel >= 0xf1a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1a950 size=2960 callers=3 calls=5
   calls: stamp_table, sub_f1a950, sub_f1b710, sub_f1c050, sub_f1c520
*/
void sub_f1a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1a950ULL || rel >= 0xf1b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1b4e0 size=560 callers=26 calls=4
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0
   ref: stamp_table
   ref: showNum
   ref: stampId
*/
void stamp_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1b4e0ULL || rel >= 0xf1b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1b710 size=1408 callers=5 calls=1
   calls: stamp_table
*/
void sub_f1b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1b710ULL || rel >= 0xf1bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1bc90 size=960 callers=2 calls=2
   calls: stamp_table, sub_f1b710
*/
void sub_f1bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1bc90ULL || rel >= 0xf1c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1c050 size=1232 callers=2 calls=2
   calls: stamp_table, sub_f1bc90
*/
void sub_f1c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c050ULL || rel >= 0xf1c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1c520 size=864 callers=2 calls=4
   calls: stamp_table, sub_f1b710, sub_f1bc90, sub_f1c050
*/
void sub_f1c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c520ULL || rel >= 0xf1c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1c880 size=2640 callers=1 calls=0
*/
void sub_f1c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c880ULL || rel >= 0xf1d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d2d0 size=752 callers=1 calls=0
*/
void sub_f1d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d2d0ULL || rel >= 0xf1d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d5c0 size=448 callers=2 calls=0
*/
void sub_f1d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d5c0ULL || rel >= 0xf1d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d780 size=128 callers=0 calls=0
*/
void sub_f1d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d780ULL || rel >= 0xf1d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d800 size=16 callers=12 calls=0
*/
void sub_f1d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d800ULL || rel >= 0xf1d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d810 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_f1d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d810ULL || rel >= 0xf1d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d840 size=368 callers=2 calls=1
   calls: sub_f1db30
   ref: bin/appli/icon_stamp/item_dummy.bntx
   ref: bin/appli/icon_stamp/%s.bntx
*/
void item_dummy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d840ULL || rel >= 0xf1d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1d9b0 size=384 callers=3 calls=2
   calls: item_dummy, sub_14ba820
*/
void sub_f1d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d9b0ULL || rel >= 0xf1db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1db30 size=304 callers=11 calls=3
   calls: sub_5e6180, sub_d0c0, sub_f1dc80
*/
void sub_f1db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1db30ULL || rel >= 0xf1dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1dc60 size=16 callers=0 calls=0
*/
void sub_f1dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1dc60ULL || rel >= 0xf1dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1dc70 size=16 callers=0 calls=0
*/
void sub_f1dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1dc70ULL || rel >= 0xf1dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1dc80 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_f1dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1dc80ULL || rel >= 0xf1dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1dd00 size=144 callers=0 calls=1
   calls: sub_f1dd90
*/
void sub_f1dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1dd00ULL || rel >= 0xf1dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1dd90 size=288 callers=2 calls=3
   calls: sub_c38350, sub_e9db40, sub_f1f2a0
*/
void sub_f1dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1dd90ULL || rel >= 0xf1deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1deb0 size=16 callers=0 calls=0
*/
void sub_f1deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1deb0ULL || rel >= 0xf1dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1dec0 size=352 callers=0 calls=4
   calls: sub_13517a0, sub_14e0350, sub_1502120, sub_5cfad0
*/
void sub_f1dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1dec0ULL || rel >= 0xf1e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1e020 size=2400 callers=0 calls=8
   calls: sub_12c9b90, sub_a6e240, sub_c39c40, sub_f1e980, sub_f1ea70, sub_f1eb80, sub_f1f030, sub_f975a0
*/
void sub_f1e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1e020ULL || rel >= 0xf1e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1e980 size=240 callers=1 calls=1
   calls: sub_76f440
*/
void sub_f1e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1e980ULL || rel >= 0xf1ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1ea70 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_f1f3f0
*/
void sub_f1ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ea70ULL || rel >= 0xf1eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1eb80 size=528 callers=1 calls=3
   calls: sub_a75c00, sub_a777c0, sub_c39c40
*/
void sub_f1eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1eb80ULL || rel >= 0xf1ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1ed90 size=128 callers=0 calls=0
*/
void sub_f1ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ed90ULL || rel >= 0xf1ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1ee10 size=416 callers=0 calls=0
*/
void sub_f1ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ee10ULL || rel >= 0xf1efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1efb0 size=16 callers=0 calls=0
*/
void sub_f1efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1efb0ULL || rel >= 0xf1efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1efc0 size=16 callers=0 calls=0
*/
void sub_f1efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1efc0ULL || rel >= 0xf1efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1efd0 size=16 callers=0 calls=0
*/
void sub_f1efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1efd0ULL || rel >= 0xf1efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1efe0 size=16 callers=0 calls=0
*/
void sub_f1efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1efe0ULL || rel >= 0xf1eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1eff0 size=16 callers=0 calls=0
*/
void sub_f1eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1eff0ULL || rel >= 0xf1f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f000 size=16 callers=0 calls=0
*/
void sub_f1f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f000ULL || rel >= 0xf1f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f010 size=16 callers=0 calls=0
*/
void sub_f1f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f010ULL || rel >= 0xf1f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f020 size=16 callers=0 calls=0
*/
void sub_f1f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f020ULL || rel >= 0xf1f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f030 size=320 callers=4 calls=1
   calls: sub_134f2e0
*/
void sub_f1f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f030ULL || rel >= 0xf1f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f170 size=304 callers=0 calls=0
*/
void sub_f1f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f170ULL || rel >= 0xf1f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f2a0 size=336 callers=1 calls=2
   calls: sub_a74910, sub_e9d130
*/
void sub_f1f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f2a0ULL || rel >= 0xf1f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f3f0 size=288 callers=1 calls=3
   calls: sub_e76a20, sub_e7b660, sub_f1f510
*/
void sub_f1f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f3f0ULL || rel >= 0xf1f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f510 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_f1f5f0
*/
void sub_f1f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f510ULL || rel >= 0xf1f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f5f0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f1f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f5f0ULL || rel >= 0xf1f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f6e0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_f1f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f6e0ULL || rel >= 0xf1f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f760 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f1f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f760ULL || rel >= 0xf1f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f8d0 size=96 callers=0 calls=1
   calls: sub_f1faf0
*/
void sub_f1f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f8d0ULL || rel >= 0xf1f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f930 size=16 callers=0 calls=0
*/
void sub_f1f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f930ULL || rel >= 0xf1f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f940 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_f1f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f940ULL || rel >= 0xf1f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1f9e0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_f1f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1f9e0ULL || rel >= 0xf1faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1faa0 size=16 callers=0 calls=0
*/
void sub_f1faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1faa0ULL || rel >= 0xf1fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1fab0 size=16 callers=0 calls=0
*/
void sub_f1fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1fab0ULL || rel >= 0xf1fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1fac0 size=16 callers=0 calls=0
*/
void sub_f1fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1fac0ULL || rel >= 0xf1fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1fad0 size=32 callers=0 calls=0
*/
void sub_f1fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1fad0ULL || rel >= 0xf1faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1faf0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_f1faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1faf0ULL || rel >= 0xf1fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1fbd0 size=128 callers=0 calls=0
*/
void sub_f1fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1fbd0ULL || rel >= 0xf1fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f1fc50 size=2128 callers=0 calls=25
   calls: strinput, sub_12fe0b0, sub_149de50, sub_5dd790, sub_5e2930, sub_67b990, sub_78f150, sub_78f240, sub_794e80, sub_7950c0, sub_79ab20, sub_79b250
   ... +13 more
   ref: CommonOptionBar
   ref: common/iteminfo.dat
   ref: font_fs_32_00.bffnt
   ref: LiveCommViewTop
   ref: LiveCommViewIcon
   ref: font_fs_72_00.bffnt
   ref: SystemMessageView
   ref: LiveCommViewBg
*/
void LiveCommViewBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1fc50ULL || rel >= 0xf204a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f204a0 size=400 callers=1 calls=3
   calls: sub_e7c160, sub_f21960, sub_f21c90
*/
void sub_f204a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf204a0ULL || rel >= 0xf20630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f20630 size=96 callers=0 calls=3
   calls: sub_12fe2d0, sub_e76980, sub_e7ea20
*/
void sub_f20630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20630ULL || rel >= 0xf20690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f20690 size=1072 callers=0 calls=15
   calls: sub_104e050, sub_11061e0, sub_1106200, sub_1106f30, sub_1500ea0, sub_5cfad0, sub_795bc0, sub_e7eb10, sub_f21c90, sub_f23100, sub_f23250, sub_f233a0
   ... +3 more
   ref: LiveCommViewTop
   ref: LiveCommViewIcon
   ref: LiveCommViewBattle
   ref: LiveCommViewParts
*/
void LiveCommViewBattle_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20690ULL || rel >= 0xf20ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f20ac0 size=16 callers=0 calls=0
*/
void sub_f20ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20ac0ULL || rel >= 0xf20ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f20ad0 size=528 callers=0 calls=2
   calls: sub_e7c160, sub_f23640
*/
void sub_f20ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20ad0ULL || rel >= 0xf20ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f20ce0 size=304 callers=0 calls=3
   calls: sub_e7c160, sub_f23780, sub_f238d0
*/
void sub_f20ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20ce0ULL || rel >= 0xf20e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f20e10 size=624 callers=0 calls=5
   calls: sub_79c240, sub_e7c160, sub_f23780, sub_f23a60, sub_f23ba0
*/
void sub_f20e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20e10ULL || rel >= 0xf21080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21080 size=528 callers=0 calls=4
   calls: sub_79c240, sub_e7c160, sub_f238d0, sub_f23a60
*/
void sub_f21080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21080ULL || rel >= 0xf21290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21290 size=416 callers=0 calls=3
   calls: sub_79c240, sub_e7c160, sub_f238d0
*/
void sub_f21290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21290ULL || rel >= 0xf21430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21430 size=112 callers=0 calls=4
   calls: sub_12fe330, sub_5e2bc0, sub_e769b0, sub_e76a20
*/
void sub_f21430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21430ULL || rel >= 0xf214a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f214a0 size=608 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_65f110
*/
void sub_f214a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf214a0ULL || rel >= 0xf21700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21700 size=16 callers=0 calls=0
*/
void sub_f21700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21700ULL || rel >= 0xf21710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21710 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f21710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21710ULL || rel >= 0xf217c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f217c0 size=16 callers=0 calls=0
*/
void sub_f217c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf217c0ULL || rel >= 0xf217d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f217d0 size=16 callers=0 calls=0
*/
void sub_f217d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf217d0ULL || rel >= 0xf217e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f217e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f217e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf217e0ULL || rel >= 0xf21890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21890 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f21890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21890ULL || rel >= 0xf21940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21940 size=16 callers=0 calls=0
*/
void sub_f21940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21940ULL || rel >= 0xf21950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21950 size=16 callers=0 calls=0
*/
void sub_f21950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21950ULL || rel >= 0xf21960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21960 size=400 callers=1 calls=5
   calls: sub_10466c0, sub_11061d0, sub_67b990, sub_e76a20, sub_e7c210
*/
void sub_f21960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21960ULL || rel >= 0xf21af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21af0 size=288 callers=0 calls=0
*/
void sub_f21af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21af0ULL || rel >= 0xf21c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c10 size=16 callers=0 calls=0
*/
void sub_f21c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c10ULL || rel >= 0xf21c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c20 size=16 callers=0 calls=0
*/
void sub_f21c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c20ULL || rel >= 0xf21c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c30 size=16 callers=0 calls=0
*/
void sub_f21c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c30ULL || rel >= 0xf21c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c40 size=16 callers=0 calls=0
*/
void sub_f21c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c40ULL || rel >= 0xf21c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c50 size=16 callers=0 calls=0
*/
void sub_f21c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c50ULL || rel >= 0xf21c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c60 size=16 callers=0 calls=0
*/
void sub_f21c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c60ULL || rel >= 0xf21c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c70 size=16 callers=0 calls=0
*/
void sub_f21c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c70ULL || rel >= 0xf21c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c80 size=16 callers=0 calls=0
*/
void sub_f21c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c80ULL || rel >= 0xf21c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21c90 size=304 callers=49 calls=0
*/
void sub_f21c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21c90ULL || rel >= 0xf21dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21dc0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f21ee0
*/
void sub_f21dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21dc0ULL || rel >= 0xf21ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f21ee0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f21ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf21ee0ULL || rel >= 0xf22110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22110 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f22230
*/
void sub_f22110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22110ULL || rel >= 0xf22230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22230 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f223b0
*/
void sub_f22230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22230ULL || rel >= 0xf223b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f223b0 size=480 callers=1 calls=3
   calls: anonymous_2, sub_11061d0, sub_14ba3b0
*/
void sub_f223b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf223b0ULL || rel >= 0xf22590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22590 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f226b0
*/
void sub_f22590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22590ULL || rel >= 0xf226b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f226b0 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f22830
*/
void sub_f226b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf226b0ULL || rel >= 0xf22830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22830 size=304 callers=1 calls=2
   calls: anonymous_2, sub_11061d0
*/
void sub_f22830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22830ULL || rel >= 0xf22960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22960 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f22a80
*/
void sub_f22960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22960ULL || rel >= 0xf22a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22a80 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f22c00
*/
void sub_f22a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22a80ULL || rel >= 0xf22c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22c00 size=352 callers=1 calls=3
   calls: anonymous_2, sub_11061d0, sub_14ba3b0
*/
void sub_f22c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22c00ULL || rel >= 0xf22d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22d60 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f22e80
*/
void sub_f22d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22d60ULL || rel >= 0xf22e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f22e80 size=640 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f22e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf22e80ULL || rel >= 0xf23100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23100 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f23100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23100ULL || rel >= 0xf23250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23250 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f23250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23250ULL || rel >= 0xf233a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f233a0 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f233a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf233a0ULL || rel >= 0xf234f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f234f0 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f234f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf234f0ULL || rel >= 0xf23640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23640 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_f23640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23640ULL || rel >= 0xf23780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23780 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_f23780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23780ULL || rel >= 0xf238d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f238d0 size=400 callers=3 calls=1
   calls: anonymous
*/
void sub_f238d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf238d0ULL || rel >= 0xf23a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23a60 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_f23a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23a60ULL || rel >= 0xf23ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23ba0 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_f23ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23ba0ULL || rel >= 0xf23d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23d00 size=128 callers=0 calls=0
*/
void sub_f23d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23d00ULL || rel >= 0xf23d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f23d80 size=2896 callers=0 calls=14
   calls: sub_135a1a0, sub_14aad40, sub_14e1a00, sub_17ac790, sub_17b5e50, sub_5cfad0, sub_7a3a10, sub_7a3c20, sub_e6a220, sub_e7eb10, sub_e83930, sub_e83d70
   ... +2 more
   ref: width_offset
   ref: grid_00
   ref: net_button
   ref: cancel_button
   ref: stamp_button
   ref: close_button
*/
void net_button(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf23d80ULL || rel >= 0xf248d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f248d0 size=32 callers=14 calls=0
*/
void sub_f248d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf248d0ULL || rel >= 0xf248f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f248f0 size=272 callers=15 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_f248f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf248f0ULL || rel >= 0xf24a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f24a00 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_f24a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf24a00ULL || rel >= 0xf24a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f24a50 size=416 callers=0 calls=0
*/
void sub_f24a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf24a50ULL || rel >= 0xf24bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f24bf0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/live_comm_app_parts_00_lyt.bin
   ref: bin/appli/live_comm/bin/uikit_live_comm_app_parts_00.bin
*/
void uikit_live_comm_app_parts_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf24bf0ULL || rel >= 0xf24dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f24dd0 size=304 callers=3 calls=0
*/
void sub_f24dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf24dd0ULL || rel >= 0xf24f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f24f00 size=288 callers=9 calls=1
   calls: sub_e83430
*/
void sub_f24f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf24f00ULL || rel >= 0xf25020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f25020 size=624 callers=3 calls=1
   calls: sub_14ab2b0
*/
void sub_f25020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf25020ULL || rel >= 0xf25290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f25290 size=208 callers=1 calls=1
   calls: sub_eb7b00
*/
void sub_f25290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf25290ULL || rel >= 0xf25360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f25360 size=752 callers=5 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_f25360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf25360ULL || rel >= 0xf25650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f25650 size=1088 callers=1 calls=5
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_f25650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf25650ULL || rel >= 0xf25a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f25a90 size=464 callers=3 calls=3
   calls: sub_14ea4f0, sub_67d450, sub_e7eb10
*/
void sub_f25a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf25a90ULL || rel >= 0xf25c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f25c60 size=1088 callers=1 calls=5
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_f25c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf25c60ULL || rel >= 0xf260a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f260a0 size=1408 callers=1 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_14ea9e0, sub_67d450, sub_e7eb10
*/
void sub_f260a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf260a0ULL || rel >= 0xf26620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26620 size=16 callers=1 calls=0
*/
void sub_f26620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26620ULL || rel >= 0xf26630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26630 size=16 callers=0 calls=0
*/
void sub_f26630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26630ULL || rel >= 0xf26640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26640 size=16 callers=0 calls=0
*/
void sub_f26640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26640ULL || rel >= 0xf26650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26650 size=16 callers=0 calls=0
*/
void sub_f26650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26650ULL || rel >= 0xf26660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26660 size=16 callers=0 calls=0
*/
void sub_f26660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26660ULL || rel >= 0xf26670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f26670 size=16 callers=0 calls=0
*/
void sub_f26670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf26670ULL || rel >= 0xf26680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

