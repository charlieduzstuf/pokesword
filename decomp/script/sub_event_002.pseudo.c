// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = _Suspend(var_8)
    pri = 0;
    OP_ZERO_ALT 
    OP_HALT 12
    pri = 0;
    return pri;
}
// fun_0060
fun_0060() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00A0
    pri = 0;
    return pri;
// lab_00A0
    OP_ZERO_P_S -8
    OP_JUMP lab_00C8
// lab_00C8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00C0
// lab_0120
    pri = 0;
    return pri;
// lab_00C0
    OP_INC_P_S -8
}
// fun_0138
fun_0138() {
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
    pri = arg_0;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    var_16 = pri;
    pri = arg_1;
    var_24 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_POP_ALT 
    OP_STOR_I 
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
    OP_JUMP lab_0320
// lab_0320
    pri = FadeWait_()
    OP_JZER lab_0358
    pri = 0;
    return pri;
// lab_0358
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0320
    pri = 0;
    return pri;
}
// fun_0398
fun_0398() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_03E0
// lab_03E0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0420
    OP_JUMP lab_0490
// lab_0420
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0460
    OP_JUMP lab_0490
// lab_0460
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03E0
// lab_0490
    pri = 0;
    return pri;
}
// fun_04A8
fun_04A8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C68(var_8)
    OP_JZER lab_0570
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C98(var_24)
    OP_JNZ lab_0570
    pri = 0;
    return pri;
// lab_0570
    OP_JUMP lab_0580
// lab_0580
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_05E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
    pri = 0;
    return pri;
}
// fun_0620
fun_0620() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0658
fun_0658() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0718
    pri = 0;
    return pri;
// lab_0718
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0758
// lab_0758
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C68(var_8)
    OP_JNZ lab_07E0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_07D0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0828
    pri = 0;
    return pri;
// lab_0828
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0888
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08D0(var_8)
    pri = 0;
    return pri;
// lab_0888
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0758
    pri = 0;
    return pri;
// lab_07D0
    OP_JUMP lab_0828
}
// fun_08D0
fun_08D0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0958
    pri = 0;
    return pri;
// lab_0958
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C68(var_8)
    OP_JZER lab_0A88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09B0
    OP_ZERO_P_S 64
// lab_0A88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AC0
    OP_CONST_S 64, 1
// lab_0AC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AF8
    OP_CONST_S 72, 1
// lab_0AF8
    var_8 = 1;
    var_16 = 0;
    var_24 = 256;
    var_32 = -1;
    var_40 = -1;
    var_48 = 248;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 200;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 160;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_09B0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09D8
    OP_ZERO_P_S 72
// lab_09D8
    var_8 = 0;
    var_16 = 0;
    var_24 = 152;
    var_32 = -1;
    var_40 = -1;
    var_48 = 144;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 80;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 32;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0B98
