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
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0478
// lab_0478
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04B8
    OP_JUMP lab_0528
// lab_04B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04F8
    OP_JUMP lab_0528
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
// lab_0528
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_05E0
    OP_JUMP lab_0610
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0640
// lab_0640
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0680
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07A8
fun_07A8() {
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
    pri = fun_14D0(var_8)
    OP_JZER lab_0940
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1500(var_24)
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
    pri = fun_14D0(var_8)
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
    pri = fun_0CA0(var_8)
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
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CD8
fun_0CD8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D28
    pri = 0;
    return pri;
// lab_0D28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14D0(var_8)
    OP_JZER lab_0E58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D80
    OP_ZERO_P_S 64
// lab_0E58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E90
    OP_CONST_S 64, 1
// lab_0E90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC8
    OP_CONST_S 72, 1
// lab_0EC8
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
// lab_0D80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA8
    OP_ZERO_P_S 72
// lab_0DA8
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
    OP_JUMP lab_0F68
// lab_0F68
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1078(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_10F0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1130(var_24)
    pri = 0;
    return pri;
}
// fun_1228
fun_1228() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_14D0(var_8)
    OP_JZER lab_12C8
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
// lab_12C8
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
// fun_1330
fun_1330() {
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
    pri = fun_1228(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_14D0
fun_14D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1530
fun_1530() {
    OP_JUMP lab_1548
// lab_1548
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_15D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_15C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_15D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1668
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1658
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_1668
    pri = 0;
    return pri;
// lab_1658
    OP_JUMP lab_1678
// lab_1678
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1548
    pri = 0;
    return pri;
// lab_15C8
    OP_JUMP lab_1678
}
// fun_16B8
fun_16B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1530(var_40)
    pri = 0;
    return pri;
}
// fun_1740
fun_1740() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_17A0
fun_17A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_17D8
fun_17D8() {
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
// switch_1DF0
        case default:
        {
// switch_1DF0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E38
// lab_1E38
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
            OP_JNZ lab_1EE0
            var_88 = 0;
            pri = fun_21B0()
// lab_1EE0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1DF0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_19D8
                case default:
                {
// switch_19D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A50
// lab_1A50
                    OP_JUMP lab_1E38
                }
                case 0x0:
                {
// switch_19D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A50
                }
                case 0x1:
                {
// switch_19D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A50
                }
                case 0x2:
                {
// switch_19D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A50
                }
                case 0x3:
                {
// switch_19D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A50
                }
                case 0x4:
                {
// switch_19D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A50
                }
                case 0x5:
                {
// switch_19D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A50
                }
            }
        }
        case 0x65:
        {
// switch_1DF0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B90
                case default:
                {
// switch_1B90_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C08
// lab_1C08
                    OP_JUMP lab_1E38
                }
                case 0x0:
                {
// switch_1B90_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C08
                }
                case 0x1:
                {
// switch_1B90_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C08
                }
                case 0x2:
                {
// switch_1B90_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C08
                }
                case 0x3:
                {
// switch_1B90_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C08
                }
                case 0x4:
                {
// switch_1B90_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C08
                }
                case 0x5:
                {
// switch_1B90_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C08
                }
            }
        }
        case 0x66:
        {
// switch_1DF0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D48
                case default:
                {
// switch_1D48_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DC0
// lab_1DC0
                    OP_JUMP lab_1E38
                }
                case 0x0:
                {
// switch_1D48_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DC0
                }
                case 0x1:
                {
// switch_1D48_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DC0
                }
                case 0x2:
                {
// switch_1D48_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DC0
                }
                case 0x3:
                {
// switch_1D48_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DC0
                }
                case 0x4:
                {
// switch_1D48_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DC0
                }
                case 0x5:
                {
// switch_1D48_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DC0
                }
            }
        }
    }
}
// fun_1EF8
fun_1EF8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_17D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F60
fun_1F60() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A68(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2008
    pri = 1;
    return pri;
// lab_2008
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2050
fun_2050() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_20A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F60(var_8)
    arg_2 = pri;
// lab_20A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_17D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2100
fun_2100() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1EF8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2100(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21B0
fun_21B0() {
    OP_JUMP lab_21C8
// lab_21C8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2208
    pri = 0;
    return pri;
// lab_2208
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21C8
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    var_8 = 0;
    pri = fun_21B0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_22F8
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_22F8
    pri = 0;
    return pri;
}
// fun_2308
fun_2308() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2338
fun_2338() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_23B0()
    return pri;
}
// fun_23B0
fun_23B0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_23F0
fun_23F0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2428
fun_2428() {
    OP_JUMP lab_2440
// lab_2440
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2488
    OP_JUMP lab_24B8
    OP_JUMP lab_24A8
// lab_2488
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_24B8
    pri = 0;
    return pri;
// lab_24A8
    OP_JUMP lab_2440
}
// fun_24C8
fun_24C8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_24F8
fun_24F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2598
fun_2598() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25E8
fun_25E8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2638
fun_2638() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
    pri = arg_1;
    OP_JNZ lab_26D0
    var_8 = 3408;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_26D0
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
// fun_2728
fun_2728() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_27A0
fun_27A0() {
    var_8 = 0;
    pri = fun_2728()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2820
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2820
    pri = 1;
    return pri;
// lab_2820
    var_8 = 0;
    pri = fun_2728()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2860
    pri = 1;
    return pri;
// lab_2860
    var_8 = 0;
    pri = fun_2728()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2890
fun_2890() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_28E0
fun_28E0() {
    OP_JUMP lab_28F8
// lab_28F8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2930
    pri = 0;
    return pri;
// lab_2930
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_28F8
    pri = 0;
    return pri;
}
// fun_2970
fun_2970() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_29A8
fun_29A8() {
    pri = arg_6;
    OP_JNZ lab_29E0
    var_8 = 0;
    pri = fun_0F78()
// lab_29E0
    pri = arg_1;
    switch (pri) {
// switch_3F48
        case default:
        {
// switch_3F48_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4298
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4298
            pri = 1;
            OP_JUMP lab_42A0
// lab_4298
            pri = 0;
// lab_42A0
            OP_JZER lab_43F8
            var_16 = 11088;
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
            var_64 = 11192;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4458
// lab_43F8
            var_8 = 64;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_4458
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_44B8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4518
// lab_44B8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4518
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4518
            pri = arg_2;
            OP_JZER lab_4558
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4558
            var_8 = 0;
            pri = fun_0FB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F48_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1:
        {
// switch_3F48_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x2:
        {
// switch_3F48_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x3:
        {
// switch_3F48_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x4:
        {
// switch_3F48_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x5:
        {
// switch_3F48_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8376;
            var_72 = 8368;
            var_80 = 8360;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x6:
        {
// switch_3F48_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8400;
            var_72 = 8392;
            var_80 = 8384;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x7:
        {
// switch_3F48_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8424;
            var_72 = 8416;
            var_80 = 8408;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x8:
        {
// switch_3F48_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x9:
        {
// switch_3F48_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8448;
            var_72 = 8440;
            var_80 = 8432;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xa:
        {
// switch_3F48_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8472;
            var_72 = 8464;
            var_80 = 8456;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xb:
        {
// switch_3F48_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8496;
            var_72 = 8488;
            var_80 = 8480;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xc:
        {
// switch_3F48_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8520;
            var_72 = 8512;
            var_80 = 8504;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xd:
        {
// switch_3F48_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8544;
            var_72 = 8536;
            var_80 = 8528;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xe:
        {
// switch_3F48_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8568;
            var_72 = 8560;
            var_80 = 8552;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xf:
        {
// switch_3F48_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x10:
        {
// switch_3F48_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x11:
        {
// switch_3F48_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8592;
            var_72 = 8584;
            var_80 = 8576;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x12:
        {
// switch_3F48_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8616;
            var_72 = 8608;
            var_80 = 8600;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x13:
        {
// switch_3F48_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x14:
        {
// switch_3F48_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x15:
        {
// switch_3F48_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x16:
        {
// switch_3F48_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x17:
        {
// switch_3F48_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x18:
        {
// switch_3F48_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x19:
        {
// switch_3F48_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8640;
            var_72 = 8632;
            var_80 = 8624;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1a:
        {
// switch_3F48_case_0x1a
            var_8 = 1;
            var_16 = 8648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 8784;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8864;
            var_88 = 8856;
            var_96 = 8848;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1b:
        {
// switch_3F48_case_0x1b
            var_8 = 3;
            var_16 = 8872;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 9008;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9088;
            var_88 = 9080;
            var_96 = 9072;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1c:
        {
// switch_3F48_case_0x1c
            var_8 = 2;
            var_16 = 9096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = 9232;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9312;
            var_88 = 9304;
            var_96 = 9296;
            alt = 3416;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1d:
        {
// switch_3F48_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1e:
        {
// switch_3F48_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9456;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1f:
        {
// switch_3F48_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9592;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x20:
        {
// switch_3F48_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9728;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x21:
        {
// switch_3F48_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9848;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x22:
        {
// switch_3F48_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9968;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x23:
        {
// switch_3F48_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10104;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x24:
        {
// switch_3F48_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10240;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x25:
        {
// switch_3F48_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10376;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x26:
        {
// switch_3F48_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10512;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x27:
        {
// switch_3F48_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x28:
        {
// switch_3F48_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x29:
        {
// switch_3F48_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10944;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
    }
}
// fun_4588
fun_4588() {
    pri = arg_5;
    OP_JNZ lab_45C0
    var_8 = 0;
    pri = fun_0F78()
// lab_45C0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4610
    OP_CONST_S -8, -1
// lab_4610
    pri = arg_1;
    switch (pri) {
// switch_60C8
        case default:
        {
// switch_60C8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6570
            var_520 = 30952;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A68(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6570
            pri = 1;
            OP_JUMP lab_6578
// lab_6570
            pri = 0;
// lab_6578
            OP_JZER lab_65C8
            var_8 = 64;
            var_16 = 31048;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6820
// lab_65C8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6630
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6630
            pri = 1;
            OP_JUMP lab_6638
// lab_6630
            pri = 0;
// lab_6638
            OP_JZER lab_67C0
            var_16 = 31224;
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
            var_176 = 31328;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31344;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6820
// lab_67C0
            var_8 = 64;
            alt = 11208;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_6820
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6890
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6890
            var_8 = 0;
            pri = fun_0FB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_60C8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1:
        {
// switch_60C8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2:
        {
// switch_60C8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x3:
        {
// switch_60C8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x4:
        {
// switch_60C8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x5:
        {
// switch_60C8_case_0x5
            var_8 = 2;
            var_16 = 21208;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CA0(var_40)
            OP_JUMP switch_60C8_case_default
        }
        case 0x6:
        {
// switch_60C8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x7:
        {
// switch_60C8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x8:
        {
// switch_60C8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x9:
        {
// switch_60C8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0xa:
        {
// switch_60C8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0xb:
        {
// switch_60C8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0xc:
        {
// switch_60C8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0xd:
        {
// switch_60C8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21856;
            var_72 = 21680;
            var_80 = 21496;
            var_88 = 21304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0xe:
        {
// switch_60C8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22512;
            var_72 = 22304;
            var_80 = 22088;
            var_88 = 21864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0xf:
        {
// switch_60C8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22904;
            var_72 = 22784;
            var_80 = 22656;
            var_88 = 22520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x10:
        {
// switch_60C8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23248;
            var_72 = 23144;
            var_80 = 23032;
            var_88 = 22912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x11:
        {
// switch_60C8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23592;
            var_72 = 23488;
            var_80 = 23376;
            var_88 = 23256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x12:
        {
// switch_60C8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x13:
        {
// switch_60C8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x14:
        {
// switch_60C8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24152;
            var_72 = 23976;
            var_80 = 23792;
            var_88 = 23600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x15:
        {
// switch_60C8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x16:
        {
// switch_60C8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x17:
        {
// switch_60C8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x18:
        {
// switch_60C8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x19:
        {
// switch_60C8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1a:
        {
// switch_60C8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1b:
        {
// switch_60C8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1c:
        {
// switch_60C8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24544;
            var_72 = 24424;
            var_80 = 24296;
            var_88 = 24160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1d:
        {
// switch_60C8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1e:
        {
// switch_60C8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25008;
            var_72 = 24864;
            var_80 = 24712;
            var_88 = 24552;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x1f:
        {
// switch_60C8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x20:
        {
// switch_60C8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x21:
        {
// switch_60C8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x22:
        {
// switch_60C8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x23:
        {
// switch_60C8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x24:
        {
// switch_60C8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25264;
            var_80 = 25144;
            var_88 = 25016;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x25:
        {
// switch_60C8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25744;
            var_72 = 25632;
            var_80 = 25512;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x26:
        {
// switch_60C8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x27:
        {
// switch_60C8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x28:
        {
// switch_60C8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x29:
        {
// switch_60C8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26184;
            var_72 = 26048;
            var_80 = 25904;
            var_88 = 25752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2a:
        {
// switch_60C8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26456;
            var_80 = 26328;
            var_88 = 26192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2b:
        {
// switch_60C8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26992;
            var_72 = 26864;
            var_80 = 26728;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2c:
        {
// switch_60C8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27296;
            var_80 = 27152;
            var_88 = 27000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2d:
        {
// switch_60C8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2e:
        {
// switch_60C8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27656;
            var_80 = 27552;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x2f:
        {
// switch_60C8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28144;
            var_72 = 28024;
            var_80 = 27896;
            var_88 = 27760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x30:
        {
// switch_60C8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28536;
            var_72 = 28416;
            var_80 = 28288;
            var_88 = 28152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x31:
        {
// switch_60C8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x32:
        {
// switch_60C8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x33:
        {
// switch_60C8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28928;
            var_72 = 28808;
            var_80 = 28680;
            var_88 = 28544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x34:
        {
// switch_60C8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29296;
            var_72 = 29184;
            var_80 = 29064;
            var_88 = 28936;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x35:
        {
// switch_60C8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29784;
            var_72 = 29632;
            var_80 = 29472;
            var_88 = 29304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x36:
        {
// switch_60C8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30152;
            var_72 = 30040;
            var_80 = 29920;
            var_88 = 29792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x37:
        {
// switch_60C8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x38:
        {
// switch_60C8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30520;
            var_72 = 30408;
            var_80 = 30288;
            var_88 = 30160;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60C8_case_default
        }
        case 0x39:
        {
// switch_60C8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x3a:
        {
// switch_60C8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x3b:
        {
// switch_60C8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x3c:
        {
// switch_60C8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x3d:
        {
// switch_60C8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
        case 0x3e:
        {
// switch_60C8_case_0x3e
            var_8 = 4;
            var_16 = 30848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            OP_JUMP switch_60C8_case_default
        }
    }
}
// fun_68C0
fun_68C0() {
    pri = arg_4;
    OP_JNZ lab_68F8
    var_8 = 0;
    pri = fun_0F78()
// lab_68F8
    pri = arg_1;
    switch (pri) {
// switch_7CD0
        case default:
        {
// switch_7CD0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31920;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_14D0(var_264)
            OP_JZER lab_8298
            pri = arg_3;
            switch (pri) {
// switch_8240
                case default:
                {
// switch_8240_case_default
                    OP_JUMP lab_8550
// lab_8550
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_85C0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_85C0
                    var_8 = 0;
                    pri = fun_0FB8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8240_case_0x1
                    var_8 = 32;
                    var_16 = 32072;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8240_case_default
                }
                case 0x2:
                {
// switch_8240_case_0x2
                    var_8 = 32;
                    var_16 = 32176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8240_case_default
                }
                case 0x3:
                {
// switch_8240_case_0x3
                    var_8 = 32;
                    var_16 = 31976;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8240_case_default
                }
            }
// lab_8298
            pri = arg_1;
            OP_JZER lab_82E8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_82E8
            pri = 0;
            OP_JUMP lab_82F0
// lab_82E8
            pri = 1;
// lab_82F0
            OP_JZER lab_8358
            var_8 = 32272;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A68(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8358
            pri = 1;
            OP_JUMP lab_8360
// lab_8358
            pri = 0;
// lab_8360
            OP_JZER lab_83B0
            var_8 = 32;
            var_16 = 32368;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8550
// lab_83B0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8418
            var_8 = 32;
            var_16 = 32528;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8550
// lab_8418
            var_16 = 32648;
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
            var_176 = 32752;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32768;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7CD0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1:
        {
// switch_7CD0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2:
        {
// switch_7CD0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x3:
        {
// switch_7CD0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x4:
        {
// switch_7CD0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x5:
        {
// switch_7CD0_case_0x5
            var_8 = 1;
            var_16 = 31400;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CA0(var_40)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x6:
        {
// switch_7CD0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x7:
        {
// switch_7CD0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x8:
        {
// switch_7CD0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x9:
        {
// switch_7CD0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0xa:
        {
// switch_7CD0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0xb:
        {
// switch_7CD0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0xc:
        {
// switch_7CD0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0xd:
        {
// switch_7CD0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0xe:
        {
// switch_7CD0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0xf:
        {
// switch_7CD0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x10:
        {
// switch_7CD0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x11:
        {
// switch_7CD0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x12:
        {
// switch_7CD0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x13:
        {
// switch_7CD0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x14:
        {
// switch_7CD0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x15:
        {
// switch_7CD0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x16:
        {
// switch_7CD0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x17:
        {
// switch_7CD0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x18:
        {
// switch_7CD0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x19:
        {
// switch_7CD0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1a:
        {
// switch_7CD0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1b:
        {
// switch_7CD0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1c:
        {
// switch_7CD0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1d:
        {
// switch_7CD0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1e:
        {
// switch_7CD0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x1f:
        {
// switch_7CD0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x20:
        {
// switch_7CD0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x21:
        {
// switch_7CD0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x22:
        {
// switch_7CD0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x23:
        {
// switch_7CD0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x24:
        {
// switch_7CD0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x25:
        {
// switch_7CD0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x26:
        {
// switch_7CD0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x27:
        {
// switch_7CD0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x28:
        {
// switch_7CD0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x29:
        {
// switch_7CD0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2a:
        {
// switch_7CD0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2b:
        {
// switch_7CD0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2c:
        {
// switch_7CD0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2d:
        {
// switch_7CD0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2e:
        {
// switch_7CD0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x2f:
        {
// switch_7CD0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x30:
        {
// switch_7CD0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x31:
        {
// switch_7CD0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x32:
        {
// switch_7CD0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x33:
        {
// switch_7CD0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x34:
        {
// switch_7CD0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x35:
        {
// switch_7CD0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x36:
        {
// switch_7CD0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x37:
        {
// switch_7CD0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x38:
        {
// switch_7CD0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x39:
        {
// switch_7CD0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x3a:
        {
// switch_7CD0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x3b:
        {
// switch_7CD0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x3c:
        {
// switch_7CD0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31496;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x3d:
        {
// switch_7CD0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31672;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
        case 0x3e:
        {
// switch_7CD0_case_0x3e
            var_8 = 3;
            var_16 = 31816;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A28(var_24, var_16, var_8)
            OP_JUMP switch_7CD0_case_default
        }
    }
}
// fun_85F0
fun_85F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8800(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32816;
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
    var_424 = 32872;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32888;
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
    OP_JZER lab_87E8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_87E8
    pri = 0;
    return pri;
}
// fun_8800
fun_8800() {
    var_8 = arg_1;
    var_16 = 32936;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A28(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8848
fun_8848() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_88E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_29A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_88E0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8A38
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_89A0
    var_24 = 33040;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_89A0
    pri = 1;
    OP_JUMP lab_89A8
// lab_8A38
    pri = 0;
    return pri;
// lab_89A0
    pri = 0;
// lab_89A8
    OP_JZER lab_8A38
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_29A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8A48
fun_8A48() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8DC8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8AB0
fun_8AB0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8B20
    OP_CONST_S -8, 1
// lab_8B20
    pri = arg_0;
    OP_JNZ lab_8B40
    OP_ZERO_P_S -8
// lab_8B40
    pri = var_8;
    OP_JZER lab_8BC8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8BC8
    pri = 0;
    return pri;
}
// fun_8BE0
fun_8BE0() {
    var_8 = 33144;
    var_16 = 8;
    pri = fun_23F0(var_8)
    var_24 = 0;
    pri = fun_2428()
    var_32 = 0;
    var_40 = 8;
    pri = fun_24F8(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2638(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8CF8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8CF8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8848(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8A48(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_24C8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2970(var_112)
    pri = 0;
    return pri;
}
// fun_8DC8
fun_8DC8() {
    var_8 = 33304;
    var_16 = 8;
    pri = fun_23F0(var_8)
    var_24 = 0;
    pri = fun_2428()
    pri = arg_3;
    OP_JNZ lab_8EE8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8EB0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8F58(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8ED8
// lab_8EE8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_90F8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8EB0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9020(var_16, var_8)
// lab_8ED8
    OP_JUMP lab_8F30
// lab_8F30
    var_8 = 0;
    pri = fun_24C8()
    pri = 0;
    return pri;
}
// fun_8F58
fun_8F58() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_90F8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9008
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9008
    pri = 0;
    return pri;
}
// fun_9020
fun_9020() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2548(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2150(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2248(var_72)
    var_88 = 0;
    pri = fun_2308()
    var_96 = 0;
    var_104 = 8;
    pri = fun_24F8(var_96)
    pri = 0;
    return pri;
}
// fun_90F8
fun_90F8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9140
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9400(var_8)
// lab_9140
    pri = arg_4;
    OP_JNZ lab_91A8
    var_8 = 0;
    var_16 = 8;
    pri = fun_24F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2548(var_40, var_32, var_24)
// lab_91A8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9248
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2598(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2150(var_56, var_48, var_40)
    OP_JUMP lab_9338
// lab_9248
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9300
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9300
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9300
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2150(var_24, var_16, var_8)
// lab_9338
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9378
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_9378
    var_8 = 1;
    var_16 = 8;
    pri = fun_2248(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9608(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8AB0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9400
fun_9400() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9460
    var_16 = 33464;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9460
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_95A0
        case default:
        {
// switch_95A0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9590
            var_16 = 34008;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9590
            OP_JUMP lab_95D8
// lab_95D8
            var_8 = 34224;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_95A0_case_0x1
            var_8 = 33680;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_95D8
        }
        case 0x2:
        {
// switch_95A0_case_0x2
            var_8 = 33808;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_95D8
        }
    }
}
// fun_9608
fun_9608() {
    pri = arg_2;
    OP_JNZ lab_96F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_24F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2548(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_25E8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_96F0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2150(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2248(var_40)
    var_56 = 0;
    pri = fun_2308()
    pri = 0;
    return pri;
}
// fun_9768
fun_9768() {
    pri = 34408;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_97F0
// lab_97F0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9970
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9960
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_98B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_98B0
    pri = 0;
    OP_JUMP lab_98B8
// lab_9970
    pri = 0;
    return pri;
// lab_9960
    OP_JUMP lab_97E8
// lab_97E8
    OP_INC_P_S -936
// lab_98B0
    pri = 1;
// lab_98B8
    OP_JZER lab_9930
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9928
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9930
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9928
}
// fun_9990
fun_9990() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9A28
    var_8 = 1;
    var_16 = 0;
    var_24 = 35328;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1778()
// lab_9A28
    pri = arg_4;
    OP_JZER lab_9A60
    var_8 = 1;
    var_16 = 8;
    pri = fun_17A0(var_8)
// lab_9A60
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9AB8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9AB8
    pri = 0;
    OP_JUMP lab_9AC0
// lab_9AB8
    pri = 1;
// lab_9AC0
    OP_JZER lab_9B88
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9B88
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9B60
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16B8(var_32, var_24)
    OP_JUMP lab_9B88
// lab_9B88
    pri = arg_2;
    OP_JZER lab_9C60
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9C30
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FF8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    OP_JUMP lab_9C60
// lab_9C60
    pri = arg_3;
    OP_JZER lab_9C98
    var_8 = 1;
    var_16 = 8;
    pri = fun_1740(var_8)
// lab_9C98
    pri = 0;
    return pri;
// lab_9C30
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FF8(var_16, var_8)
// lab_9B60
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16B8(var_16, var_8)
}
// fun_9CA8
fun_9CA8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9768(var_24)
    pri = 0;
    return pri;
}
// fun_9D10
fun_9D10() {
    pri = g_mode;
    switch (pri) {
// switch_9DD0
        case default:
        {
// switch_9DD0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9E18
// lab_9E18
            pri = 0;
            return pri;
        }
        case 0xaf48c62215981346:
        {
// switch_9DD0_case_0xaf48c62215981346
            var_8 = 0;
            pri = fun_BA10()
            OP_JUMP lab_9E18
        }
        case 0x0:
        {
// switch_9DD0_case_0x0
            var_8 = 0;
            pri = fun_9E28()
            OP_JUMP lab_9E18
        }
        case 0x4b57241e634ddfa2:
        {
// switch_9DD0_case_0x4b57241e634ddfa2
            var_8 = 0;
            pri = fun_BB88()
            OP_JUMP lab_9E18
        }
    }
}
// fun_9E28
fun_9E28() {
    pri = 0;
    return pri;
}
// fun_9E40
fun_9E40() {
    pri = 0;
    return pri;
}
// fun_9E58
fun_9E58() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9990(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9EB0
fun_9EB0() {
    var_8 = -6320636825666538237;
    var_16 = 8;
    pri = fun_0540(var_8)
    pri = 0;
    return pri;
}
// fun_9EF0
fun_9EF0() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_9F20
fun_9F20() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 35376;
    pri = SoundPostEvent(var_24)
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0FF8(var_40, var_32)
    var_56 = -3710586881020688051;
    pri = FlagGet(var_56)
    OP_JNZ lab_A5F0
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C -4584379427249245389, 4659087723919415706, 4665185615407061402, -6320636825666538237
    var_80 = 48;
    pri = fun_0718(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 4631952216750555136;
    var_104 = 3;
    OP_PUSH5_C 4658183683468825723, -4588405223103649546, 4665004811714989916, 4659871147944438661, 4645663742475433411
    var_112 = 4665004811714989916;
    var_120 = 30;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 20;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 1;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 4607182418800017408, -6320636825666538237
    var_168 = 0;
    var_176 = 48;
    pri = fun_1330(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH2_C -6320636825666538237, 8802641224559852288
    var_216 = 48;
    pri = fun_0870(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 30;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 1;
    var_248 = -1;
    var_256 = -1;
    var_264 = 3;
    var_272 = 0;
    var_280 = 1;
    var_288 = -6320636825666538237;
    var_296 = 56;
    pri = fun_29A8(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C -7064749215445052685, -6320636825666538237
    var_344 = 56;
    pri = fun_2050(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = -6320636825666538237;
    var_360 = 8;
    pri = fun_0AA0(var_352)
    var_368 = 1;
    var_376 = 8;
    pri = fun_2248(var_368)
    var_384 = 0;
    pri = fun_2308()
    var_392 = 8802641224559852288;
    var_400 = 8;
    pri = fun_08C8(var_392)
    var_408 = 1;
    var_416 = 0;
    var_424 = 30;
    pri = float(var_424)
    var_432 = pri;
    var_440 = -4584435722244587520;
    var_448 = 1;
    OP_PUSH4_C 4657979416198617498, 4664841908072218624, 4607182418800017408, -6320636825666538237
    var_456 = 72;
    pri = fun_07A8(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 0;
    var_472 = 4631952216750555136;
    var_480 = 3;
    OP_PUSH5_C 4657342205229856195, -4588218042244136960, 4664788647728969155, 4658468412999954596, 4642500139659066081
    var_488 = 4664788647728969155;
    var_496 = 160;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 60;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 1;
    var_528 = 1;
    OP_PUSH4_C 4630952980583232307, 4657690684445163520, 4664703259655956070, 8802641224559852288
    var_536 = 48;
    pri = fun_0718(var_528, var_520, var_512, var_504, var_496, var_488)
    var_544 = 1;
    var_552 = 8;
    pri = fun_17A0(var_544)
    var_560 = 0;
    var_568 = 4627927124583592755;
    var_576 = 0;
    OP_PUSH5_C 4657798172701894902, 4637462793107108004, 4664608679665734779, 4657564130656806502, 4638600655700460831
    var_584 = 4664368854189484278;
    var_592 = 1;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 0;
    pri = fun_28E0()
    var_608 = 0;
    var_616 = 4627927124583592755;
    var_624 = 3;
    OP_PUSH5_C 4657758590283294966, 4636737291354636288, 4664694067738747863, 4657629331696333619, 4637951152191700992
    var_632 = 4664435253696685670;
    var_640 = 100;
    pri = EvCameraMove(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 8802641224559852288;
    var_656 = 8;
    pri = fun_08C8(var_648)
    var_664 = 0;
    pri = fun_28E0()
    var_672 = -6320636825666538237;
    var_680 = 8;
    pri = fun_08C8(var_672)
// lab_A5F0
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4630952980583232307, 4657690684445163520, 4664703259655956070, 8802641224559852288
    var_24 = 48;
    pri = fun_0718(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8;
    pri = fun_17A0(var_32)
    var_48 = 0;
    var_56 = 4627927124583592755;
    var_64 = 3;
    OP_PUSH5_C 4657758590283294966, 4636737291354636288, 4664694067738747863, 4657629331696333619, 4637951152191700992
    var_72 = 4664435253696685670;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_28E0()
    var_96 = -1;
    var_104 = 8802641224559852288;
    var_112 = 16;
    pri = fun_0FF8(var_104, var_96)
    var_120 = 1;
    var_128 = -6320636825666538237;
    var_136 = 16;
    pri = fun_0FF8(var_128, var_120)
    var_144 = 1;
    var_152 = -6320636825666538237;
    var_160 = 16;
    pri = fun_1038(var_152, var_144)
    OP_PUSH2_C 4622100592565682176, 4627927124583592755
    var_168 = 3;
    OP_PUSH5_C 4657785726230268477, 4637438164046645821, 4664769395280366797, 4657634785274007388, 4638649210133943419
    var_176 = 4664513593900164710;
    var_184 = 10;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 35536;
    pri = SoundPostEvent(var_192)
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 3;
    var_232 = 0;
    var_240 = 10;
    var_248 = -6320636825666538237;
    var_256 = 56;
    pri = fun_29A8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 0;
    pri = fun_28E0()
    var_272 = -3710586881020688051;
    pri = FlagGet(var_272)
    OP_JNZ lab_AB40
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    OP_PUSH2_C -7064748115933424474, -6320636825666538237
    var_320 = 56;
    pri = fun_2050(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_2248(var_328)
    var_344 = -6320636825666538237;
    var_352 = 8;
    pri = fun_0AA0(var_344)
    var_360 = 0;
    var_368 = 1;
    var_376 = -6320636825666538237;
    var_384 = 24;
    pri = fun_85F0(var_376, var_368, var_360)
    var_392 = 1;
    var_400 = 8;
    pri = fun_0060(var_392)
    var_408 = -6320636825666538237;
    var_416 = 8;
    pri = fun_0AA0(var_408)
    var_424 = 8;
    var_432 = -6320636825666538237;
    var_440 = 16;
    pri = fun_1078(var_432, var_424)
    var_448 = -6320636825666538237;
    var_456 = 8;
    pri = fun_1130(var_448)
    var_464 = 1;
    var_472 = -1;
    var_480 = -1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 0;
    var_512 = -6320636825666538237;
    var_520 = 56;
    pri = fun_29A8(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C -7064747016421796263, -6320636825666538237
    var_568 = 56;
    pri = fun_2050(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_2248(var_576)
    var_592 = -6320636825666538237;
    var_600 = 8;
    pri = fun_0AA0(var_592)
// lab_AB40
    var_8 = -6320636825666538237;
    var_16 = 8;
    pri = fun_11D0(var_8)
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    OP_PUSH2_C -7064745916910168052, -6320636825666538237
    var_64 = 56;
    pri = fun_2050(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2248(var_72)
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    OP_PUSH2_C 7797597847702833036, 7797601146237717669
    var_120 = 1;
    var_128 = 48;
    pri = fun_2338(var_120, var_112, var_104, var_96, var_88, var_80)
    var_8 = pri;
    var_136 = 0;
    pri = fun_2308()
    pri = var_8;
    OP_JNZ lab_AF40
    var_144 = 2;
    var_152 = 2;
    var_160 = -6320636825666538237;
    var_168 = 24;
    pri = fun_1168(var_160, var_152, var_144)
    var_176 = 0;
    var_184 = 0;
    var_192 = -6320636825666538237;
    var_200 = 24;
    pri = fun_85F0(var_192, var_184, var_176)
    var_208 = 1;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = -6320636825666538237;
    var_232 = 8;
    pri = fun_0AA0(var_224)
    var_240 = 1;
    var_248 = -1;
    var_256 = -1;
    var_264 = 3;
    var_272 = 0;
    var_280 = 1;
    var_288 = -6320636825666538237;
    var_296 = 56;
    pri = fun_29A8(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C -7064744817398539841, -6320636825666538237
    var_344 = 56;
    pri = fun_2050(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = -6320636825666538237;
    var_360 = 8;
    pri = fun_0AA0(var_352)
    var_368 = 1;
    var_376 = 8;
    pri = fun_2248(var_368)
    var_384 = 0;
    pri = fun_2308()
    var_392 = 35680;
    pri = SoundPostEvent(var_392)
    var_400 = 1;
    var_408 = 0;
    var_416 = 35328;
    var_424 = 8;
    var_432 = 32;
    pri = fun_0308(var_424, var_416, var_408, var_400)
    var_440 = 0;
    pri = fun_0378()
    var_448 = -6320636825666538237;
    var_456 = 8;
    pri = fun_11D0(var_448)
    var_464 = 3;
    var_472 = 1;
    pri = EvCameraEnd(var_472, var_464)
    OP_PUSH2_C -6320636825666538237, -8041609723819555323
    pri = SetBamiriInfoToChara(var_472, var_464)
    pri = 0;
    return pri;
// lab_AF40
    var_8 = 2;
    var_16 = 6;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_1168(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    OP_PUSH2_C -7064742618375283419, -6320636825666538237
    var_80 = 56;
    pri = fun_2050(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_2248(var_88)
    var_104 = 0;
    pri = fun_2308()
    var_112 = 49;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 240;
    var_152 = 40;
    pri = fun_2688(var_144, var_136, var_128, var_120, var_112)
    var_160 = 0;
    pri = fun_27A0()
    OP_JZER lab_B088
    var_168 = 0;
    pri = fun_2890()
// lab_B088
    var_8 = 0;
    var_16 = 4627927124583592755;
    var_24 = 0;
    OP_PUSH5_C 4657736753982367334, 4637255205311783895, 4664638355484568453, 4657607649327033876, 4639135106312490189
    var_32 = 4664381377626924646;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_28E0()
    var_56 = 15;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 35840;
    var_80 = 8;
    var_88 = 16;
    pri = fun_02A8(var_80, var_72)
    var_96 = 0;
    pri = fun_0378()
    var_104 = 0;
    var_112 = 4627927124583592755;
    var_120 = 3;
    OP_PUSH5_C 4657746363713994097, 4637083505575990395, 4664657475991775478, 4657617259058660639, 4639049256444593439
    var_128 = 4664400487139015393;
    var_136 = 50;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 1;
    var_152 = -1;
    var_160 = -1;
    var_168 = 3;
    var_176 = 0;
    var_184 = 10;
    var_192 = -6320636825666538237;
    var_200 = 56;
    pri = fun_29A8(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    OP_PUSH2_C -7064743717886911630, -6320636825666538237
    var_248 = 56;
    pri = fun_2050(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 1;
    var_264 = 8;
    pri = fun_2248(var_256)
    var_272 = 0;
    pri = fun_2308()
    var_280 = -6320636825666538237;
    var_288 = 8;
    pri = fun_0AA0(var_280)
    var_296 = 0;
    var_304 = 28;
    OP_PUSH2_C 4585034260417726079, -6320636825666538237
    var_312 = 32;
    pri = fun_8BE0(var_304, var_296, var_288, var_280)
    var_320 = 1;
    var_328 = 1;
    var_336 = -1;
    var_344 = -1;
    var_352 = 0;
    var_360 = 6;
    var_368 = -6320636825666538237;
    var_376 = 56;
    pri = fun_4588(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C -7064741518863655208, -6320636825666538237
    var_424 = 56;
    pri = fun_2050(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_2248(var_432)
    var_448 = 0;
    pri = fun_2308()
    var_456 = 1;
    var_464 = 3;
    var_472 = 0;
    var_480 = 6;
    var_488 = -6320636825666538237;
    var_496 = 40;
    pri = fun_68C0(var_488, var_480, var_472, var_464, var_456)
    var_504 = -6320636825666538237;
    var_512 = 8;
    pri = fun_0AA0(var_504)
    var_520 = 1;
    var_528 = 0;
    var_536 = 4641240890982006784;
    var_544 = 0;
    var_552 = 0;
    OP_PUSH4_C 4657781504105617818, 4664431790235058176, 4607182418800017408, -6320636825666538237
    var_560 = 72;
    pri = fun_07A8(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 40;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = -80;
    pri = float(var_608)
    var_616 = pri;
    var_624 = 8802641224559852288;
    var_632 = 40;
    pri = fun_0820(var_624, var_616, var_608, var_600, var_592)
    var_640 = 8802641224559852288;
    var_648 = 8;
    pri = fun_08C8(var_640)
    var_656 = 50;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C 4630587063113508454, 8802641224559852288
    var_696 = 40;
    pri = fun_0820(var_688, var_680, var_672, var_664, var_656)
    var_704 = 8802641224559852288;
    var_712 = 8;
    pri = fun_08C8(var_704)
    var_720 = -6320636825666538237;
    var_728 = 8;
    pri = fun_08C8(var_720)
    var_736 = 35888;
    pri = SoundPostEvent(var_736)
    var_744 = 1;
    var_752 = 0;
    var_760 = 35328;
    var_768 = 8;
    var_776 = 32;
    pri = fun_0308(var_768, var_760, var_752, var_744)
    var_784 = 0;
    pri = fun_0378()
    var_792 = 8802641224559852288;
    var_800 = 8;
    pri = fun_08C8(var_792)
    var_808 = 3;
    var_816 = 1;
    pri = EvCameraEnd(var_816, var_808)
    var_824 = 1;
    var_832 = 1;
    OP_PUSH4_C 4630587063113508454, 4657974138542804173, 4664823986032685875, 8802641224559852288
    var_840 = 48;
    pri = fun_0718(var_832, var_824, var_816, var_808, var_800, var_792)
    pri = 1;
    return pri;
}
// fun_B7A8
fun_B7A8() {
    pri = 0;
    return pri;
}
// fun_B7C0
fun_B7C0() {
    var_8 = -3710586881020688051;
    pri = FlagSet(var_8)
    var_16 = -6320636825666538237;
    var_24 = 8;
    pri = fun_06C0(var_16)
    var_32 = 720;
    var_40 = 8;
    pri = fun_9CA8(var_32)
    var_48 = 2917844282692320165;
    pri = VanishFlagReset(var_48)
    pri = 0;
    return pri;
}
// fun_B870
fun_B870() {
    var_8 = 5;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 35840;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B8E8
fun_B8E8() {
    var_8 = -3710586881020688051;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_B928
fun_B928() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -135;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4657509792792161812, 4664677410137587057, 8802641224559852288
    var_40 = 48;
    pri = fun_0718(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 15;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 35840;
    var_72 = 8;
    var_80 = 16;
    pri = fun_02A8(var_72, var_64)
    var_88 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_BA10
fun_BA10() {
    var_8 = 0;
    pri = fun_9E40()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_9E58()
    var_24 = 0;
    pri = fun_9EB0()
    var_32 = 0;
    pri = fun_9EF0()
    var_48 = 0;
    pri = fun_9F20()
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_BB28
    var_56 = 0;
    pri = fun_B7A8()
    var_64 = 0;
    pri = fun_B7C0()
    var_72 = 0;
    pri = fun_B870()
    OP_JUMP lab_BB58
// lab_BB28
    var_8 = 0;
    pri = fun_B8E8()
    var_16 = 0;
    pri = fun_B928()
// lab_BB58
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BB88
fun_BB88() {
    var_8 = 0;
    pri = fun_9EB0()
    var_16 = 0;
    pri = fun_B7C0()
    var_24 = 28;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
