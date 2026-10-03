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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0580
// lab_0580
    var_8 = 0;
    pri = fun_0698()
    OP_JNZ lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0618
// lab_0618
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1118(var_8)
    OP_JZER lab_0870
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1148(var_24)
    OP_JNZ lab_0870
    pri = 0;
    return pri;
// lab_0870
    OP_JUMP lab_0880
// lab_0880
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0880
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A18
    pri = 0;
    return pri;
// lab_0A18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A58
// lab_0A58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1118(var_8)
    OP_JNZ lab_0AE0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AD0
    pri = 0;
    return pri;
// lab_0AE0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B28
    pri = 0;
    return pri;
// lab_0B28
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BD0(var_8)
    pri = 0;
    return pri;
// lab_0B88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A58
    pri = 0;
    return pri;
// lab_0AD0
    OP_JUMP lab_0B28
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C58
    pri = 0;
    return pri;
// lab_0C58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1118(var_8)
    OP_JZER lab_0D88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB0
    OP_ZERO_P_S 64
// lab_0D88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DC0
    OP_CONST_S 64, 1
// lab_0DC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF8
    OP_CONST_S 72, 1
// lab_0DF8
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
// lab_0CB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD8
    OP_ZERO_P_S 72
// lab_0CD8
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
    OP_JUMP lab_0E98
