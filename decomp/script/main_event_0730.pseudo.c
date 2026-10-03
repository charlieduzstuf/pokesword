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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
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
// fun_0468
fun_0468() {
    pri = arg_0;
    switch (pri) {
// switch_0610
        case default:
        {
// switch_0610_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0610_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
        case 0x1:
        {
// switch_0610_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
        case 0x2:
        {
// switch_0610_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
        case 0x3:
        {
// switch_0610_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
        case 0x4:
        {
// switch_0610_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
        case 0x5:
        {
// switch_0610_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
        case 0x6:
        {
// switch_0610_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0610_case_default
        }
    }
}
// fun_06A8
fun_06A8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0710
// lab_0710
    var_8 = 0;
    pri = fun_0858()
    OP_JNZ lab_0748
    OP_JUMP lab_0778
// lab_0748
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0710
// lab_0778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07A8
// lab_07A8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_07E8
    pri = 0;
    return pri;
// lab_07E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A8
    pri = 0;
    return pri;
}
// fun_0828
fun_0828() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0858
fun_0858() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0948
fun_0948() {
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
// fun_09C0
fun_09C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12D0(var_8)
    OP_JZER lab_0A90
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1300(var_24)
    OP_JNZ lab_0A90
    pri = 0;
    return pri;
// lab_0A90
    OP_JUMP lab_0AA0
// lab_0AA0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B00
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AA0
    pri = 0;
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B80
fun_0B80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C00
    pri = 0;
    return pri;
// lab_0C00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C40
// lab_0C40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12D0(var_8)
    OP_JNZ lab_0CC8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CB8
    pri = 0;
    return pri;
// lab_0CC8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D10
    pri = 0;
    return pri;
// lab_0D10
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE0(var_8)
    pri = 0;
    return pri;
// lab_0D70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C40
    pri = 0;
    return pri;
// lab_0CB8
    OP_JUMP lab_0D10
}
// fun_0DB8
fun_0DB8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E00
// lab_0E00
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E58
    pri = 0;
    return pri;
// lab_0E58
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E98
    pri = 0;
    return pri;
// lab_0E98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E00
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F68
    pri = 0;
    return pri;
// lab_0F68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12D0(var_8)
    OP_JZER lab_1098
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FC0
    OP_ZERO_P_S 64
// lab_1098
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10D0
    OP_CONST_S 64, 1
// lab_10D0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1108
    OP_CONST_S 72, 1
// lab_1108
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
// lab_0FC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE8
    OP_ZERO_P_S 72
// lab_0FE8
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
    OP_JUMP lab_11A8
// lab_11A8
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F8
fun_11F8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1300
fun_1300() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1330
fun_1330() {
    OP_JUMP lab_1348
// lab_1348
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB8(var_8)
    pri = 0;
    return pri;
// lab_13D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1468
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1458
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB8(var_8)
    pri = 0;
    return pri;
// lab_1468
    pri = 0;
    return pri;
// lab_1458
    OP_JUMP lab_1478
// lab_1478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1348
    pri = 0;
    return pri;
// lab_13C8
    OP_JUMP lab_1478
}
// fun_14B8
fun_14B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1330(var_40)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_15A0
fun_15A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_15D8
fun_15D8() {
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
// switch_1BF0
        case default:
        {
// switch_1BF0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C38
// lab_1C38
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
            OP_JNZ lab_1CE0
            var_88 = 0;
            pri = fun_1E98()
// lab_1CE0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BF0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17D8
                case default:
                {
// switch_17D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1850
// lab_1850
                    OP_JUMP lab_1C38
                }
                case 0x0:
                {
// switch_17D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1850
                }
                case 0x1:
                {
// switch_17D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1850
                }
                case 0x2:
                {
// switch_17D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1850
                }
                case 0x3:
                {
// switch_17D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1850
                }
                case 0x4:
                {
// switch_17D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1850
                }
                case 0x5:
                {
// switch_17D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1850
                }
            }
        }
        case 0x65:
        {
// switch_1BF0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1990
                case default:
                {
// switch_1990_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A08
// lab_1A08
                    OP_JUMP lab_1C38
                }
                case 0x0:
                {
// switch_1990_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A08
                }
                case 0x1:
                {
// switch_1990_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A08
                }
                case 0x2:
                {
// switch_1990_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A08
                }
                case 0x3:
                {
// switch_1990_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A08
                }
                case 0x4:
                {
// switch_1990_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A08
                }
                case 0x5:
                {
// switch_1990_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A08
                }
            }
        }
        case 0x66:
        {
// switch_1BF0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B48
                case default:
                {
// switch_1B48_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BC0
// lab_1BC0
                    OP_JUMP lab_1C38
                }
                case 0x0:
                {
// switch_1B48_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1BC0
                }
                case 0x1:
                {
// switch_1B48_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1BC0
                }
                case 0x2:
                {
// switch_1B48_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1BC0
                }
                case 0x3:
                {
// switch_1B48_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BC0
                }
                case 0x4:
                {
// switch_1B48_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1BC0
                }
                case 0x5:
                {
// switch_1B48_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1BC0
                }
            }
        }
    }
}
// fun_1CF8
fun_1CF8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B80(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1DA0
    pri = 1;
    return pri;
// lab_1DA0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1DE8
fun_1DE8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CF8(var_8)
    arg_2 = pri;
// lab_1E38
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_15D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    OP_JUMP lab_1EB0
// lab_1EB0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EF0
    pri = 0;
    return pri;
// lab_1EF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EB0
    pri = 0;
    return pri;
}
// fun_1F30
fun_1F30() {
    var_8 = 0;
    pri = fun_1E98()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FE0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1FE0
    pri = 0;
    return pri;
}
// fun_1FF0
fun_1FF0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2020
fun_2020() {
    OP_JUMP lab_2038
// lab_2038
    pri = EvCameraMoveWait_()
    OP_JZER lab_2070
    pri = 0;
    return pri;
// lab_2070
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2038
    pri = 0;
    return pri;
}
// fun_20B0
fun_20B0() {
    pri = arg_5;
    OP_JNZ lab_20E8
    var_8 = 0;
    pri = fun_11B8()
// lab_20E8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2138
    OP_CONST_S -8, -1
// lab_2138
    pri = arg_1;
    switch (pri) {
// switch_3BF0
        case default:
        {
// switch_3BF0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4098
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B80(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4098
            pri = 1;
            OP_JUMP lab_40A0
// lab_4098
            pri = 0;
// lab_40A0
            OP_JZER lab_40F0
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4348
// lab_40F0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4158
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4158
            pri = 1;
            OP_JUMP lab_4160
// lab_4158
            pri = 0;
// lab_4160
            OP_JZER lab_42E8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B80(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4348
// lab_42E8
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4348
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_43B8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_43B8
            var_8 = 0;
            pri = fun_11F8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3BF0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1:
        {
// switch_3BF0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2:
        {
// switch_3BF0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x3:
        {
// switch_3BF0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x4:
        {
// switch_3BF0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x5:
        {
// switch_3BF0_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B40(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EE0(var_40)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x6:
        {
// switch_3BF0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x7:
        {
// switch_3BF0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x8:
        {
// switch_3BF0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x9:
        {
// switch_3BF0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0xa:
        {
// switch_3BF0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0xb:
        {
// switch_3BF0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0xc:
        {
// switch_3BF0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0xd:
        {
// switch_3BF0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0xe:
        {
// switch_3BF0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0xf:
        {
// switch_3BF0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x10:
        {
// switch_3BF0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x11:
        {
// switch_3BF0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x12:
        {
// switch_3BF0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x13:
        {
// switch_3BF0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x14:
        {
// switch_3BF0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x15:
        {
// switch_3BF0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x16:
        {
// switch_3BF0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x17:
        {
// switch_3BF0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x18:
        {
// switch_3BF0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x19:
        {
// switch_3BF0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1a:
        {
// switch_3BF0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1b:
        {
// switch_3BF0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1c:
        {
// switch_3BF0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1d:
        {
// switch_3BF0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1e:
        {
// switch_3BF0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x1f:
        {
// switch_3BF0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x20:
        {
// switch_3BF0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x21:
        {
// switch_3BF0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x22:
        {
// switch_3BF0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x23:
        {
// switch_3BF0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x24:
        {
// switch_3BF0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x25:
        {
// switch_3BF0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x26:
        {
// switch_3BF0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x27:
        {
// switch_3BF0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x28:
        {
// switch_3BF0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x29:
        {
// switch_3BF0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2a:
        {
// switch_3BF0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2b:
        {
// switch_3BF0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2c:
        {
// switch_3BF0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2d:
        {
// switch_3BF0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2e:
        {
// switch_3BF0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x2f:
        {
// switch_3BF0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x30:
        {
// switch_3BF0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x31:
        {
// switch_3BF0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x32:
        {
// switch_3BF0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x33:
        {
// switch_3BF0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x34:
        {
// switch_3BF0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x35:
        {
// switch_3BF0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x36:
        {
// switch_3BF0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x37:
        {
// switch_3BF0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x38:
        {
// switch_3BF0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x39:
        {
// switch_3BF0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x3a:
        {
// switch_3BF0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x3b:
        {
// switch_3BF0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x3c:
        {
// switch_3BF0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x3d:
        {
// switch_3BF0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
        case 0x3e:
        {
// switch_3BF0_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B40(var_24, var_16, var_8)
            OP_JUMP switch_3BF0_case_default
        }
    }
}
// fun_43E8
fun_43E8() {
    pri = arg_4;
    OP_JNZ lab_4420
    var_8 = 0;
    pri = fun_11B8()
// lab_4420
    pri = arg_1;
    switch (pri) {
// switch_57F8
        case default:
        {
// switch_57F8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12D0(var_264)
            OP_JZER lab_5DC0
            pri = arg_3;
            switch (pri) {
// switch_5D68
                case default:
                {
// switch_5D68_case_default
                    OP_JUMP lab_6078
// lab_6078
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_60E8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_60E8
                    var_8 = 0;
                    pri = fun_11F8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5D68_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D68_case_default
                }
                case 0x2:
                {
// switch_5D68_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D68_case_default
                }
                case 0x3:
                {
// switch_5D68_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5D68_case_default
                }
            }
// lab_5DC0
            pri = arg_1;
            OP_JZER lab_5E10
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5E10
            pri = 0;
            OP_JUMP lab_5E18
// lab_5E10
            pri = 1;
// lab_5E18
            OP_JZER lab_5E80
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B80(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E80
            pri = 1;
            OP_JUMP lab_5E88
// lab_5E80
            pri = 0;
// lab_5E88
            OP_JZER lab_5ED8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6078
// lab_5ED8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5F40
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6078
// lab_5F40
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B80(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_57F8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1:
        {
// switch_57F8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2:
        {
// switch_57F8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x3:
        {
// switch_57F8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x4:
        {
// switch_57F8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x5:
        {
// switch_57F8_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B40(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EE0(var_40)
            OP_JUMP switch_57F8_case_default
        }
        case 0x6:
        {
// switch_57F8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x7:
        {
// switch_57F8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x8:
        {
// switch_57F8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x9:
        {
// switch_57F8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0xa:
        {
// switch_57F8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0xb:
        {
// switch_57F8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0xc:
        {
// switch_57F8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0xd:
        {
// switch_57F8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0xe:
        {
// switch_57F8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0xf:
        {
// switch_57F8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x10:
        {
// switch_57F8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x11:
        {
// switch_57F8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x12:
        {
// switch_57F8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x13:
        {
// switch_57F8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x14:
        {
// switch_57F8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x15:
        {
// switch_57F8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x16:
        {
// switch_57F8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x17:
        {
// switch_57F8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x18:
        {
// switch_57F8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x19:
        {
// switch_57F8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1a:
        {
// switch_57F8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1b:
        {
// switch_57F8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1c:
        {
// switch_57F8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1d:
        {
// switch_57F8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1e:
        {
// switch_57F8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x1f:
        {
// switch_57F8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x20:
        {
// switch_57F8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x21:
        {
// switch_57F8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x22:
        {
// switch_57F8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x23:
        {
// switch_57F8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x24:
        {
// switch_57F8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x25:
        {
// switch_57F8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x26:
        {
// switch_57F8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x27:
        {
// switch_57F8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x28:
        {
// switch_57F8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x29:
        {
// switch_57F8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2a:
        {
// switch_57F8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2b:
        {
// switch_57F8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2c:
        {
// switch_57F8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2d:
        {
// switch_57F8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2e:
        {
// switch_57F8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x2f:
        {
// switch_57F8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x30:
        {
// switch_57F8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x31:
        {
// switch_57F8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x32:
        {
// switch_57F8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x33:
        {
// switch_57F8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x34:
        {
// switch_57F8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x35:
        {
// switch_57F8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x36:
        {
// switch_57F8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x37:
        {
// switch_57F8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x38:
        {
// switch_57F8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x39:
        {
// switch_57F8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x3a:
        {
// switch_57F8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x3b:
        {
// switch_57F8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x3c:
        {
// switch_57F8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x3d:
        {
// switch_57F8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
        case 0x3e:
        {
// switch_57F8_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B40(var_24, var_16, var_8)
            OP_JUMP switch_57F8_case_default
        }
    }
}
// fun_6118
fun_6118() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6328(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    OP_JZER lab_6310
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6310
    pri = 0;
    return pri;
}
// fun_6328
fun_6328() {
    var_8 = arg_1;
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B40(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6370
fun_6370() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_63F8
// lab_63F8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6578
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6568
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_64B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_64B8
    pri = 0;
    OP_JUMP lab_64C0
// lab_6578
    pri = 0;
    return pri;
// lab_6568
    OP_JUMP lab_63F0
// lab_63F0
    OP_INC_P_S -936
// lab_64B8
    pri = 1;
// lab_64C0
    OP_JZER lab_6538
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6530
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6538
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6530
}
// fun_6598
fun_6598() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6630
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_1578()
// lab_6630
    pri = arg_4;
    OP_JZER lab_6668
    var_8 = 1;
    var_16 = 8;
    pri = fun_15A0(var_8)
// lab_6668
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_66C0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_66C0
    pri = 0;
    OP_JUMP lab_66C8
// lab_66C0
    pri = 1;
// lab_66C8
    OP_JZER lab_6790
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6790
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_6768
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14B8(var_32, var_24)
    OP_JUMP lab_6790
// lab_6790
    pri = arg_2;
    OP_JZER lab_6868
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_6838
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1290(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0910(var_40)
    OP_JUMP lab_6868
// lab_6868
    pri = arg_3;
    OP_JZER lab_68A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1540(var_8)
// lab_68A0
    pri = 0;
    return pri;
// lab_6838
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1290(var_16, var_8)
// lab_6768
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14B8(var_16, var_8)
}
// fun_68B0
fun_68B0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6370(var_24)
    pri = 0;
    return pri;
}
// fun_6918
fun_6918() {
    pri = g_mode;
    switch (pri) {
// switch_69D8
        case default:
        {
// switch_69D8_case_default
            pri = CommandNOP()
            OP_JUMP lab_6A20
// lab_6A20
            pri = 0;
            return pri;
        }
        case 0xaf41da2215921694:
        {
// switch_69D8_case_0xaf41da2215921694
            var_8 = 0;
            pri = fun_8AE8()
            OP_JUMP lab_6A20
        }
        case 0x0:
        {
// switch_69D8_case_0x0
            var_8 = 0;
            pri = fun_6A30()
            OP_JUMP lab_6A20
        }
        case 0x4b50981e63488610:
        {
// switch_69D8_case_0x4b50981e63488610
            var_8 = 0;
            pri = fun_8BF0()
            OP_JUMP lab_6A20
        }
    }
}
// fun_6A30
fun_6A30() {
    pri = 0;
    return pri;
}
// fun_6A48
fun_6A48() {
    pri = 0;
    return pri;
}
// fun_6A60
fun_6A60() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6598(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6AB8
fun_6AB8() {
    var_8 = 4670086111686298058;
    var_16 = 8;
    pri = fun_06A8(var_8)
    pri = 0;
    return pri;
}
// fun_6AF8
fun_6AF8() {
    var_8 = 0;
    pri = fun_06D8()
    pri = 0;
    return pri;
}
// fun_6B28
fun_6B28() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4667002855240100741, -4591974325808340664, 4659954710828149637, 4667425128178306253, 4646183767494906348
    var_32 = 4659955524466754191;
    var_40 = 50;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    var_56 = 2;
    var_64 = 4670086111686298058;
    var_72 = 24;
    pri = fun_6118(var_64, var_56, var_48)
    var_80 = 1;
    var_88 = 8;
    pri = fun_0060(var_80)
    var_96 = 4670086111686298058;
    var_104 = 8;
    pri = fun_0BB8(var_96)
    var_112 = 0;
    pri = fun_2020()
    var_120 = 30;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 1;
    var_144 = 1;
    OP_PUSH4_C -4588021009760439501, 4666956708737082982, 4661556127523772826, 8802641224559852288
    var_152 = 48;
    pri = fun_0880(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 8;
    pri = fun_15A0(var_160)
    OP_PUSH2_C 4625900504751276032, 4631431488043640422
    var_176 = 0;
    OP_PUSH5_C 4667015103799634166, 4636353078011426243, 4660312821765316280, 4667094708441485148, 4639506653281748255
    var_184 = 4660031500720233513;
    var_192 = 1;
    pri = EvCameraMove(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_200 = 0;
    pri = fun_2020()
    OP_PUSH2_C 4625900504751276032, 4631431488043640422
    var_208 = 3;
    OP_PUSH5_C 4667028072539283784, 4636353078011426243, 4660371535686239519, 4667107677181134766, 4639510523562678026
    var_216 = 4660090214641156751;
    var_224 = 20;
    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 0;
    pri = fun_2020()
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C 708813358149786108, 4670086111686298058
    var_280 = 56;
    pri = fun_1DE8(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1F30(var_288)
    var_304 = 0;
    pri = fun_1FF0()
    var_312 = 0;
    var_320 = 4631431488043640422;
    var_328 = 0;
    OP_PUSH5_C 4667063900125674865, 4631106384445539615, 4659780284303519252, 4667299552955297956, 4639923588091000914
    var_336 = 4660104750184875950;
    var_344 = 1;
    pri = EvCameraMove(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 0;
    pri = fun_2020()
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 8264590885065230852, 3307060284417082709
    var_400 = 56;
    pri = fun_1DE8(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1F30(var_408)
    var_424 = 0;
    pri = fun_1FF0()
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 100;
    var_464 = -1;
    OP_PUSH2_C 5325156547869334477, 3307052587835685232
    var_472 = 56;
    pri = fun_1DE8(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1F30(var_480)
    var_496 = 0;
    pri = fun_1FF0()
    var_504 = 1;
    var_512 = 0;
    var_520 = 4641240890982006784;
    var_528 = 0;
    var_536 = 0;
    OP_PUSH4_C 4667142086397526016, 4658413063584612352, 4611686018427387904, 3307060284417082709
    var_544 = 72;
    pri = fun_0948(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 1;
    var_560 = 0;
    var_568 = 4641240890982006784;
    var_576 = 0;
    var_584 = 0;
    OP_PUSH4_C 4667173972234731520, 4658525213770645504, 4611686018427387904, 3307052587835685232
    var_592 = 72;
    pri = fun_0948(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 3307052587835685232;
    var_608 = 8;
    pri = fun_0A18(var_600)
    var_616 = 3307060284417082709;
    var_624 = 8;
    pri = fun_0A18(var_616)
    var_632 = 0;
    var_640 = 3307060284417082709;
    var_648 = 16;
    pri = fun_08D8(var_640, var_632)
    var_656 = 0;
    var_664 = 3307052587835685232;
    var_672 = 16;
    pri = fun_08D8(var_664, var_656)
    var_680 = 0;
    var_688 = 0;
    var_696 = 4670086111686298058;
    var_704 = 24;
    pri = fun_6118(var_696, var_688, var_680)
    var_712 = 1;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 4670086111686298058;
    var_736 = 8;
    pri = fun_0BB8(var_728)
    var_744 = 0;
    var_752 = 3;
    var_760 = 0;
    var_768 = 100;
    var_776 = -1;
    OP_PUSH2_C 708816656684670741, 4670086111686298058
    var_784 = 56;
    pri = fun_1DE8(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_792 = 1;
    var_800 = 8;
    pri = fun_1F30(var_792)
    var_808 = 0;
    pri = fun_1FF0()
    var_816 = 0;
    var_824 = 3;
    var_832 = 0;
    var_840 = 100;
    var_848 = -1;
    OP_PUSH2_C -6666034813981928036, -7618857127012231868
    var_856 = 56;
    pri = fun_1DE8(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1F30(var_864)
    var_880 = 0;
    pri = fun_1FF0()
    var_888 = 1;
    var_896 = 0;
    var_904 = 60;
    pri = float(var_904)
    var_912 = pri;
    var_920 = -50;
    pri = float(var_920)
    var_928 = pri;
    var_936 = 1;
    OP_PUSH4_C 4666977599458010726, 4660645951798299853, 4611686018427387904, -8600099808306903038
    var_944 = 72;
    pri = fun_0948(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 1;
    var_960 = 0;
    var_968 = 60;
    pri = float(var_968)
    var_976 = pri;
    var_984 = 0;
    pri = float(var_984)
    var_992 = pri;
    var_1000 = 0;
    OP_PUSH4_C 4667036698208003686, 4660770416514564096, 4611686018427387904, 8802641224559852288
    var_1008 = 72;
    pri = fun_0948(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 15;
    var_1024 = 8;
    pri = fun_0060(var_1016)
    var_1032 = 0;
    var_1040 = 4631431488043640422;
    var_1048 = 0;
    OP_PUSH5_C 4667016566150099108, 4632449020084449444, 4660384158079726387, 4667184648492637225, 4639039052976687677
    var_1056 = 4660040714627674276;
    var_1064 = 1;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 0;
    pri = fun_2020()
    var_1080 = 0;
    var_1088 = 3;
    var_1096 = 0;
    var_1104 = 100;
    var_1112 = -1;
    OP_PUSH2_C 6272502008602921167, -8600099808306903038
    var_1120 = 56;
    pri = fun_1DE8(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1128 = 1;
    var_1136 = 8;
    pri = fun_1F30(var_1128)
    var_1144 = 0;
    pri = fun_1FF0()
    var_1152 = -8600099808306903038;
    var_1160 = 8;
    pri = fun_0A18(var_1152)
    var_1168 = 8802641224559852288;
    var_1176 = 8;
    pri = fun_0A18(var_1168)
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = 0;
    var_1208 = 0;
    OP_PUSH2_C 8802641224559852288, 4670086111686298058
    var_1216 = 48;
    pri = fun_09C0(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = 0;
    var_1248 = 0;
    OP_PUSH2_C 8802641224559852288, -7618857127012231868
    var_1256 = 48;
    pri = fun_09C0(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1264 = 4670086111686298058;
    var_1272 = 8;
    pri = fun_0A18(var_1264)
    var_1280 = -7618857127012231868;
    var_1288 = 8;
    pri = fun_0A18(var_1280)
    var_1296 = 0;
    var_1304 = 3;
    var_1312 = 0;
    var_1320 = 100;
    var_1328 = -1;
    OP_PUSH2_C 708808960103273264, 4670086111686298058
    var_1336 = 56;
    pri = fun_1DE8(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 1;
    var_1352 = 8;
    pri = fun_1F30(var_1344)
    var_1360 = 0;
    pri = fun_1FF0()
    var_1368 = 0;
    var_1376 = 4630277440639126733;
    var_1384 = 0;
    OP_PUSH5_C 4667080662180440310, 4639141087655745290, 4660296922827178639, 4667103911353809633, 4640344041337462456
    var_1392 = 4660482784272737894;
    var_1400 = 1;
    pri = EvCameraMove(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1408 = 0;
    pri = fun_2020()
    var_1416 = 0;
    var_1424 = 4630277440639126733;
    var_1432 = 0;
    OP_PUSH5_C 4667080662180440310, 4639141087655745290, 4660296922827178639, 4667093482486020178, 4639804313069619773
    var_1440 = 4660399397310887363;
    var_1448 = 400;
    pri = EvCameraMove(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1456 = 0;
    var_1464 = 1;
    var_1472 = 4670086111686298058;
    var_1480 = 24;
    pri = fun_6118(var_1472, var_1464, var_1456)
    var_1488 = 1;
    var_1496 = 8;
    pri = fun_0060(var_1488)
    var_1504 = 4670086111686298058;
    var_1512 = 8;
    pri = fun_0BB8(var_1504)
    var_1520 = 15;
    var_1528 = 8;
    pri = fun_0060(var_1520)
    var_1536 = 0;
    var_1544 = 3;
    var_1552 = 0;
    var_1560 = 100;
    var_1568 = -1;
    OP_PUSH2_C 708812258638157897, 4670086111686298058
    var_1576 = 56;
    pri = fun_1DE8(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1584 = 1;
    var_1592 = 8;
    pri = fun_1F30(var_1584)
    var_1600 = 0;
    pri = fun_1FF0()
    var_1608 = 15;
    var_1616 = 8;
    pri = fun_0060(var_1608)
    var_1624 = 0;
    var_1632 = 0;
    var_1640 = 4670086111686298058;
    var_1648 = 24;
    pri = fun_6118(var_1640, var_1632, var_1624)
    var_1656 = 1;
    var_1664 = 8;
    pri = fun_0060(var_1656)
    var_1672 = 4670086111686298058;
    var_1680 = 8;
    pri = fun_0BB8(var_1672)
    var_1688 = 0;
    var_1696 = 3;
    var_1704 = 0;
    var_1712 = 100;
    var_1720 = -1;
    OP_PUSH2_C 708811159126529686, 4670086111686298058
    var_1728 = 56;
    pri = fun_1DE8(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1736 = 1;
    var_1744 = 8;
    pri = fun_1F30(var_1736)
    var_1752 = 0;
    pri = fun_1FF0()
    var_1760 = 0;
    var_1768 = 4631431488043640422;
    var_1776 = 0;
    OP_PUSH5_C 4667016566150099108, 4632449020084449444, 4660384158079726387, 4667184648492637225, 4639039052976687677
    var_1784 = 4660040714627674276;
    var_1792 = 1;
    pri = EvCameraMove(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1800 = 0;
    pri = fun_2020()
    var_1808 = 0;
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = 0;
    OP_PUSH2_C -7618857127012231868, 4670086111686298058
    var_1840 = 48;
    pri = fun_09C0(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1848 = 0;
    var_1856 = 0;
    var_1864 = 0;
    var_1872 = 0;
    OP_PUSH2_C 4670086111686298058, -7618857127012231868
    var_1880 = 48;
    pri = fun_09C0(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1888 = 4670086111686298058;
    var_1896 = 8;
    pri = fun_0A18(var_1888)
    var_1904 = -7618857127012231868;
    var_1912 = 8;
    pri = fun_0A18(var_1904)
    var_1920 = 0;
    var_1928 = 3;
    var_1936 = 0;
    var_1944 = 100;
    var_1952 = -1;
    OP_PUSH2_C 708815557173042530, 4670086111686298058
    var_1960 = 56;
    pri = fun_1DE8(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1968 = 1;
    var_1976 = 8;
    pri = fun_1F30(var_1968)
    var_1984 = 0;
    pri = fun_1FF0()
    var_1992 = 0;
    var_2000 = 3;
    var_2008 = 0;
    var_2016 = 100;
    var_2024 = -1;
    OP_PUSH2_C -6666037013005184458, -7618857127012231868
    var_2032 = 56;
    pri = fun_1DE8(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2040 = 1;
    var_2048 = 8;
    pri = fun_1F30(var_2040)
    var_2056 = 0;
    pri = fun_1FF0()
    var_2064 = 0;
    var_2072 = 0;
    var_2080 = 0;
    var_2088 = 0;
    OP_PUSH2_C 8802641224559852288, 4670086111686298058
    var_2096 = 48;
    pri = fun_09C0(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2104 = 4670086111686298058;
    var_2112 = 8;
    pri = fun_0A18(var_2104)
    var_2120 = 0;
    var_2128 = 3;
    var_2136 = 0;
    var_2144 = 100;
    var_2152 = -1;
    OP_PUSH2_C 708814457661414319, 4670086111686298058
    var_2160 = 56;
    pri = fun_1DE8(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2168 = 1;
    var_2176 = 8;
    pri = fun_1F30(var_2168)
    var_2184 = 0;
    pri = fun_1FF0()
    var_2192 = 1;
    var_2200 = 0;
    var_2208 = 4641240890982006784;
    var_2216 = 0;
    var_2224 = 0;
    OP_PUSH4_C 4667151982002176000, 4659855622840254464, 4611686018427387904, 4670086111686298058
    var_2232 = 72;
    pri = fun_0948(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2240 = 1;
    var_2248 = 0;
    var_2256 = 30;
    pri = float(var_2256)
    var_2264 = pri;
    var_2272 = 0;
    pri = float(var_2272)
    var_2280 = pri;
    var_2288 = 0;
    OP_PUSH4_C 4667026637676609536, 4659675302933299200, 4607182418800017408, -7618857127012231868
    var_2296 = 72;
    pri = fun_0948(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2304 = 30;
    var_2312 = 8;
    pri = fun_0060(var_2304)
    var_2320 = 4670086111686298058;
    var_2328 = 8;
    pri = fun_0A18(var_2320)
    var_2336 = -7618857127012231868;
    var_2344 = 8;
    pri = fun_0A18(var_2336)
    var_2352 = 0;
    var_2360 = 4630938906834396774;
    var_2368 = 0;
    OP_PUSH5_C 4667004658439170294, 4635129365550176666, 4660747348760613356, 4667120250096598385, 4638888463864147476
    var_2376 = 4660475549486227128;
    var_2384 = 1;
    pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 0;
    pri = fun_2020()
    var_2400 = 0;
    var_2408 = -7618857127012231868;
    var_2416 = 16;
    pri = fun_08D8(var_2408, var_2400)
    var_2424 = 0;
    var_2432 = 4670086111686298058;
    var_2440 = 16;
    pri = fun_08D8(var_2432, var_2424)
    var_2448 = 0;
    var_2456 = 3;
    var_2464 = -8600099808306903038;
    var_2472 = 24;
    pri = fun_6118(var_2464, var_2456, var_2448)
    var_2480 = 1;
    var_2488 = 8;
    pri = fun_0060(var_2480)
    var_2496 = -8600099808306903038;
    var_2504 = 8;
    pri = fun_0BB8(var_2496)
    var_2512 = 15;
    var_2520 = 8;
    pri = fun_0060(var_2512)
    var_2528 = 1;
    var_2536 = 1;
    var_2544 = -1;
    OP_PUSH2_C -8600099808306903038, 8802641224559852288
    var_2552 = 40;
    pri = fun_1238(var_2544, var_2536, var_2528, var_2520, var_2512)
    var_2560 = 0;
    var_2568 = 3;
    var_2576 = 0;
    var_2584 = 100;
    var_2592 = -1;
    OP_PUSH2_C 6272500909091292956, -8600099808306903038
    var_2600 = 56;
    pri = fun_1DE8(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2608 = 1;
    var_2616 = 8;
    pri = fun_1F30(var_2608)
    var_2624 = 0;
    pri = fun_1FF0()
    var_2632 = 0;
    var_2640 = 0;
    var_2648 = -8600099808306903038;
    var_2656 = 24;
    pri = fun_6118(var_2648, var_2640, var_2632)
    var_2664 = -8600099808306903038;
    var_2672 = 8;
    pri = fun_0BB8(var_2664)
    var_2680 = 1;
    var_2688 = 1;
    var_2696 = -1;
    var_2704 = -1;
    var_2712 = 0;
    var_2720 = 8;
    var_2728 = -8600099808306903038;
    var_2736 = 56;
    pri = fun_20B0(var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2744 = 0;
    var_2752 = 3;
    var_2760 = 0;
    var_2768 = 100;
    var_2776 = -1;
    OP_PUSH2_C 6272507506161062222, -8600099808306903038
    var_2784 = 56;
    pri = fun_1DE8(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2792 = 23448;
    var_2800 = -8600099808306903038;
    var_2808 = 16;
    pri = fun_0DB8(var_2800, var_2792)
    var_2816 = 1;
    var_2824 = 8;
    pri = fun_1F30(var_2816)
    var_2832 = 0;
    pri = fun_1FF0()
    var_2840 = 1;
    var_2848 = 3;
    var_2856 = 0;
    var_2864 = 8;
    var_2872 = -8600099808306903038;
    var_2880 = 40;
    pri = fun_43E8(var_2872, var_2864, var_2856, var_2848, var_2840)
    var_2888 = -8600099808306903038;
    var_2896 = 8;
    pri = fun_0BB8(var_2888)
    var_2904 = -1;
    var_2912 = 8802641224559852288;
    var_2920 = 16;
    pri = fun_1290(var_2912, var_2904)
    var_2928 = 1;
    var_2936 = 0;
    var_2944 = 60;
    pri = float(var_2944)
    var_2952 = pri;
    var_2960 = 0;
    pri = float(var_2960)
    var_2968 = pri;
    var_2976 = 0;
    OP_PUSH4_C 4667290410516112998, 4656011290384898458, 4611686018427387904, -8600099808306903038
    var_2984 = 72;
    pri = fun_0948(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2992 = 1;
    var_3000 = 0;
    var_3008 = 60;
    pri = float(var_3008)
    var_3016 = pri;
    var_3024 = 0;
    pri = float(var_3024)
    var_3032 = pri;
    var_3040 = 0;
    OP_PUSH4_C 4667328178740527104, 4656326630319744614, 4611686018427387904, 8802641224559852288
    var_3048 = 72;
    pri = fun_0948(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976)
    var_3056 = 15;
    var_3064 = 8;
    pri = fun_0060(var_3056)
    var_3072 = 0;
    var_3080 = 4631431488043640422;
    var_3088 = 0;
    OP_PUSH5_C 4666896526968136663, 4626592933193984246, 4659887508677459968, 4667231773561003704, 4640953434662041027
    var_3096 = 4661231012930555740;
    var_3104 = 1;
    pri = EvCameraMove(var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032)
    var_3112 = 0;
    pri = fun_2020()
    var_3120 = 0;
    var_3128 = 4631431488043640422;
    var_3136 = 3;
    OP_PUSH5_C 4666953564133827543, 4634892222882297938, 4659628353786793165, 4667413050043075133, 4644127768711895450
    var_3144 = 4661351068605192602;
    var_3152 = 100;
    pri = EvCameraMove(var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
    var_3160 = 100;
    var_3168 = 8;
    pri = fun_0060(var_3160)
    var_3176 = 1;
    var_3184 = 0;
    var_3192 = 23400;
    var_3200 = 8;
    var_3208 = 32;
    pri = fun_0280(var_3200, var_3192, var_3184, var_3176)
    var_3216 = 0;
    pri = fun_02F0()
    var_3224 = 8802641224559852288;
    var_3232 = 8;
    pri = fun_0A18(var_3224)
    var_3240 = -8600099808306903038;
    var_3248 = 8;
    pri = fun_0A18(var_3240)
    pri = 0;
    return pri;
}
// fun_8890
fun_8890() {
    pri = 0;
    return pri;
}
// fun_88A8
fun_88A8() {
    var_8 = -8600099808306903038;
    var_16 = 8;
    pri = fun_0828(var_8)
    var_24 = 4670086111686298058;
    var_32 = 8;
    pri = fun_0828(var_24)
    var_40 = 3307060284417082709;
    var_48 = 8;
    pri = fun_0828(var_40)
    var_56 = 3307052587835685232;
    var_64 = 8;
    pri = fun_0828(var_56)
    var_72 = -7618857127012231868;
    var_80 = 8;
    pri = fun_0828(var_72)
    var_88 = 740;
    var_96 = 8;
    pri = fun_68B0(var_88)
    var_104 = 20;
    var_112 = 2308525758704345885;
    pri = WorkSet(var_112, var_104)
    var_120 = -7283748629432624885;
    pri = VanishFlagReset(var_120)
    var_128 = 5;
    var_136 = 8;
    pri = fun_0468(var_128)
    pri = 0;
    return pri;
}
// fun_8A20
fun_8A20() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 7100;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 47285;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 9023937420520670520, -7864768381803284336, -5819121163148788469
    var_80 = 80;
    pri = fun_03A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_8AE8
fun_8AE8() {
    var_8 = 0;
    pri = fun_6A48()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_6A60()
    var_24 = 0;
    pri = fun_6AB8()
    var_32 = 0;
    pri = fun_6AF8()
    var_40 = 0;
    pri = fun_6B28()
    var_48 = 0;
    pri = fun_8890()
    var_56 = 0;
    pri = fun_88A8()
    var_64 = 0;
    pri = fun_8A20()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8BF0
fun_8BF0() {
    var_8 = 0;
    pri = fun_6AB8()
    var_16 = 0;
    pri = fun_88A8()
    pri = 0;
    return pri;
}
