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
    var_8 = arg_1;
    pri = float(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = floatadd(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00F8
    pri = 0;
    return pri;
// lab_00F8
    OP_ZERO_P_S -8
    OP_JUMP lab_0120
// lab_0120
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0118
// lab_0178
    pri = 0;
    return pri;
// lab_0118
    OP_INC_P_S -8
}
// fun_0190
fun_0190() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
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
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_04C8
// lab_04C8
    var_8 = 0;
    pri = fun_05E0()
    OP_JNZ lab_0500
    OP_JUMP lab_0530
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04C8
// lab_0530
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_0560
// lab_0560
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05A0
    pri = 0;
    return pri;
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0560
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0608
fun_0608() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionX_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0728
fun_0728() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionY_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionY_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0848
fun_0848() {
    var_16 = arg_0;
    pri = GetFieldObjectPositionZ_(var_16)
    var_8 = pri;
    var_32 = arg_1;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    pri = var_8;
    var_40 = pri;
    OP_PUSH2_S -8, -16
    pri = floatsub(var_40, var_32)
    OP_MOVE_ALT 
    pri = arg_2;
    var_48 = pri;
    var_56 = alt;
    pri = floatmul(var_56, var_48)
    OP_POP_ALT 
    var_64 = pri;
    var_72 = alt;
    pri = floatadd(var_72, var_64)
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09A0
fun_09A0() {
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
// fun_0A60
fun_0A60() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1278(var_8)
    OP_JZER lab_0B80
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12A8(var_24)
    OP_JNZ lab_0B80
    pri = 0;
    return pri;
// lab_0B80
    OP_JUMP lab_0B90
// lab_0B90
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0BF0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0BF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B90
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D28
    pri = 0;
    return pri;
// lab_0D28
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D68
// lab_0D68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1278(var_8)
    OP_JNZ lab_0DF0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DE0
    pri = 0;
    return pri;
// lab_0DF0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E38
    pri = 0;
    return pri;
// lab_0E38
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EE0(var_8)
    pri = 0;
    return pri;
// lab_0E98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D68
    pri = 0;
    return pri;
// lab_0DE0
    OP_JUMP lab_0E38
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
    pri = fun_1278(var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1278
fun_1278() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12D8
fun_12D8() {
    OP_JUMP lab_12F0
// lab_12F0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1380
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1370
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CE0(var_8)
    pri = 0;
    return pri;
// lab_1380
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1410
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1400
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CE0(var_8)
    pri = 0;
    return pri;
// lab_1410
    pri = 0;
    return pri;
// lab_1400
    OP_JUMP lab_1420
// lab_1420
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12F0
    pri = 0;
    return pri;
// lab_1370
    OP_JUMP lab_1420
}
// fun_1460
fun_1460() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CE0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12D8(var_40)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1548
fun_1548() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
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
// switch_1B98
        case default:
        {
// switch_1B98_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BE0
// lab_1BE0
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
            OP_JNZ lab_1C88
            var_88 = 0;
            pri = fun_1E40()
// lab_1C88
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B98_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1780
                case default:
                {
// switch_1780_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17F8
// lab_17F8
                    OP_JUMP lab_1BE0
                }
                case 0x0:
                {
// switch_1780_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17F8
                }
                case 0x1:
                {
// switch_1780_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17F8
                }
                case 0x2:
                {
// switch_1780_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17F8
                }
                case 0x3:
                {
// switch_1780_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17F8
                }
                case 0x4:
                {
// switch_1780_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17F8
                }
                case 0x5:
                {
// switch_1780_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17F8
                }
            }
        }
        case 0x65:
        {
// switch_1B98_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1938
                case default:
                {
// switch_1938_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19B0
// lab_19B0
                    OP_JUMP lab_1BE0
                }
                case 0x0:
                {
// switch_1938_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19B0
                }
                case 0x1:
                {
// switch_1938_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19B0
                }
                case 0x2:
                {
// switch_1938_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19B0
                }
                case 0x3:
                {
// switch_1938_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19B0
                }
                case 0x4:
                {
// switch_1938_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19B0
                }
                case 0x5:
                {
// switch_1938_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19B0
                }
            }
        }
        case 0x66:
        {
// switch_1B98_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AF0
                case default:
                {
// switch_1AF0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B68
// lab_1B68
                    OP_JUMP lab_1BE0
                }
                case 0x0:
                {
// switch_1AF0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B68
                }
                case 0x1:
                {
// switch_1AF0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B68
                }
                case 0x2:
                {
// switch_1AF0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B68
                }
                case 0x3:
                {
// switch_1AF0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B68
                }
                case 0x4:
                {
// switch_1AF0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B68
                }
                case 0x5:
                {
// switch_1AF0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B68
                }
            }
        }
    }
}
// fun_1CA0
fun_1CA0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CA8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D48
    pri = 1;
    return pri;
