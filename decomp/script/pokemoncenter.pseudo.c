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
    pri = arg_1;
    OP_JZER lab_01A8
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_01A8
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01E0
fun_01E0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0210
// lab_0210
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0310
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0290
    pri = 0;
    return pri;
// lab_0310
    pri = 0;
    return pri;
// lab_0290
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
    OP_JUMP lab_0208
// lab_0208
    OP_INC_P_S -8
}
// fun_0328
fun_0328() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0388
fun_0388() {
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
// fun_03F8
fun_03F8() {
    OP_JUMP lab_0410
// lab_0410
    pri = FadeWait_()
    OP_JZER lab_0448
    pri = 0;
    return pri;
// lab_0448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0410
    pri = 0;
    return pri;
}
// fun_0488
fun_0488() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_04B8
fun_04B8() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0500
// lab_0500
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0540
    OP_JUMP lab_05B0
// lab_0540
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0580
    OP_JUMP lab_05B0
// lab_0580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0500
// lab_05B0
    pri = 0;
    return pri;
}
// fun_05C8
fun_05C8() {
    pri = ReportStart_()
    pri = 0;
    return pri;
}
// fun_05F8
fun_05F8() {
    OP_JUMP lab_0610
// lab_0610
    pri = ReportWait_()
    OP_JZER lab_0648
    OP_JUMP lab_0658
// lab_0648
    OP_JUMP lab_0610
// lab_0658
    pri = 0;
    return pri;
}
// fun_0668
fun_0668() {
    var_16 = 0;
    pri = fun_07E8()
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_0728
        case default:
        {
// switch_0728_case_default
            var_8 = 0;
            pri = DebugAssert(var_8)
            pri = arg_0;
            return pri;
        }
        case 0x0:
        {
// switch_0728_case_0x2
            pri = arg_0;
            return pri;
            OP_JUMP switch_0728_case_default
        }
        case 0x1:
        {
// switch_0728_case_0x2
            pri = arg_0;
            return pri;
            OP_JUMP switch_0728_case_default
        }
        case 0x2:
        {
// switch_0728_case_0x2
            pri = arg_0;
            return pri;
            OP_JUMP switch_0728_case_default
        }
        case 0x3:
        {
// switch_0728_case_0x4
            pri = arg_1;
            return pri;
            OP_JUMP switch_0728_case_default
        }
        case 0x4:
        {
// switch_0728_case_0x4
            pri = arg_1;
            return pri;
            OP_JUMP switch_0728_case_default
        }
        case 0x5:
        {
// switch_0728_case_0x6
            pri = arg_2;
            return pri;
            OP_JUMP switch_0728_case_default
        }
        case 0x6:
        {
// switch_0728_case_0x6
            pri = arg_2;
            return pri;
            OP_JUMP switch_0728_case_default
        }
    }
}
// fun_07E8
fun_07E8() {
    pri = GetMinuteTimeZone_()
    return pri;
}
// fun_0810
fun_0810() {
    OP_ZERO_P_S -8
    OP_CONST_S -16, 1800
    OP_JUMP lab_0858
// lab_0858
    pri = IsRunningAutoSave()
    OP_JNZ lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_INC_P_S -8
    OP_LOAD_S_BOTH -8, -16
    OP_JSLESS lab_08E0
    pri = 0;
    return pri;
// lab_08E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
    pri = 0;
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0A88
fun_0A88() {
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
// fun_0B00
fun_0B00() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C00
fun_0C00() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1548(var_8)
    OP_JZER lab_0C78
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1578(var_24)
    OP_JNZ lab_0C78
    pri = 0;
    return pri;
// lab_0C78
    OP_JUMP lab_0C88
// lab_0C88
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0CE8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C88
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    return pri;
}
// fun_0D58
fun_0D58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0D90
fun_0D90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0E50
    pri = 0;
    return pri;
// lab_0E50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E90
// lab_0E90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1548(var_8)
    OP_JNZ lab_0F18
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F08
    pri = 0;
    return pri;
// lab_0F18
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0F60
    pri = 0;
    return pri;
// lab_0F60
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0FC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1008(var_8)
    pri = 0;
    return pri;
// lab_0FC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E90
    pri = 0;
    return pri;
// lab_0F08
    OP_JUMP lab_0F60
}
// fun_1008
fun_1008() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1090
    pri = 0;
    return pri;
// lab_1090
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1548(var_8)
    OP_JZER lab_11C0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10E8
    OP_ZERO_P_S 64
// lab_11C0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_11F8
    OP_CONST_S 64, 1
// lab_11F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1230
    OP_CONST_S 72, 1
// lab_1230
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
// lab_10E8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1110
    OP_ZERO_P_S 72
// lab_1110
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
    OP_JUMP lab_12D0
// lab_12D0
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1360
fun_1360() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B8
fun_13B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F8
fun_13F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfxOnCamera_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_14A8
fun_14A8() {
    OP_JUMP lab_14C0
// lab_14C0
    var_8 = arg_0;
    pri = IsEndParticleVfx_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1508
    OP_JUMP lab_1538
// lab_1508
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14C0
// lab_1538
    pri = 0;
    return pri;
}
// fun_1548
fun_1548() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
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
            pri = fun_2078()
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
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_15D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D60
fun_1D60() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0DD0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E08
    pri = 1;
    return pri;
// lab_1E08
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E50
fun_1E50() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D60(var_8)
    arg_2 = pri;
// lab_1EA0
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
// fun_1F00
fun_1F00() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1D60(var_8)
    arg_2 = pri;
// lab_1F50
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FC8
fun_1FC8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1CF8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2018
fun_2018() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1FC8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2078
fun_2078() {
    OP_JUMP lab_2090
// lab_2090
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20D0
    pri = 0;
    return pri;
// lab_20D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2090
    pri = 0;
    return pri;
}
// fun_2110
fun_2110() {
    var_8 = 0;
    pri = fun_2078()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_21C0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_21C0
    pri = 0;
    return pri;
}
// fun_21D0
fun_21D0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2230
// lab_2230
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2270
    OP_JUMP lab_22A0
