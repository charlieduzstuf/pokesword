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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_05E0
    OP_JUMP lab_0610
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0640
// lab_0640
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0680
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0750
fun_0750() {
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
// fun_07C8
fun_07C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F90(var_8)
    OP_JZER lab_0898
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0FC0(var_24)
    OP_JNZ lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_JUMP lab_08A8
// lab_08A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0908
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0908
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08A8
    pri = 0;
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A40
    pri = 0;
    return pri;
// lab_0A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A80
// lab_0A80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F90(var_8)
    OP_JNZ lab_0B08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AF8
    pri = 0;
    return pri;
// lab_0B08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B50
    pri = 0;
    return pri;
// lab_0B50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    pri = 0;
    return pri;
// lab_0BB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
// lab_0AF8
    OP_JUMP lab_0B50
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C80
    pri = 0;
    return pri;
// lab_0C80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F90(var_8)
    OP_JZER lab_0DB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD8
    OP_ZERO_P_S 64
// lab_0DB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE8
    OP_CONST_S 64, 1
// lab_0DE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E20
    OP_CONST_S 72, 1
// lab_0E20
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
// lab_0CD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D00
    OP_ZERO_P_S 72
// lab_0D00
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
    OP_JUMP lab_0EC0
// lab_0EC0
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F10
fun_0F10() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0FC0
fun_0FC0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0FF0
fun_0FF0() {
    OP_JUMP lab_1008
// lab_1008
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1098
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1088
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_1098
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1128
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1118
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_1128
    pri = 0;
    return pri;
// lab_1118
    OP_JUMP lab_1138
// lab_1138
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1008
    pri = 0;
    return pri;
// lab_1088
    OP_JUMP lab_1138
}
// fun_1178
fun_1178() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0FF0(var_40)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1298
fun_1298() {
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
// switch_18B0
        case default:
        {
// switch_18B0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_18F8
// lab_18F8
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
            OP_JNZ lab_19A0
            var_88 = 0;
            pri = fun_1C70()
// lab_19A0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_18B0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1498
                case default:
                {
// switch_1498_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1510
// lab_1510
                    OP_JUMP lab_18F8
                }
                case 0x0:
                {
// switch_1498_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1510
                }
                case 0x1:
                {
// switch_1498_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1510
                }
                case 0x2:
                {
// switch_1498_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1510
                }
                case 0x3:
                {
// switch_1498_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1510
                }
                case 0x4:
                {
// switch_1498_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1510
                }
                case 0x5:
                {
// switch_1498_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1510
                }
            }
        }
        case 0x65:
        {
// switch_18B0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1650
                case default:
                {
// switch_1650_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_16C8
// lab_16C8
                    OP_JUMP lab_18F8
                }
                case 0x0:
                {
// switch_1650_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_16C8
                }
                case 0x1:
                {
// switch_1650_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_16C8
                }
                case 0x2:
                {
// switch_1650_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_16C8
                }
                case 0x3:
                {
// switch_1650_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_16C8
                }
                case 0x4:
                {
// switch_1650_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_16C8
                }
                case 0x5:
                {
// switch_1650_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_16C8
                }
            }
        }
        case 0x66:
        {
// switch_18B0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1808
                case default:
                {
// switch_1808_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1880
// lab_1880
                    OP_JUMP lab_18F8
                }
                case 0x0:
                {
// switch_1808_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1880
                }
                case 0x1:
                {
// switch_1808_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1880
                }
                case 0x2:
                {
// switch_1808_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1880
                }
                case 0x3:
                {
// switch_1808_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1880
                }
                case 0x4:
                {
// switch_1808_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1880
                }
                case 0x5:
                {
// switch_1808_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1880
                }
            }
        }
    }
}
// fun_19B8
fun_19B8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1298(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A20
fun_1A20() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09C0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1AC8
    pri = 1;
    return pri;
// lab_1AC8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1B10
fun_1B10() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A20(var_8)
    arg_2 = pri;
// lab_1B60
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1298(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_19B8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C10
fun_1C10() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1BC0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C70
fun_1C70() {
    OP_JUMP lab_1C88
// lab_1C88
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CC8
    pri = 0;
    return pri;
// lab_1CC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C88
    pri = 0;
    return pri;
}
// fun_1D08
fun_1D08() {
    var_8 = 0;
    pri = fun_1C70()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1DB8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1DB8
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1E28
// lab_1E28
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E68
    OP_JUMP lab_1E98
// lab_1E68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E28
// lab_1E98
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EE0
fun_1EE0() {
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
// fun_1F50
fun_1F50() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    OP_JUMP lab_1FA0
// lab_1FA0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1FE8
    OP_JUMP lab_2018
    OP_JUMP lab_2008
// lab_1FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2018
    pri = 0;
    return pri;
// lab_2008
    OP_JUMP lab_1FA0
}
// fun_2028
fun_2028() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2058
fun_2058() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A8
fun_20A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20F8
fun_20F8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2148
fun_2148() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    pri = arg_1;
    OP_JNZ lab_21E0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_21E0
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
// fun_2238
fun_2238() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_22B0
fun_22B0() {
    var_8 = 0;
    pri = fun_2238()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2330
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2330
    pri = 1;
    return pri;
// lab_2330
    var_8 = 0;
    pri = fun_2238()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2370
    pri = 1;
    return pri;
// lab_2370
    var_8 = 0;
    pri = fun_2238()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_23A0
fun_23A0() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    OP_JUMP lab_2408
// lab_2408
    pri = EvCameraMoveWait_()
    OP_JZER lab_2440
    pri = 0;
    return pri;
// lab_2440
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2408
    pri = 0;
    return pri;
}
// fun_2480
fun_2480() {
    pri = arg_6;
    OP_JNZ lab_24B8
    var_8 = 0;
    pri = fun_0ED0()
// lab_24B8
    pri = arg_1;
    switch (pri) {
// switch_3A20
        case default:
        {
// switch_3A20_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D70
            pri = 1;
            OP_JUMP lab_3D78
// lab_3D70
            pri = 0;
// lab_3D78
            OP_JZER lab_3ED0
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
            OP_JUMP lab_3F30
// lab_3ED0
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
// lab_3F30
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3F90
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3FF0
// lab_3F90
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3FF0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3FF0
            pri = arg_2;
            OP_JZER lab_4030
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4030
            var_8 = 0;
            pri = fun_0F10()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A20_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1:
        {
// switch_3A20_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x2:
        {
// switch_3A20_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x3:
        {
// switch_3A20_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x4:
        {
// switch_3A20_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x5:
        {
// switch_3A20_case_0x5
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x6:
        {
// switch_3A20_case_0x6
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x7:
        {
// switch_3A20_case_0x7
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x8:
        {
// switch_3A20_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x9:
        {
// switch_3A20_case_0x9
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xa:
        {
// switch_3A20_case_0xa
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xb:
        {
// switch_3A20_case_0xb
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xc:
        {
// switch_3A20_case_0xc
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xd:
        {
// switch_3A20_case_0xd
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xe:
        {
// switch_3A20_case_0xe
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0xf:
        {
// switch_3A20_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x10:
        {
// switch_3A20_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x11:
        {
// switch_3A20_case_0x11
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x12:
        {
// switch_3A20_case_0x12
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x13:
        {
// switch_3A20_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x14:
        {
// switch_3A20_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x15:
        {
// switch_3A20_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x16:
        {
// switch_3A20_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x17:
        {
// switch_3A20_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x18:
        {
// switch_3A20_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x19:
        {
// switch_3A20_case_0x19
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1a:
        {
// switch_3A20_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0948(var_48, var_40)
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
            pri = fun_0C30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1b:
        {
// switch_3A20_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0948(var_48, var_40)
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
            pri = fun_0C30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1c:
        {
// switch_3A20_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0948(var_48, var_40)
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
            pri = fun_0C30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1d:
        {
// switch_3A20_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1e:
        {
// switch_3A20_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x1f:
        {
// switch_3A20_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x20:
        {
// switch_3A20_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x21:
        {
// switch_3A20_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x22:
        {
// switch_3A20_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x23:
        {
// switch_3A20_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x24:
        {
// switch_3A20_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x25:
        {
// switch_3A20_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x26:
        {
// switch_3A20_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x27:
        {
// switch_3A20_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x28:
        {
// switch_3A20_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
        case 0x29:
        {
// switch_3A20_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A20_case_default
        }
    }
}
// fun_4060
fun_4060() {
    pri = arg_5;
    OP_JNZ lab_4098
    var_8 = 0;
    pri = fun_0ED0()
// lab_4098
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_40E8
    OP_CONST_S -8, -1
// lab_40E8
    pri = arg_1;
    switch (pri) {
// switch_5BA0
        case default:
        {
// switch_5BA0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6048
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09C0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6048
            pri = 1;
            OP_JUMP lab_6050
// lab_6048
            pri = 0;
// lab_6050
            OP_JZER lab_60A0
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_62F8
// lab_60A0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6108
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6108
            pri = 1;
            OP_JUMP lab_6110
// lab_6108
            pri = 0;
// lab_6110
            OP_JZER lab_6298
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
            OP_JUMP lab_62F8
// lab_6298
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
// lab_62F8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6368
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6368
            var_8 = 0;
            pri = fun_0F10()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5BA0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1:
        {
// switch_5BA0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2:
        {
// switch_5BA0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3:
        {
// switch_5BA0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x4:
        {
// switch_5BA0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x5:
        {
// switch_5BA0_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BF8(var_40)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x6:
        {
// switch_5BA0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x7:
        {
// switch_5BA0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x8:
        {
// switch_5BA0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x9:
        {
// switch_5BA0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xa:
        {
// switch_5BA0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xb:
        {
// switch_5BA0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xc:
        {
// switch_5BA0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xd:
        {
// switch_5BA0_case_0xd
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xe:
        {
// switch_5BA0_case_0xe
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0xf:
        {
// switch_5BA0_case_0xf
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x10:
        {
// switch_5BA0_case_0x10
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x11:
        {
// switch_5BA0_case_0x11
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x12:
        {
// switch_5BA0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x13:
        {
// switch_5BA0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x14:
        {
// switch_5BA0_case_0x14
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x15:
        {
// switch_5BA0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x16:
        {
// switch_5BA0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x17:
        {
// switch_5BA0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x18:
        {
// switch_5BA0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x19:
        {
// switch_5BA0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1a:
        {
// switch_5BA0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1b:
        {
// switch_5BA0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1c:
        {
// switch_5BA0_case_0x1c
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1d:
        {
// switch_5BA0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1e:
        {
// switch_5BA0_case_0x1e
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1f:
        {
// switch_5BA0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x20:
        {
// switch_5BA0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x21:
        {
// switch_5BA0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x22:
        {
// switch_5BA0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x23:
        {
// switch_5BA0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x24:
        {
// switch_5BA0_case_0x24
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x25:
        {
// switch_5BA0_case_0x25
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x26:
        {
// switch_5BA0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x27:
        {
// switch_5BA0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x28:
        {
// switch_5BA0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x29:
        {
// switch_5BA0_case_0x29
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2a:
        {
// switch_5BA0_case_0x2a
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2b:
        {
// switch_5BA0_case_0x2b
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2c:
        {
// switch_5BA0_case_0x2c
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2d:
        {
// switch_5BA0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2e:
        {
// switch_5BA0_case_0x2e
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2f:
        {
// switch_5BA0_case_0x2f
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x30:
        {
// switch_5BA0_case_0x30
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x31:
        {
// switch_5BA0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x32:
        {
// switch_5BA0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x33:
        {
// switch_5BA0_case_0x33
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x34:
        {
// switch_5BA0_case_0x34
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x35:
        {
// switch_5BA0_case_0x35
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x36:
        {
// switch_5BA0_case_0x36
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x37:
        {
// switch_5BA0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x38:
        {
// switch_5BA0_case_0x38
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x39:
        {
// switch_5BA0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3a:
        {
// switch_5BA0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3b:
        {
// switch_5BA0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3c:
        {
// switch_5BA0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3d:
        {
// switch_5BA0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3e:
        {
// switch_5BA0_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            OP_JUMP switch_5BA0_case_default
        }
    }
}
// fun_6398
fun_6398() {
    pri = arg_4;
    OP_JNZ lab_63D0
    var_8 = 0;
    pri = fun_0ED0()
// lab_63D0
    pri = arg_1;
    switch (pri) {
// switch_77A8
        case default:
        {
// switch_77A8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0F90(var_264)
            OP_JZER lab_7D70
            pri = arg_3;
            switch (pri) {
// switch_7D18
                case default:
                {
// switch_7D18_case_default
                    OP_JUMP lab_8028
// lab_8028
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8098
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8098
                    var_8 = 0;
                    pri = fun_0F10()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7D18_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D18_case_default
                }
                case 0x2:
                {
// switch_7D18_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D18_case_default
                }
                case 0x3:
                {
// switch_7D18_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D18_case_default
                }
            }
// lab_7D70
            pri = arg_1;
            OP_JZER lab_7DC0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7DC0
            pri = 0;
            OP_JUMP lab_7DC8
// lab_7DC0
            pri = 1;
// lab_7DC8
            OP_JZER lab_7E30
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09C0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7E30
            pri = 1;
            OP_JUMP lab_7E38
// lab_7E30
            pri = 0;
// lab_7E38
            OP_JZER lab_7E88
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8028
// lab_7E88
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7EF0
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8028
// lab_7EF0
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
// switch_77A8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1:
        {
// switch_77A8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2:
        {
// switch_77A8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3:
        {
// switch_77A8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x4:
        {
// switch_77A8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x5:
        {
// switch_77A8_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BF8(var_40)
            OP_JUMP switch_77A8_case_default
        }
        case 0x6:
        {
// switch_77A8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x7:
        {
// switch_77A8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x8:
        {
// switch_77A8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x9:
        {
// switch_77A8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xa:
        {
// switch_77A8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xb:
        {
// switch_77A8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xc:
        {
// switch_77A8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xd:
        {
// switch_77A8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xe:
        {
// switch_77A8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0xf:
        {
// switch_77A8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x10:
        {
// switch_77A8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x11:
        {
// switch_77A8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x12:
        {
// switch_77A8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x13:
        {
// switch_77A8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x14:
        {
// switch_77A8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x15:
        {
// switch_77A8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x16:
        {
// switch_77A8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x17:
        {
// switch_77A8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x18:
        {
// switch_77A8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x19:
        {
// switch_77A8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1a:
        {
// switch_77A8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1b:
        {
// switch_77A8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1c:
        {
// switch_77A8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1d:
        {
// switch_77A8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1e:
        {
// switch_77A8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x1f:
        {
// switch_77A8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x20:
        {
// switch_77A8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x21:
        {
// switch_77A8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x22:
        {
// switch_77A8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x23:
        {
// switch_77A8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x24:
        {
// switch_77A8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x25:
        {
// switch_77A8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x26:
        {
// switch_77A8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x27:
        {
// switch_77A8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x28:
        {
// switch_77A8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x29:
        {
// switch_77A8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2a:
        {
// switch_77A8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2b:
        {
// switch_77A8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2c:
        {
// switch_77A8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2d:
        {
// switch_77A8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2e:
        {
// switch_77A8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x2f:
        {
// switch_77A8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x30:
        {
// switch_77A8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x31:
        {
// switch_77A8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x32:
        {
// switch_77A8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x33:
        {
// switch_77A8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x34:
        {
// switch_77A8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x35:
        {
// switch_77A8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x36:
        {
// switch_77A8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x37:
        {
// switch_77A8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x38:
        {
// switch_77A8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x39:
        {
// switch_77A8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3a:
        {
// switch_77A8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3b:
        {
// switch_77A8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3c:
        {
// switch_77A8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3d:
        {
// switch_77A8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
        case 0x3e:
        {
// switch_77A8_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            OP_JUMP switch_77A8_case_default
        }
    }
}
// fun_80C8
fun_80C8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8160
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09F8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2480(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8160
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_82B8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8220
    var_24 = 30056;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8220
    pri = 1;
    OP_JUMP lab_8228
// lab_82B8
    pri = 0;
    return pri;
// lab_8220
    pri = 0;
// lab_8228
    OP_JZER lab_82B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2480(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_82C8
fun_82C8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_80C8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8350(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8350
fun_8350() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_84E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_83B8
fun_83B8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8428
    OP_CONST_S -8, 1
// lab_8428
    pri = arg_0;
    OP_JNZ lab_8448
    OP_ZERO_P_S -8
// lab_8448
    pri = var_8;
    OP_JZER lab_84D0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_84D0
    pri = 0;
    return pri;
}
// fun_84E8
fun_84E8() {
    var_8 = 30160;
    var_16 = 8;
    pri = fun_1F50(var_8)
    var_24 = 0;
    pri = fun_1F88()
    pri = arg_3;
    OP_JNZ lab_8608
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_85D0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8678(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_85F8
// lab_8608
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8818(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_85D0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8740(var_16, var_8)
// lab_85F8
    OP_JUMP lab_8650
// lab_8650
    var_8 = 0;
    pri = fun_2028()
    pri = 0;
    return pri;
}
// fun_8678
fun_8678() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8818(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8728
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8728
    pri = 0;
    return pri;
}
// fun_8740
fun_8740() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_20A8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1C10(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1D08(var_72)
    var_88 = 0;
    pri = fun_1DC8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2058(var_96)
    pri = 0;
    return pri;
}
// fun_8818
fun_8818() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8860
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8B20(var_8)
// lab_8860
    pri = arg_4;
    OP_JNZ lab_88C8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2058(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_20A8(var_40, var_32, var_24)
// lab_88C8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8968
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_20F8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1C10(var_56, var_48, var_40)
    OP_JUMP lab_8A58
// lab_8968
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8A20
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8A20
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8A20
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1C10(var_24, var_16, var_8)
// lab_8A58
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8A98
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8A98
    var_8 = 1;
    var_16 = 8;
    pri = fun_1D08(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8D28(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_83B8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8B20
fun_8B20() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8B80
    var_16 = 30320;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8B80
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8CC0
        case default:
        {
// switch_8CC0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8CB0
            var_16 = 30864;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8CB0
            OP_JUMP lab_8CF8
// lab_8CF8
            var_8 = 31080;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8CC0_case_0x1
            var_8 = 30536;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8CF8
        }
        case 0x2:
        {
// switch_8CC0_case_0x2
            var_8 = 30664;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8CF8
        }
    }
}
// fun_8D28
fun_8D28() {
    pri = arg_2;
    OP_JNZ lab_8E10
    var_8 = 0;
    var_16 = 8;
    pri = fun_2058(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_20A8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2148(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8E10
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1C10(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1D08(var_40)
    var_56 = 0;
    pri = fun_1DC8()
    pri = 0;
    return pri;
}
// fun_8E88
fun_8E88() {
    pri = 31264;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8F10
// lab_8F10
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9090
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9080
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8FD0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8FD0
    pri = 0;
    OP_JUMP lab_8FD8
// lab_9090
    pri = 0;
    return pri;
// lab_9080
    OP_JUMP lab_8F08
// lab_8F08
    OP_INC_P_S -936
// lab_8FD0
    pri = 1;
// lab_8FD8
    OP_JZER lab_9050
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9048
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9050
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9048
}
// fun_90B0
fun_90B0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9148
    var_8 = 1;
    var_16 = 0;
    var_24 = 32184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1238()
// lab_9148
    pri = arg_4;
    OP_JZER lab_9180
    var_8 = 1;
    var_16 = 8;
    pri = fun_1260(var_8)
// lab_9180
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_91D8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_91D8
    pri = 0;
    OP_JUMP lab_91E0
// lab_91D8
    pri = 1;
// lab_91E0
    OP_JZER lab_92A8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_92A8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9280
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1178(var_32, var_24)
    OP_JUMP lab_92A8
// lab_92A8
    pri = arg_2;
    OP_JZER lab_9380
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9350
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F50(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0718(var_40)
    OP_JUMP lab_9380
// lab_9380
    pri = arg_3;
    OP_JZER lab_93B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1200(var_8)
// lab_93B8
    pri = 0;
    return pri;
// lab_9350
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F50(var_16, var_8)
// lab_9280
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1178(var_16, var_8)
}
// fun_93C8
fun_93C8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8E88(var_24)
    pri = 0;
    return pri;
}
// fun_9430
fun_9430() {
    pri = g_mode;
    switch (pri) {
// switch_94F0
        case default:
        {
// switch_94F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9538
// lab_9538
            pri = 0;
            return pri;
        }
        case 0xa63c9d22105c2296:
        {
// switch_94F0_case_0xa63c9d22105c2296
            var_8 = 0;
            pri = fun_B120()
            OP_JUMP lab_9538
        }
        case 0x0:
        {
// switch_94F0_case_0x0
            var_8 = 0;
            pri = fun_9548()
            OP_JUMP lab_9538
        }
        case 0x43fdfb1e5f838372:
        {
// switch_94F0_case_0x43fdfb1e5f838372
            var_8 = 0;
            pri = fun_B210()
            OP_JUMP lab_9538
        }
    }
}
// fun_9548
fun_9548() {
    pri = 0;
    return pri;
}
// fun_9560
fun_9560() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_90B0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_95B8
fun_95B8() {
    pri = 0;
    return pri;
}
// fun_95D0
fun_95D0() {
    pri = 0;
    return pri;
}
// fun_95E8
fun_95E8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C 6824651908674154928, 8802641224559852288
    var_56 = 48;
    pri = fun_07C8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 32232;
    pri = SoundPostEvent(var_64)
    var_72 = 120;
    var_80 = 3;
    OP_PUSH2_C 4605380978949069210, 6824651908674154928
    var_88 = 15;
    pri = EvCameraMoveOffsetChr(var_88, var_80, var_72, var_64, var_56)
    var_96 = 0;
    pri = fun_23F0()
    var_104 = 8802641224559852288;
    var_112 = 8;
    pri = fun_0820(var_104)
    var_120 = 1;
    var_128 = 1;
    var_136 = -1;
    var_144 = -1;
    var_152 = 0;
    var_160 = 11;
    var_168 = 5858126159611641479;
    var_176 = 56;
    pri = fun_4060(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    OP_PUSH2_C -4101403016028261179, 5858126159611641479
    var_224 = 56;
    pri = fun_1B10(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1D08(var_232)
    var_248 = 0;
    pri = fun_1DC8()
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 0;
    var_296 = 7;
    var_304 = 5858127259123269690;
    var_312 = 56;
    pri = fun_4060(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C 1841729891884003634, 5858127259123269690
    var_360 = 56;
    pri = fun_1B10(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1D08(var_368)
    var_384 = 0;
    pri = fun_1DC8()
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 1;
    var_440 = 6824651908674154928;
    var_448 = 56;
    pri = fun_2480(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 0;
    var_464 = 3;
    var_472 = 0;
    var_480 = 100;
    var_488 = -1;
    OP_PUSH2_C -8040385664000103400, 6824651908674154928
    var_496 = 56;
    pri = fun_1B10(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_504 = 1;
    var_512 = 8;
    pri = fun_1D08(var_504)
    var_520 = 0;
    pri = fun_1DC8()
    var_528 = 6824651908674154928;
    var_536 = 8;
    pri = fun_09F8(var_528)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH2_C 6824651908674154928, 8802641224559852288
    var_576 = 48;
    pri = fun_07C8(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH2_C 8802641224559852288, 6824651908674154928
    var_616 = 48;
    pri = fun_07C8(var_608, var_600, var_592, var_584, var_576, var_568)
    var_624 = 8802641224559852288;
    var_632 = 8;
    pri = fun_0820(var_624)
    var_640 = 6824651908674154928;
    var_648 = 8;
    pri = fun_0820(var_640)
    var_656 = 0;
    var_664 = 3;
    var_672 = 0;
    var_680 = 100;
    var_688 = -1;
    OP_PUSH2_C -8040382365465218767, 6824651908674154928
    var_696 = 56;
    pri = fun_1B10(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 1;
    var_712 = 8;
    pri = fun_1D08(var_704)
    var_720 = 0;
    pri = fun_1DC8()
    var_728 = 1;
    var_736 = 0;
    var_744 = 30;
    pri = float(var_744)
    var_752 = pri;
    var_760 = 0;
    pri = float(var_760)
    var_768 = pri;
    var_776 = 1;
    OP_PUSH4_C 4664164608909508608, 4672303468856213504, 4607182418800017408, 6824651908674154928
    var_784 = 72;
    pri = fun_0750(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_792 = 15;
    var_800 = 8;
    pri = fun_0060(var_792)
    var_808 = 1;
    var_816 = 0;
    var_824 = 30;
    pri = float(var_824)
    var_832 = pri;
    var_840 = 90;
    pri = float(var_840)
    var_848 = pri;
    var_856 = 1;
    OP_PUSH4_C 4664446963495521485, 4672288762888192000, 4607182418800017408, 8802641224559852288
    var_864 = 72;
    pri = fun_0750(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = 60;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 4631952216750555136;
    var_904 = 0;
    OP_PUSH5_C 4664380739910180536, 4633024636411822735, 4672325692734989926, 4664808636850362122, 4639470413378496758
    var_912 = 4672291890998773023;
    var_920 = 1;
    pri = EvCameraMove(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_928 = 0;
    pri = fun_23F0()
    var_936 = 8802641224559852288;
    var_944 = 8;
    pri = fun_0820(var_936)
    var_952 = 6824651908674154928;
    var_960 = 8;
    pri = fun_0820(var_952)
    var_968 = 1;
    var_976 = 3;
    var_984 = 0;
    var_992 = 11;
    var_1000 = 5858126159611641479;
    var_1008 = 40;
    pri = fun_6398(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = 1;
    var_1024 = 3;
    var_1032 = 0;
    var_1040 = 7;
    var_1048 = 5858127259123269690;
    var_1056 = 40;
    pri = fun_6398(var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1064 = 5858126159611641479;
    var_1072 = 8;
    pri = fun_09F8(var_1064)
    var_1080 = 5858127259123269690;
    var_1088 = 8;
    pri = fun_09F8(var_1080)
    var_1096 = 0;
    var_1104 = 0;
    var_1112 = 0;
    var_1120 = 0;
    OP_PUSH2_C 8802641224559852288, 5858126159611641479
    var_1128 = 48;
    pri = fun_07C8(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = 0;
    OP_PUSH2_C 8802641224559852288, 5858127259123269690
    var_1168 = 48;
    pri = fun_07C8(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1176 = 5858126159611641479;
    var_1184 = 8;
    pri = fun_0820(var_1176)
    var_1192 = 5858127259123269690;
    var_1200 = 8;
    pri = fun_0820(var_1192)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    var_1232 = -1;
    var_1240 = 0;
    var_1248 = 11;
    var_1256 = 5858126159611641479;
    var_1264 = 56;
    pri = fun_4060(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 0;
    var_1280 = 3;
    var_1288 = 0;
    var_1296 = 100;
    var_1304 = -1;
    OP_PUSH2_C -4101406314563145812, 5858126159611641479
    var_1312 = 56;
    pri = fun_1B10(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1320 = 1;
    var_1328 = 8;
    pri = fun_1D08(var_1320)
    var_1336 = 0;
    pri = fun_1DC8()
    var_1344 = -1;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 0;
    var_1376 = 205;
    var_1384 = 40;
    pri = fun_2198(var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1392 = 0;
    pri = fun_22B0()
    OP_JZER lab_A118
    var_1400 = 0;
    pri = fun_23A0()
// lab_A118
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4664380739910180536, 4633024636411822735, 4672325692734989926, 4664808636850362122, 4639470413378496758
    var_32 = 4672291890998773023;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_23F0()
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    var_80 = -1;
    var_88 = 0;
    var_96 = 9;
    var_104 = 5858126159611641479;
    var_112 = 56;
    pri = fun_4060(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 15;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 32392;
    var_144 = 8;
    var_152 = 16;
    pri = fun_02A8(var_144, var_136)
    var_160 = 0;
    pri = fun_0378()
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    OP_PUSH2_C -4101405215051517601, 5858126159611641479
    var_208 = 56;
    pri = fun_1B10(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1D08(var_216)
    var_232 = 0;
    pri = fun_1DC8()
    var_240 = 1;
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 0;
    var_280 = 11;
    var_288 = 5858127259123269690;
    var_296 = 56;
    pri = fun_4060(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C 1841728792372375423, 5858127259123269690
    var_344 = 56;
    pri = fun_1B10(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_1D08(var_352)
    var_368 = 0;
    pri = fun_1DC8()
    var_376 = -1;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = 206;
    var_416 = 40;
    pri = fun_2198(var_408, var_400, var_392, var_384, var_376)
    var_424 = 0;
    pri = fun_22B0()
    OP_JZER lab_A460
    var_432 = 0;
    pri = fun_23A0()
// lab_A460
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4664379442486459761, 4635394655715726459, 4672327504180396687, 4665146472793112576, 4643618123082188718
    var_32 = 4672327504180396687;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_23F0()
    var_56 = 1;
    var_64 = 1;
    var_72 = -1;
    var_80 = -1;
    var_88 = 0;
    var_96 = 9;
    var_104 = 5858126159611641479;
    var_112 = 56;
    pri = fun_4060(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 1;
    var_136 = -1;
    var_144 = -1;
    var_152 = 0;
    var_160 = 10;
    var_168 = 5858127259123269690;
    var_176 = 56;
    pri = fun_4060(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 15;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = 32392;
    var_208 = 8;
    var_216 = 16;
    pri = fun_02A8(var_208, var_200)
    var_224 = 0;
    pri = fun_0378()
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C 1841727692860747212, 5858127259123269690
    var_272 = 56;
    pri = fun_1B10(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1D08(var_280)
    var_296 = 0;
    pri = fun_1DC8()
    var_304 = 1;
    var_312 = 3;
    var_320 = 0;
    var_328 = 9;
    var_336 = 5858126159611641479;
    var_344 = 40;
    pri = fun_6398(var_336, var_328, var_320, var_312, var_304)
    var_352 = 1;
    var_360 = 3;
    var_368 = 0;
    var_376 = 10;
    var_384 = 5858127259123269690;
    var_392 = 40;
    pri = fun_6398(var_384, var_376, var_368, var_360, var_352)
    var_400 = 5858126159611641479;
    var_408 = 8;
    pri = fun_09F8(var_400)
    var_416 = 5858127259123269690;
    var_424 = 8;
    pri = fun_09F8(var_416)
    var_432 = 1;
    var_440 = 0;
    var_448 = 30;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 0;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 0;
    OP_PUSH4_C 4664268732660658995, 4672558115749206426, 4611686018427387904, 5858126159611641479
    var_488 = 72;
    pri = fun_0750(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 1;
    var_504 = 0;
    var_512 = 30;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 0;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 0;
    OP_PUSH4_C 4664543060811789107, 4672558143236997120, 4611686018427387904, 5858127259123269690
    var_552 = 72;
    pri = fun_0750(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 5858126159611641479;
    var_568 = 8;
    pri = fun_0820(var_560)
    var_576 = 5858127259123269690;
    var_584 = 8;
    pri = fun_0820(var_576)
    var_592 = 32440;
    pri = SoundPostEvent(var_592)
    var_600 = 100;
    var_608 = 3;
    OP_PUSH2_C 4603579539098121012, 8802641224559852288
    var_616 = 15;
    pri = EvCameraMoveOffsetChr(var_616, var_608, var_600, var_592, var_584)
    var_624 = 0;
    var_632 = 0;
    var_640 = 0;
    var_648 = 0;
    OP_PUSH2_C 6824651908674154928, 8802641224559852288
    var_656 = 48;
    pri = fun_07C8(var_648, var_640, var_632, var_624, var_616, var_608)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C 8802641224559852288, 6824651908674154928
    var_696 = 48;
    pri = fun_07C8(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 8802641224559852288;
    var_712 = 8;
    pri = fun_0820(var_704)
    var_720 = 6824651908674154928;
    var_728 = 8;
    pri = fun_0820(var_720)
    var_736 = 0;
    pri = fun_23F0()
    var_744 = 0;
    var_752 = 3;
    var_760 = 0;
    var_768 = 100;
    var_776 = -1;
    OP_PUSH2_C -8041231188442008434, 6824651908674154928
    var_784 = 56;
    pri = fun_1B10(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_792 = 1;
    var_800 = 8;
    pri = fun_1D08(var_792)
    var_808 = 0;
    pri = fun_1DC8()
    var_816 = 0;
    var_824 = 3;
    var_832 = 0;
    var_840 = 100;
    var_848 = -1;
    OP_PUSH2_C -8040381265953590556, 6824651908674154928
    var_856 = 56;
    pri = fun_1B10(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1D08(var_864)
    var_880 = 0;
    var_888 = -3859732757532002255;
    var_896 = 0;
    var_904 = 24;
    pri = fun_1DF8(var_896, var_888, var_880)
    var_912 = 0;
    var_920 = -3859736056066886888;
    var_928 = 1;
    var_936 = 24;
    pri = fun_1DF8(var_928, var_920, var_912)
    var_944 = 0;
    var_952 = 0;
    var_960 = 0;
    var_968 = 1;
    var_976 = 32;
    pri = fun_1EE0(var_968, var_960, var_952, var_944)
    var_984 = 0;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 100;
    var_1016 = -1;
    OP_PUSH2_C -8040377967418705923, 6824651908674154928
    var_1024 = 56;
    pri = fun_1B10(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 1;
    var_1040 = 8;
    pri = fun_1D08(var_1032)
    var_1048 = 0;
    pri = fun_1DC8()
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C -8040379066930334134, 6824651908674154928
    var_1096 = 56;
    pri = fun_1B10(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_1D08(var_1104)
    var_1120 = 0;
    pri = fun_1DC8()
    var_1128 = 6;
    var_1136 = 4;
    var_1144 = 2;
    var_1152 = 1;
    var_1160 = 9;
    var_1168 = 1;
    var_1176 = 1081;
    var_1184 = 6824651908674154928;
    var_1192 = 64;
    pri = fun_82C8(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1200 = 0;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 100;
    var_1232 = -1;
    OP_PUSH2_C -8040384564488475189, 6824651908674154928
    var_1240 = 56;
    pri = fun_1B10(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = 1;
    var_1256 = 8;
    pri = fun_1D08(var_1248)
    var_1264 = 0;
    pri = fun_1DC8()
    var_1272 = 3;
    var_1280 = 15;
    pri = EvCameraEnd(var_1280, var_1272)
    pri = 0;
    return pri;
}
// fun_AE80
fun_AE80() {
    pri = 0;
    return pri;
}
// fun_AE98
fun_AE98() {
    var_8 = 5858126159611641479;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = 5858127259123269690;
    var_32 = 8;
    pri = fun_06C0(var_24)
    var_40 = 3038398906929913387;
    var_48 = 8;
    pri = fun_0540(var_40)
    var_56 = 630;
    var_64 = 8;
    pri = fun_93C8(var_56)
    var_72 = 3834272546150966180;
    pri = VanishFlagSet(var_72)
    var_80 = -2412310297789522569;
    pri = VanishFlagSet(var_80)
    var_88 = 4041119368649818441;
    pri = VanishFlagSet(var_88)
    var_96 = 7678906471473862724;
    pri = VanishFlagSet(var_96)
    var_104 = -7851974772311272286;
    pri = VanishFlagSet(var_104)
    var_112 = 4766226490748976350;
    pri = VanishFlagSet(var_112)
    var_120 = 6037426689042037478;
    pri = FlagSet(var_120)
    var_128 = 6037425589530409267;
    pri = FlagSet(var_128)
    var_136 = 1;
    var_144 = 1081;
    pri = ItemAdd(var_144, var_136)
    pri = 0;
    return pri;
}
// fun_B0B0
fun_B0B0() {
    var_8 = 0;
    pri = fun_0570()
    var_16 = 32392;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02A8(var_24, var_16)
    var_40 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B120
fun_B120() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9560()
    var_16 = 0;
    pri = fun_95B8()
    var_24 = 0;
    pri = fun_95D0()
    var_32 = 0;
    pri = fun_95E8()
    var_40 = 0;
    pri = fun_AE80()
    var_48 = 0;
    pri = fun_AE98()
    var_56 = 0;
    pri = fun_B0B0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B210
fun_B210() {
    var_8 = 0;
    pri = fun_95B8()
    var_16 = 0;
    pri = fun_AE98()
    pri = 0;
    return pri;
}
