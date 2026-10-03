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
    pri = arg_0;
    OP_JZER lab_02F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_02F0
    var_8 = arg_1;
    pri = SetPlayerUniform(var_8)
    pri = CallReloadPlayer()
    pri = arg_0;
    OP_JZER lab_0380
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0390(var_24, var_16)
    var_40 = 0;
    pri = fun_0460()
// lab_0380
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03F0
fun_03F0() {
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
// fun_0460
fun_0460() {
    OP_JUMP lab_0478
// lab_0478
    pri = FadeWait_()
    OP_JZER lab_04B0
    pri = 0;
    return pri;
// lab_04B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_05D8
fun_05D8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06D0
fun_06D0() {
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
// fun_0748
fun_0748() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11B0(var_8)
    OP_JZER lab_0868
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11E0(var_24)
    OP_JNZ lab_0868
    pri = 0;
    return pri;
// lab_0868
    OP_JUMP lab_0878
// lab_0878
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08D8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0878
    pri = 0;
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A10
    pri = 0;
    return pri;
// lab_0A10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A50
// lab_0A50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11B0(var_8)
    OP_JNZ lab_0AD8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AC8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B20
    pri = 0;
    return pri;
// lab_0B20
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    pri = 0;
    return pri;
// lab_0B80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A50
    pri = 0;
    return pri;
// lab_0AC8
    OP_JUMP lab_0B20
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C00
fun_0C00() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C50
    pri = 0;
    return pri;
// lab_0C50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11B0(var_8)
    OP_JZER lab_0D80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CA8
    OP_ZERO_P_S 64
// lab_0D80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB8
    OP_CONST_S 64, 1
// lab_0DB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF0
    OP_CONST_S 72, 1
// lab_0DF0
    var_8 = 1;
    var_16 = 0;
    var_24 = 352;
    var_32 = -1;
    var_40 = -1;
    var_48 = 344;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 296;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 256;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_0CA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD0
    OP_ZERO_P_S 72
// lab_0CD0
    var_8 = 0;
    var_16 = 0;
    var_24 = 248;
    var_32 = -1;
    var_40 = -1;
    var_48 = 240;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 176;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 128;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0E90
// lab_0E90
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F80
fun_0F80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FC0
fun_0FC0() {
    var_8 = 440;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1000
fun_1000() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1000(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1078(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1040(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10B8(var_24)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1210
fun_1210() {
    OP_JUMP lab_1228
// lab_1228
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_12B8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_12A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    pri = 0;
    return pri;
// lab_12B8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1348
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1338
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    pri = 0;
    return pri;
// lab_1348
    pri = 0;
    return pri;
// lab_1338
    OP_JUMP lab_1358
// lab_1358
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1228
    pri = 0;
    return pri;
// lab_12A8
    OP_JUMP lab_1358
}
// fun_1398
fun_1398() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1210(var_40)
    pri = 0;
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1458
fun_1458() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1480
fun_1480() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
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
// switch_1AD0
        case default:
        {
// switch_1AD0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B18
// lab_1B18
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
            OP_JNZ lab_1BC0
            var_88 = 0;
            pri = fun_1D78()
// lab_1BC0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1AD0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_16B8
                case default:
                {
// switch_16B8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1730
// lab_1730
                    OP_JUMP lab_1B18
                }
                case 0x0:
                {
// switch_16B8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1730
                }
                case 0x1:
                {
// switch_16B8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1730
                }
                case 0x2:
                {
// switch_16B8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1730
                }
                case 0x3:
                {
// switch_16B8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1730
                }
                case 0x4:
                {
// switch_16B8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1730
                }
                case 0x5:
                {
// switch_16B8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1730
                }
            }
        }
        case 0x65:
        {
// switch_1AD0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1870
                case default:
                {
// switch_1870_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18E8
// lab_18E8
                    OP_JUMP lab_1B18
                }
                case 0x0:
                {
// switch_1870_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_18E8
                }
                case 0x1:
                {
// switch_1870_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_18E8
                }
                case 0x2:
                {
// switch_1870_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_18E8
                }
                case 0x3:
                {
// switch_1870_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18E8
                }
                case 0x4:
                {
// switch_1870_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_18E8
                }
                case 0x5:
                {
// switch_1870_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_18E8
                }
            }
        }
        case 0x66:
        {
// switch_1AD0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A28
                case default:
                {
// switch_1A28_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1AA0
// lab_1AA0
                    OP_JUMP lab_1B18
                }
                case 0x0:
                {
// switch_1A28_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1AA0
                }
                case 0x1:
                {
// switch_1A28_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1AA0
                }
                case 0x2:
                {
// switch_1A28_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1AA0
                }
                case 0x3:
                {
// switch_1A28_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1AA0
                }
                case 0x4:
                {
// switch_1A28_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1AA0
                }
                case 0x5:
                {
// switch_1A28_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1AA0
                }
            }
        }
    }
}
// fun_1BD8
fun_1BD8() {
    pri = 488;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 568;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0990(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C80
    pri = 1;
    return pri;
// lab_1C80
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1CC8
fun_1CC8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BD8(var_8)
    arg_2 = pri;
// lab_1D18
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_14B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D78
fun_1D78() {
    OP_JUMP lab_1D90
// lab_1D90
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DD0
    pri = 0;
    return pri;
// lab_1DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D90
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    var_8 = 0;
    pri = fun_1D78()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1EC0
    var_32 = 616;
    pri = SoundPostEvent(var_32)
// lab_1EC0
    pri = 0;
    return pri;
}
// fun_1ED0
fun_1ED0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1F30
// lab_1F30
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F70
    OP_JUMP lab_1FA0
// lab_1F70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F30
// lab_1FA0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
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
// fun_2058
fun_2058() {
    OP_JUMP lab_2070
// lab_2070
    pri = EvCameraMoveWait_()
    OP_JZER lab_20A8
    pri = 0;
    return pri;
// lab_20A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2070
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    pri = arg_6;
    OP_JNZ lab_2120
    var_8 = 0;
    pri = fun_0EA0()
// lab_2120
    pri = arg_1;
    switch (pri) {
// switch_3688
        case default:
        {
// switch_3688_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_39D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_39D8
            pri = 1;
            OP_JUMP lab_39E0
// lab_39D8
            pri = 0;
// lab_39E0
            OP_JZER lab_3B38
            var_16 = 8464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0990(var_24, var_16)
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
            var_64 = 8568;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3B98
// lab_3B38
            var_8 = 64;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3B98
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3BF8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3C58
// lab_3BF8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3C58
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3C58
            pri = arg_2;
            OP_JZER lab_3C98
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3C98
            var_8 = 0;
            pri = fun_0EE0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3688_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x1:
        {
// switch_3688_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x2:
        {
// switch_3688_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x3:
        {
// switch_3688_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x4:
        {
// switch_3688_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x5:
        {
// switch_3688_case_0x5
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
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0x6:
        {
// switch_3688_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0x7:
        {
// switch_3688_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0x8:
        {
// switch_3688_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x9:
        {
// switch_3688_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0xa:
        {
// switch_3688_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0xb:
        {
// switch_3688_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0xc:
        {
// switch_3688_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0xd:
        {
// switch_3688_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0xe:
        {
// switch_3688_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5944;
            var_72 = 5936;
            var_80 = 5928;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0xf:
        {
// switch_3688_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x10:
        {
// switch_3688_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x11:
        {
// switch_3688_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5968;
            var_72 = 5960;
            var_80 = 5952;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0x12:
        {
// switch_3688_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5992;
            var_72 = 5984;
            var_80 = 5976;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0x13:
        {
// switch_3688_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x14:
        {
// switch_3688_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x15:
        {
// switch_3688_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x16:
        {
// switch_3688_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x17:
        {
// switch_3688_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x18:
        {
// switch_3688_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x19:
        {
// switch_3688_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 6016;
            var_72 = 6008;
            var_80 = 6000;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3688_case_default
        }
        case 0x1a:
        {
// switch_3688_case_0x1a
            var_8 = 1;
            var_16 = 6024;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = 6160;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0918(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6240;
            var_88 = 6232;
            var_96 = 6224;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3688_case_default
        }
        case 0x1b:
        {
// switch_3688_case_0x1b
            var_8 = 3;
            var_16 = 6248;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = 6384;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0918(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6464;
            var_88 = 6456;
            var_96 = 6448;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3688_case_default
        }
        case 0x1c:
        {
// switch_3688_case_0x1c
            var_8 = 2;
            var_16 = 6472;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = 6608;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0918(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6688;
            var_88 = 6680;
            var_96 = 6672;
            alt = 792;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3688_case_default
        }
        case 0x1d:
        {
// switch_3688_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x1e:
        {
// switch_3688_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x1f:
        {
// switch_3688_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x20:
        {
// switch_3688_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7104;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x21:
        {
// switch_3688_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7224;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x22:
        {
// switch_3688_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x23:
        {
// switch_3688_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x24:
        {
// switch_3688_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x25:
        {
// switch_3688_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x26:
        {
// switch_3688_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x27:
        {
// switch_3688_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x28:
        {
// switch_3688_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
        case 0x29:
        {
// switch_3688_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3688_case_default
        }
    }
}
// fun_3CC8
fun_3CC8() {
    pri = arg_5;
    OP_JNZ lab_3D00
    var_8 = 0;
    pri = fun_0EA0()
// lab_3D00
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3D50
    OP_CONST_S -8, -1
// lab_3D50
    pri = arg_1;
    switch (pri) {
// switch_5808
        case default:
        {
// switch_5808_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5CB0
            var_520 = 28328;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0990(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5CB0
            pri = 1;
            OP_JUMP lab_5CB8
// lab_5CB0
            pri = 0;
// lab_5CB8
            OP_JZER lab_5D08
            var_8 = 64;
            var_16 = 28424;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5F60
// lab_5D08
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5D70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5D70
            pri = 1;
            OP_JUMP lab_5D78
// lab_5D70
            pri = 0;
// lab_5D78
            OP_JZER lab_5F00
            var_16 = 28600;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0990(var_24, var_16)
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
            var_176 = 28704;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28720;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8584;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5F60
// lab_5F00
            var_8 = 64;
            alt = 8584;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5F60
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5FD0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5FD0
            var_8 = 0;
            pri = fun_0EE0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5808_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1:
        {
// switch_5808_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2:
        {
// switch_5808_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3:
        {
// switch_5808_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x4:
        {
// switch_5808_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x5:
        {
// switch_5808_case_0x5
            var_8 = 2;
            var_16 = 18584;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BC8(var_40)
            OP_JUMP switch_5808_case_default
        }
        case 0x6:
        {
// switch_5808_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x7:
        {
// switch_5808_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x8:
        {
// switch_5808_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x9:
        {
// switch_5808_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xa:
        {
// switch_5808_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xb:
        {
// switch_5808_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xc:
        {
// switch_5808_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0xd:
        {
// switch_5808_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19056;
            var_80 = 18872;
            var_88 = 18680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0xe:
        {
// switch_5808_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19888;
            var_72 = 19680;
            var_80 = 19464;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0xf:
        {
// switch_5808_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20280;
            var_72 = 20160;
            var_80 = 20032;
            var_88 = 19896;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x10:
        {
// switch_5808_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20624;
            var_72 = 20520;
            var_80 = 20408;
            var_88 = 20288;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x11:
        {
// switch_5808_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20968;
            var_72 = 20864;
            var_80 = 20752;
            var_88 = 20632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x12:
        {
// switch_5808_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x13:
        {
// switch_5808_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x14:
        {
// switch_5808_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21528;
            var_72 = 21352;
            var_80 = 21168;
            var_88 = 20976;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x15:
        {
// switch_5808_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x16:
        {
// switch_5808_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x17:
        {
// switch_5808_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x18:
        {
// switch_5808_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x19:
        {
// switch_5808_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1a:
        {
// switch_5808_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1b:
        {
// switch_5808_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1c:
        {
// switch_5808_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21920;
            var_72 = 21800;
            var_80 = 21672;
            var_88 = 21536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x1d:
        {
// switch_5808_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x1e:
        {
// switch_5808_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22384;
            var_72 = 22240;
            var_80 = 22088;
            var_88 = 21928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x1f:
        {
// switch_5808_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x20:
        {
// switch_5808_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x21:
        {
// switch_5808_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x22:
        {
// switch_5808_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x23:
        {
// switch_5808_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x24:
        {
// switch_5808_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22752;
            var_72 = 22640;
            var_80 = 22520;
            var_88 = 22392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x25:
        {
// switch_5808_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23120;
            var_72 = 23008;
            var_80 = 22888;
            var_88 = 22760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x26:
        {
// switch_5808_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x27:
        {
// switch_5808_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x28:
        {
// switch_5808_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x29:
        {
// switch_5808_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23560;
            var_72 = 23424;
            var_80 = 23280;
            var_88 = 23128;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x2a:
        {
// switch_5808_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23952;
            var_72 = 23832;
            var_80 = 23704;
            var_88 = 23568;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x2b:
        {
// switch_5808_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24368;
            var_72 = 24240;
            var_80 = 24104;
            var_88 = 23960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x2c:
        {
// switch_5808_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24808;
            var_72 = 24672;
            var_80 = 24528;
            var_88 = 24376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x2d:
        {
// switch_5808_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x2e:
        {
// switch_5808_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25128;
            var_72 = 25032;
            var_80 = 24928;
            var_88 = 24816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x2f:
        {
// switch_5808_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25520;
            var_72 = 25400;
            var_80 = 25272;
            var_88 = 25136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x30:
        {
// switch_5808_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25912;
            var_72 = 25792;
            var_80 = 25664;
            var_88 = 25528;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x31:
        {
// switch_5808_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x32:
        {
// switch_5808_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x33:
        {
// switch_5808_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26304;
            var_72 = 26184;
            var_80 = 26056;
            var_88 = 25920;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x34:
        {
// switch_5808_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26672;
            var_72 = 26560;
            var_80 = 26440;
            var_88 = 26312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x35:
        {
// switch_5808_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27160;
            var_72 = 27008;
            var_80 = 26848;
            var_88 = 26680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x36:
        {
// switch_5808_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27528;
            var_72 = 27416;
            var_80 = 27296;
            var_88 = 27168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x37:
        {
// switch_5808_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x38:
        {
// switch_5808_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27896;
            var_72 = 27784;
            var_80 = 27664;
            var_88 = 27536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5808_case_default
        }
        case 0x39:
        {
// switch_5808_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3a:
        {
// switch_5808_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3b:
        {
// switch_5808_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3c:
        {
// switch_5808_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27904;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3d:
        {
// switch_5808_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28080;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
        case 0x3e:
        {
// switch_5808_case_0x3e
            var_8 = 4;
            var_16 = 28224;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            OP_JUMP switch_5808_case_default
        }
    }
}
// fun_6000
fun_6000() {
    pri = arg_4;
    OP_JNZ lab_6038
    var_8 = 0;
    pri = fun_0EA0()
// lab_6038
    pri = arg_1;
    switch (pri) {
// switch_7410
        case default:
        {
// switch_7410_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29296;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_11B0(var_264)
            OP_JZER lab_79D8
            pri = arg_3;
            switch (pri) {
// switch_7980
                case default:
                {
// switch_7980_case_default
                    OP_JUMP lab_7C90
// lab_7C90
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7D00
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7D00
                    var_8 = 0;
                    pri = fun_0EE0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7980_case_0x1
                    var_8 = 32;
                    var_16 = 29448;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7980_case_default
                }
                case 0x2:
                {
// switch_7980_case_0x2
                    var_8 = 32;
                    var_16 = 29552;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7980_case_default
                }
                case 0x3:
                {
// switch_7980_case_0x3
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7980_case_default
                }
            }
// lab_79D8
            pri = arg_1;
            OP_JZER lab_7A28
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7A28
            pri = 0;
            OP_JUMP lab_7A30
// lab_7A28
            pri = 1;
// lab_7A30
            OP_JZER lab_7A98
            var_8 = 29648;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0990(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7A98
            pri = 1;
            OP_JUMP lab_7AA0
// lab_7A98
            pri = 0;
// lab_7AA0
            OP_JZER lab_7AF0
            var_8 = 32;
            var_16 = 29744;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7C90
// lab_7AF0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7B58
            var_8 = 32;
            var_16 = 29904;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7C90
// lab_7B58
            var_16 = 30024;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0990(var_24, var_16)
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
            var_176 = 30128;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30144;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7410_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1:
        {
// switch_7410_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2:
        {
// switch_7410_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x3:
        {
// switch_7410_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x4:
        {
// switch_7410_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x5:
        {
// switch_7410_case_0x5
            var_8 = 1;
            var_16 = 28776;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BC8(var_40)
            OP_JUMP switch_7410_case_default
        }
        case 0x6:
        {
// switch_7410_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x7:
        {
// switch_7410_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x8:
        {
// switch_7410_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x9:
        {
// switch_7410_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0xa:
        {
// switch_7410_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0xb:
        {
// switch_7410_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0xc:
        {
// switch_7410_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0xd:
        {
// switch_7410_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0xe:
        {
// switch_7410_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0xf:
        {
// switch_7410_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x10:
        {
// switch_7410_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x11:
        {
// switch_7410_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x12:
        {
// switch_7410_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x13:
        {
// switch_7410_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x14:
        {
// switch_7410_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x15:
        {
// switch_7410_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x16:
        {
// switch_7410_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x17:
        {
// switch_7410_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x18:
        {
// switch_7410_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x19:
        {
// switch_7410_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1a:
        {
// switch_7410_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1b:
        {
// switch_7410_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1c:
        {
// switch_7410_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1d:
        {
// switch_7410_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1e:
        {
// switch_7410_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x1f:
        {
// switch_7410_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x20:
        {
// switch_7410_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x21:
        {
// switch_7410_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x22:
        {
// switch_7410_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x23:
        {
// switch_7410_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x24:
        {
// switch_7410_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x25:
        {
// switch_7410_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x26:
        {
// switch_7410_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x27:
        {
// switch_7410_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x28:
        {
// switch_7410_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x29:
        {
// switch_7410_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2a:
        {
// switch_7410_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2b:
        {
// switch_7410_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2c:
        {
// switch_7410_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2d:
        {
// switch_7410_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2e:
        {
// switch_7410_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x2f:
        {
// switch_7410_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x30:
        {
// switch_7410_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x31:
        {
// switch_7410_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x32:
        {
// switch_7410_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x33:
        {
// switch_7410_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x34:
        {
// switch_7410_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x35:
        {
// switch_7410_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x36:
        {
// switch_7410_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x37:
        {
// switch_7410_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x38:
        {
// switch_7410_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x39:
        {
// switch_7410_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x3a:
        {
// switch_7410_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x3b:
        {
// switch_7410_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x3c:
        {
// switch_7410_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28872;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x3d:
        {
// switch_7410_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29048;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
        case 0x3e:
        {
// switch_7410_case_0x3e
            var_8 = 3;
            var_16 = 29192;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            OP_JUMP switch_7410_case_default
        }
    }
}
// fun_7D30
fun_7D30() {
    pri = 30192;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7DB8
// lab_7DB8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7F38
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7F28
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7E78
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7E78
    pri = 0;
    OP_JUMP lab_7E80
// lab_7F38
    pri = 0;
    return pri;
// lab_7F28
    OP_JUMP lab_7DB0
// lab_7DB0
    OP_INC_P_S -936
// lab_7E78
    pri = 1;
// lab_7E80
    OP_JZER lab_7EF8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7EF0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7EF8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7EF0
}
// fun_7F58
fun_7F58() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7FF0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
    var_56 = 0;
    pri = fun_1458()
// lab_7FF0
    pri = arg_4;
    OP_JZER lab_8028
    var_8 = 1;
    var_16 = 8;
    pri = fun_1480(var_8)
// lab_8028
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8080
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8080
    pri = 0;
    OP_JUMP lab_8088
// lab_8080
    pri = 1;
// lab_8088
    OP_JZER lab_8150
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8150
    var_16 = 0;
    pri = fun_04F0()
    OP_JZER lab_8128
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1398(var_32, var_24)
    OP_JUMP lab_8150
// lab_8150
    pri = arg_2;
    OP_JZER lab_8228
    var_8 = 0;
    pri = fun_04F0()
    OP_JZER lab_81F8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F80(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0698(var_40)
    OP_JUMP lab_8228
// lab_8228
    pri = arg_3;
    OP_JZER lab_8260
    var_8 = 1;
    var_16 = 8;
    pri = fun_1420(var_8)
// lab_8260
    pri = 0;
    return pri;
// lab_81F8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F80(var_16, var_8)
// lab_8128
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1398(var_16, var_8)
}
// fun_8270
fun_8270() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7D30(var_24)
    pri = 0;
    return pri;
}
// fun_82D8
fun_82D8() {
    pri = g_mode;
    switch (pri) {
// switch_8398
        case default:
        {
// switch_8398_case_default
            pri = CommandNOP()
            OP_JUMP lab_83E0
// lab_83E0
            pri = 0;
            return pri;
        }
        case 0xe6f19f2748281112:
        {
// switch_8398_case_0xe6f19f2748281112
            var_8 = 0;
            pri = fun_ABB0()
            OP_JUMP lab_83E0
        }
        case 0x0:
        {
// switch_8398_case_0x0
            var_8 = 0;
            pri = fun_83F0()
            OP_JUMP lab_83E0
        }
        case 0x4bd892ad278e1fe:
        {
// switch_8398_case_0x4bd892ad278e1fe
            var_8 = 0;
            pri = fun_AAC0()
            OP_JUMP lab_83E0
        }
    }
}
// fun_83F0
fun_83F0() {
    pri = 0;
    return pri;
}
// fun_8408
fun_8408() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7F58(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8460
fun_8460() {
    pri = 0;
    return pri;
}
// fun_8478
fun_8478() {
    pri = 0;
    return pri;
}
// fun_8490
fun_8490() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4672201764030644224, 4671233918920294400, 8802641224559852288
    var_40 = 48;
    pri = fun_0608(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 4672262237170171904, 4671273776216801280, -1658347341221882014
    var_80 = 48;
    pri = fun_0608(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4640537203540230144, 4673039866768916480, 4671224298193551360, 4153083102117004023
    var_104 = 48;
    pri = fun_0608(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 6;
    var_120 = 6;
    var_128 = -1658347341221882014;
    var_136 = 24;
    pri = fun_10F0(var_128, var_120, var_112)
    var_144 = 0;
    var_152 = 4153083102117004023;
    var_160 = 16;
    pri = fun_0660(var_152, var_144)
    var_168 = 1;
    var_176 = 8;
    pri = fun_0060(var_168)
    var_184 = 1;
    var_192 = 0;
    var_200 = 50;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 0;
    var_224 = 0;
    OP_PUSH4_C 4672814741763129344, 4671233918920294400, 4611686018427387904, 8802641224559852288
    var_232 = 72;
    pri = fun_06D0(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 1;
    var_248 = 0;
    var_256 = 50;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 0;
    var_280 = 0;
    OP_PUSH4_C 4672806495425921024, 4671273776216801280, 4611686018427387904, -1658347341221882014
    var_288 = 72;
    pri = fun_06D0(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    var_304 = 4631952216750555136;
    var_312 = 0;
    OP_PUSH5_C 4672335695542023619, 4639105903283656458, 4671336250467491512, 4672237583370698097, 4642471992161395016
    var_320 = 4671387251314345902;
    var_328 = 1;
    pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 0;
    pri = fun_2058()
    var_344 = 0;
    var_352 = 4631952216750555136;
    var_360 = 3;
    OP_PUSH5_C 4672348315186731418, 4639105903283656458, 4671360535930570015, 4672250172778836132, 4642469529255348797
    var_368 = 4671411509289633710;
    var_376 = 80;
    pri = EvCameraMove(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 80;
    var_392 = 30;
    var_400 = 16;
    pri = fun_0390(var_392, var_384)
    var_408 = 0;
    pri = fun_0460()
    var_416 = -1658347341221882014;
    var_424 = 8;
    pri = fun_07F0(var_416)
    var_432 = 1;
    var_440 = 4153083102117004023;
    var_448 = 16;
    pri = fun_0660(var_440, var_432)
    var_456 = 0;
    var_464 = 4631952216750555136;
    var_472 = 0;
    OP_PUSH5_C 4672831855661615677, 4639094996128308920, 4671193632814252687, 4672780445246679941, 4638137629363771802
    var_480 = 4671294851105926676;
    var_488 = 1;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    pri = fun_2058()
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 2;
    OP_PUSH5_C 4672836759483475558, 4639094996128308920, 4671196120459310531, 4672785346319760753, 4638137629363771802
    var_528 = 4671297341499763589;
    var_536 = 90;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 180;
    pri = float(var_568)
    var_576 = pri;
    var_584 = -1658347341221882014;
    var_592 = 40;
    pri = fun_0748(var_584, var_576, var_568, var_560, var_552)
    var_600 = 8802641224559852288;
    var_608 = 8;
    pri = fun_07F0(var_600)
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    var_640 = 180;
    pri = float(var_640)
    var_648 = pri;
    var_656 = 8802641224559852288;
    var_664 = 40;
    pri = fun_0748(var_656, var_648, var_640, var_632, var_624)
    var_672 = -1658347341221882014;
    var_680 = 8;
    pri = fun_07F0(var_672)
    var_688 = 8802641224559852288;
    var_696 = 8;
    pri = fun_07F0(var_688)
    var_704 = 40;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 100;
    var_752 = -1;
    OP_PUSH2_C 8987059905922933559, 4153083102117004023
    var_760 = 56;
    pri = fun_1CC8(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 1;
    var_776 = 8;
    pri = fun_1E10(var_768)
    var_784 = 0;
    pri = fun_1ED0()
    var_792 = 0;
    var_800 = 4631952216750555136;
    var_808 = 3;
    OP_PUSH5_C 4672854211481787433, 4638191813296788603, 4671241024514188902, 4672743424690172723, 4637917375194495713
    var_816 = 4671266349015755653;
    var_824 = 30;
    pri = EvCameraMove(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 15;
    var_840 = 8;
    pri = fun_0060(var_832)
    var_848 = 1;
    var_856 = 0;
    var_864 = 50;
    pri = float(var_864)
    var_872 = pri;
    var_880 = 130;
    pri = float(var_880)
    var_888 = pri;
    var_896 = 1;
    OP_PUSH4_C 4672861196129402880, 4671224298193551360, 4611686018427387904, 4153083102117004023
    var_904 = 72;
    pri = fun_06D0(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_912 = -1658347341221882014;
    var_920 = 8;
    pri = fun_0FC0(var_912)
    var_928 = -1658347341221882014;
    var_936 = 8;
    pri = fun_1158(var_928)
    var_944 = 0;
    var_952 = 0;
    var_960 = 0;
    OP_PUSH2_C -4600595904344988058, 8802641224559852288
    var_968 = 40;
    pri = fun_0748(var_960, var_952, var_944, var_936, var_928)
    var_976 = 0;
    var_984 = 0;
    var_992 = 0;
    OP_PUSH2_C -4600370724363619533, -1658347341221882014
    var_1000 = 40;
    pri = fun_0748(var_992, var_984, var_976, var_968, var_960)
    var_1008 = 0;
    pri = fun_2058()
    var_1016 = 5;
    var_1024 = 8;
    pri = fun_0060(var_1016)
    var_1032 = 0;
    var_1040 = 4632754420434180506;
    var_1048 = 0;
    OP_PUSH5_C 4672832721527022551, 4634917555630201897, 4671222187131226030, 4672854183993996739, 4638336772909794591
    var_1056 = 4671307869323599544;
    var_1064 = 1;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 0;
    pri = fun_2058()
    var_1080 = 0;
    var_1088 = 4632754420434180506;
    var_1096 = 3;
    OP_PUSH5_C 4672823620319523635, 4634917555630201897, 4671224471366632735, 4672845082786497823, 4638336772909794591
    var_1104 = 4671310150810227180;
    var_1112 = 180;
    pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 8802641224559852288;
    var_1128 = 8;
    pri = fun_07F0(var_1120)
    var_1136 = -1658347341221882014;
    var_1144 = 8;
    pri = fun_07F0(var_1136)
    var_1152 = 4153083102117004023;
    var_1160 = 8;
    pri = fun_07F0(var_1152)
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 0;
    OP_PUSH2_C 4153083102117004023, 8802641224559852288
    var_1200 = 48;
    pri = fun_0798(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1208 = 0;
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 0;
    OP_PUSH2_C 4153083102117004023, -1658347341221882014
    var_1240 = 48;
    pri = fun_0798(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1248 = 8802641224559852288;
    var_1256 = 8;
    pri = fun_07F0(var_1248)
    var_1264 = -1658347341221882014;
    var_1272 = 8;
    pri = fun_07F0(var_1264)
    var_1280 = 0;
    var_1288 = 3;
    var_1296 = 0;
    var_1304 = 100;
    var_1312 = -1;
    OP_PUSH2_C 8987061005434561770, 4153083102117004023
    var_1320 = 56;
    pri = fun_1CC8(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 1;
    var_1336 = 8;
    pri = fun_1E10(var_1328)
    var_1344 = 0;
    pri = fun_1ED0()
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 0;
    var_1376 = 0;
    OP_PUSH2_C -1658347341221882014, 8802641224559852288
    var_1384 = 48;
    pri = fun_0798(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1392 = 8802641224559852288;
    var_1400 = 8;
    pri = fun_07F0(var_1392)
    var_1408 = 1;
    var_1416 = -1;
    var_1424 = -1;
    var_1432 = 3;
    var_1440 = 0;
    var_1448 = 1;
    var_1456 = -1658347341221882014;
    var_1464 = 56;
    pri = fun_20E8(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1472 = 0;
    var_1480 = 3;
    var_1488 = 0;
    var_1496 = 100;
    var_1504 = -1;
    OP_PUSH2_C 8616501673374927656, -1658347341221882014
    var_1512 = 56;
    pri = fun_1CC8(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1520 = 1;
    var_1528 = 8;
    pri = fun_1E10(var_1520)
    var_1536 = -1658347341221882014;
    var_1544 = 8;
    pri = fun_09C8(var_1536)
    var_1552 = 1;
    var_1560 = 1;
    var_1568 = 20;
    var_1576 = 4629137466983448576;
    var_1584 = 0;
    var_1592 = -1658347341221882014;
    var_1600 = 48;
    pri = fun_0F20(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1608 = 8;
    var_1616 = -1658347341221882014;
    var_1624 = 16;
    pri = fun_1000(var_1616, var_1608)
    var_1632 = 0;
    var_1640 = 3;
    var_1648 = 0;
    var_1656 = 100;
    var_1664 = -1;
    OP_PUSH2_C 8616504971909812289, -1658347341221882014
    var_1672 = 56;
    pri = fun_1CC8(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1680 = 1;
    var_1688 = 8;
    pri = fun_1E10(var_1680)
    var_1696 = 0;
    pri = fun_1ED0()
    var_1704 = -1658347341221882014;
    var_1712 = 8;
    pri = fun_1040(var_1704)
    var_1720 = 10;
    var_1728 = -1658347341221882014;
    var_1736 = 16;
    pri = fun_0F80(var_1728, var_1720)
    var_1744 = 1;
    var_1752 = 1;
    var_1760 = -1;
    var_1768 = -1;
    var_1776 = 0;
    var_1784 = 1;
    var_1792 = -1658347341221882014;
    var_1800 = 56;
    pri = fun_3CC8(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1808 = 0;
    var_1816 = 3;
    var_1824 = 0;
    var_1832 = 100;
    var_1840 = -1;
    OP_PUSH2_C 8616503872398184078, -1658347341221882014
    var_1848 = 56;
    pri = fun_1CC8(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1856 = 1;
    var_1864 = 8;
    pri = fun_1E10(var_1856)
    var_1872 = 0;
    pri = fun_1ED0()
    var_1880 = 1;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 1;
    var_1912 = -1658347341221882014;
    var_1920 = 40;
    pri = fun_6000(var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1928 = -1658347341221882014;
    var_1936 = 8;
    pri = fun_09C8(var_1928)
    var_1944 = 1;
    var_1952 = 0;
    var_1960 = 30;
    pri = float(var_1960)
    var_1968 = pri;
    var_1976 = 0;
    pri = float(var_1976)
    var_1984 = pri;
    var_1992 = 0;
    OP_PUSH4_C 4672959602420088832, 4671248762327269376, 4611686018427387904, -1658347341221882014
    var_2000 = 72;
    pri = fun_06D0(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
    var_2008 = 0;
    var_2016 = 4632754420434180506;
    var_2024 = 3;
    OP_PUSH5_C 4672841220751905260, 4634917555630201897, 4671220059576226284, 4672862685967658516, 4638326217598167941
    var_2032 = 4671305741768599798;
    var_2040 = 60;
    pri = EvCameraMove(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2048 = 40;
    var_2056 = 8;
    pri = fun_0060(var_2048)
    var_2064 = 0;
    var_2072 = 0;
    var_2080 = 0;
    var_2088 = 0;
    pri = float(var_2088)
    var_2096 = pri;
    var_2104 = 8802641224559852288;
    var_2112 = 40;
    pri = fun_0748(var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2120 = 0;
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = 0;
    pri = float(var_2144)
    var_2152 = pri;
    var_2160 = 4153083102117004023;
    var_2168 = 40;
    pri = fun_0748(var_2160, var_2152, var_2144, var_2136, var_2128)
    var_2176 = 8802641224559852288;
    var_2184 = 8;
    pri = fun_07F0(var_2176)
    var_2192 = 4153083102117004023;
    var_2200 = 8;
    pri = fun_07F0(var_2192)
    var_2208 = 0;
    var_2216 = 3;
    var_2224 = 0;
    var_2232 = 100;
    var_2240 = -1;
    OP_PUSH2_C 8987062104946189981, 4153083102117004023
    var_2248 = 56;
    pri = fun_1CC8(var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2256 = 1;
    var_2264 = 8;
    pri = fun_1E10(var_2256)
    var_2272 = 0;
    pri = fun_1ED0()
    var_2280 = 50;
    var_2288 = 8;
    pri = fun_0060(var_2280)
    var_2296 = -1658347341221882014;
    var_2304 = 8;
    pri = fun_07F0(var_2296)
    var_2312 = 0;
    var_2320 = 0;
    var_2328 = 0;
    var_2336 = 0;
    OP_PUSH2_C 4153083102117004023, 8802641224559852288
    var_2344 = 48;
    pri = fun_0798(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2352 = 0;
    var_2360 = 0;
    var_2368 = 0;
    var_2376 = 0;
    OP_PUSH2_C 8802641224559852288, 4153083102117004023
    var_2384 = 48;
    pri = fun_0798(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2392 = 8802641224559852288;
    var_2400 = 8;
    pri = fun_07F0(var_2392)
    var_2408 = 4153083102117004023;
    var_2416 = 8;
    pri = fun_07F0(var_2408)
    var_2424 = 0;
    var_2432 = 3;
    var_2440 = 0;
    var_2448 = 100;
    var_2456 = -1;
    OP_PUSH2_C 8987054408364792504, 4153083102117004023
    var_2464 = 56;
    pri = fun_1CC8(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2472 = 1;
    var_2480 = 8;
    pri = fun_1E10(var_2472)
    var_2488 = 0;
    var_2496 = -4747974851919398879;
    var_2504 = 0;
    var_2512 = 24;
    pri = fun_1F00(var_2504, var_2496, var_2488)
    var_2520 = 0;
    var_2528 = -4747978150454283512;
    var_2536 = 1;
    var_2544 = 24;
    pri = fun_1F00(var_2536, var_2528, var_2520)
    var_2560 = 0;
    var_2568 = 0;
    var_2576 = 0;
    var_2584 = 1;
    var_2592 = 32;
    pri = fun_1FE8(var_2584, var_2576, var_2568, var_2560)
    var_8 = pri;
    var_2600 = 1;
    var_2608 = -1;
    var_2616 = -1;
    var_2624 = 3;
    var_2632 = 0;
    var_2640 = 1;
    var_2648 = 4153083102117004023;
    var_2656 = 56;
    pri = fun_20E8(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600)
    pri = var_8;
    switch (pri) {
// switch_9CC0
        case default:
        {
// switch_9CC0_case_default
            var_8 = 4153083102117004023;
            var_16 = 8;
            pri = fun_09C8(var_8)
            var_24 = 1;
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 0;
            var_64 = 6;
            var_72 = 4153083102117004023;
            var_80 = 56;
            pri = fun_3CC8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 0;
            var_96 = 3;
            var_104 = 0;
            var_112 = 100;
            var_120 = -1;
            OP_PUSH2_C 8987057706899677137, 4153083102117004023
            var_128 = 56;
            pri = fun_1CC8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
            var_136 = 1;
            var_144 = 8;
            pri = fun_1E10(var_136)
            var_152 = 1;
            var_160 = 3;
            var_168 = 0;
            var_176 = 6;
            var_184 = 4153083102117004023;
            var_192 = 40;
            pri = fun_6000(var_184, var_176, var_168, var_160, var_152)
            var_200 = 0;
            var_208 = -4747977050942655301;
            var_216 = 0;
            var_224 = 24;
            pri = fun_1F00(var_216, var_208, var_200)
            var_232 = 0;
            var_240 = -4747971553384514246;
            var_248 = 1;
            var_256 = 24;
            pri = fun_1F00(var_248, var_240, var_232)
            var_264 = 0;
            var_272 = 0;
            var_280 = 0;
            var_288 = 1;
            var_296 = 32;
            pri = fun_1FE8(var_288, var_280, var_272, var_264)
            var_304 = 4153083102117004023;
            var_312 = 8;
            pri = fun_09C8(var_304)
            var_320 = 1;
            var_328 = -1;
            var_336 = -1;
            var_344 = 3;
            var_352 = 0;
            var_360 = 0;
            var_368 = 4153083102117004023;
            var_376 = 56;
            pri = fun_20E8(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
            var_384 = 0;
            var_392 = 3;
            var_400 = 0;
            var_408 = 100;
            var_416 = -1;
            OP_PUSH2_C 8987050010318279660, 4153083102117004023
            var_424 = 56;
            pri = fun_1CC8(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
            var_432 = 1;
            var_440 = 8;
            pri = fun_1E10(var_432)
            var_448 = 4153083102117004023;
            var_456 = 8;
            pri = fun_09C8(var_448)
            OP_CONST_S -16, 1
        }
        case 0x0:
        {
// switch_9CC0_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 8987055507876420715, 4153083102117004023
            var_48 = 56;
            pri = fun_1CC8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1E10(var_56)
            OP_JUMP switch_9CC0_case_default
        }
        case 0x1:
        {
// switch_9CC0_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C 8987056607388048926, 4153083102117004023
            var_48 = 56;
            pri = fun_1CC8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1E10(var_56)
            OP_JUMP switch_9CC0_case_default
        }
    }
}
// lab_A020
pri = var_16;
OP_JZER lab_A4B8
var_8 = 1;
var_16 = 1;
var_24 = -1;
var_32 = -1;
var_40 = 0;
var_48 = 2;
var_56 = 4153083102117004023;
var_64 = 56;
pri = fun_3CC8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 0;
var_80 = 3;
var_88 = 0;
var_96 = 100;
var_104 = -1;
OP_PUSH2_C 8987051109829907871, 4153083102117004023
var_112 = 56;
pri = fun_1CC8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
var_120 = 1;
var_128 = 8;
pri = fun_1E10(var_120)
var_136 = 1;
var_144 = 3;
var_152 = 0;
var_160 = 2;
var_168 = 4153083102117004023;
var_176 = 40;
pri = fun_6000(var_168, var_160, var_152, var_144, var_136)
var_184 = 0;
var_192 = -4747970453872886035;
var_200 = 0;
var_208 = 24;
pri = fun_1F00(var_200, var_192, var_184)
var_216 = 0;
var_224 = -4747973752407770668;
var_232 = 1;
var_240 = 24;
pri = fun_1F00(var_232, var_224, var_216)
var_248 = 0;
var_256 = -4747972652896142457;
var_264 = 2;
var_272 = 24;
pri = fun_1F00(var_264, var_256, var_248)
var_288 = 0;
var_296 = 0;
var_304 = 0;
var_312 = 1;
var_320 = 32;
pri = fun_1FE8(var_312, var_304, var_296, var_288)
var_24 = pri;
var_328 = 4153083102117004023;
var_336 = 8;
pri = fun_09C8(var_328)
pri = var_24;
switch (pri) {
// switch_A478
    case default:
    {
// switch_A478_case_default
        var_8 = 0;
        var_16 = 3;
        var_24 = 0;
        var_32 = 100;
        var_40 = -1;
        OP_PUSH2_C 8988050565899762445, 4153083102117004023
        var_48 = 56;
        pri = fun_1CC8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
        var_56 = 1;
        var_64 = 8;
        pri = fun_1E10(var_56)
        var_72 = 0;
        pri = fun_1ED0()
        OP_JUMP lab_A4A0
// lab_A4A0
        OP_JUMP lab_A020
    }
    case 0x0:
    {
// switch_A478_case_0x0
        var_8 = 1;
        var_16 = 1;
        var_24 = -1;
        var_32 = -1;
        var_40 = 0;
        var_48 = 8;
        var_56 = 4153083102117004023;
        var_64 = 56;
        pri = fun_3CC8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
        var_72 = 0;
        var_80 = 3;
        var_88 = 0;
        var_96 = 100;
        var_104 = -1;
        OP_PUSH2_C 8988049466388134234, 4153083102117004023
        var_112 = 56;
        pri = fun_1CC8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
        var_120 = 1;
        var_128 = 8;
        pri = fun_1E10(var_120)
        var_136 = 1;
        var_144 = 3;
        var_152 = 0;
        var_160 = 8;
        var_168 = 4153083102117004023;
        var_176 = 40;
        pri = fun_6000(var_168, var_160, var_152, var_144, var_136)
        var_184 = 4153083102117004023;
        var_192 = 8;
        pri = fun_09C8(var_184)
        OP_ZERO_P_S -16
        OP_JUMP lab_A4A0
    }
}
// lab_A4B8
var_8 = 1;
var_16 = -1;
var_24 = -1;
var_32 = 3;
var_40 = 0;
var_48 = 0;
var_56 = 4153083102117004023;
var_64 = 56;
pri = fun_20E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 0;
var_80 = 3;
var_88 = 0;
var_96 = 100;
var_104 = -1;
OP_PUSH2_C 8988048366876506023, 4153083102117004023
var_112 = 56;
pri = fun_1CC8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
var_120 = 4153083102117004023;
var_128 = 8;
pri = fun_09C8(var_120)
var_136 = 1;
var_144 = 8;
pri = fun_1E10(var_136)
var_152 = 0;
pri = fun_1ED0()
var_160 = 1;
var_168 = 0;
var_176 = 30;
pri = float(var_176)
var_184 = pri;
var_192 = 130;
pri = float(var_192)
var_200 = pri;
var_208 = 1;
OP_PUSH4_C 4672954379739856896, 4671224298193551360, 4611686018427387904, 4153083102117004023
var_216 = 72;
pri = fun_06D0(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
var_224 = 20;
var_232 = 8;
pri = fun_0060(var_224)
var_240 = 1;
var_248 = 0;
var_256 = 30;
pri = float(var_256)
var_264 = pri;
var_272 = 130;
pri = float(var_272)
var_280 = pri;
var_288 = 1;
OP_PUSH4_C 4672934093750324429, 4671237464845293978, 4611686018427387904, 8802641224559852288
var_296 = 72;
pri = fun_06D0(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
var_304 = 50;
var_312 = 8;
pri = fun_0060(var_304)
var_320 = 1;
var_328 = 0;
var_336 = 32;
var_344 = 30;
var_352 = 32;
pri = fun_03F0(var_344, var_336, var_328, var_320)
var_360 = 0;
pri = fun_0460()
var_368 = 8802641224559852288;
var_376 = 8;
pri = fun_07F0(var_368)
var_384 = 4153083102117004023;
var_392 = 8;
pri = fun_07F0(var_384)
var_400 = 3;
var_408 = 1;
pri = EvCameraEnd(var_408, var_400)
pri = 0;
return pri;
// fun_A838
fun_A838() {
    pri = 0;
    return pri;
}
// fun_A850
fun_A850() {
    var_8 = 4153083102117004023;
    var_16 = 8;
    pri = fun_05D8(var_8)
    var_24 = -1658347341221882014;
    var_32 = 8;
    pri = fun_05D8(var_24)
    var_40 = 1820;
    var_48 = 8;
    pri = fun_8270(var_40)
    var_56 = 3235464708911765657;
    pri = FlagReset(var_56)
    var_64 = -5634459638772040499;
    pri = FlagReset(var_64)
    var_72 = 7750031198002937679;
    pri = FlagSet(var_72)
    var_80 = -926766122763761482;
    pri = FlagSet(var_80)
    var_88 = -8327649383280945428;
    pri = FlagReset(var_88)
    var_96 = 1;
    var_104 = 5073803717698377601;
    pri = WorkSet(var_104, var_96)
    pri = 0;
    return pri;
}
// fun_A9D0
fun_A9D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 54459;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 19644;
    pri = float(var_88)
    var_96 = pri;
    OP_PUSH3_C 115789295882128190, -7332432130569991359, 340728941762748917
    var_104 = 80;
    pri = fun_0518(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_AAC0
fun_AAC0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8408()
    var_16 = 0;
    pri = fun_8460()
    var_24 = 0;
    pri = fun_8478()
    var_32 = 0;
    pri = fun_8490()
    var_40 = 0;
    pri = fun_A838()
    var_48 = 0;
    pri = fun_A850()
    var_56 = 0;
    pri = fun_A9D0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_ABB0
fun_ABB0() {
    var_8 = 0;
    pri = fun_8460()
    var_16 = 0;
    pri = fun_A850()
    pri = 0;
    return pri;
}
