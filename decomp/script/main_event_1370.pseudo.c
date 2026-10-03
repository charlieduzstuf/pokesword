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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0550
fun_0550() {
    OP_JUMP lab_0568
// lab_0568
    pri = IsLoadedLogoFade_()
    OP_JZER lab_05A0
    pri = 0;
    return pri;
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0568
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
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
// fun_06A0
fun_06A0() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0708
// lab_0708
    var_8 = 0;
    pri = fun_0850()
    OP_JNZ lab_0740
    OP_JUMP lab_0770
// lab_0740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0708
// lab_0770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07A0
// lab_07A0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0850
fun_0850() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D0
fun_08D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
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
    pri = fun_1270(var_8)
    OP_JZER lab_0A90
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12A0(var_24)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C38
    pri = 0;
    return pri;
// lab_0C38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C78
// lab_0C78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1270(var_8)
    OP_JNZ lab_0D00
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CF0
    pri = 0;
    return pri;
// lab_0D00
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D48
    pri = 0;
    return pri;
// lab_0D48
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DF0(var_8)
    pri = 0;
    return pri;
// lab_0DA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C78
    pri = 0;
    return pri;
// lab_0CF0
    OP_JUMP lab_0D48
}
// fun_0DF0
fun_0DF0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E78
    pri = 0;
    return pri;
// lab_0E78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1270(var_8)
    OP_JZER lab_0FA8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED0
    OP_ZERO_P_S 64
// lab_0FA8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE0
    OP_CONST_S 64, 1
// lab_0FE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1018
    OP_CONST_S 72, 1
// lab_1018
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
// lab_0ED0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF8
    OP_ZERO_P_S 72
// lab_0EF8
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
    OP_JUMP lab_10B8
