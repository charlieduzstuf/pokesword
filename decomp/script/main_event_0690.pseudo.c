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
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = GetFnvHash64(var_24)
    var_32 = pri;
    var_40 = arg_0;
    pri = FadeOut_(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0478
// lab_0478
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04B8
    OP_JUMP lab_0528
// lab_04B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04F8
    OP_JUMP lab_0528
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
// lab_0528
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_05A8
fun_05A8() {
    var_8 = 0;
    var_16 = arg_8;
    var_24 = arg_6;
    var_32 = arg_7;
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    pri = StartForceMove_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0620
fun_0620() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE0(var_8)
    OP_JZER lab_06E8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E10(var_24)
    OP_JNZ lab_06E8
    pri = 0;
    return pri;
// lab_06E8
    OP_JUMP lab_06F8
// lab_06F8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0758
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0758
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06F8
    pri = 0;
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0848
fun_0848() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0890
    pri = 0;
    return pri;
// lab_0890
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_08D0
// lab_08D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE0(var_8)
    OP_JNZ lab_0958
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0948
    pri = 0;
    return pri;
// lab_0958
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_09A0
    pri = 0;
    return pri;
// lab_09A0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A48(var_8)
    pri = 0;
    return pri;
// lab_0A00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08D0
    pri = 0;
    return pri;
// lab_0948
    OP_JUMP lab_09A0
}
// fun_0A48
fun_0A48() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AD0
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE0(var_8)
    OP_JZER lab_0C00
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B28
    OP_ZERO_P_S 64
// lab_0C00
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C38
    OP_CONST_S 64, 1
// lab_0C38
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C70
    OP_CONST_S 72, 1
// lab_0C70
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
// lab_0B28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B50
    OP_ZERO_P_S 72
// lab_0B50
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
    OP_JUMP lab_0D10
// lab_0D10
    pri = 0;
    return pri;
}
// fun_0D20
fun_0D20() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DA0
fun_0DA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E40
fun_0E40() {
    OP_JUMP lab_0E58
// lab_0E58
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0EE8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0ED8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0848(var_8)
    pri = 0;
    return pri;
// lab_0EE8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F78
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0848(var_8)
    pri = 0;
    return pri;
// lab_0F78
    pri = 0;
    return pri;
// lab_0F68
    OP_JUMP lab_0F88
// lab_0F88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E58
    pri = 0;
    return pri;
// lab_0ED8
    OP_JUMP lab_0F88
}
// fun_0FC8
fun_0FC8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0848(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E40(var_40)
    pri = 0;
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1088
fun_1088() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
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
// switch_1700
        case default:
        {
// switch_1700_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1748
// lab_1748
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
            OP_JNZ lab_17F0
            var_88 = 0;
            pri = fun_1AC0()
// lab_17F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1700_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_12E8
                case default:
                {
// switch_12E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1360
// lab_1360
                    OP_JUMP lab_1748
                }
                case 0x0:
                {
// switch_12E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1360
                }
                case 0x1:
                {
// switch_12E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1360
                }
                case 0x2:
                {
// switch_12E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1360
                }
                case 0x3:
                {
// switch_12E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1360
                }
                case 0x4:
                {
// switch_12E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1360
                }
                case 0x5:
                {
// switch_12E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1360
                }
            }
        }
        case 0x65:
        {
// switch_1700_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_14A0
                case default:
                {
// switch_14A0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1518
// lab_1518
                    OP_JUMP lab_1748
                }
                case 0x0:
                {
// switch_14A0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1518
                }
                case 0x1:
                {
// switch_14A0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1518
                }
                case 0x2:
                {
// switch_14A0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1518
                }
                case 0x3:
                {
// switch_14A0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1518
                }
                case 0x4:
                {
// switch_14A0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1518
                }
                case 0x5:
                {
// switch_14A0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1518
                }
            }
        }
        case 0x66:
        {
// switch_1700_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1658
                case default:
                {
// switch_1658_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16D0
// lab_16D0
                    OP_JUMP lab_1748
                }
                case 0x0:
                {
// switch_1658_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_16D0
                }
                case 0x1:
                {
// switch_1658_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_16D0
                }
                case 0x2:
                {
// switch_1658_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_16D0
                }
                case 0x3:
                {
// switch_1658_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16D0
                }
                case 0x4:
                {
// switch_1658_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_16D0
                }
                case 0x5:
                {
// switch_1658_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_16D0
                }
            }
        }
    }
}
// fun_1808
fun_1808() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_10E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1870
fun_1870() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0810(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1918
    pri = 1;
    return pri;
// lab_1918
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1960
fun_1960() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1870(var_8)
    arg_2 = pri;
// lab_19B0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_10E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A10
fun_1A10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1808(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A60
fun_1A60() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1A10(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AC0
fun_1AC0() {
    OP_JUMP lab_1AD8
// lab_1AD8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B18
    pri = 0;
    return pri;
// lab_1B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AD8
    pri = 0;
    return pri;
}
// fun_1B58
fun_1B58() {
    var_8 = 0;
    pri = fun_1AC0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C08
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C08
    pri = 0;
    return pri;
}
// fun_1C18
fun_1C18() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C48
fun_1C48() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1C80
fun_1C80() {
    OP_JUMP lab_1C98
// lab_1C98
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1CE0
    OP_JUMP lab_1D10
    OP_JUMP lab_1D00
// lab_1CE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1D10
    pri = 0;
    return pri;
// lab_1D00
    OP_JUMP lab_1C98
}
// fun_1D20
fun_1D20() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DA0
fun_1DA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DF0
fun_1DF0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E40
fun_1E40() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E90
fun_1E90() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_1EC8
fun_1EC8() {
    pri = arg_6;
    OP_JNZ lab_1F00
    var_8 = 0;
    pri = fun_0D20()
// lab_1F00
    pri = arg_1;
    switch (pri) {
// switch_3468
        case default:
        {
// switch_3468_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37B8
            pri = 1;
            OP_JUMP lab_37C0
// lab_37B8
            pri = 0;
// lab_37C0
            OP_JZER lab_3918
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0810(var_24, var_16)
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
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3978
// lab_3918
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_3978
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39D8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A38
// lab_39D8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A38
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A38
            pri = arg_2;
            OP_JZER lab_3A78
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A78
            var_8 = 0;
            pri = fun_0D60()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3468_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x1:
        {
// switch_3468_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x2:
        {
// switch_3468_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x3:
        {
// switch_3468_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x4:
        {
// switch_3468_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x5:
        {
// switch_3468_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x6:
        {
// switch_3468_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x7:
        {
// switch_3468_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x8:
        {
// switch_3468_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x9:
        {
// switch_3468_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xa:
        {
// switch_3468_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xb:
        {
// switch_3468_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xc:
        {
// switch_3468_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xd:
        {
// switch_3468_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xe:
        {
// switch_3468_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0xf:
        {
// switch_3468_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x10:
        {
// switch_3468_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x11:
        {
// switch_3468_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x12:
        {
// switch_3468_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x13:
        {
// switch_3468_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x14:
        {
// switch_3468_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x15:
        {
// switch_3468_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x16:
        {
// switch_3468_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x17:
        {
// switch_3468_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x18:
        {
// switch_3468_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x19:
        {
// switch_3468_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3468_case_default
        }
        case 0x1a:
        {
// switch_3468_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07D0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0798(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3468_case_default
        }
        case 0x1b:
        {
// switch_3468_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07D0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0798(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3468_case_default
        }
        case 0x1c:
        {
// switch_3468_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07D0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0798(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3468_case_default
        }
        case 0x1d:
        {
// switch_3468_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x1e:
        {
// switch_3468_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x1f:
        {
// switch_3468_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x20:
        {
// switch_3468_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x21:
        {
// switch_3468_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x22:
        {
// switch_3468_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x23:
        {
// switch_3468_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x24:
        {
// switch_3468_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x25:
        {
// switch_3468_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x26:
        {
// switch_3468_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x27:
        {
// switch_3468_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x28:
        {
// switch_3468_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
        case 0x29:
        {
// switch_3468_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3468_case_default
        }
    }
}
// fun_3AA8
fun_3AA8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_3B40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0848(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1EC8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_3B40
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_3C98
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_3C00
    var_24 = 8440;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_3C00
    pri = 1;
    OP_JUMP lab_3C08
// lab_3C98
    pri = 0;
    return pri;
// lab_3C00
    pri = 0;
// lab_3C08
    OP_JZER lab_3C98
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0848(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1EC8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_3CA8
fun_3CA8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3AA8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_3D30(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_3D30
fun_3D30() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_3EC8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3D98
fun_3D98() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_3E08
    OP_CONST_S -8, 1
// lab_3E08
    pri = arg_0;
    OP_JNZ lab_3E28
    OP_ZERO_P_S -8
// lab_3E28
    pri = var_8;
    OP_JZER lab_3EB0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_3EB0
    pri = 0;
    return pri;
}
// fun_3EC8
fun_3EC8() {
    var_8 = 8544;
    var_16 = 8;
    pri = fun_1C48(var_8)
    var_24 = 0;
    pri = fun_1C80()
    pri = arg_3;
    OP_JNZ lab_3FE8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_3FB0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4058(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_3FD8
// lab_3FE8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_41F8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_3FB0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4120(var_16, var_8)
// lab_3FD8
    OP_JUMP lab_4030
// lab_4030
    var_8 = 0;
    pri = fun_1D20()
    pri = 0;
    return pri;
}
// fun_4058
fun_4058() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_41F8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_4108
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_4108
    pri = 0;
    return pri;
}
// fun_4120
fun_4120() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1DA0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1A60(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1B58(var_72)
    var_88 = 0;
    pri = fun_1C18()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1D50(var_96)
    pri = 0;
    return pri;
}
// fun_41F8
fun_41F8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4240
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4500(var_8)
// lab_4240
    pri = arg_4;
    OP_JNZ lab_42A8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D50(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1DA0(var_40, var_32, var_24)
// lab_42A8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4348
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1DF0(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1A60(var_56, var_48, var_40)
    OP_JUMP lab_4438
// lab_4348
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4400
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_4400
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_4400
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1A60(var_24, var_16, var_8)
// lab_4438
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4478
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_4478
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B58(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4708(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_3D98(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4500
fun_4500() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_4560
    var_16 = 8704;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_4560
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_46A0
        case default:
        {
// switch_46A0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_4690
            var_16 = 9248;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_4690
            OP_JUMP lab_46D8
// lab_46D8
            var_8 = 9464;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_46A0_case_0x1
            var_8 = 8920;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_46D8
        }
        case 0x2:
        {
// switch_46A0_case_0x2
            var_8 = 9048;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_46D8
        }
    }
}
// fun_4708
fun_4708() {
    pri = arg_2;
    OP_JNZ lab_47F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D50(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1DA0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1E40(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_47F0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1A60(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1B58(var_40)
    var_56 = 0;
    pri = fun_1C18()
    pri = 0;
    return pri;
}
// fun_4868
fun_4868() {
    pri = 9648;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_48F0
// lab_48F0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4A70
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4A60
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_49B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_49B0
    pri = 0;
    OP_JUMP lab_49B8
// lab_4A70
    pri = 0;
    return pri;
// lab_4A60
    OP_JUMP lab_48E8
// lab_48E8
    OP_INC_P_S -936
// lab_49B0
    pri = 1;
// lab_49B8
    OP_JZER lab_4A30
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4A28
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4A30
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4A28
}
// fun_4A90
fun_4A90() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4B28
    var_8 = 1;
    var_16 = 0;
    var_24 = 10568;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1088()
// lab_4B28
    pri = arg_4;
    OP_JZER lab_4B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_10B0(var_8)
// lab_4B60
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_4BB8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_4BB8
    pri = 0;
    OP_JUMP lab_4BC0
// lab_4BB8
    pri = 1;
// lab_4BC0
    OP_JZER lab_4C88
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4C88
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_4C60
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0FC8(var_32, var_24)
    OP_JUMP lab_4C88
// lab_4C88
    pri = arg_2;
    OP_JZER lab_4D60
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_4D30
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DA0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0570(var_40)
    OP_JUMP lab_4D60
// lab_4D60
    pri = arg_3;
    OP_JZER lab_4D98
    var_8 = 1;
    var_16 = 8;
    pri = fun_1050(var_8)
// lab_4D98
    pri = 0;
    return pri;
// lab_4D30
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DA0(var_16, var_8)
// lab_4C60
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0FC8(var_16, var_8)
}
// fun_4DA8
fun_4DA8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4868(var_24)
    pri = 0;
    return pri;
}
// fun_4E10
fun_4E10() {
    pri = g_mode;
    switch (pri) {
// switch_4ED0
        case default:
        {
// switch_4ED0_case_default
            pri = CommandNOP()
            OP_JUMP lab_4F18
// lab_4F18
            pri = 0;
            return pri;
        }
        case 0xa654a7221070c575:
        {
// switch_4ED0_case_0xa654a7221070c575
            var_8 = 0;
            pri = fun_55F0()
            OP_JUMP lab_4F18
        }
        case 0x0:
        {
// switch_4ED0_case_0x0
            var_8 = 0;
            pri = fun_4F28()
            OP_JUMP lab_4F18
        }
        case 0x4416051e5f982651:
        {
// switch_4ED0_case_0x4416051e5f982651
            var_8 = 0;
            pri = fun_56F8()
            OP_JUMP lab_4F18
        }
    }
}
// fun_4F28
fun_4F28() {
    pri = 0;
    return pri;
}
// fun_4F40
fun_4F40() {
    pri = 0;
    return pri;
}
// fun_4F58
fun_4F58() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4A90(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4FB0
fun_4FB0() {
    pri = 0;
    return pri;
}
// fun_4FC8
fun_4FC8() {
    pri = 0;
    return pri;
}
// fun_4FE0
fun_4FE0() {
    var_8 = 10616;
    var_16 = 8;
    pri = fun_1E90(var_8)
    var_24 = 6;
    var_32 = 4;
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = 1;
    var_72 = 406;
    var_80 = -9092457264898983630;
    var_88 = 64;
    pri = fun_3CA8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_96 = -9092457264898983630;
    var_104 = 8;
    pri = fun_0848(var_96)
    var_112 = 8802641224559852288;
    var_120 = 8;
    pri = fun_0848(var_112)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C 96931928393727967, -9092457264898983630
    var_168 = 56;
    pri = fun_1960(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1B58(var_176)
    var_192 = 0;
    pri = fun_1C18()
    var_200 = -9092457264898983630;
    var_208 = 8;
    pri = fun_0670(var_200)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH4_C 4652596647073677312, 4652596647073677312, 4607182418800017408, -9092457264898983630
    var_256 = 72;
    pri = fun_05A8(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 15;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 8802641224559852288;
    var_288 = 8;
    pri = fun_0670(var_280)
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = -20;
    pri = float(var_320)
    var_328 = pri;
    var_336 = 8802641224559852288;
    var_344 = 40;
    pri = fun_0620(var_336, var_328, var_320, var_312, var_304)
    var_352 = -9092457264898983630;
    var_360 = 8;
    pri = fun_0670(var_352)
    var_368 = 1;
    var_376 = 0;
    var_384 = 10568;
    var_392 = 8;
    var_400 = 32;
    pri = fun_0308(var_392, var_384, var_376, var_368)
    var_408 = 0;
    pri = fun_0378()
    var_416 = 3;
    var_424 = 1;
    pri = EvCameraEnd(var_424, var_416)
    pri = 0;
    return pri;
}
// fun_5340
fun_5340() {
    pri = 0;
    return pri;
}
// fun_5358
fun_5358() {
    var_8 = -9092457264898983630;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 8939762938985858608;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 3755852098630684190;
    var_48 = 8;
    pri = fun_0540(var_40)
    var_56 = 700;
    var_64 = 8;
    pri = fun_4DA8(var_56)
    var_72 = -1823449519866571522;
    pri = VanishFlagReset(var_72)
    var_80 = 7633379448393287205;
    pri = VanishFlagSet(var_80)
    var_88 = -1690062793469606128;
    pri = VanishFlagSet(var_88)
    var_96 = 7633376149858402572;
    pri = VanishFlagSet(var_96)
    var_104 = 4090041247219487386;
    pri = VanishFlagSet(var_104)
    var_112 = -1900706673916255456;
    pri = VanishFlagReset(var_112)
    var_120 = -1437839325395537641;
    pri = VanishFlagReset(var_120)
    var_128 = 1;
    var_136 = 406;
    pri = ItemAdd(var_136, var_128)
    var_144 = 0;
    var_152 = 1;
    var_160 = 10776;
    pri = PokeMemoryCheckParty(var_160, var_152, var_144)
    pri = 0;
    return pri;
}
// fun_5578
fun_5578() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 10880;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_55F0
fun_55F0() {
    var_8 = 0;
    pri = fun_4F40()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_4F58()
    var_24 = 0;
    pri = fun_4FB0()
    var_32 = 0;
    pri = fun_4FC8()
    var_40 = 0;
    pri = fun_4FE0()
    var_48 = 0;
    pri = fun_5340()
    var_56 = 0;
    pri = fun_5358()
    var_64 = 0;
    pri = fun_5578()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_56F8
fun_56F8() {
    var_8 = 0;
    pri = fun_4FB0()
    var_16 = 0;
    pri = fun_5358()
    pri = 0;
    return pri;
}
