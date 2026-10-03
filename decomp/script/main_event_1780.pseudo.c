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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    pri = arg_0;
    switch (pri) {
// switch_06C0
        case default:
        {
// switch_06C0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_06C0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
        case 0x1:
        {
// switch_06C0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
        case 0x2:
        {
// switch_06C0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
        case 0x3:
        {
// switch_06C0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
        case 0x4:
        {
// switch_06C0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
        case 0x5:
        {
// switch_06C0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
        case 0x6:
        {
// switch_06C0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06C0_case_default
        }
    }
}
// fun_0758
fun_0758() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07C0
// lab_07C0
    var_8 = 0;
    pri = fun_0908()
    OP_JNZ lab_07F8
    OP_JUMP lab_0828
// lab_07F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C0
// lab_0828
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0858
// lab_0858
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_0898
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
    pri = 0;
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0908
fun_0908() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
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
// fun_0A70
fun_0A70() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14E0(var_8)
    OP_JZER lab_0B90
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1510(var_24)
    OP_JNZ lab_0B90
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BA0
// lab_0BA0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C00
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BA0
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D38
    pri = 0;
    return pri;
// lab_0D38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D78
// lab_0D78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14E0(var_8)
    OP_JNZ lab_0E00
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DF0
    pri = 0;
    return pri;
// lab_0E00
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E48
    pri = 0;
    return pri;
// lab_0E48
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EF0(var_8)
    pri = 0;
    return pri;
// lab_0EA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D78
    pri = 0;
    return pri;
// lab_0DF0
    OP_JUMP lab_0E48
}
// fun_0EF0
fun_0EF0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F28
fun_0F28() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F78
    pri = 0;
    return pri;
// lab_0F78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14E0(var_8)
    OP_JZER lab_10A8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FD0
    OP_ZERO_P_S 64
// lab_10A8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10E0
    OP_CONST_S 64, 1
// lab_10E0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1118
    OP_CONST_S 72, 1
// lab_1118
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
// lab_0FD0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF8
    OP_ZERO_P_S 72
// lab_0FF8
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
    OP_JUMP lab_11B8
// lab_11B8
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1330(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_13A8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1370(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_13E8(var_24)
    pri = 0;
    return pri;
}
// fun_14E0
fun_14E0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1510
fun_1510() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1540
fun_1540() {
    OP_JUMP lab_1558
// lab_1558
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_15E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_15D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    pri = 0;
    return pri;
// lab_15E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1678
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1668
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    pri = 0;
    return pri;
// lab_1678
    pri = 0;
    return pri;
// lab_1668
    OP_JUMP lab_1688
// lab_1688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1558
    pri = 0;
    return pri;
// lab_15D8
    OP_JUMP lab_1688
}
// fun_16C8
fun_16C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1540(var_40)
    pri = 0;
    return pri;
}
// fun_1750
fun_1750() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1788
fun_1788() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_17B0
fun_17B0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_17E8
fun_17E8() {
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
// switch_1E00
        case default:
        {
// switch_1E00_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E48
// lab_1E48
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
            OP_JNZ lab_1EF0
            var_88 = 0;
            pri = fun_20A8()
// lab_1EF0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E00_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_19E8
                case default:
                {
// switch_19E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A60
// lab_1A60
                    OP_JUMP lab_1E48
                }
                case 0x0:
                {
// switch_19E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A60
                }
                case 0x1:
                {
// switch_19E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A60
                }
                case 0x2:
                {
// switch_19E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A60
                }
                case 0x3:
                {
// switch_19E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A60
                }
                case 0x4:
                {
// switch_19E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A60
                }
                case 0x5:
                {
// switch_19E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A60
                }
            }
        }
        case 0x65:
        {
// switch_1E00_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BA0
                case default:
                {
// switch_1BA0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C18
// lab_1C18
                    OP_JUMP lab_1E48
                }
                case 0x0:
                {
// switch_1BA0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C18
                }
                case 0x1:
                {
// switch_1BA0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C18
                }
                case 0x2:
                {
// switch_1BA0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C18
                }
                case 0x3:
                {
// switch_1BA0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C18
                }
                case 0x4:
                {
// switch_1BA0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C18
                }
                case 0x5:
                {
// switch_1BA0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C18
                }
            }
        }
        case 0x66:
        {
// switch_1E00_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D58
                case default:
                {
// switch_1D58_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DD0
// lab_1DD0
                    OP_JUMP lab_1E48
                }
                case 0x0:
                {
// switch_1D58_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DD0
                }
                case 0x1:
                {
// switch_1D58_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DD0
                }
                case 0x2:
                {
// switch_1D58_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DD0
                }
                case 0x3:
                {
// switch_1D58_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DD0
                }
                case 0x4:
                {
// switch_1D58_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DD0
                }
                case 0x5:
                {
// switch_1D58_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DD0
                }
            }
        }
    }
}
// fun_1F08
fun_1F08() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CB8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FB0
    pri = 1;
    return pri;
// lab_1FB0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FF8
fun_1FF8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2048
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F08(var_8)
    arg_2 = pri;
