/* main functions 014bb6b0..014ddfb0 (177 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 014bb6b0 size=384 callers=2 calls=2
   calls: sub_786050, sub_f1db30
   ref: bin/appli/icon_item/item_dummy.bntx
   ref: bin/appli/icon_item/item_%04d.bntx
*/
void item_dummy_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb6b0ULL || rel >= 0x14bb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb830 size=304 callers=12 calls=2
   calls: item_dummy_2, sub_14ba820
*/
void sub_14bb830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb830ULL || rel >= 0x14bb960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb960 size=160 callers=3 calls=2
   calls: sub_14bb830, sub_786b60
*/
void sub_14bb960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb960ULL || rel >= 0x14bba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bba00 size=208 callers=0 calls=1
   calls: sub_14ba590
*/
void sub_14bba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bba00ULL || rel >= 0x14bbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bbad0 size=80 callers=0 calls=0
*/
void sub_14bbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bbad0ULL || rel >= 0x14bbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bbb20 size=192 callers=6 calls=2
   calls: sub_14bbbe0, sub_14bbd10
*/
void sub_14bbb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bbb20ULL || rel >= 0x14bbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bbbe0 size=304 callers=4 calls=3
   calls: sub_12f9ef0, sub_763d00, sub_76f700
*/
void sub_14bbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bbbe0ULL || rel >= 0x14bbd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bbd10 size=544 callers=3 calls=3
   calls: poke_icon__04d__02d_c_n_s, sub_14ba9a0, sub_14bc1d0
*/
void sub_14bbd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bbd10ULL || rel >= 0x14bbf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bbf30 size=304 callers=11 calls=2
   calls: sub_14bbbe0, sub_14bc060
*/
void sub_14bbf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bbf30ULL || rel >= 0x14bc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc060 size=368 callers=18 calls=3
   calls: poke_icon__04d__02d_c_n_s, sub_14ba820, sub_14bc1d0
*/
void sub_14bc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc060ULL || rel >= 0x14bc1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc1d0 size=704 callers=2 calls=3
   calls: sub_76bc00, sub_76bc60, sub_76bc80
*/
void sub_14bc1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc1d0ULL || rel >= 0x14bc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc490 size=400 callers=2 calls=1
   calls: sub_f1db30
   ref: bin/appli/icon_pokemon/poke_icon_%04d_%02d%c_n%s.bntx
*/
void poke_icon__04d__02d_c_n_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc490ULL || rel >= 0x14bc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc620 size=176 callers=0 calls=0
*/
void sub_14bc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc620ULL || rel >= 0x14bc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc6d0 size=208 callers=0 calls=1
   calls: sub_14ba590
*/
void sub_14bc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc6d0ULL || rel >= 0x14bc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc7a0 size=368 callers=2 calls=1
   calls: sub_f1db30
   ref: bin/appli/icon_ribbon/item_dummy.bntx
   ref: bin/appli/icon_ribbon/%s.bntx
*/
void item_dummy_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc7a0ULL || rel >= 0x14bc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bc910 size=384 callers=2 calls=2
   calls: item_dummy_3, sub_14ba820
*/
void sub_14bc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc910ULL || rel >= 0x14bca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bca90 size=208 callers=0 calls=1
   calls: sub_14ba590
*/
void sub_14bca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bca90ULL || rel >= 0x14bcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcb60 size=368 callers=2 calls=1
   calls: sub_f1db30
   ref: bin/appli/icon_company/%s.bntx
   ref: bin/appli/icon_company/icon_company_logo_00.bntx
*/
void icon_company_logo_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcb60ULL || rel >= 0x14bccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bccd0 size=384 callers=3 calls=2
   calls: icon_company_logo_00, sub_14ba820
*/
void sub_14bccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bccd0ULL || rel >= 0x14bce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bce50 size=176 callers=0 calls=0
*/
void sub_14bce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bce50ULL || rel >= 0x14bcf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf00 size=16 callers=0 calls=0
*/
void sub_14bcf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf00ULL || rel >= 0x14bcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf10 size=16 callers=0 calls=0
*/
void sub_14bcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf10ULL || rel >= 0x14bcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf20 size=32 callers=0 calls=0
*/
void sub_14bcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf20ULL || rel >= 0x14bcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf40 size=16 callers=0 calls=0
*/
void sub_14bcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf40ULL || rel >= 0x14bcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf50 size=16 callers=0 calls=0
*/
void sub_14bcf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf50ULL || rel >= 0x14bcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf60 size=16 callers=0 calls=0
*/
void sub_14bcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf60ULL || rel >= 0x14bcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf70 size=16 callers=0 calls=0
*/
void sub_14bcf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf70ULL || rel >= 0x14bcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf80 size=16 callers=0 calls=0
*/
void sub_14bcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf80ULL || rel >= 0x14bcf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcf90 size=16 callers=0 calls=0
*/
void sub_14bcf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcf90ULL || rel >= 0x14bcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcfa0 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_14bcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcfa0ULL || rel >= 0x14bcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bcfd0 size=352 callers=1 calls=2
   calls: icon_player_poke_01, sub_14ba820
*/
void sub_14bcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bcfd0ULL || rel >= 0x14bd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd130 size=368 callers=4 calls=1
   calls: sub_f1db30
   ref: bin/appli/icon_player/icon_player_poke_01.bntx
   ref: bin/appli/icon_player/%s.bntx
*/
void icon_player_poke_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd130ULL || rel >= 0x14bd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd2a0 size=384 callers=1 calls=2
   calls: icon_player_poke_01, sub_14ba820
*/
void sub_14bd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd2a0ULL || rel >= 0x14bd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd420 size=576 callers=1 calls=2
   calls: sub_11061d0, sub_14ba3b0
*/
void sub_14bd420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd420ULL || rel >= 0x14bd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd660 size=432 callers=1 calls=4
   calls: sub_149de50, sub_5dd790, sub_5e26a0, sub_5e2930
   ref: bin/appli/live_comm/data_table/live_comm_player.prmb
