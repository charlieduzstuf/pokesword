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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
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
// fun_0858
fun_0858() {
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    pri = GetAnglePositionToFieldObject_(var_32, var_24, var_16)
    var_8 = pri;
    var_40 = 0;
    var_48 = arg_7;
    var_56 = arg_5;
    var_64 = arg_6;
    var_72 = var_8;
    var_80 = 1;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    pri = StartForceMove_(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1138(var_8)
    OP_JZER lab_09E8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1168(var_24)
    OP_JNZ lab_09E8
    pri = 0;
    return pri;
// lab_09E8
    OP_JUMP lab_09F8
// lab_09F8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A58
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09F8
    pri = 0;
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B48
fun_0B48() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B90
    pri = 0;
    return pri;
// lab_0B90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BD0
// lab_0BD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1138(var_8)
    OP_JNZ lab_0C58
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C48
    pri = 0;
    return pri;
// lab_0C58
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CA0
    pri = 0;
    return pri;
// lab_0CA0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D48(var_8)
    pri = 0;
    return pri;
// lab_0D00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BD0
    pri = 0;
    return pri;
// lab_0C48
    OP_JUMP lab_0CA0
}
// fun_0D48
fun_0D48() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DD0
    pri = 0;
    return pri;
// lab_0DD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1138(var_8)
    OP_JZER lab_0F00
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E28
    OP_ZERO_P_S 64
// lab_0F00
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F38
    OP_CONST_S 64, 1
// lab_0F38
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F70
    OP_CONST_S 72, 1
// lab_0F70
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
// lab_0E28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E50
    OP_ZERO_P_S 72
// lab_0E50
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
    OP_JUMP lab_1010
// lab_1010
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10F8
fun_10F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1198
fun_1198() {
    OP_JUMP lab_11B0
// lab_11B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1240
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1230
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B48(var_8)
    pri = 0;
    return pri;
// lab_1240
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_12C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B48(var_8)
    pri = 0;
    return pri;
// lab_12D0
    pri = 0;
    return pri;
// lab_12C0
    OP_JUMP lab_12E0
// lab_12E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11B0
    pri = 0;
    return pri;
// lab_1230
    OP_JUMP lab_12E0
}
// fun_1320
fun_1320() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B48(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1198(var_40)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_13E0
fun_13E0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
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
// switch_1A58
        case default:
        {
// switch_1A58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AA0
// lab_1AA0
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
            OP_JNZ lab_1B48
            var_88 = 0;
            pri = fun_1E18()
// lab_1B48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1640
                case default:
                {
// switch_1640_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16B8
// lab_16B8
                    OP_JUMP lab_1AA0
                }
                case 0x0:
                {
// switch_1640_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16B8
                }
                case 0x1:
                {
// switch_1640_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16B8
                }
                case 0x2:
                {
// switch_1640_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16B8
                }
                case 0x3:
                {
// switch_1640_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16B8
                }
                case 0x4:
                {
// switch_1640_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16B8
                }
                case 0x5:
                {
// switch_1640_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16B8
                }
            }
        }
        case 0x65:
        {
// switch_1A58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_17F8
                case default:
                {
// switch_17F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1870
// lab_1870
                    OP_JUMP lab_1AA0
                }
                case 0x0:
                {
// switch_17F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1870
                }
                case 0x1:
                {
// switch_17F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1870
                }
                case 0x2:
                {
// switch_17F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1870
                }
                case 0x3:
                {
// switch_17F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1870
                }
                case 0x4:
                {
// switch_17F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1870
                }
                case 0x5:
                {
// switch_17F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1870
                }
            }
        }
        case 0x66:
        {
// switch_1A58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19B0
                case default:
                {
// switch_19B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A28
// lab_1A28
                    OP_JUMP lab_1AA0
                }
                case 0x0:
                {
// switch_19B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A28
                }
                case 0x1:
                {
// switch_19B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A28
                }
                case 0x2:
                {
// switch_19B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A28
                }
                case 0x3:
                {
// switch_19B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A28
                }
                case 0x4:
                {
// switch_19B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A28
                }
                case 0x5:
                {
// switch_19B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A28
                }
            }
        }
    }
}
// fun_1B60
fun_1B60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1440(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BC8
fun_1BC8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B10(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C70
    pri = 1;
    return pri;
// lab_1C70
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1CB8
fun_1CB8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BC8(var_8)
    arg_2 = pri;
// lab_1D08
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1440(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D68
fun_1D68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1B60(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DB8
fun_1DB8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1D68(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E18
fun_1E18() {
    OP_JUMP lab_1E30
// lab_1E30
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E70
    pri = 0;
    return pri;
// lab_1E70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E30
    pri = 0;
    return pri;
}
// fun_1EB0
fun_1EB0() {
    var_8 = 0;
    pri = fun_1E18()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F60
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F60
    pri = 0;
    return pri;
}
// fun_1F70
fun_1F70() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FA0
fun_1FA0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1FD8
fun_1FD8() {
    OP_JUMP lab_1FF0
// lab_1FF0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2038
    OP_JUMP lab_2068
    OP_JUMP lab_2058
// lab_2038
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2068
    pri = 0;
    return pri;
// lab_2058
    OP_JUMP lab_1FF0
}
// fun_2078
fun_2078() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_20A8
fun_20A8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20F8
fun_20F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2148
fun_2148() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    OP_JUMP lab_2250
// lab_2250
    pri = EvCameraMoveWait_()
    OP_JZER lab_2288
    pri = 0;
    return pri;
// lab_2288
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2250
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    pri = arg_6;
    OP_JNZ lab_2338
    var_8 = 0;
    pri = fun_1020()
// lab_2338
    pri = arg_1;
    switch (pri) {
// switch_38A0
        case default:
        {
// switch_38A0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3BF0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3BF0
            pri = 1;
            OP_JUMP lab_3BF8
// lab_3BF0
            pri = 0;
// lab_3BF8
            OP_JZER lab_3D50
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B10(var_24, var_16)
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
            OP_JUMP lab_3DB0
// lab_3D50
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
// lab_3DB0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E10
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E70
// lab_3E10
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E70
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E70
            pri = arg_2;
            OP_JZER lab_3EB0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3EB0
            var_8 = 0;
            pri = fun_1060()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38A0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1:
        {
// switch_38A0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x2:
        {
// switch_38A0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x3:
        {
// switch_38A0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x4:
        {
// switch_38A0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x5:
        {
// switch_38A0_case_0x5
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x6:
        {
// switch_38A0_case_0x6
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x7:
        {
// switch_38A0_case_0x7
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x8:
        {
// switch_38A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x9:
        {
// switch_38A0_case_0x9
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xa:
        {
// switch_38A0_case_0xa
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xb:
        {
// switch_38A0_case_0xb
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xc:
        {
// switch_38A0_case_0xc
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xd:
        {
// switch_38A0_case_0xd
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xe:
        {
// switch_38A0_case_0xe
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0xf:
        {
// switch_38A0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x10:
        {
// switch_38A0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x11:
        {
// switch_38A0_case_0x11
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x12:
        {
// switch_38A0_case_0x12
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x13:
        {
// switch_38A0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x14:
        {
// switch_38A0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x15:
        {
// switch_38A0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x16:
        {
// switch_38A0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x17:
        {
// switch_38A0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x18:
        {
// switch_38A0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x19:
        {
// switch_38A0_case_0x19
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
            pri = fun_0D80(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1a:
        {
// switch_38A0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AD0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A98(var_48, var_40)
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
            pri = fun_0D80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1b:
        {
// switch_38A0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AD0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A98(var_48, var_40)
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
            pri = fun_0D80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1c:
        {
// switch_38A0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AD0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A98(var_48, var_40)
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
            pri = fun_0D80(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1d:
        {
// switch_38A0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1e:
        {
// switch_38A0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x1f:
        {
// switch_38A0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x20:
        {
// switch_38A0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x21:
        {
// switch_38A0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x22:
        {
// switch_38A0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x23:
        {
// switch_38A0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x24:
        {
// switch_38A0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x25:
        {
// switch_38A0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x26:
        {
// switch_38A0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x27:
        {
// switch_38A0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x28:
        {
// switch_38A0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
        case 0x29:
        {
// switch_38A0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A0_case_default
        }
    }
}
// fun_3EE0
fun_3EE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_40F0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8440;
    OP_ADDR_ALT -256
    OP_MOVS 56
    pri = 0;
    OP_ADDR_ALT -384
    OP_FILL 128
    OP_PUSH_P_ADR -384
    pri = arg_1;
    OP_ADD_P_C 1
    var_416 = pri;
    pri = NumericToString(var_416, var_408)
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -384
    var_424 = 8496;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8512;
    OP_PUSH_P_ADR -384
    pri = ConcatString(var_432, var_424, var_416)
    OP_PUSH_P_ADR -256
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -256
    pri = ConcatString(var_432, var_424, var_416)
    var_440 = 0;
    OP_PUSH_P_ADR -256
    var_448 = arg_0;
    pri = AddParallelCommandMonitorState_(var_448, var_440, var_432)
    pri = arg_2;
    OP_JZER lab_40D8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_40D8
    pri = 0;
    return pri;
}
// fun_40F0
fun_40F0() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AD0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4138
fun_4138() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_41D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B48(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2300(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_41D0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_4328
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_4290
    var_24 = 8664;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_4290
    pri = 1;
    OP_JUMP lab_4298
// lab_4328
    pri = 0;
    return pri;
// lab_4290
    pri = 0;
// lab_4298
    OP_JZER lab_4328
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B48(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2300(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_4338
fun_4338() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_46B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_43A0
fun_43A0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_4410
    OP_CONST_S -8, 1
// lab_4410
    pri = arg_0;
    OP_JNZ lab_4430
    OP_ZERO_P_S -8
// lab_4430
    pri = var_8;
    OP_JZER lab_44B8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_44B8
    pri = 0;
    return pri;
}
// fun_44D0
fun_44D0() {
    var_8 = 8768;
    var_16 = 8;
    pri = fun_1FA0(var_8)
    var_24 = 0;
    pri = fun_1FD8()
    var_32 = 0;
    var_40 = 8;
    pri = fun_20A8(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_21E8(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_45E8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_45E8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_4138(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_4338(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2078()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_22C8(var_112)
    pri = 0;
    return pri;
}
// fun_46B8
fun_46B8() {
    var_8 = 8928;
    var_16 = 8;
    pri = fun_1FA0(var_8)
    var_24 = 0;
    pri = fun_1FD8()
    pri = arg_3;
    OP_JNZ lab_47D8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_47A0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4848(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_47C8
// lab_47D8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_49E8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_47A0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4910(var_16, var_8)
// lab_47C8
    OP_JUMP lab_4820
// lab_4820
    var_8 = 0;
    pri = fun_2078()
    pri = 0;
    return pri;
}
// fun_4848
fun_4848() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_49E8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_48F8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_48F8
    pri = 0;
    return pri;
}
// fun_4910
fun_4910() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_20F8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1DB8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1EB0(var_72)
    var_88 = 0;
    pri = fun_1F70()
    var_96 = 0;
    var_104 = 8;
    pri = fun_20A8(var_96)
    pri = 0;
    return pri;
}
// fun_49E8
fun_49E8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4A30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4CF0(var_8)
// lab_4A30
    pri = arg_4;
    OP_JNZ lab_4A98
    var_8 = 0;
    var_16 = 8;
    pri = fun_20A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_20F8(var_40, var_32, var_24)
// lab_4A98
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4B38
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2148(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1DB8(var_56, var_48, var_40)
    OP_JUMP lab_4C28
// lab_4B38
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4BF0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_4BF0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_4BF0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1DB8(var_24, var_16, var_8)
// lab_4C28
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4C68
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_4C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_1EB0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4EF8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_43A0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4CF0
fun_4CF0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_4D50
    var_16 = 9088;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_4D50
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_4E90
        case default:
        {
// switch_4E90_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_4E80
            var_16 = 9632;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_4E80
            OP_JUMP lab_4EC8
// lab_4EC8
            var_8 = 9848;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_4E90_case_0x1
            var_8 = 9304;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4EC8
        }
        case 0x2:
        {
// switch_4E90_case_0x2
            var_8 = 9432;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4EC8
        }
    }
}
// fun_4EF8
fun_4EF8() {
    pri = arg_2;
    OP_JNZ lab_4FE0
    var_8 = 0;
    var_16 = 8;
    pri = fun_20A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_20F8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2198(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_4FE0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1DB8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1EB0(var_40)
    var_56 = 0;
    pri = fun_1F70()
    pri = 0;
    return pri;
}
// fun_5058
fun_5058() {
    pri = 10032;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_50E0
// lab_50E0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5260
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5250
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_51A0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_51A0
    pri = 0;
    OP_JUMP lab_51A8
// lab_5260
    pri = 0;
    return pri;
// lab_5250
    OP_JUMP lab_50D8
// lab_50D8
    OP_INC_P_S -936
// lab_51A0
    pri = 1;
// lab_51A8
    OP_JZER lab_5220
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5218
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5220
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5218
}
// fun_5280
fun_5280() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5318
    var_8 = 1;
    var_16 = 0;
    var_24 = 10952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_13E0()
// lab_5318
    pri = arg_4;
    OP_JZER lab_5350
    var_8 = 1;
    var_16 = 8;
    pri = fun_1408(var_8)
// lab_5350
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_53A8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_53A8
    pri = 0;
    OP_JUMP lab_53B0
// lab_53A8
    pri = 1;
// lab_53B0
    OP_JZER lab_5478
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5478
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_5450
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1320(var_32, var_24)
    OP_JUMP lab_5478
// lab_5478
    pri = arg_2;
    OP_JZER lab_5550
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_5520
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A8(var_40)
    OP_JUMP lab_5550
// lab_5550
    pri = arg_3;
    OP_JZER lab_5588
    var_8 = 1;
    var_16 = 8;
    pri = fun_13A8(var_8)
// lab_5588
    pri = 0;
    return pri;
// lab_5520
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10F8(var_16, var_8)
// lab_5450
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1320(var_16, var_8)
}
// fun_5598
fun_5598() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5058(var_24)
    pri = 0;
    return pri;
}
// fun_5600
fun_5600() {
    pri = g_mode;
    switch (pri) {
// switch_56C0
        case default:
        {
// switch_56C0_case_default
            pri = CommandNOP()
            OP_JUMP lab_5708
// lab_5708
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_56C0_case_0x0
            var_8 = 0;
            pri = fun_5718()
            OP_JUMP lab_5708
        }
        case 0x24744b276b3e9d6a:
        {
// switch_56C0_case_0x24744b276b3e9d6a
            var_8 = 0;
            pri = fun_6AA8()
            OP_JUMP lab_5708
        }
        case 0x41d3ad2af533685e:
        {
// switch_56C0_case_0x41d3ad2af533685e
            var_8 = 0;
            pri = fun_69B8()
            OP_JUMP lab_5708
        }
    }
}
// fun_5718
fun_5718() {
    pri = 0;
    return pri;
}
// fun_5730
fun_5730() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5280(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5788
fun_5788() {
    var_8 = 293095515385682860;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 8892982613819863695;
    var_32 = 8;
    pri = fun_0540(var_24)
    pri = 0;
    return pri;
}
// fun_57F0
fun_57F0() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_5820
fun_5820() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4639611854554293862, 4659349847491477504, 4657432299212636160, 8802641224559852288
    var_24 = 48;
    pri = fun_0718(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    OP_PUSH3_C 4658334118649738035, 4657616797263776973, 293095515385682860
    var_56 = 48;
    pri = fun_0718(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    var_80 = 0;
    pri = float(var_80)
    var_88 = pri;
    OP_PUSH3_C 4657950169189318656, 4657738183347483443, 8892982613819863695
    var_96 = 48;
    pri = fun_0718(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 4627730092099895296;
    var_120 = 0;
    OP_PUSH5_C 4659123436057085870, 4635206067481330319, 4657300423788000707, 4660062243065346130, 4637254501624342118
    var_128 = 4657557445626109624;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_2238()
    var_152 = 0;
    var_160 = 4627730092099895296;
    var_168 = 3;
    OP_PUSH5_C 4659078444041277276, 4635206067481330319, 4657464756795888108, 4660017273039770092, 4637254501624342118
    var_176 = 4657721756643764470;
    var_184 = 40;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 10;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 11000;
    var_216 = 8;
    var_224 = 16;
    pri = fun_02A8(var_216, var_208)
    var_232 = 0;
    pri = fun_0378()
    var_240 = 1;
    var_248 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4658718947719459635, 4657616797263776973, 4607182418800017408
    var_256 = 293095515385682860;
    var_264 = 64;
    pri = fun_0858(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_272 = 1;
    var_280 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4658851768724094976, 4657738183347483443, 4607182418800017408
    var_288 = 8892982613819863695;
    var_296 = 64;
    pri = fun_0858(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_304 = 15;
    var_312 = 8;
    pri = fun_0060(var_304)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C 2753206527787850133, 293095515385682860
    var_360 = 56;
    pri = fun_1CB8(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1EB0(var_368)
    var_384 = 0;
    pri = fun_1F70()
    var_392 = 11048;
    pri = SoundPostEvent(var_392)
    var_400 = 293095515385682860;
    var_408 = 8;
    pri = fun_0970(var_400)
    var_416 = 0;
    var_424 = 1;
    var_432 = 293095515385682860;
    var_440 = 24;
    pri = fun_3EE0(var_432, var_424, var_416)
    var_448 = 1;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 293095515385682860;
    var_472 = 8;
    pri = fun_0B48(var_464)
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C 2753198831206452656, 293095515385682860
    var_520 = 56;
    pri = fun_1CB8(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_1EB0(var_528)
    var_544 = 0;
    pri = fun_1F70()
    var_552 = 8892982613819863695;
    var_560 = 8;
    pri = fun_0970(var_552)
    var_568 = 1;
    var_576 = 1;
    var_584 = -1;
    OP_PUSH2_C 8892982613819863695, 293095515385682860
    var_592 = 40;
    pri = fun_10A0(var_584, var_576, var_568, var_560, var_552)
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 877;
    pri = SoundPlayPokeVoice(var_624, var_616, var_608, var_600)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C 6171733911399517795, 8892982613819863695
    var_672 = 56;
    pri = fun_1CB8(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 1;
    var_688 = 8;
    pri = fun_1EB0(var_680)
    var_696 = 0;
    pri = fun_1F70()
    var_704 = 1;
    var_712 = 1;
    var_720 = -1;
    OP_PUSH2_C 8802641224559852288, 293095515385682860
    var_728 = 40;
    pri = fun_10A0(var_720, var_712, var_704, var_696, var_688)
    var_736 = 0;
    var_744 = 0;
    var_752 = 293095515385682860;
    var_760 = 24;
    pri = fun_3EE0(var_752, var_744, var_736)
    var_768 = 1;
    var_776 = 8;
    pri = fun_0060(var_768)
    var_784 = 293095515385682860;
    var_792 = 8;
    pri = fun_0B48(var_784)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    OP_PUSH2_C 2753203229252965500, 293095515385682860
    var_840 = 56;
    pri = fun_1CB8(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 8;
    pri = fun_1EB0(var_848)
    var_864 = 0;
    pri = fun_1F70()
    var_872 = 1;
    var_880 = 1;
    var_888 = -1;
    OP_PUSH2_C 8892982613819863695, 293095515385682860
    var_896 = 40;
    pri = fun_10A0(var_888, var_880, var_872, var_864, var_856)
    var_904 = 0;
    var_912 = 0;
    var_920 = 0;
    var_928 = 0;
    OP_PUSH2_C 8892982613819863695, 293095515385682860
    var_936 = 48;
    pri = fun_0918(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 293095515385682860;
    var_952 = 8;
    pri = fun_0970(var_944)
    var_960 = 0;
    var_968 = 3;
    var_976 = 0;
    var_984 = 100;
    var_992 = -1;
    OP_PUSH2_C 2753204328764593711, 293095515385682860
    var_1000 = 56;
    pri = fun_1CB8(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_1EB0(var_1008)
    var_1024 = 0;
    pri = fun_1F70()
    var_1032 = -1;
    var_1040 = 293095515385682860;
    var_1048 = 16;
    pri = fun_10F8(var_1040, var_1032)
    var_1056 = 0;
    var_1064 = 0;
    var_1072 = 0;
    var_1080 = 0;
    OP_PUSH2_C 8802641224559852288, 293095515385682860
    var_1088 = 48;
    pri = fun_0918(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1096 = 293095515385682860;
    var_1104 = 8;
    pri = fun_0970(var_1096)
    var_1112 = 0;
    var_1120 = 3;
    var_1128 = 0;
    var_1136 = 100;
    var_1144 = -1;
    OP_PUSH2_C 2753201030229709078, 293095515385682860
    var_1152 = 56;
    pri = fun_1CB8(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_1EB0(var_1160)
    var_1176 = 0;
    pri = fun_1F70()
    var_1184 = 1;
    var_1192 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4659132364091503411, 4657601404100988109, 4607182418800017408
    var_1200 = 293095515385682860;
    var_1208 = 64;
    pri = fun_0858(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1216 = 293095515385682860;
    var_1224 = 8;
    pri = fun_0970(var_1216)
    var_1232 = 0;
    var_1240 = 2;
    OP_PUSH2_C 8608199848743406269, 293095515385682860
    var_1248 = 32;
    pri = fun_44D0(var_1240, var_1232, var_1224, var_1216)
    var_1256 = 0;
    var_1264 = 2;
    var_1272 = 293095515385682860;
    var_1280 = 24;
    pri = fun_3EE0(var_1272, var_1264, var_1256)
    var_1288 = 1;
    var_1296 = 8;
    pri = fun_0060(var_1288)
    var_1304 = 293095515385682860;
    var_1312 = 8;
    pri = fun_0B48(var_1304)
    var_1320 = 0;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 100;
    var_1352 = -1;
    OP_PUSH2_C 2753202129741337289, 293095515385682860
    var_1360 = 56;
    pri = fun_1CB8(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1368 = 1;
    var_1376 = 8;
    pri = fun_1EB0(var_1368)
    var_1384 = 0;
    pri = fun_1F70()
    var_1392 = 0;
    var_1400 = 0;
    var_1408 = 293095515385682860;
    var_1416 = 24;
    pri = fun_3EE0(var_1408, var_1400, var_1392)
    var_1424 = 1;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = 293095515385682860;
    var_1448 = 8;
    pri = fun_0B48(var_1440)
    var_1456 = 1;
    var_1464 = 0;
    var_1472 = 4641240890982006784;
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 4659970191951868723;
    var_1504 = 2510;
    pri = float(var_1504)
    var_1512 = pri;
    OP_PUSH2_C 4607182418800017408, 293095515385682860
    var_1520 = 72;
    pri = fun_07E0(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1528 = 1;
    var_1536 = 0;
    var_1544 = 4641240890982006784;
    var_1552 = 0;
    var_1560 = 0;
    OP_PUSH4_C 4659306966537994240, 4657784362835850035, 4607182418800017408, 8892982613819863695
    var_1568 = 72;
    pri = fun_07E0(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1576 = 20;
    var_1584 = 8;
    pri = fun_0060(var_1576)
    var_1592 = 1;
    var_1600 = 1;
    var_1608 = -1;
    OP_PUSH2_C 293095515385682860, 8802641224559852288
    var_1616 = 40;
    pri = fun_10A0(var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1624 = 30;
    var_1632 = 8;
    pri = fun_0060(var_1624)
    var_1640 = 1;
    var_1648 = 0;
    var_1656 = 10952;
    var_1664 = 8;
    var_1672 = 32;
    pri = fun_0308(var_1664, var_1656, var_1648, var_1640)
    var_1680 = 0;
    pri = fun_0378()
    var_1688 = 0;
    var_1696 = 293095515385682860;
    var_1704 = 16;
    pri = fun_0770(var_1696, var_1688)
    var_1712 = 0;
    var_1720 = 8892982613819863695;
    var_1728 = 16;
    pri = fun_0770(var_1720, var_1712)
    var_1736 = -1;
    var_1744 = 8802641224559852288;
    var_1752 = 16;
    pri = fun_10F8(var_1744, var_1736)
    var_1760 = 1;
    var_1768 = 1;
    var_1776 = 180;
    pri = float(var_1776)
    var_1784 = pri;
    OP_PUSH3_C 4659042006225932780, 4657532948507042775, 8802641224559852288
    var_1792 = 48;
    pri = fun_0718(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1800 = 15;
    var_1808 = 8;
    pri = fun_0060(var_1800)
    var_1816 = 293095515385682860;
    var_1824 = 8;
    pri = fun_0970(var_1816)
    var_1832 = 8892982613819863695;
    var_1840 = 8;
    pri = fun_0970(var_1832)
    var_1848 = 11208;
    pri = SoundPostEvent(var_1848)
    var_1856 = 3;
    var_1864 = 1;
    pri = EvCameraEnd(var_1864, var_1856)
    pri = 0;
    return pri;
}
// fun_68C0
fun_68C0() {
    pri = 0;
    return pri;
}
// fun_68D8
fun_68D8() {
    var_8 = 293095515385682860;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = 8892982613819863695;
    var_32 = 8;
    pri = fun_06C0(var_24)
    var_40 = 1120;
    var_48 = 8;
    pri = fun_5598(var_40)
    pri = 0;
    return pri;
}
// fun_6960
fun_6960() {
    var_8 = 11000;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_69B8
fun_69B8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_5730()
    var_16 = 0;
    pri = fun_5788()
    var_24 = 0;
    pri = fun_57F0()
    var_32 = 0;
    pri = fun_5820()
    var_40 = 0;
    pri = fun_68C0()
    var_48 = 0;
    pri = fun_68D8()
    var_56 = 0;
    pri = fun_6960()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6AA8
fun_6AA8() {
    var_8 = 0;
    pri = fun_5788()
    var_16 = 0;
    pri = fun_68D8()
    var_24 = 2;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
