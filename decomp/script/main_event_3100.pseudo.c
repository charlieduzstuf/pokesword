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
    pri = fun_06C8()
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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07C0
fun_07C0() {
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
// fun_0838
fun_0838() {
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
// fun_08F8
fun_08F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1570(var_8)
    OP_JZER lab_09C8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15A0(var_24)
    OP_JNZ lab_09C8
    pri = 0;
    return pri;
// lab_09C8
    OP_JUMP lab_09D8
// lab_09D8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A38
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09D8
    pri = 0;
    return pri;
}
// fun_0A78
fun_0A78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AF0
fun_0AF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B28
fun_0B28() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B70
    pri = 0;
    return pri;
// lab_0B70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BB0
// lab_0BB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1570(var_8)
    OP_JNZ lab_0C38
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C28
    pri = 0;
    return pri;
// lab_0C38
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C80
    pri = 0;
    return pri;
// lab_0C80
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D28(var_8)
    pri = 0;
    return pri;
// lab_0CE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BB0
    pri = 0;
    return pri;
// lab_0C28
    OP_JUMP lab_0C80
}
// fun_0D28
fun_0D28() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DB0
    pri = 0;
    return pri;
// lab_0DB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1570(var_8)
    OP_JZER lab_0EE0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E08
    OP_ZERO_P_S 64
// lab_0EE0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F18
    OP_CONST_S 64, 1
// lab_0F18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F50
    OP_CONST_S 72, 1
// lab_0F50
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
// lab_0E08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E30
    OP_ZERO_P_S 72
// lab_0E30
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
    OP_JUMP lab_0FF0
// lab_0FF0
    pri = 0;
    return pri;
}
// fun_1000
fun_1000() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D8
fun_10D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1118(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1190(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1158(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11D0(var_24)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1570(var_8)
    OP_JZER lab_1368
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1368
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_13D0
fun_13D0() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_12C8(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1570
fun_1570() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_15A0
fun_15A0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15D0
fun_15D0() {
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
// switch_1BE8
        case default:
        {
// switch_1BE8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C30
// lab_1C30
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
            OP_JNZ lab_1CD8
            var_88 = 0;
            pri = fun_1FA8()
// lab_1CD8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BE8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17D0
                case default:
                {
// switch_17D0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1848
// lab_1848
                    OP_JUMP lab_1C30
                }
                case 0x0:
                {
// switch_17D0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1848
                }
                case 0x1:
                {
// switch_17D0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1848
                }
                case 0x2:
                {
// switch_17D0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1848
                }
                case 0x3:
                {
// switch_17D0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1848
                }
                case 0x4:
                {
// switch_17D0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1848
                }
                case 0x5:
                {
// switch_17D0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1848
                }
            }
        }
        case 0x65:
        {
// switch_1BE8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1988
                case default:
                {
// switch_1988_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A00
// lab_1A00
                    OP_JUMP lab_1C30
                }
                case 0x0:
                {
// switch_1988_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A00
                }
                case 0x1:
                {
// switch_1988_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A00
                }
                case 0x2:
                {
// switch_1988_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A00
                }
                case 0x3:
                {
// switch_1988_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A00
                }
                case 0x4:
                {
// switch_1988_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A00
                }
                case 0x5:
                {
// switch_1988_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A00
                }
            }
        }
        case 0x66:
        {
// switch_1BE8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B40
                case default:
                {
// switch_1B40_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BB8
// lab_1BB8
                    OP_JUMP lab_1C30
                }
                case 0x0:
                {
// switch_1B40_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1BB8
                }
                case 0x1:
                {
// switch_1B40_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1BB8
                }
                case 0x2:
                {
// switch_1B40_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1BB8
                }
                case 0x3:
                {
// switch_1B40_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1BB8
                }
                case 0x4:
                {
// switch_1B40_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1BB8
                }
                case 0x5:
                {
// switch_1B40_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1BB8
                }
            }
        }
    }
}
// fun_1CF0
fun_1CF0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_15D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AF0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E00
    pri = 1;
    return pri;
// lab_1E00
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E48
fun_1E48() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D58(var_8)
    arg_2 = pri;
// lab_1E98
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_15D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EF8
fun_1EF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1CF0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1EF8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FA8
fun_1FA8() {
    OP_JUMP lab_1FC0
// lab_1FC0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2000
    pri = 0;
    return pri;
// lab_2000
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FC0
    pri = 0;
    return pri;
}
// fun_2040
fun_2040() {
    var_8 = 0;
    pri = fun_1FA8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_20F0
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_20F0
    pri = 0;
    return pri;
}
// fun_2100
fun_2100() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2160
// lab_2160
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21A0
    OP_JUMP lab_21D0