// lab_1D48
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D90
fun_1D90() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CA0(var_8)
    arg_2 = pri;
// lab_1DE0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1580(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E40
fun_1E40() {
    OP_JUMP lab_1E58
// lab_1E58
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E98
    pri = 0;
    return pri;
// lab_1E98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E58
    pri = 0;
    return pri;
}
// fun_1ED8
fun_1ED8() {
    var_8 = 0;
    pri = fun_1E40()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F88
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F88
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FC8
fun_1FC8() {
    OP_JUMP lab_1FE0
// lab_1FE0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2018
    pri = 0;
    return pri;
// lab_2018
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FE0
    pri = 0;
    return pri;
}
// fun_2058
fun_2058() {
    var_16 = arg_4;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 24;
    pri = fun_0608(var_32, var_24, var_16)
    var_8 = pri;
    var_56 = arg_4;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_0728(var_72, var_64, var_56)
    OP_MOVE_ALT 
    pri = arg_6;
    var_88 = pri;
    var_96 = alt;
    var_104 = 16;
    pri = fun_0060(var_96, var_88)
    var_16 = pri;
    var_120 = arg_4;
    var_128 = arg_2;
    var_136 = arg_1;
    var_144 = 24;
    pri = fun_0848(var_136, var_128, var_120)
    var_24 = pri;
    var_152 = arg_5;
    var_160 = arg_3;
    var_168 = var_24;
    var_176 = var_16;
    var_184 = var_8;
    var_192 = arg_0;
    pri = EvCameraMoveOffsetLookAt(var_192, var_184, var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    pri = arg_6;
    OP_JNZ lab_21F0
    var_8 = 0;
    pri = fun_11B8()
// lab_21F0
    pri = arg_1;
    switch (pri) {
// switch_3758
        case default:
        {
// switch_3758_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3AA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3AA8
            pri = 1;
            OP_JUMP lab_3AB0
// lab_3AA8
            pri = 0;
// lab_3AB0
            OP_JZER lab_3C08
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CA8(var_24, var_16)
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
            OP_JUMP lab_3C68
// lab_3C08
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_3C68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3CC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D28
// lab_3CC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D28
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D28
            pri = arg_2;
            OP_JZER lab_3D68
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3D68
            var_8 = 0;
            pri = fun_11F8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3758_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x1:
        {
// switch_3758_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x2:
        {
// switch_3758_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x3:
        {
// switch_3758_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x4:
        {
// switch_3758_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x5:
        {
// switch_3758_case_0x5
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0x6:
        {
// switch_3758_case_0x6
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0x7:
        {
// switch_3758_case_0x7
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0x8:
        {
// switch_3758_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x9:
        {
// switch_3758_case_0x9
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0xa:
        {
// switch_3758_case_0xa
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0xb:
        {
// switch_3758_case_0xb
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0xc:
        {
// switch_3758_case_0xc
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0xd:
        {
// switch_3758_case_0xd
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0xe:
        {
// switch_3758_case_0xe
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0xf:
        {
// switch_3758_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x10:
        {
// switch_3758_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x11:
        {
// switch_3758_case_0x11
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0x12:
        {
// switch_3758_case_0x12
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0x13:
        {
// switch_3758_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x14:
        {
// switch_3758_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x15:
        {
// switch_3758_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x16:
        {
// switch_3758_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x17:
        {
// switch_3758_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x18:
        {
// switch_3758_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x19:
        {
// switch_3758_case_0x19
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
            pri = fun_0F18(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3758_case_default
        }
        case 0x1a:
        {
// switch_3758_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C68(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C30(var_48, var_40)
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
            pri = fun_0F18(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3758_case_default
        }
        case 0x1b:
        {
// switch_3758_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C68(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C30(var_48, var_40)
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
            pri = fun_0F18(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3758_case_default
        }
        case 0x1c:
        {
// switch_3758_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C68(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C30(var_48, var_40)
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
            pri = fun_0F18(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3758_case_default
        }
        case 0x1d:
        {
// switch_3758_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x1e:
        {
// switch_3758_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x1f:
        {
// switch_3758_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x20:
        {
// switch_3758_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x21:
        {
// switch_3758_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x22:
        {
// switch_3758_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x23:
        {
// switch_3758_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x24:
        {
// switch_3758_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x25:
        {
// switch_3758_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x26:
        {
// switch_3758_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x27:
        {
// switch_3758_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x28:
        {
// switch_3758_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
        case 0x29:
        {
// switch_3758_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3758_case_default
        }
    }
}
// fun_3D98
fun_3D98() {
    pri = 8440;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3E20
// lab_3E20
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3FA0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3F90
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3EE0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3EE0
    pri = 0;
    OP_JUMP lab_3EE8
// lab_3FA0
    pri = 0;
    return pri;
// lab_3F90
    OP_JUMP lab_3E18
// lab_3E18
    OP_INC_P_S -936
// lab_3EE0
    pri = 1;
// lab_3EE8
    OP_JZER lab_3F60
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3F58
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3F60
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3F58
}
// fun_3FC0
fun_3FC0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4058
    var_8 = 1;
    var_16 = 0;
    var_24 = 9360;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1520()
// lab_4058
    pri = arg_4;
    OP_JZER lab_4090
    var_8 = 1;
    var_16 = 8;
    pri = fun_1548(var_8)
// lab_4090
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_40E8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_40E8
    pri = 0;
    OP_JUMP lab_40F0
// lab_40E8
    pri = 1;
// lab_40F0
    OP_JZER lab_41B8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_41B8
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_4190
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1460(var_32, var_24)
    OP_JUMP lab_41B8
// lab_41B8
    pri = arg_2;
    OP_JZER lab_4290
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_4260
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1238(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0968(var_40)
    OP_JUMP lab_4290
// lab_4290
    pri = arg_3;
    OP_JZER lab_42C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_14E8(var_8)
// lab_42C8
    pri = 0;
    return pri;
// lab_4260
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1238(var_16, var_8)
// lab_4190
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1460(var_16, var_8)
}
// fun_42D8
fun_42D8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_3D98(var_24)
    pri = 0;
    return pri;
}
// fun_4340
fun_4340() {
    pri = g_mode;
    switch (pri) {
// switch_4400
        case default:
        {
// switch_4400_case_default
            pri = CommandNOP()
            OP_JUMP lab_4448
// lab_4448
            pri = 0;
            return pri;
        }
        case 0xbfcc2d221eb78164:
        {
// switch_4400_case_0xbfcc2d221eb78164
            var_8 = 0;
            pri = fun_4D50()
            OP_JUMP lab_4448
        }
        case 0x0:
        {
// switch_4400_case_0x0
            var_8 = 0;
            pri = fun_4458()
            OP_JUMP lab_4448
        }
        case 0x5d8deb1e6ddf8560:
        {
// switch_4400_case_0x5d8deb1e6ddf8560
            var_8 = 0;
            pri = fun_4E40()
            OP_JUMP lab_4448
        }
    }
}
// fun_4458
fun_4458() {
    pri = 0;
    return pri;
}
// fun_4470
fun_4470() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3FC0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_44C8
fun_44C8() {
    pri = 0;
    return pri;
}
// fun_44E0
fun_44E0() {
    pri = 0;
    return pri;
}
// fun_44F8
fun_44F8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C 8802641224559852288, -3048576201801985796
    var_56 = 48;
    pri = fun_0AB0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -3048576201801985796;
    var_72 = 8;
    pri = fun_0B08(var_64)
    var_80 = 9408;
    var_88 = 8;
    var_96 = 16;
    pri = fun_02D8(var_88, var_80)
    var_104 = 0;
    pri = fun_03A8()
    var_112 = 0;
    pri = fun_1FC8()
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    OP_PUSH2_C -8031816186000298249, -3048576201801985796
    var_160 = 56;
    pri = fun_1D90(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1ED8(var_168)
    var_184 = 0;
    pri = fun_1F98()
    var_192 = 1;
    var_200 = 0;
    OP_PUSH5_C 4641240890982006784, -3048576201801985796, 4664786932490829824, 4674373299495501824, 4607182418800017408
    var_208 = 8802641224559852288;
    var_216 = 64;
    pri = fun_09A0(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_0B08(var_224)
    var_240 = 100;
    var_248 = 3;
    OP_PUSH4_C 4602678819172646912, 4604480259023595111, -3048576201801985796, 8802641224559852288
    var_256 = 15;
    var_264 = 56;
    pri = fun_2058(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -8031815086488670038, -3048576201801985796
    var_312 = 56;
    pri = fun_1D90(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1ED8(var_320)
    var_336 = 0;
    pri = fun_1F98()
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C -8031813986977041827, -3048576201801985796
    var_384 = 56;
    pri = fun_1D90(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1ED8(var_392)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C -8031821683558439304, -3048576201801985796
    var_448 = 56;
    pri = fun_1D90(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_1ED8(var_456)
    var_472 = 0;
    pri = fun_1F98()
    var_480 = -3048576201801985796;
    var_488 = 8;
    pri = fun_0CE0(var_480)
    var_496 = 1;
    var_504 = -1;
    var_512 = -1;
    var_520 = 3;
    var_528 = 0;
    var_536 = 2;
    var_544 = -3048576201801985796;
    var_552 = 56;
    pri = fun_21B8(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 8;
    var_568 = 8;
    pri = fun_00B8(var_560)
    var_576 = 1;
    var_584 = -1;
    var_592 = -1;
    var_600 = 3;
    var_608 = 0;
    var_616 = 22;
    var_624 = 8802641224559852288;
    var_632 = 56;
    pri = fun_21B8(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 30;
    var_648 = 8;
    pri = fun_00B8(var_640)
    var_656 = 9456;
    pri = CallTips(var_656)
    var_664 = 0;
    var_672 = 3;
    var_680 = 0;
    var_688 = 100;
    var_696 = -1;
    OP_PUSH2_C -8031820584046811093, -3048576201801985796
    var_704 = 56;
    pri = fun_1D90(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_712 = 1;
    var_720 = 8;
    pri = fun_1ED8(var_712)
    var_728 = 0;
    pri = fun_1F98()
    var_736 = 0;
    var_744 = 3;
    var_752 = 0;
    var_760 = 100;
    var_768 = -1;
    OP_PUSH2_C -8031819484535182882, -3048576201801985796
    var_776 = 56;
    pri = fun_1D90(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 1;
    var_792 = 8;
    pri = fun_1ED8(var_784)
    var_800 = 0;
    pri = fun_1F98()
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    pri = float(var_832)
    var_840 = pri;
    var_848 = -3048576201801985796;
    var_856 = 40;
    pri = fun_0A60(var_848, var_840, var_832, var_824, var_816)
    var_864 = 3;
    var_872 = 30;
    pri = EvCameraEnd(var_872, var_864)
    var_880 = -3048576201801985796;
    var_888 = 8;
    pri = fun_0B08(var_880)
    pri = 0;
    return pri;
}
// fun_4C20
fun_4C20() {
    pri = 0;
    return pri;
}
// fun_4C38
fun_4C38() {
    var_8 = 3275595920700649692;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = 525;
    var_32 = 8;
    pri = fun_42D8(var_24)
    var_40 = 4670683926884430720;
    pri = FlagSet(var_40)
    pri = 0;
    return pri;
}
// fun_4CC0
fun_4CC0() {
    var_8 = 0;
    pri = fun_0490()
    OP_PUSH2_C 469216104820598698, 4916462879949550871
    pri = SetBamiriInfoToChara(var_8, var_0)
    OP_PUSH2_C 7241290740110091524, -7306114496199893831
    pri = SetBamiriInfoToChara(var_8, var_0)
    pri = 0;
    return pri;
}
// fun_4D50
fun_4D50() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4470()
    var_16 = 0;
    pri = fun_44C8()
    var_24 = 0;
    pri = fun_44E0()
    var_32 = 0;
    pri = fun_44F8()
    var_40 = 0;
    pri = fun_4C20()
    var_48 = 0;
    pri = fun_4C38()
    var_56 = 0;
    pri = fun_4CC0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_4E40
fun_4E40() {
    var_8 = 0;
    pri = fun_44C8()
    var_16 = 0;
    pri = fun_4C38()
    pri = 0;
    return pri;
}
