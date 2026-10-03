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
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_04A8
fun_04A8() {
    pri = arg_8;
    OP_JZER lab_0518
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_0518
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_09F0(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_0608
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_0608
    pri = 0;
    return pri;
}
// fun_0618
fun_0618() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0660
// lab_0660
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06A0
    OP_JUMP lab_0710
// lab_06A0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_06E0
    OP_JUMP lab_0710
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0660
// lab_0710
    pri = 0;
    return pri;
}
// fun_0728
fun_0728() {
    pri = arg_0;
    switch (pri) {
// switch_08D0
        case default:
        {
// switch_08D0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_08D0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
        case 0x1:
        {
// switch_08D0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
        case 0x2:
        {
// switch_08D0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
        case 0x3:
        {
// switch_08D0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
        case 0x4:
        {
// switch_08D0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
        case 0x5:
        {
// switch_08D0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
        case 0x6:
        {
// switch_08D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_08D0_case_default
        }
    }
}
// fun_0968
fun_0968() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0AA0
fun_0AA0() {
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
// fun_0B18
fun_0B18() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1400(var_8)
    OP_JZER lab_0C38
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1430(var_24)
    OP_JNZ lab_0C38
    pri = 0;
    return pri;
// lab_0C38
    OP_JUMP lab_0C48
// lab_0C48
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0CA8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0CA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C48
    pri = 0;
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0D20
fun_0D20() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0DE0
    pri = 0;
    return pri;
// lab_0DE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E20
// lab_0E20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1400(var_8)
    OP_JNZ lab_0EA8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E98
    pri = 0;
    return pri;
// lab_0EA8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0EF0
    pri = 0;
    return pri;
// lab_0EF0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0F50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F98(var_8)
    pri = 0;
    return pri;
// lab_0F50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E20
    pri = 0;
    return pri;
// lab_0E98
    OP_JUMP lab_0EF0
}
// fun_0F98
fun_0F98() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1020
    pri = 0;
    return pri;
// lab_1020
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1400(var_8)
    OP_JZER lab_1150
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1078
    OP_ZERO_P_S 64
// lab_1150
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1188
    OP_CONST_S 64, 1
// lab_1188
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_11C0
    OP_CONST_S 72, 1
// lab_11C0
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
// lab_1078
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10A0
    OP_ZERO_P_S 72
// lab_10A0
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
    OP_JUMP lab_1260
// lab_1260
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1430
fun_1430() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1460
fun_1460() {
    OP_JUMP lab_1478
// lab_1478
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1508
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_14F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D98(var_8)
    pri = 0;
    return pri;
// lab_1508
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1598
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1588
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D98(var_8)
    pri = 0;
    return pri;
// lab_1598
    pri = 0;
    return pri;
// lab_1588
    OP_JUMP lab_15A8
// lab_15A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1478
    pri = 0;
    return pri;
// lab_14F8
    OP_JUMP lab_15A8
}
// fun_15E8
fun_15E8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D98(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1460(var_40)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1700
fun_1700() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
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
// switch_1D50
        case default:
        {
// switch_1D50_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1D98
// lab_1D98
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
            OP_JNZ lab_1E40
            var_88 = 0;
            pri = fun_20B0()
// lab_1E40
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D50_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1938
                case default:
                {
// switch_1938_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19B0
// lab_19B0
                    OP_JUMP lab_1D98
                }
                case 0x0:
                {
// switch_1938_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19B0
                }
                case 0x1:
                {
// switch_1938_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19B0
                }
                case 0x2:
                {
// switch_1938_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19B0
                }
                case 0x3:
                {
// switch_1938_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19B0
                }
                case 0x4:
                {
// switch_1938_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19B0
                }
                case 0x5:
                {
// switch_1938_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19B0
                }
            }
        }
        case 0x65:
        {
// switch_1D50_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1AF0
                case default:
                {
// switch_1AF0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B68
// lab_1B68
                    OP_JUMP lab_1D98
                }
                case 0x0:
                {
// switch_1AF0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1B68
                }
                case 0x1:
                {
// switch_1AF0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1B68
                }
                case 0x2:
                {
// switch_1AF0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1B68
                }
                case 0x3:
                {
// switch_1AF0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B68
                }
                case 0x4:
                {
// switch_1AF0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1B68
                }
                case 0x5:
                {
// switch_1AF0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1B68
                }
            }
        }
        case 0x66:
        {
// switch_1D50_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CA8
                case default:
                {
// switch_1CA8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D20
// lab_1D20
                    OP_JUMP lab_1D98
                }
                case 0x0:
                {
// switch_1CA8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D20
                }
                case 0x1:
                {
// switch_1CA8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D20
                }
                case 0x2:
                {
// switch_1CA8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D20
                }
                case 0x3:
                {
// switch_1CA8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D20
                }
                case 0x4:
                {
// switch_1CA8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D20
                }
                case 0x5:
                {
// switch_1CA8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D20
                }
            }
        }
    }
}
// fun_1E58
fun_1E58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1738(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EC0
fun_1EC0() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D60(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F68
    pri = 1;
    return pri;
// lab_1F68
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FB0
fun_1FB0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2000
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1EC0(var_8)
    arg_2 = pri;
// lab_2000
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1738(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2060
fun_2060() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1E58(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20B0
fun_20B0() {
    OP_JUMP lab_20C8
// lab_20C8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2108
    pri = 0;
    return pri;
// lab_2108
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_20C8
    pri = 0;
    return pri;
}
// fun_2148
fun_2148() {
    var_8 = 0;
    pri = fun_20B0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_21F8
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_21F8
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_22B0()
    return pri;
}
// fun_22B0
fun_22B0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_22F0
fun_22F0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2340
fun_2340() {
    OP_JUMP lab_2358
// lab_2358
    pri = EvCameraMoveWait_()
    OP_JZER lab_2390
    pri = 0;
    return pri;
// lab_2390
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2358
    pri = 0;
    return pri;
}
// fun_23D0
fun_23D0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2438(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2510()
    pri = 0;
    return pri;
}
// fun_2438
fun_2438() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2438(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2510()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2510
fun_2510() {
    OP_JUMP lab_2528
// lab_2528
    pri = IsEasingRunningDof_()
    OP_JZER lab_2580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2590
// lab_2580
    pri = 0;
    return pri;
// lab_2590
    OP_JUMP lab_2528
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    pri = arg_6;
    OP_JNZ lab_25E8
    var_8 = 0;
    pri = fun_1270()
// lab_25E8
    pri = arg_1;
    switch (pri) {
// switch_3B50
        case default:
        {
// switch_3B50_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3EA0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3EA0
            pri = 1;
            OP_JUMP lab_3EA8
// lab_3EA0
            pri = 0;
// lab_3EA8
            OP_JZER lab_4000
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D60(var_24, var_16)
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
            OP_JUMP lab_4060
// lab_4000
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
// lab_4060
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_40C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4120
// lab_40C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4120
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4120
            pri = arg_2;
            OP_JZER lab_4160
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4160
            var_8 = 0;
            pri = fun_12B0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3B50_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1:
        {
// switch_3B50_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x2:
        {
// switch_3B50_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x3:
        {
// switch_3B50_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x4:
        {
// switch_3B50_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x5:
        {
// switch_3B50_case_0x5
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x6:
        {
// switch_3B50_case_0x6
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x7:
        {
// switch_3B50_case_0x7
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x8:
        {
// switch_3B50_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x9:
        {
// switch_3B50_case_0x9
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0xa:
        {
// switch_3B50_case_0xa
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0xb:
        {
// switch_3B50_case_0xb
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0xc:
        {
// switch_3B50_case_0xc
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0xd:
        {
// switch_3B50_case_0xd
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0xe:
        {
// switch_3B50_case_0xe
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0xf:
        {
// switch_3B50_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x10:
        {
// switch_3B50_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x11:
        {
// switch_3B50_case_0x11
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x12:
        {
// switch_3B50_case_0x12
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x13:
        {
// switch_3B50_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x14:
        {
// switch_3B50_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x15:
        {
// switch_3B50_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x16:
        {
// switch_3B50_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x17:
        {
// switch_3B50_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x18:
        {
// switch_3B50_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x19:
        {
// switch_3B50_case_0x19
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1a:
        {
// switch_3B50_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CE8(var_48, var_40)
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
            pri = fun_0FD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1b:
        {
// switch_3B50_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CE8(var_48, var_40)
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
            pri = fun_0FD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1c:
        {
// switch_3B50_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0CE8(var_48, var_40)
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
            pri = fun_0FD0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1d:
        {
// switch_3B50_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1e:
        {
// switch_3B50_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1f:
        {
// switch_3B50_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x20:
        {
// switch_3B50_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x21:
        {
// switch_3B50_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x22:
        {
// switch_3B50_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x23:
        {
// switch_3B50_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x24:
        {
// switch_3B50_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x25:
        {
// switch_3B50_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x26:
        {
// switch_3B50_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x27:
        {
// switch_3B50_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x28:
        {
// switch_3B50_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
        case 0x29:
        {
// switch_3B50_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B50_case_default
        }
    }
}
// fun_4190
fun_4190() {
    pri = arg_5;
    OP_JNZ lab_41C8
    var_8 = 0;
    pri = fun_1270()
// lab_41C8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4218
    OP_CONST_S -8, -1
// lab_4218
    pri = arg_1;
    switch (pri) {
// switch_5CD0
        case default:
        {
// switch_5CD0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6178
            var_520 = 28280;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0D60(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6178
            pri = 1;
            OP_JUMP lab_6180
// lab_6178
            pri = 0;
// lab_6180
            OP_JZER lab_61D0
            var_8 = 64;
            var_16 = 28376;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6428
// lab_61D0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6238
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6238
            pri = 1;
            OP_JUMP lab_6240
// lab_6238
            pri = 0;
// lab_6240
            OP_JZER lab_63C8
            var_16 = 28552;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D60(var_24, var_16)
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
            OP_JUMP lab_6428
// lab_63C8
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
// lab_6428
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6498
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6498
            var_8 = 0;
            pri = fun_12B0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5CD0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1:
        {
// switch_5CD0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2:
        {
// switch_5CD0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x3:
        {
// switch_5CD0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x4:
        {
// switch_5CD0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x5:
        {
// switch_5CD0_case_0x5
            var_8 = 2;
            var_16 = 18536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F98(var_40)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x6:
        {
// switch_5CD0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x7:
        {
// switch_5CD0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x8:
        {
// switch_5CD0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x9:
        {
// switch_5CD0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0xa:
        {
// switch_5CD0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0xb:
        {
// switch_5CD0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0xc:
        {
// switch_5CD0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0xd:
        {
// switch_5CD0_case_0xd
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0xe:
        {
// switch_5CD0_case_0xe
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0xf:
        {
// switch_5CD0_case_0xf
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x10:
        {
// switch_5CD0_case_0x10
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x11:
        {
// switch_5CD0_case_0x11
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x12:
        {
// switch_5CD0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x13:
        {
// switch_5CD0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x14:
        {
// switch_5CD0_case_0x14
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x15:
        {
// switch_5CD0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x16:
        {
// switch_5CD0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x17:
        {
// switch_5CD0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x18:
        {
// switch_5CD0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x19:
        {
// switch_5CD0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1a:
        {
// switch_5CD0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1b:
        {
// switch_5CD0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1c:
        {
// switch_5CD0_case_0x1c
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1d:
        {
// switch_5CD0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1e:
        {
// switch_5CD0_case_0x1e
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x1f:
        {
// switch_5CD0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x20:
        {
// switch_5CD0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x21:
        {
// switch_5CD0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x22:
        {
// switch_5CD0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x23:
        {
// switch_5CD0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x24:
        {
// switch_5CD0_case_0x24
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x25:
        {
// switch_5CD0_case_0x25
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x26:
        {
// switch_5CD0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x27:
        {
// switch_5CD0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x28:
        {
// switch_5CD0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x29:
        {
// switch_5CD0_case_0x29
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2a:
        {
// switch_5CD0_case_0x2a
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2b:
        {
// switch_5CD0_case_0x2b
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2c:
        {
// switch_5CD0_case_0x2c
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2d:
        {
// switch_5CD0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2e:
        {
// switch_5CD0_case_0x2e
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x2f:
        {
// switch_5CD0_case_0x2f
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x30:
        {
// switch_5CD0_case_0x30
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x31:
        {
// switch_5CD0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x32:
        {
// switch_5CD0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x33:
        {
// switch_5CD0_case_0x33
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x34:
        {
// switch_5CD0_case_0x34
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x35:
        {
// switch_5CD0_case_0x35
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x36:
        {
// switch_5CD0_case_0x36
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x37:
        {
// switch_5CD0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x38:
        {
// switch_5CD0_case_0x38
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
            pri = fun_0FD0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x39:
        {
// switch_5CD0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x3a:
        {
// switch_5CD0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x3b:
        {
// switch_5CD0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x3c:
        {
// switch_5CD0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27856;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x3d:
        {
// switch_5CD0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28032;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
        case 0x3e:
        {
// switch_5CD0_case_0x3e
            var_8 = 4;
            var_16 = 28176;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
    }
}
// fun_64C8
fun_64C8() {
    pri = arg_4;
    OP_JNZ lab_6500
    var_8 = 0;
    pri = fun_1270()
// lab_6500
    pri = arg_1;
    switch (pri) {
// switch_78D8
        case default:
        {
// switch_78D8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29248;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1400(var_264)
            OP_JZER lab_7EA0
            pri = arg_3;
            switch (pri) {
// switch_7E48
                case default:
                {
// switch_7E48_case_default
                    OP_JUMP lab_8158
// lab_8158
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_81C8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_81C8
                    var_8 = 0;
                    pri = fun_12B0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7E48_case_0x1
                    var_8 = 32;
                    var_16 = 29400;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E48_case_default
                }
                case 0x2:
                {
// switch_7E48_case_0x2
                    var_8 = 32;
                    var_16 = 29504;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E48_case_default
                }
                case 0x3:
                {
// switch_7E48_case_0x3
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E48_case_default
                }
            }
// lab_7EA0
            pri = arg_1;
            OP_JZER lab_7EF0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7EF0
            pri = 0;
            OP_JUMP lab_7EF8
// lab_7EF0
            pri = 1;
// lab_7EF8
            OP_JZER lab_7F60
            var_8 = 29600;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D60(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7F60
            pri = 1;
            OP_JUMP lab_7F68
// lab_7F60
            pri = 0;
// lab_7F68
            OP_JZER lab_7FB8
            var_8 = 32;
            var_16 = 29696;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8158
// lab_7FB8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8020
            var_8 = 32;
            var_16 = 29856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8158
// lab_8020
            var_16 = 29976;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D60(var_24, var_16)
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
// switch_78D8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1:
        {
// switch_78D8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2:
        {
// switch_78D8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x3:
        {
// switch_78D8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x4:
        {
// switch_78D8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x5:
        {
// switch_78D8_case_0x5
            var_8 = 1;
            var_16 = 28728;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F98(var_40)
            OP_JUMP switch_78D8_case_default
        }
        case 0x6:
        {
// switch_78D8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x7:
        {
// switch_78D8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x8:
        {
// switch_78D8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x9:
        {
// switch_78D8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0xa:
        {
// switch_78D8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0xb:
        {
// switch_78D8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0xc:
        {
// switch_78D8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0xd:
        {
// switch_78D8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0xe:
        {
// switch_78D8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0xf:
        {
// switch_78D8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x10:
        {
// switch_78D8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x11:
        {
// switch_78D8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x12:
        {
// switch_78D8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x13:
        {
// switch_78D8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x14:
        {
// switch_78D8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x15:
        {
// switch_78D8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x16:
        {
// switch_78D8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x17:
        {
// switch_78D8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x18:
        {
// switch_78D8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x19:
        {
// switch_78D8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1a:
        {
// switch_78D8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1b:
        {
// switch_78D8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1c:
        {
// switch_78D8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1d:
        {
// switch_78D8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1e:
        {
// switch_78D8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x1f:
        {
// switch_78D8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x20:
        {
// switch_78D8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x21:
        {
// switch_78D8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x22:
        {
// switch_78D8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x23:
        {
// switch_78D8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x24:
        {
// switch_78D8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x25:
        {
// switch_78D8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x26:
        {
// switch_78D8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x27:
        {
// switch_78D8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x28:
        {
// switch_78D8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x29:
        {
// switch_78D8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2a:
        {
// switch_78D8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2b:
        {
// switch_78D8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2c:
        {
// switch_78D8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2d:
        {
// switch_78D8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2e:
        {
// switch_78D8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x2f:
        {
// switch_78D8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x30:
        {
// switch_78D8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x31:
        {
// switch_78D8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x32:
        {
// switch_78D8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x33:
        {
// switch_78D8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x34:
        {
// switch_78D8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x35:
        {
// switch_78D8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x36:
        {
// switch_78D8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x37:
        {
// switch_78D8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x38:
        {
// switch_78D8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x39:
        {
// switch_78D8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x3a:
        {
// switch_78D8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x3b:
        {
// switch_78D8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x3c:
        {
// switch_78D8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28824;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x3d:
        {
// switch_78D8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29000;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
        case 0x3e:
        {
// switch_78D8_case_0x3e
            var_8 = 3;
            var_16 = 29144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D20(var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
    }
}
// fun_81F8
fun_81F8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_82F8
        case default:
        {
// switch_82F8_case_default
            var_8 = arg_5;
            var_16 = var_8;
            var_24 = arg_4;
            var_32 = arg_2;
            var_40 = 8802641224559852288;
            var_48 = arg_0;
            pri = EasyTalkCharacter(var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_82F8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_82F8_case_default
        }
        case 0x1:
        {
// switch_82F8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_82F8_case_default
        }
        case 0x2:
        {
// switch_82F8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_82F8_case_default
        }
        case 0x3:
        {
// switch_82F8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_82F8_case_default
        }
    }
}
// fun_83B8
fun_83B8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8408
// lab_8408
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30144;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8480
    OP_JUMP lab_84B0
// lab_8480
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8408
// lab_84B0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8538
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_64C8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_16D0(var_56)
// lab_8538
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_85A0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1348(var_24, var_16)
// lab_85A0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1348(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8660
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D98(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0B18(var_88, var_80, var_72, var_64, var_56)
// lab_8660
    pri = IsPlayerRideBicycle()
    OP_JZER lab_86A0
    pri = 0;
    return pri;
// lab_86A0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_87E8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30264;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0CE8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_87B0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_87E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0BC0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D98(var_40)
    pri = 0;
    return pri;
// lab_87B0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1348(var_16, var_8)
}
// fun_8870
fun_8870() {
    pri = 30400;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_88F8
// lab_88F8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8A78
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8A68
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_89B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_89B8
    pri = 0;
    OP_JUMP lab_89C0
// lab_8A78
    pri = 0;
    return pri;
// lab_8A68
    OP_JUMP lab_88F0
// lab_88F0
    OP_INC_P_S -936
// lab_89B8
    pri = 1;
// lab_89C0
    OP_JZER lab_8A38
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8A30
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8A38
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8A30
}
// fun_8A98
fun_8A98() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_8AD0
fun_8AD0() {
    var_8 = 0;
    pri = fun_8A98()
    switch (pri) {
// switch_8B80
        case default:
        {
// switch_8B80_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_8BC8
// lab_8BC8
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8B80_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_8BC8
        }
        case 0x1:
        {
// switch_8B80_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_8BC8
        }
        case 0x2:
        {
// switch_8B80_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_8BC8
        }
    }
}
// fun_8BD8
fun_8BD8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8C70
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_16A8()
// lab_8C70
    pri = arg_4;
    OP_JZER lab_8CA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1700(var_8)
// lab_8CA8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8D00
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8D00
    pri = 0;
    OP_JUMP lab_8D08
// lab_8D00
    pri = 1;
// lab_8D08
    OP_JZER lab_8DD0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8DD0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8DA8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_15E8(var_32, var_24)
    OP_JUMP lab_8DD0
// lab_8DD0
    pri = arg_2;
    OP_JZER lab_8EA8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8E78
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1348(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A68(var_40)
    OP_JUMP lab_8EA8
// lab_8EA8
    pri = arg_3;
    OP_JZER lab_8EE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1670(var_8)
// lab_8EE0
    pri = 0;
    return pri;
// lab_8E78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1348(var_16, var_8)
// lab_8DA8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_15E8(var_16, var_8)
}
// fun_8EF0
fun_8EF0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9070
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F88
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_9070
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_8F88
    pri = arg_0;
    OP_JNZ lab_8FD0
    var_8 = 31320;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_8FF0
// lab_8FD0
    var_8 = 31496;
    pri = SoundPostEvent(var_8)
// lab_8FF0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0618(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9070
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_90B0
fun_90B0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8870(var_24)
    pri = 0;
    return pri;
}
// fun_9118
fun_9118() {
    pri = g_mode;
    switch (pri) {
// switch_9200
        case default:
        {
// switch_9200_case_default
            pri = CommandNOP()
            OP_JUMP lab_9258
// lab_9258
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9200_case_0x0
            var_8 = 0;
            pri = fun_9268()
            OP_JUMP lab_9258
        }
        case 0x17f346266a93bc47:
        {
// switch_9200_case_0x17f346266a93bc47
            var_8 = 0;
            pri = fun_BED8()
            OP_JUMP lab_9258
        }
        case 0x38caef2aeffa6356:
        {
// switch_9200_case_0x38caef2aeffa6356
            var_8 = 0;
            pri = fun_BD38()
            OP_JUMP lab_9258
        }
        case 0x602f6d278cd201ba:
        {
// switch_9200_case_0x602f6d278cd201ba
            var_8 = 0;
            pri = fun_BE90()
            OP_JUMP lab_9258
        }
    }
}
// fun_9268
fun_9268() {
    pri = 0;
    return pri;
}
// fun_9280
fun_9280() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8BD8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_92D8
fun_92D8() {
    pri = 0;
    return pri;
}
// fun_92F0
fun_92F0() {
    pri = 0;
    return pri;
}
// fun_9308
fun_9308() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4657618182648427971, 4642976184213427978, 4656713042686210212, 4658933396467341066, 4647687547557983027
    var_32 = 4657436829200542597;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 4;
    var_56 = 8;
    pri = fun_0728(var_48)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C 4640537203540230144, 4651796202608656384, 4656524102608093184, 8802641224559852288
    var_80 = 48;
    pri = fun_0998(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4639270566145032192, 4657139829119647744, 4657471881631236096, -1554014642428341586
    var_104 = 48;
    pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 1;
    OP_PUSH4_C 4640537203540230144, 4658039229631168512, 4655930366329094144, 5901625555322344598
    var_128 = 48;
    pri = fun_0998(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = -30;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 4650504474498124265;
    var_168 = 24;
    pri = fun_09F0(var_160, var_152, var_144)
    var_176 = 0;
    var_184 = 5901625555322344598;
    var_192 = 16;
    pri = fun_0A30(var_184, var_176)
    var_200 = 1;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 3;
    OP_PUSH5_C 4657470914061003653, 4642976184213427978, 4656986799091293880, 4658786149870149304, 4647687371636122583
    var_240 = 4657706099598184940;
    var_248 = 120;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 0;
    var_296 = 0;
    var_304 = -1554014642428341586;
    var_312 = 56;
    pri = fun_4190(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 80;
    var_328 = 8;
    var_336 = 16;
    pri = fun_0280(var_328, var_320)
    var_344 = 0;
    pri = fun_0350()
    var_352 = 1;
    var_360 = 1;
    var_368 = -1;
    OP_PUSH2_C 8802641224559852288, 4650504474498124265
    var_376 = 40;
    pri = fun_12F0(var_368, var_360, var_352, var_344, var_336)
    var_384 = 5;
    var_392 = 4650504474498124265;
    var_400 = 16;
    pri = fun_1388(var_392, var_384)
    var_408 = 10;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 1;
    var_432 = -1;
    var_440 = -1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 21;
    var_472 = 8802641224559852288;
    var_480 = 56;
    pri = fun_25B0(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 8802641224559852288;
    var_496 = 8;
    pri = fun_0D98(var_488)
    var_504 = 3;
    var_512 = 0;
    var_520 = -8029864783617714055;
    var_528 = 24;
    pri = fun_2060(var_520, var_512, var_504)
    var_536 = 1;
    var_544 = 8;
    pri = fun_2148(var_536)
    var_552 = 0;
    pri = fun_2208()
    var_560 = 0;
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 8802641224559852288;
    var_608 = 40;
    pri = fun_0B18(var_600, var_592, var_584, var_576, var_568)
    var_616 = 8802641224559852288;
    var_624 = 8;
    pri = fun_0BC0(var_616)
    var_632 = 1;
    var_640 = 1;
    var_648 = -1;
    var_656 = -1;
    var_664 = 0;
    var_672 = 8;
    var_680 = 4650504474498124265;
    var_688 = 56;
    pri = fun_4190(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 1;
    var_704 = 0;
    pri = float(var_704)
    var_712 = pri;
    var_720 = 4650504474498124265;
    var_728 = 24;
    pri = fun_09F0(var_720, var_712, var_704)
    var_736 = 0;
    var_744 = 4631952216750555136;
    var_752 = 0;
    OP_PUSH5_C 4646406484570228654, 4639571744370112594, 4656839574484334674, 4652515679037407887, 4640296190591421645
    var_760 = 4657356454900552172;
    var_768 = 1;
    pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 0;
    pri = fun_2340()
    var_784 = 0;
    var_792 = 4631952216750555136;
    var_800 = 3;
    OP_PUSH5_C 4646750587729257431, 4639571744370112594, 4656717836556907315, 4652601660846699971, 4640296190591421645
    var_808 = 4657236828035450143;
    var_816 = 90;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 40;
    var_832 = 8;
    pri = fun_0060(var_824)
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    var_864 = 90;
    pri = float(var_864)
    var_872 = pri;
    var_880 = -6552181352151858088;
    var_888 = 40;
    pri = fun_0B18(var_880, var_872, var_864, var_856, var_848)
    var_896 = 5;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 4650504474498124265;
    var_920 = 8;
    pri = fun_13C8(var_912)
    var_928 = -1;
    var_936 = 4650504474498124265;
    var_944 = 16;
    pri = fun_1348(var_936, var_928)
    var_952 = 1;
    var_960 = 3;
    var_968 = 0;
    var_976 = 8;
    var_984 = 4650504474498124265;
    var_992 = 40;
    pri = fun_64C8(var_984, var_976, var_968, var_960, var_952)
    var_1000 = 0;
    pri = fun_2340()
    var_1008 = -6552181352151858088;
    var_1016 = 8;
    pri = fun_0BC0(var_1008)
    var_1024 = 1;
    var_1032 = 1;
    var_1040 = 0;
    OP_PUSH3_C 4654659330887385088, 4656842960980148224, 8802641224559852288
    var_1048 = 48;
    pri = fun_0998(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1056 = 0;
    var_1064 = 4631952216750555136;
    var_1072 = 0;
    OP_PUSH5_C 4656391897329969398, 4635181438420868137, 4657027568982451814, 4657201731624291533, 4637665455090339676
    var_1080 = 4656861388795029750;
    var_1088 = 1;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 1;
    var_1104 = 0;
    var_1112 = 4641240890982006784;
    var_1120 = 0;
    var_1128 = 0;
    OP_PUSH4_C 4656339384654626816, 4656836363910381568, 4607182418800017408, 8802641224559852288
    var_1136 = 72;
    pri = fun_0AA0(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 1;
    var_1152 = 3;
    var_1160 = 0;
    var_1168 = 0;
    var_1176 = -1554014642428341586;
    var_1184 = 40;
    pri = fun_64C8(var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1192 = -1554014642428341586;
    var_1200 = 8;
    pri = fun_0D98(var_1192)
    var_1208 = 1;
    var_1216 = 0;
    var_1224 = 4641240890982006784;
    var_1232 = 0;
    var_1240 = 0;
    OP_PUSH4_C 4656834164887126016, 4657126634980114432, 4611686018427387904, -1554014642428341586
    var_1248 = 72;
    pri = fun_0AA0(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1256 = 8802641224559852288;
    var_1264 = 8;
    pri = fun_0BC0(var_1256)
    var_1272 = -1554014642428341586;
    var_1280 = 8;
    pri = fun_0BC0(var_1272)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 0;
    pri = float(var_1312)
    var_1320 = pri;
    var_1328 = -6552181352151858088;
    var_1336 = 40;
    pri = fun_0B18(var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 0;
    OP_PUSH2_C -1554014642428341586, 8802641224559852288
    var_1376 = 48;
    pri = fun_0B68(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1384 = 8802641224559852288;
    var_1392 = 8;
    pri = fun_0BC0(var_1384)
    var_1400 = -6552181352151858088;
    var_1408 = 8;
    pri = fun_0BC0(var_1400)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 100;
    var_1448 = -1;
    OP_PUSH2_C 8638733991052448975, -1554014642428341586
    var_1456 = 56;
    pri = fun_1FB0(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_2148(var_1464)
    var_1480 = 0;
    pri = fun_2208()
    var_1488 = 1;
    var_1496 = 1;
    var_1504 = -1;
    var_1512 = -1;
    var_1520 = 0;
    var_1528 = 1;
    var_1536 = -1554014642428341586;
    var_1544 = 56;
    pri = fun_4190(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 0;
    var_1560 = 3;
    var_1568 = 0;
    var_1576 = 100;
    var_1584 = -1;
    OP_PUSH2_C 8638735090564077186, -1554014642428341586
    var_1592 = 56;
    pri = fun_1FB0(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1600 = 1;
    var_1608 = 8;
    pri = fun_2148(var_1600)
    var_1616 = 0;
    pri = fun_2208()
    var_1624 = 1;
    var_1632 = 3;
    var_1640 = 0;
    var_1648 = 1;
    var_1656 = -1554014642428341586;
    var_1664 = 40;
    pri = fun_64C8(var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1672 = -1554014642428341586;
    var_1680 = 8;
    pri = fun_0D98(var_1672)
    var_1688 = 1;
    var_1696 = 5901625555322344598;
    var_1704 = 16;
    pri = fun_0A30(var_1696, var_1688)
    var_1712 = 1;
    var_1720 = 0;
    var_1728 = 4641240890982006784;
    var_1736 = 0;
    var_1744 = 0;
    OP_PUSH4_C 4657240984189403136, 4656229433491849216, 4607182418800017408, 5901625555322344598
    var_1752 = 72;
    pri = fun_0AA0(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1760 = 30;
    var_1768 = 8;
    pri = fun_0060(var_1760)
    var_1776 = 0;
    var_1784 = 4631952216750555136;
    var_1792 = 3;
    OP_PUSH5_C 4657032912608962806, 4635210993293422756, 4656673680169935831, 4657576225284712038, 4641605049233126195
    var_1800 = 4656689337215515361;
    var_1808 = 60;
    pri = EvCameraMove(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1816 = 60;
    var_1824 = 8;
    pri = fun_0060(var_1816)
    var_1832 = 5901625555322344598;
    var_1840 = 8;
    pri = fun_0BC0(var_1832)
    var_1848 = 0;
    var_1856 = 0;
    var_1864 = 0;
    var_1872 = 0;
    OP_PUSH2_C 8802641224559852288, 5901625555322344598
    var_1880 = 48;
    pri = fun_0B68(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1888 = 5901625555322344598;
    var_1896 = 8;
    pri = fun_0BC0(var_1888)
    var_1904 = 0;
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 100;
    var_1936 = -1;
    OP_PUSH2_C -6663107597974962423, 5901625555322344598
    var_1944 = 56;
    pri = fun_1FB0(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1952 = 1;
    var_1960 = 8;
    pri = fun_2148(var_1952)
    var_1968 = 0;
    pri = fun_2208()
    var_1976 = 6;
    var_1984 = 8802641224559852288;
    var_1992 = 16;
    pri = fun_1388(var_1984, var_1976)
    var_2000 = 6;
    var_2008 = -1554014642428341586;
    var_2016 = 16;
    pri = fun_1388(var_2008, var_2000)
    var_2024 = 0;
    var_2032 = 0;
    var_2040 = 0;
    var_2048 = 0;
    OP_PUSH2_C 5901625555322344598, 8802641224559852288
    var_2056 = 48;
    pri = fun_0B68(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2064 = 1;
    var_2072 = 0;
    var_2080 = 4641240890982006784;
    var_2088 = 0;
    var_2096 = 0;
    OP_PUSH4_C 4657056266235936768, 4656836363910381568, 4611686018427387904, -1554014642428341586
    var_2104 = 72;
    pri = fun_0AA0(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2112 = 10;
    var_2120 = 8;
    pri = fun_0060(var_2112)
    var_2136 = 815;
    var_2144 = 812;
    var_2152 = 818;
    var_2160 = 24;
    pri = fun_8AD0(var_2152, var_2144, var_2136)
    var_8 = pri;
    var_2168 = var_8;
    var_2176 = 1;
    var_2184 = 16;
    pri = fun_22F0(var_2176, var_2168)
    var_2192 = 0;
    var_2200 = 3;
    var_2208 = 0;
    var_2216 = 100;
    var_2224 = -1;
    OP_PUSH2_C 8638736190075705397, -1554014642428341586
    var_2232 = 56;
    pri = fun_1FB0(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2240 = 1;
    var_2248 = 8;
    pri = fun_2148(var_2240)
    var_2256 = 0;
    pri = fun_2208()
    var_2264 = 8802641224559852288;
    var_2272 = 8;
    pri = fun_0BC0(var_2264)
    var_2280 = -1554014642428341586;
    var_2288 = 8;
    pri = fun_0BC0(var_2280)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2296 = 16;
    pri = fun_23D0(var_2288, var_2280)
    var_2304 = 3;
    var_2312 = 1;
    OP_PUSH2_C 4635873866863576351, 4611686018427387904
    var_2320 = 32;
    pri = fun_2438(var_2312, var_2304, var_2296, var_2288)
    var_2328 = 0;
    var_2336 = 4631952216750555136;
    var_2344 = 0;
    OP_PUSH5_C 4657269791394050867, 4639098866409238692, 4656616681487151923, 4657296641468001157, 4639188234714344325
    var_2352 = 4656685422954120479;
    var_2360 = 1;
    pri = EvCameraMove(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2368 = 0;
    pri = fun_2340()
    var_2376 = 0;
    var_2384 = 4631952216750555136;
    var_2392 = 2;
    OP_PUSH5_C 4657289714544746168, 4639098866409238692, 4656585543317853307, 4657316564618696458, 4639188234714344325
    var_2400 = 4656654328765286973;
    var_2408 = 20;
    pri = EvCameraMove(var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2416 = 0;
    var_2424 = 0;
    var_2432 = 0;
    var_2440 = 0;
    OP_PUSH2_C -1554014642428341586, 5901625555322344598
    var_2448 = 48;
    pri = fun_0B68(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2456 = 0;
    var_2464 = 3;
    var_2472 = 0;
    var_2480 = 100;
    var_2488 = -1;
    OP_PUSH2_C -6663110896509847056, 5901625555322344598
    var_2496 = 56;
    pri = fun_1FB0(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2504 = 1;
    var_2512 = 8;
    pri = fun_2148(var_2504)
    var_2520 = 0;
    pri = fun_2208()
    var_2528 = 5901625555322344598;
    var_2536 = 8;
    pri = fun_0BC0(var_2528)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2544 = 3;
    var_2552 = 1;
    var_2560 = 32;
    pri = fun_2490(var_2552, var_2544, var_2536, var_2528)
    var_2568 = 0;
    var_2576 = 4631952216750555136;
    var_2584 = 0;
    OP_PUSH5_C 4657045271119659008, 4638341698721887027, 4656774857229923779, 4657245953981960684, 4639032719789711688
    var_2592 = 4656639023563428332;
    var_2600 = 1;
    pri = EvCameraMove(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2608 = 0;
    pri = fun_2340()
    var_2616 = 0;
    var_2624 = 4631952216750555136;
    var_2632 = 3;
    OP_PUSH5_C 4657045271119659008, 4638341698721887027, 4656774857229923779, 4657229967082892820, 4639031664258549023
    var_2640 = 4656582112841574646;
    var_2648 = 300;
    pri = EvCameraMove(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    var_2656 = 0;
    var_2664 = 3;
    var_2672 = 0;
    var_2680 = 100;
    var_2688 = -1;
    OP_PUSH2_C -6663109796998218845, 5901625555322344598
    var_2696 = 56;
    pri = fun_1FB0(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640)
    var_2704 = 1;
    var_2712 = 8;
    pri = fun_2148(var_2704)
    var_2720 = 0;
    var_2728 = 3;
    var_2736 = 0;
    var_2744 = 100;
    var_2752 = -1;
    OP_PUSH2_C -6663104299440077790, 5901625555322344598
    var_2760 = 56;
    pri = fun_1FB0(var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704)
    var_2768 = 1;
    var_2776 = 8;
    pri = fun_2148(var_2768)
    var_2784 = 0;
    var_2792 = 3;
    var_2800 = 0;
    var_2808 = 100;
    var_2816 = -1;
    OP_PUSH2_C -6663103199928449579, 5901625555322344598
    var_2824 = 56;
    pri = fun_1FB0(var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768)
    var_2832 = 1;
    var_2840 = 8;
    pri = fun_2148(var_2832)
    var_2848 = 0;
    pri = fun_2208()
    var_2856 = 8802641224559852288;
    var_2864 = 8;
    pri = fun_13C8(var_2856)
    var_2872 = -1554014642428341586;
    var_2880 = 8;
    pri = fun_13C8(var_2872)
    var_2888 = 20;
    var_2896 = 8;
    pri = fun_0060(var_2888)
    var_2904 = 0;
    var_2912 = 4631952216750555136;
    var_2920 = 0;
    OP_PUSH5_C 4656870030956424069, 4635400988902702449, 4656579649935528428, 4657167097008016589, 4643260649861766185
    var_2928 = 4655640974868663501;
    var_2936 = 1;
    pri = EvCameraMove(var_2936, var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864)
    var_2944 = 0;
    var_2952 = 0;
    var_2960 = 0;
    var_2968 = 0;
    OP_PUSH2_C 8802641224559852288, -1554014642428341586
    var_2976 = 48;
    pri = fun_0B68(var_2968, var_2960, var_2952, var_2944, var_2936, var_2928)
    var_2984 = 4;
    var_2992 = 8;
    pri = fun_0060(var_2984)
    var_3000 = 0;
    var_3008 = 0;
    var_3016 = 0;
    var_3024 = 0;
    OP_PUSH2_C -1554014642428341586, 8802641224559852288
    var_3032 = 48;
    pri = fun_0B68(var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3040 = 0;
    var_3048 = 3;
    var_3056 = 0;
    var_3064 = 100;
    var_3072 = -1;
    OP_PUSH2_C 8638728493494307920, -1554014642428341586
    var_3080 = 56;
    pri = fun_1FB0(var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024)
    var_3088 = 1;
    var_3096 = 8;
    pri = fun_2148(var_3088)
    var_3104 = 0;
    pri = fun_2208()
    var_3112 = 8802641224559852288;
    var_3120 = 8;
    pri = fun_0BC0(var_3112)
    var_3128 = -1554014642428341586;
    var_3136 = 8;
    pri = fun_0BC0(var_3128)
    var_3144 = 0;
    var_3152 = 4631952216750555136;
    var_3160 = 0;
    OP_PUSH5_C 4656901982764327240, 4630416770752598508, 4656547676137392701, 4658204156375334912, 4640827826453683896
    var_3168 = 4656462881800658616;
    var_3176 = 1;
    pri = EvCameraMove(var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104)
    var_3184 = 1;
    var_3192 = 0;
    var_3200 = 4641240890982006784;
    var_3208 = 0;
    var_3216 = 0;
    OP_PUSH4_C 4658384476282290176, 4656847359026659328, 4611686018427387904, -1554014642428341586
    var_3224 = 72;
    pri = fun_0AA0(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3232 = 30;
    var_3240 = 8;
    pri = fun_0060(var_3232)
    var_3248 = 0;
    var_3256 = 4631952216750555136;
    var_3264 = 2;
    OP_PUSH5_C 4656896463215955804, 4635564948076636406, 4656475240311354819, 4657491980703791841, 4638614729449296364
    var_3272 = 4657031835087567585;
    var_3280 = 30;
    pri = EvCameraMove(var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3288 = 10;
    var_3296 = 8;
    pri = fun_0060(var_3288)
    var_3304 = -1554014642428341586;
    var_3312 = 8;
    pri = fun_0BC0(var_3304)
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    var_3344 = 0;
    OP_PUSH2_C 8802641224559852288, 5901625555322344598
    var_3352 = 48;
    pri = fun_0B68(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304)
    var_3360 = 4;
    var_3368 = 8;
    pri = fun_0060(var_3360)
    var_3376 = 0;
    var_3384 = 0;
    var_3392 = 0;
    var_3400 = 0;
    OP_PUSH2_C 5901625555322344598, 8802641224559852288
    var_3408 = 48;
    pri = fun_0B68(var_3400, var_3392, var_3384, var_3376, var_3368, var_3360)
    var_3416 = 5901625555322344598;
    var_3424 = 8;
    pri = fun_0BC0(var_3416)
    var_3432 = 8802641224559852288;
    var_3440 = 8;
    pri = fun_0BC0(var_3432)
    var_3448 = 0;
    pri = fun_2340()
    var_3456 = 0;
    var_3464 = 3;
    var_3472 = 0;
    var_3480 = 100;
    var_3488 = -1;
    OP_PUSH2_C -6663106498463334212, 5901625555322344598
    var_3496 = 56;
    pri = fun_1FB0(var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
    var_3504 = 1;
    var_3512 = 8;
    pri = fun_2148(var_3504)
    var_3528 = 0;
    var_3536 = 0;
    var_3544 = 1;
    var_3552 = 0;
    var_3560 = 0;
    var_3568 = 0;
    var_3576 = 48;
    pri = fun_2238(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528)
    var_16 = pri;
    var_3584 = 0;
    pri = fun_2208()
    pri = var_16;
    OP_JZER lab_B4A0
    var_3592 = 1;
    var_3600 = -1;
    var_3608 = -1;
    var_3616 = 3;
    var_3624 = 0;
    var_3632 = 19;
    var_3640 = 8802641224559852288;
    var_3648 = 56;
    pri = fun_25B0(var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592)
    var_3656 = 8802641224559852288;
    var_3664 = 8;
    pri = fun_0D98(var_3656)
    var_3672 = 0;
    var_3680 = 3;
    var_3688 = 0;
    var_3696 = 100;
    var_3704 = -1;
    OP_PUSH2_C -6663105398951706001, 5901625555322344598
    var_3712 = 56;
    pri = fun_1FB0(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3720 = 1;
    var_3728 = 8;
    pri = fun_2148(var_3720)
    var_3736 = 0;
    pri = fun_2208()
    var_3744 = 0;
    var_3752 = 0;
    var_3760 = 0;
    var_3768 = 0;
    pri = float(var_3768)
    var_3776 = pri;
    var_3784 = 5901625555322344598;
    var_3792 = 40;
    pri = fun_0B18(var_3784, var_3776, var_3768, var_3760, var_3752)
    var_3800 = 6;
    var_3808 = 8;
    pri = fun_0060(var_3800)
    var_3816 = 1;
    var_3824 = 0;
    var_3832 = 32;
    var_3840 = 8;
    var_3848 = 32;
    pri = fun_02E0(var_3840, var_3832, var_3824, var_3816)
    var_3856 = 0;
    pri = fun_0350()
    var_3864 = 5901625555322344598;
    var_3872 = 8;
    pri = fun_0BC0(var_3864)
    var_3880 = 3;
    var_3888 = 0;
    pri = EvCameraEnd(var_3888, var_3880)
    pri = 1;
    return pri;
// lab_B4A0
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 20;
    var_56 = 8802641224559852288;
    var_64 = 56;
    pri = fun_25B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_0D98(var_72)
    var_88 = 1;
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 0;
    var_128 = 0;
    var_136 = 5901625555322344598;
    var_144 = 56;
    pri = fun_4190(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C -6663099901393564946, 5901625555322344598
    var_192 = 56;
    pri = fun_1FB0(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2148(var_200)
    var_216 = 0;
    pri = fun_2208()
    var_224 = 1;
    var_232 = 3;
    var_240 = 0;
    var_248 = 0;
    var_256 = 5901625555322344598;
    var_264 = 40;
    pri = fun_64C8(var_256, var_248, var_240, var_232, var_224)
    var_272 = 5901625555322344598;
    var_280 = 8;
    pri = fun_0D98(var_272)
    var_288 = 3;
    var_296 = 30;
    pri = EvCameraEnd(var_296, var_288)
    pri = 0;
    return pri;
}
// fun_B6B8
fun_B6B8() {
    pri = 0;
    return pri;
}
// fun_B6D0
fun_B6D0() {
    var_8 = -1554014642428341586;
    var_16 = 8;
    pri = fun_0968(var_8)
    var_24 = 1672;
    var_32 = 8;
    pri = fun_90B0(var_24)
    var_40 = -3563485881366118589;
    pri = VanishFlagReset(var_40)
    var_48 = -1550676495148187892;
    pri = VanishFlagReset(var_48)
    var_56 = 5626903673887278750;
    pri = VanishFlagReset(var_56)
    var_64 = -1145167662867329443;
    pri = VanishFlagReset(var_64)
    var_72 = -4673310409164856701;
    pri = VanishFlagReset(var_72)
    var_80 = 2216618159322974925;
    pri = VanishFlagReset(var_80)
    var_88 = -8861403721397965071;
    pri = VanishFlagReset(var_88)
    var_96 = -1180051137964617721;
    pri = VanishFlagReset(var_96)
    var_104 = 3891752725908598821;
    pri = VanishFlagReset(var_104)
    var_112 = -2880323008892522216;
    pri = VanishFlagReset(var_112)
    var_120 = -2880319710357637583;
    pri = VanishFlagReset(var_120)
    var_128 = 3891749427373714188;
    pri = VanishFlagReset(var_128)
    var_136 = 3891750526885342399;
    pri = VanishFlagReset(var_136)
    var_144 = 3891747228350457766;
    pri = VanishFlagReset(var_144)
    var_152 = -2880320809869265794;
    pri = VanishFlagReset(var_152)
    var_160 = -2880318610846009372;
    pri = VanishFlagReset(var_160)
    var_168 = -2880315312311124739;
    pri = VanishFlagReset(var_168)
    var_176 = 3891748327862085977;
    pri = VanishFlagReset(var_176)
    var_184 = 1451426230526205437;
    pri = VanishFlagReset(var_184)
    var_192 = 5853608284009014273;
    pri = VanishFlagReset(var_192)
    var_200 = 1451246788605109846;
    pri = VanishFlagReset(var_200)
    var_208 = 1451425131014577226;
    pri = VanishFlagReset(var_208)
    var_216 = -4275866473915358187;
    pri = VanishFlagReset(var_216)
    var_224 = -1180051137964617721;
    pri = VanishFlagReset(var_224)
    var_232 = 4;
    var_240 = 8;
    pri = fun_0728(var_232)
    pri = 0;
    return pri;
}
// fun_BB10
fun_BB10() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_8EF0(var_16, var_8)
    var_32 = 80;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0280(var_40, var_32)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_BB90
fun_BB90() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_8EF0(var_16, var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 150;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 6367;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 25775;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH2_C -935838431704349219, 5475743609293200544
    var_120 = 80;
    pri = fun_04A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_128 = 1;
    var_136 = 180;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 8802641224559852288;
    var_160 = 24;
    pri = fun_09F0(var_152, var_144, var_136)
    var_168 = 80;
    var_176 = 8;
    var_184 = 16;
    pri = fun_0280(var_176, var_168)
    var_192 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_BD38
fun_BD38() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9280()
    var_16 = 0;
    pri = fun_92D8()
    var_24 = 0;
    pri = fun_92F0()
    var_32 = 0;
    pri = fun_9308()
    OP_JZER lab_BE20
    var_40 = 0;
    pri = fun_B6B8()
    var_48 = 0;
    pri = fun_B6D0()
    var_56 = 0;
    pri = fun_BB90()
    OP_JUMP lab_BE68
// lab_BE20
    var_8 = 0;
    pri = fun_B6B8()
    var_16 = 0;
    pri = fun_B6D0()
    var_24 = 0;
    pri = fun_BB10()
// lab_BE68
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BE90
fun_BE90() {
    var_8 = 0;
    pri = fun_92D8()
    var_16 = 0;
    pri = fun_B6D0()
    pri = 0;
    return pri;
}
// fun_BED8
fun_BED8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = 5901625555322344598;
    var_56 = 48;
    pri = fun_81F8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C -6663106498463334212, 5901625555322344598
    var_104 = 56;
    pri = fun_1FB0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2148(var_112)
    var_136 = 0;
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 48;
    pri = fun_2238(var_176, var_168, var_160, var_152, var_144, var_136)
    var_8 = pri;
    var_192 = 0;
    pri = fun_2208()
    pri = var_8;
    OP_JZER lab_C340
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C -6663105398951706001, 5901625555322344598
    var_240 = 56;
    pri = fun_1FB0(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_2148(var_248)
    var_264 = 0;
    pri = fun_2208()
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 5901625555322344598;
    var_304 = 32;
    pri = fun_83B8(var_296, var_288, var_280, var_272)
    var_312 = 6;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    pri = float(var_352)
    var_360 = pri;
    var_368 = 5901625555322344598;
    var_376 = 40;
    pri = fun_0B18(var_368, var_360, var_352, var_344, var_336)
    var_384 = 15;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 1;
    var_408 = 0;
    var_416 = 32;
    var_424 = 8;
    var_432 = 32;
    pri = fun_02E0(var_424, var_416, var_408, var_400)
    var_440 = 0;
    pri = fun_0350()
    var_448 = 5901625555322344598;
    var_456 = 8;
    pri = fun_0BC0(var_448)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    var_504 = 150;
    pri = float(var_504)
    var_512 = pri;
    var_520 = 6367;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 25775;
    pri = float(var_536)
    var_544 = pri;
    OP_PUSH2_C -935838431704349219, 5475743609293200544
    var_552 = 80;
    pri = fun_04A8(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_560 = 80;
    var_568 = 8;
    var_576 = 16;
    pri = fun_0280(var_568, var_560)
    var_584 = 0;
    pri = fun_0350()
    OP_JUMP lab_C410
// lab_C340
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -6663099901393564946, 5901625555322344598
    var_48 = 56;
    pri = fun_1FB0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2148(var_56)
    var_72 = 0;
    pri = fun_2208()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 5901625555322344598;
    var_112 = 32;
    pri = fun_83B8(var_104, var_96, var_88, var_80)
// lab_C410
    pri = 0;
    return pri;
}