// lab_0B98
    pri = 0;
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BE8
fun_0BE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0CF8
fun_0CF8() {
    pri = arg_4;
    alt = 1;
    OP_AND 
    var_8 = pri;
    pri = arg_4;
    alt = 4;
    OP_AND 
    var_16 = pri;
    pri = arg_4;
    alt = 16;
    OP_AND 
    var_24 = pri;
    pri = arg_4;
    alt = 8;
    OP_AND 
    var_32 = pri;
    OP_ZERO_P_S -40
    pri = arg_2;
    switch (pri) {
// switch_1310
        case default:
        {
// switch_1310_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1358
// lab_1358
            var_8 = arg_6;
            var_16 = arg_5;
            var_24 = var_32;
            var_32 = var_24;
            var_40 = var_16;
            var_48 = var_8;
            var_56 = var_40;
            var_64 = arg_1;
            var_72 = 0;
            var_80 = arg_0;
            pri = MsgWin_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            pri = arg_4;
            alt = 2;
            OP_AND 
            OP_JNZ lab_1400
            var_88 = 0;
            pri = fun_16D0()
// lab_1400
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1310_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0EF8
                case default:
                {
// switch_0EF8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F70
// lab_0F70
                    OP_JUMP lab_1358
                }
                case 0x0:
                {
// switch_0EF8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0F70
                }
                case 0x1:
                {
// switch_0EF8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0F70
                }
                case 0x2:
                {
// switch_0EF8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0F70
                }
                case 0x3:
                {
// switch_0EF8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F70
                }
                case 0x4:
                {
// switch_0EF8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0F70
                }
                case 0x5:
                {
// switch_0EF8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0F70
                }
            }
        }
        case 0x65:
        {
// switch_1310_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_10B0
                case default:
                {
// switch_10B0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1128
// lab_1128
                    OP_JUMP lab_1358
                }
                case 0x0:
                {
// switch_10B0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1128
                }
                case 0x1:
                {
// switch_10B0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1128
                }
                case 0x2:
                {
// switch_10B0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1128
                }
                case 0x3:
                {
// switch_10B0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1128
                }
                case 0x4:
                {
// switch_10B0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1128
                }
                case 0x5:
                {
// switch_10B0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1128
                }
            }
        }
        case 0x66:
        {
// switch_1310_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1268
                case default:
                {
// switch_1268_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12E0
// lab_12E0
                    OP_JUMP lab_1358
                }
                case 0x0:
                {
// switch_1268_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_12E0
                }
                case 0x1:
                {
// switch_1268_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_12E0
                }
                case 0x2:
                {
// switch_1268_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_12E0
                }
                case 0x3:
                {
// switch_1268_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_12E0
                }
                case 0x4:
                {
// switch_1268_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_12E0
                }
                case 0x5:
                {
// switch_1268_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_12E0
                }
            }
        }
    }
}
// fun_1418
fun_1418() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0CF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1480
fun_1480() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0698(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1528
    pri = 1;
    return pri;
// lab_1528
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1570
fun_1570() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_15C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1480(var_8)
    arg_2 = pri;
// lab_15C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0CF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1418(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1620(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
    OP_JUMP lab_16E8
// lab_16E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1728
    pri = 0;
    return pri;
// lab_1728
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_16E8
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = 0;
    pri = fun_16D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1818
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1818
    pri = 0;
    return pri;
}
// fun_1828
fun_1828() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1858
fun_1858() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1888
// lab_1888
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18C8
    OP_JUMP lab_18F8
