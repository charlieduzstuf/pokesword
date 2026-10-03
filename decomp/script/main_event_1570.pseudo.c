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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
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
// fun_0720
fun_0720() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetPosition_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1270(var_8)
    OP_JZER lab_08F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12A0(var_24)
    OP_JNZ lab_08F0
    pri = 0;
    return pri;
// lab_08F0
    OP_JUMP lab_0900
// lab_0900
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0960
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0960
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0900
    pri = 0;
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B18
// lab_0B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1270(var_8)
    OP_JNZ lab_0BA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B90
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_0C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B18
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BE8
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D18
    pri = 0;
    return pri;
// lab_0D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1270(var_8)
    OP_JZER lab_0E48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D70
    OP_ZERO_P_S 64
// lab_0E48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E80
    OP_CONST_S 64, 1
// lab_0E80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB8
    OP_CONST_S 72, 1
// lab_0EB8
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
// lab_0D70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D98
    OP_ZERO_P_S 72
// lab_0D98
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
    OP_JUMP lab_0F58
// lab_0F58
    pri = 0;
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_10C0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1138(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1100(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1178(var_24)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_12A0
fun_12A0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_12D0
fun_12D0() {
    OP_JUMP lab_12E8
// lab_12E8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1378
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1368
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1378
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1408
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1408
    pri = 0;
    return pri;
// lab_13F8
    OP_JUMP lab_1418
// lab_1418
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12E8
    pri = 0;
    return pri;
// lab_1368
    OP_JUMP lab_1418
}
// fun_1458
fun_1458() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_12D0(var_40)
    pri = 0;
    return pri;
}
// fun_14E0
fun_14E0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
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
// switch_1B90
        case default:
        {
// switch_1B90_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BD8
// lab_1BD8
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
            OP_JNZ lab_1C80
            var_88 = 0;
            pri = fun_1EF0()
// lab_1C80
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B90_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1778
                case default:
                {
// switch_1778_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17F0
// lab_17F0
                    OP_JUMP lab_1BD8
                }
                case 0x0:
                {
// switch_1778_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17F0
                }
                case 0x1:
                {
// switch_1778_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17F0
                }
                case 0x2:
                {
// switch_1778_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17F0
                }
                case 0x3:
                {
// switch_1778_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17F0
                }
                case 0x4:
                {
// switch_1778_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17F0
                }
                case 0x5:
                {
// switch_1778_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17F0
                }
            }
        }
        case 0x65:
        {
// switch_1B90_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1930
                case default:
                {
// switch_1930_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19A8
// lab_19A8
                    OP_JUMP lab_1BD8
                }
                case 0x0:
                {
// switch_1930_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19A8
                }
                case 0x1:
                {
// switch_1930_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19A8
                }
                case 0x2:
                {
// switch_1930_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19A8
                }
                case 0x3:
                {
// switch_1930_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19A8
                }
                case 0x4:
                {
// switch_1930_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19A8
                }
                case 0x5:
                {
// switch_1930_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19A8
                }
            }
        }
        case 0x66:
        {
// switch_1B90_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AE8
                case default:
                {
// switch_1AE8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B60
// lab_1B60
                    OP_JUMP lab_1BD8
                }
                case 0x0:
                {
// switch_1AE8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B60
                }
                case 0x1:
                {
// switch_1AE8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B60
                }
                case 0x2:
                {
// switch_1AE8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B60
                }
                case 0x3:
                {
// switch_1AE8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B60
                }
                case 0x4:
                {
// switch_1AE8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B60
                }
                case 0x5:
                {
// switch_1AE8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B60
                }
            }
        }
    }
}
// fun_1C98
fun_1C98() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1578(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1DA8
    pri = 1;
    return pri;
// lab_1DA8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1DF0
fun_1DF0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D00(var_8)
    arg_2 = pri;
// lab_1E40
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1578(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EA0
fun_1EA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1C98(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EF0
fun_1EF0() {
    OP_JUMP lab_1F08
// lab_1F08
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F48
    pri = 0;
    return pri;
// lab_1F48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F08
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    var_8 = 0;
    pri = fun_1EF0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2038
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2038
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2078
fun_2078() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_20A8
// lab_20A8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20E8
    OP_JUMP lab_2118
// lab_20E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20A8
// lab_2118
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2160
fun_2160() {
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
// fun_21D0
fun_21D0() {
    OP_JUMP lab_21E8
// lab_21E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2220
    pri = 0;
    return pri;
// lab_2220
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21E8
    pri = 0;
    return pri;
}
// fun_2260
fun_2260() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_22C8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_23A0()
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2320
fun_2320() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_22C8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_23A0()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_23A0
fun_23A0() {
    OP_JUMP lab_23B8
// lab_23B8
    pri = IsEasingRunningDof_()
    OP_JZER lab_2410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2420
// lab_2410
    pri = 0;
    return pri;
// lab_2420
    OP_JUMP lab_23B8
    pri = 0;
    return pri;
}
// fun_2440
fun_2440() {
    pri = arg_6;
    OP_JNZ lab_2478
    var_8 = 0;
    pri = fun_0F68()
// lab_2478
    pri = arg_1;
    switch (pri) {
// switch_39E0
        case default:
        {
// switch_39E0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D30
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D30
            pri = 1;
            OP_JUMP lab_3D38
// lab_3D30
            pri = 0;
// lab_3D38
            OP_JZER lab_3E90
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            OP_JUMP lab_3EF0
// lab_3E90
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
// lab_3EF0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3F50
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3FB0
// lab_3F50
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3FB0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3FB0
            pri = arg_2;
            OP_JZER lab_3FF0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3FF0
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_39E0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1:
        {
// switch_39E0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x2:
        {
// switch_39E0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x3:
        {
// switch_39E0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x4:
        {
// switch_39E0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x5:
        {
// switch_39E0_case_0x5
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x6:
        {
// switch_39E0_case_0x6
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x7:
        {
// switch_39E0_case_0x7
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x8:
        {
// switch_39E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x9:
        {
// switch_39E0_case_0x9
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xa:
        {
// switch_39E0_case_0xa
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xb:
        {
// switch_39E0_case_0xb
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xc:
        {
// switch_39E0_case_0xc
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xd:
        {
// switch_39E0_case_0xd
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xe:
        {
// switch_39E0_case_0xe
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0xf:
        {
// switch_39E0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x10:
        {
// switch_39E0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x11:
        {
// switch_39E0_case_0x11
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x12:
        {
// switch_39E0_case_0x12
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x13:
        {
// switch_39E0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x14:
        {
// switch_39E0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x15:
        {
// switch_39E0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x16:
        {
// switch_39E0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x17:
        {
// switch_39E0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x18:
        {
// switch_39E0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x19:
        {
// switch_39E0_case_0x19
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1a:
        {
// switch_39E0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09A0(var_48, var_40)
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
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1b:
        {
// switch_39E0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09A0(var_48, var_40)
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
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1c:
        {
// switch_39E0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09A0(var_48, var_40)
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
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1d:
        {
// switch_39E0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1e:
        {
// switch_39E0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x1f:
        {
// switch_39E0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x20:
        {
// switch_39E0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x21:
        {
// switch_39E0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x22:
        {
// switch_39E0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x23:
        {
// switch_39E0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x24:
        {
// switch_39E0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x25:
        {
// switch_39E0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x26:
        {
// switch_39E0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x27:
        {
// switch_39E0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x28:
        {
// switch_39E0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
        case 0x29:
        {
// switch_39E0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39E0_case_default
        }
    }
}
// fun_4020
fun_4020() {
    pri = arg_5;
    OP_JNZ lab_4058
    var_8 = 0;
    pri = fun_0F68()
// lab_4058
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_40A8
    OP_CONST_S -8, -1
// lab_40A8
    pri = arg_1;
    switch (pri) {
// switch_5B60
        case default:
        {
// switch_5B60_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6008
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6008
            pri = 1;
            OP_JUMP lab_6010
// lab_6008
            pri = 0;
// lab_6010
            OP_JZER lab_6060
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_62B8
// lab_6060
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_60C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_60C8
            pri = 1;
            OP_JUMP lab_60D0
// lab_60C8
            pri = 0;
// lab_60D0
            OP_JZER lab_6258
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            OP_JUMP lab_62B8
// lab_6258
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
// lab_62B8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6328
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6328
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5B60_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1:
        {
// switch_5B60_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2:
        {
// switch_5B60_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3:
        {
// switch_5B60_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x4:
        {
// switch_5B60_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x5:
        {
// switch_5B60_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_5B60_case_default
        }
        case 0x6:
        {
// switch_5B60_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x7:
        {
// switch_5B60_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x8:
        {
// switch_5B60_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x9:
        {
// switch_5B60_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xa:
        {
// switch_5B60_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xb:
        {
// switch_5B60_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xc:
        {
// switch_5B60_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0xd:
        {
// switch_5B60_case_0xd
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0xe:
        {
// switch_5B60_case_0xe
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0xf:
        {
// switch_5B60_case_0xf
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x10:
        {
// switch_5B60_case_0x10
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x11:
        {
// switch_5B60_case_0x11
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x12:
        {
// switch_5B60_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x13:
        {
// switch_5B60_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x14:
        {
// switch_5B60_case_0x14
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x15:
        {
// switch_5B60_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x16:
        {
// switch_5B60_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x17:
        {
// switch_5B60_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x18:
        {
// switch_5B60_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x19:
        {
// switch_5B60_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1a:
        {
// switch_5B60_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1b:
        {
// switch_5B60_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1c:
        {
// switch_5B60_case_0x1c
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1d:
        {
// switch_5B60_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1e:
        {
// switch_5B60_case_0x1e
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x1f:
        {
// switch_5B60_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x20:
        {
// switch_5B60_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x21:
        {
// switch_5B60_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x22:
        {
// switch_5B60_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x23:
        {
// switch_5B60_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x24:
        {
// switch_5B60_case_0x24
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x25:
        {
// switch_5B60_case_0x25
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x26:
        {
// switch_5B60_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x27:
        {
// switch_5B60_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x28:
        {
// switch_5B60_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x29:
        {
// switch_5B60_case_0x29
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2a:
        {
// switch_5B60_case_0x2a
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2b:
        {
// switch_5B60_case_0x2b
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2c:
        {
// switch_5B60_case_0x2c
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2d:
        {
// switch_5B60_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2e:
        {
// switch_5B60_case_0x2e
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x2f:
        {
// switch_5B60_case_0x2f
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x30:
        {
// switch_5B60_case_0x30
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x31:
        {
// switch_5B60_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x32:
        {
// switch_5B60_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x33:
        {
// switch_5B60_case_0x33
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x34:
        {
// switch_5B60_case_0x34
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x35:
        {
// switch_5B60_case_0x35
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x36:
        {
// switch_5B60_case_0x36
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x37:
        {
// switch_5B60_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x38:
        {
// switch_5B60_case_0x38
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5B60_case_default
        }
        case 0x39:
        {
// switch_5B60_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3a:
        {
// switch_5B60_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3b:
        {
// switch_5B60_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3c:
        {
// switch_5B60_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3d:
        {
// switch_5B60_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
        case 0x3e:
        {
// switch_5B60_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_5B60_case_default
        }
    }
}
// fun_6358
fun_6358() {
    pri = arg_4;
    OP_JNZ lab_6390
    var_8 = 0;
    pri = fun_0F68()
// lab_6390
    pri = arg_1;
    switch (pri) {
// switch_7768
        case default:
        {
// switch_7768_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1270(var_264)
            OP_JZER lab_7D30
            pri = arg_3;
            switch (pri) {
// switch_7CD8
                case default:
                {
// switch_7CD8_case_default
                    OP_JUMP lab_7FE8
// lab_7FE8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8058
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8058
                    var_8 = 0;
                    pri = fun_0FA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7CD8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7CD8_case_default
                }
                case 0x2:
                {
// switch_7CD8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7CD8_case_default
                }
                case 0x3:
                {
// switch_7CD8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7CD8_case_default
                }
            }
// lab_7D30
            pri = arg_1;
            OP_JZER lab_7D80
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7D80
            pri = 0;
            OP_JUMP lab_7D88
// lab_7D80
            pri = 1;
// lab_7D88
            OP_JZER lab_7DF0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7DF0
            pri = 1;
            OP_JUMP lab_7DF8
// lab_7DF0
            pri = 0;
// lab_7DF8
            OP_JZER lab_7E48
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7FE8
// lab_7E48
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7EB0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7FE8
// lab_7EB0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
// switch_7768_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1:
        {
// switch_7768_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2:
        {
// switch_7768_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x3:
        {
// switch_7768_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x4:
        {
// switch_7768_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x5:
        {
// switch_7768_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_7768_case_default
        }
        case 0x6:
        {
// switch_7768_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x7:
        {
// switch_7768_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x8:
        {
// switch_7768_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x9:
        {
// switch_7768_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0xa:
        {
// switch_7768_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0xb:
        {
// switch_7768_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0xc:
        {
// switch_7768_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0xd:
        {
// switch_7768_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0xe:
        {
// switch_7768_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0xf:
        {
// switch_7768_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x10:
        {
// switch_7768_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x11:
        {
// switch_7768_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x12:
        {
// switch_7768_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x13:
        {
// switch_7768_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x14:
        {
// switch_7768_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x15:
        {
// switch_7768_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x16:
        {
// switch_7768_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x17:
        {
// switch_7768_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x18:
        {
// switch_7768_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x19:
        {
// switch_7768_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1a:
        {
// switch_7768_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1b:
        {
// switch_7768_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1c:
        {
// switch_7768_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1d:
        {
// switch_7768_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1e:
        {
// switch_7768_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x1f:
        {
// switch_7768_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x20:
        {
// switch_7768_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x21:
        {
// switch_7768_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x22:
        {
// switch_7768_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x23:
        {
// switch_7768_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x24:
        {
// switch_7768_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x25:
        {
// switch_7768_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x26:
        {
// switch_7768_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x27:
        {
// switch_7768_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x28:
        {
// switch_7768_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x29:
        {
// switch_7768_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2a:
        {
// switch_7768_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2b:
        {
// switch_7768_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2c:
        {
// switch_7768_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2d:
        {
// switch_7768_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2e:
        {
// switch_7768_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x2f:
        {
// switch_7768_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x30:
        {
// switch_7768_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x31:
        {
// switch_7768_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x32:
        {
// switch_7768_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x33:
        {
// switch_7768_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x34:
        {
// switch_7768_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x35:
        {
// switch_7768_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x36:
        {
// switch_7768_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x37:
        {
// switch_7768_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x38:
        {
// switch_7768_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x39:
        {
// switch_7768_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x3a:
        {
// switch_7768_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x3b:
        {
// switch_7768_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x3c:
        {
// switch_7768_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x3d:
        {
// switch_7768_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
        case 0x3e:
        {
// switch_7768_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_7768_case_default
        }
    }
}
// fun_8088
fun_8088() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8110
// lab_8110
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8290
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8280
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_81D0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_81D0
    pri = 0;
    OP_JUMP lab_81D8
// lab_8290
    pri = 0;
    return pri;
// lab_8280
    OP_JUMP lab_8108
// lab_8108
    OP_INC_P_S -936
// lab_81D0
    pri = 1;
// lab_81D8
    OP_JZER lab_8250
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8248
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8250
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8248
}
// fun_82B0
fun_82B0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8348
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1518()
// lab_8348
    pri = arg_4;
    OP_JZER lab_8380
    var_8 = 1;
    var_16 = 8;
    pri = fun_1540(var_8)
// lab_8380
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_83D8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_83D8
    pri = 0;
    OP_JUMP lab_83E0
// lab_83D8
    pri = 1;
// lab_83E0
    OP_JZER lab_84A8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_84A8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8480
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1458(var_32, var_24)
    OP_JUMP lab_84A8
// lab_84A8
    pri = arg_2;
    OP_JZER lab_8580
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8550
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1040(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0670(var_40)
    OP_JUMP lab_8580
// lab_8580
    pri = arg_3;
    OP_JZER lab_85B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_14E0(var_8)
// lab_85B8
    pri = 0;
    return pri;
// lab_8550
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
// lab_8480
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1458(var_16, var_8)
}
// fun_85C8
fun_85C8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8088(var_24)
    pri = 0;
    return pri;
}
// fun_8630
fun_8630() {
    pri = g_mode;
    switch (pri) {
// switch_86F0
        case default:
        {
// switch_86F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_8738
// lab_8738
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_86F0_case_0x0
            var_8 = 0;
            pri = fun_8748()
            OP_JUMP lab_8738
        }
        case 0x1faf0a2ae20164a7:
        {
// switch_86F0_case_0x1faf0a2ae20164a7
            var_8 = 0;
            pri = fun_B188()
            OP_JUMP lab_8738
        }
        case 0x46a668277e7bfacb:
        {
// switch_86F0_case_0x46a668277e7bfacb
            var_8 = 0;
            pri = fun_B278()
            OP_JUMP lab_8738
        }
    }
}
// fun_8748
fun_8748() {
    pri = 0;
    return pri;
}
// fun_8760
fun_8760() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_82B0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_87B8
fun_87B8() {
    var_8 = -3600543307321665573;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = 0;
    return pri;
}
// fun_87F8
fun_87F8() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_8828
fun_8828() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4653564217306120192, 4656770393212715008, 8802641224559852288
    var_24 = 48;
    pri = fun_05E0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4636033603912859648, 4652904510329454592, 4655851201491894272, -1554014642428341586
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4582834833314545664, 4656935319956881408, 4656510908468559872, -3600543307321665573
    var_72 = 48;
    pri = fun_05E0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = -3600543307321665573;
    var_96 = 16;
    pri = fun_0638(var_88, var_80)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 0;
    var_128 = 6;
    var_136 = -1554014642428341586;
    var_144 = 24;
    pri = fun_11B0(var_136, var_128, var_120)
    var_152 = 1;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 0;
    var_176 = 4631952216750555136;
    var_184 = 0;
    OP_PUSH5_C 4657900031459092070, 4640049196299358044, 4655778941587716833, 4659083501794765046, 4638001114000067133
    var_192 = 4654631711155295355;
    var_200 = 1;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 0;
    pri = fun_21D0()
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 2;
    OP_PUSH5_C 4657809321749800550, 4640049196299358044, 4655404535888226550, 4658992858056171192, 4638007447187043123
    var_240 = 4654257481377665516;
    var_248 = 360;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 0;
    var_272 = 4641240890982006784;
    var_280 = 0;
    var_288 = 0;
    OP_PUSH4_C 4652904510329454592, 4657056266235936768, 4608083138725491507, -1554014642428341586
    var_296 = 72;
    pri = fun_06A8(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 31016;
    var_312 = 8;
    var_320 = 16;
    pri = fun_0280(var_312, var_304)
    var_328 = 0;
    pri = fun_0350()
    var_336 = -1554014642428341586;
    var_344 = 8;
    pri = fun_0878(var_336)
    var_352 = 1;
    var_360 = 1;
    var_368 = -1;
    var_376 = -1;
    var_384 = 0;
    var_392 = 6;
    var_400 = -1554014642428341586;
    var_408 = 56;
    pri = fun_4020(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 3;
    var_424 = 0;
    var_432 = -3714260070453280926;
    var_440 = 24;
    pri = fun_1EA0(var_432, var_424, var_416)
    var_448 = 1;
    var_456 = 8;
    pri = fun_1F88(var_448)
    var_464 = 0;
    pri = fun_2048()
    var_472 = 0;
    var_480 = 4629362646964817101;
    var_488 = 0;
    OP_PUSH5_C 4652826093160161608, 4639445080630592799, 4656983852400131441, 4652915329523871908, 4641628622762425713
    var_496 = 4654622607199017370;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 1;
    var_520 = 3;
    var_528 = 0;
    var_536 = 6;
    var_544 = -1554014642428341586;
    var_552 = 40;
    pri = fun_6358(var_544, var_536, var_528, var_520, var_512)
    var_560 = 1;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = -1554014642428341586;
    var_584 = 8;
    pri = fun_0A90(var_576)
    var_592 = 1;
    var_600 = 0;
    var_608 = 4641240890982006784;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH4_C 4652904510329454592, 4655323435910561792, 4608083138725491507, -1554014642428341586
    var_632 = 72;
    pri = fun_06A8(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 0;
    var_648 = 3;
    var_656 = 2;
    var_664 = 101;
    var_672 = 2;
    OP_PUSH2_C -3338549035170360320, -1554014642428341586
    var_680 = 56;
    pri = fun_1DF0(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 30;
    var_696 = 8;
    pri = fun_0060(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = -115;
    pri = float(var_728)
    var_736 = pri;
    var_744 = 8802641224559852288;
    var_752 = 40;
    pri = fun_0778(var_744, var_736, var_728, var_720, var_712)
    var_760 = 0;
    pri = fun_1EF0()
    var_768 = 1;
    var_776 = 8;
    pri = fun_1F88(var_768)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 101;
    var_816 = 2;
    OP_PUSH2_C -3338545736635475687, -1554014642428341586
    var_824 = 56;
    pri = fun_1DF0(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = -1554014642428341586;
    var_840 = 8;
    pri = fun_0878(var_832)
    var_848 = 1;
    var_856 = 8;
    pri = fun_1F88(var_848)
    var_864 = 8802641224559852288;
    var_872 = 8;
    pri = fun_0878(var_864)
    var_880 = 0;
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    OP_PUSH2_C 8802641224559852288, -1554014642428341586
    var_912 = 48;
    pri = fun_07C8(var_904, var_896, var_888, var_880, var_872, var_864)
    var_920 = -1554014642428341586;
    var_928 = 8;
    pri = fun_0878(var_920)
    var_936 = 0;
    var_944 = 3;
    var_952 = 0;
    var_960 = 101;
    var_968 = 2;
    OP_PUSH2_C -3338546836147103898, -1554014642428341586
    var_976 = 56;
    pri = fun_1DF0(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 1;
    var_992 = 8;
    pri = fun_1F88(var_984)
    var_1000 = 0;
    pri = fun_2048()
    var_1008 = 1;
    var_1016 = -3600543307321665573;
    var_1024 = 16;
    pri = fun_0638(var_1016, var_1008)
    var_1032 = 0;
    var_1040 = 4629362646964817101;
    var_1048 = 0;
    OP_PUSH5_C 4652632315230882365, 4631233048185059410, 4656673680169935831, 4657338466890321756, 4628042529324044124
    var_1056 = 4656250192271381627;
    var_1064 = 1;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 1;
    var_1080 = 0;
    var_1088 = 4641240890982006784;
    var_1096 = 0;
    var_1104 = 0;
    OP_PUSH4_C 4654531787538563072, 4656510908468559872, 4607182418800017408, -3600543307321665573
    var_1112 = 72;
    pri = fun_06A8(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 15;
    var_1128 = 8;
    pri = fun_0060(var_1120)
    var_1136 = 0;
    var_1144 = 3;
    var_1152 = 2;
    var_1160 = 100;
    var_1168 = -1;
    OP_PUSH2_C 1837324435842572383, -3600543307321665573
    var_1176 = 56;
    pri = fun_1DF0(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = 0;
    OP_PUSH3_C 4654531787538563072, 4656510908468559872, 8802641224559852288
    var_1208 = 48;
    pri = fun_0820(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 0;
    OP_PUSH3_C 4654531787538563072, 4656510908468559872, -1554014642428341586
    var_1240 = 48;
    pri = fun_0820(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1248 = 45;
    var_1256 = 8;
    pri = fun_0060(var_1248)
    var_1264 = 8802641224559852288;
    var_1272 = 8;
    pri = fun_0878(var_1264)
    var_1280 = -1554014642428341586;
    var_1288 = 8;
    pri = fun_0878(var_1280)
    var_1296 = 0;
    var_1304 = 4629334499467146035;
    var_1312 = 0;
    OP_PUSH5_C 4653756983684701880, 4640200489099340022, 4655101114659425485, 4653527361676357140, 4643043034520396759
    var_1320 = 4653433991148926403;
    var_1328 = 1;
    pri = EvCameraMove(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 0;
    pri = fun_21D0()
    var_1344 = 0;
    var_1352 = 4629334499467146035;
    var_1360 = 2;
    OP_PUSH5_C 4653385876520094925, 4640200489099340022, 4655154506944070287, 4653113109675476255, 4643045145582722089
    var_1368 = 4653493980503337861;
    var_1376 = 150;
    pri = EvCameraMove(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1384 = -3600543307321665573;
    var_1392 = 8;
    pri = fun_0878(var_1384)
    var_1400 = 0;
    var_1408 = 0;
    var_1416 = 0;
    var_1424 = 0;
    OP_PUSH2_C -1554014642428341586, -3600543307321665573
    var_1432 = 48;
    pri = fun_07C8(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_1F88(var_1440)
    var_1456 = 0;
    pri = fun_2048()
    var_1464 = 1;
    var_1472 = 1;
    var_1480 = -1;
    var_1488 = -1;
    var_1496 = 0;
    var_1504 = 2;
    var_1512 = -1554014642428341586;
    var_1520 = 56;
    pri = fun_4020(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 0;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 101;
    var_1560 = -1;
    OP_PUSH2_C -3338543537612219265, -1554014642428341586
    var_1568 = 56;
    pri = fun_1DF0(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1576 = 1;
    var_1584 = 8;
    pri = fun_1F88(var_1576)
    var_1592 = 0;
    pri = fun_2048()
    var_1600 = 1;
    var_1608 = 3;
    var_1616 = 0;
    var_1624 = 2;
    var_1632 = -1554014642428341586;
    var_1640 = 40;
    pri = fun_6358(var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1648 = -3600543307321665573;
    var_1656 = 8;
    pri = fun_0878(var_1648)
    var_1664 = 1;
    var_1672 = 1;
    var_1680 = -1;
    var_1688 = -1;
    var_1696 = 0;
    var_1704 = 1;
    var_1712 = -3600543307321665573;
    var_1720 = 56;
    pri = fun_4020(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 0;
    var_1736 = 3;
    var_1744 = 0;
    var_1752 = 100;
    var_1760 = -1;
    OP_PUSH2_C 1837325535354200594, -3600543307321665573
    var_1768 = 56;
    pri = fun_1DF0(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_1F88(var_1776)
    var_1792 = 1;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 1;
    var_1824 = -3600543307321665573;
    var_1832 = 40;
    pri = fun_6358(var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1840 = 0;
    var_1848 = 3;
    var_1856 = 0;
    var_1864 = 100;
    var_1872 = -1;
    OP_PUSH2_C 1837326634865828805, -3600543307321665573
    var_1880 = 56;
    pri = fun_1DF0(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1888 = 1;
    var_1896 = 8;
    pri = fun_1F88(var_1888)
    var_1904 = 1;
    var_1912 = 1;
    var_1920 = -1;
    OP_PUSH2_C 8802641224559852288, -3600543307321665573
    var_1928 = 40;
    pri = fun_0FE8(var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1936 = 0;
    var_1944 = -6709054251941447176;
    var_1952 = 0;
    var_1960 = 24;
    pri = fun_2078(var_1952, var_1944, var_1936)
    var_1968 = 0;
    var_1976 = -6709050953406562543;
    var_1984 = 1;
    var_1992 = 24;
    pri = fun_2078(var_1984, var_1976, var_1968)
    var_2000 = 0;
    var_2008 = 0;
    var_2016 = 0;
    var_2024 = 1;
    var_2032 = 32;
    pri = fun_2160(var_2024, var_2016, var_2008, var_2000)
    var_2040 = 0;
    var_2048 = 3;
    var_2056 = 0;
    var_2064 = 100;
    var_2072 = -1;
    OP_PUSH2_C 1837318938284431328, -3600543307321665573
    var_2080 = 56;
    pri = fun_1DF0(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2088 = 1;
    var_2096 = 8;
    pri = fun_1F88(var_2088)
    var_2104 = 0;
    pri = fun_2048()
    var_2112 = 1;
    var_2120 = 1;
    var_2128 = -1;
    var_2136 = -1;
    var_2144 = 0;
    var_2152 = 6;
    var_2160 = -1554014642428341586;
    var_2168 = 56;
    pri = fun_4020(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2176 = 15;
    var_2184 = 8;
    pri = fun_0060(var_2176)
    var_2192 = 0;
    var_2200 = 3;
    var_2208 = 0;
    var_2216 = 100;
    var_2224 = -1;
    OP_PUSH2_C -3338544637123847476, -1554014642428341586
    var_2232 = 56;
    pri = fun_1DF0(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2240 = 1;
    var_2248 = 8;
    pri = fun_1F88(var_2240)
    var_2256 = 1;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 6;
    var_2288 = -1554014642428341586;
    var_2296 = 40;
    pri = fun_6358(var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2304 = -1554014642428341586;
    var_2312 = 8;
    pri = fun_0A90(var_2304)
    var_2320 = 0;
    var_2328 = 4629334499467146035;
    var_2336 = 0;
    OP_PUSH5_C 4654291170413940572, 4640655071186727731, 4656048937663033508, 4655870508916078019, 4644656765746251039
    var_2344 = 4656035435660244419;
    var_2352 = 1;
    pri = EvCameraMove(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2360 = 0;
    pri = fun_21D0()
    var_2368 = 0;
    var_2376 = 4629334499467146035;
    var_2384 = 2;
    OP_PUSH5_C 4654293413417661235, 4640655071186727731, 4656310005703932641, 4655872839880728904, 4644655886136948818
    var_2392 = 4656296547681608663;
    var_2400 = 240;
    pri = EvCameraMove(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2408 = 1;
    var_2416 = 0;
    var_2424 = 4641240890982006784;
    var_2432 = 0;
    var_2440 = 0;
    OP_PUSH4_C 4653300334515453952, 4655631299166339072, 4607182418800017408, -1554014642428341586
    var_2448 = 72;
    pri = fun_06A8(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2456 = -1;
    var_2464 = -3600543307321665573;
    var_2472 = 16;
    pri = fun_1040(var_2464, var_2456)
    var_2480 = 0;
    var_2488 = 3;
    var_2496 = 0;
    var_2504 = 100;
    var_2512 = -1;
    OP_PUSH2_C -3338541338588962843, -1554014642428341586
    var_2520 = 56;
    pri = fun_1DF0(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2528 = 1;
    var_2536 = 8;
    pri = fun_1F88(var_2528)
    var_2544 = 0;
    pri = fun_2048()
    var_2552 = 0;
    var_2560 = 3;
    var_2568 = 2;
    var_2576 = 100;
    var_2584 = -1;
    OP_PUSH2_C 1837320037796059539, -3600543307321665573
    var_2592 = 56;
    pri = fun_1DF0(var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2600 = 1;
    var_2608 = -1;
    var_2616 = -1;
    var_2624 = 3;
    var_2632 = 0;
    var_2640 = 1;
    var_2648 = -3600543307321665573;
    var_2656 = 56;
    pri = fun_2440(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600)
    var_2664 = 1;
    var_2672 = 8;
    pri = fun_0060(var_2664)
    var_2680 = -3600543307321665573;
    var_2688 = 8;
    pri = fun_0A90(var_2680)
    var_2696 = 0;
    pri = fun_1EF0()
    var_2704 = 1;
    var_2712 = 8;
    pri = fun_1F88(var_2704)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2720 = 16;
    pri = fun_2260(var_2712, var_2704)
    var_2728 = 3;
    var_2736 = 1;
    OP_PUSH2_C 4642037570719214207, 4611686018427387904
    var_2744 = 32;
    pri = fun_22C8(var_2736, var_2728, var_2720, var_2712)
    var_2752 = 0;
    var_2760 = 4627983419578934886;
    var_2768 = 0;
    OP_PUSH5_C 4654391665776719299, 4640858436857401180, 4656782333908992655, 4654245914515341312, 4641045265873192878
    var_2776 = 4655424810882642739;
    var_2784 = 1;
    pri = EvCameraMove(var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712)
    var_2792 = 0;
    pri = fun_21D0()
    var_2800 = 0;
    var_2808 = 4627983419578934886;
    var_2816 = 2;
    OP_PUSH5_C 4654482133593452708, 4640858436857401180, 4656777671979690885, 4654336426312539832, 4641045265873192878
    var_2824 = 4655415487024039199;
    var_2832 = 240;
    pri = EvCameraMove(var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
    var_2840 = 1;
    var_2848 = 1;
    OP_PUSH4_C -4597724859582539366, 4653564217306120192, 4656598869398781952, 8802641224559852288
    var_2856 = 48;
    pri = fun_05E0(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2864 = 0;
    var_2872 = 3;
    var_2880 = 2;
    var_2888 = 100;
    var_2896 = -1;
    OP_PUSH2_C 1837321137307687750, -3600543307321665573
    var_2904 = 56;
    pri = fun_1DF0(var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
    var_2912 = 1;
    var_2920 = 1;
    var_2928 = -1;
    var_2936 = -1;
    var_2944 = 0;
    var_2952 = 10;
    var_2960 = -3600543307321665573;
    var_2968 = 56;
    pri = fun_4020(var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2976 = 5;
    var_2984 = 8;
    pri = fun_0060(var_2976)
    var_2992 = 8;
    var_3000 = 8;
    var_3008 = -3600543307321665573;
    var_3016 = 24;
    pri = fun_11B0(var_3008, var_3000, var_2992)
    var_3024 = 15;
    var_3032 = 8;
    pri = fun_0060(var_3024)
    var_3040 = 0;
    pri = fun_1EF0()
    var_3048 = 1;
    var_3056 = 8;
    pri = fun_1F88(var_3048)
    var_3064 = 0;
    pri = fun_2048()
    var_3072 = 3;
    var_3080 = 15;
    OP_PUSH2_C 4641359462315946148, 4611686018427387904
    var_3088 = 32;
    pri = fun_22C8(var_3080, var_3072, var_3064, var_3056)
    var_3096 = 0;
    var_3104 = 31064;
    var_3112 = -3600543307321665573;
    var_3120 = 24;
    pri = fun_09D8(var_3112, var_3104, var_3096)
    var_3128 = 5;
    var_3136 = 6;
    var_3144 = -3600543307321665573;
    var_3152 = 24;
    pri = fun_11B0(var_3144, var_3136, var_3128)
    OP_PUSH2_C -4598738169498697728, 4627307879634829312
    var_3160 = 2;
    OP_PUSH5_C 4654523827074377974, 4641451645370818888, 4656921202227580764, 4654378119793465098, 4641638474386610586
    var_3168 = 4655702547519818957;
    var_3176 = 15;
    pri = EvCameraMove(var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104)
    var_3184 = 0;
    var_3192 = 3;
    var_3200 = 0;
    var_3208 = 101;
    var_3216 = 2;
    OP_PUSH2_C 1837322236819315961, -3600543307321665573
    var_3224 = 56;
    pri = fun_1DF0(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168)
    var_3232 = 1;
    var_3240 = 8;
    pri = fun_1F88(var_3232)
    var_3248 = 0;
    pri = fun_2048()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3256 = 3;
    var_3264 = 1;
    var_3272 = 32;
    pri = fun_2320(var_3264, var_3256, var_3248, var_3240)
    var_3280 = 0;
    var_3288 = 4631417414294804890;
    var_3296 = 0;
    OP_PUSH5_C 4653239377590810051, 4638573915577673318, 4656212105188595466, 4654498846170194903, 4642641580834863186
    var_3304 = 4655769837631438848;
    var_3312 = 1;
    pri = EvCameraMove(var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248, var_3240)
    var_3320 = 0;
    pri = fun_21D0()
    var_3328 = 0;
    var_3336 = 4631417414294804890;
    var_3344 = 2;
    OP_PUSH5_C 4653215672120115200, 4638573915577673318, 4656144683135580242, 4654475184679965164, 4642641580834863186
    var_3352 = 4655702415578423624;
    var_3360 = 240;
    pri = EvCameraMove(var_3360, var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288)
    var_3368 = 2;
    var_3376 = 2;
    var_3384 = -1554014642428341586;
    var_3392 = 24;
    pri = fun_11B0(var_3384, var_3376, var_3368)
    var_3400 = -1;
    var_3408 = -3600543307321665573;
    var_3416 = 16;
    pri = fun_1080(var_3408, var_3400)
    var_3424 = 1;
    var_3432 = 3;
    var_3440 = 0;
    var_3448 = 10;
    var_3456 = -3600543307321665573;
    var_3464 = 40;
    pri = fun_6358(var_3456, var_3448, var_3440, var_3432, var_3424)
    var_3472 = 1;
    var_3480 = 1;
    var_3488 = -1;
    var_3496 = -1;
    var_3504 = 0;
    var_3512 = 8;
    var_3520 = -1554014642428341586;
    var_3528 = 56;
    pri = fun_4020(var_3520, var_3512, var_3504, var_3496, var_3488, var_3480, var_3472)
    var_3536 = 15;
    var_3544 = 8;
    pri = fun_0060(var_3536)
    var_3552 = 1;
    var_3560 = 31152;
    var_3568 = -3600543307321665573;
    var_3576 = 24;
    pri = fun_09D8(var_3568, var_3560, var_3552)
    var_3584 = 2;
    var_3592 = 6;
    var_3600 = -3600543307321665573;
    var_3608 = 24;
    pri = fun_11B0(var_3600, var_3592, var_3584)
    var_3616 = 0;
    var_3624 = 3;
    var_3632 = 0;
    var_3640 = 100;
    var_3648 = -1;
    OP_PUSH2_C -3338542438100591054, -1554014642428341586
    var_3656 = 56;
    pri = fun_1DF0(var_3648, var_3640, var_3632, var_3624, var_3616, var_3608, var_3600)
    var_3664 = 1;
    var_3672 = 8;
    pri = fun_1F88(var_3664)
    var_3680 = 0;
    pri = fun_2048()
    var_3688 = 1;
    var_3696 = 3;
    var_3704 = 0;
    var_3712 = 8;
    var_3720 = -1554014642428341586;
    var_3728 = 40;
    pri = fun_6358(var_3720, var_3712, var_3704, var_3696, var_3688)
    var_3736 = -1554014642428341586;
    var_3744 = 8;
    pri = fun_0A90(var_3736)
    var_3752 = 15;
    var_3760 = 8;
    pri = fun_0060(var_3752)
    var_3768 = 0;
    var_3776 = 4629334499467146035;
    var_3784 = 0;
    OP_PUSH5_C 4655616785612852429, 4640839437296473211, 4656571337627622441, 4656988140495479767, 4644126185415151452
    var_3792 = 4656552470008089805;
    var_3800 = 1;
    pri = EvCameraMove(var_3800, var_3792, var_3784, var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728)
    var_3808 = 0;
    pri = fun_21D0()
    var_3816 = 0;
    var_3824 = 4629334499467146035;
    var_3832 = 2;
    OP_PUSH5_C 4656350423751369687, 4642721449359504835, 4656562893378321121, 4657354959564738396, 4645067015524806820
    var_3840 = 4656544069739253596;
    var_3848 = 150;
    pri = EvCameraMove(var_3848, var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776)
    var_3856 = -1554014642428341586;
    var_3864 = 8;
    pri = fun_1178(var_3856)
    var_3872 = -1554014642428341586;
    var_3880 = 8;
    pri = fun_0878(var_3872)
    var_3888 = -3600543307321665573;
    var_3896 = 8;
    pri = fun_0878(var_3888)
    var_3904 = 0;
    var_3912 = 0;
    var_3920 = 0;
    var_3928 = 0;
    pri = float(var_3928)
    var_3936 = pri;
    var_3944 = -1554014642428341586;
    var_3952 = 40;
    pri = fun_0778(var_3944, var_3936, var_3928, var_3920, var_3912)
    var_3960 = 0;
    var_3968 = 0;
    var_3976 = 0;
    var_3984 = 0;
    pri = float(var_3984)
    var_3992 = pri;
    var_4000 = -3600543307321665573;
    var_4008 = 40;
    pri = fun_0778(var_4000, var_3992, var_3984, var_3976, var_3968)
    var_4016 = -1554014642428341586;
    var_4024 = 8;
    pri = fun_0878(var_4016)
    var_4032 = -3600543307321665573;
    var_4040 = 8;
    pri = fun_0878(var_4032)
    var_4048 = 1;
    var_4056 = 0;
    var_4064 = 0;
    var_4072 = 90;
    OP_PUSH2_C 4611686018427387904, -1554014642428341586
    var_4080 = 48;
    pri = fun_0720(var_4072, var_4064, var_4056, var_4048, var_4040, var_4032)
    var_4088 = 1;
    var_4096 = 0;
    var_4104 = 0;
    var_4112 = 90;
    OP_PUSH2_C 4611686018427387904, -3600543307321665573
    var_4120 = 48;
    pri = fun_0720(var_4112, var_4104, var_4096, var_4088, var_4080, var_4072)
    var_4128 = 0;
    var_4136 = 0;
    var_4144 = 0;
    var_4152 = 0;
    pri = float(var_4152)
    var_4160 = pri;
    var_4168 = 8802641224559852288;
    var_4176 = 40;
    pri = fun_0778(var_4168, var_4160, var_4152, var_4144, var_4136)
    var_4184 = 45;
    var_4192 = 8;
    pri = fun_0060(var_4184)
    var_4200 = 8802641224559852288;
    var_4208 = 8;
    pri = fun_0878(var_4200)
    var_4216 = 1;
    var_4224 = 0;
    var_4232 = 30968;
    var_4240 = 8;
    var_4248 = 32;
    pri = fun_02E0(var_4240, var_4232, var_4224, var_4216)
    var_4256 = 0;
    pri = fun_0350()
    var_4264 = 3;
    var_4272 = 0;
    pri = EvCameraEnd(var_4272, var_4264)
    var_4280 = 5;
    var_4288 = 8;
    pri = fun_0060(var_4280)
    var_4296 = -1554014642428341586;
    var_4304 = 8;
    pri = fun_0878(var_4296)
    var_4312 = -3600543307321665573;
    var_4320 = 8;
    pri = fun_0878(var_4312)
    var_4328 = 5;
    var_4336 = 8;
    pri = fun_0060(var_4328)
    var_4344 = -1554014642428341586;
    var_4352 = 8;
    pri = fun_1218(var_4344)
    var_4360 = -3600543307321665573;
    var_4368 = 8;
    pri = fun_1218(var_4360)
    var_4376 = 5;
    var_4384 = 8;
    pri = fun_0060(var_4376)
    pri = 0;
    return pri;
}
// fun_AD58
fun_AD58() {
    pri = 0;
    return pri;
}
// fun_AD70
fun_AD70() {
    var_8 = -1554014642428341586;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = -3600543307321665573;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = 6660951804926948019;
    var_48 = 8;
    pri = fun_0408(var_40)
    var_56 = 1580;
    var_64 = 8;
    pri = fun_85C8(var_56)
    var_72 = -1180051137964617721;
    pri = VanishFlagSet(var_72)
    var_80 = 3891752725908598821;
    pri = VanishFlagSet(var_80)
    var_88 = -2880323008892522216;
    pri = VanishFlagSet(var_88)
    var_96 = -2880319710357637583;
    pri = VanishFlagSet(var_96)
    var_104 = 3891749427373714188;
    pri = VanishFlagSet(var_104)
    var_112 = 3891750526885342399;
    pri = VanishFlagSet(var_112)
    var_120 = 3891747228350457766;
    pri = VanishFlagSet(var_120)
    var_128 = -2880320809869265794;
    pri = VanishFlagSet(var_128)
    var_136 = -2880318610846009372;
    pri = VanishFlagSet(var_136)
    var_144 = -2880315312311124739;
    pri = VanishFlagSet(var_144)
    var_152 = 3891748327862085977;
    pri = VanishFlagSet(var_152)
    var_160 = 1451426230526205437;
    pri = VanishFlagSet(var_160)
    var_168 = 5853608284009014273;
    pri = VanishFlagSet(var_168)
    var_176 = 1451246788605109846;
    pri = VanishFlagSet(var_176)
    var_184 = 1451425131014577226;
    pri = VanishFlagSet(var_184)
    var_192 = -4275866473915358187;
    pri = VanishFlagSet(var_192)
    var_200 = -1180051137964617721;
    pri = VanishFlagSet(var_200)
    var_208 = 0;
    var_216 = -6958835188024118277;
    pri = WorkSet(var_216, var_208)
    pri = 0;
    return pri;
}
// fun_B0F8
fun_B0F8() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 5;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 31016;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0280(var_40, var_32)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_B188
fun_B188() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8760()
    var_16 = 0;
    pri = fun_87B8()
    var_24 = 0;
    pri = fun_87F8()
    var_32 = 0;
    pri = fun_8828()
    var_40 = 0;
    pri = fun_AD58()
    var_48 = 0;
    pri = fun_AD70()
    var_56 = 0;
    pri = fun_B0F8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B278
fun_B278() {
    var_8 = 0;
    pri = fun_87B8()
    var_16 = 0;
    pri = fun_AD70()
    pri = 0;
    return pri;
}