// lab_10B8
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1188(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11C8(var_40, var_32)
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
    pri = fun_0BF0(var_8)
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
    pri = fun_0BF0(var_8)
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
    pri = fun_0BF0(var_8)
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
            pri = fun_1E38()
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
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BB8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D40
    pri = 1;
    return pri;
// lab_1D40
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D88
fun_1D88() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C98(var_8)
    arg_2 = pri;
// lab_1DD8
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
// fun_1E38
fun_1E38() {
    OP_JUMP lab_1E50
// lab_1E50
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E90
    pri = 0;
    return pri;
// lab_1E90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E50
    pri = 0;
    return pri;
}
// fun_1ED0
fun_1ED0() {
    var_8 = 0;
    pri = fun_1E38()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F80
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_1F80
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FC0
fun_1FC0() {
    OP_JUMP lab_1FD8
// lab_1FD8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2010
    pri = 0;
    return pri;
// lab_2010
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FD8
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    pri = arg_6;
    OP_JNZ lab_2088
    var_8 = 0;
    pri = fun_10C8()
// lab_2088
    pri = arg_1;
    switch (pri) {
// switch_35F0
        case default:
        {
// switch_35F0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3940
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3940
            pri = 1;
            OP_JUMP lab_3948
// lab_3940
            pri = 0;
// lab_3948
            OP_JZER lab_3AA0
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB8(var_24, var_16)
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
            var_64 = 8520;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3B00
// lab_3AA0
            var_8 = 64;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3B00
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3B60
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3BC0
// lab_3B60
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3BC0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3BC0
            pri = arg_2;
            OP_JZER lab_3C00
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3C00
            var_8 = 0;
            pri = fun_1108()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_35F0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1:
        {
// switch_35F0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x2:
        {
// switch_35F0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x3:
        {
// switch_35F0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x4:
        {
// switch_35F0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x5:
        {
// switch_35F0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0x6:
        {
// switch_35F0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0x7:
        {
// switch_35F0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0x8:
        {
// switch_35F0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x9:
        {
// switch_35F0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0xa:
        {
// switch_35F0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0xb:
        {
// switch_35F0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0xc:
        {
// switch_35F0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0xd:
        {
// switch_35F0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0xe:
        {
// switch_35F0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0xf:
        {
// switch_35F0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x10:
        {
// switch_35F0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x11:
        {
// switch_35F0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0x12:
        {
// switch_35F0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5944;
            var_72 = 5936;
            var_80 = 5928;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0x13:
        {
// switch_35F0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x14:
        {
// switch_35F0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x15:
        {
// switch_35F0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x16:
        {
// switch_35F0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x17:
        {
// switch_35F0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x18:
        {
// switch_35F0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x19:
        {
// switch_35F0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5968;
            var_72 = 5960;
            var_80 = 5952;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1a:
        {
// switch_35F0_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6192;
            var_88 = 6184;
            var_96 = 6176;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1b:
        {
// switch_35F0_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6416;
            var_88 = 6408;
            var_96 = 6400;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1c:
        {
// switch_35F0_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6640;
            var_88 = 6632;
            var_96 = 6624;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1d:
        {
// switch_35F0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1e:
        {
// switch_35F0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x1f:
        {
// switch_35F0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x20:
        {
// switch_35F0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x21:
        {
// switch_35F0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x22:
        {
// switch_35F0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x23:
        {
// switch_35F0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x24:
        {
// switch_35F0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x25:
        {
// switch_35F0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x26:
        {
// switch_35F0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x27:
        {
// switch_35F0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x28:
        {
// switch_35F0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
        case 0x29:
        {
// switch_35F0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_35F0_case_default
        }
    }
}
// fun_3C30
fun_3C30() {
    pri = arg_5;
    OP_JNZ lab_3C68
    var_8 = 0;
    pri = fun_10C8()
// lab_3C68
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3CB8
    OP_CONST_S -8, -1
// lab_3CB8
    pri = arg_1;
    switch (pri) {
// switch_5770
        case default:
        {
// switch_5770_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5C18
            var_520 = 28280;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BB8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5C18
            pri = 1;
            OP_JUMP lab_5C20
// lab_5C18
            pri = 0;
// lab_5C20
            OP_JZER lab_5C70
            var_8 = 64;
            var_16 = 28376;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5EC8
// lab_5C70
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5CD8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5CD8
            pri = 1;
            OP_JUMP lab_5CE0
// lab_5CD8
            pri = 0;
// lab_5CE0
            OP_JZER lab_5E68
            var_16 = 28552;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB8(var_24, var_16)
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
            var_176 = 28656;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28672;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8536;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5EC8
// lab_5E68
            var_8 = 64;
            alt = 8536;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5EC8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5F38
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5F38
            var_8 = 0;
            pri = fun_1108()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5770_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x1:
        {
// switch_5770_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x2:
        {
// switch_5770_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x3:
        {
// switch_5770_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x4:
        {
// switch_5770_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x5:
        {
// switch_5770_case_0x5
            var_8 = 2;
            var_16 = 18536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DF0(var_40)
            OP_JUMP switch_5770_case_default
        }
        case 0x6:
        {
// switch_5770_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x7:
        {
// switch_5770_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x8:
        {
// switch_5770_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x9:
        {
// switch_5770_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0xa:
        {
// switch_5770_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0xb:
        {
// switch_5770_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0xc:
        {
// switch_5770_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0xd:
        {
// switch_5770_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19184;
            var_72 = 19008;
            var_80 = 18824;
            var_88 = 18632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0xe:
        {
// switch_5770_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19840;
            var_72 = 19632;
            var_80 = 19416;
            var_88 = 19192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0xf:
        {
// switch_5770_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20232;
            var_72 = 20112;
            var_80 = 19984;
            var_88 = 19848;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x10:
        {
// switch_5770_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20576;
            var_72 = 20472;
            var_80 = 20360;
            var_88 = 20240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x11:
        {
// switch_5770_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20920;
            var_72 = 20816;
            var_80 = 20704;
            var_88 = 20584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x12:
        {
// switch_5770_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x13:
        {
// switch_5770_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x14:
        {
// switch_5770_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21480;
            var_72 = 21304;
            var_80 = 21120;
            var_88 = 20928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x15:
        {
// switch_5770_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x16:
        {
// switch_5770_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x17:
        {
// switch_5770_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x18:
        {
// switch_5770_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x19:
        {
// switch_5770_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x1a:
        {
// switch_5770_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x1b:
        {
// switch_5770_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x1c:
        {
// switch_5770_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21872;
            var_72 = 21752;
            var_80 = 21624;
            var_88 = 21488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x1d:
        {
// switch_5770_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x1e:
        {
// switch_5770_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22336;
            var_72 = 22192;
            var_80 = 22040;
            var_88 = 21880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x1f:
        {
// switch_5770_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x20:
        {
// switch_5770_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x21:
        {
// switch_5770_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x22:
        {
// switch_5770_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x23:
        {
// switch_5770_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x24:
        {
// switch_5770_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22704;
            var_72 = 22592;
            var_80 = 22472;
            var_88 = 22344;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x25:
        {
// switch_5770_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23072;
            var_72 = 22960;
            var_80 = 22840;
            var_88 = 22712;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x26:
        {
// switch_5770_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x27:
        {
// switch_5770_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x28:
        {
// switch_5770_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x29:
        {
// switch_5770_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23512;
            var_72 = 23376;
            var_80 = 23232;
            var_88 = 23080;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x2a:
        {
// switch_5770_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23904;
            var_72 = 23784;
            var_80 = 23656;
            var_88 = 23520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x2b:
        {
// switch_5770_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24320;
            var_72 = 24192;
            var_80 = 24056;
            var_88 = 23912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x2c:
        {
// switch_5770_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24760;
            var_72 = 24624;
            var_80 = 24480;
            var_88 = 24328;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x2d:
        {
// switch_5770_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x2e:
        {
// switch_5770_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25080;
            var_72 = 24984;
            var_80 = 24880;
            var_88 = 24768;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x2f:
        {
// switch_5770_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25472;
            var_72 = 25352;
            var_80 = 25224;
            var_88 = 25088;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x30:
        {
// switch_5770_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25864;
            var_72 = 25744;
            var_80 = 25616;
            var_88 = 25480;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x31:
        {
// switch_5770_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x32:
        {
// switch_5770_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x33:
        {
// switch_5770_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26256;
            var_72 = 26136;
            var_80 = 26008;
            var_88 = 25872;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x34:
        {
// switch_5770_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26624;
            var_72 = 26512;
            var_80 = 26392;
            var_88 = 26264;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x35:
        {
// switch_5770_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27112;
            var_72 = 26960;
            var_80 = 26800;
            var_88 = 26632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x36:
        {
// switch_5770_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27480;
            var_72 = 27368;
            var_80 = 27248;
            var_88 = 27120;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x37:
        {
// switch_5770_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x38:
        {
// switch_5770_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27848;
            var_72 = 27736;
            var_80 = 27616;
            var_88 = 27488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5770_case_default
        }
        case 0x39:
        {
// switch_5770_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x3a:
        {
// switch_5770_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x3b:
        {
// switch_5770_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x3c:
        {
// switch_5770_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27856;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x3d:
        {
// switch_5770_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28032;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
        case 0x3e:
        {
// switch_5770_case_0x3e
            var_8 = 4;
            var_16 = 28176;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            OP_JUMP switch_5770_case_default
        }
    }
}
// fun_5F68
fun_5F68() {
    pri = arg_4;
    OP_JNZ lab_5FA0
    var_8 = 0;
    pri = fun_10C8()
// lab_5FA0
    pri = arg_1;
    switch (pri) {
// switch_7378
        case default:
        {
// switch_7378_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29248;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1270(var_264)
            OP_JZER lab_7940
            pri = arg_3;
            switch (pri) {
// switch_78E8
                case default:
                {
// switch_78E8_case_default
                    OP_JUMP lab_7BF8
// lab_7BF8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7C68
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7C68
                    var_8 = 0;
                    pri = fun_1108()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_78E8_case_0x1
                    var_8 = 32;
                    var_16 = 29400;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_78E8_case_default
                }
                case 0x2:
                {
// switch_78E8_case_0x2
                    var_8 = 32;
                    var_16 = 29504;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_78E8_case_default
                }
                case 0x3:
                {
// switch_78E8_case_0x3
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_78E8_case_default
                }
            }
// lab_7940
            pri = arg_1;
            OP_JZER lab_7990
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7990
            pri = 0;
            OP_JUMP lab_7998
// lab_7990
            pri = 1;
// lab_7998
            OP_JZER lab_7A00
            var_8 = 29600;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BB8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7A00
            pri = 1;
            OP_JUMP lab_7A08
// lab_7A00
            pri = 0;
// lab_7A08
            OP_JZER lab_7A58
            var_8 = 32;
            var_16 = 29696;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7BF8
// lab_7A58
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7AC0
            var_8 = 32;
            var_16 = 29856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7BF8
// lab_7AC0
            var_16 = 29976;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB8(var_24, var_16)
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
            var_176 = 30080;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30096;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7378_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1:
        {
// switch_7378_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2:
        {
// switch_7378_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x3:
        {
// switch_7378_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x4:
        {
// switch_7378_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x5:
        {
// switch_7378_case_0x5
            var_8 = 1;
            var_16 = 28728;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DF0(var_40)
            OP_JUMP switch_7378_case_default
        }
        case 0x6:
        {
// switch_7378_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x7:
        {
// switch_7378_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x8:
        {
// switch_7378_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x9:
        {
// switch_7378_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0xa:
        {
// switch_7378_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0xb:
        {
// switch_7378_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0xc:
        {
// switch_7378_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0xd:
        {
// switch_7378_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0xe:
        {
// switch_7378_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0xf:
        {
// switch_7378_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x10:
        {
// switch_7378_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x11:
        {
// switch_7378_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x12:
        {
// switch_7378_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x13:
        {
// switch_7378_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x14:
        {
// switch_7378_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x15:
        {
// switch_7378_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x16:
        {
// switch_7378_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x17:
        {
// switch_7378_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x18:
        {
// switch_7378_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x19:
        {
// switch_7378_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1a:
        {
// switch_7378_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1b:
        {
// switch_7378_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1c:
        {
// switch_7378_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1d:
        {
// switch_7378_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1e:
        {
// switch_7378_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x1f:
        {
// switch_7378_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x20:
        {
// switch_7378_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x21:
        {
// switch_7378_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x22:
        {
// switch_7378_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x23:
        {
// switch_7378_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x24:
        {
// switch_7378_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x25:
        {
// switch_7378_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x26:
        {
// switch_7378_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x27:
        {
// switch_7378_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x28:
        {
// switch_7378_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x29:
        {
// switch_7378_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2a:
        {
// switch_7378_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2b:
        {
// switch_7378_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2c:
        {
// switch_7378_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2d:
        {
// switch_7378_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2e:
        {
// switch_7378_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x2f:
        {
// switch_7378_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x30:
        {
// switch_7378_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x31:
        {
// switch_7378_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x32:
        {
// switch_7378_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x33:
        {
// switch_7378_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x34:
        {
// switch_7378_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x35:
        {
// switch_7378_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x36:
        {
// switch_7378_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x37:
        {
// switch_7378_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x38:
        {
// switch_7378_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x39:
        {
// switch_7378_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x3a:
        {
// switch_7378_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x3b:
        {
// switch_7378_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x3c:
        {
// switch_7378_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28824;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x3d:
        {
// switch_7378_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29000;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
        case 0x3e:
        {
// switch_7378_case_0x3e
            var_8 = 3;
            var_16 = 29144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            OP_JUMP switch_7378_case_default
        }
    }
}
// fun_7C98
fun_7C98() {
    pri = 30144;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7D20
// lab_7D20
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7EA0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7E90
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7DE0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7DE0
    pri = 0;
    OP_JUMP lab_7DE8
// lab_7EA0
    pri = 0;
    return pri;
// lab_7E90
    OP_JUMP lab_7D18
// lab_7D18
    OP_INC_P_S -936
// lab_7DE0
    pri = 1;
// lab_7DE8
    OP_JZER lab_7E60
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7E58
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7E60
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7E58
}
// fun_7EC0
fun_7EC0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7F58
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
    var_56 = 0;
    pri = fun_1518()
// lab_7F58
    pri = arg_4;
    OP_JZER lab_7F90
    var_8 = 1;
    var_16 = 8;
    pri = fun_1540(var_8)
// lab_7F90
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7FE8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7FE8
    pri = 0;
    OP_JUMP lab_7FF0
// lab_7FE8
    pri = 1;
// lab_7FF0
    OP_JZER lab_80B8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_80B8
    var_16 = 0;
    pri = fun_04F0()
    OP_JZER lab_8090
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1458(var_32, var_24)
    OP_JUMP lab_80B8
// lab_80B8
    pri = arg_2;
    OP_JZER lab_8190
    var_8 = 0;
    pri = fun_04F0()
    OP_JZER lab_8160
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1148(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0910(var_40)
    OP_JUMP lab_8190
// lab_8190
    pri = arg_3;
    OP_JZER lab_81C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_14E0(var_8)
// lab_81C8
    pri = 0;
    return pri;
// lab_8160
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1148(var_16, var_8)
// lab_8090
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1458(var_16, var_8)
}
// fun_81D8
fun_81D8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7C98(var_24)
    pri = 0;
    return pri;
}
// fun_8240
fun_8240() {
    pri = g_mode;
    switch (pri) {
// switch_8300
        case default:
        {
// switch_8300_case_default
            pri = CommandNOP()
            OP_JUMP lab_8348
// lab_8348
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8300_case_0x0
            var_8 = 0;
            pri = fun_8358()
            OP_JUMP lab_8348
        }
        case 0x34d91a2774440bb1:
        {
// switch_8300_case_0x34d91a2774440bb1
            var_8 = 0;
            pri = fun_A638()
            OP_JUMP lab_8348
        }
        case 0x5253f42afe506a45:
        {
// switch_8300_case_0x5253f42afe506a45
            var_8 = 0;
            pri = fun_A548()
            OP_JUMP lab_8348
        }
    }
}
// fun_8358
fun_8358() {
    pri = 0;
    return pri;
}
// fun_8370
fun_8370() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7EC0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_83C8
fun_83C8() {
    pri = 0;
    return pri;
}
// fun_83E0
fun_83E0() {
    pri = 0;
    return pri;
}
// fun_83F8
fun_83F8() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4638777984935788544, 4657496070887047168, 4671432930524921856, -303377521461947352
    var_24 = 48;
    pri = fun_0878(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_08D0(var_40, var_32)
    var_56 = 1;
    var_64 = -1180051137964617721;
    var_72 = 16;
    pri = fun_08D0(var_64, var_56)
    var_80 = 1;
    var_88 = -303377521461947352;
    var_96 = 16;
    pri = fun_08D0(var_88, var_80)
    var_104 = 1;
    var_112 = 3891752725908598821;
    var_120 = 16;
    pri = fun_08D0(var_112, var_104)
    var_128 = 1;
    var_136 = 3891749427373714188;
    var_144 = 16;
    pri = fun_08D0(var_136, var_128)
    var_152 = 1;
    var_160 = 3891750526885342399;
    var_168 = 16;
    pri = fun_08D0(var_160, var_152)
    var_176 = 1;
    var_184 = 3891747228350457766;
    var_192 = 16;
    pri = fun_08D0(var_184, var_176)
    var_200 = 1;
    var_208 = 3891748327862085977;
    var_216 = 16;
    pri = fun_08D0(var_208, var_200)
    var_224 = 1;
    var_232 = -2880323008892522216;
    var_240 = 16;
    pri = fun_08D0(var_232, var_224)
    var_248 = 1;
    var_256 = -2880319710357637583;
    var_264 = 16;
    pri = fun_08D0(var_256, var_248)
    var_272 = 1;
    var_280 = -2880320809869265794;
    var_288 = 16;
    pri = fun_08D0(var_280, var_272)
    var_296 = 1;
    var_304 = -2880318610846009372;
    var_312 = 16;
    pri = fun_08D0(var_304, var_296)
    var_320 = 1;
    var_328 = -2880315312311124739;
    var_336 = 16;
    pri = fun_08D0(var_328, var_320)
    var_344 = 1;
    var_352 = -4275866473915358187;
    var_360 = 16;
    pri = fun_08D0(var_352, var_344)
    var_368 = 1;
    var_376 = 1451425131014577226;
    var_384 = 16;
    pri = fun_08D0(var_376, var_368)
    var_392 = 1;
    var_400 = 1451426230526205437;
    var_408 = 16;
    pri = fun_08D0(var_400, var_392)
    var_416 = 1;
    var_424 = 1451246788605109846;
    var_432 = 16;
    pri = fun_08D0(var_424, var_416)
    var_440 = 1;
    var_448 = 5853608284009014273;
    var_456 = 16;
    pri = fun_08D0(var_448, var_440)
    var_464 = 1;
    var_472 = 8;
    pri = fun_0060(var_464)
    pri = EvCameraStart()
    var_480 = 0;
    var_488 = 4631600373029666816;
    var_496 = 0;
    OP_PUSH5_C 4656228861745802772, 4637854747012177592, 4671571688892347187, 4657714477876788593, 4636405854569559491
    var_504 = 4671421536835679027;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 15;
    var_528 = 8;
    pri = fun_0060(var_520)
    var_536 = 31064;
    pri = SoundPostEvent(var_536)
    var_544 = 0;
    var_552 = 3;
    var_560 = 2;
    var_568 = 100;
    var_576 = -1;
    OP_PUSH2_C -8434791988554871026, -303377521461947352
    var_584 = 56;
    pri = fun_1D88(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 5;
    var_600 = 8;
    pri = fun_0060(var_592)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C -303377521461947352, -1180051137964617721
    var_640 = 48;
    pri = fun_09C0(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 10;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C -303377521461947352, 8802641224559852288
    var_696 = 48;
    pri = fun_09C0(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 1;
    var_712 = 8;
    pri = fun_1ED0(var_704)
    var_720 = 0;
    pri = fun_1F90()
    var_728 = -1180051137964617721;
    var_736 = 8;
    pri = fun_0A18(var_728)
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_0A18(var_744)
    var_760 = 1;
    var_768 = -1;
    var_776 = -1;
    var_784 = 3;
    var_792 = 0;
    var_800 = 1;
    var_808 = -1180051137964617721;
    var_816 = 56;
    pri = fun_2050(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 0;
    var_832 = 3;
    var_840 = 0;
    var_848 = 100;
    var_856 = -1;
    OP_PUSH2_C -3339558760854904771, -1180051137964617721
    var_864 = 56;
    pri = fun_1D88(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = -1180051137964617721;
    var_880 = 8;
    pri = fun_0BF0(var_872)
    var_888 = 1;
    var_896 = 8;
    pri = fun_1ED0(var_888)
    var_904 = 0;
    pri = fun_1F90()
    var_912 = 0;
    var_920 = 4630361883132139930;
    var_928 = 0;
    OP_PUSH5_C 4656773779708528558, 4632726272936509440, 4671429128963468820, 4657900207380952515, 4640025622770058527
    var_936 = 4671589734626938061;
    var_944 = 1;
    pri = EvCameraMove(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 0;
    pri = fun_1FC0()
    var_960 = 0;
    var_968 = 4630361883132139930;
    var_976 = 2;
    OP_PUSH5_C 4656705170182955336, 4632726272936509440, 4671435731530793615, 4657840020114448056, 4640025622770058527
    var_984 = 4671596334445483786;
    var_992 = 120;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 1;
    var_1008 = 0;
    var_1016 = 4641240890982006784;
    var_1024 = 0;
    var_1032 = 0;
    OP_PUSH4_C 4657232188096380928, 4671474162210963456, 4607182418800017408, -303377521461947352
    var_1040 = 72;
    pri = fun_0948(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 0;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 100;
    var_1080 = -1;
    OP_PUSH2_C -8434793088066499237, -303377521461947352
    var_1088 = 56;
    pri = fun_1D88(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 1;
    var_1104 = 8;
    pri = fun_1ED0(var_1096)
    var_1112 = 0;
    pri = fun_1F90()
    var_1120 = -303377521461947352;
    var_1128 = 8;
    pri = fun_0A18(var_1120)
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = -1180051137964617721;
    var_1192 = 56;
    pri = fun_2050(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 0;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 100;
    var_1232 = -1;
    OP_PUSH2_C -3339562059389789404, -1180051137964617721
    var_1240 = 56;
    pri = fun_1D88(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = -1180051137964617721;
    var_1256 = 8;
    pri = fun_0BF0(var_1248)
    var_1264 = 1;
    var_1272 = 8;
    pri = fun_1ED0(var_1264)
    var_1280 = 1;
    var_1288 = 1;
    var_1296 = -1;
    var_1304 = -1;
    var_1312 = 0;
    var_1320 = 1;
    var_1328 = -1180051137964617721;
    var_1336 = 56;
    pri = fun_3C30(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    OP_PUSH2_C -3339560959878161193, -1180051137964617721
    var_1384 = 56;
    pri = fun_1D88(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_1ED0(var_1392)
    var_1408 = 0;
    pri = fun_1F90()
    var_1416 = 1;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 1;
    var_1448 = -1180051137964617721;
    var_1456 = 40;
    pri = fun_5F68(var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1464 = 0;
    var_1472 = 4628799697011395789;
    var_1480 = 0;
    OP_PUSH5_C 4656757243053646807, 4637516977040124805, 4671510756706714911, 4657577038923316593, 4637808303641020334
    var_1488 = 4671462196775674184;
    var_1496 = 1;
    pri = EvCameraMove(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C -8434794187578127448, -303377521461947352
    var_1544 = 56;
    pri = fun_1D88(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = -1180051137964617721;
    var_1560 = 8;
    pri = fun_0BF0(var_1552)
    var_1568 = 1;
    var_1576 = 8;
    pri = fun_1ED0(var_1568)
    var_1584 = 1;
    var_1592 = 1;
    var_1600 = -1;
    var_1608 = -1;
    var_1616 = 0;
    var_1624 = 2;
    var_1632 = -303377521461947352;
    var_1640 = 56;
    pri = fun_3C30(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 0;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C -8434786490996729971, -303377521461947352
    var_1688 = 56;
    pri = fun_1D88(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 1;
    var_1704 = 8;
    pri = fun_1ED0(var_1696)
    var_1712 = 1;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 2;
    var_1744 = -303377521461947352;
    var_1752 = 40;
    pri = fun_5F68(var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1760 = 0;
    var_1768 = 3;
    var_1776 = 0;
    var_1784 = 100;
    var_1792 = -1;
    OP_PUSH2_C -8434787590508358182, -303377521461947352
    var_1800 = 56;
    pri = fun_1D88(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1808 = -303377521461947352;
    var_1816 = 8;
    pri = fun_0BF0(var_1808)
    var_1824 = 1;
    var_1832 = 8;
    pri = fun_1ED0(var_1824)
    var_1840 = 5;
    var_1848 = 5;
    var_1856 = -303377521461947352;
    var_1864 = 24;
    pri = fun_1208(var_1856, var_1848, var_1840)
    var_1872 = 0;
    var_1880 = 4626097537234973491;
    var_1888 = 0;
    OP_PUSH5_C 4657083380192677724, 4639254029490150441, 4671413257513121874, 4657386383607060234, 4634546712348385608
    var_1896 = 4671545413313222410;
    var_1904 = 1;
    pri = EvCameraMove(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1912 = 0;
    pri = fun_1FC0()
    var_1920 = 0;
    var_1928 = 4626097537234973491;
    var_1936 = 2;
    OP_PUSH5_C 4657083754026631168, 4639401100165481759, 4671413422439866040, 4657353618160552509, 4635415766338979758
    var_1944 = 4671531111415724114;
    var_1952 = 120;
    pri = EvCameraMove(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1960 = 0;
    var_1968 = 3;
    var_1976 = 0;
    var_1984 = 100;
    var_1992 = -1;
    OP_PUSH2_C -8434788690019986393, -303377521461947352
    var_2000 = 56;
    pri = fun_1D88(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2008 = 1;
    var_2016 = 8;
    pri = fun_1ED0(var_2008)
    var_2024 = 0;
    pri = fun_1F90()
    var_2032 = 0;
    var_2040 = 4630643358108850586;
    var_2048 = 0;
    OP_PUSH5_C 4656658858753193411, 4638378994156301189, 4671528046527061688, 4657280830490793738, 4637971559127512515
    var_2056 = 4671496790160263086;
    var_2064 = 1;
    pri = EvCameraMove(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 0;
    pri = fun_1FC0()
    var_2080 = 0;
    var_2088 = 4630643358108850586;
    var_2096 = 2;
    OP_PUSH5_C 4656684235481562481, 4638378994156301189, 4671531793112933335, 4657293518854978273, 4637971559127512515
    var_2104 = 4671500539494913802;
    var_2112 = 120;
    pri = EvCameraMove(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2120 = 1;
    var_2128 = 1;
    var_2136 = -1;
    var_2144 = -1;
    var_2152 = 0;
    var_2160 = 6;
    var_2168 = -1180051137964617721;
    var_2176 = 56;
    pri = fun_3C30(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2184 = 0;
    var_2192 = 3;
    var_2200 = 0;
    var_2208 = 100;
    var_2216 = -1;
    OP_PUSH2_C -3339564258413045826, -1180051137964617721
    var_2224 = 56;
    pri = fun_1D88(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2232 = 1;
    var_2240 = 8;
    pri = fun_1ED0(var_2232)
    var_2248 = 0;
    pri = fun_1F90()
    var_2256 = 1;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 6;
    var_2288 = -1180051137964617721;
    var_2296 = 40;
    pri = fun_5F68(var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2304 = 0;
    var_2312 = 4627589354611539968;
    var_2320 = 0;
    OP_PUSH5_C 4656938794413625180, 4637412831298741862, 4671493170018228634, 4657550628654017413, 4638564063953488445
    var_2328 = 4671469577247475630;
    var_2336 = 1;
    pri = EvCameraMove(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2344 = 0;
    pri = fun_1FC0()
    var_2352 = 0;
    var_2360 = 4627589354611539968;
    var_2368 = 2;
    OP_PUSH5_C 4656931735548974858, 4637412831298741862, 4671490305790438277, 4657543613769832202, 4638563360266046669
    var_2376 = 4671466746005034107;
    var_2384 = 120;
    pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 0;
    var_2400 = 3;
    var_2408 = 0;
    var_2416 = 100;
    var_2424 = -1;
    OP_PUSH2_C -8434789789531614604, -303377521461947352
    var_2432 = 56;
    pri = fun_1D88(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2440 = 1;
    var_2448 = 8;
    pri = fun_1ED0(var_2440)
    var_2456 = 0;
    pri = fun_1F90()
    var_2464 = -1180051137964617721;
    var_2472 = 8;
    pri = fun_0BF0(var_2464)
    var_2480 = 8;
    var_2488 = 8;
    pri = fun_0518(var_2480)
    var_2496 = 0;
    pri = fun_0550()
    var_2504 = 31224;
    pri = SoundPostEvent(var_2504)
    var_2512 = 1;
    var_2520 = 0;
    var_2528 = 31488;
    var_2536 = 8;
    var_2544 = 32;
    pri = fun_03F0(var_2536, var_2528, var_2520, var_2512)
    var_2552 = 0;
    pri = fun_0460()
    var_2560 = 0;
    var_2568 = 8802641224559852288;
    var_2576 = 16;
    pri = fun_08D0(var_2568, var_2560)
    var_2584 = 0;
    var_2592 = -1180051137964617721;
    var_2600 = 16;
    pri = fun_08D0(var_2592, var_2584)
    var_2608 = 0;
    var_2616 = -303377521461947352;
    var_2624 = 16;
    pri = fun_08D0(var_2616, var_2608)
    var_2632 = 0;
    var_2640 = 3891752725908598821;
    var_2648 = 16;
    pri = fun_08D0(var_2640, var_2632)
    var_2656 = 0;
    var_2664 = 3891749427373714188;
    var_2672 = 16;
    pri = fun_08D0(var_2664, var_2656)
    var_2680 = 0;
    var_2688 = 3891750526885342399;
    var_2696 = 16;
    pri = fun_08D0(var_2688, var_2680)
    var_2704 = 0;
    var_2712 = 3891747228350457766;
    var_2720 = 16;
    pri = fun_08D0(var_2712, var_2704)
    var_2728 = 0;
    var_2736 = 3891748327862085977;
    var_2744 = 16;
    pri = fun_08D0(var_2736, var_2728)
    var_2752 = 0;
    var_2760 = -2880323008892522216;
    var_2768 = 16;
    pri = fun_08D0(var_2760, var_2752)
    var_2776 = 0;
    var_2784 = -2880319710357637583;
    var_2792 = 16;
    pri = fun_08D0(var_2784, var_2776)
    var_2800 = 0;
    var_2808 = -2880320809869265794;
    var_2816 = 16;
    pri = fun_08D0(var_2808, var_2800)
    var_2824 = 0;
    var_2832 = -2880318610846009372;
    var_2840 = 16;
    pri = fun_08D0(var_2832, var_2824)
    var_2848 = 0;
    var_2856 = -2880315312311124739;
    var_2864 = 16;
    pri = fun_08D0(var_2856, var_2848)
    var_2872 = 0;
    var_2880 = -4275866473915358187;
    var_2888 = 16;
    pri = fun_08D0(var_2880, var_2872)
    var_2896 = 0;
    var_2904 = 1451425131014577226;
    var_2912 = 16;
    pri = fun_08D0(var_2904, var_2896)
    var_2920 = 0;
    var_2928 = 1451426230526205437;
    var_2936 = 16;
    pri = fun_08D0(var_2928, var_2920)
    var_2944 = 0;
    var_2952 = 1451246788605109846;
    var_2960 = 16;
    pri = fun_08D0(var_2952, var_2944)
    var_2968 = 0;
    var_2976 = 5853608284009014273;
    var_2984 = 16;
    pri = fun_08D0(var_2976, var_2968)
    var_2992 = 31504;
    pri = SoundPostEvent(var_2992)
    pri = 0;
    return pri;
}
// fun_9CE8
fun_9CE8() {
    pri = 0;
    return pri;
}
// fun_9D00
fun_9D00() {
    var_8 = 1390;
    var_16 = 8;
    pri = fun_81D8(var_8)
    var_24 = 5031382083998270356;
    pri = VanishFlagReset(var_24)
    var_32 = 2200388119624283720;
    var_40 = 8;
    pri = fun_06A0(var_32)
    var_48 = -3736443088335965036;
    var_56 = 8;
    pri = fun_06A0(var_48)
    var_64 = -2880321909380894005;
    var_72 = 8;
    pri = fun_06A0(var_64)
    var_80 = 3891751626396970610;
    var_88 = 8;
    pri = fun_06A0(var_80)
    var_96 = 6937552327517786733;
    var_104 = 8;
    pri = fun_06A0(var_96)
    var_112 = 6937540232889876412;
    var_120 = 8;
    pri = fun_06A0(var_112)
    var_128 = -6406173741565687760;
    var_136 = 8;
    pri = fun_06A0(var_128)
    var_144 = -463679841549179559;
    var_152 = 8;
    pri = fun_06A0(var_144)
    var_160 = 2200388119624283720;
    pri = VanishFlagReset(var_160)
    var_168 = -3736443088335965036;
    pri = VanishFlagReset(var_168)
    var_176 = -2880321909380894005;
    pri = VanishFlagReset(var_176)
    var_184 = 3891751626396970610;
    pri = VanishFlagReset(var_184)
    var_192 = 6937552327517786733;
    pri = VanishFlagReset(var_192)
    var_200 = 6937552327517786733;
    pri = VanishFlagReset(var_200)
    var_208 = 6937540232889876412;
    pri = VanishFlagReset(var_208)
    var_216 = -463679841549179559;
    pri = VanishFlagReset(var_216)
    var_224 = 5853607184497386062;
    pri = VanishFlagReset(var_224)
    var_232 = 547143905629064524;
    pri = VanishFlagReset(var_232)
    var_240 = 5123282357415888306;
    pri = VanishFlagReset(var_240)
    var_248 = -1893674408148688629;
    pri = VanishFlagReset(var_248)
    var_256 = -7957091523925665997;
    pri = VanishFlagReset(var_256)
    var_264 = 7366913082650908554;
    pri = VanishFlagReset(var_264)
    var_272 = -6172060507476320999;
    pri = VanishFlagReset(var_272)
    var_280 = -5194924915703375849;
    pri = VanishFlagReset(var_280)
    var_288 = 2486974047188821742;
    pri = VanishFlagReset(var_288)
    var_296 = 1694664729997947566;
    pri = VanishFlagReset(var_296)
    var_304 = -7538304522349733508;
    pri = VanishFlagReset(var_304)
    var_312 = 2427332002786397889;
    pri = VanishFlagReset(var_312)
    var_320 = -4984660476301504303;
    pri = VanishFlagReset(var_320)
    var_328 = -4984672570929414624;
    pri = VanishFlagReset(var_328)
    var_336 = -5819758985880837554;
    pri = VanishFlagReset(var_336)
    var_344 = 7078654711603879870;
    pri = VanishFlagReset(var_344)
    var_352 = 1303735410573414071;
    pri = VanishFlagReset(var_352)
    var_360 = 4912827976898292528;
    pri = FlagReset(var_360)
    var_368 = -3164948309531026310;
    pri = FlagReset(var_368)
    var_376 = -5962307436086630610;
    pri = FlagSet(var_376)
    var_384 = -3814344741079757246;
    pri = FlagSet(var_384)
    var_392 = -1668178174224212191;
    pri = FlagSet(var_392)
    var_400 = -2724302863974222557;
    pri = FlagSet(var_400)
    var_408 = 5642674740608937869;
    pri = FlagSet(var_408)
    var_416 = -667557990554982888;
    var_424 = 8;
    pri = fun_0820(var_416)
    var_432 = -7410766090770750972;
    var_440 = 8;
    pri = fun_06A0(var_432)
    var_448 = 5051424678356125252;
    var_456 = 8;
    pri = fun_06A0(var_448)
    var_464 = -303377521461947352;
    var_472 = 8;
    pri = fun_0820(var_464)
    pri = 0;
    return pri;
}
// fun_A440
fun_A440() {
    var_8 = 0;
    pri = fun_06D0()
    var_16 = 0;
    var_24 = 0;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2914;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 4200;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH3_C 4546239514756643921, 4821005325585167003, 5922787848506018475
    var_112 = 80;
    pri = fun_05E0(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_A548
fun_A548() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8370()
    var_16 = 0;
    pri = fun_83C8()
    var_24 = 0;
    pri = fun_83E0()
    var_32 = 0;
    pri = fun_83F8()
    var_40 = 0;
    pri = fun_9CE8()
    var_48 = 0;
    pri = fun_9D00()
    var_56 = 0;
    pri = fun_A440()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A638
fun_A638() {
    var_8 = 0;
    pri = fun_83C8()
    var_16 = 0;
    pri = fun_9D00()
    pri = 0;
    return pri;
}