// lab_2270
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2230
// lab_22A0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22E8
fun_22E8() {
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
// fun_2358
fun_2358() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_23D0()
    return pri;
}
// fun_23D0
fun_23D0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2410
fun_2410() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2448
fun_2448() {
    OP_JUMP lab_2460
// lab_2460
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_24A8
    OP_JUMP lab_24D8
    OP_JUMP lab_24C8
// lab_24A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_24D8
    pri = 0;
    return pri;
// lab_24C8
    OP_JUMP lab_2460
}
// fun_24E8
fun_24E8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2518
fun_2518() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2568
fun_2568() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25B8
fun_25B8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2608
fun_2608() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2658
fun_2658() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26A8
fun_26A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 18;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26F8
fun_26F8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2748
fun_2748() {
    OP_ZERO_P_S -8
    OP_JUMP lab_2778
// lab_2778
    pri = var_8;
    var_8 = pri;
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    OP_POP_ALT 
    OP_JSLEQ lab_28C8
    pri = arg_3;
    OP_JZER lab_2830
    var_32 = 0;
    var_40 = 8;
    var_48 = var_8;
    pri = PokePartyGetParam(var_48, var_40, var_32)
    OP_JZER lab_2830
    OP_JUMP lab_2770
// lab_28C8
    OP_ZERO_P_S -8
    OP_JUMP lab_28F8
// lab_28F8
    pri = var_8;
    var_8 = pri;
    pri = PokeBoxGetTrayNum()
    OP_POP_ALT 
    OP_JSLEQ lab_2AF8
    OP_ZERO_P_S -16
    OP_JUMP lab_2960
// lab_2AF8
    pri = 0;
    return pri;
// lab_2960
    pri = var_16;
    alt = 30;
    OP_JSGEQ lab_2AE0
    pri = arg_3;
    OP_JZER lab_29F0
    var_8 = 0;
    var_16 = 8;
    var_24 = var_16;
    var_32 = var_8;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    OP_JZER lab_29F0
    OP_JUMP lab_2958
// lab_2AE0
    OP_JUMP lab_28F0
// lab_28F0
    OP_INC_P_S -8
// lab_29F0
    var_8 = 0;
    var_16 = var_16;
    var_24 = var_8;
    pri = PokeBoxIsExist(var_24, var_16, var_8)
    OP_JNZ lab_2A40
    OP_JUMP lab_2958
// lab_2A40
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = var_16;
    var_40 = var_8;
    pri = PokeBoxGetParam(var_40, var_32, var_24, var_16)
    var_24 = pri;
    OP_LOAD_S_BOTH 40, -24
    OP_JNEQ lab_2AC8
    pri = 1;
    return pri;
// lab_2AC8
    OP_JUMP lab_2958
// lab_2958
    OP_INC_P_S -16
// lab_2830
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = var_8;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_16 = pri;
    OP_LOAD_S_BOTH 40, -16
    OP_JNEQ lab_28B0
    pri = 1;
    return pri;
// lab_28B0
    OP_JUMP lab_2770
// lab_2770
    OP_INC_P_S -8
}
// fun_2B10
fun_2B10() {
    pri = arg_6;
    OP_JNZ lab_2B48
    var_8 = 0;
    pri = fun_12E0()
// lab_2B48
    pri = arg_1;
    switch (pri) {
// switch_40B0
        case default:
        {
// switch_40B0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4400
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4400
            pri = 1;
            OP_JUMP lab_4408
// lab_4400
            pri = 0;
// lab_4408
            OP_JZER lab_4560
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DD0(var_24, var_16)
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
            OP_JUMP lab_45C0
// lab_4560
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
            pri = fun_01E0(var_16, var_8, var_0)
// lab_45C0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4620
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4680
// lab_4620
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4680
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4680
            pri = arg_2;
            OP_JZER lab_46C0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_46C0
            var_8 = 0;
            pri = fun_1320()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_40B0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1:
        {
// switch_40B0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x2:
        {
// switch_40B0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x3:
        {
// switch_40B0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x4:
        {
// switch_40B0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x5:
        {
// switch_40B0_case_0x5
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0x6:
        {
// switch_40B0_case_0x6
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0x7:
        {
// switch_40B0_case_0x7
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0x8:
        {
// switch_40B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x9:
        {
// switch_40B0_case_0x9
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0xa:
        {
// switch_40B0_case_0xa
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0xb:
        {
// switch_40B0_case_0xb
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0xc:
        {
// switch_40B0_case_0xc
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0xd:
        {
// switch_40B0_case_0xd
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0xe:
        {
// switch_40B0_case_0xe
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0xf:
        {
// switch_40B0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x10:
        {
// switch_40B0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x11:
        {
// switch_40B0_case_0x11
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0x12:
        {
// switch_40B0_case_0x12
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0x13:
        {
// switch_40B0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x14:
        {
// switch_40B0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x15:
        {
// switch_40B0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x16:
        {
// switch_40B0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x17:
        {
// switch_40B0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x18:
        {
// switch_40B0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x19:
        {
// switch_40B0_case_0x19
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1a:
        {
// switch_40B0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D58(var_48, var_40)
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
            pri = fun_1040(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1b:
        {
// switch_40B0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D58(var_48, var_40)
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
            pri = fun_1040(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1c:
        {
// switch_40B0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D58(var_48, var_40)
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
            pri = fun_1040(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1d:
        {
// switch_40B0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1e:
        {
// switch_40B0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x1f:
        {
// switch_40B0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x20:
        {
// switch_40B0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x21:
        {
// switch_40B0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x22:
        {
// switch_40B0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x23:
        {
// switch_40B0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x24:
        {
// switch_40B0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x25:
        {
// switch_40B0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x26:
        {
// switch_40B0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x27:
        {
// switch_40B0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x28:
        {
// switch_40B0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
        case 0x29:
        {
// switch_40B0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_40B0_case_default
        }
    }
}
// fun_46F0
fun_46F0() {
    pri = arg_5;
    OP_JNZ lab_4728
    var_8 = 0;
    pri = fun_12E0()
// lab_4728
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4778
    OP_CONST_S -8, -1
// lab_4778
    pri = arg_1;
    switch (pri) {
// switch_6230
        case default:
        {
// switch_6230_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_66D8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0DD0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_66D8
            pri = 1;
            OP_JUMP lab_66E0
// lab_66D8
            pri = 0;
// lab_66E0
            OP_JZER lab_6730
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_6988
// lab_6730
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6798
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6798
            pri = 1;
            OP_JUMP lab_67A0
// lab_6798
            pri = 0;
// lab_67A0
            OP_JZER lab_6928
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DD0(var_24, var_16)
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
            OP_JUMP lab_6988
// lab_6928
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
            pri = fun_01E0(var_16, var_8, var_0)
// lab_6988
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_69F8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_69F8
            var_8 = 0;
            pri = fun_1320()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6230_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x1:
        {
// switch_6230_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x2:
        {
// switch_6230_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x3:
        {
// switch_6230_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x4:
        {
// switch_6230_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x5:
        {
// switch_6230_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1008(var_40)
            OP_JUMP switch_6230_case_default
        }
        case 0x6:
        {
// switch_6230_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x7:
        {
// switch_6230_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x8:
        {
// switch_6230_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x9:
        {
// switch_6230_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0xa:
        {
// switch_6230_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0xb:
        {
// switch_6230_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0xc:
        {
// switch_6230_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0xd:
        {
// switch_6230_case_0xd
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0xe:
        {
// switch_6230_case_0xe
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0xf:
        {
// switch_6230_case_0xf
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x10:
        {
// switch_6230_case_0x10
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x11:
        {
// switch_6230_case_0x11
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x12:
        {
// switch_6230_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x13:
        {
// switch_6230_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x14:
        {
// switch_6230_case_0x14
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x15:
        {
// switch_6230_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x16:
        {
// switch_6230_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x17:
        {
// switch_6230_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x18:
        {
// switch_6230_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x19:
        {
// switch_6230_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x1a:
        {
// switch_6230_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x1b:
        {
// switch_6230_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x1c:
        {
// switch_6230_case_0x1c
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x1d:
        {
// switch_6230_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x1e:
        {
// switch_6230_case_0x1e
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x1f:
        {
// switch_6230_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x20:
        {
// switch_6230_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x21:
        {
// switch_6230_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x22:
        {
// switch_6230_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x23:
        {
// switch_6230_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x24:
        {
// switch_6230_case_0x24
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x25:
        {
// switch_6230_case_0x25
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x26:
        {
// switch_6230_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x27:
        {
// switch_6230_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x28:
        {
// switch_6230_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x29:
        {
// switch_6230_case_0x29
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x2a:
        {
// switch_6230_case_0x2a
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x2b:
        {
// switch_6230_case_0x2b
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x2c:
        {
// switch_6230_case_0x2c
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x2d:
        {
// switch_6230_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x2e:
        {
// switch_6230_case_0x2e
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x2f:
        {
// switch_6230_case_0x2f
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x30:
        {
// switch_6230_case_0x30
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x31:
        {
// switch_6230_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x32:
        {
// switch_6230_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x33:
        {
// switch_6230_case_0x33
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x34:
        {
// switch_6230_case_0x34
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x35:
        {
// switch_6230_case_0x35
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x36:
        {
// switch_6230_case_0x36
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x37:
        {
// switch_6230_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x38:
        {
// switch_6230_case_0x38
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
            pri = fun_1040(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6230_case_default
        }
        case 0x39:
        {
// switch_6230_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x3a:
        {
// switch_6230_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x3b:
        {
// switch_6230_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x3c:
        {
// switch_6230_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x3d:
        {
// switch_6230_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
        case 0x3e:
        {
// switch_6230_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            OP_JUMP switch_6230_case_default
        }
    }
}
// fun_6A28
fun_6A28() {
    pri = arg_4;
    OP_JNZ lab_6A60
    var_8 = 0;
    pri = fun_12E0()
// lab_6A60
    pri = arg_1;
    switch (pri) {
// switch_7E38
        case default:
        {
// switch_7E38_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1548(var_264)
            OP_JZER lab_8400
            pri = arg_3;
            switch (pri) {
// switch_83A8
                case default:
                {
// switch_83A8_case_default
                    OP_JUMP lab_86B8
// lab_86B8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8728
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8728
                    var_8 = 0;
                    pri = fun_1320()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_83A8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_83A8_case_default
                }
                case 0x2:
                {
// switch_83A8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_83A8_case_default
                }
                case 0x3:
                {
// switch_83A8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_83A8_case_default
                }
            }
// lab_8400
            pri = arg_1;
            OP_JZER lab_8450
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8450
            pri = 0;
            OP_JUMP lab_8458
// lab_8450
            pri = 1;
// lab_8458
            OP_JZER lab_84C0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0DD0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_84C0
            pri = 1;
            OP_JUMP lab_84C8
// lab_84C0
            pri = 0;
// lab_84C8
            OP_JZER lab_8518
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_86B8
// lab_8518
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8580
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_86B8
// lab_8580
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DD0(var_24, var_16)
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
// switch_7E38_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1:
        {
// switch_7E38_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2:
        {
// switch_7E38_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x3:
        {
// switch_7E38_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x4:
        {
// switch_7E38_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x5:
        {
// switch_7E38_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1008(var_40)
            OP_JUMP switch_7E38_case_default
        }
        case 0x6:
        {
// switch_7E38_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x7:
        {
// switch_7E38_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x8:
        {
// switch_7E38_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x9:
        {
// switch_7E38_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0xa:
        {
// switch_7E38_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0xb:
        {
// switch_7E38_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0xc:
        {
// switch_7E38_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0xd:
        {
// switch_7E38_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0xe:
        {
// switch_7E38_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0xf:
        {
// switch_7E38_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x10:
        {
// switch_7E38_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x11:
        {
// switch_7E38_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x12:
        {
// switch_7E38_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x13:
        {
// switch_7E38_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x14:
        {
// switch_7E38_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x15:
        {
// switch_7E38_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x16:
        {
// switch_7E38_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x17:
        {
// switch_7E38_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x18:
        {
// switch_7E38_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x19:
        {
// switch_7E38_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1a:
        {
// switch_7E38_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1b:
        {
// switch_7E38_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1c:
        {
// switch_7E38_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1d:
        {
// switch_7E38_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1e:
        {
// switch_7E38_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x1f:
        {
// switch_7E38_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x20:
        {
// switch_7E38_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x21:
        {
// switch_7E38_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x22:
        {
// switch_7E38_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x23:
        {
// switch_7E38_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x24:
        {
// switch_7E38_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x25:
        {
// switch_7E38_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x26:
        {
// switch_7E38_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x27:
        {
// switch_7E38_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x28:
        {
// switch_7E38_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x29:
        {
// switch_7E38_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2a:
        {
// switch_7E38_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2b:
        {
// switch_7E38_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2c:
        {
// switch_7E38_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2d:
        {
// switch_7E38_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2e:
        {
// switch_7E38_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x2f:
        {
// switch_7E38_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x30:
        {
// switch_7E38_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x31:
        {
// switch_7E38_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x32:
        {
// switch_7E38_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x33:
        {
// switch_7E38_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x34:
        {
// switch_7E38_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x35:
        {
// switch_7E38_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x36:
        {
// switch_7E38_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x37:
        {
// switch_7E38_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x38:
        {
// switch_7E38_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x39:
        {
// switch_7E38_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x3a:
        {
// switch_7E38_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x3b:
        {
// switch_7E38_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x3c:
        {
// switch_7E38_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x3d:
        {
// switch_7E38_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
        case 0x3e:
        {
// switch_7E38_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D90(var_24, var_16, var_8)
            OP_JUMP switch_7E38_case_default
        }
    }
}
// fun_8758
fun_8758() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8968(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_8950
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8950
    pri = 0;
    return pri;
}
// fun_8968
fun_8968() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0D90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_89B0
fun_89B0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8AB0
        case default:
        {
// switch_8AB0_case_default
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
// switch_8AB0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8AB0_case_default
        }
        case 0x1:
        {
// switch_8AB0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8AB0_case_default
        }
        case 0x2:
        {
// switch_8AB0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8AB0_case_default
        }
        case 0x3:
        {
// switch_8AB0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8AB0_case_default
        }
    }
}
// fun_8B70
fun_8B70() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8BC0
// lab_8BC0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8C38
    OP_JUMP lab_8C68
// lab_8C38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8BC0
// lab_8C68
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8CF0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6A28(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_15A8(var_56)
// lab_8CF0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8D58
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B8(var_24, var_16)
// lab_8D58
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13B8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8E18
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E08(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0B58(var_88, var_80, var_72, var_64, var_56)
// lab_8E18
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8E58
    pri = 0;
    return pri;
// lab_8E58
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8FA0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0D58(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8F68
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8FA0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C00(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C00(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0E08(var_40)
    pri = 0;
    return pri;
// lab_8F68
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B8(var_16, var_8)
}
// fun_9028
fun_9028() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_91C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9090
fun_9090() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9100
    OP_CONST_S -8, 1
// lab_9100
    pri = arg_0;
    OP_JNZ lab_9120
    OP_ZERO_P_S -8
// lab_9120
    pri = var_8;
    OP_JZER lab_91A8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_91A8
    pri = 0;
    return pri;
}
// fun_91C0
fun_91C0() {
    var_8 = 30528;
    var_16 = 8;
    pri = fun_2410(var_8)
    var_24 = 0;
    pri = fun_2448()
    pri = arg_3;
    OP_JNZ lab_92E0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_92A8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9350(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_92D0
// lab_92E0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_94F0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_92A8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9418(var_16, var_8)
// lab_92D0
    OP_JUMP lab_9328
// lab_9328
    var_8 = 0;
    pri = fun_24E8()
    pri = 0;
    return pri;
}
// fun_9350
fun_9350() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_94F0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9400
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9400
    pri = 0;
    return pri;
}
// fun_9418
fun_9418() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2568(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2018(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2110(var_72)
    var_88 = 0;
    pri = fun_21D0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2518(var_96)
    pri = 0;
    return pri;
}
// fun_94F0
fun_94F0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9538
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_97F8(var_8)
// lab_9538
    pri = arg_4;
    OP_JNZ lab_95A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2518(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2568(var_40, var_32, var_24)
// lab_95A0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9640
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_25B8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2018(var_56, var_48, var_40)
    OP_JUMP lab_9730
// lab_9640
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_96F8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_96F8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_96F8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2018(var_24, var_16, var_8)
// lab_9730
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9770
    var_8 = 0;
    var_16 = 8;
    pri = fun_04B8(var_8)
// lab_9770
    var_8 = 1;
    var_16 = 8;
    pri = fun_2110(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9A00(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9090(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_97F8
fun_97F8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9858
    var_16 = 30688;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9858
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9998
        case default:
        {
// switch_9998_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9988
            var_16 = 31232;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9988
            OP_JUMP lab_99D0
// lab_99D0
            var_8 = 31448;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9998_case_0x1
            var_8 = 30904;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_99D0
        }
        case 0x2:
        {
// switch_9998_case_0x2
            var_8 = 31032;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_99D0
        }
    }
}
// fun_9A00
fun_9A00() {
    pri = arg_2;
    OP_JNZ lab_9AE8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2518(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2568(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2608(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9AE8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2018(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2110(var_40)
    var_56 = 0;
    pri = fun_21D0()
    pri = 0;
    return pri;
}
// fun_9B60
fun_9B60() {
    var_8 = 31632;
    var_16 = 8;
    pri = fun_2410(var_8)
    var_24 = 0;
    pri = fun_2448()
    pri = arg_0;
    OP_JZER lab_9CA0
    var_32 = 3;
    var_40 = 1;
    var_48 = 8343654448023770297;
    var_56 = 24;
    pri = fun_1FC8(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 8;
    pri = fun_2110(var_64)
    var_80 = 0;
    var_88 = 0;
    var_96 = 1;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 48;
    pri = fun_2358(var_120, var_112, var_104, var_96, var_88, var_80)
    OP_JZER lab_9C78
    OP_JUMP lab_9CA0
// lab_9CA0
    OP_LCTRL 5
    OP_SCTRL 4
    var_8 = 3;
    var_16 = 1;
    var_24 = 8343651149488885664;
    var_32 = 24;
    pri = fun_1FC8(var_24, var_16, var_8)
    var_40 = 0;
    pri = fun_0810()
    var_48 = 0;
    pri = fun_05C8()
    var_56 = 0;
    pri = fun_05F8()
    var_64 = 31808;
    pri = SoundPostEvent(var_64)
    var_72 = 0;
    var_80 = 8;
    pri = fun_2518(var_72)
    var_88 = 3;
    var_96 = 1;
    var_104 = 8343652249000513875;
    var_112 = 24;
    pri = fun_1FC8(var_104, var_96, var_88)
    pri = arg_1;
    OP_JZER lab_9E00
    var_120 = 30;
    var_128 = 8;
    pri = fun_0060(var_120)
    OP_JUMP lab_9E20
// lab_9E00
    var_8 = 1;
    var_16 = 8;
    pri = fun_2110(var_8)
// lab_9E20
    var_8 = 0;
    pri = fun_21D0()
    var_16 = 0;
    pri = fun_24E8()
    pri = 0;
    return pri;
// lab_9C78
    var_8 = 0;
    pri = fun_21D0()
    pri = 0;
    return pri;
}
// fun_9E60
fun_9E60() {
    pri = 31984;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9EE8
// lab_9EE8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A068
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A058
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9FA8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9FA8
    pri = 0;
    OP_JUMP lab_9FB0
// lab_A068
    pri = 0;
    return pri;
// lab_A058
    OP_JUMP lab_9EE0
// lab_9EE0
    OP_INC_P_S -936
// lab_9FA8
    pri = 1;
// lab_9FB0
    OP_JZER lab_A028
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A020
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A028
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A020
}
// fun_A088
fun_A088() {
    var_8 = 0;
    var_16 = 7868662798435347852;
    pri = WorkSet(var_16, var_8)
    var_32 = 32904;
    pri = GetCharaUniqueHashFromNameHash(var_32)
    var_8 = pri;
    var_40 = 0;
    var_48 = 32936;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_0D90(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_A138
fun_A138() {
    var_8 = 1;
    var_16 = 7868662798435347852;
    pri = WorkSet(var_16, var_8)
    var_32 = 33040;
    pri = GetCharaUniqueHashFromNameHash(var_32)
    var_8 = pri;
    var_40 = 1;
    var_48 = 33072;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_0D90(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_A1E8
fun_A1E8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_A368
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A280
    var_8 = 1;
    var_16 = 0;
    var_24 = 33176;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0388(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03F8()
// lab_A368
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_A280
    pri = arg_0;
    OP_JNZ lab_A2C8
    var_8 = 33224;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_A2E8
// lab_A2C8
    var_8 = 33400;
    pri = SoundPostEvent(var_8)
// lab_A2E8
    var_8 = 0;
    var_16 = 8;
    pri = fun_04B8(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A368
    var_24 = 33664;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0328(var_32, var_24)
    var_48 = 0;
    pri = fun_03F8()
}
// fun_A3A8
fun_A3A8() {
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_8 = pri;
    pri = var_8;
    alt = 600;
    OP_JSLESS lab_A440
    pri = var_8;
    alt = 610;
    OP_JSGRTR lab_A440
    pri = 1;
    OP_JUMP lab_A448
// lab_A440
    pri = 0;
// lab_A448
    OP_JZER lab_A4E0
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 590;
    var_24 = 8;
    pri = fun_AC30(var_16)
    var_32 = 0;
    var_40 = 7474429120239519668;
    pri = WorkSet(var_40, var_32)
    OP_JUMP lab_ABF8
// lab_A4E0
    pri = var_8;
    alt = 660;
    OP_JSLESS lab_A538
    pri = var_8;
    alt = 670;
    OP_JSGRTR lab_A538
    pri = 1;
    OP_JUMP lab_A540
// lab_A538
    pri = 0;
// lab_A540
    OP_JZER lab_A5A8
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 650;
    var_24 = 8;
    pri = fun_AC30(var_16)
    OP_JUMP lab_ABF8
// lab_A5A8
    pri = var_8;
    alt = 780;
    OP_JSLESS lab_A600
    pri = var_8;
    alt = 790;
    OP_JSGRTR lab_A600
    pri = 1;
    OP_JUMP lab_A608
// lab_A600
    pri = 0;
// lab_A608
    OP_JZER lab_A6B8
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 770;
    var_24 = 8;
    pri = fun_AC30(var_16)
    pri = var_8;
    OP_EQ_P_C_PRI 780
    OP_JZER lab_A6A8
    var_32 = -5769160658289007030;
    pri = FlagSet(var_32)
// lab_A6B8
    pri = var_8;
    alt = 970;
    OP_JSLESS lab_A710
    pri = var_8;
    alt = 990;
    OP_JSGRTR lab_A710
    pri = 1;
    OP_JUMP lab_A718
// lab_A710
    pri = 0;
// lab_A718
    OP_JZER lab_A780
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 960;
    var_24 = 8;
    pri = fun_AC30(var_16)
    OP_JUMP lab_ABF8
// lab_A780
    pri = var_8;
    alt = 1130;
    OP_JSLESS lab_A7D8
    pri = var_8;
    alt = 1140;
    OP_JSGRTR lab_A7D8
    pri = 1;
    OP_JUMP lab_A7E0
// lab_A7D8
    pri = 0;
// lab_A7E0
    OP_JZER lab_A898
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1120;
    var_24 = 8;
    pri = fun_AC30(var_16)
    pri = var_8;
    OP_EQ_P_C_PRI 1130
    OP_JZER lab_A888
    var_32 = 0;
    var_40 = -1068280264362630289;
    pri = WorkSet(var_40, var_32)
// lab_A898
    pri = var_8;
    alt = 1243;
    OP_JSLESS lab_A8F0
    pri = var_8;
    alt = 1246;
    OP_JSGRTR lab_A8F0
    pri = 1;
    OP_JUMP lab_A8F8
// lab_A8F0
    pri = 0;
// lab_A8F8
    OP_JZER lab_A960
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1240;
    var_24 = 8;
    pri = fun_AC30(var_16)
    OP_JUMP lab_ABF8
// lab_A960
    pri = var_8;
    alt = 1340;
    OP_JSLESS lab_A9B8
    pri = var_8;
    alt = 1350;
    OP_JSGRTR lab_A9B8
    pri = 1;
    OP_JUMP lab_A9C0
// lab_A9B8
    pri = 0;
// lab_A9C0
    OP_JZER lab_AAA0
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1330;
    var_24 = 8;
    pri = fun_AC30(var_16)
    var_32 = 5871714809546737952;
    pri = FlagReset(var_32)
    var_40 = 0;
    var_48 = 0;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 33712;
    pri = SoundSetRTPC(var_64, var_56, var_48)
    OP_JUMP lab_ABF8
// lab_AAA0
    pri = var_8;
    alt = 1422;
    OP_JSLESS lab_AAF8
    pri = var_8;
    alt = 1430;
    OP_JSGRTR lab_AAF8
    pri = 1;
    OP_JUMP lab_AB00
// lab_AAF8
    pri = 0;
// lab_AB00
    OP_JZER lab_ABF8
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = -4807553854326954453;
    pri = FlagSet(var_16)
    var_24 = 7589307597612998181;
    pri = FlagSet(var_24)
    var_32 = 1437989026607552983;
    pri = FlagSet(var_32)
    var_40 = 1437990126119181194;
    pri = FlagSet(var_40)
    var_48 = 1420;
    var_56 = 8;
    pri = fun_AC30(var_48)
// lab_ABF8
    var_8 = 41;
    var_16 = 8;
    pri = fun_0488(var_8)
    pri = 0;
    return pri;
// lab_A888
    OP_JUMP lab_ABF8
// lab_A6A8
    OP_JUMP lab_ABF8
}
// fun_AC30
fun_AC30() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9E60(var_24)
    pri = 0;
    return pri;
}
// fun_AC98
fun_AC98() {
    pri = g_mode;
    switch (pri) {
// switch_AEC0
        case default:
        {
// switch_AEC0_case_default
            pri = CommandNOP()
            OP_JUMP lab_AF98
// lab_AF98
            pri = 0;
            return pri;
        }
        case 0x8c4a8899c985ef72:
        {
// switch_AEC0_case_0x8c4a8899c985ef72
            var_8 = 0;
            pri = fun_10200()
            OP_JUMP lab_AF98
        }
        case 0xba7578b2d64cc142:
        {
// switch_AEC0_case_0xba7578b2d64cc142
            var_8 = 0;
            pri = fun_DA40()
            OP_JUMP lab_AF98
        }
        case 0xc63112e6ae612047:
        {
// switch_AEC0_case_0xc63112e6ae612047
            var_8 = 0;
            pri = fun_DA10()
            OP_JUMP lab_AF98
        }
        case 0xdb41278104d79cba:
        {
// switch_AEC0_case_0xdb41278104d79cba
            var_8 = 0;
            pri = fun_BF80()
            OP_JUMP lab_AF98
        }
        case 0xf195e4765058e4e4:
        {
// switch_AEC0_case_0xf195e4765058e4e4
            var_8 = 0;
            pri = fun_CF30()
            OP_JUMP lab_AF98
        }
        case 0xf845ac7f6f685c58:
        {
// switch_AEC0_case_0xf845ac7f6f685c58
            var_8 = 0;
            pri = fun_C520()
            OP_JUMP lab_AF98
        }
        case 0xfccd872dea802d55:
        {
// switch_AEC0_case_0xfccd872dea802d55
            var_8 = 0;
            pri = fun_D588()
            OP_JUMP lab_AF98
        }
        case 0x0:
        {
// switch_AEC0_case_0x0
            var_8 = 0;
            pri = fun_AFA8()
            OP_JUMP lab_AF98
        }
        case 0xbbc05e808cef5c3:
        {
// switch_AEC0_case_0xbbc05e808cef5c3
            var_8 = 0;
            pri = fun_DA28()
            OP_JUMP lab_AF98
        }
        case 0x2f8c2ae4c3e0d915:
        {
// switch_AEC0_case_0x2f8c2ae4c3e0d915
            var_8 = 0;
            pri = fun_D100()
            OP_JUMP lab_AF98
        }
        case 0x38abf2481e194867:
        {
// switch_AEC0_case_0x38abf2481e194867
            var_8 = 0;
            pri = fun_B1E0()
            OP_JUMP lab_AF98
        }
        case 0x59a886b867b9c018:
        {
// switch_AEC0_case_0x59a886b867b9c018
            var_8 = 0;
            pri = fun_BCC8()
            OP_JUMP lab_AF98
        }
    }
}
// fun_AFA8
fun_AFA8() {
    pri = 0;
    return pri;
}
// fun_AFC0
fun_AFC0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_AFF0
// lab_AFF0
    pri = var_8;
    var_8 = pri;
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    OP_POP_ALT 
    OP_JSLEQ lab_B198
    var_32 = 0;
    var_40 = 8;
    var_48 = var_8;
    pri = PokePartyGetParam(var_48, var_40, var_32)
    OP_JZER lab_B090
    OP_JUMP lab_AFE8
// lab_B198
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_B090
    var_16 = 0;
    var_24 = 2;
    var_32 = var_8;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_16 = pri;
    var_48 = 0;
    var_56 = 3;
    var_64 = var_8;
    pri = PokePartyGetParam(var_64, var_56, var_48)
    var_24 = pri;
    pri = var_16;
    OP_SMUL_P_C 4
    OP_LOAD_P_S_ALT -24
    OP_JSGRTR lab_B180
    var_72 = 0;
    var_80 = 1;
    var_88 = 33840;
    var_96 = var_8;
    var_104 = 0;
    var_112 = 1;
    pri = PokeMemoryCheck(var_112, var_104, var_96, var_88, var_80, var_72)
// lab_B180
    OP_JUMP lab_AFE8
// lab_AFE8
    OP_INC_P_S -8
}
// fun_B1E0
fun_B1E0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = var_8;
    var_56 = 40;
    pri = fun_1360(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = var_8;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0BA8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 9010327285021969031;
    pri = FlagGet(var_120)
    OP_JZER lab_B378
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH3_C 6181475276436528568, 6181478574971413201, 6181477475459784990
    var_168 = 24;
    pri = fun_0668(var_160, var_152, var_144)
    var_176 = pri;
    var_184 = var_8;
    var_192 = 56;
    pri = fun_1E50(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    OP_JUMP lab_B400
// lab_B378
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH3_C 6181480773994669623, 6181479674483041412, 6181482973017926045
    var_48 = 24;
    pri = fun_0668(var_40, var_32, var_24)
    var_56 = pri;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_1E50(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_B400
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D28(var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 48;
    pri = fun_2358(var_72, var_64, var_56, var_48, var_40, var_32)
    var_16 = pri;
    pri = var_16;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B5E8
    var_88 = 1;
    var_96 = var_8;
    var_104 = 16;
    pri = fun_B728(var_96, var_88)
    var_112 = 358258059222030895;
    pri = FlagGet(var_112)
    OP_JNZ lab_B5E8
    var_120 = 1;
    var_128 = 1;
    var_136 = 0;
    var_144 = 73;
    var_152 = 32;
    pri = fun_2748(var_144, var_136, var_128, var_120)
    OP_JZER lab_B5E8
    var_160 = 358258059222030895;
    pri = FlagSet(var_160)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = -5748578697464877223;
    var_216 = var_8;
    var_224 = 56;
    pri = fun_1E50(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_2110(var_232)
// lab_B5E8
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 5;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_2B10(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -246494108484714991;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1E50(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = var_8;
    var_144 = 8;
    pri = fun_0E08(var_136)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2110(var_152)
    var_168 = 0;
    pri = fun_21D0()
    var_176 = -1;
    var_184 = var_8;
    var_192 = 16;
    pri = fun_13B8(var_184, var_176)
    pri = 0;
    return pri;
}
// fun_B728
fun_B728() {
    pri = LoadPokemonCenterHealModels_()
    pri = arg_1;
    OP_JZER lab_B8D8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -246491909461458569;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2110(var_72)
    var_88 = 0;
    pri = fun_21D0()
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 3;
    var_128 = 0;
    var_136 = 21;
    var_144 = 8802641224559852288;
    var_152 = 56;
    pri = fun_2B10(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 5;
    var_168 = 8;
    pri = fun_0060(var_160)
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 6;
    var_224 = arg_0;
    var_232 = 56;
    pri = fun_2B10(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 20;
    var_248 = 8;
    pri = fun_0060(var_240)
// lab_B8D8
    var_8 = 1;
    var_16 = 0;
    var_24 = 33176;
    var_32 = 15;
    var_40 = 32;
    pri = fun_0388(var_32, var_24, var_16, var_8)
    pri = arg_1;
    OP_JZER lab_B940
    var_48 = 0;
    pri = fun_A088()
// lab_B940
    var_8 = 0;
    pri = fun_03F8()
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_1008(var_16)
    pri = CallPokemonCenterHealEvent_()
    var_32 = 1;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_AFC0(var_40, var_32)
    var_56 = 1;
    var_64 = -1;
    var_72 = -1;
    var_80 = 3;
    var_88 = 0;
    var_96 = 22;
    var_104 = 8802641224559852288;
    var_112 = 56;
    pri = fun_2B10(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = -1;
    var_136 = -1;
    var_144 = 3;
    var_152 = 0;
    var_160 = 7;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_2B10(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 33664;
    var_192 = 15;
    var_200 = 16;
    pri = fun_0328(var_192, var_184)
    var_208 = 0;
    pri = fun_03F8()
    var_216 = arg_0;
    var_224 = 8;
    pri = fun_0E08(var_216)
    pri = arg_1;
    OP_JZER lab_BAF0
    var_232 = 0;
    pri = fun_A138()
// lab_BAF0
    var_8 = 5;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13F8(var_16, var_8)
    var_32 = 1;
    var_40 = 0;
    var_48 = 16;
    pri = fun_26F8(var_40, var_32)
    var_56 = 0;
    var_64 = 0;
    pri = PokePartyGetCount(var_64, var_56)
    var_72 = pri;
    var_80 = 1;
    pri = PokeBoxGetCount(var_80)
    OP_POP_ALT 
    OP_ADD 
    alt = 2;
    OP_JSLESS lab_BC20
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = -246495207996343202;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1E50(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JUMP lab_BC78
// lab_BC20
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -246493008973086780;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_BC78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E08(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_2110(var_24)
    pri = 0;
    return pri;
}
// fun_BCC8
fun_BCC8() {
    var_8 = 0;
    pri = fun_A3A8()
    var_24 = 33880;
    pri = GetCharaUniqueHashFromNameHash(var_24)
    var_8 = pri;
    var_32 = 1;
    var_40 = 180;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 24;
    pri = fun_09D0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 1;
    var_88 = -1;
    var_96 = 8802641224559852288;
    var_104 = var_8;
    var_112 = 40;
    pri = fun_1360(var_104, var_96, var_88, var_80, var_72)
    var_120 = 33664;
    var_128 = 10;
    var_136 = 16;
    pri = fun_0328(var_128, var_120)
    var_144 = 0;
    pri = fun_03F8()
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    var_192 = 8335812058147818953;
    var_200 = var_8;
    var_208 = 56;
    pri = fun_1E50(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_2110(var_216)
    var_232 = 0;
    pri = fun_21D0()
    var_240 = 0;
    var_248 = var_8;
    var_256 = 16;
    pri = fun_B728(var_248, var_240)
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    var_304 = -6358625830923765518;
    var_312 = var_8;
    var_320 = 56;
    pri = fun_1E50(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_2110(var_328)
    var_344 = 0;
    pri = fun_21D0()
    var_352 = -1;
    var_360 = var_8;
    var_368 = 16;
    pri = fun_13B8(var_360, var_352)
    pri = 0;
    return pri;
}
// fun_BF80
fun_BF80() {
    var_8 = 0;
    pri = fun_A3A8()
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    var_40 = -965260324886180608;
    var_48 = 24;
    pri = fun_09D0(var_40, var_32, var_24)
    var_56 = 1;
    var_64 = 1;
    var_72 = -90;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 869;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 1909;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 8802641224559852288;
    var_128 = 48;
    pri = fun_0978(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 0;
    var_152 = -965260324886180608;
    var_160 = 24;
    pri = fun_8758(var_152, var_144, var_136)
    var_168 = -965260324886180608;
    var_176 = 8;
    pri = fun_0E08(var_168)
    var_184 = 1;
    var_192 = 1;
    var_200 = -1;
    var_208 = -1;
    var_216 = 0;
    var_224 = 6;
    var_232 = -965260324886180608;
    var_240 = 56;
    pri = fun_46F0(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 3;
    var_280 = 0;
    var_288 = 20;
    var_296 = 8802641224559852288;
    var_304 = 56;
    pri = fun_2B10(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = -965260324886180608;
    var_320 = 8;
    pri = fun_0E08(var_312)
    var_328 = 33664;
    var_336 = 8;
    var_344 = 16;
    pri = fun_0328(var_336, var_328)
    var_352 = 0;
    pri = fun_03F8()
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C -8162811748709075195, -965260324886180608
    var_400 = 56;
    pri = fun_1E50(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_2110(var_408)
    var_424 = 0;
    pri = fun_21D0()
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_0E08(var_432)
    var_448 = 1;
    var_456 = 0;
    var_464 = 33176;
    var_472 = 8;
    var_480 = 32;
    pri = fun_0388(var_472, var_464, var_456, var_448)
    var_488 = 0;
    pri = fun_03F8()
    var_496 = 1;
    var_504 = 3;
    var_512 = 0;
    var_520 = 6;
    var_528 = -965260324886180608;
    var_536 = 40;
    pri = fun_6A28(var_528, var_520, var_512, var_504, var_496)
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    var_544 = 10;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 33664;
    var_568 = 30;
    var_576 = 16;
    pri = fun_0328(var_568, var_560)
    var_584 = 0;
    pri = fun_03F8()
    var_592 = 1;
    var_600 = -1;
    var_608 = -1;
    var_616 = 3;
    var_624 = 0;
    var_632 = 0;
    var_640 = -965260324886180608;
    var_648 = 56;
    pri = fun_2B10(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 0;
    var_664 = 3;
    var_672 = 0;
    var_680 = 100;
    var_688 = -1;
    OP_PUSH2_C -8162815047243959828, -965260324886180608
    var_696 = 56;
    pri = fun_1E50(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 1;
    var_712 = 8;
    pri = fun_2110(var_704)
    var_720 = 0;
    pri = fun_21D0()
    var_728 = -965260324886180608;
    var_736 = 8;
    pri = fun_0E08(var_728)
    pri = 0;
    return pri;
}
// fun_C520
fun_C520() {
    var_8 = 0;
    pri = fun_A3A8()
    var_16 = 33936;
    var_24 = 8;
    pri = fun_2410(var_16)
    var_32 = 0;
    pri = fun_2448()
    var_48 = 6910712898869243;
    pri = WorkGet(var_48)
    var_8 = pri;
    var_56 = var_8;
    var_64 = 8;
    pri = fun_CA48(var_56)
    var_72 = 33664;
    var_80 = 8;
    var_88 = 16;
    pri = fun_0328(var_80, var_72)
    var_96 = 0;
    pri = fun_03F8()
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C -5510181008312211822, -4242657469657360075
    var_144 = 56;
    pri = fun_1E50(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2110(var_152)
    var_168 = 0;
    pri = fun_21D0()
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 2;
    var_224 = -4242657469657360075;
    var_232 = 56;
    pri = fun_2B10(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 15;
    var_248 = 8;
    pri = fun_0060(var_240)
    var_256 = 1;
    var_264 = 1;
    var_272 = 16;
    pri = fun_A1E8(var_264, var_256)
    var_280 = -4242657469657360075;
    var_288 = 8;
    pri = fun_0E08(var_280)
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 100;
    var_328 = -1;
    OP_PUSH2_C -7065178234587331722, -4242657469657360075
    var_336 = 56;
    pri = fun_1F00(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_2110(var_344)
    var_360 = 0;
    pri = fun_21D0()
    pri = var_8;
    OP_EQ_P_C_PRI 141
    OP_JZER lab_C9A8
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = -60;
    pri = float(var_392)
    var_400 = pri;
    var_408 = -4242657469657360075;
    var_416 = 40;
    pri = fun_0B58(var_408, var_400, var_392, var_384, var_376)
    var_424 = -4242657469657360075;
    var_432 = 8;
    pri = fun_0C00(var_424)
    var_440 = 1;
    var_448 = 0;
    var_456 = 0;
    var_464 = 60;
    OP_PUSH2_C 4611686018427387904, -4242657469657360075
    var_472 = 48;
    pri = fun_0B00(var_464, var_456, var_448, var_440, var_432, var_424)
    var_480 = 15;
    var_488 = 8;
    pri = fun_0060(var_480)
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    var_520 = -60;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 8802641224559852288;
    var_544 = 40;
    pri = fun_0B58(var_536, var_528, var_520, var_512, var_504)
    var_552 = -4242657469657360075;
    var_560 = 8;
    pri = fun_0C00(var_552)
// lab_C9A8
    var_8 = 0;
    pri = fun_24E8()
    var_16 = var_8;
    var_24 = 8;
    pri = fun_CD98(var_16)
    pri = var_8;
    OP_EQ_P_C_PRI 141
    OP_JZER lab_CA30
    OP_PUSH2_C -4242657469657360075, 1936207237021580040
    pri = SetBamiriInfoToChara(var_24, var_16)
// lab_CA30
    pri = 0;
    return pri;
}
// fun_CA48
fun_CA48() {
    pri = arg_0;
    OP_EQ_P_C_PRI 141
    OP_JZER lab_CB38
    var_8 = 1;
    var_16 = 1;
    OP_PUSH3_C 4671945852699279360, 4668591132771772006, 8802641224559852288
    var_24 = 40;
    pri = fun_0928(var_16, var_8, var_0, var_-8, var_-16)
    var_32 = 5;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C -4587338432941916160, 4671935407338815488, 4668511528129921024, -4242657469657360075
    var_64 = 48;
    pri = fun_0978(var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_CD00
// lab_CB38
    pri = arg_0;
    OP_EQ_P_C_PRI 143
    OP_JZER lab_CC28
    var_8 = 1;
    var_16 = 1;
    var_24 = 4672260313024823296;
    var_32 = 11615;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0928(var_48, var_40, var_32, var_24, var_16)
    var_64 = 5;
    var_72 = 8;
    pri = fun_0060(var_64)
    OP_PUSH2_C -4242657469657360075, 1936207237021580040
    pri = SetBamiriInfoToChara(var_72, var_64)
    OP_JUMP lab_CD00
// lab_CC28
    var_8 = 1;
    var_16 = 1;
    var_24 = 25470;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 8310;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0928(var_56, var_48, var_40, var_32, var_24)
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
    OP_PUSH2_C -4242657469657360075, 1936208336533208251
    pri = SetBamiriInfoToChara(var_80, var_72)
// lab_CD00
    pri = FieldCameraClearDelay()
    var_8 = 1;
    OP_PUSH2_C -4242657469657360075, 8802641224559852288
    var_16 = 24;
    pri = fun_0A10(var_8, var_0, var_-8)
    var_24 = 1;
    OP_PUSH2_C 8802641224559852288, -4242657469657360075
    var_32 = 24;
    pri = fun_0A10(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_CD98
fun_CD98() {
    pri = arg_0;
    OP_EQ_P_C_PRI 141
    OP_JZER lab_CE30
    var_8 = 10;
    var_16 = -7620394439834451339;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 5485305711447580246;
    pri = WorkSet(var_32, var_24)
    OP_JUMP lab_CF20
// lab_CE30
    pri = arg_0;
    OP_EQ_P_C_PRI 143
    OP_JZER lab_CEC0
    var_8 = 10;
    var_16 = -7620394439834451339;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 5485305711447580246;
    pri = WorkSet(var_32, var_24)
    OP_JUMP lab_CF20
// lab_CEC0
    var_8 = 10;
    var_16 = -7620394439834451339;
    pri = WorkSet(var_16, var_8)
    var_24 = 10;
    var_32 = 5485305711447580246;
    pri = WorkSet(var_32, var_24)
// lab_CF20
    pri = 0;
    return pri;
}
// fun_CF30
fun_CF30() {
    var_8 = 0;
    pri = fun_A3A8()
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    var_16 = 9010327285021969031;
    pri = FlagGet(var_16)
    OP_JZER lab_D010
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 8662402019183930412;
    pri = GlobalCall(var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
// lab_D010
    var_8 = 1;
    var_16 = 1;
    var_24 = 4080;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 3450;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0928(var_56, var_48, var_40, var_32, var_24)
    pri = FieldCameraClearDelay()
    var_72 = 33664;
    var_80 = 8;
    var_88 = 16;
    pri = fun_0328(var_80, var_72)
    var_96 = 0;
    pri = fun_03F8()
    pri = 0;
    return pri;
}
// fun_D100
fun_D100() {
    var_8 = 0;
    pri = fun_A3A8()
    var_16 = 34152;
    var_24 = 8;
    pri = fun_2410(var_16)
    var_32 = 0;
    pri = fun_2448()
    OP_CONST_S -8, 3285634109835096384
    var_48 = 1;
    var_56 = 1;
    var_64 = 180;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 4375;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 1990;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 8802641224559852288;
    var_120 = 48;
    pri = fun_0978(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0060(var_128)
    pri = FieldCameraClearDelay()
    var_144 = 33664;
    var_152 = 8;
    var_160 = 16;
    pri = fun_0328(var_152, var_144)
    var_168 = 0;
    pri = fun_03F8()
    var_176 = 1;
    var_184 = 1;
    var_192 = 0;
    var_200 = 1;
    var_208 = 1;
    var_216 = var_8;
    var_224 = 48;
    pri = fun_89B0(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = 3170778425644604431;
    var_280 = var_8;
    var_288 = 56;
    pri = fun_1F00(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_2110(var_296)
    var_312 = 0;
    pri = fun_21D0()
    var_320 = 1;
    var_328 = 3;
    var_336 = 0;
    var_344 = 2;
    var_352 = var_8;
    var_360 = 40;
    pri = fun_6A28(var_352, var_344, var_336, var_328, var_320)
    var_368 = var_8;
    var_376 = 8;
    pri = fun_0E08(var_368)
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 2;
    var_432 = var_8;
    var_440 = 56;
    pri = fun_2B10(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 15;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 1;
    var_472 = 1;
    var_480 = 16;
    pri = fun_A1E8(var_472, var_464)
    var_488 = var_8;
    var_496 = 8;
    pri = fun_0E08(var_488)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    var_544 = 3170779525156232642;
    var_552 = var_8;
    var_560 = 56;
    pri = fun_1F00(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 8;
    pri = fun_2110(var_568)
    var_584 = 0;
    pri = fun_21D0()
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    var_616 = var_8;
    var_624 = 32;
    pri = fun_8B70(var_616, var_608, var_600, var_592)
    var_632 = 0;
    pri = fun_24E8()
    pri = 0;
    return pri;
}
// fun_D588
fun_D588() {
    var_8 = 0;
    pri = fun_A3A8()
    var_16 = 34304;
    var_24 = 8;
    pri = fun_2410(var_16)
    var_32 = 0;
    pri = fun_2448()
    OP_CONST_S -8, -4725026926524766763
    var_48 = 1;
    var_56 = 1;
    var_64 = 180;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 15520;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 8120;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 8802641224559852288;
    var_120 = 48;
    pri = fun_0978(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0060(var_128)
    pri = FieldCameraClearDelay()
    var_144 = 33664;
    var_152 = 8;
    var_160 = 16;
    pri = fun_0328(var_152, var_144)
    var_168 = 0;
    pri = fun_03F8()
    var_176 = 1;
    var_184 = 1;
    var_192 = 0;
    var_200 = 1;
    var_208 = 1;
    var_216 = var_8;
    var_224 = 48;
    pri = fun_89B0(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = -2974867007816524616;
    var_280 = var_8;
    var_288 = 56;
    pri = fun_1F00(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_2110(var_296)
    var_312 = 0;
    pri = fun_21D0()
    var_320 = 1;
    var_328 = 3;
    var_336 = 0;
    var_344 = 2;
    var_352 = var_8;
    var_360 = 40;
    pri = fun_6A28(var_352, var_344, var_336, var_328, var_320)
    var_368 = var_8;
    var_376 = 8;
    pri = fun_0E08(var_368)
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 2;
    var_432 = var_8;
    var_440 = 56;
    pri = fun_2B10(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 15;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 1;
    var_472 = 1;
    var_480 = 16;
    pri = fun_A1E8(var_472, var_464)
    var_488 = var_8;
    var_496 = 8;
    pri = fun_0E08(var_488)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    var_544 = -2974863709281639983;
    var_552 = var_8;
    var_560 = 56;
    pri = fun_1F00(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 8;
    pri = fun_2110(var_568)
    var_584 = 0;
    pri = fun_21D0()
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    var_616 = var_8;
    var_624 = 32;
    pri = fun_8B70(var_616, var_608, var_600, var_592)
    var_632 = 0;
    pri = fun_24E8()
    pri = 0;
    return pri;
}
// fun_DA10
fun_DA10() {
    pri = 0;
    return pri;
}
// fun_DA28
fun_DA28() {
    pri = 0;
    return pri;
}
// fun_DA40
fun_DA40() {
    pri = IsPlayerInsideWorld()
    OP_JNZ lab_DAA0
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
// lab_DAA0
    var_8 = 34456;
    pri = SoundPostEvent(var_8)
    var_24 = 34600;
    pri = GetCharaUniqueHashFromNameHash(var_24)
    var_8 = pri;
    var_32 = 1;
    var_40 = 34632;
    var_48 = var_8;
    var_56 = 24;
    pri = fun_0D90(var_48, var_40, var_32)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    pri = GetTargetFieldObjectID()
    var_96 = pri;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0BA8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = 7324697295242533108;
    pri = GetTargetFieldObjectID()
    var_168 = pri;
    var_176 = 56;
    pri = fun_1E50(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = -8799907414557996815;
    pri = FlagGet(var_184)
    OP_JZER lab_DC68
    var_192 = 0;
    var_200 = 7324698394754161319;
    var_208 = 3;
    var_216 = 24;
    pri = fun_2200(var_208, var_200, var_192)
// lab_DC68
    var_8 = 6184071265140786515;
    pri = FlagGet(var_8)
    OP_JZER lab_DCD8
    var_16 = 0;
    var_24 = 7324693996707648475;
    var_32 = 1;
    var_40 = 24;
    pri = fun_2200(var_32, var_24, var_16)
// lab_DCD8
    var_8 = 4668685613554153179;
    pri = FlagGet(var_8)
    OP_JZER lab_DD48
    var_16 = 0;
    var_24 = 7324700593777417741;
    var_32 = 0;
    var_40 = 24;
    pri = fun_2200(var_32, var_24, var_16)
// lab_DD48
    var_8 = 3380472944985996827;
    pri = FlagGet(var_8)
    OP_JZER lab_DDB8
    var_16 = 0;
    var_24 = 7324699494265789530;
    var_32 = 2;
    var_40 = 24;
    pri = fun_2200(var_32, var_24, var_16)
// lab_DDB8
    var_8 = 0;
    var_16 = 7324692897196020264;
    var_24 = 4;
    var_32 = 24;
    pri = fun_2200(var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 32;
    pri = fun_22E8(var_72, var_64, var_56, var_48)
    var_16 = pri;
    var_88 = 0;
    pri = fun_21D0()
    pri = var_16;
    switch (pri) {
// switch_E4E8
        case default:
        {
// switch_E4E8_case_default
            var_8 = 8802641224559852288;
            var_16 = 8;
            pri = fun_0C00(var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_E4E8_case_0x0
            var_8 = -1331986221196924958;
            pri = FlagGet(var_8)
            OP_JZER lab_DED0
            var_16 = 1;
            var_24 = 8;
            pri = fun_E580(var_16)
            OP_JUMP lab_DF18
// lab_DED0
            var_8 = 0;
            var_16 = 8;
            pri = fun_E580(var_8)
            var_24 = -1331986221196924958;
            pri = FlagSet(var_24)
// lab_DF18
            pri = CallPokeJob()
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 712783792361352693;
            pri = GetTargetFieldObjectID()
            var_56 = pri;
            var_64 = 56;
            pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2110(var_72)
            var_88 = 0;
            pri = fun_21D0()
            OP_JUMP switch_E4E8_case_default
        }
        case 0x1:
        {
// switch_E4E8_case_0x1
            var_8 = 0;
            pri = fun_E880()
            OP_JUMP switch_E4E8_case_default
        }
        case 0x2:
        {
// switch_E4E8_case_0x2
            var_8 = 7120222739012805786;
            pri = FlagGet(var_8)
            OP_JZER lab_E118
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 4628228860687853771;
            pri = GetTargetFieldObjectID()
            var_64 = pri;
            var_72 = 56;
            pri = fun_1E50(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_2110(var_80)
            var_96 = 0;
            pri = fun_21D0()
            var_104 = 7120222739012805786;
            pri = FlagReset(var_104)
// lab_E118
            pri = CallTrainerLisenceEdit()
            var_16 = 0;
            var_24 = 3;
            var_32 = 16;
            pri = fun_0160(var_24, var_16)
            var_24 = pri;
            pri = var_24;
            switch (pri) {
// switch_E380
                case default:
                {
// switch_E380_case_default
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    var_48 = -4883927566255010627;
                    pri = GetTargetFieldObjectID()
                    var_56 = pri;
                    var_64 = 56;
                    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_E3C8
// lab_E3C8
                    var_8 = 1;
                    var_16 = 8;
                    pri = fun_2110(var_8)
                    var_24 = 0;
                    pri = fun_21D0()
                    OP_JUMP switch_E4E8_case_default
                }
                case 0x0:
                {
// switch_E380_case_0x0
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    var_48 = -4883927566255010627;
                    pri = GetTargetFieldObjectID()
                    var_56 = pri;
                    var_64 = 56;
                    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_E3C8
                }
                case 0x1:
                {
// switch_E380_case_0x1
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    var_48 = -3210383190290792394;
                    pri = GetTargetFieldObjectID()
                    var_56 = pri;
                    var_64 = 56;
                    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_E3C8
                }
                case 0x2:
                {
// switch_E380_case_0x2
                    var_8 = 0;
                    var_16 = 3;
                    var_24 = 0;
                    var_32 = 100;
                    var_40 = -1;
                    var_48 = -3210382090779164183;
                    pri = GetTargetFieldObjectID()
                    var_56 = pri;
                    var_64 = 56;
                    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
                    OP_JUMP lab_E3C8
                }
            }
        }
        case 0x3:
        {
// switch_E4E8_case_0x3
            pri = CallBox()
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -4265191331375535169;
            pri = GetTargetFieldObjectID()
            var_56 = pri;
            var_64 = 56;
            pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2110(var_72)
            var_88 = 0;
            pri = fun_21D0()
            OP_JUMP switch_E4E8_case_default
        }
    }
}
// fun_E580
fun_E580() {
    pri = 34736;
    OP_ADDR_ALT -88
    OP_MOVS 88
    OP_CONST_S -96, 10
    OP_JUMP lab_E5F8
// lab_E5F8
    pri = var_96;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_E860
    OP_ADDR_P_ALT -88
    pri = var_96;
    OP_LIDX_P_B 3
    var_8 = pri;
    pri = FlagGet(var_8)
    OP_JZER lab_E850
    var_16 = -1400911191422013782;
    pri = WorkGet(var_16)
    var_24 = pri;
    pri = var_96;
    OP_ADD_P_C 1
    OP_POP_ALT 
    OP_JSLEQ lab_E850
    pri = arg_0;
    OP_JZER lab_E810
    var_32 = 3;
    var_40 = 34824;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    var_56 = 24;
    pri = fun_0D90(var_48, var_40, var_32)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = 4628228860687853771;
    pri = GetTargetFieldObjectID()
    var_112 = pri;
    var_120 = 56;
    pri = fun_1E50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_2110(var_128)
    var_144 = 0;
    pri = fun_21D0()
    var_152 = 0;
    var_160 = 34864;
    pri = GetTargetFieldObjectID()
    var_168 = pri;
    var_176 = 24;
    pri = fun_0D90(var_168, var_160, var_152)
// lab_E860
    pri = 0;
    return pri;
// lab_E850
    OP_JUMP lab_E5F0
// lab_E5F0
    OP_DEC_P_S -96
// lab_E810
    pri = var_96;
    OP_ADD_P_C 1
    var_8 = pri;
    var_16 = -1400911191422013782;
    pri = WorkSet(var_16, var_8)
}
// fun_E880
fun_E880() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -4486887104185345515;
    pri = FlagGet(var_16)
    OP_JZER lab_E990
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = -4142944179290714089;
    var_72 = var_8;
    var_80 = 56;
    pri = fun_1E50(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 8;
    pri = fun_2110(var_88)
    var_104 = 0;
    pri = fun_21D0()
    pri = 0;
    return pri;
// lab_E990
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4141987604174359744;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 48;
    pri = fun_2358(var_112, var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_EAE8
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    var_168 = -4142945278802342300;
    var_176 = var_8;
    var_184 = 56;
    pri = fun_1E50(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_2110(var_192)
    var_208 = 0;
    pri = fun_21D0()
    pri = 0;
    return pri;
// lab_EAE8
    var_8 = 0;
    pri = fun_21D0()
    OP_ZERO_P_S -16
    pri = 0;
    OP_ADDR_ALT -56
    OP_FILL 40
    pri = IsFixIDLottery()
    OP_JZER lab_ED90
    pri = GetFixedIDLottery()
    var_16 = pri;
    pri = CommandNOP()
    pri = var_16;
    var_64 = pri;
    OP_ADDR_P_PRI -56
    var_72 = pri;
    pri = 10000;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_POP_ALT 
    OP_STOR_I 
    pri = 10000;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_MOVE_PRI 
    var_64 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 8
    var_80 = pri;
    pri = 1000;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_POP_ALT 
    OP_STOR_I 
    pri = 1000;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_MOVE_PRI 
    var_64 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 16
    var_88 = pri;
    pri = 100;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_POP_ALT 
    OP_STOR_I 
    pri = 100;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_MOVE_PRI 
    var_64 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 24
    var_96 = pri;
    pri = 10;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_POP_ALT 
    OP_STOR_I 
    pri = 10;
    OP_LOAD_P_S_ALT -64
    OP_SDIV_ALT 
    OP_MOVE_PRI 
    var_64 = pri;
    OP_ADDR_P_PRI -56
    OP_ADD_P_C 32
    OP_MOVE_ALT 
    pri = var_64;
    OP_STOR_I 
    OP_JUMP lab_EF68
// lab_ED90
    OP_ZERO_P_S -64
    OP_JUMP lab_EDB8
// lab_EDB8
    pri = var_64;
    alt = 5;
    OP_JSGEQ lab_EF60
    OP_ADDR_P_ALT -56
    pri = var_64;
    OP_IDXADDR_P_B 3
    var_8 = pri;
    var_16 = 1;
    var_24 = 9;
    var_32 = 16;
    pri = fun_0160(var_24, var_16)
    OP_POP_ALT 
    OP_STOR_I 
    OP_CONST_S -72, 1
    pri = var_64;
    alt = 5;
    OP_SUB_ALT 
    OP_ADD_P_C -1
    var_80 = pri;
    OP_JUMP lab_EE98
// lab_EF60
// lab_EE98
    pri = var_80;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_EEE8
    pri = var_72;
    OP_SMUL_P_C 10
    var_72 = pri;
    OP_JUMP lab_EE90
// lab_EEE8
    pri = var_16;
    arg_-3 = pri;
    OP_ADDR_P_ALT -56
    pri = var_64;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = var_72;
    OP_SMUL 
    OP_POP_ALT 
    OP_ADD 
    var_16 = pri;
    OP_JUMP lab_EDB0
// lab_EDB0
    OP_INC_P_S -64
// lab_EE90
    OP_DEC_P_S -80
// lab_EF68
    OP_ZERO_P_S -64
    OP_ZERO_P_S -72
    OP_ZERO_P_S -80
    OP_ZERO_P_S -88
    OP_ZERO_P_S -96
    OP_ZERO_P_S -104
    OP_JUMP lab_EFE0
// lab_EFE0
    pri = var_104;
    var_8 = pri;
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    OP_POP_ALT 
    OP_JSLEQ lab_F1A0
    var_32 = 0;
    var_40 = 8;
    var_48 = var_104;
    pri = PokePartyGetParam(var_48, var_40, var_32)
    OP_JZER lab_F080
    OP_JUMP lab_EFD8
// lab_F1A0
    OP_ZERO_P_S -104
    OP_JUMP lab_F1D0
// lab_F1D0
    pri = var_104;
    var_8 = pri;
    pri = PokeBoxGetTrayNum()
    OP_POP_ALT 
    OP_JSLEQ lab_F450
    OP_ZERO_P_S -112
    OP_JUMP lab_F238
// lab_F450
    OP_ZERO_P_S -104
    OP_ZERO_P_S -112
    OP_LOAD_S_BOTH -64, -72
    OP_JSLESS lab_F4D8
    OP_CONST_S -104, 1
    pri = var_64;
    var_112 = pri;
    OP_JUMP lab_F4F0
// lab_F4D8
    OP_ZERO_P_S -104
    pri = var_72;
    var_112 = pri;
// lab_F4F0
    OP_ZERO_P_S -120
    pri = var_112;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_F540
    OP_CONST_S -120, 1
// lab_F540
    OP_ZERO_P_S -128
    OP_ZERO_P_S -136
    OP_ZERO_P_S -144
    OP_ZERO_P_S -152
    pri = var_120;
    OP_JZER switch_F828_case_default
    pri = var_104;
    OP_JZER lab_F5D8
    OP_CONST_S -128, -4141983206127846900
    OP_JUMP lab_F5F0
// switch_F828_case_default
    var_8 = -4486887104185345515;
    pri = FlagSet(var_8)
    var_16 = 0;
    var_24 = 0;
    var_32 = 16;
    pri = fun_9B60(var_24, var_16)
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    var_80 = -4141984305639475111;
    var_88 = var_8;
    var_96 = 56;
    pri = fun_1E50(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 8;
    pri = fun_2110(var_104)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = 0;
    var_160 = -4141985405151103322;
    var_168 = var_8;
    var_176 = 56;
    pri = fun_1E50(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_2110(var_184)
    var_200 = 2;
    var_208 = 5;
    var_216 = var_16;
    var_224 = 0;
    pri = WordSetNumber(var_224, var_216, var_208, var_200)
    var_232 = 1;
    var_240 = 8;
    pri = fun_2518(var_232)
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    var_288 = -4141982106616218689;
    var_296 = var_8;
    var_304 = 56;
    pri = fun_1E50(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_2110(var_312)
    var_328 = 0;
    pri = fun_21D0()
    var_336 = 5;
    var_344 = 8;
    pri = fun_0060(var_336)
    pri = var_120;
    OP_JZER lab_FD90
    pri = var_152;
    OP_JZER lab_FB58
    var_352 = 34904;
    pri = SoundPostEvent(var_352)
    var_360 = 0;
    var_368 = 8;
    pri = fun_04B8(var_360)
    OP_JUMP lab_FB98
// lab_FD90
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4142941980267457667;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2110(var_72)
// lab_FB58
    var_8 = 35064;
    pri = SoundPostEvent(var_8)
    var_16 = 0;
    var_24 = 8;
    pri = fun_04B8(var_16)
// lab_FB98
    pri = var_104;
    OP_JZER lab_FBE8
    var_8 = var_88;
    var_16 = 1;
    var_24 = 16;
    pri = fun_2658(var_16, var_8)
    OP_JUMP lab_FC18
// lab_FBE8
    var_8 = var_96;
    var_16 = var_80;
    var_24 = 1;
    var_32 = 24;
    pri = fun_26A8(var_24, var_16, var_8)
// lab_FC18
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = var_128;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2110(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = var_136;
    var_136 = var_8;
    var_144 = 56;
    pri = fun_1E50(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2110(var_152)
    var_168 = 0;
    pri = fun_21D0()
    var_176 = 2;
    var_184 = 1;
    var_192 = 9;
    var_200 = 1;
    var_208 = var_144;
    var_216 = 40;
    pri = fun_9028(var_208, var_200, var_192, var_184, var_176)
    var_224 = var_144;
    var_232 = 2;
    var_240 = 35224;
    pri = PokeMemoryCheckParty(var_240, var_232, var_224)
    OP_JUMP lab_FE08
// lab_FE08
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4142945278802342300;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2110(var_72)
    var_88 = 0;
    pri = fun_21D0()
    pri = 0;
    return pri;
// lab_F5D8
    OP_CONST_S -128, 8160368977458218807
// lab_F5F0
    pri = var_112;
    switch (pri) {
// switch_F828
        case default:
        {
// switch_F828_case_default
            var_8 = -4486887104185345515;
            pri = FlagSet(var_8)
            var_16 = 0;
            var_24 = 0;
            var_32 = 16;
            pri = fun_9B60(var_24, var_16)
            var_40 = 0;
            var_48 = 3;
            var_56 = 0;
            var_64 = 100;
            var_72 = -1;
            var_80 = -4141984305639475111;
            var_88 = var_8;
            var_96 = 56;
            pri = fun_1E50(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 1;
            var_112 = 8;
            pri = fun_2110(var_104)
            var_120 = 0;
            var_128 = 3;
            var_136 = 0;
            var_144 = 100;
            var_152 = 0;
            var_160 = -4141985405151103322;
            var_168 = var_8;
            var_176 = 56;
            pri = fun_1E50(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
            var_184 = 1;
            var_192 = 8;
            pri = fun_2110(var_184)
            var_200 = 2;
            var_208 = 5;
            var_216 = var_16;
            var_224 = 0;
            pri = WordSetNumber(var_224, var_216, var_208, var_200)
            var_232 = 1;
            var_240 = 8;
            pri = fun_2518(var_232)
            var_248 = 0;
            var_256 = 3;
            var_264 = 0;
            var_272 = 100;
            var_280 = -1;
            var_288 = -4141982106616218689;
            var_296 = var_8;
            var_304 = 56;
            pri = fun_1E50(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
            var_312 = 1;
            var_320 = 8;
            pri = fun_2110(var_312)
            var_328 = 0;
            pri = fun_21D0()
            var_336 = 5;
            var_344 = 8;
            pri = fun_0060(var_336)
            pri = var_120;
            OP_JZER lab_FD90
            pri = var_152;
            OP_JZER lab_FB58
            var_352 = 34904;
            pri = SoundPostEvent(var_352)
            var_360 = 0;
            var_368 = 8;
            pri = fun_04B8(var_360)
            OP_JUMP lab_FB98
        }
        case 0x1:
        {
// switch_F828_case_0x1
            OP_CONST_S -136, -4142943079779085878
            OP_CONST_S -144, 33
            var_8 = 1;
            var_16 = var_144;
            pri = ItemAdd(var_16, var_8)
            OP_JUMP switch_F828_case_default
        }
        case 0x2:
        {
// switch_F828_case_0x2
            OP_CONST_S -136, -4141978808081334056
            OP_CONST_S -144, 51
            var_8 = 1;
            var_16 = var_144;
            pri = ItemAdd(var_16, var_8)
            OP_JUMP switch_F828_case_default
        }
        case 0x3:
        {
// switch_F828_case_0x3
            OP_CONST_S -136, -4141977708569705845
            OP_CONST_S -144, 53
            var_8 = 1;
            var_16 = var_144;
            pri = ItemAdd(var_16, var_8)
            OP_JUMP switch_F828_case_default
        }
        case 0x4:
        {
// switch_F828_case_0x4
            OP_CONST_S -136, -4141981007104590478
            OP_CONST_S -144, 50
            var_8 = 1;
            var_16 = var_144;
            pri = ItemAdd(var_16, var_8)
            OP_JUMP switch_F828_case_default
        }
        case 0x5:
        {
// switch_F828_case_0x5
            OP_CONST_S -136, -4141979907592962267
            OP_CONST_S -144, 1
            var_8 = 1;
            var_16 = var_144;
            pri = ItemAdd(var_16, var_8)
            OP_CONST_S -152, 1
            OP_JUMP switch_F828_case_default
        }
    }
// lab_F238
    pri = var_112;
    alt = 30;
    OP_JSGEQ lab_F438
    var_8 = 0;
    var_16 = 8;
    var_24 = var_112;
    var_32 = var_104;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    OP_JZER lab_F2B0
    OP_JUMP lab_F230
// lab_F438
    OP_JUMP lab_F1C8
// lab_F1C8
    OP_INC_P_S -104
// lab_F2B0
    var_8 = 0;
    var_16 = var_112;
    var_24 = var_104;
    pri = PokeBoxIsExist(var_24, var_16, var_8)
    OP_JNZ lab_F300
    OP_JUMP lab_F230
// lab_F300
    var_16 = 0;
    var_24 = 57;
    var_32 = var_112;
    var_40 = var_104;
    pri = PokeBoxGetParam(var_40, var_32, var_24, var_16)
    var_120 = pri;
    pri = 0;
    OP_ADDR_ALT -168
    OP_FILL 48
    var_104 = 6;
    OP_PUSH_P_ADR -168
    var_112 = var_120;
    var_120 = 5;
    OP_PUSH_P_ADR -56
    var_128 = 40;
    pri = fun_FEB0(var_120, var_112, var_104, var_96, var_88)
    var_176 = pri;
    OP_LOAD_S_BOTH -176, -72
    OP_JSLEQ lab_F420
    pri = var_176;
    var_72 = pri;
    pri = var_104;
    var_80 = pri;
    pri = var_112;
    var_96 = pri;
// lab_F420
    OP_JUMP lab_F230
// lab_F230
    OP_INC_P_S -112
// lab_F080
    var_16 = 0;
    var_24 = 57;
    var_32 = var_104;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_112 = pri;
    pri = 0;
    OP_ADDR_ALT -160
    OP_FILL 48
    var_96 = 6;
    OP_PUSH_P_ADR -160
    var_104 = var_112;
    var_112 = 5;
    OP_PUSH_P_ADR -56
    var_120 = 40;
    pri = fun_FEB0(var_112, var_104, var_96, var_88, var_80)
    var_168 = pri;
    OP_LOAD_S_BOTH -168, -64
    OP_JSLEQ lab_F188
    pri = var_168;
    var_64 = pri;
    pri = var_104;
    var_88 = pri;
// lab_F188
    OP_JUMP lab_EFD8
// lab_EFD8
    OP_INC_P_S -104
}
// fun_FEB0
fun_FEB0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_FEE0
// lab_FEE0
    OP_LOAD_S_BOTH -8, 56
    OP_JSGEQ lab_10068
    OP_CONST_S -16, 1
    OP_LOAD_S_BOTH -8, 56
    OP_SUB_ALT 
    OP_ADD_P_C -1
    var_24 = pri;
    OP_JUMP lab_FF78
// lab_10068
    OP_ZERO_P_S -8
    OP_LOAD_S_BOTH 32, 56
    OP_SUB_ALT 
    var_16 = pri;
    pri = arg_1;
    OP_ADD_P_C -1
    var_24 = pri;
    OP_JUMP lab_100E8
// lab_100E8
    pri = var_24;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_101E0
    pri = arg_3;
    var_8 = pri;
    OP_LOAD_S_BOTH -16, -24
    OP_ADD 
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_16 = pri;
    pri = arg_0;
    var_24 = pri;
    pri = var_24;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_POP_ALT 
    OP_JNEQ lab_101C0
    OP_INC_P_S -8
    OP_JUMP lab_101D0
// lab_101E0
    pri = var_8;
    return pri;
// lab_101C0
    OP_JUMP lab_101E0
// lab_101D0
    OP_JUMP lab_100E0
// lab_100E0
    OP_DEC_P_S -24
// lab_FF78
    pri = var_24;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_FFC8
    pri = var_16;
    OP_SMUL_P_C 10
    var_16 = pri;
    OP_JUMP lab_FF70
// lab_FFC8
    pri = arg_3;
    arg_-3 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    var_8 = pri;
    OP_LOAD_S_BOTH -16, 40
    OP_SDIV_ALT 
    OP_MOVE_ALT 
    pri = 10;
    OP_SDIV_ALT 
    OP_MOVE_PRI 
    OP_POP_ALT 
    OP_STOR_I 
    OP_JUMP lab_FED8
// lab_FED8
    OP_INC_P_S -8
// lab_FF70
    OP_DEC_P_S -24
}
// fun_10200
fun_10200() {
    pri = CommandNOP()
    var_16 = 35320;
    pri = GetZonePlacementHash(var_16)
    var_8 = pri;
    var_32 = 35376;
    pri = GetZonePlacementHash(var_32)
    var_16 = pri;
    var_40 = 0;
    var_48 = 8;
    pri = fun_2518(var_40)
    var_56 = 30;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 33664;
    var_80 = 8;
    var_88 = 16;
    pri = fun_0328(var_80, var_72)
    var_96 = 0;
    pri = fun_03F8()
    var_104 = 35448;
    pri = SoundPostEvent(var_104)
    var_112 = 35728;
    pri = SoundPostEvent(var_112)
    var_128 = 0;
    var_136 = 4607182418800017408;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C -4586634745500139520, -4591138345127510016
    var_168 = 0;
    var_176 = 35912;
    var_184 = 72;
    pri = fun_1438(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_24 = pri;
    var_192 = 0;
    pri = fun_A138()
    var_200 = 0;
    var_208 = 8;
    pri = fun_04B8(var_200)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    var_256 = -895080990599312114;
    var_264 = var_8;
    var_272 = 56;
    pri = fun_1E50(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = var_24;
    var_288 = 8;
    pri = fun_14A8(var_280)
    var_296 = 1;
    var_304 = 8;
    pri = fun_2110(var_296)
    var_312 = 0;
    pri = fun_21D0()
    var_320 = 1;
    var_328 = 0;
    var_336 = 4641240890982006784;
    var_344 = 0;
    var_352 = 0;
    OP_PUSH4_C 4651127699538968576, 4652253599445811200, 4607182418800017408, 8802641224559852288
    var_360 = 72;
    pri = fun_0A88(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 8802641224559852288;
    var_376 = 8;
    pri = fun_0C00(var_368)
    var_384 = 1;
    var_392 = var_16;
    var_400 = 16;
    pri = fun_0A50(var_392, var_384)
    var_408 = 36120;
    pri = SoundPostEvent(var_408)
    var_416 = 0;
    var_424 = 8;
    pri = fun_04B8(var_416)
    var_440 = -3520556893389536598;
    pri = FlagGet(var_440)
    var_32 = pri;
    pri = var_32;
    OP_JZER lab_10688
    var_448 = 0;
    var_456 = 3;
    var_464 = 0;
    var_472 = 100;
    var_480 = -1;
    var_488 = -895083189622568536;
    var_496 = var_8;
    var_504 = 56;
    pri = fun_1E50(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 8;
    pri = fun_2110(var_512)
    var_528 = 0;
    pri = fun_21D0()
// lab_10688
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -895082090110940325;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2110(var_72)
    var_88 = 0;
    pri = fun_21D0()
    var_96 = 0;
    pri = fun_A088()
    var_104 = 0;
    var_112 = 0;
    var_120 = 36280;
    pri = PokeMemoryCheckParty(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
