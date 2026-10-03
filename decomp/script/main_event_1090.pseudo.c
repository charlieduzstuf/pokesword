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
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
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
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
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
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_05B8()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06E8
fun_06E8() {
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
// fun_0760
fun_0760() {
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
// fun_0820
fun_0820() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1248(var_8)
    OP_JZER lab_0940
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1278(var_24)
    OP_JNZ lab_0940
    pri = 0;
    return pri;
// lab_0940
    OP_JUMP lab_0950
// lab_0950
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09B0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0950
    pri = 0;
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AE8
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B28
// lab_0B28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1248(var_8)
    OP_JNZ lab_0BB0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BA0
    pri = 0;
    return pri;
// lab_0BB0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BF8
    pri = 0;
    return pri;
// lab_0BF8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DC8(var_8)
    pri = 0;
    return pri;
// lab_0C58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B28
    pri = 0;
    return pri;
// lab_0BA0
    OP_JUMP lab_0BF8
}
// fun_0CA0
fun_0CA0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0CE8
// lab_0CE8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D40
    pri = 0;
    return pri;
// lab_0D40
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D80
    pri = 0;
    return pri;
// lab_0D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CE8
    pri = 0;
    return pri;
}
// fun_0DC8
fun_0DC8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E00
fun_0E00() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E50
    pri = 0;
    return pri;
// lab_0E50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1248(var_8)
    OP_JZER lab_0F80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA8
    OP_ZERO_P_S 64
// lab_0F80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FB8
    OP_CONST_S 64, 1
// lab_0FB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF0
    OP_CONST_S 72, 1
// lab_0FF0
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
// lab_0EA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED0
    OP_ZERO_P_S 72
// lab_0ED0
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
    OP_JUMP lab_1090