// lab_2048
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_17E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A8
fun_20A8() {
    OP_JUMP lab_20C0
// lab_20C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2100
    pri = 0;
    return pri;
// lab_2100
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20C0
    pri = 0;
    return pri;
}
// fun_2140
fun_2140() {
    var_8 = 0;
    pri = fun_20A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_21F0
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_21F0
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2230
fun_2230() {
    OP_JUMP lab_2248
// lab_2248
    pri = EvCameraMoveWait_()
    OP_JZER lab_2280
    pri = 0;
    return pri;
// lab_2280
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2248
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
    pri = arg_6;
    OP_JNZ lab_22F8
    var_8 = 0;
    pri = fun_11C8()
// lab_22F8
    pri = arg_1;
    switch (pri) {
// switch_3860
        case default:
        {
// switch_3860_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3BB0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3BB0
            pri = 1;
            OP_JUMP lab_3BB8
// lab_3BB0
            pri = 0;
// lab_3BB8
            OP_JZER lab_3D10
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CB8(var_24, var_16)
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
            var_64 = 8472;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3D70
// lab_3D10
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3D70
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3DD0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E30
// lab_3DD0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E30
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E30
            pri = arg_2;
            OP_JZER lab_3E70
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3E70
            var_8 = 0;
            pri = fun_1208()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3860_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x1:
        {
// switch_3860_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x2:
        {
// switch_3860_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x3:
        {
// switch_3860_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x4:
        {
// switch_3860_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x5:
        {
// switch_3860_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0x6:
        {
// switch_3860_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0x7:
        {
// switch_3860_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0x8:
        {
// switch_3860_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x9:
        {
// switch_3860_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0xa:
        {
// switch_3860_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0xb:
        {
// switch_3860_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0xc:
        {
// switch_3860_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0xd:
        {
// switch_3860_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0xe:
        {
// switch_3860_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0xf:
        {
// switch_3860_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x10:
        {
// switch_3860_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x11:
        {
// switch_3860_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0x12:
        {
// switch_3860_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0x13:
        {
// switch_3860_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x14:
        {
// switch_3860_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x15:
        {
// switch_3860_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x16:
        {
// switch_3860_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x17:
        {
// switch_3860_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x18:
        {
// switch_3860_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x19:
        {
// switch_3860_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3860_case_default
        }
        case 0x1a:
        {
// switch_3860_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6144;
            var_88 = 6136;
            var_96 = 6128;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3860_case_default
        }
        case 0x1b:
        {
// switch_3860_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6368;
            var_88 = 6360;
            var_96 = 6352;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3860_case_default
        }
        case 0x1c:
        {
// switch_3860_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6592;
            var_88 = 6584;
            var_96 = 6576;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3860_case_default
        }
        case 0x1d:
        {
// switch_3860_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x1e:
        {
// switch_3860_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x1f:
        {
// switch_3860_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x20:
        {
// switch_3860_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x21:
        {
// switch_3860_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x22:
        {
// switch_3860_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x23:
        {
// switch_3860_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x24:
        {
// switch_3860_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x25:
        {
// switch_3860_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x26:
        {
// switch_3860_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x27:
        {
// switch_3860_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x28:
        {
// switch_3860_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
        case 0x29:
        {
// switch_3860_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3860_case_default
        }
    }
}
// fun_3EA0
fun_3EA0() {
    pri = arg_5;
    OP_JNZ lab_3ED8
    var_8 = 0;
    pri = fun_11C8()
// lab_3ED8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3F28
    OP_CONST_S -8, -1
// lab_3F28
    pri = arg_1;
    switch (pri) {
// switch_59E0
        case default:
        {
// switch_59E0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5E88
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0CB8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E88
            pri = 1;
            OP_JUMP lab_5E90
// lab_5E88
            pri = 0;
// lab_5E90
            OP_JZER lab_5EE0
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6138
// lab_5EE0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5F48
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5F48
            pri = 1;
            OP_JUMP lab_5F50
// lab_5F48
            pri = 0;
// lab_5F50
            OP_JZER lab_60D8
            var_16 = 28504;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CB8(var_24, var_16)
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
            var_176 = 28608;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28624;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6138
// lab_60D8
            var_8 = 64;
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6138
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_61A8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_61A8
            var_8 = 0;
            pri = fun_1208()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_59E0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1:
        {
// switch_59E0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2:
        {
// switch_59E0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x3:
        {
// switch_59E0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x4:
        {
// switch_59E0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x5:
        {
// switch_59E0_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EF0(var_40)
            OP_JUMP switch_59E0_case_default
        }
        case 0x6:
        {
// switch_59E0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x7:
        {
// switch_59E0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x8:
        {
// switch_59E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x9:
        {
// switch_59E0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0xa:
        {
// switch_59E0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0xb:
        {
// switch_59E0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0xc:
        {
// switch_59E0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0xd:
        {
// switch_59E0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19136;
            var_72 = 18960;
            var_80 = 18776;
            var_88 = 18584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0xe:
        {
// switch_59E0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19792;
            var_72 = 19584;
            var_80 = 19368;
            var_88 = 19144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0xf:
        {
// switch_59E0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20184;
            var_72 = 20064;
            var_80 = 19936;
            var_88 = 19800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x10:
        {
// switch_59E0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20528;
            var_72 = 20424;
            var_80 = 20312;
            var_88 = 20192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x11:
        {
// switch_59E0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20872;
            var_72 = 20768;
            var_80 = 20656;
            var_88 = 20536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x12:
        {
// switch_59E0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x13:
        {
// switch_59E0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x14:
        {
// switch_59E0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21432;
            var_72 = 21256;
            var_80 = 21072;
            var_88 = 20880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x15:
        {
// switch_59E0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x16:
        {
// switch_59E0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x17:
        {
// switch_59E0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x18:
        {
// switch_59E0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x19:
        {
// switch_59E0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1a:
        {
// switch_59E0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1b:
        {
// switch_59E0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1c:
        {
// switch_59E0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21824;
            var_72 = 21704;
            var_80 = 21576;
            var_88 = 21440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1d:
        {
// switch_59E0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1e:
        {
// switch_59E0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22288;
            var_72 = 22144;
            var_80 = 21992;
            var_88 = 21832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x1f:
        {
// switch_59E0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x20:
        {
// switch_59E0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x21:
        {
// switch_59E0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x22:
        {
// switch_59E0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x23:
        {
// switch_59E0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x24:
        {
// switch_59E0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22656;
            var_72 = 22544;
            var_80 = 22424;
            var_88 = 22296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x25:
        {
// switch_59E0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23024;
            var_72 = 22912;
            var_80 = 22792;
            var_88 = 22664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x26:
        {
// switch_59E0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x27:
        {
// switch_59E0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x28:
        {
// switch_59E0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x29:
        {
// switch_59E0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23464;
            var_72 = 23328;
            var_80 = 23184;
            var_88 = 23032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2a:
        {
// switch_59E0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23856;
            var_72 = 23736;
            var_80 = 23608;
            var_88 = 23472;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2b:
        {
// switch_59E0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24272;
            var_72 = 24144;
            var_80 = 24008;
            var_88 = 23864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2c:
        {
// switch_59E0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24712;
            var_72 = 24576;
            var_80 = 24432;
            var_88 = 24280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2d:
        {
// switch_59E0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2e:
        {
// switch_59E0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25032;
            var_72 = 24936;
            var_80 = 24832;
            var_88 = 24720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x2f:
        {
// switch_59E0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25424;
            var_72 = 25304;
            var_80 = 25176;
            var_88 = 25040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x30:
        {
// switch_59E0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25816;
            var_72 = 25696;
            var_80 = 25568;
            var_88 = 25432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x31:
        {
// switch_59E0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x32:
        {
// switch_59E0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x33:
        {
// switch_59E0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26208;
            var_72 = 26088;
            var_80 = 25960;
            var_88 = 25824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x34:
        {
// switch_59E0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26464;
            var_80 = 26344;
            var_88 = 26216;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x35:
        {
// switch_59E0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27064;
            var_72 = 26912;
            var_80 = 26752;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x36:
        {
// switch_59E0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27320;
            var_80 = 27200;
            var_88 = 27072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x37:
        {
// switch_59E0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x38:
        {
// switch_59E0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27800;
            var_72 = 27688;
            var_80 = 27568;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59E0_case_default
        }
        case 0x39:
        {
// switch_59E0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x3a:
        {
// switch_59E0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x3b:
        {
// switch_59E0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x3c:
        {
// switch_59E0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x3d:
        {
// switch_59E0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
        case 0x3e:
        {
// switch_59E0_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            OP_JUMP switch_59E0_case_default
        }
    }
}
// fun_61D8
fun_61D8() {
    pri = arg_4;
    OP_JNZ lab_6210
    var_8 = 0;
    pri = fun_11C8()
// lab_6210
    pri = arg_1;
    switch (pri) {
// switch_75E8
        case default:
        {
// switch_75E8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29200;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_14E0(var_264)
            OP_JZER lab_7BB0
            pri = arg_3;
            switch (pri) {
// switch_7B58
                case default:
                {
// switch_7B58_case_default
                    OP_JUMP lab_7E68
// lab_7E68
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7ED8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7ED8
                    var_8 = 0;
                    pri = fun_1208()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7B58_case_0x1
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B58_case_default
                }
                case 0x2:
                {
// switch_7B58_case_0x2
                    var_8 = 32;
                    var_16 = 29456;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B58_case_default
                }
                case 0x3:
                {
// switch_7B58_case_0x3
                    var_8 = 32;
                    var_16 = 29256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B58_case_default
                }
            }
// lab_7BB0
            pri = arg_1;
            OP_JZER lab_7C00
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7C00
            pri = 0;
            OP_JUMP lab_7C08
// lab_7C00
            pri = 1;
// lab_7C08
            OP_JZER lab_7C70
            var_8 = 29552;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CB8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7C70
            pri = 1;
            OP_JUMP lab_7C78
// lab_7C70
            pri = 0;
// lab_7C78
            OP_JZER lab_7CC8
            var_8 = 32;
            var_16 = 29648;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7E68
// lab_7CC8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7D30
            var_8 = 32;
            var_16 = 29808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7E68
// lab_7D30
            var_16 = 29928;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CB8(var_24, var_16)
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
            var_176 = 30032;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30048;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_75E8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1:
        {
// switch_75E8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2:
        {
// switch_75E8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x3:
        {
// switch_75E8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x4:
        {
// switch_75E8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x5:
        {
// switch_75E8_case_0x5
            var_8 = 1;
            var_16 = 28680;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EF0(var_40)
            OP_JUMP switch_75E8_case_default
        }
        case 0x6:
        {
// switch_75E8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x7:
        {
// switch_75E8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x8:
        {
// switch_75E8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x9:
        {
// switch_75E8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0xa:
        {
// switch_75E8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0xb:
        {
// switch_75E8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0xc:
        {
// switch_75E8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0xd:
        {
// switch_75E8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0xe:
        {
// switch_75E8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0xf:
        {
// switch_75E8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x10:
        {
// switch_75E8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x11:
        {
// switch_75E8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x12:
        {
// switch_75E8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x13:
        {
// switch_75E8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x14:
        {
// switch_75E8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x15:
        {
// switch_75E8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x16:
        {
// switch_75E8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x17:
        {
// switch_75E8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x18:
        {
// switch_75E8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x19:
        {
// switch_75E8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1a:
        {
// switch_75E8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1b:
        {
// switch_75E8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1c:
        {
// switch_75E8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1d:
        {
// switch_75E8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1e:
        {
// switch_75E8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x1f:
        {
// switch_75E8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x20:
        {
// switch_75E8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x21:
        {
// switch_75E8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x22:
        {
// switch_75E8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x23:
        {
// switch_75E8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x24:
        {
// switch_75E8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x25:
        {
// switch_75E8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x26:
        {
// switch_75E8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x27:
        {
// switch_75E8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x28:
        {
// switch_75E8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x29:
        {
// switch_75E8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2a:
        {
// switch_75E8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2b:
        {
// switch_75E8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2c:
        {
// switch_75E8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2d:
        {
// switch_75E8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2e:
        {
// switch_75E8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x2f:
        {
// switch_75E8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x30:
        {
// switch_75E8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x31:
        {
// switch_75E8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x32:
        {
// switch_75E8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x33:
        {
// switch_75E8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x34:
        {
// switch_75E8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x35:
        {
// switch_75E8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x36:
        {
// switch_75E8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x37:
        {
// switch_75E8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x38:
        {
// switch_75E8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x39:
        {
// switch_75E8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x3a:
        {
// switch_75E8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x3b:
        {
// switch_75E8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x3c:
        {
// switch_75E8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28776;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x3d:
        {
// switch_75E8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28952;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
        case 0x3e:
        {
// switch_75E8_case_0x3e
            var_8 = 3;
            var_16 = 29096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C78(var_24, var_16, var_8)
            OP_JUMP switch_75E8_case_default
        }
    }
}
// fun_7F08
fun_7F08() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8118(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30096;
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
    var_424 = 30152;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30168;
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
    OP_JZER lab_8100
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8100
    pri = 0;
    return pri;
}
// fun_8118
fun_8118() {
    var_8 = arg_1;
    var_16 = 30216;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C78(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8160
fun_8160() {
    pri = 30320;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_81E8
// lab_81E8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8368
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8358
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_82A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_82A8
    pri = 0;
    OP_JUMP lab_82B0
// lab_8368
    pri = 0;
    return pri;
// lab_8358
    OP_JUMP lab_81E0
// lab_81E0
    OP_INC_P_S -936
// lab_82A8
    pri = 1;
// lab_82B0
    OP_JZER lab_8328
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8320
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8328
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8320
}
// fun_8388
fun_8388() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_83C0
fun_83C0() {
    var_8 = 0;
    pri = fun_8388()
    switch (pri) {
// switch_8470
        case default:
        {
// switch_8470_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_84B8
// lab_84B8
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8470_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_84B8
        }
        case 0x1:
        {
// switch_8470_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_84B8
        }
        case 0x2:
        {
// switch_8470_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_84B8
        }
    }
}
// fun_84C8
fun_84C8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8560
    var_8 = 1;
    var_16 = 0;
    var_24 = 31240;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1788()
// lab_8560
    pri = arg_4;
    OP_JZER lab_8598
    var_8 = 1;
    var_16 = 8;
    pri = fun_17B0(var_8)
// lab_8598
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_85F0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_85F0
    pri = 0;
    OP_JUMP lab_85F8
// lab_85F0
    pri = 1;
// lab_85F8
    OP_JZER lab_86C0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_86C0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8698
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16C8(var_32, var_24)
    OP_JUMP lab_86C0
// lab_86C0
    pri = arg_2;
    OP_JZER lab_8798
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8768
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_12B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09C0(var_40)
    OP_JUMP lab_8798
// lab_8798
    pri = arg_3;
    OP_JZER lab_87D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1750(var_8)
// lab_87D0
    pri = 0;
    return pri;
// lab_8768
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_12B0(var_16, var_8)
// lab_8698
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16C8(var_16, var_8)
}
// fun_87E0
fun_87E0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8160(var_24)
    pri = 0;
    return pri;
}
// fun_8848
fun_8848() {
    pri = g_mode;
    switch (pri) {
// switch_8908
        case default:
        {
// switch_8908_case_default
            pri = CommandNOP()
            OP_JUMP lab_8950
// lab_8950
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8908_case_0x0
            var_8 = 0;
            pri = fun_8960()
            OP_JUMP lab_8950
        }
        case 0x2ff5462aeaecdb96:
        {
// switch_8908_case_0x2ff5462aeaecdb96
            var_8 = 0;
            pri = fun_AA30()
            OP_JUMP lab_8950
        }
        case 0x57083427877f2e22:
        {
// switch_8908_case_0x57083427877f2e22
            var_8 = 0;
            pri = fun_AB20()
            OP_JUMP lab_8950
        }
    }
}
// fun_8960
fun_8960() {
    pri = 0;
    return pri;
}
// fun_8978
fun_8978() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_84C8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_89D0
fun_89D0() {
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_8 = 24;
    pri = fun_83C0(var_0, var_-8, var_-16)
    var_16 = pri;
    var_24 = 8;
    pri = fun_0758(var_16)
    pri = 0;
    return pri;
}
// fun_8A40
fun_8A40() {
    var_8 = 0;
    pri = fun_0788()
    pri = 0;
    return pri;
}
// fun_8A70
fun_8A70() {
    pri = EvCameraStart()
    var_8 = 5;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C 4640537203540230144, 4656378967073226752, 4655301445678006272, 8802641224559852288
    var_40 = 48;
    pri = fun_0930(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C -4587338432941916160, 4656400957305782272, 4656748402980159488, -8397937223901467836
    var_64 = 48;
    pri = fun_0930(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    OP_PUSH5_C -4587338432941916160, 4656781388328992768, 4656946315073159168, -7553978749038383413, 1032537072811622167
    var_88 = 1516618099705160561;
    var_96 = 24;
    pri = fun_83C0(var_88, var_80, var_72)
    var_104 = pri;
    var_112 = 48;
    pri = fun_0930(var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 815;
    var_136 = 812;
    var_144 = 818;
    var_152 = 24;
    pri = fun_83C0(var_144, var_136, var_128)
    var_8 = pri;
    var_160 = 1;
    var_168 = 1;
    var_176 = -1;
    var_184 = 1930;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 200;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 1725;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 8802641224559852288;
    var_240 = 56;
    pri = fun_1248(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_0060(var_248)
    var_264 = 0;
    var_272 = 4629700416936869888;
    var_280 = 0;
    OP_PUSH5_C 4655402644728226775, 4640600535409990042, 4654949557976652841, 4657212682760104182, 4634317310242366423
    var_288 = 4656136502769069588;
    var_296 = 1;
    pri = EvCameraMove(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 0;
    pri = fun_2230()
    var_312 = 0;
    var_320 = 4629700416936869888;
    var_328 = 2;
    OP_PUSH5_C 4655389758451949240, 4640012252708664771, 4654942872945955963, 4657206305592663081, 4632091546864026911
    var_336 = 4656129773757907599;
    var_344 = 180;
    pri = EvCameraMove(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 31288;
    pri = SoundPostEvent(var_352)
    var_360 = 31560;
    var_368 = 8;
    var_376 = 16;
    pri = fun_0280(var_368, var_360)
    var_384 = 0;
    pri = fun_0350()
    var_392 = 90;
    var_400 = 8;
    pri = fun_0060(var_392)
    var_408 = 1;
    var_416 = 0;
    var_424 = 4641240890982006784;
    var_432 = 0;
    var_440 = 0;
    OP_PUSH4_C 4656400957305782272, 4656510908468559872, 4607182418800017408, -8397937223901467836
    var_448 = 72;
    pri = fun_09F8(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 15;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 0;
    var_480 = 4627898977085921690;
    var_488 = 0;
    OP_PUSH5_C 4656059097150474158, 4636543777308147712, 4656501276746700554, 4656835220418288681, 4638136221988888248
    var_496 = 4654018887354438124;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    pri = fun_2230()
    var_520 = 0;
    var_528 = 4627898977085921690;
    var_536 = 2;
    OP_PUSH5_C 4656150796420230676, 4636543777308147712, 4656534086173673390, 4656880916121539052, 4638136221988888248
    var_544 = 4654051608820480737;
    var_552 = 180;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    var_568 = 3;
    var_576 = 2;
    var_584 = 100;
    var_592 = -1;
    OP_PUSH2_C -8228871935314138301, -8397937223901467836
    var_600 = 56;
    pri = fun_1FF8(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = 10;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = -1;
    var_632 = 8802641224559852288;
    var_640 = 16;
    pri = fun_12B0(var_632, var_624)
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    OP_PUSH2_C -8397937223901467836, 8802641224559852288
    var_680 = 48;
    pri = fun_0AC0(var_672, var_664, var_656, var_648, var_640, var_632)
    var_688 = 8802641224559852288;
    var_696 = 8;
    pri = fun_0B18(var_688)
    var_704 = -8397937223901467836;
    var_712 = 8;
    pri = fun_0B18(var_704)
    var_720 = 0;
    pri = fun_20A8()
    var_728 = 1;
    var_736 = 8;
    pri = fun_2140(var_728)
    var_744 = 0;
    var_752 = 3;
    var_760 = -8397937223901467836;
    var_768 = 24;
    pri = fun_7F08(var_760, var_752, var_744)
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    OP_PUSH2_C -8228870835802510090, -8397937223901467836
    var_816 = 56;
    pri = fun_1FF8(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = -8397937223901467836;
    var_832 = 8;
    pri = fun_0CF0(var_824)
    var_840 = 1;
    var_848 = 8;
    pri = fun_2140(var_840)
    var_856 = 0;
    var_864 = 4629700416936869888;
    var_872 = 0;
    OP_PUSH5_C 4656399022165317386, 4635486135083157422, 4655594399556110909, 4657364085511248937, 4640371836991412634
    var_880 = 4653902734946079867;
    var_888 = 1;
    pri = EvCameraMove(var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_896 = 0;
    pri = fun_2230()
    var_904 = 0;
    var_912 = 4629700416936869888;
    var_920 = 2;
    OP_PUSH5_C 4656465168784844390, 4635486135083157422, 4655657247640754586, 4657396872947989217, 4640367614866761974
    var_928 = 4653964923323746877;
    var_936 = 180;
    pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_944 = 0;
    var_952 = 0;
    var_960 = -8397937223901467836;
    var_968 = 24;
    pri = fun_7F08(var_960, var_952, var_944)
    var_976 = 0;
    var_984 = 3;
    var_992 = 0;
    var_1000 = 100;
    var_1008 = -1;
    OP_PUSH2_C -8228869736290881879, -8397937223901467836
    var_1016 = 56;
    pri = fun_1FF8(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1024 = -8397937223901467836;
    var_1032 = 8;
    pri = fun_0CF0(var_1024)
    var_1040 = 1;
    var_1048 = 8;
    pri = fun_2140(var_1040)
    var_1056 = 1;
    var_1064 = 1;
    var_1072 = -1;
    var_1080 = -1;
    var_1088 = 0;
    var_1096 = 6;
    var_1104 = -8397937223901467836;
    var_1112 = 56;
    pri = fun_3EA0(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1120 = 0;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 100;
    var_1152 = -1;
    OP_PUSH2_C -8228868636779253668, -8397937223901467836
    var_1160 = 56;
    pri = fun_1FF8(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 1;
    var_1176 = 8;
    pri = fun_2140(var_1168)
    var_1184 = 0;
    pri = fun_2200()
    var_1192 = 0;
    var_1200 = 0;
    var_1208 = 0;
    var_1216 = 0;
    OP_PUSH4_C -8397937223901467836, -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1224 = 24;
    pri = fun_83C0(var_1216, var_1208, var_1200)
    var_1232 = pri;
    var_1240 = 48;
    pri = fun_0AC0(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1248 = 24;
    pri = fun_83C0(var_1240, var_1232, var_1224)
    var_1256 = pri;
    var_1264 = 8;
    pri = fun_0B18(var_1256)
    var_1272 = 0;
    var_1280 = 0;
    var_1288 = 0;
    var_1296 = var_8;
    pri = SoundPlayPokeVoice(var_1296, var_1288, var_1280, var_1272)
    var_1304 = 1;
    var_1312 = -1;
    var_1320 = -1;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 30;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1352 = 24;
    pri = fun_83C0(var_1344, var_1336, var_1328)
    var_1360 = pri;
    var_1368 = 56;
    pri = fun_22C0(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    OP_PUSH3_C -4937426155066472897, -4857465195573785923, -1795452904042635224
    var_1384 = 24;
    pri = fun_83C0(var_1376, var_1368, var_1360)
    var_16 = pri;
    var_1392 = 0;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 100;
    var_1424 = -1;
    var_1432 = var_16;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1440 = 24;
    pri = fun_83C0(var_1432, var_1424, var_1416)
    var_1448 = pri;
    var_1456 = 56;
    pri = fun_1FF8(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 0;
    var_1472 = 8;
    pri = fun_0408(var_1464)
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1480 = 24;
    pri = fun_83C0(var_1472, var_1464, var_1456)
    var_1488 = pri;
    var_1496 = 8;
    pri = fun_0CF0(var_1488)
    var_1504 = 1;
    var_1512 = 8;
    pri = fun_2140(var_1504)
    var_1520 = 0;
    pri = fun_2200()
    var_1528 = 1;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 6;
    var_1560 = -8397937223901467836;
    var_1568 = 40;
    pri = fun_61D8(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = -8397937223901467836;
    var_1584 = 8;
    pri = fun_0CF0(var_1576)
    var_1592 = 0;
    var_1600 = 0;
    var_1608 = 0;
    var_1616 = 0;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1624 = 24;
    pri = fun_83C0(var_1616, var_1608, var_1600)
    var_1632 = pri;
    var_1640 = -8397937223901467836;
    var_1648 = 48;
    pri = fun_0AC0(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1656 = -8397937223901467836;
    var_1664 = 8;
    pri = fun_0B18(var_1656)
    var_1672 = 0;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_1680 = 24;
    pri = fun_83C0(var_1672, var_1664, var_1656)
    var_1688 = pri;
    var_1696 = 16;
    pri = fun_0988(var_1688, var_1680)
    var_1704 = 0;
    var_1712 = 4628602664527698330;
    var_1720 = 0;
    OP_PUSH5_C 4655879656852821115, 4634849297948349563, 4655028502911527158, 4656821058708522926, 4638973961888323338
    var_1728 = 4656930526086184305;
    var_1736 = 1;
    pri = EvCameraMove(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1744 = 0;
    pri = fun_2230()
    var_1752 = 0;
    var_1760 = 4628602664527698330;
    var_1768 = 2;
    OP_PUSH5_C 4655826704372827423, 4634849297948349563, 4655054627307803116, 4656794450527130747, 4638973258200881562
    var_1776 = 4656943654255019950;
    var_1784 = 210;
    pri = EvCameraMove(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = 0;
    var_1800 = 3;
    var_1808 = -8397937223901467836;
    var_1816 = 24;
    pri = fun_7F08(var_1808, var_1800, var_1792)
    var_1824 = 1;
    var_1832 = 8;
    pri = fun_0060(var_1824)
    var_1840 = -8397937223901467836;
    var_1848 = 8;
    pri = fun_0CF0(var_1840)
    var_1856 = 5;
    var_1864 = 5;
    var_1872 = -8397937223901467836;
    var_1880 = 24;
    pri = fun_1420(var_1872, var_1864, var_1856)
    var_1888 = 0;
    var_1896 = 3;
    var_1904 = 0;
    var_1912 = 100;
    var_1920 = -1;
    OP_PUSH2_C -8228867537267625457, -8397937223901467836
    var_1928 = 56;
    pri = fun_1FF8(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1936 = 1;
    var_1944 = 8;
    pri = fun_2140(var_1936)
    var_1952 = 0;
    pri = fun_2200()
    var_1960 = -8397937223901467836;
    var_1968 = 8;
    pri = fun_1488(var_1960)
    var_1976 = 0;
    var_1984 = 0;
    var_1992 = -8397937223901467836;
    var_2000 = 24;
    pri = fun_7F08(var_1992, var_1984, var_1976)
    var_2008 = 1;
    var_2016 = 8;
    pri = fun_0060(var_2008)
    var_2024 = -8397937223901467836;
    var_2032 = 8;
    pri = fun_0CF0(var_2024)
    var_2040 = 0;
    var_2048 = 0;
    var_2056 = 0;
    var_2064 = -90;
    pri = float(var_2064)
    var_2072 = pri;
    var_2080 = -8397937223901467836;
    var_2088 = 40;
    pri = fun_0A70(var_2080, var_2072, var_2064, var_2056, var_2048)
    var_2096 = -8397937223901467836;
    var_2104 = 8;
    pri = fun_0B18(var_2096)
    var_2112 = 1;
    var_2120 = 0;
    var_2128 = 31576;
    var_2136 = 1;
    var_2144 = 32;
    pri = fun_02E0(var_2136, var_2128, var_2120, var_2112)
    var_2152 = 0;
    pri = fun_0350()
    var_2160 = 1;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2168 = 24;
    pri = fun_83C0(var_2160, var_2152, var_2144)
    var_2176 = pri;
    var_2184 = 16;
    pri = fun_0988(var_2176, var_2168)
    var_2192 = 0;
    var_2200 = 4628208599560303411;
    var_2208 = 0;
    OP_PUSH5_C 4656296415740213330, 4636536740433729946, 4657530639532624445, 4656423167440663347, 4638962702889254912
    var_2216 = 4655709144589585613;
    var_2224 = 1;
    pri = EvCameraMove(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2232 = 0;
    pri = fun_2230()
    var_2240 = 0;
    var_2248 = 4628208599560303411;
    var_2256 = 2;
    OP_PUSH5_C 4656293117205330002, 4636466371689552282, 4657565318129364500, 4656419824925314908, 4638927166673445192
    var_2264 = 4655778501783065723;
    var_2272 = 150;
    pri = EvCameraMove(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2280 = 31624;
    var_2288 = 15;
    var_2296 = 16;
    pri = fun_0280(var_2288, var_2280)
    var_2304 = 0;
    pri = fun_0350()
    var_2312 = -8397937223901467836;
    var_2320 = 8;
    pri = fun_12F0(var_2312)
    var_2328 = 6;
    var_2336 = -8397937223901467836;
    var_2344 = 16;
    pri = fun_1330(var_2336, var_2328)
    var_2352 = 0;
    var_2360 = 0;
    var_2368 = 0;
    var_2376 = -110;
    pri = float(var_2376)
    var_2384 = pri;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2392 = 24;
    pri = fun_83C0(var_2384, var_2376, var_2368)
    var_2400 = pri;
    var_2408 = 40;
    pri = fun_0A70(var_2400, var_2392, var_2384, var_2376, var_2368)
    var_2416 = 0;
    var_2424 = 3;
    var_2432 = 0;
    var_2440 = 100;
    var_2448 = -1;
    OP_PUSH2_C -8228866437755997246, -8397937223901467836
    var_2456 = 56;
    pri = fun_1FF8(var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2464 = 1;
    var_2472 = 8;
    pri = fun_2140(var_2464)
    var_2480 = 0;
    pri = fun_2200()
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2488 = 24;
    pri = fun_83C0(var_2480, var_2472, var_2464)
    var_2496 = pri;
    var_2504 = 8;
    pri = fun_0B18(var_2496)
    OP_PUSH3_C -4937425055554844686, -4857468494108670556, -1795449605507750591
    var_2512 = 24;
    pri = fun_83C0(var_2504, var_2496, var_2488)
    var_16 = pri;
    var_2520 = 0;
    var_2528 = 0;
    var_2536 = 0;
    var_2544 = var_8;
    pri = SoundPlayPokeVoice(var_2544, var_2536, var_2528, var_2520)
    var_2552 = 1;
    var_2560 = -1;
    var_2568 = -1;
    var_2576 = 3;
    var_2584 = 0;
    var_2592 = 30;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2600 = 24;
    pri = fun_83C0(var_2592, var_2584, var_2576)
    var_2608 = pri;
    var_2616 = 56;
    pri = fun_22C0(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2624 = 0;
    var_2632 = 3;
    var_2640 = 0;
    var_2648 = 100;
    var_2656 = -1;
    var_2664 = var_16;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2672 = 24;
    pri = fun_83C0(var_2664, var_2656, var_2648)
    var_2680 = pri;
    var_2688 = 56;
    pri = fun_1FF8(var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2696 = 0;
    var_2704 = 8;
    pri = fun_0408(var_2696)
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2712 = 24;
    pri = fun_83C0(var_2704, var_2696, var_2688)
    var_2720 = pri;
    var_2728 = 8;
    pri = fun_0CF0(var_2720)
    var_2736 = 1;
    var_2744 = 8;
    pri = fun_2140(var_2736)
    var_2752 = 0;
    pri = fun_2200()
    var_2760 = 0;
    var_2768 = 4627927124583592755;
    var_2776 = 0;
    OP_PUSH5_C 4656763444299227464, 4632934564419275325, 4656734197289928622, 4657734269086088561, 4636543777308147712
    var_2784 = 4657622580694939075;
    var_2792 = 1;
    pri = EvCameraMove(var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2800 = 0;
    pri = fun_2230()
    var_2808 = 0;
    var_2816 = 4627927124583592755;
    var_2824 = 2;
    OP_PUSH5_C 4656711635311326659, 4632934564419275325, 4656785148658759762, 4657687803724698747, 4636543073620705935
    var_2832 = 4657673378132142326;
    var_2840 = 240;
    pri = EvCameraMove(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768)
    var_2848 = 30;
    var_2856 = 8;
    pri = fun_0060(var_2848)
    var_2864 = 1;
    var_2872 = 0;
    var_2880 = 50;
    pri = float(var_2880)
    var_2888 = pri;
    var_2896 = 0;
    pri = float(var_2896)
    var_2904 = pri;
    var_2912 = 0;
    OP_PUSH4_C 4656400957305782272, 4657540051352158208, 4611686018427387904, -8397937223901467836
    var_2920 = 72;
    pri = fun_09F8(var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
    var_2928 = 0;
    var_2936 = 0;
    var_2944 = 0;
    var_2952 = 90;
    pri = float(var_2952)
    var_2960 = pri;
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2968 = 24;
    pri = fun_83C0(var_2960, var_2952, var_2944)
    var_2976 = pri;
    var_2984 = 40;
    pri = fun_0A70(var_2976, var_2968, var_2960, var_2952, var_2944)
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_2992 = 24;
    pri = fun_83C0(var_2984, var_2976, var_2968)
    var_3000 = pri;
    var_3008 = 8;
    pri = fun_0B18(var_3000)
    var_3016 = 1;
    var_3024 = 0;
    var_3032 = 0;
    pri = float(var_3032)
    var_3040 = pri;
    var_3048 = 0;
    pri = float(var_3048)
    var_3056 = pri;
    var_3064 = 0;
    OP_PUSH5_C 4656781388328992768, 4657518061119602688, 4607182418800017408, -7553978749038383413, 1032537072811622167
    var_3072 = 1516618099705160561;
    var_3080 = 24;
    pri = fun_83C0(var_3072, var_3064, var_3056)
    var_3088 = pri;
    var_3096 = 72;
    pri = fun_09F8(var_3088, var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024)
    var_3104 = 60;
    var_3112 = 8;
    pri = fun_0060(var_3104)
    var_3120 = 1;
    var_3128 = 0;
    var_3136 = 31240;
    var_3144 = 8;
    var_3152 = 32;
    pri = fun_02E0(var_3144, var_3136, var_3128, var_3120)
    var_3160 = 0;
    pri = fun_0350()
    var_3168 = 3;
    var_3176 = 1;
    pri = EvCameraEnd(var_3176, var_3168)
    var_3184 = 15;
    var_3192 = 8;
    pri = fun_0060(var_3184)
    var_3200 = -8397937223901467836;
    var_3208 = 8;
    pri = fun_0B18(var_3200)
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_3216 = 24;
    pri = fun_83C0(var_3208, var_3200, var_3192)
    var_3224 = pri;
    var_3232 = 8;
    pri = fun_0B18(var_3224)
    pri = 0;
    return pri;
}
// fun_A8A8
fun_A8A8() {
    pri = 0;
    return pri;
}
// fun_A8C0
fun_A8C0() {
    var_8 = -8397937223901467836;
    var_16 = 8;
    pri = fun_08D8(var_8)
    OP_PUSH3_C -7553978749038383413, 1032537072811622167, 1516618099705160561
    var_24 = 24;
    pri = fun_83C0(var_16, var_8, var_0)
    var_32 = pri;
    var_40 = 8;
    pri = fun_08D8(var_32)
    var_48 = -1658347341221882014;
    var_56 = 8;
    pri = fun_0758(var_48)
    var_64 = 1790;
    var_72 = 8;
    pri = fun_87E0(var_64)
    var_80 = 5;
    var_88 = 8;
    pri = fun_0518(var_80)
    pri = 0;
    return pri;
}
// fun_A9C0
fun_A9C0() {
    var_8 = 0;
    pri = fun_0788()
    var_16 = 31672;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_AA30
fun_AA30() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8978()
    var_16 = 0;
    pri = fun_89D0()
    var_24 = 0;
    pri = fun_8A40()
    var_32 = 0;
    pri = fun_8A70()
    var_40 = 0;
    pri = fun_A8A8()
    var_48 = 0;
    pri = fun_A8C0()
    var_56 = 0;
    pri = fun_A9C0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_AB20
fun_AB20() {
    var_8 = 0;
    pri = fun_89D0()
    var_16 = 0;
    pri = fun_A8C0()
    pri = 0;
    return pri;
}
