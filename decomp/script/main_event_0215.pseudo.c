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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0590
fun_0590() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0620
fun_0620() {
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
// fun_0698
fun_0698() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06E8
fun_06E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_0760
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E88(var_24)
    OP_JNZ lab_0760
    pri = 0;
    return pri;
// lab_0760
    OP_JUMP lab_0770
// lab_0770
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_07D0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_07D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0770
    pri = 0;
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0848
fun_0848() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0908
    pri = 0;
    return pri;
// lab_0908
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0948
// lab_0948
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JNZ lab_09D0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_09C0
    pri = 0;
    return pri;
// lab_09D0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A18
    pri = 0;
    return pri;
// lab_0A18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AC0(var_8)
    pri = 0;
    return pri;
// lab_0A78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0948
    pri = 0;
    return pri;
// lab_09C0
    OP_JUMP lab_0A18
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B48
    pri = 0;
    return pri;
// lab_0B48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_0C78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA0
    OP_ZERO_P_S 64
// lab_0C78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB0
    OP_CONST_S 64, 1
// lab_0CB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE8
    OP_CONST_S 72, 1
// lab_0CE8
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
// lab_0BA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC8
    OP_ZERO_P_S 72
// lab_0BC8
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
    OP_JUMP lab_0D88
// lab_0D88
    pri = 0;
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EB8
fun_0EB8() {
    OP_JUMP lab_0ED0
// lab_0ED0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F60
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    pri = 0;
    return pri;
// lab_0F60
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    pri = 0;
    return pri;
// lab_0FF0
    pri = 0;
    return pri;
// lab_0FE0
    OP_JUMP lab_1000
// lab_1000
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0ED0
    pri = 0;
    return pri;
// lab_0F50
    OP_JUMP lab_1000
}
// fun_1040
fun_1040() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EB8(var_40)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
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
// switch_1778
        case default:
        {
// switch_1778_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17C0
// lab_17C0
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
            OP_JNZ lab_1868
            var_88 = 0;
            pri = fun_1B38()
// lab_1868
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1778_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1360
                case default:
                {
// switch_1360_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13D8
// lab_13D8
                    OP_JUMP lab_17C0
                }
                case 0x0:
                {
// switch_1360_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13D8
                }
                case 0x1:
                {
// switch_1360_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13D8
                }
                case 0x2:
                {
// switch_1360_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13D8
                }
                case 0x3:
                {
// switch_1360_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13D8
                }
                case 0x4:
                {
// switch_1360_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13D8
                }
                case 0x5:
                {
// switch_1360_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13D8
                }
            }
        }
        case 0x65:
        {
// switch_1778_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1518
                case default:
                {
// switch_1518_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1590
// lab_1590
                    OP_JUMP lab_17C0
                }
                case 0x0:
                {
// switch_1518_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1590
                }
                case 0x1:
                {
// switch_1518_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1590
                }
                case 0x2:
                {
// switch_1518_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1590
                }
                case 0x3:
                {
// switch_1518_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1590
                }
                case 0x4:
                {
// switch_1518_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1590
                }
                case 0x5:
                {
// switch_1518_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1590
                }
            }
        }
        case 0x66:
        {
// switch_1778_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16D0
                case default:
                {
// switch_16D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1748
// lab_1748
                    OP_JUMP lab_17C0
                }
                case 0x0:
                {
// switch_16D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1748
                }
                case 0x1:
                {
// switch_16D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1748
                }
                case 0x2:
                {
// switch_16D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1748
                }
                case 0x3:
                {
// switch_16D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1748
                }
                case 0x4:
                {
// switch_16D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1748
                }
                case 0x5:
                {
// switch_16D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1748
                }
            }
        }
    }
}
// fun_1880
fun_1880() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1160(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18E8
fun_18E8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0888(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1990
    pri = 1;
    return pri;
// lab_1990
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19D8
fun_19D8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18E8(var_8)
    arg_2 = pri;
// lab_1A28
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1160(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A88
fun_1A88() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1880(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD8
fun_1AD8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1A88(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B38
fun_1B38() {
    OP_JUMP lab_1B50
// lab_1B50
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B90
    pri = 0;
    return pri;
// lab_1B90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B50
    pri = 0;
    return pri;
}
// fun_1BD0
fun_1BD0() {
    var_8 = 0;
    pri = fun_1B38()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C80
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C80
    pri = 0;
    return pri;
}
// fun_1C90
fun_1C90() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1CC0
fun_1CC0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1CF8
fun_1CF8() {
    OP_JUMP lab_1D10
// lab_1D10
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1D58
    OP_JUMP lab_1D88
    OP_JUMP lab_1D78
// lab_1D58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1D88
    pri = 0;
    return pri;
// lab_1D78
    OP_JUMP lab_1D10
}
// fun_1D98
fun_1D98() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E18
fun_1E18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E68
fun_1E68() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F08
fun_1F08() {
    pri = arg_6;
    OP_JNZ lab_1F40
    var_8 = 0;
    pri = fun_0D98()
// lab_1F40
    pri = arg_1;
    switch (pri) {
// switch_34A8
        case default:
        {
// switch_34A8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_37F8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_37F8
            pri = 1;
            OP_JUMP lab_3800
// lab_37F8
            pri = 0;
// lab_3800
            OP_JZER lab_3958
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0888(var_24, var_16)
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
            OP_JUMP lab_39B8
// lab_3958
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
// lab_39B8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3A18
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A78
// lab_3A18
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A78
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A78
            pri = arg_2;
            OP_JZER lab_3AB8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3AB8
            var_8 = 0;
            pri = fun_0DD8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_34A8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1:
        {
// switch_34A8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x2:
        {
// switch_34A8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x3:
        {
// switch_34A8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x4:
        {
// switch_34A8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x5:
        {
// switch_34A8_case_0x5
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0x6:
        {
// switch_34A8_case_0x6
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0x7:
        {
// switch_34A8_case_0x7
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0x8:
        {
// switch_34A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x9:
        {
// switch_34A8_case_0x9
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0xa:
        {
// switch_34A8_case_0xa
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0xb:
        {
// switch_34A8_case_0xb
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0xc:
        {
// switch_34A8_case_0xc
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0xd:
        {
// switch_34A8_case_0xd
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0xe:
        {
// switch_34A8_case_0xe
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0xf:
        {
// switch_34A8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x10:
        {
// switch_34A8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x11:
        {
// switch_34A8_case_0x11
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0x12:
        {
// switch_34A8_case_0x12
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0x13:
        {
// switch_34A8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x14:
        {
// switch_34A8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x15:
        {
// switch_34A8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x16:
        {
// switch_34A8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x17:
        {
// switch_34A8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x18:
        {
// switch_34A8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x19:
        {
// switch_34A8_case_0x19
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1a:
        {
// switch_34A8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0848(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0810(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1b:
        {
// switch_34A8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0848(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0810(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1c:
        {
// switch_34A8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0848(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0810(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1d:
        {
// switch_34A8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1e:
        {
// switch_34A8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x1f:
        {
// switch_34A8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x20:
        {
// switch_34A8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x21:
        {
// switch_34A8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x22:
        {
// switch_34A8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x23:
        {
// switch_34A8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x24:
        {
// switch_34A8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x25:
        {
// switch_34A8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x26:
        {
// switch_34A8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x27:
        {
// switch_34A8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x28:
        {
// switch_34A8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
        case 0x29:
        {
// switch_34A8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_34A8_case_default
        }
    }
}
// fun_3AE8
fun_3AE8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_3B80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08C0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1F08(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_3B80
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_3CD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_3C40
    var_24 = 8440;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_3C40
    pri = 1;
    OP_JUMP lab_3C48
// lab_3CD8
    pri = 0;
    return pri;
// lab_3C40
    pri = 0;
// lab_3C48
    OP_JZER lab_3CD8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1F08(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_3CE8
fun_3CE8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3AE8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_3D70(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_3D70
fun_3D70() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_3F08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3DD8
fun_3DD8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_3E48
    OP_CONST_S -8, 1
// lab_3E48
    pri = arg_0;
    OP_JNZ lab_3E68
    OP_ZERO_P_S -8
// lab_3E68
    pri = var_8;
    OP_JZER lab_3EF0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_3EF0
    pri = 0;
    return pri;
}
// fun_3F08
fun_3F08() {
    var_8 = 8544;
    var_16 = 8;
    pri = fun_1CC0(var_8)
    var_24 = 0;
    pri = fun_1CF8()
    pri = arg_3;
    OP_JNZ lab_4028
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_3FF0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4098(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_4018
// lab_4028
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4238(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_3FF0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4160(var_16, var_8)
// lab_4018
    OP_JUMP lab_4070
// lab_4070
    var_8 = 0;
    pri = fun_1D98()
    pri = 0;
    return pri;
}
// fun_4098
fun_4098() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4238(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_4148
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_4148
    pri = 0;
    return pri;
}
// fun_4160
fun_4160() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1E18(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1AD8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1BD0(var_72)
    var_88 = 0;
    pri = fun_1C90()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1DC8(var_96)
    pri = 0;
    return pri;
}
// fun_4238
fun_4238() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4280
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4540(var_8)
// lab_4280
    pri = arg_4;
    OP_JNZ lab_42E8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1DC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1E18(var_40, var_32, var_24)
// lab_42E8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4388
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1E68(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1AD8(var_56, var_48, var_40)
    OP_JUMP lab_4478
// lab_4388
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4440
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_4440
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_4440
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1AD8(var_24, var_16, var_8)
// lab_4478
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_44B8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_44B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BD0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4748(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_3DD8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4540
fun_4540() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_45A0
    var_16 = 8704;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_45A0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_46E0
        case default:
        {
// switch_46E0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_46D0
            var_16 = 9248;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_46D0
            OP_JUMP lab_4718
// lab_4718
            var_8 = 9464;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_46E0_case_0x1
            var_8 = 8920;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4718
        }
        case 0x2:
        {
// switch_46E0_case_0x2
            var_8 = 9048;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4718
        }
    }
}
// fun_4748
fun_4748() {
    pri = arg_2;
    OP_JNZ lab_4830
    var_8 = 0;
    var_16 = 8;
    pri = fun_1DC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1E18(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1EB8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_4830
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1AD8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1BD0(var_40)
    var_56 = 0;
    pri = fun_1C90()
    pri = 0;
    return pri;
}
// fun_48A8
fun_48A8() {
    pri = 9648;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4930
// lab_4930
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4AB0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4AA0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_49F0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_49F0
    pri = 0;
    OP_JUMP lab_49F8
// lab_4AB0
    pri = 0;
    return pri;
// lab_4AA0
    OP_JUMP lab_4928
// lab_4928
    OP_INC_P_S -936
// lab_49F0
    pri = 1;
// lab_49F8
    OP_JZER lab_4A70
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4A68
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4A70
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4A68
}
// fun_4AD0
fun_4AD0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4B68
    var_8 = 1;
    var_16 = 0;
    var_24 = 10568;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1100()
// lab_4B68
    pri = arg_4;
    OP_JZER lab_4BA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1128(var_8)
// lab_4BA0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_4BF8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_4BF8
    pri = 0;
    OP_JUMP lab_4C00
// lab_4BF8
    pri = 1;
// lab_4C00
    OP_JZER lab_4CC8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4CC8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_4CA0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1040(var_32, var_24)
    OP_JUMP lab_4CC8
// lab_4CC8
    pri = arg_2;
    OP_JZER lab_4DA0
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_4D70
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E18(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05E8(var_40)
    OP_JUMP lab_4DA0
// lab_4DA0
    pri = arg_3;
    OP_JZER lab_4DD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_10C8(var_8)
// lab_4DD8
    pri = 0;
    return pri;
// lab_4D70
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E18(var_16, var_8)
// lab_4CA0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
}
// fun_4DE8
fun_4DE8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_48A8(var_24)
    pri = 0;
    return pri;
}
// fun_4E50
fun_4E50() {
    pri = g_mode;
    switch (pri) {
// switch_4F10
        case default:
        {
// switch_4F10_case_default
            pri = CommandNOP()
            OP_JUMP lab_4F58
// lab_4F58
            pri = 0;
            return pri;
        }
        case 0x84000e21fd15aefa:
        {
// switch_4F10_case_0x84000e21fd15aefa
            var_8 = 0;
            pri = fun_5848()
            OP_JUMP lab_4F58
        }
        case 0x0:
        {
// switch_4F10_case_0x0
            var_8 = 0;
            pri = fun_4F68()
            OP_JUMP lab_4F58
        }
        case 0x66a09c1e7320c8d6:
        {
// switch_4F10_case_0x66a09c1e7320c8d6
            var_8 = 0;
            pri = fun_5938()
            OP_JUMP lab_4F58
        }
    }
}
// fun_4F68
fun_4F68() {
    pri = 0;
    return pri;
}
// fun_4F80
fun_4F80() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4AD0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4FD8
fun_4FD8() {
    pri = 0;
    return pri;
}
// fun_4FF0
fun_4FF0() {
    pri = 0;
    return pri;
}
// fun_5008
fun_5008() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH3_C 4676006624018563072, 4672786429338714112, -484552086778445211
    var_24 = 40;
    pri = fun_0540(var_16, var_8, var_0, var_-8, var_-16)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 1;
    var_56 = 0;
    var_64 = 4641240890982006784;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH4_C 4676006624018563072, 4672896380501491712, 4607182418800017408, -484552086778445211
    var_88 = 72;
    pri = fun_0620(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 15;
    var_104 = 8;
    pri = fun_0060(var_96)
    var_112 = 1;
    var_120 = 0;
    var_128 = 4641240890982006784;
    var_136 = 0;
    var_144 = 0;
    OP_PUSH4_C 4676006624018563072, 4672937612187533312, 4607182418800017408, 8802641224559852288
    var_152 = 72;
    pri = fun_0620(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 10616;
    var_168 = 8;
    var_176 = 16;
    pri = fun_02A8(var_168, var_160)
    var_184 = 0;
    pri = fun_0378()
    var_192 = 0;
    var_200 = 3;
    var_208 = 2;
    var_216 = 100;
    var_224 = -1;
    OP_PUSH2_C 142880588260806463, -484552086778445211
    var_232 = 56;
    pri = fun_19D8(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_06E8(var_240)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = -90;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 8802641224559852288;
    var_304 = 40;
    pri = fun_0698(var_296, var_288, var_280, var_272, var_264)
    var_312 = 0;
    pri = fun_1B38()
    var_320 = 1;
    var_328 = 8;
    pri = fun_1BD0(var_320)
    var_336 = 0;
    pri = fun_1C90()
    var_344 = -484552086778445211;
    var_352 = 8;
    pri = fun_06E8(var_344)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 142881687772434674, -484552086778445211
    var_400 = 56;
    pri = fun_19D8(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1BD0(var_408)
    var_424 = 0;
    pri = fun_1C90()
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_06E8(var_432)
    var_448 = 6;
    var_456 = 4;
    var_464 = 2;
    var_472 = 1;
    var_480 = 9;
    var_488 = 1;
    var_496 = 17;
    var_504 = -484552086778445211;
    var_512 = 64;
    pri = fun_3CE8(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_520 = 0;
    var_528 = 3;
    var_536 = 0;
    var_544 = 100;
    var_552 = -1;
    OP_PUSH2_C 142882787284062885, -484552086778445211
    var_560 = 56;
    pri = fun_19D8(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 8;
    pri = fun_1BD0(var_568)
    var_584 = 0;
    pri = fun_1C90()
    var_592 = 10;
    var_600 = 8;
    pri = fun_0060(var_592)
    var_608 = 1;
    var_616 = -1;
    var_624 = -1;
    var_632 = 3;
    var_640 = 0;
    var_648 = 0;
    var_656 = -484552086778445211;
    var_664 = 56;
    pri = fun_1F08(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 0;
    var_680 = 3;
    var_688 = 0;
    var_696 = 100;
    var_704 = -1;
    OP_PUSH2_C 142875090702665408, -484552086778445211
    var_712 = 56;
    pri = fun_19D8(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 1;
    var_728 = 8;
    pri = fun_1BD0(var_720)
    var_736 = 0;
    pri = fun_1C90()
    var_744 = -484552086778445211;
    var_752 = 8;
    pri = fun_08C0(var_744)
    var_760 = 1;
    var_768 = 0;
    var_776 = 4641240890982006784;
    var_784 = 0;
    var_792 = 0;
    OP_PUSH4_C 4676006624018563072, 4672841404920102912, 4607182418800017408, -484552086778445211
    var_800 = 72;
    pri = fun_0620(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 30;
    var_816 = 8;
    pri = fun_0060(var_808)
    var_824 = 1;
    var_832 = 0;
    var_840 = 10568;
    var_848 = 8;
    var_856 = 32;
    pri = fun_0308(var_848, var_840, var_832, var_824)
    var_864 = 0;
    pri = fun_0378()
    var_872 = -484552086778445211;
    var_880 = 8;
    pri = fun_06E8(var_872)
    pri = 0;
    return pri;
}
// fun_5708
fun_5708() {
    pri = 0;
    return pri;
}
// fun_5720
fun_5720() {
    var_8 = 220;
    var_16 = 8;
    pri = fun_4DE8(var_8)
    var_24 = 1;
    var_32 = 17;
    pri = ItemAdd(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_5780
fun_5780() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4676006145731004989, 4672650312547974513, -484552086778445211
    var_40 = 48;
    pri = fun_0590(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 10616;
    var_56 = 8;
    var_64 = 16;
    pri = fun_02A8(var_56, var_48)
    var_72 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_5848
fun_5848() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4F80()
    var_16 = 0;
    pri = fun_4FD8()
    var_24 = 0;
    pri = fun_4FF0()
    var_32 = 0;
    pri = fun_5008()
    var_40 = 0;
    pri = fun_5708()
    var_48 = 0;
    pri = fun_5720()
    var_56 = 0;
    pri = fun_5780()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5938
fun_5938() {
    var_8 = 0;
    pri = fun_4FD8()
    var_16 = 0;
    pri = fun_5720()
    pri = 0;
    return pri;
}