// lab_18C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1888
// lab_18F8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    pri = ListMenuStart_Seq(var_40, var_32, var_24, var_16, var_8)
    var_48 = 12;
    pri = TempWorkGet(var_48)
    return pri;
}
// fun_19B0
fun_19B0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_19E8
fun_19E8() {
    OP_JUMP lab_1A00
// lab_1A00
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1A48
    OP_JUMP lab_1A78
    OP_JUMP lab_1A68
// lab_1A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1A78
    pri = 0;
    return pri;
// lab_1A68
    OP_JUMP lab_1A00
}
// fun_1A88
fun_1A88() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B58
fun_1B58() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C48
fun_1C48() {
    pri = arg_1;
    OP_JNZ lab_1C90
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1C90
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1CE8
fun_1CE8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1D60
fun_1D60() {
    var_8 = 0;
    pri = fun_1CE8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1DE0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1DE0
    pri = 1;
    return pri;
// lab_1DE0
    var_8 = 0;
    pri = fun_1CE8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1E20
    pri = 1;
    return pri;
// lab_1E20
    var_8 = 0;
    pri = fun_1CE8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1E50
fun_1E50() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1EA0
fun_1EA0() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_1ED8
fun_1ED8() {
    pri = arg_6;
    OP_JNZ lab_1F10
    var_8 = 0;
    pri = fun_0BA8()
// lab_1F10
    pri = arg_1;
    switch (pri) {
// switch_3478
        case default:
        {
// switch_3478_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37C8
            pri = 1;
            OP_JUMP lab_37D0
// lab_37C8
            pri = 0;
// lab_37D0
            OP_JZER lab_3928
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0698(var_24, var_16)
            var_520 = pri;
            pri = 0;
            OP_ADDR_ALT -536
            OP_FILL 16
            OP_PUSH_P_ADR -536
            pri = var_520;
            OP_ADD_P_C 1
            var_56 = pri;
            pri = NumericToString(var_56, var_48)
            OP_PUSH_P_ADR -536
            OP_PUSH_P_ADR -536
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3988
// lab_3928
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_3988
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39E8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A48
// lab_39E8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A48
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A48
            pri = arg_2;
            OP_JZER lab_3A88
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A88
            var_8 = 0;
            pri = fun_0BE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3478_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x1:
        {
// switch_3478_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x2:
        {
// switch_3478_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x3:
        {
// switch_3478_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x4:
        {
// switch_3478_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x5:
        {
// switch_3478_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0x6:
        {
// switch_3478_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0x7:
        {
// switch_3478_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0x8:
        {
// switch_3478_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x9:
        {
// switch_3478_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0xa:
        {
// switch_3478_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0xb:
        {
// switch_3478_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0xc:
        {
// switch_3478_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0xd:
        {
// switch_3478_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0xe:
        {
// switch_3478_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0xf:
        {
// switch_3478_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x10:
        {
// switch_3478_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x11:
        {
// switch_3478_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0x12:
        {
// switch_3478_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0x13:
        {
// switch_3478_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x14:
        {
// switch_3478_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x15:
        {
// switch_3478_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x16:
        {
// switch_3478_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x17:
        {
// switch_3478_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x18:
        {
// switch_3478_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x19:
        {
// switch_3478_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3478_case_default
        }
        case 0x1a:
        {
// switch_3478_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0620(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0908(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3478_case_default
        }
        case 0x1b:
        {
// switch_3478_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0620(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0908(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3478_case_default
        }
        case 0x1c:
        {
// switch_3478_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0620(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0908(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3478_case_default
        }
        case 0x1d:
        {
// switch_3478_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x1e:
        {
// switch_3478_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x1f:
        {
// switch_3478_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x20:
        {
// switch_3478_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x21:
        {
// switch_3478_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x22:
        {
// switch_3478_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x23:
        {
// switch_3478_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x24:
        {
// switch_3478_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x25:
        {
// switch_3478_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x26:
        {
// switch_3478_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x27:
        {
// switch_3478_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x28:
        {
// switch_3478_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
        case 0x29:
        {
// switch_3478_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3478_case_default
        }
    }
}
// fun_3AB8
fun_3AB8() {
    pri = arg_4;
    OP_JNZ lab_3AF0
    var_8 = 0;
    pri = fun_0BA8()
// lab_3AF0
    pri = arg_1;
    switch (pri) {
// switch_4EC8
        case default:
        {
// switch_4EC8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8968;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0C68(var_264)
            OP_JZER lab_5490
            pri = arg_3;
            switch (pri) {
// switch_5438
                case default:
                {
// switch_5438_case_default
                    OP_JUMP lab_5748
// lab_5748
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_57B8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_57B8
                    var_8 = 0;
                    pri = fun_0BE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5438_case_0x1
                    var_8 = 32;
                    var_16 = 9120;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5438_case_default
                }
                case 0x2:
                {
// switch_5438_case_0x2
                    var_8 = 32;
                    var_16 = 9224;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5438_case_default
                }
                case 0x3:
                {
// switch_5438_case_0x3
                    var_8 = 32;
                    var_16 = 9024;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5438_case_default
                }
            }
// lab_5490
            pri = arg_1;
            OP_JZER lab_54E0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_54E0
            pri = 0;
            OP_JUMP lab_54E8
// lab_54E0
            pri = 1;
// lab_54E8
            OP_JZER lab_5550
            var_8 = 9320;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0698(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5550
            pri = 1;
            OP_JUMP lab_5558
// lab_5550
            pri = 0;
// lab_5558
            OP_JZER lab_55A8
            var_8 = 32;
            var_16 = 9416;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5748
// lab_55A8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5610
            var_8 = 32;
            var_16 = 9576;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5748
// lab_5610
            var_16 = 9696;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0698(var_24, var_16)
            var_264 = pri;
            pri = 0;
            OP_ADDR_ALT -392
            OP_FILL 128
            OP_PUSH_P_ADR -392
            pri = var_264;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -392
            var_176 = 9800;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9816;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_4EC8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1:
        {
// switch_4EC8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2:
        {
// switch_4EC8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x3:
        {
// switch_4EC8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x4:
        {
// switch_4EC8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x5:
        {
// switch_4EC8_case_0x5
            var_8 = 1;
            var_16 = 8448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08D0(var_40)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x6:
        {
// switch_4EC8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x7:
        {
// switch_4EC8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x8:
        {
// switch_4EC8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x9:
        {
// switch_4EC8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0xa:
        {
// switch_4EC8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0xb:
        {
// switch_4EC8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0xc:
        {
// switch_4EC8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0xd:
        {
// switch_4EC8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0xe:
        {
// switch_4EC8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0xf:
        {
// switch_4EC8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x10:
        {
// switch_4EC8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x11:
        {
// switch_4EC8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x12:
        {
// switch_4EC8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x13:
        {
// switch_4EC8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x14:
        {
// switch_4EC8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x15:
        {
// switch_4EC8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x16:
        {
// switch_4EC8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x17:
        {
// switch_4EC8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x18:
        {
// switch_4EC8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x19:
        {
// switch_4EC8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1a:
        {
// switch_4EC8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1b:
        {
// switch_4EC8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1c:
        {
// switch_4EC8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1d:
        {
// switch_4EC8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1e:
        {
// switch_4EC8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x1f:
        {
// switch_4EC8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x20:
        {
// switch_4EC8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x21:
        {
// switch_4EC8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x22:
        {
// switch_4EC8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x23:
        {
// switch_4EC8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x24:
        {
// switch_4EC8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x25:
        {
// switch_4EC8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x26:
        {
// switch_4EC8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x27:
        {
// switch_4EC8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x28:
        {
// switch_4EC8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x29:
        {
// switch_4EC8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2a:
        {
// switch_4EC8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2b:
        {
// switch_4EC8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2c:
        {
// switch_4EC8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2d:
        {
// switch_4EC8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2e:
        {
// switch_4EC8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x2f:
        {
// switch_4EC8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x30:
        {
// switch_4EC8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x31:
        {
// switch_4EC8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x32:
        {
// switch_4EC8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x33:
        {
// switch_4EC8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x34:
        {
// switch_4EC8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x35:
        {
// switch_4EC8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x36:
        {
// switch_4EC8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x37:
        {
// switch_4EC8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x38:
        {
// switch_4EC8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x39:
        {
// switch_4EC8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x3a:
        {
// switch_4EC8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x3b:
        {
// switch_4EC8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x3c:
        {
// switch_4EC8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8544;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x3d:
        {
// switch_4EC8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8720;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
        case 0x3e:
        {
// switch_4EC8_case_0x3e
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            OP_JUMP switch_4EC8_case_default
        }
    }
}
// fun_57E8
fun_57E8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_58E8
        case default:
        {
// switch_58E8_case_default
            var_8 = arg_5;
            var_16 = var_8;
            var_24 = arg_4;
            var_32 = arg_2;
            var_40 = 8802641224559852288;
            var_48 = arg_0;
            pri = EasyTalkCharacter(var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_58E8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_58E8_case_default
        }
        case 0x1:
        {
// switch_58E8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_58E8_case_default
        }
        case 0x2:
        {
// switch_58E8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_58E8_case_default
        }
        case 0x3:
        {
// switch_58E8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_58E8_case_default
        }
    }
}
// fun_59A8
fun_59A8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_59F8
// lab_59F8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9864;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5A70
    OP_JUMP lab_5AA0
// lab_5A70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_59F8
// lab_5AA0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_5B28
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3AB8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0CC8(var_56)
// lab_5B28
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5B90
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C28(var_24, var_16)
// lab_5B90
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C28(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_5C50
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_06D0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_04A8(var_88, var_80, var_72, var_64, var_56)
// lab_5C50
    pri = IsPlayerRideBicycle()
    OP_JZER lab_5C90
    pri = 0;
    return pri;
// lab_5C90
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5DD8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9984;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0620(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_5DA0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_5DD8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_04F8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_04F8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06D0(var_40)
    pri = 0;
    return pri;
// lab_5DA0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C28(var_16, var_8)
}
// fun_5E60
fun_5E60() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_5EF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06D0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1ED8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_5EF8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_6050
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_5FB8
    var_24 = 10120;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_5FB8
    pri = 1;
    OP_JUMP lab_5FC0
// lab_6050
    pri = 0;
    return pri;
// lab_5FB8
    pri = 0;
// lab_5FC0
    OP_JZER lab_6050
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06D0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1ED8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_6060
fun_6060() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_63E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_60C8
fun_60C8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_6138
    OP_CONST_S -8, 1
// lab_6138
    pri = arg_0;
    OP_JNZ lab_6158
    OP_ZERO_P_S -8
// lab_6158
    pri = var_8;
    OP_JZER lab_61E0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_61E0
    pri = 0;
    return pri;
}
// fun_61F8
fun_61F8() {
    var_8 = 10224;
    var_16 = 8;
    pri = fun_19B0(var_8)
    var_24 = 0;
    pri = fun_19E8()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1AB8(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_1BF8(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_6310
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_6310
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_5E60(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_6060(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1A88()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_1EA0(var_112)
    pri = 0;
    return pri;
}
// fun_63E0
fun_63E0() {
    var_8 = 10384;
    var_16 = 8;
    pri = fun_19B0(var_8)
    var_24 = 0;
    pri = fun_19E8()
    pri = arg_3;
    OP_JNZ lab_6500
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_64C8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_6570(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_64F0
// lab_6500
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6710(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_64C8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6638(var_16, var_8)
// lab_64F0
    OP_JUMP lab_6548
// lab_6548
    var_8 = 0;
    pri = fun_1A88()
    pri = 0;
    return pri;
}
// fun_6570
fun_6570() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6710(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_6620
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_6620
    pri = 0;
    return pri;
}
// fun_6638
fun_6638() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1B08(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1670(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1768(var_72)
    var_88 = 0;
    pri = fun_1828()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1AB8(var_96)
    pri = 0;
    return pri;
}
// fun_6710
fun_6710() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6758
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_6A18(var_8)
// lab_6758
    pri = arg_4;
    OP_JNZ lab_67C0
    var_8 = 0;
    var_16 = 8;
    pri = fun_1AB8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1B08(var_40, var_32, var_24)
// lab_67C0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_6860
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1B58(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1670(var_56, var_48, var_40)
    OP_JUMP lab_6950
// lab_6860
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_6918
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_6918
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_6918
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1670(var_24, var_16, var_8)
// lab_6950
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6990
    var_8 = 0;
    var_16 = 8;
    pri = fun_0398(var_8)
// lab_6990
    var_8 = 1;
    var_16 = 8;
    pri = fun_1768(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_6C20(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_60C8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_6A18
fun_6A18() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_6A78
    var_16 = 10544;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_6A78
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_6BB8
        case default:
        {
// switch_6BB8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_6BA8
            var_16 = 11088;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_6BA8
            OP_JUMP lab_6BF0
// lab_6BF0
            var_8 = 11304;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_6BB8_case_0x1
            var_8 = 10760;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_6BF0
        }
        case 0x2:
        {
// switch_6BB8_case_0x2
            var_8 = 10888;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_6BF0
        }
    }
}
// fun_6C20
fun_6C20() {
    pri = arg_2;
    OP_JNZ lab_6D08
    var_8 = 0;
    var_16 = 8;
    pri = fun_1AB8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1B08(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1BA8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_6D08
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1670(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1768(var_40)
    var_56 = 0;
    pri = fun_1828()
    pri = 0;
    return pri;
}
// fun_6D80
fun_6D80() {
    pri = g_mode;
    switch (pri) {
// switch_6E18
        case default:
        {
// switch_6E18_case_default
            pri = CommandNOP()
            OP_JUMP lab_6E50
// lab_6E50
            pri = 0;
            return pri;
        }
        case 0xbef4b1b8901b0a45:
        {
// switch_6E18_case_0xbef4b1b8901b0a45
            var_8 = 0;
            pri = fun_6E78()
            OP_JUMP lab_6E50
        }
        case 0x0:
        {
// switch_6E18_case_0x0
            var_8 = 0;
            pri = fun_6E60()
            OP_JUMP lab_6E50
        }
    }
}
// fun_6E60
fun_6E60() {
    pri = 0;
    return pri;
}
// fun_6E78
fun_6E78() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_57E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 2415683236200724802;
    pri = FlagGet(var_72)
    OP_JNZ lab_6F58
    var_80 = var_8;
    var_88 = 8;
    pri = fun_7030(var_80)
    OP_JUMP lab_6FE0
// lab_6F58
    var_8 = 3516816860831695153;
    pri = FlagGet(var_8)
    OP_JZER lab_6FC0
    var_16 = var_8;
    var_24 = 8;
    pri = fun_7D58(var_16)
    OP_JUMP lab_6FE0
// lab_6FC0
    var_8 = var_8;
    var_16 = 8;
    pri = fun_7880(var_8)
// lab_6FE0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_59A8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7030
fun_7030() {
    var_8 = 40401670603125551;
    pri = WorkGet(var_8)
    OP_JNZ lab_7208
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 2379789646928512702;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1570(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1768(var_80)
    var_96 = 0;
    pri = fun_1828()
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = 2379788547416884491;
    var_152 = arg_0;
    var_160 = 56;
    pri = fun_1570(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1768(var_168)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = 2379787447905256280;
    var_232 = arg_0;
    var_240 = 56;
    pri = fun_1570(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1768(var_248)
    var_264 = 0;
    pri = fun_1828()
// lab_7208
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2379795144486653757;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1570(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1768(var_72)
    var_88 = 0;
    var_96 = 7389107427006307290;
    var_104 = 0;
    var_112 = 24;
    pri = fun_1858(var_104, var_96, var_88)
    var_120 = 0;
    var_128 = 7389106327494679079;
    var_136 = 1;
    var_144 = 24;
    pri = fun_1858(var_136, var_128, var_120)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 1;
    var_192 = 32;
    pri = fun_1940(var_184, var_176, var_168, var_160)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7830
        case default:
        {
// switch_7830_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7830_case_0x0
            var_8 = 0;
            pri = fun_1828()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 2379794044975025546;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1570(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1768(var_80)
            var_96 = 0;
            pri = fun_1828()
            var_104 = -1;
            var_112 = 0;
            var_120 = 0;
            var_128 = 4137458127409209711;
            var_136 = 248;
            var_144 = 40;
            pri = fun_1C48(var_136, var_128, var_120, var_112, var_104)
            var_152 = 0;
            pri = fun_1D60()
            OP_JZER lab_7480
            var_160 = 0;
            pri = fun_1E50()
// lab_7480
            var_8 = 15;
            var_16 = 8;
            pri = fun_0060(var_8)
            var_24 = 1;
            var_32 = 1;
            var_40 = 0;
            var_48 = 1;
            var_56 = 1;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_57E8(var_64, var_56, var_48, var_40, var_32, var_24)
            var_80 = 11488;
            var_88 = 8;
            var_96 = 16;
            pri = fun_02A8(var_88, var_80)
            var_104 = 0;
            pri = fun_0308()
            var_112 = 0;
            var_120 = 3;
            var_128 = 0;
            var_136 = 100;
            var_144 = -1;
            var_152 = 2379791845951769124;
            var_160 = arg_0;
            var_168 = 56;
            pri = fun_1570(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_176 = 1;
            var_184 = 8;
            pri = fun_1768(var_176)
            var_192 = 0;
            pri = fun_1828()
            var_200 = 0;
            var_208 = 3;
            var_216 = 0;
            var_224 = 100;
            var_232 = -1;
            var_240 = 2379781950347115225;
            var_248 = arg_0;
            var_256 = 56;
            pri = fun_1570(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
            var_264 = 1;
            var_272 = 8;
            pri = fun_1768(var_264)
            var_280 = 0;
            pri = fun_1828()
            var_288 = 1;
            var_296 = 3;
            var_304 = 0;
            var_312 = 0;
            var_320 = arg_0;
            var_328 = 40;
            pri = fun_3AB8(var_320, var_312, var_304, var_296, var_288)
            var_336 = arg_0;
            var_344 = 8;
            pri = fun_06D0(var_336)
            var_352 = 1;
            var_360 = 3;
            var_368 = 8608199848743406269;
            var_376 = arg_0;
            var_384 = 32;
            pri = fun_61F8(var_376, var_368, var_360, var_352)
            var_392 = 2415683236200724802;
            pri = FlagSet(var_392)
            var_400 = 3516816860831695153;
            pri = FlagSet(var_400)
            OP_JUMP switch_7830_case_default
        }
        case 0x1:
        {
// switch_7830_case_0x1
            var_8 = 0;
            pri = fun_1828()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 2379792945463397335;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1570(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1768(var_80)
            var_96 = 0;
            pri = fun_1828()
            var_104 = 1;
            var_112 = 40401670603125551;
            pri = WorkSet(var_112, var_104)
            OP_JUMP switch_7830_case_default
        }
    }
}
// fun_7880
fun_7880() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2378939724440094824;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1570(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1768(var_72)
    var_88 = 0;
    var_96 = 7389107427006307290;
    var_104 = 0;
    var_112 = 24;
    pri = fun_1858(var_104, var_96, var_88)
    var_120 = 0;
    var_128 = 7389106327494679079;
    var_136 = 1;
    var_144 = 24;
    pri = fun_1858(var_136, var_128, var_120)
    var_160 = 0;
    var_168 = 1;
    var_176 = 0;
    var_184 = 1;
    var_192 = 32;
    pri = fun_1940(var_184, var_176, var_168, var_160)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7D08
        case default:
        {
// switch_7D08_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7D08_case_0x0
            var_8 = 0;
            pri = fun_1828()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 2378940823951723035;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1570(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1768(var_80)
            var_96 = 0;
            pri = fun_1828()
            var_104 = -1;
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            var_136 = 248;
            var_144 = 40;
            pri = fun_1C48(var_136, var_128, var_120, var_112, var_104)
            var_152 = 0;
            pri = fun_1D60()
            OP_JZER lab_7AF8
            var_160 = 0;
            pri = fun_1E50()
// lab_7AF8
            var_8 = 15;
            var_16 = 8;
            pri = fun_0060(var_8)
            var_24 = 11488;
            var_32 = 8;
            var_40 = 16;
            pri = fun_02A8(var_32, var_24)
            var_48 = 0;
            pri = fun_0308()
            var_56 = 0;
            var_64 = 3;
            var_72 = 0;
            var_80 = 100;
            var_88 = -1;
            var_96 = 2378941923463351246;
            var_104 = arg_0;
            var_112 = 56;
            pri = fun_1570(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1768(var_120)
            var_136 = 0;
            pri = fun_1828()
            var_144 = 3516816860831695153;
            pri = FlagSet(var_144)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1:
        {
// switch_7D08_case_0x1
            var_8 = 0;
            pri = fun_1828()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 2379792945463397335;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_1570(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1768(var_80)
            var_96 = 0;
            pri = fun_1828()
            var_104 = 1;
            var_112 = 40401670603125551;
            pri = WorkSet(var_112, var_104)
            OP_JUMP switch_7D08_case_default
        }
    }
}
// fun_7D58
fun_7D58() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 2379780850835487014;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1570(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1768(var_72)
    var_88 = 0;
    pri = fun_1828()
    pri = 0;
    return pri;
}