// lab_21A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2160
// lab_21D0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
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
// fun_2288
fun_2288() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_22C0
fun_22C0() {
    OP_JUMP lab_22D8
// lab_22D8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2320
    OP_JUMP lab_2350
    OP_JUMP lab_2340
// lab_2320
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2350
    pri = 0;
    return pri;
// lab_2340
    OP_JUMP lab_22D8
}
// fun_2360
fun_2360() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2390
fun_2390() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_23F0(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2580(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2440
fun_2440() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24E0
fun_24E0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2530
fun_2530() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2580
fun_2580() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25D0
fun_25D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2618
fun_2618() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2690
fun_2690() {
    var_8 = 0;
    pri = fun_2618()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2710
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2710
    pri = 1;
    return pri;
// lab_2710
    var_8 = 0;
    pri = fun_2618()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2740
fun_2740() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2790
fun_2790() {
    OP_JUMP lab_27A8
// lab_27A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_27E0
    pri = 0;
    return pri;
// lab_27E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27A8
    pri = 0;
    return pri;
}
// fun_2820
fun_2820() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2858
fun_2858() {
    pri = arg_6;
    OP_JNZ lab_2890
    var_8 = 0;
    pri = fun_1000()
// lab_2890
    pri = arg_1;
    switch (pri) {
// switch_3DF8
        case default:
        {
// switch_3DF8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4148
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4148
            pri = 1;
            OP_JUMP lab_4150
// lab_4148
            pri = 0;
// lab_4150
            OP_JZER lab_42A8
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AF0(var_24, var_16)
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4308
// lab_42A8
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_4308
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4368
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_43C8
// lab_4368
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_43C8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_43C8
            pri = arg_2;
            OP_JZER lab_4408
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4408
            var_8 = 0;
            pri = fun_1040()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3DF8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1:
        {
// switch_3DF8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x2:
        {
// switch_3DF8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x3:
        {
// switch_3DF8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x4:
        {
// switch_3DF8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x5:
        {
// switch_3DF8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x6:
        {
// switch_3DF8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x7:
        {
// switch_3DF8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x8:
        {
// switch_3DF8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x9:
        {
// switch_3DF8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0xa:
        {
// switch_3DF8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0xb:
        {
// switch_3DF8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0xc:
        {
// switch_3DF8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0xd:
        {
// switch_3DF8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0xe:
        {
// switch_3DF8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0xf:
        {
// switch_3DF8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x10:
        {
// switch_3DF8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x11:
        {
// switch_3DF8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x12:
        {
// switch_3DF8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x13:
        {
// switch_3DF8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x14:
        {
// switch_3DF8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x15:
        {
// switch_3DF8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x16:
        {
// switch_3DF8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x17:
        {
// switch_3DF8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x18:
        {
// switch_3DF8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x19:
        {
// switch_3DF8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1a:
        {
// switch_3DF8_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A78(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D60(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1b:
        {
// switch_3DF8_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A78(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D60(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1c:
        {
// switch_3DF8_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A78(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0D60(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1d:
        {
// switch_3DF8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1e:
        {
// switch_3DF8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x1f:
        {
// switch_3DF8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x20:
        {
// switch_3DF8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x21:
        {
// switch_3DF8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x22:
        {
// switch_3DF8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x23:
        {
// switch_3DF8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x24:
        {
// switch_3DF8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x25:
        {
// switch_3DF8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x26:
        {
// switch_3DF8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x27:
        {
// switch_3DF8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x28:
        {
// switch_3DF8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
        case 0x29:
        {
// switch_3DF8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DF8_case_default
        }
    }
}
// fun_4438
fun_4438() {
    pri = arg_5;
    OP_JNZ lab_4470
    var_8 = 0;
    pri = fun_1000()
// lab_4470
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_44C0
    OP_CONST_S -8, -1
// lab_44C0
    pri = arg_1;
    switch (pri) {
// switch_5F78
        case default:
        {
// switch_5F78_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6420
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AF0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6420
            pri = 1;
            OP_JUMP lab_6428
// lab_6420
            pri = 0;
// lab_6428
            OP_JZER lab_6478
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_66D0
// lab_6478
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_64E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_64E0
            pri = 1;
            OP_JUMP lab_64E8
// lab_64E0
            pri = 0;
// lab_64E8
            OP_JZER lab_6670
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AF0(var_24, var_16)
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_66D0
// lab_6670
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_66D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6740
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6740
            var_8 = 0;
            pri = fun_1040()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5F78_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1:
        {
// switch_5F78_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2:
        {
// switch_5F78_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x3:
        {
// switch_5F78_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x4:
        {
// switch_5F78_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x5:
        {
// switch_5F78_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D28(var_40)
            OP_JUMP switch_5F78_case_default
        }
        case 0x6:
        {
// switch_5F78_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x7:
        {
// switch_5F78_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x8:
        {
// switch_5F78_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x9:
        {
// switch_5F78_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0xa:
        {
// switch_5F78_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0xb:
        {
// switch_5F78_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0xc:
        {
// switch_5F78_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0xd:
        {
// switch_5F78_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0xe:
        {
// switch_5F78_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0xf:
        {
// switch_5F78_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x10:
        {
// switch_5F78_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x11:
        {
// switch_5F78_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x12:
        {
// switch_5F78_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x13:
        {
// switch_5F78_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x14:
        {
// switch_5F78_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x15:
        {
// switch_5F78_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x16:
        {
// switch_5F78_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x17:
        {
// switch_5F78_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x18:
        {
// switch_5F78_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x19:
        {
// switch_5F78_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1a:
        {
// switch_5F78_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1b:
        {
// switch_5F78_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1c:
        {
// switch_5F78_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1d:
        {
// switch_5F78_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1e:
        {
// switch_5F78_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x1f:
        {
// switch_5F78_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x20:
        {
// switch_5F78_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x21:
        {
// switch_5F78_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x22:
        {
// switch_5F78_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x23:
        {
// switch_5F78_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x24:
        {
// switch_5F78_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x25:
        {
// switch_5F78_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x26:
        {
// switch_5F78_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x27:
        {
// switch_5F78_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x28:
        {
// switch_5F78_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x29:
        {
// switch_5F78_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2a:
        {
// switch_5F78_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2b:
        {
// switch_5F78_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2c:
        {
// switch_5F78_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2d:
        {
// switch_5F78_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2e:
        {
// switch_5F78_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x2f:
        {
// switch_5F78_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x30:
        {
// switch_5F78_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x31:
        {
// switch_5F78_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x32:
        {
// switch_5F78_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x33:
        {
// switch_5F78_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x34:
        {
// switch_5F78_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x35:
        {
// switch_5F78_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x36:
        {
// switch_5F78_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x37:
        {
// switch_5F78_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x38:
        {
// switch_5F78_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0D60(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F78_case_default
        }
        case 0x39:
        {
// switch_5F78_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x3a:
        {
// switch_5F78_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x3b:
        {
// switch_5F78_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x3c:
        {
// switch_5F78_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x3d:
        {
// switch_5F78_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
        case 0x3e:
        {
// switch_5F78_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            OP_JUMP switch_5F78_case_default
        }
    }
}
// fun_6770
fun_6770() {
    pri = arg_4;
    OP_JNZ lab_67A8
    var_8 = 0;
    pri = fun_1000()
// lab_67A8
    pri = arg_1;
    switch (pri) {
// switch_7B80
        case default:
        {
// switch_7B80_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1570(var_264)
            OP_JZER lab_8148
            pri = arg_3;
            switch (pri) {
// switch_80F0
                case default:
                {
// switch_80F0_case_default
                    OP_JUMP lab_8400
// lab_8400
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8470
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8470
                    var_8 = 0;
                    pri = fun_1040()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_80F0_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_80F0_case_default
                }
                case 0x2:
                {
// switch_80F0_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_80F0_case_default
                }
                case 0x3:
                {
// switch_80F0_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_80F0_case_default
                }
            }
// lab_8148
            pri = arg_1;
            OP_JZER lab_8198
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8198
            pri = 0;
            OP_JUMP lab_81A0
// lab_8198
            pri = 1;
// lab_81A0
            OP_JZER lab_8208
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AF0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8208
            pri = 1;
            OP_JUMP lab_8210
// lab_8208
            pri = 0;
// lab_8210
            OP_JZER lab_8260
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8400
// lab_8260
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_82C8
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8400
// lab_82C8
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AF0(var_24, var_16)
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7B80_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1:
        {
// switch_7B80_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2:
        {
// switch_7B80_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x3:
        {
// switch_7B80_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x4:
        {
// switch_7B80_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x5:
        {
// switch_7B80_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D28(var_40)
            OP_JUMP switch_7B80_case_default
        }
        case 0x6:
        {
// switch_7B80_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x7:
        {
// switch_7B80_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x8:
        {
// switch_7B80_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x9:
        {
// switch_7B80_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0xa:
        {
// switch_7B80_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0xb:
        {
// switch_7B80_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0xc:
        {
// switch_7B80_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0xd:
        {
// switch_7B80_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0xe:
        {
// switch_7B80_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0xf:
        {
// switch_7B80_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x10:
        {
// switch_7B80_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x11:
        {
// switch_7B80_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x12:
        {
// switch_7B80_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x13:
        {
// switch_7B80_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x14:
        {
// switch_7B80_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x15:
        {
// switch_7B80_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x16:
        {
// switch_7B80_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x17:
        {
// switch_7B80_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x18:
        {
// switch_7B80_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x19:
        {
// switch_7B80_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1a:
        {
// switch_7B80_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1b:
        {
// switch_7B80_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1c:
        {
// switch_7B80_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1d:
        {
// switch_7B80_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1e:
        {
// switch_7B80_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x1f:
        {
// switch_7B80_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x20:
        {
// switch_7B80_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x21:
        {
// switch_7B80_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x22:
        {
// switch_7B80_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x23:
        {
// switch_7B80_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x24:
        {
// switch_7B80_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x25:
        {
// switch_7B80_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x26:
        {
// switch_7B80_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x27:
        {
// switch_7B80_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x28:
        {
// switch_7B80_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x29:
        {
// switch_7B80_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2a:
        {
// switch_7B80_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2b:
        {
// switch_7B80_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2c:
        {
// switch_7B80_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2d:
        {
// switch_7B80_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2e:
        {
// switch_7B80_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x2f:
        {
// switch_7B80_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x30:
        {
// switch_7B80_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x31:
        {
// switch_7B80_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x32:
        {
// switch_7B80_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x33:
        {
// switch_7B80_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x34:
        {
// switch_7B80_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x35:
        {
// switch_7B80_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x36:
        {
// switch_7B80_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x37:
        {
// switch_7B80_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x38:
        {
// switch_7B80_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x39:
        {
// switch_7B80_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x3a:
        {
// switch_7B80_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x3b:
        {
// switch_7B80_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x3c:
        {
// switch_7B80_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x3d:
        {
// switch_7B80_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
        case 0x3e:
        {
// switch_7B80_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB0(var_24, var_16, var_8)
            OP_JUMP switch_7B80_case_default
        }
    }
}
// fun_84A0
fun_84A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_86B0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32808;
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
    var_424 = 32864;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32880;
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
    OP_JZER lab_8698
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8698
    pri = 0;
    return pri;
}
// fun_86B0
fun_86B0() {
    var_8 = arg_1;
    var_16 = 32928;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AB0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_86F8
fun_86F8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8790
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B28(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2858(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8790
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_88E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8850
    var_24 = 33032;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8850
    pri = 1;
    OP_JUMP lab_8858
// lab_88E8
    pri = 0;
    return pri;
// lab_8850
    pri = 0;
// lab_8858
    OP_JZER lab_88E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B28(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2858(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_88F8
fun_88F8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8C78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8960
fun_8960() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_89D0
    OP_CONST_S -8, 1
// lab_89D0
    pri = arg_0;
    OP_JNZ lab_89F0
    OP_ZERO_P_S -8
// lab_89F0
    pri = var_8;
    OP_JZER lab_8A78
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8A78
    pri = 0;
    return pri;
}
// fun_8A90
fun_8A90() {
    var_8 = 33136;
    var_16 = 8;
    pri = fun_2288(var_8)
    var_24 = 0;
    pri = fun_22C0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_23F0(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2530(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8BA8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8BA8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_86F8(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_88F8(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2360()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2820(var_112)
    pri = 0;
    return pri;
}
// fun_8C78
fun_8C78() {
    var_8 = 33296;
    var_16 = 8;
    pri = fun_2288(var_8)
    var_24 = 0;
    pri = fun_22C0()
    pri = arg_3;
    OP_JNZ lab_8D98
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8D60
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8E08(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8D88
// lab_8D98
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8FA8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8D60
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8ED0(var_16, var_8)
// lab_8D88
    OP_JUMP lab_8DE0
// lab_8DE0
    var_8 = 0;
    pri = fun_2360()
    pri = 0;
    return pri;
}
// fun_8E08
fun_8E08() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8FA8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8EB8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8EB8
    pri = 0;
    return pri;
}
// fun_8ED0
fun_8ED0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2440(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1F48(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2040(var_72)
    var_88 = 0;
    pri = fun_2100()
    var_96 = 0;
    var_104 = 8;
    pri = fun_23F0(var_96)
    pri = 0;
    return pri;
}
// fun_8FA8
fun_8FA8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8FF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_92B0(var_8)
// lab_8FF0
    pri = arg_4;
    OP_JNZ lab_9058
    var_8 = 0;
    var_16 = 8;
    pri = fun_23F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2440(var_40, var_32, var_24)
// lab_9058
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_90F8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2490(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1F48(var_56, var_48, var_40)
    OP_JUMP lab_91E8
// lab_90F8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_91B0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_91B0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_91B0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1F48(var_24, var_16, var_8)
// lab_91E8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9228
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
// lab_9228
    var_8 = 1;
    var_16 = 8;
    pri = fun_2040(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_94B8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8960(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_92B0
fun_92B0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9310
    var_16 = 33456;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9310
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9450
        case default:
        {
// switch_9450_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9440
            var_16 = 34000;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9440
            OP_JUMP lab_9488
// lab_9488
            var_8 = 34216;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9450_case_0x1
            var_8 = 33672;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9488
        }
        case 0x2:
        {
// switch_9450_case_0x2
            var_8 = 33800;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9488
        }
    }
}
// fun_94B8
fun_94B8() {
    pri = arg_2;
    OP_JNZ lab_95A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_23F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2440(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_24E0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_95A0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1F48(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2040(var_40)
    var_56 = 0;
    pri = fun_2100()
    pri = 0;
    return pri;
}
// fun_9618
fun_9618() {
    pri = g_mode;
    switch (pri) {
// switch_96D8
        case default:
        {
// switch_96D8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9720
// lab_9720
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_96D8_case_0x0
            var_8 = 0;
            pri = fun_9730()
            OP_JUMP lab_9720
        }
        case 0xd93ca17f7ba4aa6:
        {
// switch_96D8_case_0xd93ca17f7ba4aa6
            var_8 = 0;
            pri = fun_D6A8()
            OP_JUMP lab_9720
        }
        case 0x2ca6341b8320b7b2:
        {
// switch_96D8_case_0x2ca6341b8320b7b2
            var_8 = 0;
            pri = fun_D5B8()
            OP_JUMP lab_9720
        }
    }
}
// fun_9730
fun_9730() {
    pri = 0;
    return pri;
}
// fun_9748
fun_9748() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 34400;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_97B0
fun_97B0() {
    var_8 = -7268306149131292845;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = -2669111732362968534;
    var_32 = 8;
    pri = fun_0518(var_24)
    var_40 = -201298903742919217;
    var_48 = 8;
    pri = fun_0518(var_40)
    pri = 0;
    return pri;
}
// fun_9840
fun_9840() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_9870
fun_9870() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0780(var_16, var_8)
    var_32 = 1;
    var_40 = -2669111732362968534;
    var_48 = 16;
    pri = fun_0780(var_40, var_32)
    var_56 = 1;
    var_64 = -201298903742919217;
    var_72 = 16;
    pri = fun_0780(var_64, var_56)
    var_80 = 1;
    var_88 = -7268306149131292845;
    var_96 = 16;
    pri = fun_0780(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4640537203540230144, 4656250104310451405, 4654212049557205811, 8802641224559852288
    var_120 = 48;
    pri = fun_06F0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C 4640537203540230144, 4656598869398781952, 4653801711817719808, -201298903742919217
    var_144 = 48;
    pri = fun_06F0(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 1;
    OP_PUSH4_C 4640537203540230144, 4656634053770870784, 4654580166050185216, -2669111732362968534
    var_168 = 48;
    pri = fun_06F0(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 1;
    var_184 = 1;
    OP_PUSH4_C 4640537203540230144, 4653379499352653824, 4654206332096741376, -7268306149131292845
    var_192 = 48;
    pri = fun_06F0(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 1;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 0;
    OP_PUSH5_C 4653585459870768824, -4589604306504436941, 4653805889961905357, 4657272826046143529, 4638513398457680527
    var_240 = 4654470610711593615;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    pri = fun_2790()
    var_264 = 5;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 34448;
    var_288 = 8;
    var_296 = 16;
    pri = fun_02A8(var_288, var_280)
    var_304 = 0;
    pri = fun_0378()
    var_312 = 0;
    pri = fun_2390()
    var_320 = 1;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 0;
    var_344 = 4631952216750555136;
    var_352 = 3;
    OP_PUSH5_C 4651325171827317146, -4589549418883978363, 4653808132965626020, 4655230109363596165, 4640467186639773368
    var_360 = 4654285584894871470;
    var_368 = 75;
    pri = EvCameraMove(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_376 = 1;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH2_C 4607182418800017408, -7268306149131292845
    var_400 = 0;
    var_408 = 48;
    pri = fun_13D0(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    OP_PUSH2_C 8802641224559852288, -7268306149131292845
    var_448 = 48;
    pri = fun_08F8(var_440, var_432, var_424, var_416, var_408, var_400)
    var_456 = 1;
    var_464 = 0;
    var_472 = 10;
    pri = float(var_472)
    var_480 = pri;
    OP_PUSH5_C -7268306149131292845, 4654314963845565645, 4654212049557205811, 4611686018427387904, 8802641224559852288
    var_488 = 64;
    pri = fun_0838(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_496 = 1;
    var_504 = 0;
    var_512 = 50;
    pri = float(var_512)
    var_520 = pri;
    OP_PUSH5_C -7268306149131292845, 4654540583631585280, 4654580166050185216, 4611686018427387904, -2669111732362968534
    var_528 = 64;
    pri = fun_0838(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_536 = 1;
    var_544 = 0;
    var_552 = 50;
    pri = float(var_552)
    var_560 = pri;
    OP_PUSH5_C -7268306149131292845, 4654505399259496448, 4653801711817719808, 4611686018427387904, -201298903742919217
    var_568 = 64;
    pri = fun_0838(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_576 = -7268306149131292845;
    var_584 = 8;
    pri = fun_0950(var_576)
    var_592 = 5;
    var_600 = 5;
    var_608 = -7268306149131292845;
    var_616 = 24;
    pri = fun_1208(var_608, var_600, var_592)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C -1243014829354058070, -7268306149131292845
    var_664 = 56;
    pri = fun_1E48(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 8802641224559852288;
    var_680 = 8;
    pri = fun_0950(var_672)
    var_688 = -201298903742919217;
    var_696 = 8;
    pri = fun_0950(var_688)
    var_704 = -2669111732362968534;
    var_712 = 8;
    pri = fun_0950(var_704)
    var_720 = 1;
    var_728 = 8;
    pri = fun_2040(var_720)
    var_736 = 0;
    pri = fun_2100()
    var_744 = -7268306149131292845;
    var_752 = 8;
    pri = fun_11D0(var_744)
    var_760 = 2;
    var_768 = -7268306149131292845;
    var_776 = 16;
    pri = fun_1118(var_768, var_760)
    var_784 = 1;
    var_792 = 1;
    var_800 = -1;
    var_808 = -1;
    var_816 = 0;
    var_824 = 1;
    var_832 = -7268306149131292845;
    var_840 = 56;
    pri = fun_4438(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 0;
    var_856 = 3;
    var_864 = 0;
    var_872 = 100;
    var_880 = -1;
    OP_PUSH2_C -1244003290307630534, -7268306149131292845
    var_888 = 56;
    pri = fun_1E48(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 1;
    var_904 = 8;
    pri = fun_2040(var_896)
    var_912 = 0;
    pri = fun_2100()
    var_920 = 1;
    var_928 = 3;
    var_936 = 0;
    var_944 = 1;
    var_952 = -7268306149131292845;
    var_960 = 40;
    pri = fun_6770(var_952, var_944, var_936, var_928, var_920)
    var_968 = 6;
    var_976 = -201298903742919217;
    var_984 = 16;
    pri = fun_1118(var_976, var_968)
    var_992 = 1;
    var_1000 = -1;
    var_1008 = -1;
    var_1016 = 3;
    var_1024 = 0;
    var_1032 = 1;
    var_1040 = -201298903742919217;
    var_1048 = 56;
    pri = fun_2858(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C -8787379456245366340, -201298903742919217
    var_1096 = 56;
    pri = fun_1E48(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = -7268306149131292845;
    var_1112 = 8;
    pri = fun_0B28(var_1104)
    var_1120 = -201298903742919217;
    var_1128 = 8;
    pri = fun_0B28(var_1120)
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_2040(var_1136)
    var_1152 = 0;
    pri = fun_2100()
    var_1160 = -7268306149131292845;
    var_1168 = 8;
    pri = fun_1270(var_1160)
    var_1176 = 0;
    var_1184 = 4628687107020711526;
    var_1192 = 0;
    OP_PUSH5_C 4650233840566051799, 4636585998554654310, 4652340944649521725, 4653983702982349292, 4640105491294700175
    var_1200 = 4654706741828774789;
    var_1208 = 1;
    pri = EvCameraMove(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1216 = 0;
    pri = fun_2790()
    var_1224 = 0;
    var_1232 = 4628687107020711526;
    var_1240 = 3;
    OP_PUSH5_C 4651104477853389947, 4636585998554654310, 4651625382482165105, 4653930178756309156, 4640100917326328627
    var_1248 = 4654759914211094036;
    var_1256 = 300;
    pri = EvCameraMove(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1264 = 1;
    var_1272 = 1;
    var_1280 = -1;
    var_1288 = -1;
    var_1296 = 0;
    var_1304 = 1;
    var_1312 = -7268306149131292845;
    var_1320 = 56;
    pri = fun_4438(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 100;
    var_1360 = -1;
    OP_PUSH2_C -1243015928865686281, -7268306149131292845
    var_1368 = 56;
    pri = fun_1E48(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1376 = 1;
    var_1384 = 8;
    pri = fun_2040(var_1376)
    var_1392 = 0;
    pri = fun_2100()
    var_1400 = 2;
    var_1408 = 5;
    var_1416 = -7268306149131292845;
    var_1424 = 24;
    pri = fun_1208(var_1416, var_1408, var_1400)
    var_1432 = 0;
    var_1440 = 4628687107020711526;
    var_1448 = 0;
    OP_PUSH5_C 4654942741004560630, -4597468717353732669, 4653260136370342461, 4652505519549967237, 4642806595539959808
    var_1456 = 4655713190792375828;
    var_1464 = 1;
    pri = EvCameraMove(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1472 = 0;
    pri = fun_2790()
    var_1480 = 1;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 1;
    var_1512 = -7268306149131292845;
    var_1520 = 40;
    pri = fun_6770(var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1528 = 0;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 100;
    var_1560 = -1;
    OP_PUSH2_C -1243017028377314492, -7268306149131292845
    var_1568 = 56;
    pri = fun_1E48(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1576 = -7268306149131292845;
    var_1584 = 8;
    pri = fun_0B28(var_1576)
    var_1592 = 1;
    var_1600 = 8;
    pri = fun_2040(var_1592)
    var_1608 = 0;
    pri = fun_2100()
    var_1616 = 2;
    var_1624 = 2;
    var_1632 = -2669111732362968534;
    var_1640 = 24;
    pri = fun_1208(var_1632, var_1624, var_1616)
    var_1648 = 0;
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 0;
    OP_PUSH2_C 8802641224559852288, -2669111732362968534
    var_1680 = 48;
    pri = fun_08F8(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1688 = 1;
    var_1696 = 1;
    var_1704 = 30;
    OP_PUSH2_C -2669111732362968534, 8802641224559852288
    var_1712 = 40;
    pri = fun_1080(var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1720 = 0;
    var_1728 = 3;
    var_1736 = 0;
    var_1744 = 100;
    var_1752 = -1;
    OP_PUSH2_C 6182375445883398293, -2669111732362968534
    var_1760 = 56;
    pri = fun_1E48(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1768 = -2669111732362968534;
    var_1776 = 8;
    pri = fun_0950(var_1768)
    var_1784 = 1;
    var_1792 = 8;
    pri = fun_2040(var_1784)
    var_1800 = 0;
    var_1808 = 8117913593634511059;
    var_1816 = 0;
    var_1824 = 24;
    pri = fun_2130(var_1816, var_1808, var_1800)
    var_1832 = 0;
    var_1840 = 8117914693146139270;
    var_1848 = 1;
    var_1856 = 24;
    pri = fun_2130(var_1848, var_1840, var_1832)
    var_1872 = 0;
    var_1880 = 0;
    var_1888 = 0;
    var_1896 = 1;
    var_1904 = 32;
    pri = fun_2218(var_1896, var_1888, var_1880, var_1872)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A930
        case default:
        {
// switch_A930_case_default
            var_8 = -1;
            var_16 = 8802641224559852288;
            var_24 = 16;
            pri = fun_10D8(var_16, var_8)
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 3;
            var_64 = 0;
            var_72 = 19;
            var_80 = 8802641224559852288;
            var_88 = 56;
            pri = fun_2858(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 8802641224559852288;
            var_104 = 8;
            pri = fun_0B28(var_96)
            var_112 = 5;
            var_120 = 5;
            var_128 = -7268306149131292845;
            var_136 = 24;
            pri = fun_1208(var_128, var_120, var_112)
            var_144 = 1;
            var_152 = 1;
            var_160 = -1;
            var_168 = -1;
            var_176 = 0;
            var_184 = 4;
            var_192 = -7268306149131292845;
            var_200 = 56;
            pri = fun_4438(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
            var_208 = 0;
            var_216 = 4628687107020711526;
            var_224 = 0;
            OP_PUSH5_C 4653287404258711306, 4627814534592908493, 4653388295445676032, 4656057249970939494, 4643218076771538698
            var_232 = 4655531023705885901;
            var_240 = 1;
            pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_248 = 0;
            pri = fun_2790()
            var_256 = 0;
            var_264 = 4628687107020711526;
            var_272 = 3;
            OP_PUSH5_C 4653015824886650634, 4624611349357941228, 4653218354928486973, 4655785670598878822, 4642861131316697498
            var_280 = 4655361039208231731;
            var_288 = 150;
            pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
            var_296 = 0;
            var_304 = 3;
            var_312 = 0;
            var_320 = 100;
            var_328 = -1;
            OP_PUSH2_C -1243018127888942703, -7268306149131292845
            var_336 = 56;
            pri = fun_1E48(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            var_344 = 1;
            var_352 = 8;
            pri = fun_2040(var_344)
            var_360 = 0;
            pri = fun_2100()
            var_368 = 1;
            var_376 = 3;
            var_384 = 0;
            var_392 = 4;
            var_400 = -7268306149131292845;
            var_408 = 40;
            pri = fun_6770(var_400, var_392, var_384, var_376, var_368)
            var_416 = -7268306149131292845;
            var_424 = 8;
            pri = fun_0B28(var_416)
            var_432 = 40;
            var_440 = 8;
            pri = fun_0060(var_432)
            var_448 = 2;
            var_456 = 6;
            var_464 = -7268306149131292845;
            var_472 = 24;
            pri = fun_1208(var_464, var_456, var_448)
            var_480 = 0;
            var_488 = 4628687107020711526;
            var_496 = 0;
            OP_PUSH5_C 4650741199211572756, 4636214451585396244, 4653672717113549128, 4655100410971983708, 4639249807365499781
            var_504 = 4654043956219551416;
            var_512 = 1;
            pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
            var_520 = 0;
            pri = fun_2790()
            var_528 = 0;
            var_536 = 4628687107020711526;
            var_544 = 3;
            OP_PUSH5_C 4650758351592966062, 4636214451585396244, 4653589374132163707, 4655108943182215250, 4639249807365499781
            var_552 = 4653960657218631107;
            var_560 = 100;
            pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
            var_568 = 0;
            var_576 = 0;
            var_584 = 0;
            var_592 = 0;
            OP_PUSH2_C -201298903742919217, -7268306149131292845
            var_600 = 48;
            pri = fun_08F8(var_592, var_584, var_576, var_568, var_560, var_552)
            var_608 = 0;
            var_616 = 3;
            var_624 = 0;
            var_632 = 100;
            var_640 = -1;
            OP_PUSH2_C -1244002190796002323, -7268306149131292845
            var_648 = 56;
            pri = fun_1E48(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
            var_656 = -7268306149131292845;
            var_664 = 8;
            pri = fun_0950(var_656)
            var_672 = 1;
            var_680 = 8;
            pri = fun_2040(var_672)
            var_688 = 0;
            pri = fun_2100()
            var_696 = 3;
            var_704 = -201298903742919217;
            var_712 = 16;
            pri = fun_1118(var_704, var_696)
            var_720 = 0;
            var_728 = 4628687107020711526;
            var_736 = 0;
            OP_PUSH5_C 4656733713504812401, 4636300301453292995, 4651754685049591562, 4653855763809341276, 4639286399112472166
            var_744 = 4654199339202788721;
            var_752 = 1;
            pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
            var_760 = 0;
            pri = fun_2790()
            var_768 = 0;
            var_776 = 4628687107020711526;
            var_784 = 3;
            OP_PUSH5_C 4656747391429461934, 4636300301453292995, 4651826021364001669, 4653883207619570565, 4639288158331076608
            var_792 = 4654235139301389107;
            var_800 = 50;
            pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
            var_808 = 1;
            var_816 = 1;
            var_824 = -1;
            var_832 = -1;
            var_840 = 0;
            var_848 = 9;
            var_856 = -201298903742919217;
            var_864 = 56;
            pri = fun_4438(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
            var_872 = 0;
            var_880 = 3;
            var_888 = 0;
            var_896 = 100;
            var_904 = -1;
            OP_PUSH2_C -8787377257222109918, -201298903742919217
            var_912 = 56;
            pri = fun_1E48(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
            var_920 = 1;
            var_928 = 8;
            pri = fun_2040(var_920)
            var_936 = 0;
            pri = fun_2100()
            var_944 = -7268306149131292845;
            var_952 = 8;
            pri = fun_1270(var_944)
            var_960 = -201298903742919217;
            var_968 = 8;
            pri = fun_1270(var_960)
            var_976 = 0;
            var_984 = 4628687107020711526;
            var_992 = 3;
            OP_PUSH5_C 4653015824886650634, 4624611349357941228, 4653218354928486973, 4655785670598878822, 4642861131316697498
            var_1000 = 4655361039208231731;
            var_1008 = 1;
            pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
            var_1016 = 0;
            pri = fun_2790()
            var_1024 = 1;
            var_1032 = 3;
            var_1040 = 0;
            var_1048 = 9;
            var_1056 = -201298903742919217;
            var_1064 = 40;
            pri = fun_6770(var_1056, var_1048, var_1040, var_1032, var_1024)
            var_1072 = 1;
            var_1080 = -1;
            var_1088 = -1;
            var_1096 = 3;
            var_1104 = 0;
            var_1112 = 0;
            var_1120 = -7268306149131292845;
            var_1128 = 56;
            pri = fun_2858(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
            var_1136 = 0;
            var_1144 = 3;
            var_1152 = 0;
            var_1160 = 100;
            var_1168 = -1;
            OP_PUSH2_C -1243019227400570914, -7268306149131292845
            var_1176 = 56;
            pri = fun_1E48(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
            var_1184 = -7268306149131292845;
            var_1192 = 8;
            pri = fun_0B28(var_1184)
            var_1200 = -201298903742919217;
            var_1208 = 8;
            pri = fun_0B28(var_1200)
            var_1216 = 1;
            var_1224 = 8;
            pri = fun_2040(var_1216)
            var_1232 = 0;
            pri = fun_2100()
            var_1240 = 0;
            var_1248 = 4628687107020711526;
            var_1256 = 0;
            OP_PUSH5_C 4655380170710555034, 4640350374524438446, 4654351687533933363, 4655466240480777339, 4640466834796052480
            var_1264 = 4654362682650211123;
            var_1272 = 1;
            pri = EvCameraMove(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
            var_1280 = 0;
            pri = fun_2790()
            var_1288 = 0;
            var_1296 = 4628687107020711526;
            var_1304 = 3;
            OP_PUSH5_C 4648400822741153874, 4644380216581632819, 4654181615075348972, 4648977142755968942, 4644369133504424837
            var_1312 = 4654181483133953638;
            var_1320 = 82;
            pri = EvCameraMove(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
            var_1328 = 1;
            var_1336 = 0;
            var_1344 = 120;
            pri = float(var_1344)
            var_1352 = pri;
            var_1360 = 0;
            var_1368 = 0;
            OP_PUSH4_C 4641135337865740288, 4654206332096741376, 4611686018427387904, -7268306149131292845
            var_1376 = 72;
            pri = fun_07C0(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
            var_1384 = 10;
            var_1392 = 8;
            pri = fun_0060(var_1384)
            var_1400 = 1;
            var_1408 = 0;
            var_1416 = 220;
            pri = float(var_1416)
            var_1424 = pri;
            var_1432 = 0;
            var_1440 = 0;
            OP_PUSH4_C 4644602757735094682, 4654212049557205811, 4611686018427387904, 8802641224559852288
            var_1448 = 72;
            pri = fun_07C0(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
            var_1456 = 1;
            var_1464 = 0;
            var_1472 = 50;
            pri = float(var_1472)
            var_1480 = pri;
            var_1488 = 0;
            var_1496 = 0;
            OP_PUSH4_C 4653287140375920640, 4653801711817719808, 4607182418800017408, -201298903742919217
            var_1504 = 72;
            pri = fun_07C0(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
            var_1512 = 1;
            var_1520 = 0;
            var_1528 = 50;
            pri = float(var_1528)
            var_1536 = pri;
            var_1544 = 0;
            var_1552 = 0;
            OP_PUSH4_C 4653221169678254080, 4654580166050185216, 4611686018427387904, -2669111732362968534
            var_1560 = 72;
            pri = fun_07C0(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
            var_1568 = 8802641224559852288;
            var_1576 = 8;
            pri = fun_0950(var_1568)
            var_1584 = -2669111732362968534;
            var_1592 = 8;
            pri = fun_0950(var_1584)
            var_1600 = -201298903742919217;
            var_1608 = 8;
            pri = fun_0950(var_1600)
            var_1616 = -7268306149131292845;
            var_1624 = 8;
            pri = fun_0950(var_1616)
            var_1632 = 1;
            var_1640 = 0;
            var_1648 = 34400;
            var_1656 = 8;
            var_1664 = 32;
            pri = fun_0308(var_1656, var_1648, var_1640, var_1632)
            var_1672 = 0;
            pri = fun_0378()
            var_1680 = 0;
            var_1688 = -1;
            var_1696 = -3178887637572346056;
            var_1704 = 24;
            pri = fun_25D0(var_1696, var_1688, var_1680)
            var_1712 = 0;
            pri = fun_2690()
            OP_JZER lab_B8E0
            var_1720 = -2669111732362968534;
            var_1728 = 8;
            pri = fun_0698(var_1720)
            var_1736 = -201298903742919217;
            var_1744 = 8;
            pri = fun_0698(var_1736)
            var_1752 = 0;
            pri = fun_2740()
// lab_B8E0
            var_8 = 1;
            var_16 = 8802641224559852288;
            var_24 = 16;
            pri = fun_0780(var_16, var_8)
            var_32 = 1;
            var_40 = -2669111732362968534;
            var_48 = 16;
            pri = fun_0780(var_40, var_32)
            var_56 = 1;
            var_64 = -201298903742919217;
            var_72 = 16;
            pri = fun_0780(var_64, var_56)
            var_80 = 1;
            var_88 = -7268306149131292845;
            var_96 = 16;
            pri = fun_0780(var_88, var_80)
            var_104 = 1;
            var_112 = 1;
            OP_PUSH4_C 4640537203540230144, 4654314963845565645, 4654212049557205811, 8802641224559852288
            var_120 = 48;
            pri = fun_06F0(var_112, var_104, var_96, var_88, var_80, var_72)
            var_128 = 1;
            var_136 = 1;
            OP_PUSH4_C 4640537203540230144, 4654540583631585280, 4654580166050185216, -2669111732362968534
            var_144 = 48;
            pri = fun_06F0(var_136, var_128, var_120, var_112, var_104, var_96)
            var_152 = 1;
            var_160 = 1;
            OP_PUSH4_C 4640537203540230144, 4654505399259496448, 4653801711817719808, -201298903742919217
            var_168 = 48;
            pri = fun_06F0(var_160, var_152, var_144, var_136, var_128, var_120)
            var_176 = 1;
            var_184 = 1;
            var_192 = 0;
            OP_PUSH3_C 4653379499352653824, 4654206332096741376, -7268306149131292845
            var_200 = 48;
            pri = fun_06F0(var_192, var_184, var_176, var_168, var_160, var_152)
            var_208 = 0;
            var_216 = 0;
            var_224 = 0;
            var_232 = 0;
            OP_PUSH2_C -7268306149131292845, 8802641224559852288
            var_240 = 48;
            pri = fun_08F8(var_232, var_224, var_216, var_208, var_200, var_192)
            var_248 = 0;
            var_256 = 0;
            var_264 = 0;
            var_272 = 0;
            OP_PUSH2_C -7268306149131292845, -2669111732362968534
            var_280 = 48;
            pri = fun_08F8(var_272, var_264, var_256, var_248, var_240, var_232)
            var_288 = 0;
            var_296 = 0;
            var_304 = 0;
            var_312 = 0;
            OP_PUSH2_C -7268306149131292845, -201298903742919217
            var_320 = 48;
            pri = fun_08F8(var_312, var_304, var_296, var_288, var_280, var_272)
            var_328 = 8802641224559852288;
            var_336 = 8;
            pri = fun_0950(var_328)
            var_344 = -2669111732362968534;
            var_352 = 8;
            pri = fun_0950(var_344)
            var_360 = -201298903742919217;
            var_368 = 8;
            pri = fun_0950(var_360)
            var_376 = 0;
            var_384 = 4628687107020711526;
            var_392 = 0;
            OP_PUSH5_C 4653264314514528010, 4647984591619342991, 4653848111208411955, 4656399066145782497, 4644351893162101309
            var_400 = 4655434970370083389;
            var_408 = 1;
            pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_416 = 0;
            pri = fun_2790()
            var_424 = 0;
            var_432 = 4628687107020711526;
            var_440 = 3;
            OP_PUSH5_C 4653189679665234575, 4629831302801040343, 4653323776103358136, 4655920074900258161, 4642324921486063698
            var_448 = 4655578478627740713;
            var_456 = 130;
            pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
            var_464 = 1;
            var_472 = 1;
            var_480 = -1;
            var_488 = -1;
            var_496 = 0;
            var_504 = 4;
            var_512 = -7268306149131292845;
            var_520 = 56;
            pri = fun_4438(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
            var_528 = 34448;
            var_536 = 8;
            var_544 = 16;
            pri = fun_02A8(var_536, var_528)
            var_552 = 0;
            pri = fun_0378()
            var_560 = 5;
            var_568 = 5;
            var_576 = -7268306149131292845;
            var_584 = 24;
            pri = fun_1208(var_576, var_568, var_560)
            var_592 = 75;
            var_600 = 8;
            pri = fun_0060(var_592)
            var_608 = 1;
            var_616 = 3;
            var_624 = 0;
            var_632 = 4;
            var_640 = -7268306149131292845;
            var_648 = 40;
            pri = fun_6770(var_640, var_632, var_624, var_616, var_608)
            var_656 = 0;
            var_664 = 3;
            var_672 = 0;
            var_680 = 100;
            var_688 = -1;
            OP_PUSH2_C -1243021426423827336, -7268306149131292845
            var_696 = 56;
            pri = fun_1E48(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
            var_704 = -7268306149131292845;
            var_712 = 8;
            pri = fun_0B28(var_704)
            var_720 = 1;
            var_728 = 8;
            pri = fun_2040(var_720)
            var_736 = 0;
            pri = fun_2100()
            var_744 = -7268306149131292845;
            var_752 = 8;
            pri = fun_1158(var_744)
            var_760 = 0;
            var_768 = 4628687107020711526;
            var_776 = 0;
            OP_PUSH5_C 4655584020166344704, -4589015320115669893, 4653285601059641754, 4652660506709018542, 4643328379778037187
            var_784 = 4654915780979447562;
            var_792 = 1;
            pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
            var_800 = 0;
            pri = fun_2790()
            var_808 = 2;
            var_816 = 2;
            var_824 = -2669111732362968534;
            var_832 = 24;
            pri = fun_1208(var_824, var_816, var_808)
            var_840 = 2;
            var_848 = 2;
            var_856 = -201298903742919217;
            var_864 = 24;
            pri = fun_1208(var_856, var_848, var_840)
            var_872 = 1;
            var_880 = 1;
            var_888 = -1;
            var_896 = -1;
            var_904 = 0;
            var_912 = 6;
            var_920 = -7268306149131292845;
            var_928 = 56;
            pri = fun_4438(var_920, var_912, var_904, var_896, var_888, var_880, var_872)
            var_936 = 0;
            var_944 = 3;
            var_952 = -2669111732362968534;
            var_960 = 24;
            pri = fun_84A0(var_952, var_944, var_936)
            var_968 = 1;
            var_976 = 1;
            var_984 = -1;
            var_992 = -1;
            var_1000 = 0;
            var_1008 = 7;
            var_1016 = -201298903742919217;
            var_1024 = 56;
            pri = fun_4438(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
            var_1032 = -2669111732362968534;
            var_1040 = 8;
            pri = fun_0B28(var_1032)
            var_1048 = 15;
            var_1056 = 8;
            pri = fun_0060(var_1048)
            var_1064 = 34496;
            pri = SoundPostEvent(var_1064)
            var_1072 = 1;
            var_1080 = 3;
            var_1088 = 0;
            var_1096 = 6;
            var_1104 = -7268306149131292845;
            var_1112 = 40;
            pri = fun_6770(var_1104, var_1096, var_1088, var_1080, var_1072)
            var_1120 = 15;
            var_1128 = 8;
            pri = fun_0060(var_1120)
            var_1136 = 0;
            var_1144 = 0;
            var_1152 = -2669111732362968534;
            var_1160 = 24;
            pri = fun_84A0(var_1152, var_1144, var_1136)
            var_1168 = 1;
            var_1176 = 3;
            var_1184 = 0;
            var_1192 = 7;
            var_1200 = -201298903742919217;
            var_1208 = 40;
            pri = fun_6770(var_1200, var_1192, var_1184, var_1176, var_1168)
            var_1216 = -201298903742919217;
            var_1224 = 8;
            pri = fun_1270(var_1216)
            var_1232 = -2669111732362968534;
            var_1240 = 8;
            pri = fun_1270(var_1232)
            var_1248 = -7268306149131292845;
            var_1256 = 8;
            pri = fun_0B28(var_1248)
            var_1264 = -2669111732362968534;
            var_1272 = 8;
            pri = fun_0B28(var_1264)
            var_1280 = -201298903742919217;
            var_1288 = 8;
            pri = fun_0B28(var_1280)
            var_1296 = 2;
            var_1304 = -7268306149131292845;
            var_1312 = 16;
            pri = fun_1118(var_1304, var_1296)
            var_1320 = 0;
            var_1328 = 4628687107020711526;
            var_1336 = 3;
            OP_PUSH5_C 4653189679665234575, 4629831302801040343, 4653323776103358136, 4655920074900258161, 4642324921486063698
            var_1344 = 4655578478627740713;
            var_1352 = 1;
            pri = EvCameraMove(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
            var_1360 = 0;
            pri = fun_2790()
            var_1368 = -7268306149131292845;
            var_1376 = 8;
            pri = fun_11D0(var_1368)
            var_1384 = 1;
            var_1392 = -1;
            var_1400 = -1;
            var_1408 = 3;
            var_1416 = 0;
            var_1424 = 0;
            var_1432 = -7268306149131292845;
            var_1440 = 56;
            pri = fun_2858(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
            var_1448 = 0;
            var_1456 = 3;
            var_1464 = 0;
            var_1472 = 100;
            var_1480 = -1;
            OP_PUSH2_C -1243022525935455547, -7268306149131292845
            var_1488 = 56;
            pri = fun_1E48(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
            var_1496 = -7268306149131292845;
            var_1504 = 8;
            pri = fun_0B28(var_1496)
            var_1512 = 1;
            var_1520 = 8;
            pri = fun_2040(var_1512)
            var_1528 = 0;
            pri = fun_2100()
            var_1536 = -7268306149131292845;
            var_1544 = 8;
            pri = fun_1158(var_1536)
            var_1552 = 0;
            var_1560 = 4628968581997422182;
            var_1568 = 0;
            OP_PUSH5_C 4648541824112299868, 4638424733840016671, 4654129190360936612, 4654020602592577454, 4640045677862149161
            var_1576 = 4654223220595344015;
            var_1584 = 1;
            pri = EvCameraMove(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
            var_1592 = 0;
            pri = fun_2790()
            var_1600 = 0;
            var_1608 = 4628968581997422182;
            var_1616 = 3;
            OP_PUSH5_C 4648540064893695427, 4638697060879984230, 4654129146380471501, 4653931586131192709, 4640145953322602332
            var_1624 = 4654220933611158241;
            var_1632 = 100;
            pri = EvCameraMove(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
            var_1640 = 0;
            var_1648 = 3;
            var_1656 = 0;
            var_1664 = 100;
            var_1672 = -1;
            OP_PUSH2_C -1243023625447083758, -7268306149131292845
            var_1680 = 56;
            pri = fun_1E48(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
            var_1688 = 1;
            var_1696 = 8;
            pri = fun_2040(var_1688)
            var_1704 = 0;
            pri = fun_2100()
            var_1712 = 5;
            var_1720 = -7268306149131292845;
            var_1728 = 16;
            pri = fun_1118(var_1720, var_1712)
            var_1736 = 0;
            var_1744 = 4628968581997422182;
            var_1752 = 0;
            OP_PUSH5_C 4650517162722297119, 4638409252716297585, 4653056858660599235, 4654734889326445855, 4638454288712571290
            var_1760 = 4654456492982292972;
            var_1768 = 1;
            pri = EvCameraMove(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
            var_1776 = 0;
            pri = fun_2790()
            var_1784 = 1;
            var_1792 = 23;
            OP_PUSH2_C -6159769295581934535, -7268306149131292845
            var_1800 = 32;
            pri = fun_8A90(var_1792, var_1784, var_1776, var_1768)
            var_1808 = 2;
            var_1816 = -7268306149131292845;
            var_1824 = 16;
            pri = fun_1118(var_1816, var_1808)
            var_1832 = 0;
            var_1840 = 4628968581997422182;
            var_1848 = 0;
            OP_PUSH5_C 4653090811579664957, -4592172765666921677, 4653112010163848479, 4655498961946819953, 4643971022334239703
            var_1856 = 4655400357744041001;
            var_1864 = 1;
            pri = EvCameraMove(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
            var_1872 = 0;
            pri = fun_2790()
            var_1880 = 1;
            var_1888 = -1;
            var_1896 = -1;
            var_1904 = 3;
            var_1912 = 0;
            var_1920 = 0;
            var_1928 = -7268306149131292845;
            var_1936 = 56;
            pri = fun_2858(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
            var_1944 = 0;
            var_1952 = 3;
            var_1960 = 0;
            var_1968 = 100;
            var_1976 = -1;
            OP_PUSH2_C -1244005489330886956, -7268306149131292845
            var_1984 = 56;
            pri = fun_1E48(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
            var_1992 = -7268306149131292845;
            var_2000 = 8;
            pri = fun_0B28(var_1992)
            var_2008 = 1;
            var_2016 = 8;
            pri = fun_2040(var_2008)
            var_2024 = 0;
            pri = fun_2100()
            var_2032 = 2;
            var_2040 = 6;
            var_2048 = -7268306149131292845;
            var_2056 = 24;
            pri = fun_1208(var_2048, var_2040, var_2032)
            var_2064 = 0;
            var_2072 = 0;
            var_2080 = 0;
            var_2088 = 0;
            OP_PUSH2_C -201298903742919217, -7268306149131292845
            var_2096 = 48;
            pri = fun_08F8(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048)
            var_2104 = 0;
            var_2112 = 3;
            var_2120 = 0;
            var_2128 = 100;
            var_2136 = -1;
            OP_PUSH2_C -1244008787865771589, -7268306149131292845
            var_2144 = 56;
            pri = fun_1E48(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
            var_2152 = -7268306149131292845;
            var_2160 = 8;
            pri = fun_0950(var_2152)
            var_2168 = 1;
            var_2176 = 8;
            pri = fun_2040(var_2168)
            var_2184 = 0;
            pri = fun_2100()
            var_2192 = 7;
            var_2200 = 8;
            var_2208 = -201298903742919217;
            var_2216 = 24;
            pri = fun_1208(var_2208, var_2200, var_2192)
            var_2224 = 0;
            var_2232 = 4628968581997422182;
            var_2240 = 0;
            OP_PUSH5_C 4656584267884365087, -4587257508886111846, 4652311697640222884, 4653688198237268214, 4640943231194135265
            var_2248 = 4654145551093957919;
            var_2256 = 1;
            pri = EvCameraMove(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184)
            var_2264 = 0;
            pri = fun_2790()
            var_2272 = 0;
            var_2280 = 4628968581997422182;
            var_2288 = 3;
            OP_PUSH5_C 4656614394502966149, -4587257508886111846, 4652359240523007918, 4653718940582380831, 4640953786505761915
            var_2296 = 4654193181937673175;
            var_2304 = 55;
            pri = EvCameraMove(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
            var_2312 = 1;
            var_2320 = 1;
            var_2328 = -1;
            var_2336 = -1;
            var_2344 = 0;
            var_2352 = 9;
            var_2360 = -201298903742919217;
            var_2368 = 56;
            pri = fun_4438(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
            var_2376 = 75;
            var_2384 = 8;
            pri = fun_0060(var_2376)
            var_2392 = -7268306149131292845;
            var_2400 = 8;
            pri = fun_1270(var_2392)
            var_2408 = -201298903742919217;
            var_2416 = 8;
            pri = fun_1270(var_2408)
            var_2424 = 0;
            var_2432 = 4628968581997422182;
            var_2440 = 0;
            OP_PUSH5_C 4653090811579664957, -4592172765666921677, 4653112010163848479, 4655498961946819953, 4643971022334239703
            var_2448 = 4655400357744041001;
            var_2456 = 1;
            pri = EvCameraMove(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
            var_2464 = 0;
            pri = fun_2790()
            var_2472 = 0;
            var_2480 = 0;
            var_2488 = 0;
            var_2496 = 0;
            OP_PUSH2_C 8802641224559852288, -7268306149131292845
            var_2504 = 48;
            pri = fun_08F8(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
            var_2512 = 1;
            var_2520 = 3;
            var_2528 = 0;
            var_2536 = 9;
            var_2544 = -201298903742919217;
            var_2552 = 40;
            pri = fun_6770(var_2544, var_2536, var_2528, var_2520, var_2512)
            var_2560 = 0;
            var_2568 = 3;
            var_2576 = 0;
            var_2584 = 100;
            var_2592 = -1;
            OP_PUSH2_C -1244004389819258745, -7268306149131292845
            var_2600 = 56;
            pri = fun_1E48(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
            var_2608 = -201298903742919217;
            var_2616 = 8;
            pri = fun_0B28(var_2608)
            var_2624 = -7268306149131292845;
            var_2632 = 8;
            pri = fun_0950(var_2624)
            var_2640 = 1;
            var_2648 = 8;
            pri = fun_2040(var_2640)
            var_2656 = 0;
            pri = fun_2100()
            var_2664 = 1;
            var_2672 = 0;
            var_2680 = 4641240890982006784;
            var_2688 = 0;
            var_2696 = 0;
            OP_PUSH4_C 4654536185585074176, 4655343227119861760, 4607182418800017408, -7268306149131292845
            var_2704 = 72;
            pri = fun_07C0(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
            var_2712 = 75;
            var_2720 = 8;
            pri = fun_0060(var_2712)
            var_2728 = 0;
            var_2736 = -7268306149131292845;
            var_2744 = 16;
            pri = fun_0748(var_2736, var_2728)
            var_2752 = 0;
            var_2760 = 8802641224559852288;
            var_2768 = 16;
            pri = fun_0780(var_2760, var_2752)
            var_2776 = 0;
            var_2784 = -2669111732362968534;
            var_2792 = 16;
            pri = fun_0780(var_2784, var_2776)
            var_2800 = 0;
            var_2808 = -201298903742919217;
            var_2816 = 16;
            pri = fun_0780(var_2808, var_2800)
            var_2824 = 0;
            var_2832 = -7268306149131292845;
            var_2840 = 16;
            pri = fun_0780(var_2832, var_2824)
            var_2848 = 1;
            var_2856 = 0;
            var_2864 = 34400;
            var_2872 = 8;
            var_2880 = 32;
            pri = fun_0308(var_2872, var_2864, var_2856, var_2848)
            var_2888 = 0;
            pri = fun_0378()
            var_2896 = 3;
            var_2904 = 0;
            pri = EvCameraEnd(var_2904, var_2896)
            var_2912 = -7268306149131292845;
            var_2920 = 8;
            pri = fun_0950(var_2912)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_A930_case_0x0
            OP_JUMP switch_A930_case_default
        }
        case 0x1:
        {
// switch_A930_case_0x1
            OP_JUMP switch_A930_case_default
        }
    }
}
// fun_D1D0
fun_D1D0() {
    pri = 0;
    return pri;
}
// fun_D1E8
fun_D1E8() {
    var_8 = -7268306149131292845;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = -4318590674611970841;
    var_32 = 8;
    pri = fun_0518(var_24)
    var_40 = 2783038146703910472;
    var_48 = 8;
    pri = fun_0518(var_40)
    var_56 = -4661849163373684695;
    var_64 = 8;
    pri = fun_0518(var_56)
    var_72 = -4775404322951928595;
    var_80 = 8;
    pri = fun_0518(var_72)
    var_88 = -8764591052235238938;
    var_96 = 8;
    pri = fun_0518(var_88)
    var_104 = 7154490619122646225;
    var_112 = 8;
    pri = fun_0518(var_104)
    var_120 = 1483708011585131345;
    var_128 = 8;
    pri = fun_0518(var_120)
    var_136 = -122636264001050026;
    var_144 = 8;
    pri = fun_0518(var_136)
    var_152 = 2375970181849788458;
    var_160 = 8;
    pri = fun_0518(var_152)
    var_168 = -122628567419652549;
    var_176 = 8;
    pri = fun_0518(var_168)
    var_184 = -1748623951613131052;
    var_192 = 8;
    pri = fun_0518(var_184)
    var_200 = 7356533311563781232;
    var_208 = 8;
    pri = fun_0518(var_200)
    var_216 = 100;
    var_224 = -5941009907650657751;
    pri = WorkSet(var_224, var_216)
    var_240 = -4109595392289114602;
    pri = WorkGet(var_240)
    OP_ADD_P_C 1
    var_8 = pri;
    var_248 = var_8;
    var_256 = -4109595392289114602;
    pri = WorkSet(var_256, var_248)
    var_264 = -968531386565696754;
    pri = FlagReset(var_264)
    var_272 = 3614866966175759787;
    pri = FlagSet(var_272)
    pri = 0;
    return pri;
}
// fun_D500
fun_D500() {
    var_8 = 0;
    pri = fun_0548()
    var_16 = 10;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 34448;
    var_40 = 8;
    var_48 = 16;
    pri = fun_02A8(var_40, var_32)
    var_56 = 0;
    pri = fun_0378()
    var_64 = 3221248130153244534;
    pri = ReserveScript(var_64)
    pri = 0;
    return pri;
}
// fun_D5B8
fun_D5B8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9748()
    var_16 = 0;
    pri = fun_97B0()
    var_24 = 0;
    pri = fun_9840()
    var_32 = 0;
    pri = fun_9870()
    var_40 = 0;
    pri = fun_D1D0()
    var_48 = 0;
    pri = fun_D1E8()
    var_56 = 0;
    pri = fun_D500()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_D6A8
fun_D6A8() {
    var_8 = 0;
    pri = fun_97B0()
    var_16 = 0;
    pri = fun_D1E8()
    var_24 = 23;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
