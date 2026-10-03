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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_18D0()
    return pri;
}
// fun_18D0
fun_18D0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1910
fun_1910() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1948
fun_1948() {
    OP_JUMP lab_1960
// lab_1960
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_19A8
    OP_JUMP lab_19D8
    OP_JUMP lab_19C8
// lab_19A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_19D8
    pri = 0;
    return pri;
// lab_19C8
    OP_JUMP lab_1960
}
// fun_19E8
fun_19E8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1A18
fun_1A18() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A68
fun_1A68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B58
fun_1B58() {
    pri = arg_1;
    OP_JNZ lab_1BA0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1BA0
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
// fun_1BF8
fun_1BF8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1C70
fun_1C70() {
    var_8 = 0;
    pri = fun_1BF8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1CF0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1CF0
    pri = 1;
    return pri;
// lab_1CF0
    var_8 = 0;
    pri = fun_1BF8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1D30
    pri = 1;
    return pri;
// lab_1D30
    var_8 = 0;
    pri = fun_1BF8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1D60
fun_1D60() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_1DB0
fun_1DB0() {
    pri = arg_6;
    OP_JNZ lab_1DE8
    var_8 = 0;
    pri = fun_0BA8()
// lab_1DE8
    pri = arg_1;
    switch (pri) {
// switch_3350
        case default:
        {
// switch_3350_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_36A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_36A0
            pri = 1;
            OP_JUMP lab_36A8
// lab_36A0
            pri = 0;
// lab_36A8
            OP_JZER lab_3800
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
            OP_JUMP lab_3860
// lab_3800
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
// lab_3860
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_38C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3920
// lab_38C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3920
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3920
            pri = arg_2;
            OP_JZER lab_3960
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3960
            var_8 = 0;
            pri = fun_0BE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3350_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x1:
        {
// switch_3350_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x2:
        {
// switch_3350_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x3:
        {
// switch_3350_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x4:
        {
// switch_3350_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x5:
        {
// switch_3350_case_0x5
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
            OP_JUMP switch_3350_case_default
        }
        case 0x6:
        {
// switch_3350_case_0x6
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
            OP_JUMP switch_3350_case_default
        }
        case 0x7:
        {
// switch_3350_case_0x7
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
            OP_JUMP switch_3350_case_default
        }
        case 0x8:
        {
// switch_3350_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x9:
        {
// switch_3350_case_0x9
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
            OP_JUMP switch_3350_case_default
        }
        case 0xa:
        {
// switch_3350_case_0xa
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
            OP_JUMP switch_3350_case_default
        }
        case 0xb:
        {
// switch_3350_case_0xb
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
            OP_JUMP switch_3350_case_default
        }
        case 0xc:
        {
// switch_3350_case_0xc
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
            OP_JUMP switch_3350_case_default
        }
        case 0xd:
        {
// switch_3350_case_0xd
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
            OP_JUMP switch_3350_case_default
        }
        case 0xe:
        {
// switch_3350_case_0xe
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
            OP_JUMP switch_3350_case_default
        }
        case 0xf:
        {
// switch_3350_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x10:
        {
// switch_3350_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x11:
        {
// switch_3350_case_0x11
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
            OP_JUMP switch_3350_case_default
        }
        case 0x12:
        {
// switch_3350_case_0x12
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
            OP_JUMP switch_3350_case_default
        }
        case 0x13:
        {
// switch_3350_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x14:
        {
// switch_3350_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x15:
        {
// switch_3350_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x16:
        {
// switch_3350_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x17:
        {
// switch_3350_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x18:
        {
// switch_3350_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x19:
        {
// switch_3350_case_0x19
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
            OP_JUMP switch_3350_case_default
        }
        case 0x1a:
        {
// switch_3350_case_0x1a
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
            OP_JUMP switch_3350_case_default
        }
        case 0x1b:
        {
// switch_3350_case_0x1b
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
            OP_JUMP switch_3350_case_default
        }
        case 0x1c:
        {
// switch_3350_case_0x1c
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
            OP_JUMP switch_3350_case_default
        }
        case 0x1d:
        {
// switch_3350_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x1e:
        {
// switch_3350_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x1f:
        {
// switch_3350_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x20:
        {
// switch_3350_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x21:
        {
// switch_3350_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x22:
        {
// switch_3350_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x23:
        {
// switch_3350_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x24:
        {
// switch_3350_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x25:
        {
// switch_3350_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x26:
        {
// switch_3350_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x27:
        {
// switch_3350_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x28:
        {
// switch_3350_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
        case 0x29:
        {
// switch_3350_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3350_case_default
        }
    }
}
// fun_3990
fun_3990() {
    pri = arg_5;
    OP_JNZ lab_39C8
    var_8 = 0;
    pri = fun_0BA8()
// lab_39C8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3A18
    OP_CONST_S -8, -1
// lab_3A18
    pri = arg_1;
    switch (pri) {
// switch_54D0
        case default:
        {
// switch_54D0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5978
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0698(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5978
            pri = 1;
            OP_JUMP lab_5980
// lab_5978
            pri = 0;
// lab_5980
            OP_JZER lab_59D0
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5C28
// lab_59D0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5A38
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5A38
            pri = 1;
            OP_JUMP lab_5A40
// lab_5A38
            pri = 0;
// lab_5A40
            OP_JZER lab_5BC8
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0698(var_24, var_16)
            var_528 = pri;
            pri = 0;
            OP_ADDR_ALT -656
            OP_FILL 128
            OP_PUSH_P_ADR -656
            pri = var_528;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -656
            OP_PUSH_P_ADR -656
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5C28
// lab_5BC8
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_5C28
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5C98
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5C98
            var_8 = 0;
            pri = fun_0BE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_54D0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1:
        {
// switch_54D0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2:
        {
// switch_54D0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x3:
        {
// switch_54D0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x4:
        {
// switch_54D0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x5:
        {
// switch_54D0_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08D0(var_40)
            OP_JUMP switch_54D0_case_default
        }
        case 0x6:
        {
// switch_54D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x7:
        {
// switch_54D0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x8:
        {
// switch_54D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x9:
        {
// switch_54D0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0xa:
        {
// switch_54D0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0xb:
        {
// switch_54D0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0xc:
        {
// switch_54D0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0xd:
        {
// switch_54D0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0xe:
        {
// switch_54D0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0xf:
        {
// switch_54D0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x10:
        {
// switch_54D0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x11:
        {
// switch_54D0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x12:
        {
// switch_54D0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x13:
        {
// switch_54D0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x14:
        {
// switch_54D0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x15:
        {
// switch_54D0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x16:
        {
// switch_54D0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x17:
        {
// switch_54D0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x18:
        {
// switch_54D0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x19:
        {
// switch_54D0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1a:
        {
// switch_54D0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1b:
        {
// switch_54D0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1c:
        {
// switch_54D0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1d:
        {
// switch_54D0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1e:
        {
// switch_54D0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x1f:
        {
// switch_54D0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x20:
        {
// switch_54D0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x21:
        {
// switch_54D0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x22:
        {
// switch_54D0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x23:
        {
// switch_54D0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x24:
        {
// switch_54D0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x25:
        {
// switch_54D0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x26:
        {
// switch_54D0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x27:
        {
// switch_54D0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x28:
        {
// switch_54D0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x29:
        {
// switch_54D0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2a:
        {
// switch_54D0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2b:
        {
// switch_54D0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2c:
        {
// switch_54D0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2d:
        {
// switch_54D0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2e:
        {
// switch_54D0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x2f:
        {
// switch_54D0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x30:
        {
// switch_54D0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x31:
        {
// switch_54D0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x32:
        {
// switch_54D0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x33:
        {
// switch_54D0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x34:
        {
// switch_54D0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x35:
        {
// switch_54D0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x36:
        {
// switch_54D0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x37:
        {
// switch_54D0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x38:
        {
// switch_54D0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0908(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54D0_case_default
        }
        case 0x39:
        {
// switch_54D0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x3a:
        {
// switch_54D0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x3b:
        {
// switch_54D0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x3c:
        {
// switch_54D0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x3d:
        {
// switch_54D0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
        case 0x3e:
        {
// switch_54D0_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            OP_JUMP switch_54D0_case_default
        }
    }
}
// fun_5CC8
fun_5CC8() {
    pri = arg_4;
    OP_JNZ lab_5D00
    var_8 = 0;
    pri = fun_0BA8()
// lab_5D00
    pri = arg_1;
    switch (pri) {
// switch_70D8
        case default:
        {
// switch_70D8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0C68(var_264)
            OP_JZER lab_76A0
            pri = arg_3;
            switch (pri) {
// switch_7648
                case default:
                {
// switch_7648_case_default
                    OP_JUMP lab_7958
// lab_7958
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_79C8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_79C8
                    var_8 = 0;
                    pri = fun_0BE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7648_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7648_case_default
                }
                case 0x2:
                {
// switch_7648_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7648_case_default
                }
                case 0x3:
                {
// switch_7648_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7648_case_default
                }
            }
// lab_76A0
            pri = arg_1;
            OP_JZER lab_76F0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_76F0
            pri = 0;
            OP_JUMP lab_76F8
// lab_76F0
            pri = 1;
// lab_76F8
            OP_JZER lab_7760
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0698(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7760
            pri = 1;
            OP_JUMP lab_7768
// lab_7760
            pri = 0;
// lab_7768
            OP_JZER lab_77B8
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7958
// lab_77B8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7820
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7958
// lab_7820
            var_16 = 29888;
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_70D8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1:
        {
// switch_70D8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2:
        {
// switch_70D8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x3:
        {
// switch_70D8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x4:
        {
// switch_70D8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x5:
        {
// switch_70D8_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_08D0(var_40)
            OP_JUMP switch_70D8_case_default
        }
        case 0x6:
        {
// switch_70D8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x7:
        {
// switch_70D8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x8:
        {
// switch_70D8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x9:
        {
// switch_70D8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0xa:
        {
// switch_70D8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0xb:
        {
// switch_70D8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0xc:
        {
// switch_70D8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0xd:
        {
// switch_70D8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0xe:
        {
// switch_70D8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0xf:
        {
// switch_70D8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x10:
        {
// switch_70D8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x11:
        {
// switch_70D8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x12:
        {
// switch_70D8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x13:
        {
// switch_70D8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x14:
        {
// switch_70D8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x15:
        {
// switch_70D8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x16:
        {
// switch_70D8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x17:
        {
// switch_70D8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x18:
        {
// switch_70D8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x19:
        {
// switch_70D8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1a:
        {
// switch_70D8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1b:
        {
// switch_70D8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1c:
        {
// switch_70D8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1d:
        {
// switch_70D8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1e:
        {
// switch_70D8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x1f:
        {
// switch_70D8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x20:
        {
// switch_70D8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x21:
        {
// switch_70D8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x22:
        {
// switch_70D8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x23:
        {
// switch_70D8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x24:
        {
// switch_70D8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x25:
        {
// switch_70D8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x26:
        {
// switch_70D8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x27:
        {
// switch_70D8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x28:
        {
// switch_70D8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x29:
        {
// switch_70D8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2a:
        {
// switch_70D8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2b:
        {
// switch_70D8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2c:
        {
// switch_70D8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2d:
        {
// switch_70D8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2e:
        {
// switch_70D8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x2f:
        {
// switch_70D8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x30:
        {
// switch_70D8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x31:
        {
// switch_70D8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x32:
        {
// switch_70D8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x33:
        {
// switch_70D8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x34:
        {
// switch_70D8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x35:
        {
// switch_70D8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x36:
        {
// switch_70D8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x37:
        {
// switch_70D8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x38:
        {
// switch_70D8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x39:
        {
// switch_70D8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x3a:
        {
// switch_70D8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x3b:
        {
// switch_70D8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x3c:
        {
// switch_70D8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x3d:
        {
// switch_70D8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
        case 0x3e:
        {
// switch_70D8_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0658(var_24, var_16, var_8)
            OP_JUMP switch_70D8_case_default
        }
    }
}
// fun_79F8
fun_79F8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7AF8
        case default:
        {
// switch_7AF8_case_default
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
// switch_7AF8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7AF8_case_default
        }
        case 0x1:
        {
// switch_7AF8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7AF8_case_default
        }
        case 0x2:
        {
// switch_7AF8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7AF8_case_default
        }
        case 0x3:
        {
// switch_7AF8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7AF8_case_default
        }
    }
}
// fun_7BB8
fun_7BB8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7C08
// lab_7C08
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30056;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7C80
    OP_JUMP lab_7CB0
// lab_7C80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7C08
// lab_7CB0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7D38
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5CC8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0CC8(var_56)
// lab_7D38
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7DA0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C28(var_24, var_16)
// lab_7DA0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0C28(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7E60
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
// lab_7E60
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7EA0
    pri = 0;
    return pri;
// lab_7EA0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7FE8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30176;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0620(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7FB0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7FE8
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
// lab_7FB0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C28(var_16, var_8)
}
// fun_8070
fun_8070() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8108
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
    pri = fun_1DB0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8108
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8260
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_81C8
    var_24 = 30312;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_81C8
    pri = 1;
    OP_JUMP lab_81D0
// lab_8260
    pri = 0;
    return pri;
// lab_81C8
    pri = 0;
// lab_81D0
    OP_JZER lab_8260
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
    pri = fun_1DB0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8270
fun_8270() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8070(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_82F8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_82F8
fun_82F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8490(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8360
fun_8360() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_83D0
    OP_CONST_S -8, 1
// lab_83D0
    pri = arg_0;
    OP_JNZ lab_83F0
    OP_ZERO_P_S -8
// lab_83F0
    pri = var_8;
    OP_JZER lab_8478
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8478
    pri = 0;
    return pri;
}
// fun_8490
fun_8490() {
    var_8 = 30416;
    var_16 = 8;
    pri = fun_1910(var_8)
    var_24 = 0;
    pri = fun_1948()
    pri = arg_3;
    OP_JNZ lab_85B0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8578
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8620(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_85A0
// lab_85B0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_87C0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8578
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_86E8(var_16, var_8)
// lab_85A0
    OP_JUMP lab_85F8
// lab_85F8
    var_8 = 0;
    pri = fun_19E8()
    pri = 0;
    return pri;
}
// fun_8620
fun_8620() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_87C0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_86D0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_86D0
    pri = 0;
    return pri;
}
// fun_86E8
fun_86E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1A68(var_24, var_16, var_8)
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
    pri = fun_1A18(var_96)
    pri = 0;
    return pri;
}
// fun_87C0
fun_87C0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8808
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8AC8(var_8)
// lab_8808
    pri = arg_4;
    OP_JNZ lab_8870
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A68(var_40, var_32, var_24)
// lab_8870
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8910
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1AB8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1670(var_56, var_48, var_40)
    OP_JUMP lab_8A00
// lab_8910
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_89C8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_89C8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_89C8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1670(var_24, var_16, var_8)
// lab_8A00
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8A40
    var_8 = 0;
    var_16 = 8;
    pri = fun_0398(var_8)
// lab_8A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_1768(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8CD0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8360(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8AC8
fun_8AC8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8B28
    var_16 = 30576;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8B28
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8C68
        case default:
        {
// switch_8C68_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8C58
            var_16 = 31120;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8C58
            OP_JUMP lab_8CA0
// lab_8CA0
            var_8 = 31336;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8C68_case_0x1
            var_8 = 30792;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8CA0
        }
        case 0x2:
        {
// switch_8C68_case_0x2
            var_8 = 30920;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8CA0
        }
    }
}
// fun_8CD0
fun_8CD0() {
    pri = arg_2;
    OP_JNZ lab_8DB8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A68(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1B08(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8DB8
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
// fun_8E30
fun_8E30() {
    pri = g_mode;
    switch (pri) {
// switch_8EC8
        case default:
        {
// switch_8EC8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8F00
// lab_8F00
            pri = 0;
            return pri;
        }
        case 0xbef127b89017e9f0:
        {
// switch_8EC8_case_0xbef127b89017e9f0
            var_8 = 0;
            pri = fun_8F28()
            OP_JUMP lab_8F00
        }
        case 0x0:
        {
// switch_8EC8_case_0x0
            var_8 = 0;
            pri = fun_8F10()
            OP_JUMP lab_8F00
        }
    }
}
// fun_8F10
fun_8F10() {
    pri = 0;
    return pri;
}
// fun_8F28
fun_8F28() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_79F8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 8082575281487106535;
    pri = FlagGet(var_72)
    OP_JNZ lab_9028
    var_80 = var_8;
    var_88 = 8;
    pri = fun_9098(var_80)
    var_96 = var_8;
    var_104 = 8;
    pri = fun_95B0(var_96)
    OP_JUMP lab_9048
// lab_9028
    var_8 = var_8;
    var_16 = 8;
    pri = fun_95B0(var_8)
// lab_9048
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7BB8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9098
fun_9098() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1722017014544462589;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1570(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1768(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_1858(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JZER lab_9510
    var_144 = 0;
    pri = fun_1828()
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    var_192 = -1722014815521206167;
    var_200 = arg_0;
    var_208 = 56;
    pri = fun_1570(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1768(var_216)
    var_232 = 0;
    pri = fun_1828()
    var_240 = -1;
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 247;
    var_280 = 40;
    pri = fun_1B58(var_272, var_264, var_256, var_248, var_240)
    var_288 = 0;
    pri = fun_1C70()
    OP_JZER lab_9298
    var_296 = 0;
    pri = fun_1D60()
// lab_9510
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -1722015915032834378;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1570(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1768(var_72)
    var_88 = 0;
    pri = fun_1828()
// lab_9298
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
    pri = fun_79F8(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 31520;
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
    var_152 = -1722013716009577956;
    var_160 = arg_0;
    var_168 = 56;
    pri = fun_1570(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1768(var_176)
    var_192 = 0;
    pri = fun_1828()
    var_200 = 1;
    var_208 = 3;
    var_216 = 0;
    var_224 = 0;
    var_232 = arg_0;
    var_240 = 40;
    pri = fun_5CC8(var_232, var_224, var_216, var_208, var_200)
    var_248 = arg_0;
    var_256 = 8;
    pri = fun_06D0(var_248)
    var_264 = 6;
    var_272 = 4;
    var_280 = 2;
    var_288 = 0;
    var_296 = 8;
    var_304 = 1;
    var_312 = 1278;
    var_320 = arg_0;
    var_328 = 64;
    pri = fun_8270(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_336 = 8082575281487106535;
    pri = FlagSet(var_336)
    var_344 = 1;
    var_352 = 1;
    var_360 = -1;
    var_368 = -1;
    var_376 = 0;
    var_384 = 0;
    var_392 = arg_0;
    var_400 = 56;
    pri = fun_3990(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    OP_JUMP lab_95A0
// lab_95A0
    pri = 0;
    return pri;
}
// fun_95B0
fun_95B0() {
    var_8 = 8082575281487106535;
    pri = FlagGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9688
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -1722012616497949745;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1570(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1768(var_80)
    var_96 = 0;
    pri = fun_1828()
// lab_9688
    pri = 0;
    return pri;
}