// lab_0E98
    pri = 0;
    return pri;
}
// fun_0EA8
fun_0EA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE8
fun_0EE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F28
fun_0F28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0FE0
fun_0FE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F68(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0FE0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1020(var_24)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1178
fun_1178() {
    OP_JUMP lab_1190
// lab_1190
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1220
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1210
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D0(var_8)
    pri = 0;
    return pri;
// lab_1220
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12B0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_12A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D0(var_8)
    pri = 0;
    return pri;
// lab_12B0
    pri = 0;
    return pri;
// lab_12A0
    OP_JUMP lab_12C0
// lab_12C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1190
    pri = 0;
    return pri;
// lab_1210
    OP_JUMP lab_12C0
}
// fun_1300
fun_1300() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09D0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1178(var_40)
    pri = 0;
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_13C0
fun_13C0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1418
fun_1418() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1450
fun_1450() {
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
// switch_1A68
        case default:
        {
// switch_1A68_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AB0
// lab_1AB0
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
            OP_JNZ lab_1B58
            var_88 = 0;
            pri = fun_1D10()
// lab_1B58
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A68_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1650
                case default:
                {
// switch_1650_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16C8
// lab_16C8
                    OP_JUMP lab_1AB0
                }
                case 0x0:
                {
// switch_1650_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16C8
                }
                case 0x1:
                {
// switch_1650_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16C8
                }
                case 0x2:
                {
// switch_1650_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16C8
                }
                case 0x3:
                {
// switch_1650_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16C8
                }
                case 0x4:
                {
// switch_1650_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16C8
                }
                case 0x5:
                {
// switch_1650_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16C8
                }
            }
        }
        case 0x65:
        {
// switch_1A68_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1808
                case default:
                {
// switch_1808_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1880
// lab_1880
                    OP_JUMP lab_1AB0
                }
                case 0x0:
                {
// switch_1808_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1880
                }
                case 0x1:
                {
// switch_1808_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1880
                }
                case 0x2:
                {
// switch_1808_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1880
                }
                case 0x3:
                {
// switch_1808_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1880
                }
                case 0x4:
                {
// switch_1808_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1880
                }
                case 0x5:
                {
// switch_1808_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1880
                }
            }
        }
        case 0x66:
        {
// switch_1A68_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19C0
                case default:
                {
// switch_19C0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A38
// lab_1A38
                    OP_JUMP lab_1AB0
                }
                case 0x0:
                {
// switch_19C0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A38
                }
                case 0x1:
                {
// switch_19C0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A38
                }
                case 0x2:
                {
// switch_19C0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A38
                }
                case 0x3:
                {
// switch_19C0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A38
                }
                case 0x4:
                {
// switch_19C0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A38
                }
                case 0x5:
                {
// switch_19C0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A38
                }
            }
        }
    }
}
// fun_1B70
fun_1B70() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0998(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C18
    pri = 1;
    return pri;
// lab_1C18
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C60
fun_1C60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1CB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B70(var_8)
    arg_2 = pri;
// lab_1CB0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1450(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D10
fun_1D10() {
    OP_JUMP lab_1D28
// lab_1D28
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1D68
    pri = 0;
    return pri;
// lab_1D68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D28
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    var_8 = 0;
    pri = fun_1D10()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E58
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1E58
    pri = 0;
    return pri;
}
// fun_1E68
fun_1E68() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1F10()
    return pri;
}
// fun_1F10
fun_1F10() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1F50
fun_1F50() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FA0
fun_1FA0() {
    pri = arg_1;
    OP_JNZ lab_1FE8
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1FE8
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
// fun_2040
fun_2040() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_20B8
fun_20B8() {
    var_8 = 0;
    pri = fun_2040()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2138
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2138
    pri = 1;
    return pri;
// lab_2138
    var_8 = 0;
    pri = fun_2040()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2178
    pri = 1;
    return pri;
// lab_2178
    var_8 = 0;
    pri = fun_2040()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_21A8
fun_21A8() {
    OP_JUMP lab_21C0
// lab_21C0
    pri = EvCameraMoveWait_()
    OP_JZER lab_21F8
    pri = 0;
    return pri;
// lab_21F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21C0
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_22A0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_22F8()
    pri = 0;
    return pri;
}
// fun_22A0
fun_22A0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22F8
fun_22F8() {
    OP_JUMP lab_2310
// lab_2310
    pri = IsEasingRunningDof_()
    OP_JZER lab_2368
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2378
// lab_2368
    pri = 0;
    return pri;
// lab_2378
    OP_JUMP lab_2310
    pri = 0;
    return pri;
}
// fun_2398
fun_2398() {
    pri = arg_6;
    OP_JNZ lab_23D0
    var_8 = 0;
    pri = fun_0EA8()
// lab_23D0
    pri = arg_1;
    switch (pri) {
// switch_3938
        case default:
        {
// switch_3938_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C88
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C88
            pri = 1;
            OP_JUMP lab_3C90
// lab_3C88
            pri = 0;
// lab_3C90
            OP_JZER lab_3DE8
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0998(var_24, var_16)
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
            OP_JUMP lab_3E48
// lab_3DE8
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_3E48
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3EA8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3F08
// lab_3EA8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3F08
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3F08
            pri = arg_2;
            OP_JZER lab_3F48
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F48
            var_8 = 0;
            pri = fun_0EE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3938_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x1:
        {
// switch_3938_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x2:
        {
// switch_3938_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x3:
        {
// switch_3938_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x4:
        {
// switch_3938_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x5:
        {
// switch_3938_case_0x5
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0x6:
        {
// switch_3938_case_0x6
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0x7:
        {
// switch_3938_case_0x7
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0x8:
        {
// switch_3938_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x9:
        {
// switch_3938_case_0x9
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0xa:
        {
// switch_3938_case_0xa
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0xb:
        {
// switch_3938_case_0xb
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0xc:
        {
// switch_3938_case_0xc
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0xd:
        {
// switch_3938_case_0xd
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0xe:
        {
// switch_3938_case_0xe
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0xf:
        {
// switch_3938_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x10:
        {
// switch_3938_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x11:
        {
// switch_3938_case_0x11
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0x12:
        {
// switch_3938_case_0x12
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0x13:
        {
// switch_3938_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x14:
        {
// switch_3938_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x15:
        {
// switch_3938_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x16:
        {
// switch_3938_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x17:
        {
// switch_3938_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x18:
        {
// switch_3938_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x19:
        {
// switch_3938_case_0x19
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3938_case_default
        }
        case 0x1a:
        {
// switch_3938_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0920(var_48, var_40)
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
            pri = fun_0C08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3938_case_default
        }
        case 0x1b:
        {
// switch_3938_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0920(var_48, var_40)
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
            pri = fun_0C08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3938_case_default
        }
        case 0x1c:
        {
// switch_3938_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0920(var_48, var_40)
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
            pri = fun_0C08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3938_case_default
        }
        case 0x1d:
        {
// switch_3938_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x1e:
        {
// switch_3938_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x1f:
        {
// switch_3938_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x20:
        {
// switch_3938_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x21:
        {
// switch_3938_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x22:
        {
// switch_3938_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x23:
        {
// switch_3938_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x24:
        {
// switch_3938_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x25:
        {
// switch_3938_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x26:
        {
// switch_3938_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x27:
        {
// switch_3938_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x28:
        {
// switch_3938_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
        case 0x29:
        {
// switch_3938_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3938_case_default
        }
    }
}
// fun_3F78
fun_3F78() {
    pri = arg_5;
    OP_JNZ lab_3FB0
    var_8 = 0;
    pri = fun_0EA8()
// lab_3FB0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4000
    OP_CONST_S -8, -1
// lab_4000
    pri = arg_1;
    switch (pri) {
// switch_5AB8
        case default:
        {
// switch_5AB8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F60
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0998(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F60
            pri = 1;
            OP_JUMP lab_5F68
// lab_5F60
            pri = 0;
// lab_5F68
            OP_JZER lab_5FB8
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6210
// lab_5FB8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6020
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6020
            pri = 1;
            OP_JUMP lab_6028
// lab_6020
            pri = 0;
// lab_6028
            OP_JZER lab_61B0
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0998(var_24, var_16)
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
            OP_JUMP lab_6210
// lab_61B0
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_6210
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6280
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6280
            var_8 = 0;
            pri = fun_0EE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5AB8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1:
        {
// switch_5AB8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2:
        {
// switch_5AB8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x3:
        {
// switch_5AB8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x4:
        {
// switch_5AB8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x5:
        {
// switch_5AB8_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BD0(var_40)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x6:
        {
// switch_5AB8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x7:
        {
// switch_5AB8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x8:
        {
// switch_5AB8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x9:
        {
// switch_5AB8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0xa:
        {
// switch_5AB8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0xb:
        {
// switch_5AB8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0xc:
        {
// switch_5AB8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0xd:
        {
// switch_5AB8_case_0xd
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0xe:
        {
// switch_5AB8_case_0xe
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0xf:
        {
// switch_5AB8_case_0xf
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x10:
        {
// switch_5AB8_case_0x10
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x11:
        {
// switch_5AB8_case_0x11
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x12:
        {
// switch_5AB8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x13:
        {
// switch_5AB8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x14:
        {
// switch_5AB8_case_0x14
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x15:
        {
// switch_5AB8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x16:
        {
// switch_5AB8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x17:
        {
// switch_5AB8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x18:
        {
// switch_5AB8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x19:
        {
// switch_5AB8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1a:
        {
// switch_5AB8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1b:
        {
// switch_5AB8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1c:
        {
// switch_5AB8_case_0x1c
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1d:
        {
// switch_5AB8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1e:
        {
// switch_5AB8_case_0x1e
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x1f:
        {
// switch_5AB8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x20:
        {
// switch_5AB8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x21:
        {
// switch_5AB8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x22:
        {
// switch_5AB8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x23:
        {
// switch_5AB8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x24:
        {
// switch_5AB8_case_0x24
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x25:
        {
// switch_5AB8_case_0x25
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x26:
        {
// switch_5AB8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x27:
        {
// switch_5AB8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x28:
        {
// switch_5AB8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x29:
        {
// switch_5AB8_case_0x29
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2a:
        {
// switch_5AB8_case_0x2a
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2b:
        {
// switch_5AB8_case_0x2b
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2c:
        {
// switch_5AB8_case_0x2c
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2d:
        {
// switch_5AB8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2e:
        {
// switch_5AB8_case_0x2e
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x2f:
        {
// switch_5AB8_case_0x2f
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x30:
        {
// switch_5AB8_case_0x30
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x31:
        {
// switch_5AB8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x32:
        {
// switch_5AB8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x33:
        {
// switch_5AB8_case_0x33
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x34:
        {
// switch_5AB8_case_0x34
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x35:
        {
// switch_5AB8_case_0x35
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x36:
        {
// switch_5AB8_case_0x36
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x37:
        {
// switch_5AB8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x38:
        {
// switch_5AB8_case_0x38
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
            pri = fun_0C08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x39:
        {
// switch_5AB8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x3a:
        {
// switch_5AB8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x3b:
        {
// switch_5AB8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x3c:
        {
// switch_5AB8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x3d:
        {
// switch_5AB8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
        case 0x3e:
        {
// switch_5AB8_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            OP_JUMP switch_5AB8_case_default
        }
    }
}
// fun_62B0
fun_62B0() {
    pri = arg_4;
    OP_JNZ lab_62E8
    var_8 = 0;
    pri = fun_0EA8()
// lab_62E8
    pri = arg_1;
    switch (pri) {
// switch_76C0
        case default:
        {
// switch_76C0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1118(var_264)
            OP_JZER lab_7C88
            pri = arg_3;
            switch (pri) {
// switch_7C30
                case default:
                {
// switch_7C30_case_default
                    OP_JUMP lab_7F40
// lab_7F40
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7FB0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7FB0
                    var_8 = 0;
                    pri = fun_0EE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7C30_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C30_case_default
                }
                case 0x2:
                {
// switch_7C30_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C30_case_default
                }
                case 0x3:
                {
// switch_7C30_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7C30_case_default
                }
            }
// lab_7C88
            pri = arg_1;
            OP_JZER lab_7CD8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7CD8
            pri = 0;
            OP_JUMP lab_7CE0
// lab_7CD8
            pri = 1;
// lab_7CE0
            OP_JZER lab_7D48
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0998(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D48
            pri = 1;
            OP_JUMP lab_7D50
// lab_7D48
            pri = 0;
// lab_7D50
            OP_JZER lab_7DA0
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7F40
// lab_7DA0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7E08
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7F40
// lab_7E08
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0998(var_24, var_16)
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
// switch_76C0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1:
        {
// switch_76C0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2:
        {
// switch_76C0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x3:
        {
// switch_76C0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x4:
        {
// switch_76C0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x5:
        {
// switch_76C0_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BD0(var_40)
            OP_JUMP switch_76C0_case_default
        }
        case 0x6:
        {
// switch_76C0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x7:
        {
// switch_76C0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x8:
        {
// switch_76C0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x9:
        {
// switch_76C0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0xa:
        {
// switch_76C0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0xb:
        {
// switch_76C0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0xc:
        {
// switch_76C0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0xd:
        {
// switch_76C0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0xe:
        {
// switch_76C0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0xf:
        {
// switch_76C0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x10:
        {
// switch_76C0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x11:
        {
// switch_76C0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x12:
        {
// switch_76C0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x13:
        {
// switch_76C0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x14:
        {
// switch_76C0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x15:
        {
// switch_76C0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x16:
        {
// switch_76C0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x17:
        {
// switch_76C0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x18:
        {
// switch_76C0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x19:
        {
// switch_76C0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1a:
        {
// switch_76C0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1b:
        {
// switch_76C0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1c:
        {
// switch_76C0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1d:
        {
// switch_76C0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1e:
        {
// switch_76C0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x1f:
        {
// switch_76C0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x20:
        {
// switch_76C0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x21:
        {
// switch_76C0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x22:
        {
// switch_76C0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x23:
        {
// switch_76C0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x24:
        {
// switch_76C0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x25:
        {
// switch_76C0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x26:
        {
// switch_76C0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x27:
        {
// switch_76C0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x28:
        {
// switch_76C0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x29:
        {
// switch_76C0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2a:
        {
// switch_76C0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2b:
        {
// switch_76C0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2c:
        {
// switch_76C0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2d:
        {
// switch_76C0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2e:
        {
// switch_76C0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x2f:
        {
// switch_76C0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x30:
        {
// switch_76C0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x31:
        {
// switch_76C0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x32:
        {
// switch_76C0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x33:
        {
// switch_76C0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x34:
        {
// switch_76C0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x35:
        {
// switch_76C0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x36:
        {
// switch_76C0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x37:
        {
// switch_76C0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x38:
        {
// switch_76C0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x39:
        {
// switch_76C0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x3a:
        {
// switch_76C0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x3b:
        {
// switch_76C0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x3c:
        {
// switch_76C0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x3d:
        {
// switch_76C0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
        case 0x3e:
        {
// switch_76C0_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0958(var_24, var_16, var_8)
            OP_JUMP switch_76C0_case_default
        }
    }
}
// fun_7FE0
fun_7FE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_81F0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30056;
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
    var_424 = 30112;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30128;
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
    OP_JZER lab_81D8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_81D8
    pri = 0;
    return pri;
}
// fun_81F0
fun_81F0() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0958(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8238
fun_8238() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8338
        case default:
        {
// switch_8338_case_default
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
// switch_8338_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8338_case_default
        }
        case 0x1:
        {
// switch_8338_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8338_case_default
        }
        case 0x2:
        {
// switch_8338_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8338_case_default
        }
        case 0x3:
        {
// switch_8338_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8338_case_default
        }
    }
}
// fun_83F8
fun_83F8() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C60(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1D10()
    pri = 0;
    return pri;
}
// fun_8490
fun_8490() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8238(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_83F8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8538
fun_8538() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8588
// lab_8588
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30280;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8600
    OP_JUMP lab_8630
// lab_8600
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8588
// lab_8630
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_86B8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_62B0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_13E8(var_56)
// lab_86B8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8720
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F28(var_24, var_16)
// lab_8720
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F28(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_87E0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09D0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0750(var_88, var_80, var_72, var_64, var_56)
// lab_87E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8820
    pri = 0;
    return pri;
// lab_8820
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8968
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30400;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0920(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8930
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8968
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07F8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_07F8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09D0(var_40)
    pri = 0;
    return pri;
// lab_8930
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F28(var_16, var_8)
}
// fun_89F0
fun_89F0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_8490(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1DA8(var_112)
    var_128 = 0;
    pri = fun_1E68()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_8538(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8B68
fun_8B68() {
    pri = 30536;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8BF0
// lab_8BF0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8D70
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8D60
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8CB0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8CB0
    pri = 0;
    OP_JUMP lab_8CB8
// lab_8D70
    pri = 0;
    return pri;
// lab_8D60
    OP_JUMP lab_8BE8
// lab_8BE8
    OP_INC_P_S -936
// lab_8CB0
    pri = 1;
// lab_8CB8
    OP_JZER lab_8D30
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8D28
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8D30
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8D28
}
// fun_8D90
fun_8D90() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_8DC8
fun_8DC8() {
    var_8 = 0;
    pri = fun_8D90()
    switch (pri) {
// switch_8E78
        case default:
        {
// switch_8E78_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_8EC0
// lab_8EC0
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8E78_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_8EC0
        }
        case 0x1:
        {
// switch_8E78_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_8EC0
        }
        case 0x2:
        {
// switch_8E78_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_8EC0
        }
    }
}
// fun_8ED0
fun_8ED0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8F68
    var_8 = 1;
    var_16 = 0;
    var_24 = 31456;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_13C0()
// lab_8F68
    pri = arg_4;
    OP_JZER lab_8FA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1418(var_8)
// lab_8FA0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8FF8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8FF8
    pri = 0;
    OP_JUMP lab_9000
// lab_8FF8
    pri = 1;
// lab_9000
    OP_JZER lab_90C8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_90C8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_90A0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1300(var_32, var_24)
    OP_JUMP lab_90C8
// lab_90C8
    pri = arg_2;
    OP_JZER lab_91A0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_9170
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F28(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0718(var_40)
    OP_JUMP lab_91A0
// lab_91A0
    pri = arg_3;
    OP_JZER lab_91D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1388(var_8)
// lab_91D8
    pri = 0;
    return pri;
// lab_9170
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F28(var_16, var_8)
// lab_90A0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1300(var_16, var_8)
}
// fun_91E8
fun_91E8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9368
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9280
    var_8 = 1;
    var_16 = 0;
    var_24 = 31456;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_9368
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9280
    pri = arg_0;
    OP_JNZ lab_92C8
    var_8 = 31504;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_92E8
// lab_92C8
    var_8 = 31680;
    pri = SoundPostEvent(var_8)
// lab_92E8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9368
    var_24 = 31944;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_93A8
fun_93A8() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_91E8(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_93E8
fun_93E8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8B68(var_24)
    pri = 0;
    return pri;
}
// fun_9450
fun_9450() {
    pri = g_mode;
    switch (pri) {
// switch_9538
        case default:
        {
// switch_9538_case_default
            pri = CommandNOP()
            OP_JUMP lab_9590
// lab_9590
            pri = 0;
            return pri;
        }
        case 0x9d1c70220b0f8210:
        {
// switch_9538_case_0x9d1c70220b0f8210
            var_8 = 0;
            pri = fun_B440()
            OP_JUMP lab_9590
        }
        case 0x0:
        {
// switch_9538_case_0x0
            var_8 = 0;
            pri = fun_95A0()
            OP_JUMP lab_9590
        }
        case 0x717881373c0ee106:
        {
// switch_9538_case_0x717881373c0ee106
            var_8 = 0;
            pri = fun_B5D0()
            OP_JUMP lab_9590
        }
        case 0x7fbca61e811a0664:
        {
// switch_9538_case_0x7fbca61e811a0664
            var_8 = 0;
            pri = fun_B588()
            OP_JUMP lab_9590
        }
    }
}
// fun_95A0
fun_95A0() {
    pri = 0;
    return pri;
}
// fun_95B8
fun_95B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8ED0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9610
fun_9610() {
    pri = 0;
    return pri;
}
// fun_9628
fun_9628() {
    pri = 0;
    return pri;
}
// fun_9640
fun_9640() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 6910712898869243;
    pri = WorkGet(var_24)
    OP_EQ_P_C_PRI 110
    OP_JZER lab_9A60
    pri = EvCameraStart()
    OP_PUSH2_C -4631501856787818086, 4630347809383304397
    var_32 = 0;
    OP_PUSH5_C 4677449689049553961, 4652286716736039813, 4672257176667905065, 4677448212955193672, 4652317810924873318
    var_40 = 4672251357502615060;
    var_48 = 1;
    pri = EvCameraMove(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_88 = 48;
    pri = fun_07A0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 10;
    var_104 = 8;
    pri = fun_0060(var_96)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_144 = 48;
    pri = fun_07A0(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C 4467060320034446669, -1655053127185566619
    var_192 = 56;
    pri = fun_1C60(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_1DA8(var_200)
    var_216 = 0;
    pri = fun_1E68()
    var_224 = 8802641224559852288;
    var_232 = 8;
    pri = fun_07F8(var_224)
    OP_PUSH2_C -4631501856787818086, 4631952216750555136
    var_240 = 0;
    OP_PUSH5_C 4677484900909433487, 4652827412574114939, 4672228834006920069, 4677487174149723914, 4652881728448527073
    var_248 = 4672225076425932145;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_21A8()
    OP_PUSH2_C -4631501856787818086, 4631952216750555136
    var_272 = 2;
    OP_PUSH5_C 4677487673053125018, 4652827412574114939, 4672235541027849503, 4677489946293415444, 4652881684468061962
    var_280 = 4672231786195640648;
    var_288 = 180;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 100;
    var_328 = -1;
    OP_PUSH2_C 2352570982897357270, -2409953949732425464
    var_336 = 56;
    pri = fun_1C60(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_1DA8(var_344)
    var_360 = 0;
    pri = fun_1E68()
// lab_9A60
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 8802641224559852288, -2409953949732425464
    var_40 = 48;
    pri = fun_07A0(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C -2409953949732425464, 8802641224559852288
    var_80 = 48;
    pri = fun_07A0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C 2352569883385729059, -2409953949732425464
    var_128 = 56;
    pri = fun_1C60(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 8802641224559852288;
    var_144 = 8;
    pri = fun_07F8(var_136)
    var_152 = -2409953949732425464;
    var_160 = 8;
    pri = fun_07F8(var_152)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1DA8(var_168)
    var_184 = 0;
    var_192 = 0;
    var_200 = 1;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 48;
    pri = fun_1E98(var_224, var_216, var_208, var_200, var_192, var_184)
    OP_JZER lab_B128
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C 2352576480455498325, -2409953949732425464
    var_280 = 56;
    pri = fun_1C60(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1DA8(var_288)
    var_304 = 0;
    pri = fun_1E68()
    var_312 = 1;
    var_320 = 0;
    var_328 = 31456;
    var_336 = 8;
    var_344 = 32;
    pri = fun_02E0(var_336, var_328, var_320, var_312)
    var_352 = 0;
    pri = fun_0350()
    var_360 = 31992;
    pri = SoundPostEvent(var_360)
    var_368 = 3;
    var_376 = 1;
    pri = EvCameraEnd(var_376, var_368)
    var_384 = 5;
    var_392 = 8;
    pri = fun_0060(var_384)
    pri = EvCameraStart()
    var_400 = 1;
    var_408 = 1;
    var_416 = 90;
    pri = float(var_416)
    var_424 = pri;
    var_432 = 52289;
    pri = float(var_432)
    var_440 = pri;
    var_448 = 23330;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 8802641224559852288;
    var_472 = 48;
    pri = fun_06C0(var_464, var_456, var_448, var_440, var_432, var_424)
    var_480 = 1;
    var_488 = 1;
    OP_PUSH4_C -4587338432941916160, 4677419359021301760, 4672208086222503936, -1655053127185566619
    var_496 = 48;
    pri = fun_06C0(var_488, var_480, var_472, var_464, var_456, var_448)
    var_504 = 1;
    var_512 = 1;
    var_520 = 0;
    OP_PUSH3_C 4677396681593978880, 4672176475263205376, -2409953949732425464
    var_528 = 48;
    pri = fun_06C0(var_520, var_512, var_504, var_496, var_488, var_480)
    var_536 = 10;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = 0;
    var_560 = 4631952216750555136;
    var_568 = 0;
    OP_PUSH5_C 4677408117889297285, 4651294473462669640, 4672184072888553308, 4677477956119114547, 4653103389992686715
    var_576 = 4672224675104188006;
    var_584 = 1;
    pri = EvCameraMove(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 0;
    pri = fun_21A8()
    var_600 = 0;
    var_608 = 4631952216750555136;
    var_616 = 2;
    OP_PUSH5_C 4677407712444384543, 4651294473462669640, 4672177310892042486, 4677472969833882583, 4653102774266175160
    var_624 = 4672113055432515256;
    var_632 = 960;
    pri = EvCameraMove(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = 31944;
    var_648 = 8;
    var_656 = 16;
    pri = fun_0280(var_648, var_640)
    var_664 = 0;
    pri = fun_0350()
    var_672 = 32152;
    pri = SoundPostEvent(var_672)
    var_680 = 0;
    var_688 = 2;
    var_696 = -2409953949732425464;
    var_704 = 24;
    pri = fun_7FE0(var_696, var_688, var_680)
    var_712 = 0;
    var_720 = 3;
    var_728 = 0;
    var_736 = 100;
    var_744 = -1;
    OP_PUSH2_C 2352575380943870114, -2409953949732425464
    var_752 = 56;
    pri = fun_1C60(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_760 = 1;
    var_768 = 8;
    pri = fun_1DA8(var_760)
    var_776 = 0;
    pri = fun_1E68()
    var_784 = 1;
    var_792 = 1;
    var_800 = -1;
    var_808 = -1;
    var_816 = 0;
    var_824 = 8;
    var_832 = -1655053127185566619;
    var_840 = 56;
    pri = fun_3F78(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 0;
    var_856 = 3;
    var_864 = 0;
    var_872 = 100;
    var_880 = -1;
    OP_PUSH2_C 4467057021499562036, -1655053127185566619
    var_888 = 56;
    pri = fun_1C60(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 1;
    var_904 = 8;
    pri = fun_1DA8(var_896)
    var_912 = 0;
    pri = fun_1E68()
    var_928 = 6;
    var_936 = 5;
    var_944 = 4;
    var_952 = 24;
    pri = fun_8DC8(var_944, var_936, var_928)
    var_8 = pri;
    var_960 = 0;
    var_968 = 0;
    var_976 = 12;
    var_984 = 6133516649664736065;
    var_992 = var_8;
    var_1000 = 40;
    pri = fun_1FA0(var_992, var_984, var_976, var_968, var_960)
    var_1008 = 0;
    pri = fun_20B8()
    OP_JZER lab_A818
    var_1016 = 0;
    pri = fun_93A8()
    var_1024 = 1;
    var_1032 = 1;
    var_1040 = 90;
    pri = float(var_1040)
    var_1048 = pri;
    var_1056 = 52290;
    pri = float(var_1056)
    var_1064 = pri;
    var_1072 = 23346;
    pri = float(var_1072)
    var_1080 = pri;
    var_1088 = 8802641224559852288;
    var_1096 = 48;
    pri = fun_06C0(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1104 = 1;
    var_1112 = 1;
    OP_PUSH4_C -4587338432941916160, 4677419359021301760, 4672208086222503936, -1655053127185566619
    var_1120 = 48;
    pri = fun_06C0(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1128 = 1;
    var_1136 = 1;
    var_1144 = 0;
    OP_PUSH3_C 4677396681593978880, 4672176475263205376, -2409953949732425464
    var_1152 = 48;
    pri = fun_06C0(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1160 = 15;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1176 = 16;
    pri = fun_2238(var_1168, var_1160)
    var_1184 = 0;
    var_1192 = 1;
    var_1200 = 235;
    pri = float(var_1200)
    var_1208 = pri;
    var_1216 = 4609434218613702656;
    var_1224 = 32;
    pri = fun_22A0(var_1216, var_1208, var_1200, var_1192)
    pri = EvCameraStart()
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 0;
    var_1256 = 4631952216750555136;
    var_1264 = 0;
    OP_PUSH5_C 4677407735809006633, 4651538565044035912, 4672207308318027284, 4677429941820719104, 4652357085480217477
    var_1272 = 4672106637033388114;
    var_1280 = 1;
    pri = EvCameraMove(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1288 = 0;
    pri = fun_21A8()
    var_1296 = 0;
    var_1304 = 4631952216750555136;
    var_1312 = 2;
    OP_PUSH5_C 4677412921380721132, 4651618257646817116, 4672183803508204503, 4677435128766823137, 4652396887801142968
    var_1320 = 4672083132223565332;
    var_1328 = 600;
    pri = EvCameraMove(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 5;
    var_1344 = 5;
    var_1352 = -1655053127185566619;
    var_1360 = 24;
    pri = fun_1058(var_1352, var_1344, var_1336)
    var_1368 = 5;
    var_1376 = -2409953949732425464;
    var_1384 = 16;
    pri = fun_0F68(var_1376, var_1368)
    var_1392 = 31944;
    var_1400 = 8;
    var_1408 = 16;
    pri = fun_0280(var_1400, var_1392)
    var_1416 = 0;
    pri = fun_0350()
    var_1424 = 1;
    var_1432 = 1;
    var_1440 = -1;
    var_1448 = -1;
    var_1456 = 0;
    var_1464 = 4;
    var_1472 = -1655053127185566619;
    var_1480 = 56;
    pri = fun_3F78(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1488 = 0;
    var_1496 = 3;
    var_1504 = 0;
    var_1512 = 100;
    var_1520 = -1;
    OP_PUSH2_C 4467054822476305614, -1655053127185566619
    var_1528 = 56;
    pri = fun_1C60(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1536 = 1;
    var_1544 = 8;
    pri = fun_1DA8(var_1536)
    var_1552 = 0;
    pri = fun_1E68()
    var_1560 = 1;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 4;
    var_1592 = -1655053127185566619;
    var_1600 = 40;
    pri = fun_62B0(var_1592, var_1584, var_1576, var_1568, var_1560)
    OP_JUMP lab_AD68
// lab_B128
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 2352568783874100848, -2409953949732425464
    var_48 = 56;
    pri = fun_1C60(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1DA8(var_56)
    var_72 = 0;
    pri = fun_1E68()
    var_80 = 32624;
    pri = SoundPostEvent(var_80)
    var_88 = 32784;
    pri = SoundPostEvent(var_88)
    var_96 = 3;
    var_104 = 60;
    pri = EvCameraEnd(var_104, var_96)
    pri = 0;
    return pri;
// lab_A818
    var_8 = -6214903781314033103;
    pri = FlagSet(var_8)
    var_16 = 1;
    var_24 = 1;
    var_32 = 90;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 52290;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 23346;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 8802641224559852288;
    var_88 = 48;
    pri = fun_06C0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C -4587338432941916160, 4677419359021301760, 4672208086222503936, -1655053127185566619
    var_112 = 48;
    pri = fun_06C0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    var_136 = 0;
    OP_PUSH3_C 4677396681593978880, 4672176475263205376, -2409953949732425464
    var_144 = 48;
    pri = fun_06C0(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 15;
    var_160 = 8;
    pri = fun_0060(var_152)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_168 = 16;
    pri = fun_2238(var_160, var_152)
    var_176 = 0;
    var_184 = 1;
    var_192 = 235;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 4609434218613702656;
    var_216 = 32;
    pri = fun_22A0(var_208, var_200, var_192, var_184)
    pri = EvCameraStart()
    var_224 = 1;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 0;
    var_248 = 4631952216750555136;
    var_256 = 0;
    OP_PUSH5_C 4677407735809006633, 4651538565044035912, 4672207308318027284, 4677429941820719104, 4652357085480217477
    var_264 = 4672106637033388114;
    var_272 = 1;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    pri = fun_21A8()
    var_288 = 0;
    var_296 = 4631952216750555136;
    var_304 = 2;
    OP_PUSH5_C 4677412921380721132, 4651618257646817116, 4672183803508204503, 4677435128766823137, 4652396887801142968
    var_312 = 4672083132223565332;
    var_320 = 600;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 7;
    var_336 = 7;
    var_344 = -1655053127185566619;
    var_352 = 24;
    pri = fun_1058(var_344, var_336, var_328)
    var_360 = 5;
    var_368 = -2409953949732425464;
    var_376 = 16;
    pri = fun_0F68(var_368, var_360)
    var_384 = 31944;
    var_392 = 8;
    var_400 = 16;
    pri = fun_0280(var_392, var_384)
    var_408 = 0;
    pri = fun_0350()
    var_416 = 1;
    var_424 = 1;
    var_432 = -1;
    var_440 = -1;
    var_448 = 0;
    var_456 = 9;
    var_464 = -1655053127185566619;
    var_472 = 56;
    pri = fun_3F78(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C 4467058121011190247, -1655053127185566619
    var_520 = 56;
    pri = fun_1C60(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_1DA8(var_528)
    var_544 = 0;
    pri = fun_1E68()
    var_552 = 1;
    var_560 = 3;
    var_568 = 0;
    var_576 = 9;
    var_584 = -1655053127185566619;
    var_592 = 40;
    pri = fun_62B0(var_584, var_576, var_568, var_560, var_552)
// lab_AD68
    var_8 = -1655053127185566619;
    var_16 = 8;
    pri = fun_10C0(var_8)
    var_32 = 816;
    var_40 = 813;
    var_48 = 810;
    var_56 = 24;
    pri = fun_8DC8(var_48, var_40, var_32)
    var_16 = pri;
    var_64 = var_16;
    var_72 = 1;
    var_80 = 16;
    pri = fun_1F50(var_72, var_64)
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 3;
    var_120 = 0;
    var_128 = 0;
    var_136 = -2409953949732425464;
    var_144 = 56;
    pri = fun_2398(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C 2352574281432241903, -2409953949732425464
    var_192 = 56;
    pri = fun_1C60(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_1DA8(var_200)
    var_216 = 0;
    pri = fun_1E68()
    var_224 = 1;
    var_232 = 1;
    var_240 = 16;
    pri = fun_91E8(var_232, var_224)
    var_248 = -2409953949732425464;
    var_256 = 8;
    pri = fun_10C0(var_248)
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    OP_PUSH2_C 8802641224559852288, -2409953949732425464
    var_296 = 48;
    pri = fun_07A0(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 5;
    var_312 = 8;
    pri = fun_0060(var_304)
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    OP_PUSH2_C -2409953949732425464, 8802641224559852288
    var_352 = 48;
    pri = fun_07A0(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 2352573181920613692, -2409953949732425464
    var_400 = 56;
    pri = fun_1C60(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = -2409953949732425464;
    var_416 = 8;
    pri = fun_07F8(var_408)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1DA8(var_424)
    var_440 = 0;
    pri = fun_1E68()
    var_448 = 3;
    var_456 = 6000;
    pri = EvCameraEnd(var_456, var_448)
    var_464 = 32312;
    pri = SoundPostEvent(var_464)
    var_472 = 32472;
    pri = SoundPostEvent(var_472)
    pri = 1;
    return pri;
}
// fun_B230
fun_B230() {
    pri = 0;
    return pri;
}
// fun_B248
fun_B248() {
    var_8 = 120;
    var_16 = 8;
    pri = fun_93E8(var_8)
    var_24 = 20;
    var_32 = -3710971335921605691;
    pri = WorkSet(var_32, var_24)
    var_40 = -752408949595178378;
    var_48 = 8;
    pri = fun_0518(var_40)
    var_56 = -752408949595178378;
    pri = VanishFlagReset(var_56)
    var_64 = -6557271565910877757;
    pri = FlagSet(var_64)
    pri = 0;
    return pri;
}
// fun_B328
fun_B328() {
    var_8 = 115;
    var_16 = 8;
    pri = fun_93E8(var_8)
    var_24 = 10;
    var_32 = -3710971335921605691;
    pri = WorkSet(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_B390
fun_B390() {
    var_8 = 0;
    pri = fun_0548()
    var_16 = -7122862677913242325;
    pri = ReserveScript(var_16)
    pri = 0;
    return pri;
}
// fun_B3E8
fun_B3E8() {
    var_8 = 31944;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_B440
fun_B440() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_95B8()
    var_16 = 0;
    pri = fun_9610()
    var_24 = 0;
    pri = fun_9628()
    var_32 = 0;
    pri = fun_9640()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B530
    var_40 = 0;
    pri = fun_B230()
    var_48 = 0;
    pri = fun_B248()
    var_56 = 0;
    pri = fun_B390()
    OP_JUMP lab_B560
// lab_B530
    var_8 = 0;
    pri = fun_B328()
    var_16 = 0;
    pri = fun_B3E8()
// lab_B560
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B588
fun_B588() {
    var_8 = 0;
    pri = fun_9610()
    var_16 = 0;
    pri = fun_B248()
    pri = 0;
    return pri;
}
// fun_B5D0
fun_B5D0() {
    var_16 = 813;
    var_24 = 810;
    var_32 = 816;
    var_40 = 24;
    pri = fun_8DC8(var_32, var_24, var_16)
    var_8 = pri;
    var_48 = var_8;
    var_56 = 2;
    var_64 = 16;
    pri = fun_1F50(var_56, var_48)
    var_72 = 1;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 1;
    var_144 = 4467055921987933825;
    var_152 = 80;
    pri = fun_89F0(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