*/
void live_comm_player(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd660ULL || rel >= 0x14bd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd810 size=112 callers=1 calls=2
   calls: sub_1106200, sub_1106f30
*/
void sub_14bd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd810ULL || rel >= 0x14bd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd880 size=304 callers=3 calls=4
   calls: sub_1106320, sub_11063e0, sub_11069b0, sub_14bcfd0
   ref: player_icon_table
   ref: iconName
*/
void player_icon_table_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd880ULL || rel >= 0x14bd9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bd9b0 size=416 callers=14 calls=4
   calls: sub_1106320, sub_11063e0, sub_11069b0, sub_14bd2a0
   ref: player_icon_table
   ref: iconName
*/
void player_icon_table_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bd9b0ULL || rel >= 0x14bdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdb50 size=336 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14bdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdb50ULL || rel >= 0x14bdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdca0 size=16 callers=0 calls=0
*/
void sub_14bdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdca0ULL || rel >= 0x14bdcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdcb0 size=16 callers=0 calls=0
*/
void sub_14bdcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdcb0ULL || rel >= 0x14bdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdcc0 size=16 callers=0 calls=0
*/
void sub_14bdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdcc0ULL || rel >= 0x14bdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdcd0 size=128 callers=3 calls=0
*/
void sub_14bdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdcd0ULL || rel >= 0x14bdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdd50 size=16 callers=2 calls=0
*/
void sub_14bdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdd50ULL || rel >= 0x14bdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bdd60 size=1840 callers=1 calls=18
   calls: sub_1106220, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_1106f30, sub_13574b0, sub_136b530, sub_136b580, sub_136b590, sub_136b6a0, sub_136b780
   ... +6 more
   ref: CameraTarget
   ref: FrameIndex
   ref: CameraPos
   ref: Bg1Index
   ref: CameraRotate
   ref: CameraFovy
   ref: FacialIndex
   ref: GlossIndex
*/
void CameraTarget(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bdd60ULL || rel >= 0x14be490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014be490 size=1456 callers=6 calls=12
   calls: sub_12f9ef0, sub_13574b0, sub_135a1a0, sub_135a760, sub_136b780, sub_136e710, sub_1379a60, sub_1379d60, sub_137a010, sub_137b970, sub_14bea40, sub_14bfc40
*/
void sub_14be490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14be490ULL || rel >= 0x14bea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bea40 size=240 callers=3 calls=2
   calls: sub_135a1a0, sub_136b730
*/
void sub_14bea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bea40ULL || rel >= 0x14beb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014beb30 size=544 callers=4 calls=1
   calls: sub_1100aa0
*/
void sub_14beb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14beb30ULL || rel >= 0x14bed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bed50 size=208 callers=2 calls=4
   calls: sub_67c120, sub_b6f8c0, sub_b6fb60, sub_b70440
*/
void sub_14bed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bed50ULL || rel >= 0x14bee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bee20 size=160 callers=0 calls=1
   calls: sub_b6f8c0
*/
void sub_14bee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bee20ULL || rel >= 0x14beec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014beec0 size=384 callers=6 calls=2
   calls: sub_14c46d0, sub_14c4bd0
*/
void sub_14beec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14beec0ULL || rel >= 0x14bf040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf040 size=16 callers=6 calls=0
*/
void sub_14bf040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf040ULL || rel >= 0x14bf050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf050 size=672 callers=0 calls=0
*/
void sub_14bf050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf050ULL || rel >= 0x14bf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf2f0 size=16 callers=6 calls=0
*/
void sub_14bf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf2f0ULL || rel >= 0x14bf300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf300 size=400 callers=1 calls=10
   calls: ap_cardpose_number, eyebrow, sub_14c41b0, sub_14c51b0, sub_14c8ee0, sub_14c8f40, sub_14c9710, sub_e7f2e0, sub_e7f400, sub_e807e0
*/
void sub_14bf300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf300ULL || rel >= 0x14bf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf490 size=16 callers=7 calls=0
*/
void sub_14bf490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf490ULL || rel >= 0x14bf4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf4a0 size=688 callers=0 calls=1
   calls: sub_14bf300
*/
void sub_14bf4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf4a0ULL || rel >= 0x14bf750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf750 size=16 callers=10 calls=0
*/
void sub_14bf750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf750ULL || rel >= 0x14bf760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf760 size=608 callers=0 calls=2
   calls: sub_14beb30, sub_14bed50
*/
void sub_14bf760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf760ULL || rel >= 0x14bf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bf9c0 size=96 callers=6 calls=1
   calls: sub_b6f8c0
*/
void sub_14bf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bf9c0ULL || rel >= 0x14bfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfa20 size=32 callers=0 calls=0
*/
void sub_14bfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfa20ULL || rel >= 0x14bfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfa40 size=32 callers=0 calls=0
*/
void sub_14bfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfa40ULL || rel >= 0x14bfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfa60 size=32 callers=0 calls=0
*/
void sub_14bfa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfa60ULL || rel >= 0x14bfa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfa80 size=16 callers=0 calls=0
*/
void sub_14bfa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfa80ULL || rel >= 0x14bfa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfa90 size=208 callers=3 calls=0
*/
void sub_14bfa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfa90ULL || rel >= 0x14bfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfb60 size=16 callers=3 calls=0
*/
void sub_14bfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfb60ULL || rel >= 0x14bfb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfb70 size=16 callers=3 calls=0
*/
void sub_14bfb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfb70ULL || rel >= 0x14bfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfb80 size=32 callers=5 calls=0
*/
void sub_14bfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfb80ULL || rel >= 0x14bfba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfba0 size=16 callers=3 calls=0
*/
void sub_14bfba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfba0ULL || rel >= 0x14bfbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfbb0 size=144 callers=6 calls=0
*/
void sub_14bfbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfbb0ULL || rel >= 0x14bfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfc40 size=128 callers=1 calls=0
*/
void sub_14bfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfc40ULL || rel >= 0x14bfcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfcc0 size=112 callers=0 calls=1
   calls: sub_14c46d0
*/
void sub_14bfcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfcc0ULL || rel >= 0x14bfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfd30 size=112 callers=0 calls=1
   calls: sub_14c46d0
*/
void sub_14bfd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfd30ULL || rel >= 0x14bfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfda0 size=112 callers=0 calls=1
   calls: sub_14c46d0
*/
void sub_14bfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfda0ULL || rel >= 0x14bfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfe10 size=112 callers=0 calls=1
   calls: sub_14c46d0
*/
void sub_14bfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfe10ULL || rel >= 0x14bfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfe80 size=368 callers=0 calls=1
   calls: CameraTransRectMin
*/
void sub_14bfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfe80ULL || rel >= 0x14bfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bfff0 size=144 callers=0 calls=0
*/
void sub_14bfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bfff0ULL || rel >= 0x14c0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0080 size=624 callers=0 calls=1
   calls: sub_5fe6a0
*/
void sub_14c0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0080ULL || rel >= 0x14c02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c02f0 size=80 callers=0 calls=0
*/
void sub_14c02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c02f0ULL || rel >= 0x14c0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0340 size=832 callers=0 calls=11
   calls: sub_14c6e90, sub_b58470, sub_e9fa00, sub_ea0fd0, sub_ed33b0, sub_ed9480, sub_ee4af0, sub_ee4cf0, sub_ee5250, sub_ee7350, sub_ee79c0
*/
void sub_14c0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0340ULL || rel >= 0x14c0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0680 size=224 callers=0 calls=1
   calls: sub_ed29f0
*/
void sub_14c0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0680ULL || rel >= 0x14c0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0760 size=1152 callers=0 calls=8
   calls: sub_5e2bc0, sub_603250, sub_6323a0, sub_64a740, sub_64a890, sub_c55af0, sub_ea0fd0, sub_ed1920
*/
void sub_14c0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0760ULL || rel >= 0x14c0be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0be0 size=112 callers=0 calls=0
*/
void sub_14c0be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0be0ULL || rel >= 0x14c0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0c50 size=224 callers=0 calls=2
   calls: sub_14c3440, sub_14c5180
*/
void sub_14c0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0c50ULL || rel >= 0x14c0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0d30 size=160 callers=0 calls=1
   calls: sub_14c5400
*/
void sub_14c0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0d30ULL || rel >= 0x14c0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0dd0 size=384 callers=0 calls=3
   calls: sub_14c8fa0, sub_14c9300, sub_14c9390
*/
void sub_14c0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0dd0ULL || rel >= 0x14c0f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0f50 size=96 callers=0 calls=1
   calls: sub_14c93e0
*/
void sub_14c0f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0f50ULL || rel >= 0x14c0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c0fb0 size=1712 callers=0 calls=4
   calls: sub_1307de0, sub_1308340, sub_5cfad0, sub_c4ac70
*/
void sub_14c0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c0fb0ULL || rel >= 0x14c1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1660 size=272 callers=0 calls=0
*/
void sub_14c1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1660ULL || rel >= 0x14c1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1770 size=192 callers=0 calls=2
   calls: sub_78faa0, sub_ee7890
*/
void sub_14c1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1770ULL || rel >= 0x14c1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1830 size=48 callers=0 calls=0
*/
void sub_14c1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1830ULL || rel >= 0x14c1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1860 size=800 callers=0 calls=4
   calls: sub_1306f20, sub_e7d190, sub_e7e400, sub_e7e550
*/
void sub_14c1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1860ULL || rel >= 0x14c1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1b80 size=96 callers=0 calls=2
   calls: sub_e7d190, sub_e7e5e0
*/
void sub_14c1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1b80ULL || rel >= 0x14c1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1be0 size=400 callers=0 calls=4
   calls: sub_14c3540, sub_14c3660, sub_e7f200, sub_e7f250
   ref: CardFront
   ref: CardBack
*/
void CardFront(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1be0ULL || rel >= 0x14c1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1d70 size=160 callers=0 calls=1
   calls: sub_e7f290
*/
void sub_14c1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1d70ULL || rel >= 0x14c1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1e10 size=160 callers=0 calls=1
   calls: sub_b6f8c0
*/
void sub_14c1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1e10ULL || rel >= 0x14c1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c1eb0 size=416 callers=0 calls=2
   calls: sub_14bdcd0, sub_e806b0
*/
void sub_14c1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c1eb0ULL || rel >= 0x14c2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2050 size=64 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_14c2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2050ULL || rel >= 0x14c2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2090 size=272 callers=0 calls=3
   calls: sub_14c9740, sub_14c9a60, sub_14c9a70
*/
void sub_14c2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2090ULL || rel >= 0x14c21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c21a0 size=272 callers=0 calls=3
   calls: sub_14c9740, sub_14c9a60, sub_14c9a70
*/
void sub_14c21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c21a0ULL || rel >= 0x14c22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c22b0 size=272 callers=0 calls=3
   calls: sub_14c9740, sub_14c9a60, sub_14c9a70
*/
void sub_14c22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c22b0ULL || rel >= 0x14c23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c23c0 size=656 callers=0 calls=6
   calls: sub_14d3f20, sub_14d4080, sub_14d41f0, sub_14d4380, sub_14d4410, sub_14d44d0
*/
void sub_14c23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c23c0ULL || rel >= 0x14c2650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2650 size=352 callers=0 calls=6
   calls: sub_14c54f0, sub_14c5650, sub_14c57f0, sub_14c59f0, sub_14c5bf0, sub_14c5e60
*/
void sub_14c2650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2650ULL || rel >= 0x14c27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c27b0 size=208 callers=0 calls=2
   calls: sub_14c5510, sub_14c5e70
*/
void sub_14c27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c27b0ULL || rel >= 0x14c2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2880 size=192 callers=0 calls=0
*/
void sub_14c2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2880ULL || rel >= 0x14c2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2940 size=160 callers=0 calls=0
*/
void sub_14c2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2940ULL || rel >= 0x14c29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c29e0 size=304 callers=0 calls=1
   calls: sub_14c75e0
*/
void sub_14c29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c29e0ULL || rel >= 0x14c2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2b10 size=144 callers=0 calls=1
   calls: sub_14c7850
*/
void sub_14c2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2b10ULL || rel >= 0x14c2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2ba0 size=160 callers=0 calls=2
   calls: eyebrow, sub_14c8ee0
*/
void sub_14c2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2ba0ULL || rel >= 0x14c2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2c40 size=144 callers=0 calls=2
   calls: ap_cardpose_number, sub_14c8f40
*/
void sub_14c2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2c40ULL || rel >= 0x14c2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2cd0 size=144 callers=0 calls=1
   calls: sub_14c5520
*/
void sub_14c2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2cd0ULL || rel >= 0x14c2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2d60 size=368 callers=0 calls=1
   calls: sub_b6f8c0
*/
void sub_14c2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2d60ULL || rel >= 0x14c2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c2ed0 size=336 callers=0 calls=3
   calls: sub_14c3c10, sub_14d3f20, sub_b6f8c0
*/
void sub_14c2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c2ed0ULL || rel >= 0x14c3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3020 size=224 callers=0 calls=1
   calls: sub_b6f8c0
*/
void sub_14c3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3020ULL || rel >= 0x14c3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3100 size=48 callers=0 calls=0
*/
void sub_14c3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3100ULL || rel >= 0x14c3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3130 size=400 callers=0 calls=3
   calls: sub_c539f0, sub_c545c0, sub_c54b90
   ref: fel_910
*/
void fel_910_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3130ULL || rel >= 0x14c32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c32c0 size=48 callers=0 calls=0
*/
void sub_14c32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c32c0ULL || rel >= 0x14c32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c32f0 size=192 callers=0 calls=2
   calls: sub_7c2d90, sub_7c2db0
*/
void sub_14c32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c32f0ULL || rel >= 0x14c33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c33b0 size=32 callers=0 calls=1
   calls: sub_14c9ab0
*/
void sub_14c33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c33b0ULL || rel >= 0x14c33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c33d0 size=32 callers=0 calls=0
*/
void sub_14c33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c33d0ULL || rel >= 0x14c33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c33f0 size=16 callers=0 calls=0
*/
void sub_14c33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c33f0ULL || rel >= 0x14c3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3400 size=32 callers=0 calls=0
*/
void sub_14c3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3400ULL || rel >= 0x14c3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3420 size=32 callers=0 calls=0
*/
void sub_14c3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3420ULL || rel >= 0x14c3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3440 size=256 callers=1 calls=1
   calls: sub_14c4fd0
*/
void sub_14c3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3440ULL || rel >= 0x14c3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3540 size=288 callers=1 calls=2
   calls: sub_14c3780, sub_e809c0
*/
void sub_14c3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3540ULL || rel >= 0x14c3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3660 size=288 callers=1 calls=2
   calls: sub_14c39b0, sub_e809c0
*/
void sub_14c3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3660ULL || rel >= 0x14c3780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3780 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_14c3780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3780ULL || rel >= 0x14c39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c39b0 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_14c39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c39b0ULL || rel >= 0x14c3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3c10 size=368 callers=1 calls=4
   calls: sub_14c3d80, sub_14c3f90, sub_ea3d10, sub_ea4740
*/
void sub_14c3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3c10ULL || rel >= 0x14c3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3d80 size=528 callers=1 calls=1
   calls: sub_ea4740
*/
void sub_14c3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3d80ULL || rel >= 0x14c3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c3f90 size=544 callers=1 calls=1
   calls: sub_ea4740
*/
void sub_14c3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c3f90ULL || rel >= 0x14c41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c41b0 size=400 callers=1 calls=2
   calls: sub_14c9740, sub_14c9a60
*/
void sub_14c41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c41b0ULL || rel >= 0x14c4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4340 size=912 callers=1 calls=2
   calls: sub_14c4340, sub_b6f8c0
*/
void sub_14c4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4340ULL || rel >= 0x14c46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c46d0 size=1152 callers=6 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_e7d190
*/
void sub_14c46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c46d0ULL || rel >= 0x14c4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4b50 size=48 callers=0 calls=1
   calls: sub_14c46d0
*/
void sub_14c4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4b50ULL || rel >= 0x14c4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4b80 size=16 callers=0 calls=0
*/
void sub_14c4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4b80ULL || rel >= 0x14c4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4b90 size=16 callers=0 calls=0
*/
void sub_14c4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4b90ULL || rel >= 0x14c4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4ba0 size=16 callers=0 calls=0
*/
void sub_14c4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4ba0ULL || rel >= 0x14c4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4bb0 size=32 callers=0 calls=0
*/
void sub_14c4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4bb0ULL || rel >= 0x14c4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4bd0 size=1024 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_65f1c0, sub_b6f8c0
*/
void sub_14c4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4bd0ULL || rel >= 0x14c4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c4fd0 size=432 callers=1 calls=2
   calls: sub_14c6a50, sub_14c6cb0
*/
void sub_14c4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4fd0ULL || rel >= 0x14c5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5180 size=48 callers=1 calls=0
*/
void sub_14c5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5180ULL || rel >= 0x14c51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c51b0 size=16 callers=1 calls=0
*/
void sub_14c51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c51b0ULL || rel >= 0x14c51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c51c0 size=576 callers=0 calls=7
   calls: sub_14c6050, sub_14c6100, sub_14c6370, sub_14c6450, sub_b33510, sub_b33640, sub_b336a0
*/
void sub_14c51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c51c0ULL || rel >= 0x14c5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5400 size=240 callers=1 calls=2
   calls: sub_7c2d90, sub_7c2db0
*/
void sub_14c5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5400ULL || rel >= 0x14c54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c54f0 size=32 callers=1 calls=0
*/
void sub_14c54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c54f0ULL || rel >= 0x14c5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5510 size=16 callers=1 calls=0
*/
void sub_14c5510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5510ULL || rel >= 0x14c5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5520 size=96 callers=1 calls=1
   calls: sub_14c5580
*/
void sub_14c5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5520ULL || rel >= 0x14c5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5580 size=208 callers=1 calls=1
   calls: sub_b33760
*/
void sub_14c5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5580ULL || rel >= 0x14c5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5650 size=112 callers=1 calls=1
   calls: sub_972c70
*/
void sub_14c5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5650ULL || rel >= 0x14c56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c56c0 size=224 callers=2 calls=1
   calls: sub_14c6690
   ref: eyebrow
*/
void eyebrow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c56c0ULL || rel >= 0x14c57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c57a0 size=80 callers=2 calls=1
   calls: sub_14c6690
   ref: ap_cardpose_number
*/
void ap_cardpose_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c57a0ULL || rel >= 0x14c57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c57f0 size=16 callers=1 calls=0
*/
void sub_14c57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c57f0ULL || rel >= 0x14c5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5800 size=496 callers=0 calls=3
   calls: sub_607750, sub_b33c60, sub_b48350
*/
void sub_14c5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5800ULL || rel >= 0x14c59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c59f0 size=16 callers=1 calls=0
*/
void sub_14c59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c59f0ULL || rel >= 0x14c5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5a00 size=496 callers=0 calls=3
   calls: sub_607750, sub_b33c60, sub_b483f0
*/
void sub_14c5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5a00ULL || rel >= 0x14c5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5bf0 size=16 callers=1 calls=0
*/
void sub_14c5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5bf0ULL || rel >= 0x14c5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5c00 size=608 callers=0 calls=4
   calls: sub_607750, sub_b33c60, sub_b46b30, sub_b99000
*/
void sub_14c5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5c00ULL || rel >= 0x14c5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5e60 size=16 callers=2 calls=0
*/
void sub_14c5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5e60ULL || rel >= 0x14c5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5e70 size=32 callers=2 calls=0
*/
void sub_14c5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5e70ULL || rel >= 0x14c5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5e90 size=112 callers=0 calls=1
   calls: sub_14c6a50
*/
void sub_14c5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5e90ULL || rel >= 0x14c5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5f00 size=112 callers=0 calls=1
   calls: sub_14c6a50
*/
void sub_14c5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5f00ULL || rel >= 0x14c5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5f70 size=112 callers=0 calls=1
   calls: sub_14c6a50
*/
void sub_14c5f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5f70ULL || rel >= 0x14c5fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c5fe0 size=112 callers=0 calls=1
   calls: sub_14c6a50
*/
void sub_14c5fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c5fe0ULL || rel >= 0x14c6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6050 size=176 callers=1 calls=3
   calls: sub_986200, sub_ea0fd0, sub_ea9e40
*/
void sub_14c6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6050ULL || rel >= 0x14c6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6100 size=624 callers=1 calls=3
   calls: sub_b334c0, sub_b334f0, sub_ea0fd0
*/
void sub_14c6100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6100ULL || rel >= 0x14c6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6370 size=224 callers=1 calls=5
   calls: sub_59a4f0, sub_59bee0, sub_5d99d0, sub_b44bb0, sub_b8b050
*/
void sub_14c6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6370ULL || rel >= 0x14c6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6450 size=432 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46720
*/
void sub_14c6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6450ULL || rel >= 0x14c6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6600 size=16 callers=0 calls=0
*/
void sub_14c6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6600ULL || rel >= 0x14c6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6610 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_14c6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6610ULL || rel >= 0x14c6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6640 size=32 callers=0 calls=0
*/
void sub_14c6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6640ULL || rel >= 0x14c6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6660 size=16 callers=0 calls=0
*/
void sub_14c6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6660ULL || rel >= 0x14c6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6670 size=16 callers=0 calls=0
*/
void sub_14c6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6670ULL || rel >= 0x14c6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6680 size=16 callers=0 calls=0
*/
void sub_14c6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6680ULL || rel >= 0x14c6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6690 size=624 callers=4 calls=6
   calls: sub_59b090, sub_59b0c0, sub_5cfad0, sub_607750, sub_b33c60, sub_b46f20
*/
void sub_14c6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6690ULL || rel >= 0x14c6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6900 size=16 callers=0 calls=0
*/
void sub_14c6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6900ULL || rel >= 0x14c6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6910 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_14c6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6910ULL || rel >= 0x14c6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6950 size=32 callers=0 calls=0
*/
void sub_14c6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6950ULL || rel >= 0x14c6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6970 size=16 callers=0 calls=0
*/
void sub_14c6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6970ULL || rel >= 0x14c6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6980 size=16 callers=0 calls=0
*/
void sub_14c6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6980ULL || rel >= 0x14c6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6990 size=192 callers=0 calls=1
   calls: sub_c51540
*/
void sub_14c6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6990ULL || rel >= 0x14c6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6a50 size=480 callers=6 calls=2
   calls: sub_5cf8f0, sub_65f110
*/
void sub_14c6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6a50ULL || rel >= 0x14c6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6c30 size=48 callers=0 calls=1
   calls: sub_14c6a50
*/
void sub_14c6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6c30ULL || rel >= 0x14c6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6c60 size=16 callers=0 calls=0
*/
void sub_14c6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6c60ULL || rel >= 0x14c6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6c70 size=16 callers=0 calls=0
*/
void sub_14c6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6c70ULL || rel >= 0x14c6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6c80 size=16 callers=0 calls=0
*/
void sub_14c6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6c80ULL || rel >= 0x14c6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6c90 size=32 callers=0 calls=0
*/
void sub_14c6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6c90ULL || rel >= 0x14c6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6cb0 size=480 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_65f1c0, sub_b4c060
*/
void sub_14c6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6cb0ULL || rel >= 0x14c6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c6e90 size=400 callers=1 calls=2
   calls: CopyImagePath, sub_602030
*/
void sub_14c6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c6e90ULL || rel >= 0x14c7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7020 size=320 callers=1 calls=3
   calls: copy, sub_14c7b20, sub_6580f0
   ref: CopyImagePath
*/
void CopyImagePath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7020ULL || rel >= 0x14c7160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7160 size=192 callers=0 calls=0
*/
void sub_14c7160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7160ULL || rel >= 0x14c7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7220 size=192 callers=0 calls=0
*/
void sub_14c7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7220ULL || rel >= 0x14c72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c72e0 size=192 callers=0 calls=0
*/
void sub_14c72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c72e0ULL || rel >= 0x14c73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c73a0 size=192 callers=0 calls=0
*/
void sub_14c73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c73a0ULL || rel >= 0x14c7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7460 size=192 callers=0 calls=0
*/
void sub_14c7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7460ULL || rel >= 0x14c7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7520 size=192 callers=0 calls=0
*/
void sub_14c7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7520ULL || rel >= 0x14c75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c75e0 size=256 callers=1 calls=3
   calls: sub_14c76e0, sub_5f8bc0, sub_5f8c40
*/
void sub_14c75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c75e0ULL || rel >= 0x14c76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c76e0 size=368 callers=1 calls=8
   calls: sub_17876b0, sub_17876c0, sub_5f8bc0, sub_5f8c40, sub_6580c0, sub_6829a0, sub_682dd0, u_ColorBuffer
*/
void sub_14c76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c76e0ULL || rel >= 0x14c7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7850 size=128 callers=1 calls=0
*/
void sub_14c7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7850ULL || rel >= 0x14c78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c78d0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_14c78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c78d0ULL || rel >= 0x14c7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7940 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_14c7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7940ULL || rel >= 0x14c79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c79b0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_14c79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c79b0ULL || rel >= 0x14c7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7a20 size=128 callers=0 calls=0
*/
void sub_14c7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7a20ULL || rel >= 0x14c7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7aa0 size=128 callers=0 calls=0
*/
void sub_14c7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7aa0ULL || rel >= 0x14c7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7b20 size=288 callers=1 calls=1
   calls: sub_657f80
*/
void sub_14c7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7b20ULL || rel >= 0x14c7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c7c40 size=4768 callers=1 calls=11
   calls: sub_1106220, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: DefCameraFovy
   ref: CameraFovyRange
   ref: CameraTransRectMax
   ref: TexDescBoost
   ref: Bottom
   ref: TexDescNormal
   ref: facialData
   ref: CameraFovySpeed
*/
void CameraTransRectMin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c7c40ULL || rel >= 0x14c8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c8ee0 size=96 callers=4 calls=0
*/
void sub_14c8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c8ee0ULL || rel >= 0x14c8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c8f40 size=96 callers=4 calls=0
*/
void sub_14c8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c8f40ULL || rel >= 0x14c8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c8fa0 size=320 callers=1 calls=2
   calls: sub_14c90e0, sub_14ca6b0
*/
void sub_14c8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c8fa0ULL || rel >= 0x14c90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c90e0 size=544 callers=1 calls=5
   calls: sub_14ba3b0, sub_14cab40, sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14c90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c90e0ULL || rel >= 0x14c9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9300 size=144 callers=1 calls=2
   calls: sub_14ba7b0, sub_14c9cd0
*/
void sub_14c9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9300ULL || rel >= 0x14c9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9390 size=80 callers=1 calls=1
   calls: sub_14ba810
*/
void sub_14c9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9390ULL || rel >= 0x14c93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c93e0 size=16 callers=1 calls=0
*/
void sub_14c93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c93e0ULL || rel >= 0x14c93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c93f0 size=800 callers=0 calls=3
   calls: sub_14bab00, sub_14bb180, sub_14ca4b0
*/
void sub_14c93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c93f0ULL || rel >= 0x14c9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9710 size=48 callers=1 calls=1
   calls: sub_14bacd0
*/
void sub_14c9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9710ULL || rel >= 0x14c9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9740 size=16 callers=6 calls=0
*/
void sub_14c9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9740ULL || rel >= 0x14c9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9750 size=784 callers=0 calls=2
   calls: sub_14ba820, sub_95afb0
*/
void sub_14c9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9750ULL || rel >= 0x14c9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9a60 size=16 callers=9 calls=0
*/
void sub_14c9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9a60ULL || rel >= 0x14c9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9a70 size=64 callers=3 calls=1
   calls: sub_14bab00
*/
void sub_14c9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9a70ULL || rel >= 0x14c9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9ab0 size=96 callers=1 calls=2
   calls: sub_14bab00, sub_14bb180
*/
void sub_14c9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9ab0ULL || rel >= 0x14c9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9b10 size=112 callers=0 calls=1
   calls: sub_14ca6b0
*/
void sub_14c9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9b10ULL || rel >= 0x14c9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9b80 size=112 callers=0 calls=1
   calls: sub_14ca6b0
*/
void sub_14c9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9b80ULL || rel >= 0x14c9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9bf0 size=112 callers=0 calls=1
   calls: sub_14ca6b0
*/
void sub_14c9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9bf0ULL || rel >= 0x14c9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9c60 size=112 callers=0 calls=1
   calls: sub_14ca6b0
*/
void sub_14c9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9c60ULL || rel >= 0x14c9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9cd0 size=448 callers=1 calls=2
   calls: TextureMax_2, sub_1306f20
*/
void sub_14c9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9cd0ULL || rel >= 0x14c9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014c9e90 size=1568 callers=1 calls=10
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106f30, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_8c2c10
   ref: TextureMax
   ref: FilePath
*/
void TextureMax_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9e90ULL || rel >= 0x14ca4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ca4b0 size=432 callers=1 calls=2
   calls: sub_7c2d90, sub_7c2db0
*/
void sub_14ca4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca4b0ULL || rel >= 0x14ca660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ca660 size=32 callers=0 calls=0
*/
void sub_14ca660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca660ULL || rel >= 0x14ca680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ca680 size=16 callers=0 calls=0
*/
void sub_14ca680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca680ULL || rel >= 0x14ca690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ca690 size=16 callers=0 calls=0
*/
void sub_14ca690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca690ULL || rel >= 0x14ca6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ca6a0 size=16 callers=0 calls=0
*/
void sub_14ca6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca6a0ULL || rel >= 0x14ca6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ca6b0 size=1040 callers=7 calls=3
   calls: sub_14ba4c0, sub_5cf8f0, sub_65f110
*/
void sub_14ca6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca6b0ULL || rel >= 0x14caac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014caac0 size=48 callers=0 calls=1
   calls: sub_14ca6b0
*/
void sub_14caac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14caac0ULL || rel >= 0x14caaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014caaf0 size=16 callers=0 calls=0
*/
void sub_14caaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14caaf0ULL || rel >= 0x14cab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cab00 size=16 callers=0 calls=0
*/
void sub_14cab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cab00ULL || rel >= 0x14cab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cab10 size=16 callers=0 calls=0
*/
void sub_14cab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cab10ULL || rel >= 0x14cab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cab20 size=32 callers=0 calls=0
*/
void sub_14cab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cab20ULL || rel >= 0x14cab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cab40 size=368 callers=1 calls=1
   calls: sub_65f1c0
*/
void sub_14cab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cab40ULL || rel >= 0x14cacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cacb0 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_14cacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cacb0ULL || rel >= 0x14cace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cace0 size=368 callers=8 calls=2
   calls: sub_14d1d60, sub_14d2180
*/
void sub_14cace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cace0ULL || rel >= 0x14cae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cae50 size=16 callers=8 calls=0
*/
void sub_14cae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cae50ULL || rel >= 0x14cae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cae60 size=16 callers=8 calls=0
*/
void sub_14cae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cae60ULL || rel >= 0x14cae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cae70 size=144 callers=0 calls=1
   calls: sub_14bacd0
*/
void sub_14cae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cae70ULL || rel >= 0x14caf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014caf00 size=112 callers=8 calls=0
*/
void sub_14caf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14caf00ULL || rel >= 0x14caf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014caf70 size=208 callers=3 calls=2
   calls: sub_1306f20, sub_e7e400
   ref: bin/font/bmp/font_fs_150_bold_00.bffnt
   ref: font_fs_150_bold_00.bffnt
*/
void font_fs_150_bold_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14caf70ULL || rel >= 0x14cb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cb040 size=176 callers=6 calls=1
   calls: P_icon_complete_00
*/
void sub_14cb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cb040ULL || rel >= 0x14cb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cb0f0 size=4384 callers=1 calls=5
   calls: sub_14aad40, sub_14ab0c0, sub_14ba7b0, sub_14d1a60, sub_8f3180
   ref: L_timer_00
   ref: P_cap_prog_00
   ref: P_icon_complete_00
   ref: pane_%s
   ref: anime_%s
   ref: N_front_00
   ref: P_pokeIcon_00
   ref: L_poke_06
*/
void P_icon_complete_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cb0f0ULL || rel >= 0x14cc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc210 size=320 callers=4 calls=4
   calls: anime__s_11, sub_14ab0c0, sub_17ac6a0, sub_5fd000
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc210ULL || rel >= 0x14cc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc350 size=16 callers=4 calls=0
*/
void sub_14cc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc350ULL || rel >= 0x14cc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc360 size=304 callers=0 calls=7
   calls: anime__s_11, sub_14bdcd0, sub_14beb30, sub_5fc550, sub_611740, sub_682dd0, sub_699f60
*/
void sub_14cc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc360ULL || rel >= 0x14cc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc490 size=16 callers=2 calls=0
*/
void sub_14cc490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc490ULL || rel >= 0x14cc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc4a0 size=400 callers=0 calls=5
   calls: anime__s_11, sub_13574f0, sub_5fc550, sub_611740, sub_682dd0
*/
void sub_14cc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc4a0ULL || rel >= 0x14cc630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc630 size=176 callers=1 calls=3
   calls: sub_5fc550, sub_611740, sub_682dd0
*/
void sub_14cc630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc630ULL || rel >= 0x14cc6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc6e0 size=16 callers=8 calls=0
*/
void sub_14cc6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc6e0ULL || rel >= 0x14cc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc6f0 size=464 callers=0 calls=1
   calls: sub_14ab0c0
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc6f0ULL || rel >= 0x14cc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc8c0 size=16 callers=2 calls=0
*/
void sub_14cc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc8c0ULL || rel >= 0x14cc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc8d0 size=16 callers=6 calls=0
*/
void sub_14cc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc8d0ULL || rel >= 0x14cc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cc8e0 size=288 callers=0 calls=1
   calls: sub_14ab0c0
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc8e0ULL || rel >= 0x14cca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cca00 size=16 callers=1 calls=0
*/
void sub_14cca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cca00ULL || rel >= 0x14cca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cca10 size=112 callers=0 calls=1
   calls: sub_14d1d60
*/
void sub_14cca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cca10ULL || rel >= 0x14cca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cca80 size=112 callers=0 calls=1
   calls: sub_14d1d60
*/
void sub_14cca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cca80ULL || rel >= 0x14ccaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ccaf0 size=112 callers=0 calls=1
   calls: sub_14d1d60
*/
void sub_14ccaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ccaf0ULL || rel >= 0x14ccb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ccb60 size=112 callers=0 calls=1
   calls: sub_14d1d60
*/
void sub_14ccb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ccb60ULL || rel >= 0x14ccbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ccbd0 size=176 callers=0 calls=1
   calls: sub_1308340
*/
void sub_14ccbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ccbd0ULL || rel >= 0x14ccc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ccc80 size=848 callers=0 calls=7
   calls: sub_14ab0c0, sub_14ccfd0, sub_14cd230, sub_5fc550, sub_611740, sub_682dd0, sub_699f60
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ccc80ULL || rel >= 0x14ccfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ccfd0 size=608 callers=1 calls=4
   calls: sub_14bc060, sub_14cd340, sub_14cd630, sub_14cdba0
*/
void sub_14ccfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ccfd0ULL || rel >= 0x14cd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cd230 size=272 callers=1 calls=3
   calls: T_playername_00, sub_17ac6a0, sub_5fd000
*/
void sub_14cd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cd230ULL || rel >= 0x14cd340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cd340 size=752 callers=1 calls=1
   calls: sub_14ba820
*/
void sub_14cd340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cd340ULL || rel >= 0x14cd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cd630 size=1392 callers=2 calls=1
   calls: sub_14ba820
*/
void sub_14cd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cd630ULL || rel >= 0x14cdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cdba0 size=1088 callers=1 calls=1
   calls: sub_14bc060
*/
void sub_14cdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cdba0ULL || rel >= 0x14cdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cdfe0 size=48 callers=0 calls=0
*/
void sub_14cdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cdfe0ULL || rel >= 0x14ce010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce010 size=16 callers=0 calls=0
*/
void sub_14ce010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce010ULL || rel >= 0x14ce020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce020 size=16 callers=0 calls=0
*/
void sub_14ce020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce020ULL || rel >= 0x14ce030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce030 size=16 callers=0 calls=0
*/
void sub_14ce030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce030ULL || rel >= 0x14ce040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce040 size=32 callers=0 calls=0
*/
void sub_14ce040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce040ULL || rel >= 0x14ce060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce060 size=16 callers=0 calls=0
*/
void sub_14ce060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce060ULL || rel >= 0x14ce070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce070 size=16 callers=0 calls=0
*/
void sub_14ce070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce070ULL || rel >= 0x14ce080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce080 size=16 callers=0 calls=0
*/
void sub_14ce080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce080ULL || rel >= 0x14ce090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce090 size=16 callers=0 calls=0
*/
void sub_14ce090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce090ULL || rel >= 0x14ce0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce0a0 size=16 callers=0 calls=0
*/
void sub_14ce0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce0a0ULL || rel >= 0x14ce0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce0b0 size=16 callers=0 calls=0
*/
void sub_14ce0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce0b0ULL || rel >= 0x14ce0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce0c0 size=16 callers=0 calls=0
*/
void sub_14ce0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce0c0ULL || rel >= 0x14ce0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce0d0 size=240 callers=0 calls=1
   calls: sub_14ab0c0
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce0d0ULL || rel >= 0x14ce1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce1c0 size=16 callers=0 calls=0
*/
void sub_14ce1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce1c0ULL || rel >= 0x14ce1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce1d0 size=16 callers=0 calls=0
*/
void sub_14ce1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce1d0ULL || rel >= 0x14ce1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce1e0 size=16 callers=0 calls=0
*/
void sub_14ce1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce1e0ULL || rel >= 0x14ce1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce1f0 size=720 callers=0 calls=15
   calls: T_info_title_00, T_info_title_01, T_info_title_02, T_info_title_03, T_info_title_04, T_info_title_05, T_info_title_06, T_info_title_07, T_number_01, T_playername_01_2, sub_14ab0c0, sub_14ab440
   ... +3 more
   ref: pattern_npc
   ref: anime_%s
   ref: pattern_prog
   ref: anime_%s_%s
*/
void pattern_prog(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce1f0ULL || rel >= 0x14ce4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce4c0 size=528 callers=1 calls=1
   calls: pane__s_11
   ref: T_playername_00
*/
void T_playername_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce4c0ULL || rel >= 0x14ce6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ce6d0 size=944 callers=0 calls=5
   calls: T_info_npc_00, T_number_01_2, pane__s_11, sub_14ab0c0, sub_14ab440
   ref: pattern_npc
   ref: anime_%s
   ref: pattern_prog
   ref: anime_%s_%s
   ref: T_playername_01
*/
void T_playername_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ce6d0ULL || rel >= 0x14cea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cea80 size=480 callers=1 calls=3
   calls: sub_1314a80, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_playername_01
*/
void T_playername_01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cea80ULL || rel >= 0x14cec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cec60 size=864 callers=1 calls=4
   calls: sub_1315b90, sub_14ac040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: T_info_content_06
   ref: T_info_title_07
   ref: pane_%s_%s
*/
void T_info_title_07(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cec60ULL || rel >= 0x14cefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cefc0 size=720 callers=1 calls=4
   calls: sub_13133a0, sub_14ab040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_number_01
*/
void T_number_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cefc0ULL || rel >= 0x14cf290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cf290 size=896 callers=1 calls=4
   calls: sub_14ab040, sub_14ac040, sub_14bc060, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_info_title_00
*/
void T_info_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cf290ULL || rel >= 0x14cf610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cf610 size=1104 callers=1 calls=4
   calls: sub_1315b90, sub_14ac040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_info_title_02
   ref: T_info_content_01
*/
void T_info_title_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cf610ULL || rel >= 0x14cfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cfa60 size=1296 callers=1 calls=5
   calls: sub_1315b90, sub_14ab040, sub_14ac040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_info_content_00
   ref: T_info_title_01
*/
void T_info_title_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cfa60ULL || rel >= 0x14cff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014cff70 size=1296 callers=1 calls=5
   calls: sub_1315b90, sub_14ab040, sub_14ac040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: T_info_title_03
   ref: pane_%s_%s
   ref: T_info_content_02
*/
void T_info_title_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cff70ULL || rel >= 0x14d0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d0480 size=1280 callers=1 calls=5
   calls: sub_1315b90, sub_14ab040, sub_14ac040, sub_14ac370, sub_67d450
   ref: T_info_content_03
   ref: pane_%s
   ref: T_info_title_04
   ref: pane_%s_%s
*/
void T_info_title_04(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d0480ULL || rel >= 0x14d0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d0980 size=1280 callers=1 calls=5
   calls: sub_1315b90, sub_14ab040, sub_14ac040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_info_content_05
   ref: T_info_title_06
*/
void T_info_title_06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d0980ULL || rel >= 0x14d0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d0e80 size=1296 callers=1 calls=5
   calls: sub_1315b90, sub_14ab040, sub_14ac040, sub_14ac370, sub_67d450
   ref: pane_%s
   ref: T_info_title_05
   ref: pane_%s_%s
   ref: T_info_content_04
*/
void T_info_title_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d0e80ULL || rel >= 0x14d1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d1390 size=16 callers=0 calls=0
*/
void sub_14d1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d1390ULL || rel >= 0x14d13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d13a0 size=32 callers=0 calls=0
*/
void sub_14d13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d13a0ULL || rel >= 0x14d13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d13c0 size=16 callers=0 calls=0
*/
void sub_14d13c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d13c0ULL || rel >= 0x14d13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d13d0 size=32 callers=0 calls=0
*/
void sub_14d13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d13d0ULL || rel >= 0x14d13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d13f0 size=32 callers=0 calls=0
*/
void sub_14d13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d13f0ULL || rel >= 0x14d1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d1410 size=416 callers=2 calls=3
   calls: sub_14ac370, sub_67d450, trname
   ref: pane_%s
*/
void pane__s_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d1410ULL || rel >= 0x14d15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d15b0 size=896 callers=1 calls=5
   calls: sub_13133a0, sub_14ab040, sub_14ac370, sub_67be60, sub_67bfa0
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_number_01
*/
void T_number_01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d15b0ULL || rel >= 0x14d1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d1930 size=304 callers=1 calls=2
   calls: sub_14ac040, sub_67d450
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_info_npc_00
*/
void T_info_npc_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d1930ULL || rel >= 0x14d1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d1a60 size=192 callers=1 calls=1
   calls: sub_14ba7b0
*/
void sub_14d1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d1a60ULL || rel >= 0x14d1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d1b20 size=576 callers=3 calls=2
   calls: sub_14ab0c0, sub_14ab200
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d1b20ULL || rel >= 0x14d1d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d1d60 size=1008 callers=6 calls=2
   calls: sub_14ba4c0, sub_682dd0
*/
void sub_14d1d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d1d60ULL || rel >= 0x14d2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d2150 size=48 callers=0 calls=1
   calls: sub_14d1d60
*/
void sub_14d2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2150ULL || rel >= 0x14d2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d2180 size=704 callers=1 calls=4
   calls: sub_14ba3b0, sub_14d2440, sub_5fc550, sub_b6f8c0
*/
void sub_14d2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2180ULL || rel >= 0x14d2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d2440 size=448 callers=1 calls=3
   calls: UniformNum, sub_14d2630, sub_67b990
*/
void sub_14d2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2440ULL || rel >= 0x14d2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d2600 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_14d2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2600ULL || rel >= 0x14d2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d2630 size=336 callers=1 calls=4
   calls: sub_1307dd0, sub_1307de0, sub_5cfad0, sub_c4ac70
*/
void sub_14d2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2630ULL || rel >= 0x14d2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d2780 size=3584 callers=1 calls=13
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106cd0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_67c910
   ... +1 more
   ref: Career
   ref: GlossID
   ref: CharaData
   ref: UniformNum
   ref: TrainerID
   ref: CharaMax
   ref: glossData
   ref: TextureMax
*/
void UniformNum(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d2780ULL || rel >= 0x14d3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3580 size=672 callers=0 calls=1
   calls: sub_14ba3b0
*/
void sub_14d3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3580ULL || rel >= 0x14d3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3820 size=64 callers=0 calls=1
   calls: sub_8f3180
*/
void sub_14d3820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3820ULL || rel >= 0x14d3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3860 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicence/bin/trlicence_card_prog_back_00_lyt.bin
*/
void trlicence_card_prog_back_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3860ULL || rel >= 0x14d3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3970 size=16 callers=0 calls=0
*/
void sub_14d3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3970ULL || rel >= 0x14d3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3980 size=16 callers=0 calls=0
*/
void sub_14d3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3980ULL || rel >= 0x14d3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3990 size=16 callers=0 calls=0
*/
void sub_14d3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3990ULL || rel >= 0x14d39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d39a0 size=16 callers=0 calls=0
*/
void sub_14d39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d39a0ULL || rel >= 0x14d39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d39b0 size=16 callers=0 calls=0
*/
void sub_14d39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d39b0ULL || rel >= 0x14d39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d39c0 size=16 callers=0 calls=0
*/
void sub_14d39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d39c0ULL || rel >= 0x14d39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d39d0 size=16 callers=0 calls=0
*/
void sub_14d39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d39d0ULL || rel >= 0x14d39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d39e0 size=16 callers=0 calls=0
*/
void sub_14d39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d39e0ULL || rel >= 0x14d39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d39f0 size=304 callers=0 calls=0
*/
void sub_14d39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d39f0ULL || rel >= 0x14d3b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3b20 size=1024 callers=0 calls=3
   calls: sub_14aad40, sub_67b990, sub_8f3180
   ref: pane_P_star_%02d
*/
void pane_P_star__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3b20ULL || rel >= 0x14d3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3f20 size=32 callers=2 calls=0
*/
void sub_14d3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3f20ULL || rel >= 0x14d3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3f40 size=48 callers=0 calls=0
*/
void sub_14d3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3f40ULL || rel >= 0x14d3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d3f70 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicence/bin/trlicence_card_prog_front_00_lyt.bin
*/
void trlicence_card_prog_front_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3f70ULL || rel >= 0x14d4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4080 size=368 callers=1 calls=5
   calls: sub_1314a80, sub_14ac370, sub_67be60, sub_67bfa0, sub_67d450
*/
void sub_14d4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4080ULL || rel >= 0x14d41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d41f0 size=400 callers=1 calls=6
   calls: sub_13133a0, sub_14ab040, sub_14ac370, sub_67bfa0, sub_67d450, sub_b6fa70
*/
void sub_14d41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d41f0ULL || rel >= 0x14d4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4380 size=144 callers=1 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_14d4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4380ULL || rel >= 0x14d4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4410 size=192 callers=1 calls=0
*/
void sub_14d4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4410ULL || rel >= 0x14d44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d44d0 size=32 callers=1 calls=0
*/
void sub_14d44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d44d0ULL || rel >= 0x14d44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d44f0 size=144 callers=0 calls=0
*/
void sub_14d44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d44f0ULL || rel >= 0x14d4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4580 size=144 callers=0 calls=0
*/
void sub_14d4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4580ULL || rel >= 0x14d4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4610 size=16 callers=0 calls=0
*/
void sub_14d4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4610ULL || rel >= 0x14d4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4620 size=144 callers=0 calls=0
*/
void sub_14d4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4620ULL || rel >= 0x14d46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d46b0 size=144 callers=0 calls=0
*/
void sub_14d46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d46b0ULL || rel >= 0x14d4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4740 size=16 callers=0 calls=0
*/
void sub_14d4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4740ULL || rel >= 0x14d4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4750 size=16 callers=0 calls=0
*/
void sub_14d4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4750ULL || rel >= 0x14d4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4760 size=144 callers=0 calls=0
*/
void sub_14d4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4760ULL || rel >= 0x14d47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d47f0 size=144 callers=0 calls=0
*/
void sub_14d47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d47f0ULL || rel >= 0x14d4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4880 size=304 callers=0 calls=0
*/
void sub_14d4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4880ULL || rel >= 0x14d49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d49b0 size=336 callers=1 calls=6
   calls: sub_1106200, sub_1106f30, sub_5dd790, sub_5e26a0, sub_5e2930, sub_948390
   ref: bin/appli/parameter/constant_data.prmb
*/
void constant_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d49b0ULL || rel >= 0x14d4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4b00 size=176 callers=1 calls=4
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_14d4bb0
*/
void sub_14d4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4b00ULL || rel >= 0x14d4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4bb0 size=320 callers=1 calls=3
   calls: sub_1106220, sub_11063e0, sub_11065b0
*/
void sub_14d4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4bb0ULL || rel >= 0x14d4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4cf0 size=48 callers=2 calls=1
   calls: sub_ee49b0
*/
void sub_14d4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4cf0ULL || rel >= 0x14d4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4d20 size=352 callers=2 calls=2
   calls: sub_ea0fd0, sub_ed1920
*/
void sub_14d4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4d20ULL || rel >= 0x14d4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4e80 size=336 callers=10 calls=2
   calls: sub_68eb80, sub_969e30
*/
void sub_14d4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4e80ULL || rel >= 0x14d4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d4fd0 size=336 callers=0 calls=3
   calls: sub_17c1b70, sub_5e2bc0, sub_691560
*/
void sub_14d4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d4fd0ULL || rel >= 0x14d5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5120 size=64 callers=6 calls=1
   calls: sub_691560
*/
void sub_14d5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5120ULL || rel >= 0x14d5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5160 size=16 callers=0 calls=0
*/
void sub_14d5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5160ULL || rel >= 0x14d5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5170 size=16 callers=0 calls=0
*/
void sub_14d5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5170ULL || rel >= 0x14d5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5180 size=16 callers=0 calls=0
*/
void sub_14d5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5180ULL || rel >= 0x14d5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5190 size=192 callers=10 calls=2
   calls: sub_5e2930, sub_96bb80
*/
void sub_14d5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5190ULL || rel >= 0x14d5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5250 size=32 callers=10 calls=0
*/
void sub_14d5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5250ULL || rel >= 0x14d5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5270 size=16 callers=10 calls=0
*/
void sub_14d5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5270ULL || rel >= 0x14d5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5280 size=16 callers=9 calls=0
*/
void sub_14d5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5280ULL || rel >= 0x14d5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5290 size=1088 callers=1 calls=2
   calls: sub_17c1b50, sub_691560
*/
void sub_14d5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5290ULL || rel >= 0x14d56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d56d0 size=128 callers=6 calls=4
   calls: sub_14d5290, sub_68f220, sub_691260, sub_691560
*/
void sub_14d56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d56d0ULL || rel >= 0x14d5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5750 size=64 callers=3 calls=1
   calls: sub_691560
*/
void sub_14d5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5750ULL || rel >= 0x14d5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5790 size=192 callers=2 calls=0
*/
void sub_14d5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5790ULL || rel >= 0x14d5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5850 size=448 callers=2 calls=4
   calls: sub_14b1a10, sub_5e26a0, sub_5e2930, sub_c47200
   ref: bin/appli/icon_sick//bin/dummy.arc
*/
void dummy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5850ULL || rel >= 0x14d5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5a10 size=32 callers=2 calls=0
*/
void sub_14d5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5a10ULL || rel >= 0x14d5a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5a30 size=80 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_14d5a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5a30ULL || rel >= 0x14d5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5a80 size=16 callers=1 calls=0
*/
void sub_14d5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5a80ULL || rel >= 0x14d5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5a90 size=128 callers=2 calls=3
   calls: sub_687680, sub_687770, sub_c47a90
*/
void sub_14d5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5a90ULL || rel >= 0x14d5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5b10 size=240 callers=4 calls=5
   calls: sub_687770, sub_687a20, sub_687a40, sub_765520, sub_765ab0
*/
void sub_14d5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5b10ULL || rel >= 0x14d5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5c00 size=160 callers=2 calls=2
   calls: sub_687a20, sub_687a40
*/
void sub_14d5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5c00ULL || rel >= 0x14d5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5ca0 size=272 callers=2 calls=6
   calls: sub_687770, sub_687a20, sub_687a40, sub_7ef2b0, sub_7ef630, sub_7ef6a0
*/
void sub_14d5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5ca0ULL || rel >= 0x14d5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5db0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5db0ULL || rel >= 0x14d5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5e90 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5e90ULL || rel >= 0x14d5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d5f70 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d5f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5f70ULL || rel >= 0x14d6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6050 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6050ULL || rel >= 0x14d6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6130 size=192 callers=4 calls=0
*/
void sub_14d6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6130ULL || rel >= 0x14d61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d61f0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d61f0ULL || rel >= 0x14d62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d62d0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d62d0ULL || rel >= 0x14d63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d63b0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d63b0ULL || rel >= 0x14d6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6490 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14d6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6490ULL || rel >= 0x14d6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6570 size=176 callers=3 calls=2
   calls: sub_14b1a10, sub_14d6620
   ref: bin/appli/icon_type/bin/type_dummy.arc
*/
void type_dummy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6570ULL || rel >= 0x14d6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6620 size=336 callers=2 calls=3
   calls: sub_5e26a0, sub_5e2930, sub_c47200
*/
void sub_14d6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6620ULL || rel >= 0x14d6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6770 size=176 callers=1 calls=2
   calls: sub_14d6620, unnamed_52
   ref: bin/appli/icon_type/bin/type_dummy.arc
*/
void type_dummy_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6770ULL || rel >= 0x14d6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6820 size=32 callers=25 calls=0
*/
void sub_14d6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6820ULL || rel >= 0x14d6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6840 size=80 callers=25 calls=1
   calls: sub_5e2bc0
*/
void sub_14d6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6840ULL || rel >= 0x14d6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6890 size=16 callers=25 calls=0
*/
void sub_14d6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6890ULL || rel >= 0x14d68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d68a0 size=128 callers=17 calls=3
   calls: sub_687680, sub_687770, sub_c47a90
*/
void sub_14d68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d68a0ULL || rel >= 0x14d6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6920 size=176 callers=33 calls=2
   calls: sub_687a20, sub_687a40
*/
void sub_14d6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6920ULL || rel >= 0x14d69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d69d0 size=224 callers=1 calls=3
   calls: sub_14ab0c0, sub_14ab5c0, sub_14db3d0
*/
void sub_14d69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d69d0ULL || rel >= 0x14d6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6ab0 size=64 callers=0 calls=0
*/
void sub_14d6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6ab0ULL || rel >= 0x14d6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6af0 size=112 callers=2 calls=1
   calls: sub_14d7380
*/
void sub_14d6af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6af0ULL || rel >= 0x14d6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6b60 size=144 callers=1 calls=1
   calls: sub_142a040
*/
void sub_14d6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6b60ULL || rel >= 0x14d6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6bf0 size=176 callers=0 calls=0
*/
void sub_14d6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6bf0ULL || rel >= 0x14d6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6ca0 size=80 callers=0 calls=0
*/
void sub_14d6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6ca0ULL || rel >= 0x14d6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6cf0 size=80 callers=0 calls=0
*/
void sub_14d6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6cf0ULL || rel >= 0x14d6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6d40 size=80 callers=0 calls=0
*/
void sub_14d6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6d40ULL || rel >= 0x14d6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6d90 size=80 callers=0 calls=0
*/
void sub_14d6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6d90ULL || rel >= 0x14d6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6de0 size=240 callers=0 calls=0
*/
void sub_14d6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6de0ULL || rel >= 0x14d6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6ed0 size=240 callers=0 calls=0
*/
void sub_14d6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6ed0ULL || rel >= 0x14d6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d6fc0 size=240 callers=0 calls=0
*/
void sub_14d6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6fc0ULL || rel >= 0x14d70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d70b0 size=240 callers=0 calls=0
*/
void sub_14d70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d70b0ULL || rel >= 0x14d71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d71a0 size=240 callers=0 calls=0
*/
void sub_14d71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d71a0ULL || rel >= 0x14d7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7290 size=240 callers=0 calls=0
*/
void sub_14d7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7290ULL || rel >= 0x14d7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7380 size=368 callers=1 calls=1
   calls: sub_142a040
*/
void sub_14d7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7380ULL || rel >= 0x14d74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d74f0 size=384 callers=3 calls=0
*/
void sub_14d74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d74f0ULL || rel >= 0x14d7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7670 size=912 callers=0 calls=6
   calls: sub_1315b90, sub_14ab0c0, sub_14ac370, sub_14d69d0, sub_14db420, sub_67d450
*/
void sub_14d7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7670ULL || rel >= 0x14d7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7a00 size=80 callers=2 calls=2
   calls: sub_7651c0, sub_765520
*/
void sub_14d7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7a00ULL || rel >= 0x14d7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7a50 size=208 callers=0 calls=1
   calls: sub_14ab040
*/
void sub_14d7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7a50ULL || rel >= 0x14d7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7b20 size=128 callers=4 calls=1
   calls: sub_14d7e60
*/
void sub_14d7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7b20ULL || rel >= 0x14d7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7ba0 size=176 callers=0 calls=0
*/
void sub_14d7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7ba0ULL || rel >= 0x14d7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7c50 size=176 callers=0 calls=0
*/
void sub_14d7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7c50ULL || rel >= 0x14d7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7d00 size=176 callers=0 calls=0
*/
void sub_14d7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7d00ULL || rel >= 0x14d7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7db0 size=176 callers=0 calls=0
*/
void sub_14d7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7db0ULL || rel >= 0x14d7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7e60 size=288 callers=1 calls=1
   calls: sub_14d6b60
*/
void sub_14d7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7e60ULL || rel >= 0x14d7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7f80 size=64 callers=2 calls=0
*/
void sub_14d7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7f80ULL || rel >= 0x14d7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d7fc0 size=1392 callers=3 calls=11
   calls: sub_12fa130, sub_14ab0c0, sub_14ab440, sub_14bb830, sub_14bbf30, sub_14d8530, sub_14d8650, sub_14d87a0, sub_762d70, sub_767950, sub_8f3180
*/
void sub_14d7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d7fc0ULL || rel >= 0x14d8530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d8530 size=288 callers=2 calls=3
   calls: sub_1313580, sub_14ac370, sub_67d450
*/
void sub_14d8530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8530ULL || rel >= 0x14d8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d8650 size=336 callers=2 calls=4
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_764b40
*/
void sub_14d8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8650ULL || rel >= 0x14d87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d87a0 size=240 callers=2 calls=5
   calls: sub_14ab040, sub_14d5b10, sub_765520, sub_765a90, sub_8f3180
*/
void sub_14d87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d87a0ULL || rel >= 0x14d8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d8890 size=16 callers=1 calls=0
*/
void sub_14d8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8890ULL || rel >= 0x14d88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d88a0 size=240 callers=0 calls=1
   calls: sub_14ab040
*/
void sub_14d88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d88a0ULL || rel >= 0x14d8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d8990 size=560 callers=1 calls=8
   calls: sub_12fa130, sub_1313580, sub_1315b90, sub_14ab040, sub_14ac370, sub_67d450, sub_764b40, sub_767950
*/
void sub_14d8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8990ULL || rel >= 0x14d8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d8bc0 size=96 callers=0 calls=1
   calls: sub_14aacc0
*/
void sub_14d8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8bc0ULL || rel >= 0x14d8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d8c20 size=2928 callers=2 calls=4
   calls: sub_142a1c0, sub_14ac370, sub_67d450, sub_8f3390
   ref: rank_up
   ref: pane_%s
   ref: T_rank_05
   ref: anime_%s
   ref: rank_down
   ref: gauge_switch
   ref: pane_%s_%s
   ref: high_rank_up
*/
void L_rank_gauge_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d8c20ULL || rel >= 0x14d9790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9790 size=496 callers=5 calls=7
   calls: sub_1315b90, sub_14ab0c0, sub_14ab440, sub_14ac370, sub_14d9980, sub_14d9aa0, sub_67d450
*/
void sub_14d9790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9790ULL || rel >= 0x14d9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9980 size=288 callers=1 calls=4
   calls: sub_14ab0c0, sub_14ab440, sub_14ac370, sub_67d450
*/
void sub_14d9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9980ULL || rel >= 0x14d9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9aa0 size=384 callers=1 calls=5
   calls: sub_142a950, sub_14ab0c0, sub_14ab440, sub_1502120, sub_5cfad0
*/
void sub_14d9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9aa0ULL || rel >= 0x14d9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9c20 size=32 callers=0 calls=0
*/
void sub_14d9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9c20ULL || rel >= 0x14d9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9c40 size=672 callers=2 calls=7
   calls: sub_142a480, sub_14ab0c0, sub_14ab2b0, sub_14d9790, sub_14d9ee0, sub_1502120, sub_5cfad0
*/
void sub_14d9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9c40ULL || rel >= 0x14d9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9ee0 size=256 callers=2 calls=4
   calls: sub_142a660, sub_14d6af0, sub_1502120, sub_5cfad0
*/
void sub_14d9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9ee0ULL || rel >= 0x14d9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9fe0 size=16 callers=22 calls=0
*/
void sub_14d9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9fe0ULL || rel >= 0x14d9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014d9ff0 size=176 callers=0 calls=0
*/
void sub_14d9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d9ff0ULL || rel >= 0x14da0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da0a0 size=176 callers=0 calls=0
*/
void sub_14da0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da0a0ULL || rel >= 0x14da150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da150 size=176 callers=0 calls=0
*/
void sub_14da150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da150ULL || rel >= 0x14da200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da200 size=176 callers=0 calls=0
*/
void sub_14da200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da200ULL || rel >= 0x14da2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da2b0 size=624 callers=4 calls=5
   calls: sub_1307dd0, sub_14d6130, sub_9197f0, sub_c4ac70, type_dummy
   ref: common/wazainfo.dat
*/
void wazainfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da2b0ULL || rel >= 0x14da520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da520 size=224 callers=0 calls=0
*/
void sub_14da520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da520ULL || rel >= 0x14da600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da600 size=16 callers=0 calls=0
*/
void sub_14da600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da600ULL || rel >= 0x14da610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da610 size=16 callers=0 calls=0
*/
void sub_14da610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da610ULL || rel >= 0x14da620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da620 size=16 callers=0 calls=0
*/
void sub_14da620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da620ULL || rel >= 0x14da630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da630 size=480 callers=11 calls=0
*/
void sub_14da630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da630ULL || rel >= 0x14da810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da810 size=128 callers=13 calls=3
   calls: sub_14da890, sub_765b70, sub_765dd0
*/
void sub_14da810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da810ULL || rel >= 0x14da890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014da890 size=1712 callers=2 calls=16
   calls: sub_1315b90, sub_14ab0c0, sub_14ab440, sub_14ac370, sub_14d6920, sub_14daf40, sub_67d080, sub_67d450, sub_780ca0, sub_780d10, sub_780d40, sub_780d70
   ... +4 more
*/
void sub_14da890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da890ULL || rel >= 0x14daf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014daf40 size=1072 callers=1 calls=6
   calls: sub_1315b90, sub_14ab0c0, sub_14ab440, sub_14ac370, sub_14db470, sub_67d450
*/
void sub_14daf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14daf40ULL || rel >= 0x14db370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db370 size=96 callers=0 calls=2
   calls: sub_765ae0, sub_765b70
*/
void sub_14db370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db370ULL || rel >= 0x14db3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db3d0 size=80 callers=1 calls=0
*/
void sub_14db3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db3d0ULL || rel >= 0x14db420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db420 size=80 callers=7 calls=0
*/
void sub_14db420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db420ULL || rel >= 0x14db470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db470 size=48 callers=2 calls=0
*/
void sub_14db470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db470ULL || rel >= 0x14db4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db4a0 size=208 callers=1 calls=0
*/
void sub_14db4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db4a0ULL || rel >= 0x14db570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db570 size=144 callers=1 calls=1
   calls: sub_14db600
*/
void sub_14db570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db570ULL || rel >= 0x14db600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db600 size=224 callers=3 calls=0
*/
void sub_14db600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db600ULL || rel >= 0x14db6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db6e0 size=128 callers=5 calls=1
   calls: sub_14db600
*/
void sub_14db6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db6e0ULL || rel >= 0x14db760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db760 size=16 callers=0 calls=0
*/
void sub_14db760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db760ULL || rel >= 0x14db770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db770 size=16 callers=0 calls=0
*/
void sub_14db770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db770ULL || rel >= 0x14db780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db780 size=16 callers=0 calls=0
*/
void sub_14db780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db780ULL || rel >= 0x14db790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db790 size=528 callers=5 calls=5
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e5560, sub_c46830
*/
void sub_14db790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db790ULL || rel >= 0x14db9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014db9a0 size=96 callers=0 calls=1
   calls: sub_5e5560
*/
void sub_14db9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14db9a0ULL || rel >= 0x14dba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dba00 size=176 callers=5 calls=1
   calls: sub_5e5560
*/
void sub_14dba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dba00ULL || rel >= 0x14dbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbab0 size=80 callers=5 calls=1
   calls: sub_5e2bc0
*/
void sub_14dbab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbab0ULL || rel >= 0x14dbb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbb00 size=16 callers=4 calls=0
*/
void sub_14dbb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbb00ULL || rel >= 0x14dbb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbb10 size=80 callers=3 calls=0
*/
void sub_14dbb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbb10ULL || rel >= 0x14dbb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbb60 size=16 callers=4 calls=0
*/
void sub_14dbb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbb60ULL || rel >= 0x14dbb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbb70 size=320 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14dbb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbb70ULL || rel >= 0x14dbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbcb0 size=16 callers=0 calls=0
*/
void sub_14dbcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbcb0ULL || rel >= 0x14dbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbcc0 size=16 callers=0 calls=0
*/
void sub_14dbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbcc0ULL || rel >= 0x14dbcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbcd0 size=16 callers=0 calls=0
*/
void sub_14dbcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbcd0ULL || rel >= 0x14dbce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbce0 size=16 callers=0 calls=0
*/
void sub_14dbce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbce0ULL || rel >= 0x14dbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbcf0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14dbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbcf0ULL || rel >= 0x14dbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbdc0 size=16 callers=0 calls=0
*/
void sub_14dbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbdc0ULL || rel >= 0x14dbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbdd0 size=16 callers=0 calls=0
*/
void sub_14dbdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbdd0ULL || rel >= 0x14dbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbde0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14dbde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbde0ULL || rel >= 0x14dbeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbeb0 size=16 callers=0 calls=0
*/
void sub_14dbeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbeb0ULL || rel >= 0x14dbec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbec0 size=160 callers=5 calls=1
   calls: sub_14dc130
*/
void sub_14dbec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbec0ULL || rel >= 0x14dbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbf60 size=144 callers=5 calls=2
   calls: sub_672950, sub_672980
*/
void sub_14dbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbf60ULL || rel >= 0x14dbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dbff0 size=96 callers=16 calls=2
   calls: sub_6729b0, sub_672a50
*/
void sub_14dbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dbff0ULL || rel >= 0x14dc050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc050 size=144 callers=5 calls=2
   calls: sub_672950, sub_672980
*/
void sub_14dc050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc050ULL || rel >= 0x14dc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc0e0 size=16 callers=0 calls=0
*/
void sub_14dc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc0e0ULL || rel >= 0x14dc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc0f0 size=16 callers=0 calls=0
*/
void sub_14dc0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc0f0ULL || rel >= 0x14dc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc100 size=16 callers=0 calls=0
*/
void sub_14dc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc100ULL || rel >= 0x14dc110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc110 size=16 callers=0 calls=0
*/
void sub_14dc110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc110ULL || rel >= 0x14dc120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc120 size=16 callers=0 calls=0
*/
void sub_14dc120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc120ULL || rel >= 0x14dc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc130 size=224 callers=1 calls=1
   calls: sub_672620
*/
void sub_14dc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc130ULL || rel >= 0x14dc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc210 size=288 callers=2 calls=4
   calls: sub_14dc330, sub_14dd8b0, sub_672c10, sub_e7c1f0
*/
void sub_14dc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc210ULL || rel >= 0x14dc330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc330 size=416 callers=5 calls=1
   calls: sub_c39c40
*/
void sub_14dc330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc330ULL || rel >= 0x14dc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc4d0 size=176 callers=1 calls=4
   calls: sub_14dc330, sub_e7c1c0, sub_e7c1d0, sub_e7c1f0
*/
void sub_14dc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc4d0ULL || rel >= 0x14dc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dc580 size=2752 callers=0 calls=9
   calls: sub_14dc330, sub_14dd040, sub_14dd170, sub_14de100, sub_672c10, sub_967370, sub_a76910, sub_c39c40, sub_e7c1f0
*/
void sub_14dc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dc580ULL || rel >= 0x14dd040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd040 size=304 callers=1 calls=2
   calls: sub_12b8c20, sub_672c10
*/
void sub_14dd040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd040ULL || rel >= 0x14dd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd170 size=304 callers=1 calls=2
   calls: sub_12ca770, sub_672c10
*/
void sub_14dd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd170ULL || rel >= 0x14dd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd2a0 size=16 callers=4 calls=0
*/
void sub_14dd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd2a0ULL || rel >= 0x14dd2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd2b0 size=112 callers=1 calls=2
   calls: sub_14dc330, sub_90de80
*/
void sub_14dd2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd2b0ULL || rel >= 0x14dd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd320 size=288 callers=2 calls=4
   calls: sub_14dd440, sub_14de8a0, sub_672c10, sub_e7c1f0
*/
void sub_14dd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd320ULL || rel >= 0x14dd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd440 size=416 callers=3 calls=1
   calls: sub_c39c40
*/
void sub_14dd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd440ULL || rel >= 0x14dd5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd5e0 size=176 callers=1 calls=4
   calls: sub_14dd440, sub_e7c1c0, sub_e7c1d0, sub_e7c1f0
*/
void sub_14dd5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd5e0ULL || rel >= 0x14dd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd690 size=16 callers=0 calls=0
*/
void sub_14dd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd690ULL || rel >= 0x14dd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd6a0 size=16 callers=2 calls=0
*/
void sub_14dd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd6a0ULL || rel >= 0x14dd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd6b0 size=144 callers=0 calls=0
*/
void sub_14dd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd6b0ULL || rel >= 0x14dd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd740 size=144 callers=0 calls=0
*/
void sub_14dd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd740ULL || rel >= 0x14dd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd7d0 size=112 callers=0 calls=0
*/
void sub_14dd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd7d0ULL || rel >= 0x14dd840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd840 size=112 callers=0 calls=0
*/
void sub_14dd840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd840ULL || rel >= 0x14dd8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd8b0 size=256 callers=1 calls=2
   calls: sub_14dd9b0, sub_e7b660
*/
void sub_14dd8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd8b0ULL || rel >= 0x14dd9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dd9b0 size=224 callers=1 calls=3
   calls: sub_14dda90, sub_7c2da0, sub_e7b5e0
*/
void sub_14dd9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dd9b0ULL || rel >= 0x14dda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dda90 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14dda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dda90ULL || rel >= 0x14ddb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ddb90 size=160 callers=0 calls=1
   calls: sub_3340
*/
void sub_14ddb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddb90ULL || rel >= 0x14ddc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ddc30 size=400 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14ddc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddc30ULL || rel >= 0x14dddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dddc0 size=96 callers=0 calls=1
   calls: sub_14de000
*/
void sub_14dddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dddc0ULL || rel >= 0x14dde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dde20 size=16 callers=0 calls=0
*/
void sub_14dde20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dde20ULL || rel >= 0x14dde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dde30 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14dde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dde30ULL || rel >= 0x14ddee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ddee0 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14ddee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddee0ULL || rel >= 0x14ddfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ddfb0 size=16 callers=0 calls=0
*/
void sub_14ddfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddfb0ULL || rel >= 0x14ddfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