// lab_1090
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1160(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11A0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1278
fun_1278() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12A8
fun_12A8() {
    OP_JUMP lab_12C0
// lab_12C0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1350
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1340
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_1350
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_13E0
    pri = 0;
    return pri;
// lab_13D0
    OP_JUMP lab_13F0
// lab_13F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12C0
    pri = 0;
    return pri;
// lab_1340
    OP_JUMP lab_13F0
}
// fun_1430
fun_1430() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12A8(var_40)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14F0
fun_14F0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1518
fun_1518() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
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
// switch_1B68
        case default:
        {
// switch_1B68_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BB0
// lab_1BB0
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
            OP_JNZ lab_1C58
            var_88 = 0;
            pri = fun_1ED8()
// lab_1C58
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B68_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1750
                case default:
                {
// switch_1750_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17C8
// lab_17C8
                    OP_JUMP lab_1BB0
                }
                case 0x0:
                {
// switch_1750_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17C8
                }
                case 0x1:
                {
// switch_1750_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17C8
                }
                case 0x2:
                {
// switch_1750_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17C8
                }
                case 0x3:
                {
// switch_1750_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17C8
                }
                case 0x4:
                {
// switch_1750_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17C8
                }
                case 0x5:
                {
// switch_1750_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17C8
                }
            }
        }
        case 0x65:
        {
// switch_1B68_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1908
                case default:
                {
// switch_1908_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1980
// lab_1980
                    OP_JUMP lab_1BB0
                }
                case 0x0:
                {
// switch_1908_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1980
                }
                case 0x1:
                {
// switch_1908_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1980
                }
                case 0x2:
                {
// switch_1908_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1980
                }
                case 0x3:
                {
// switch_1908_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1980
                }
                case 0x4:
                {
// switch_1908_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1980
                }
                case 0x5:
                {
// switch_1908_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1980
                }
            }
        }
        case 0x66:
        {
// switch_1B68_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AC0
                case default:
                {
// switch_1AC0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B38
// lab_1B38
                    OP_JUMP lab_1BB0
                }
                case 0x0:
                {
// switch_1AC0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B38
                }
                case 0x1:
                {
// switch_1AC0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B38
                }
                case 0x2:
                {
// switch_1AC0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B38
                }
                case 0x3:
                {
// switch_1AC0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B38
                }
                case 0x4:
                {
// switch_1AC0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B38
                }
                case 0x5:
                {
// switch_1AC0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B38
                }
            }
        }
    }
}
// fun_1C70
fun_1C70() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A68(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D18
    pri = 1;
    return pri;
// lab_1D18
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D60
fun_1D60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C70(var_8)
    arg_2 = pri;
// lab_1DB0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1550(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C70(var_8)
    arg_2 = pri;
// lab_1E60
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1D60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1ED8
fun_1ED8() {
    OP_JUMP lab_1EF0
// lab_1EF0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F30
    pri = 0;
    return pri;
// lab_1F30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EF0
    pri = 0;
    return pri;
}
// fun_1F70
fun_1F70() {
    var_8 = 0;
    pri = fun_1ED8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2020
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2020
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2060
fun_2060() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2098
fun_2098() {
    OP_JUMP lab_20B0
// lab_20B0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_20F8
    OP_JUMP lab_2128
    OP_JUMP lab_2118
// lab_20F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2128
    pri = 0;
    return pri;
// lab_2118
    OP_JUMP lab_20B0
}
// fun_2138
fun_2138() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
    OP_JUMP lab_2180
// lab_2180
    pri = EvCameraMoveWait_()
    OP_JZER lab_21B8
    pri = 0;
    return pri;
// lab_21B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2180
    pri = 0;
    return pri;
}
// fun_21F8
fun_21F8() {
    pri = arg_6;
    OP_JNZ lab_2230
    var_8 = 0;
    pri = fun_10A0()
// lab_2230
    pri = arg_1;
    switch (pri) {
// switch_3798
        case default:
        {
// switch_3798_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3AE8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3AE8
            pri = 1;
            OP_JUMP lab_3AF0
// lab_3AE8
            pri = 0;
// lab_3AF0
            OP_JZER lab_3C48
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A68(var_24, var_16)
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
            OP_JUMP lab_3CA8
// lab_3C48
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_3CA8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D08
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D68
// lab_3D08
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D68
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D68
            pri = arg_2;
            OP_JZER lab_3DA8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DA8
            var_8 = 0;
            pri = fun_10E0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3798_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1:
        {
// switch_3798_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x2:
        {
// switch_3798_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x3:
        {
// switch_3798_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x4:
        {
// switch_3798_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x5:
        {
// switch_3798_case_0x5
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x6:
        {
// switch_3798_case_0x6
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x7:
        {
// switch_3798_case_0x7
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x8:
        {
// switch_3798_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x9:
        {
// switch_3798_case_0x9
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xa:
        {
// switch_3798_case_0xa
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xb:
        {
// switch_3798_case_0xb
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xc:
        {
// switch_3798_case_0xc
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xd:
        {
// switch_3798_case_0xd
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xe:
        {
// switch_3798_case_0xe
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0xf:
        {
// switch_3798_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x10:
        {
// switch_3798_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x11:
        {
// switch_3798_case_0x11
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x12:
        {
// switch_3798_case_0x12
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x13:
        {
// switch_3798_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x14:
        {
// switch_3798_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x15:
        {
// switch_3798_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x16:
        {
// switch_3798_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x17:
        {
// switch_3798_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x18:
        {
// switch_3798_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x19:
        {
// switch_3798_case_0x19
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
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3798_case_default
        }
        case 0x1a:
        {
// switch_3798_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
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
            pri = fun_0E00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3798_case_default
        }
        case 0x1b:
        {
// switch_3798_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
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
            pri = fun_0E00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3798_case_default
        }
        case 0x1c:
        {
// switch_3798_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
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
            pri = fun_0E00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3798_case_default
        }
        case 0x1d:
        {
// switch_3798_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1e:
        {
// switch_3798_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x1f:
        {
// switch_3798_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x20:
        {
// switch_3798_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x21:
        {
// switch_3798_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x22:
        {
// switch_3798_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x23:
        {
// switch_3798_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x24:
        {
// switch_3798_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x25:
        {
// switch_3798_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x26:
        {
// switch_3798_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x27:
        {
// switch_3798_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x28:
        {
// switch_3798_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
        case 0x29:
        {
// switch_3798_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3798_case_default
        }
    }
}
// fun_3DD8
fun_3DD8() {
    pri = arg_5;
    OP_JNZ lab_3E10
    var_8 = 0;
    pri = fun_10A0()
// lab_3E10
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3E60
    OP_CONST_S -8, -1
// lab_3E60
    pri = arg_1;
    switch (pri) {
// switch_5918
        case default:
        {
// switch_5918_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5DC0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A68(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5DC0
            pri = 1;
            OP_JUMP lab_5DC8
// lab_5DC0
            pri = 0;
// lab_5DC8
            OP_JZER lab_5E18
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6070
// lab_5E18
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5E80
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5E80
            pri = 1;
            OP_JUMP lab_5E88
// lab_5E80
            pri = 0;
// lab_5E88
            OP_JZER lab_6010
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A68(var_24, var_16)
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
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6070
// lab_6010
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6070
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_60E0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_60E0
            var_8 = 0;
            pri = fun_10E0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5918_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x1:
        {
// switch_5918_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x2:
        {
// switch_5918_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x3:
        {
// switch_5918_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x4:
        {
// switch_5918_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x5:
        {
// switch_5918_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DC8(var_40)
            OP_JUMP switch_5918_case_default
        }
        case 0x6:
        {
// switch_5918_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x7:
        {
// switch_5918_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x8:
        {
// switch_5918_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x9:
        {
// switch_5918_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0xa:
        {
// switch_5918_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0xb:
        {
// switch_5918_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0xc:
        {
// switch_5918_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0xd:
        {
// switch_5918_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0xe:
        {
// switch_5918_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0xf:
        {
// switch_5918_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x10:
        {
// switch_5918_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x11:
        {
// switch_5918_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x12:
        {
// switch_5918_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x13:
        {
// switch_5918_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x14:
        {
// switch_5918_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x15:
        {
// switch_5918_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x16:
        {
// switch_5918_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x17:
        {
// switch_5918_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x18:
        {
// switch_5918_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x19:
        {
// switch_5918_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x1a:
        {
// switch_5918_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x1b:
        {
// switch_5918_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x1c:
        {
// switch_5918_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x1d:
        {
// switch_5918_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x1e:
        {
// switch_5918_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x1f:
        {
// switch_5918_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x20:
        {
// switch_5918_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x21:
        {
// switch_5918_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x22:
        {
// switch_5918_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x23:
        {
// switch_5918_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x24:
        {
// switch_5918_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x25:
        {
// switch_5918_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x26:
        {
// switch_5918_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x27:
        {
// switch_5918_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x28:
        {
// switch_5918_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x29:
        {
// switch_5918_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x2a:
        {
// switch_5918_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x2b:
        {
// switch_5918_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x2c:
        {
// switch_5918_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x2d:
        {
// switch_5918_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x2e:
        {
// switch_5918_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x2f:
        {
// switch_5918_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x30:
        {
// switch_5918_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x31:
        {
// switch_5918_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x32:
        {
// switch_5918_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x33:
        {
// switch_5918_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x34:
        {
// switch_5918_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x35:
        {
// switch_5918_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x36:
        {
// switch_5918_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x37:
        {
// switch_5918_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x38:
        {
// switch_5918_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5918_case_default
        }
        case 0x39:
        {
// switch_5918_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x3a:
        {
// switch_5918_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x3b:
        {
// switch_5918_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x3c:
        {
// switch_5918_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x3d:
        {
// switch_5918_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
        case 0x3e:
        {
// switch_5918_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            OP_JUMP switch_5918_case_default
        }
    }
}
// fun_6110
fun_6110() {
    pri = arg_4;
    OP_JNZ lab_6148
    var_8 = 0;
    pri = fun_10A0()
// lab_6148
    pri = arg_1;
    switch (pri) {
// switch_7520
        case default:
        {
// switch_7520_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1248(var_264)
            OP_JZER lab_7AE8
            pri = arg_3;
            switch (pri) {
// switch_7A90
                case default:
                {
// switch_7A90_case_default
                    OP_JUMP lab_7DA0
// lab_7DA0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7E10
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7E10
                    var_8 = 0;
                    pri = fun_10E0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7A90_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A90_case_default
                }
                case 0x2:
                {
// switch_7A90_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A90_case_default
                }
                case 0x3:
                {
// switch_7A90_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7A90_case_default
                }
            }
// lab_7AE8
            pri = arg_1;
            OP_JZER lab_7B38
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7B38
            pri = 0;
            OP_JUMP lab_7B40
// lab_7B38
            pri = 1;
// lab_7B40
            OP_JZER lab_7BA8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A68(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7BA8
            pri = 1;
            OP_JUMP lab_7BB0
// lab_7BA8
            pri = 0;
// lab_7BB0
            OP_JZER lab_7C00
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DA0
// lab_7C00
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7C68
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7DA0
// lab_7C68
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A68(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7520_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1:
        {
// switch_7520_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2:
        {
// switch_7520_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x3:
        {
// switch_7520_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x4:
        {
// switch_7520_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x5:
        {
// switch_7520_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DC8(var_40)
            OP_JUMP switch_7520_case_default
        }
        case 0x6:
        {
// switch_7520_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x7:
        {
// switch_7520_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x8:
        {
// switch_7520_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x9:
        {
// switch_7520_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0xa:
        {
// switch_7520_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0xb:
        {
// switch_7520_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0xc:
        {
// switch_7520_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0xd:
        {
// switch_7520_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0xe:
        {
// switch_7520_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0xf:
        {
// switch_7520_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x10:
        {
// switch_7520_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x11:
        {
// switch_7520_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x12:
        {
// switch_7520_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x13:
        {
// switch_7520_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x14:
        {
// switch_7520_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x15:
        {
// switch_7520_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x16:
        {
// switch_7520_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x17:
        {
// switch_7520_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x18:
        {
// switch_7520_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x19:
        {
// switch_7520_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1a:
        {
// switch_7520_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1b:
        {
// switch_7520_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1c:
        {
// switch_7520_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1d:
        {
// switch_7520_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1e:
        {
// switch_7520_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x1f:
        {
// switch_7520_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x20:
        {
// switch_7520_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x21:
        {
// switch_7520_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x22:
        {
// switch_7520_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x23:
        {
// switch_7520_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x24:
        {
// switch_7520_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x25:
        {
// switch_7520_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x26:
        {
// switch_7520_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x27:
        {
// switch_7520_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x28:
        {
// switch_7520_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x29:
        {
// switch_7520_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2a:
        {
// switch_7520_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2b:
        {
// switch_7520_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2c:
        {
// switch_7520_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2d:
        {
// switch_7520_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2e:
        {
// switch_7520_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x2f:
        {
// switch_7520_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x30:
        {
// switch_7520_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x31:
        {
// switch_7520_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x32:
        {
// switch_7520_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x33:
        {
// switch_7520_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x34:
        {
// switch_7520_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x35:
        {
// switch_7520_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x36:
        {
// switch_7520_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x37:
        {
// switch_7520_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x38:
        {
// switch_7520_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x39:
        {
// switch_7520_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x3a:
        {
// switch_7520_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x3b:
        {
// switch_7520_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x3c:
        {
// switch_7520_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x3d:
        {
// switch_7520_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
        case 0x3e:
        {
// switch_7520_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            OP_JUMP switch_7520_case_default
        }
    }
}
// fun_7E40
fun_7E40() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8050(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_8038
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8038
    pri = 0;
    return pri;
}
// fun_8050
fun_8050() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A28(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8098
fun_8098() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8120
// lab_8120
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_82A0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8290
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_81E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_81E0
    pri = 0;
    OP_JUMP lab_81E8
// lab_82A0
    pri = 0;
    return pri;
// lab_8290
    OP_JUMP lab_8118
// lab_8118
    OP_INC_P_S -936
// lab_81E0
    pri = 1;
// lab_81E8
    OP_JZER lab_8260
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8258
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8260
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8258
}
// fun_82C0
fun_82C0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8358
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_14F0()
// lab_8358
    pri = arg_4;
    OP_JZER lab_8390
    var_8 = 1;
    var_16 = 8;
    pri = fun_1518(var_8)
// lab_8390
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_83E8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_83E8
    pri = 0;
    OP_JUMP lab_83F0
// lab_83E8
    pri = 1;
// lab_83F0
    OP_JZER lab_84B8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_84B8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8490
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1430(var_32, var_24)
    OP_JUMP lab_84B8
// lab_84B8
    pri = arg_2;
    OP_JZER lab_8590
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8560
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1120(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06B0(var_40)
    OP_JUMP lab_8590
// lab_8590
    pri = arg_3;
    OP_JZER lab_85C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_14B8(var_8)
// lab_85C8
    pri = 0;
    return pri;
// lab_8560
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1120(var_16, var_8)
// lab_8490
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1430(var_16, var_8)
}
// fun_85D8
fun_85D8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8098(var_24)
    pri = 0;
    return pri;
}
// fun_8640
fun_8640() {
    pri = g_mode;
    switch (pri) {
// switch_8700
        case default:
        {
// switch_8700_case_default
            pri = CommandNOP()
            OP_JUMP lab_8748
// lab_8748
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8700_case_0x0
            var_8 = 0;
            pri = fun_8758()
            OP_JUMP lab_8748
        }
        case 0x2bb567276ef451a2:
        {
// switch_8700_case_0x2bb567276ef451a2
            var_8 = 0;
            pri = fun_BFF0()
            OP_JUMP lab_8748
        }
        case 0x4afe512afa89279e:
        {
// switch_8700_case_0x4afe512afa89279e
            var_8 = 0;
            pri = fun_BF00()
            OP_JUMP lab_8748
        }
    }
}
// fun_8758
fun_8758() {
    pri = 0;
    return pri;
}
// fun_8770
fun_8770() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_82C0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_87C8
fun_87C8() {
    var_8 = -130345246077277967;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = -7811456750994411148;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 6867508795578722623;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = 6867509895090350834;
    var_64 = 8;
    pri = fun_0408(var_56)
    pri = 0;
    return pri;
}
// fun_8880
fun_8880() {
    pri = 0;
    return pri;
}
// fun_8898
fun_8898() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 0;
    var_24 = -130345246077277967;
    var_32 = 16;
    pri = fun_0638(var_24, var_16)
    var_40 = 0;
    var_48 = -7811456750994411148;
    var_56 = 16;
    pri = fun_0638(var_48, var_40)
    var_64 = 0;
    var_72 = 6867508795578722623;
    var_80 = 16;
    pri = fun_0638(var_72, var_64)
    var_88 = 0;
    var_96 = 6867509895090350834;
    var_104 = 16;
    pri = fun_0638(var_96, var_88)
    var_112 = 1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0670(var_120, var_112)
    var_136 = 1;
    var_144 = -7800673974562670051;
    var_152 = 16;
    pri = fun_0670(var_144, var_136)
    var_160 = 1;
    var_168 = -4374024216485124166;
    var_176 = 16;
    pri = fun_0670(var_168, var_160)
    var_184 = 1;
    var_192 = -130345246077277967;
    var_200 = 16;
    pri = fun_0670(var_192, var_184)
    var_208 = 1;
    var_216 = -7811456750994411148;
    var_224 = 16;
    pri = fun_0670(var_216, var_208)
    var_232 = 1;
    var_240 = 6867508795578722623;
    var_248 = 16;
    pri = fun_0670(var_240, var_232)
    var_256 = 1;
    var_264 = 6867509895090350834;
    var_272 = 16;
    pri = fun_0670(var_264, var_256)
    var_280 = 1;
    var_288 = -2634777529138130236;
    var_296 = 16;
    pri = fun_0670(var_288, var_280)
    var_304 = 1;
    var_312 = 1;
    OP_PUSH4_C 4637131356322031206, 4670162169961119744, 4670327756412262810, 8802641224559852288
    var_320 = 48;
    pri = fun_05E0(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 1;
    var_336 = 1;
    OP_PUSH4_C 4636181378275632742, 4670097573652987904, 4670286139897151488, -7800673974562670051
    var_344 = 48;
    pri = fun_05E0(var_336, var_328, var_320, var_312, var_304, var_296)
    var_352 = 1;
    var_360 = 1;
    OP_PUSH4_C -4584439240681796403, 4670166293129723904, 4670373001315745792, -4374024216485124166
    var_368 = 48;
    pri = fun_05E0(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 1;
    var_384 = 1;
    var_392 = 0;
    OP_PUSH3_C 4670102521455312896, 4670437872501784576, -2634777529138130236
    var_400 = 48;
    pri = fun_05E0(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = 0;
    var_416 = 8802641224559852288;
    var_424 = 16;
    pri = fun_0638(var_416, var_408)
    var_432 = 0;
    var_440 = -7800673974562670051;
    var_448 = 16;
    pri = fun_0638(var_440, var_432)
    var_456 = 1;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 31240;
    var_480 = 8;
    pri = fun_2060(var_472)
    var_488 = 0;
    pri = fun_2098()
    pri = EvCameraStart()
    var_496 = 0;
    var_504 = 4631952216750555136;
    var_512 = 0;
    OP_PUSH5_C 4670201581955417375, 4660728591092243497, 4670372877620687667, 4670212571574136996, 4660729910506196828
    var_520 = 4670372913354815570;
    var_528 = 1;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 0;
    pri = fun_2168()
    var_544 = 1;
    var_552 = 1;
    var_560 = -1;
    var_568 = -1;
    var_576 = 0;
    var_584 = 10;
    var_592 = -4374024216485124166;
    var_600 = 56;
    pri = fun_3DD8(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = 31456;
    var_616 = 8;
    var_624 = 16;
    pri = fun_0280(var_616, var_608)
    var_632 = 0;
    pri = fun_0350()
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 100;
    var_672 = -1;
    OP_PUSH2_C 71959914501256954, -4374024216485124166
    var_680 = 56;
    pri = fun_1E10(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 1;
    var_696 = 8;
    pri = fun_1F70(var_688)
    var_704 = 0;
    pri = fun_2030()
    var_712 = 0;
    pri = fun_2138()
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 100;
    var_752 = -1;
    OP_PUSH2_C 4186411104637793803, -4374024216485124166
    var_760 = 56;
    pri = fun_1D60(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 1;
    var_776 = 8;
    pri = fun_1F70(var_768)
    var_784 = 0;
    pri = fun_2030()
    var_792 = 31504;
    pri = SoundPostEvent(var_792)
    var_800 = 1;
    var_808 = -130345246077277967;
    var_816 = 16;
    pri = fun_0638(var_808, var_800)
    var_824 = 1;
    var_832 = -7811456750994411148;
    var_840 = 16;
    pri = fun_0638(var_832, var_824)
    var_848 = 1;
    var_856 = 6867508795578722623;
    var_864 = 16;
    pri = fun_0638(var_856, var_848)
    var_872 = 1;
    var_880 = 6867509895090350834;
    var_888 = 16;
    pri = fun_0638(var_880, var_872)
    var_896 = 1;
    var_904 = 1;
    var_912 = 180;
    pri = float(var_912)
    var_920 = pri;
    OP_PUSH3_C 4670411484222717952, 4670330395240169472, -7811456750994411148
    var_928 = 48;
    pri = fun_05E0(var_920, var_912, var_904, var_896, var_888, var_880)
    var_936 = 1;
    var_944 = 1;
    var_952 = 180;
    pri = float(var_952)
    var_960 = pri;
    OP_PUSH3_C 4670411484222717952, 4670347162792493056, -130345246077277967
    var_968 = 48;
    pri = fun_05E0(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 1;
    var_984 = 1;
    var_992 = 173;
    pri = float(var_992)
    var_1000 = pri;
    OP_PUSH3_C 4670376024972722176, 4670310878908776448, 6867508795578722623
    var_1008 = 48;
    pri = fun_05E0(var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1016 = 1;
    var_1024 = 1;
    var_1032 = 167;
    pri = float(var_1032)
    var_1040 = pri;
    OP_PUSH3_C 4670418081292484608, 4670381797408768000, 6867509895090350834
    var_1048 = 48;
    pri = fun_05E0(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1056 = 1;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 1;
    var_1080 = 8802641224559852288;
    var_1088 = 16;
    pri = fun_0638(var_1080, var_1072)
    var_1096 = 1;
    var_1104 = -7800673974562670051;
    var_1112 = 16;
    pri = fun_0638(var_1104, var_1096)
    var_1120 = 0;
    var_1128 = 4631952216750555136;
    var_1136 = 0;
    OP_PUSH5_C 4669995604944627958, 4660354119422055547, 4670322214873658819, 4670286609938372362, 4660790977382003507
    var_1144 = 4670370895750978601;
    var_1152 = 1;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    pri = fun_2168()
    var_1168 = 0;
    var_1176 = 4631952216750555136;
    var_1184 = 3;
    OP_PUSH5_C 4670251642719830016, 4660552933114590003, 4670361019387782103, 4670424043394286223, 4660989791074537964
    var_1192 = 4670409703013880955;
    var_1200 = 30;
    pri = EvCameraMove(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 1;
    var_1216 = 0;
    OP_PUSH5_C 4641240890982006784, -4374024216485124166, 4670301807937847296, 4670354584495980544, 4607182418800017408
    var_1224 = -7811456750994411148;
    var_1232 = 64;
    pri = fun_0760(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1240 = 1;
    var_1248 = 0;
    OP_PUSH5_C 4641240890982006784, -4374024216485124166, 4670305106472730624, 4670382622042488832, 4611686018427387904
    var_1256 = -130345246077277967;
    var_1264 = 64;
    pri = fun_0760(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1272 = 1;
    var_1280 = 0;
    OP_PUSH5_C 4641240890982006784, -4374024216485124166, 4670278443315757056, 4670330395240169472, 4611686018427387904
    var_1288 = 6867508795578722623;
    var_1296 = 64;
    pri = fun_0760(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1304 = 1;
    var_1312 = 0;
    OP_PUSH5_C 4641240890982006784, -4374024216485124166, 4670303457205288960, 4670408185687834624, 4611686018427387904
    var_1320 = 6867509895090350834;
    var_1328 = 64;
    pri = fun_0760(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 10;
    pri = float(var_1360)
    var_1368 = pri;
    var_1376 = 8802641224559852288;
    var_1384 = 40;
    pri = fun_0820(var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1392 = 0;
    var_1400 = 0;
    var_1408 = 0;
    var_1416 = 30;
    pri = float(var_1416)
    var_1424 = pri;
    var_1432 = -7800673974562670051;
    var_1440 = 40;
    pri = fun_0820(var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1448 = 0;
    var_1456 = 3;
    var_1464 = 0;
    var_1472 = 100;
    var_1480 = -1;
    OP_PUSH2_C 7878005276390184972, -130345246077277967
    var_1488 = 56;
    pri = fun_1D60(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1496 = 1;
    var_1504 = 8;
    pri = fun_1F70(var_1496)
    var_1512 = 0;
    pri = fun_2030()
    var_1520 = 1;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 10;
    var_1552 = -4374024216485124166;
    var_1560 = 40;
    pri = fun_6110(var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1568 = -4374024216485124166;
    var_1576 = 8;
    pri = fun_0AA0(var_1568)
    var_1584 = 0;
    var_1592 = 4629714490685705421;
    var_1600 = 0;
    OP_PUSH5_C 4670294383485580739, 4660745017795962470, 4670395035528766423, 4670080344305780654, 4660676386280156692
    var_1608 = 4670362575196735406;
    var_1616 = 1;
    pri = EvCameraMove(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1624 = 0;
    pri = fun_2168()
    var_1632 = 0;
    var_1640 = 4629714490685705421;
    var_1648 = 3;
    OP_PUSH5_C 4670298297746975621, 4660745017795962470, 4670378435651966075, 4670088178326128558, 4660676386280156692
    var_1656 = 4670345975319935058;
    var_1664 = 50;
    pri = EvCameraMove(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1672 = 0;
    var_1680 = 0;
    var_1688 = 0;
    var_1696 = 0;
    pri = float(var_1696)
    var_1704 = pri;
    var_1712 = -4374024216485124166;
    var_1720 = 40;
    pri = fun_0820(var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1728 = 8802641224559852288;
    var_1736 = 8;
    pri = fun_08C8(var_1728)
    var_1744 = -7800673974562670051;
    var_1752 = 8;
    pri = fun_08C8(var_1744)
    var_1760 = -4374024216485124166;
    var_1768 = 8;
    pri = fun_08C8(var_1760)
    var_1776 = 0;
    var_1784 = 0;
    var_1792 = -4374024216485124166;
    var_1800 = 24;
    pri = fun_7E40(var_1792, var_1784, var_1776)
    var_1808 = 1;
    var_1816 = 8;
    pri = fun_0060(var_1808)
    var_1824 = -4374024216485124166;
    var_1832 = 8;
    pri = fun_0AA0(var_1824)
    var_1840 = -130345246077277967;
    var_1848 = 8;
    pri = fun_08C8(var_1840)
    var_1856 = -7811456750994411148;
    var_1864 = 8;
    pri = fun_08C8(var_1856)
    var_1872 = 6867508795578722623;
    var_1880 = 8;
    pri = fun_08C8(var_1872)
    var_1888 = 6867509895090350834;
    var_1896 = 8;
    pri = fun_08C8(var_1888)
    var_1904 = 0;
    pri = fun_2168()
    var_1912 = 50;
    var_1920 = 8;
    pri = fun_0060(var_1912)
    var_1928 = 0;
    var_1936 = 6867509895090350834;
    var_1944 = 16;
    pri = fun_0638(var_1936, var_1928)
    var_1952 = 0;
    var_1960 = 4626829372174421197;
    var_1968 = 0;
    OP_PUSH5_C 4670309559494823117, 4660756738589914563, 4670384892534000189, 4670252797207039181, 4660647996889927516
    var_1976 = 4670359961107840369;
    var_1984 = 1;
    pri = EvCameraMove(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1992 = 0;
    pri = fun_2168()
    var_2000 = 0;
    var_2008 = 4626829372174421197;
    var_2016 = 3;
    OP_PUSH5_C 4670309444046102200, 4660761356538751222, 4670384843055976940, 4670266851714421228, 4660679750785737687
    var_2024 = 4670366134865630331;
    var_2032 = 7;
    pri = EvCameraMove(var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2040 = 0;
    var_2048 = 1;
    var_2056 = -130345246077277967;
    var_2064 = 24;
    pri = fun_7E40(var_2056, var_2048, var_2040)
    var_2072 = 1;
    var_2080 = 8;
    pri = fun_0060(var_2072)
    var_2088 = -130345246077277967;
    var_2096 = 8;
    pri = fun_0AA0(var_2088)
    var_2104 = 1;
    var_2112 = 1;
    OP_PUSH4_C 4628067862071948083, 4670102301552987341, 4670310081762846310, 8802641224559852288
    var_2120 = 48;
    pri = fun_05E0(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2128 = 0;
    pri = fun_2168()
    var_2136 = 0;
    var_2144 = 3;
    var_2152 = 0;
    var_2160 = 100;
    var_2168 = -1;
    OP_PUSH2_C 7878008574925069605, -130345246077277967
    var_2176 = 56;
    pri = fun_1D60(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2184 = 1;
    var_2192 = 8;
    pri = fun_1F70(var_2184)
    var_2200 = 0;
    pri = fun_2030()
    var_2208 = 1;
    var_2216 = 6867509895090350834;
    var_2224 = 16;
    pri = fun_0638(var_2216, var_2208)
    var_2232 = 0;
    var_2240 = 4631952216750555136;
    var_2248 = 0;
    OP_PUSH5_C 4670207772205881754, 4660693670602945331, 4670357358014061609, 4670215325850764575, 4660693604632247665
    var_2256 = 4670353364038073713;
    var_2264 = 1;
    pri = EvCameraMove(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2272 = 0;
    pri = fun_2168()
    var_2280 = 1;
    var_2288 = 1;
    var_2296 = -1;
    var_2304 = -1;
    var_2312 = 0;
    var_2320 = 11;
    var_2328 = -4374024216485124166;
    var_2336 = 56;
    pri = fun_3DD8(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2344 = 0;
    var_2352 = 3;
    var_2360 = 0;
    var_2368 = 100;
    var_2376 = -1;
    OP_PUSH2_C 4186412204149422014, -4374024216485124166
    var_2384 = 56;
    pri = fun_1D60(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2392 = 1;
    var_2400 = 8;
    pri = fun_1F70(var_2392)
    var_2408 = 0;
    pri = fun_2030()
    var_2416 = 0;
    var_2424 = -130345246077277967;
    var_2432 = 16;
    pri = fun_0638(var_2424, var_2416)
    var_2440 = 1;
    var_2448 = 1;
    OP_PUSH4_C 4626632339690723738, 4670097298775080960, 4670310713982032282, 8802641224559852288
    var_2456 = 48;
    pri = fun_05E0(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2464 = 0;
    var_2472 = 4630544841867001856;
    var_2480 = 0;
    OP_PUSH5_C 4670317671141857034, 4660759641300611891, 4670354760417840988, 4670275045824827228, 4660647667036439183
    var_2488 = 4670352635611620311;
    var_2496 = 1;
    pri = EvCameraMove(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2504 = 0;
    pri = fun_2168()
    var_2512 = 0;
    var_2520 = 4630544841867001856;
    var_2528 = 0;
    OP_PUSH5_C 4670316599118019953, 4660785809677352960, 4670354708191038669, 4670284097554302894, 4660700421604339876
    var_2536 = 4670353086411387699;
    var_2544 = 500;
    pri = EvCameraMove(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2552 = 30;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 1;
    var_2576 = 3;
    var_2584 = 0;
    var_2592 = 11;
    var_2600 = -4374024216485124166;
    var_2608 = 40;
    pri = fun_6110(var_2600, var_2592, var_2584, var_2576, var_2568)
    var_2616 = -4374024216485124166;
    var_2624 = 8;
    pri = fun_0AA0(var_2616)
    var_2632 = 0;
    var_2640 = 1;
    var_2648 = -7811456750994411148;
    var_2656 = 24;
    pri = fun_7E40(var_2648, var_2640, var_2632)
    var_2664 = 1;
    var_2672 = 8;
    pri = fun_0060(var_2664)
    var_2680 = -7811456750994411148;
    var_2688 = 8;
    pri = fun_0AA0(var_2680)
    var_2696 = 0;
    var_2704 = 3;
    var_2712 = 0;
    var_2720 = 100;
    var_2728 = -1;
    OP_PUSH2_C -2279236001668387944, -7811456750994411148
    var_2736 = 56;
    pri = fun_1D60(var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2744 = 1;
    var_2752 = 8;
    pri = fun_1F70(var_2744)
    var_2760 = 0;
    pri = fun_2030()
    var_2768 = 50;
    var_2776 = 8;
    pri = fun_0060(var_2768)
    var_2784 = 1;
    var_2792 = 7;
    var_2800 = -7811456750994411148;
    var_2808 = 24;
    pri = fun_11E0(var_2800, var_2792, var_2784)
    var_2816 = 1;
    var_2824 = -1;
    var_2832 = -1;
    var_2840 = 3;
    var_2848 = 0;
    var_2856 = 1;
    var_2864 = -7811456750994411148;
    var_2872 = 56;
    pri = fun_21F8(var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816)
    var_2880 = 0;
    var_2888 = 3;
    var_2896 = 0;
    var_2904 = 100;
    var_2912 = -1;
    OP_PUSH2_C -2279232703133503311, -7811456750994411148
    var_2920 = 56;
    pri = fun_1D60(var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864)
    var_2928 = -7811456750994411148;
    var_2936 = 8;
    pri = fun_0AA0(var_2928)
    var_2944 = 1;
    var_2952 = 8;
    pri = fun_1F70(var_2944)
    var_2960 = 0;
    pri = fun_2030()
    var_2968 = 7;
    var_2976 = 8;
    var_2984 = -7811456750994411148;
    var_2992 = 24;
    pri = fun_11E0(var_2984, var_2976, var_2968)
    var_3000 = 1;
    var_3008 = 1;
    var_3016 = -1;
    var_3024 = -1;
    var_3032 = 0;
    var_3040 = 9;
    var_3048 = -7811456750994411148;
    var_3056 = 56;
    pri = fun_3DD8(var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000)
    var_3064 = 30;
    var_3072 = 8;
    pri = fun_0060(var_3064)
    var_3080 = 0;
    var_3088 = 3;
    var_3096 = 0;
    var_3104 = 100;
    var_3112 = -1;
    OP_PUSH2_C -2279231603621875100, -7811456750994411148
    var_3120 = 56;
    pri = fun_1D60(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3128 = 1;
    var_3136 = 8;
    pri = fun_1F70(var_3128)
    var_3144 = 0;
    pri = fun_2030()
    var_3152 = 1;
    var_3160 = 6;
    var_3168 = -7811456750994411148;
    var_3176 = 24;
    pri = fun_11E0(var_3168, var_3160, var_3152)
    var_3184 = 31664;
    var_3192 = -7811456750994411148;
    var_3200 = 16;
    pri = fun_0CA0(var_3192, var_3184)
    var_3208 = 1;
    var_3216 = 3;
    var_3224 = 0;
    var_3232 = 9;
    var_3240 = -7811456750994411148;
    var_3248 = 40;
    pri = fun_6110(var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3256 = -7811456750994411148;
    var_3264 = 8;
    pri = fun_0AA0(var_3256)
    var_3272 = 0;
    var_3280 = 3;
    var_3288 = 0;
    var_3296 = 100;
    var_3304 = -1;
    OP_PUSH2_C -2279228305086990467, -7811456750994411148
    var_3312 = 56;
    pri = fun_1D60(var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256)
    var_3320 = 1;
    var_3328 = 8;
    pri = fun_1F70(var_3320)
    var_3336 = 0;
    pri = fun_2030()
    var_3344 = 6;
    var_3352 = 6;
    var_3360 = -7811456750994411148;
    var_3368 = 24;
    pri = fun_11E0(var_3360, var_3352, var_3344)
    var_3376 = 0;
    var_3384 = 3;
    var_3392 = 0;
    var_3400 = 100;
    var_3408 = -1;
    OP_PUSH2_C -2279233802645131522, -7811456750994411148
    var_3416 = 56;
    pri = fun_1D60(var_3408, var_3400, var_3392, var_3384, var_3376, var_3368, var_3360)
    var_3424 = 1;
    var_3432 = 8;
    pri = fun_1F70(var_3424)
    var_3440 = 0;
    pri = fun_2030()
    var_3448 = 1;
    var_3456 = 3;
    var_3464 = 0;
    var_3472 = 6;
    var_3480 = -7811456750994411148;
    var_3488 = 40;
    pri = fun_6110(var_3480, var_3472, var_3464, var_3456, var_3448)
    var_3496 = -7811456750994411148;
    var_3504 = 8;
    pri = fun_0AA0(var_3496)
    var_3512 = 1;
    var_3520 = -130345246077277967;
    var_3528 = 16;
    pri = fun_0638(var_3520, var_3512)
    var_3536 = 7;
    var_3544 = 4;
    var_3552 = -4374024216485124166;
    var_3560 = 24;
    pri = fun_11E0(var_3552, var_3544, var_3536)
    var_3568 = 0;
    var_3576 = 4629109319485777510;
    var_3584 = 0;
    OP_PUSH5_C 4670214336290299576, 4660729756574568940, 4670337451356040724, 4670366992484699996, 4661056817303367188
    var_3592 = 4670104824932173087;
    var_3600 = 1;
    pri = EvCameraMove(var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536, var_3528)
    var_3608 = 0;
    pri = fun_2168()
    var_3616 = 0;
    var_3624 = 4629109319485777510;
    var_3632 = 3;
    OP_PUSH5_C 4670238577772912968, 4660729756574568940, 4670350219434818273, 4670381984325744722, 4661056817303367188
    var_3640 = 4670130361089728184;
    var_3648 = 100;
    pri = EvCameraMove(var_3648, var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576)
    var_3656 = 0;
    pri = fun_2168()
    var_3664 = 0;
    var_3672 = 4631952216750555136;
    var_3680 = 0;
    OP_PUSH5_C 4670207772205881754, 4660693670602945331, 4670357358014061609, 4670215325850764575, 4660693604632247665
    var_3688 = 4670353364038073713;
    var_3696 = 1;
    pri = EvCameraMove(var_3696, var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624)
    var_3704 = 0;
    pri = fun_2168()
    var_3712 = 30;
    var_3720 = 8;
    pri = fun_0060(var_3712)
    var_3728 = 1;
    var_3736 = -1;
    var_3744 = -1;
    var_3752 = 3;
    var_3760 = 0;
    var_3768 = 1;
    var_3776 = -4374024216485124166;
    var_3784 = 56;
    pri = fun_21F8(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728)
    var_3792 = 0;
    var_3800 = 3;
    var_3808 = 0;
    var_3816 = 100;
    var_3824 = -1;
    OP_PUSH2_C 4186413303661050225, -4374024216485124166
    var_3832 = 56;
    pri = fun_1D60(var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776)
    var_3840 = 1;
    var_3848 = 8;
    pri = fun_1F70(var_3840)
    var_3856 = 0;
    pri = fun_2030()
    var_3864 = 0;
    var_3872 = 4629714490685705421;
    var_3880 = 0;
    OP_PUSH5_C 4670297052550057165, 4660742708821544141, 4670382759481442304, 4670027347845321851, 4660658530211321610
    var_3888 = 4670334018130982994;
    var_3896 = 1;
    pri = EvCameraMove(var_3896, var_3888, var_3880, var_3872, var_3864, var_3856, var_3848, var_3840, var_3832, var_3824)
    var_3904 = 0;
    pri = fun_2168()
    var_3912 = 0;
    var_3920 = 2;
    var_3928 = -130345246077277967;
    var_3936 = 24;
    pri = fun_7E40(var_3928, var_3920, var_3912)
    var_3944 = 1;
    var_3952 = 8;
    pri = fun_0060(var_3944)
    var_3960 = -130345246077277967;
    var_3968 = 8;
    pri = fun_0AA0(var_3960)
    var_3976 = 0;
    var_3984 = 3;
    var_3992 = 0;
    var_4000 = 100;
    var_4008 = -1;
    OP_PUSH2_C 7878007475413441394, -130345246077277967
    var_4016 = 56;
    pri = fun_1D60(var_4008, var_4000, var_3992, var_3984, var_3976, var_3968, var_3960)
    var_4024 = 1;
    var_4032 = 8;
    pri = fun_1F70(var_4024)
    var_4040 = 0;
    pri = fun_2030()
    var_4048 = 1;
    var_4056 = 0;
    var_4064 = 4641240890982006784;
    var_4072 = 0;
    var_4080 = 0;
    OP_PUSH4_C 4670211922862276608, 4670355684007608320, 4607182418800017408, 6867508795578722623
    var_4088 = 72;
    pri = fun_06E8(var_4080, var_4072, var_4064, var_4056, var_4048, var_4040, var_4032, var_4024, var_4016)
    var_4096 = 1;
    var_4104 = 0;
    var_4112 = 4641240890982006784;
    var_4120 = 0;
    var_4128 = 0;
    OP_PUSH4_C 4670231164315762688, 4670388944234348544, 4607182418800017408, 6867509895090350834
    var_4136 = 72;
    pri = fun_06E8(var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072, var_4064)
    var_4144 = 15;
    var_4152 = 8;
    pri = fun_0060(var_4144)
    var_4160 = 1;
    var_4168 = 1;
    var_4176 = -1;
    var_4184 = -1;
    var_4192 = 0;
    var_4200 = 12;
    var_4208 = -4374024216485124166;
    var_4216 = 56;
    pri = fun_3DD8(var_4208, var_4200, var_4192, var_4184, var_4176, var_4168, var_4160)
    var_4224 = 25;
    var_4232 = 8;
    pri = fun_0060(var_4224)
    var_4240 = 1;
    var_4248 = 0;
    var_4256 = 31192;
    var_4264 = 8;
    var_4272 = 32;
    pri = fun_02E0(var_4264, var_4256, var_4248, var_4240)
    var_4280 = 0;
    pri = fun_0350()
    var_4288 = 0;
    var_4296 = -4374024216485124166;
    var_4304 = 16;
    pri = fun_0638(var_4296, var_4288)
    var_4312 = 0;
    var_4320 = 6867508795578722623;
    var_4328 = 16;
    pri = fun_0638(var_4320, var_4312)
    var_4336 = 0;
    var_4344 = 6867509895090350834;
    var_4352 = 16;
    pri = fun_0638(var_4344, var_4336)
    var_4360 = 0;
    var_4368 = -2634777529138130236;
    var_4376 = 16;
    pri = fun_0638(var_4368, var_4360)
    var_4384 = 120;
    var_4392 = 8;
    pri = fun_0060(var_4384)
    var_4400 = 1;
    var_4408 = 1;
    OP_PUSH4_C 4627110847151131853, 4670074978689037107, 4670330505191332250, 8802641224559852288
    var_4416 = 48;
    pri = fun_05E0(var_4408, var_4400, var_4392, var_4384, var_4376, var_4368)
    var_4424 = 1;
    var_4432 = 1;
    OP_PUSH4_C 4631023349327409971, 4670125611199496192, 4670305931106451456, -7800673974562670051
    var_4440 = 48;
    pri = fun_05E0(var_4432, var_4424, var_4416, var_4408, var_4400, var_4392)
    var_4448 = 1;
    var_4456 = 1;
    OP_PUSH4_C -4583668702933050982, 4670221268711112704, 4670349361815748608, -7811456750994411148
    var_4464 = 48;
    pri = fun_05E0(var_4456, var_4448, var_4440, var_4432, var_4424, var_4416)
    var_4472 = 1;
    var_4480 = 1;
    OP_PUSH4_C -4583964251658597171, 4670197629211115520, 4670373551071559680, -130345246077277967
    var_4488 = 48;
    pri = fun_05E0(var_4480, var_4472, var_4464, var_4456, var_4448, var_4440)
    var_4496 = 0;
    var_4504 = 0;
    var_4512 = -130345246077277967;
    var_4520 = 24;
    pri = fun_7E40(var_4512, var_4504, var_4496)
    var_4528 = 1;
    var_4536 = 8;
    pri = fun_0060(var_4528)
    var_4544 = -130345246077277967;
    var_4552 = 8;
    pri = fun_0AA0(var_4544)
    var_4560 = 0;
    var_4568 = 0;
    var_4576 = -7811456750994411148;
    var_4584 = 24;
    pri = fun_7E40(var_4576, var_4568, var_4560)
    var_4592 = 1;
    var_4600 = 8;
    pri = fun_0060(var_4592)
    var_4608 = -7811456750994411148;
    var_4616 = 8;
    pri = fun_0AA0(var_4608)
    var_4624 = 1;
    var_4632 = 6;
    var_4640 = -7811456750994411148;
    var_4648 = 24;
    pri = fun_11E0(var_4640, var_4632, var_4624)
    var_4656 = 0;
    var_4664 = 4631558151783160218;
    var_4672 = 0;
    OP_PUSH5_C 4670229619501925663, 4660658948025740165, 4670337990116738335, 4670272670879711232, 4660680058648993464
    var_4680 = 4670326423254414131;
    var_4688 = 1;
    pri = EvCameraMove(var_4688, var_4680, var_4672, var_4664, var_4656, var_4648, var_4640, var_4632, var_4624, var_4616)
    var_4696 = 0;
    pri = fun_2168()
    var_4704 = 31456;
    var_4712 = 30;
    var_4720 = 16;
    pri = fun_0280(var_4712, var_4704)
    var_4728 = 0;
    pri = fun_0350()
    var_4736 = 0;
    var_4744 = 3;
    var_4752 = 0;
    var_4760 = 100;
    var_4768 = -1;
    OP_PUSH2_C -2279230504110246889, -7811456750994411148
    var_4776 = 56;
    pri = fun_1D60(var_4768, var_4760, var_4752, var_4744, var_4736, var_4728, var_4720)
    var_4784 = 1;
    var_4792 = 8;
    pri = fun_1F70(var_4784)
    var_4800 = 0;
    pri = fun_2030()
    var_4808 = 1;
    var_4816 = 0;
    var_4824 = 4641240890982006784;
    var_4832 = 0;
    var_4840 = 0;
    OP_PUSH4_C 4670305656228544512, 4670339466211098624, 4607182418800017408, -7811456750994411148
    var_4848 = 72;
    pri = fun_06E8(var_4840, var_4832, var_4824, var_4816, var_4808, var_4800, var_4792, var_4784, var_4776)
    var_4856 = 15;
    var_4864 = 8;
    pri = fun_0060(var_4856)
    var_4872 = 1;
    var_4880 = 0;
    var_4888 = 4641240890982006784;
    var_4896 = 0;
    var_4904 = 0;
    OP_PUSH4_C 4670294386234359808, 4670369702780862464, 4607182418800017408, -130345246077277967
    var_4912 = 72;
    pri = fun_06E8(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864, var_4856, var_4848, var_4840)
    var_4920 = 60;
    var_4928 = 8;
    pri = fun_0060(var_4920)
    var_4936 = 0;
    var_4944 = 4631558151783160218;
    var_4952 = 3;
    OP_PUSH5_C 4670212659535067218, 4660658948025740165, 4670307616108021023, 4670264201891398287, 4660680058648993464
    var_4960 = 4670296049245696819;
    var_4968 = 30;
    pri = EvCameraMove(var_4968, var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896)
    var_4976 = 0;
    var_4984 = 0;
    var_4992 = 0;
    var_5000 = 0;
    OP_PUSH2_C -7800673974562670051, 8802641224559852288
    var_5008 = 48;
    pri = fun_0870(var_5000, var_4992, var_4984, var_4976, var_4968, var_4960)
    var_5016 = 0;
    var_5024 = 0;
    var_5032 = 0;
    var_5040 = 0;
    OP_PUSH2_C 8802641224559852288, -7800673974562670051
    var_5048 = 48;
    pri = fun_0870(var_5040, var_5032, var_5024, var_5016, var_5008, var_5000)
    var_5056 = 0;
    var_5064 = 3;
    var_5072 = 0;
    var_5080 = 100;
    var_5088 = -1;
    OP_PUSH2_C -1701629903428582301, -7800673974562670051
    var_5096 = 56;
    pri = fun_1D60(var_5088, var_5080, var_5072, var_5064, var_5056, var_5048, var_5040)
    var_5104 = 1;
    var_5112 = 8;
    pri = fun_1F70(var_5104)
    var_5120 = 0;
    pri = fun_2030()
    var_5128 = 0;
    pri = fun_2168()
    var_5136 = 8802641224559852288;
    var_5144 = 8;
    pri = fun_08C8(var_5136)
    var_5152 = -7800673974562670051;
    var_5160 = 8;
    pri = fun_08C8(var_5152)
    var_5168 = -7811456750994411148;
    var_5176 = 8;
    pri = fun_08C8(var_5168)
    var_5184 = -130345246077277967;
    var_5192 = 8;
    pri = fun_08C8(var_5184)
    var_5200 = 0;
    var_5208 = -130345246077277967;
    var_5216 = 16;
    pri = fun_0638(var_5208, var_5200)
    var_5224 = 0;
    var_5232 = -7811456750994411148;
    var_5240 = 16;
    pri = fun_0638(var_5232, var_5224)
    var_5248 = 0;
    var_5256 = 0;
    var_5264 = 0;
    var_5272 = 180;
    pri = float(var_5272)
    var_5280 = pri;
    var_5288 = -7800673974562670051;
    var_5296 = 40;
    pri = fun_0820(var_5288, var_5280, var_5272, var_5264, var_5256)
    var_5304 = 0;
    var_5312 = 4633528476620134810;
    var_5320 = 0;
    OP_PUSH5_C 4670096875463104266, 4660692659052247777, 4670320972425519432, 4670192060184720835, 4660538265629475471
    var_5328 = 4670308514958776730;
    var_5336 = 1;
    pri = EvCameraMove(var_5336, var_5328, var_5320, var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264)
    var_5344 = 0;
    pri = fun_2168()
    var_5352 = -7800673974562670051;
    var_5360 = 8;
    pri = fun_08C8(var_5352)
    var_5368 = 0;
    var_5376 = 0;
    var_5384 = 0;
    var_5392 = 180;
    pri = float(var_5392)
    var_5400 = pri;
    var_5408 = 8802641224559852288;
    var_5416 = 40;
    pri = fun_0820(var_5408, var_5400, var_5392, var_5384, var_5376)
    var_5424 = 8802641224559852288;
    var_5432 = 8;
    pri = fun_08C8(var_5424)
    var_5440 = 0;
    var_5448 = 1;
    var_5456 = -7800673974562670051;
    var_5464 = 24;
    pri = fun_7E40(var_5456, var_5448, var_5440)
    var_5472 = 1;
    var_5480 = 8;
    pri = fun_0060(var_5472)
    var_5488 = -7800673974562670051;
    var_5496 = 8;
    pri = fun_0AA0(var_5488)
    var_5504 = 0;
    var_5512 = 3;
    var_5520 = 0;
    var_5528 = 100;
    var_5536 = -1;
    OP_PUSH2_C -1701628803916954090, -7800673974562670051
    var_5544 = 56;
    pri = fun_1D60(var_5536, var_5528, var_5520, var_5512, var_5504, var_5496, var_5488)
    var_5552 = 1;
    var_5560 = 8;
    pri = fun_1F70(var_5552)
    var_5568 = 0;
    pri = fun_2030()
    var_5576 = 30;
    var_5584 = 8;
    pri = fun_0060(var_5576)
    var_5592 = 1;
    var_5600 = 0;
    var_5608 = 31192;
    var_5616 = 8;
    var_5624 = 32;
    pri = fun_02E0(var_5616, var_5608, var_5600, var_5592)
    var_5632 = 0;
    pri = fun_0350()
    var_5640 = 0;
    var_5648 = 8802641224559852288;
    var_5656 = 16;
    pri = fun_0670(var_5648, var_5640)
    var_5664 = 0;
    var_5672 = -7800673974562670051;
    var_5680 = 16;
    pri = fun_0670(var_5672, var_5664)
    var_5688 = 0;
    var_5696 = -4374024216485124166;
    var_5704 = 16;
    pri = fun_0670(var_5696, var_5688)
    var_5712 = 0;
    var_5720 = -130345246077277967;
    var_5728 = 16;
    pri = fun_0670(var_5720, var_5712)
    var_5736 = 0;
    var_5744 = -7811456750994411148;
    var_5752 = 16;
    pri = fun_0670(var_5744, var_5736)
    var_5760 = 0;
    var_5768 = 6867508795578722623;
    var_5776 = 16;
    pri = fun_0670(var_5768, var_5760)
    var_5784 = 0;
    var_5792 = 6867509895090350834;
    var_5800 = 16;
    pri = fun_0670(var_5792, var_5784)
    var_5808 = 0;
    var_5816 = -2634777529138130236;
    var_5824 = 16;
    pri = fun_0670(var_5816, var_5808)
    var_5832 = 6867508795578722623;
    var_5840 = 8;
    pri = fun_08C8(var_5832)
    var_5848 = 6867509895090350834;
    var_5856 = 8;
    pri = fun_08C8(var_5848)
    pri = 0;
    return pri;
}
// fun_BBC0
fun_BBC0() {
    pri = 0;
    return pri;
}
// fun_BBD8
fun_BBD8() {
    var_8 = -4374024216485124166;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 6867508795578722623;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = 6867509895090350834;
    var_48 = 8;
    pri = fun_0588(var_40)
    var_56 = -2634777529138130236;
    var_64 = 8;
    pri = fun_0588(var_56)
    var_72 = -130345246077277967;
    var_80 = 8;
    pri = fun_0588(var_72)
    var_88 = -7811456750994411148;
    var_96 = 8;
    pri = fun_0588(var_88)
    var_104 = 1110;
    var_112 = 8;
    pri = fun_85D8(var_104)
    var_120 = 8003305528381221656;
    pri = VanishFlagReset(var_120)
    var_128 = 5238682974890618049;
    pri = VanishFlagReset(var_128)
    var_136 = 7506713967005848083;
    pri = FlagReset(var_136)
    var_144 = 5501743159805903958;
    pri = FlagSet(var_144)
    pri = 0;
    return pri;
}
// fun_BDA0
fun_BDA0() {
    OP_PUSH2_C 4770585615722954022, 2568210136421354264
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -848535220987542410, 8773846974321072392
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 5017058042070210478, 5080403365931010368
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -5470631991167534072, 389176679196178706
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -8813104658397942756, -2848597611423568554
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 9042979739254422337, -5686156348904088991
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 4743330730123423965;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_BF00
fun_BF00() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8770()
    var_16 = 0;
    pri = fun_87C8()
    var_24 = 0;
    pri = fun_8880()
    var_32 = 0;
    pri = fun_8898()
    var_40 = 0;
    pri = fun_BBC0()
    var_48 = 0;
    pri = fun_BBD8()
    var_56 = 0;
    pri = fun_BDA0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BFF0
fun_BFF0() {
    var_8 = 0;
    pri = fun_87C8()
    var_16 = 0;
    pri = fun_BBD8()
    pri = 0;
    return pri;
}
