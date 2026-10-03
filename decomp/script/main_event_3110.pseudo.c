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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
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
// fun_0898
fun_0898() {
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
// fun_0958
fun_0958() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1578(var_8)
    OP_JZER lab_0A28
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15A8(var_24)
    OP_JNZ lab_0A28
    pri = 0;
    return pri;
// lab_0A28
    OP_JUMP lab_0A38
// lab_0A38
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A98
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A38
    pri = 0;
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B88
fun_0B88() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BD0
    pri = 0;
    return pri;
// lab_0BD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C10
// lab_0C10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1578(var_8)
    OP_JNZ lab_0C98
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C88
    pri = 0;
    return pri;
// lab_0C98
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CE0
    pri = 0;
    return pri;
// lab_0CE0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D88(var_8)
    pri = 0;
    return pri;
// lab_0D40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C10
    pri = 0;
    return pri;
// lab_0C88
    OP_JUMP lab_0CE0
}
// fun_0D88
fun_0D88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DC0
fun_0DC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E10
    pri = 0;
    return pri;
// lab_0E10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1578(var_8)
    OP_JZER lab_0F40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E68
    OP_ZERO_P_S 64
// lab_0F40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F78
    OP_CONST_S 64, 1
// lab_0F78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FB0
    OP_CONST_S 72, 1
// lab_0FB0
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
// lab_0E68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E90
    OP_ZERO_P_S 72
// lab_0E90
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
    OP_JUMP lab_1050
// lab_1050
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1120(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1198(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1278
fun_1278() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1160(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11D8(var_24)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1578(var_8)
    OP_JZER lab_1370
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
// lab_1370
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
// fun_13D8
fun_13D8() {
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
    pri = fun_12D0(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15D8
fun_15D8() {
    OP_JUMP lab_15F0
// lab_15F0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1680
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1670
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_1680
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1710
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1700
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_1710
    pri = 0;
    return pri;
// lab_1700
    OP_JUMP lab_1720
// lab_1720
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15F0
    pri = 0;
    return pri;
// lab_1670
    OP_JUMP lab_1720
}
// fun_1760
fun_1760() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_15D8(var_40)
    pri = 0;
    return pri;
}
// fun_17E8
fun_17E8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1820
fun_1820() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1848
fun_1848() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1880
fun_1880() {
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
// switch_1E98
        case default:
        {
// switch_1E98_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1EE0
// lab_1EE0
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
            OP_JNZ lab_1F88
            var_88 = 0;
            pri = fun_2258()
// lab_1F88
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E98_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A80
                case default:
                {
// switch_1A80_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AF8
// lab_1AF8
                    OP_JUMP lab_1EE0
                }
                case 0x0:
                {
// switch_1A80_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1AF8
                }
                case 0x1:
                {
// switch_1A80_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1AF8
                }
                case 0x2:
                {
// switch_1A80_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1AF8
                }
                case 0x3:
                {
// switch_1A80_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AF8
                }
                case 0x4:
                {
// switch_1A80_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1AF8
                }
                case 0x5:
                {
// switch_1A80_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1AF8
                }
            }
        }
        case 0x65:
        {
// switch_1E98_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C38
                case default:
                {
// switch_1C38_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CB0
// lab_1CB0
                    OP_JUMP lab_1EE0
                }
                case 0x0:
                {
// switch_1C38_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1CB0
                }
                case 0x1:
                {
// switch_1C38_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1CB0
                }
                case 0x2:
                {
// switch_1C38_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1CB0
                }
                case 0x3:
                {
// switch_1C38_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CB0
                }
                case 0x4:
                {
// switch_1C38_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1CB0
                }
                case 0x5:
                {
// switch_1C38_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1CB0
                }
            }
        }
        case 0x66:
        {
// switch_1E98_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1DF0
                case default:
                {
// switch_1DF0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E68
// lab_1E68
                    OP_JUMP lab_1EE0
                }
                case 0x0:
                {
// switch_1DF0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E68
                }
                case 0x1:
                {
// switch_1DF0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E68
                }
                case 0x2:
                {
// switch_1DF0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E68
                }
                case 0x3:
                {
// switch_1DF0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E68
                }
                case 0x4:
                {
// switch_1DF0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E68
                }
                case 0x5:
                {
// switch_1DF0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E68
                }
            }
        }
    }
}
// fun_1FA0
fun_1FA0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1880(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2008
fun_2008() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_20B0
    pri = 1;
    return pri;
// lab_20B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20F8
fun_20F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2148
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2008(var_8)
    arg_2 = pri;
// lab_2148
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1880(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21A8
fun_21A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1FA0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21F8
fun_21F8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_21A8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2258
fun_2258() {
    OP_JUMP lab_2270
// lab_2270
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22B0
    pri = 0;
    return pri;
// lab_22B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2270
    pri = 0;
    return pri;
}
// fun_22F0
fun_22F0() {
    var_8 = 0;
    pri = fun_2258()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_23A0
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_23A0
    pri = 0;
    return pri;
}
// fun_23B0
fun_23B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_23E0
fun_23E0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2418
fun_2418() {
    OP_JUMP lab_2430
// lab_2430
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2478
    OP_JUMP lab_24A8
    OP_JUMP lab_2498
// lab_2478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_24A8
    pri = 0;
    return pri;
// lab_2498
    OP_JUMP lab_2430
}
// fun_24B8
fun_24B8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_24E8
fun_24E8() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2548(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_26D8(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2598
fun_2598() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25E8
fun_25E8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2638
fun_2638() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26D8
fun_26D8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2728
fun_2728() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2770
fun_2770() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_27E8
fun_27E8() {
    var_8 = 0;
    pri = fun_2770()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2868
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2868
    pri = 1;
    return pri;
// lab_2868
    var_8 = 0;
    pri = fun_2770()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2898
fun_2898() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_28E8
fun_28E8() {
    OP_JUMP lab_2900
// lab_2900
    pri = EvCameraMoveWait_()
    OP_JZER lab_2938
    pri = 0;
    return pri;
// lab_2938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2900
    pri = 0;
    return pri;
}
// fun_2978
fun_2978() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_29B0
fun_29B0() {
    pri = arg_6;
    OP_JNZ lab_29E8
    var_8 = 0;
    pri = fun_1060()
// lab_29E8
    pri = arg_1;
    switch (pri) {
// switch_3F50
        case default:
        {
// switch_3F50_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_42A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_42A0
            pri = 1;
            OP_JUMP lab_42A8
// lab_42A0
            pri = 0;
// lab_42A8
            OP_JZER lab_4400
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B50(var_24, var_16)
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
            OP_JUMP lab_4460
// lab_4400
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
// lab_4460
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_44C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4520
// lab_44C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4520
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4520
            pri = arg_2;
            OP_JZER lab_4560
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4560
            var_8 = 0;
            pri = fun_10A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F50_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1:
        {
// switch_3F50_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x2:
        {
// switch_3F50_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x3:
        {
// switch_3F50_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x4:
        {
// switch_3F50_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x5:
        {
// switch_3F50_case_0x5
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0x6:
        {
// switch_3F50_case_0x6
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0x7:
        {
// switch_3F50_case_0x7
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0x8:
        {
// switch_3F50_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x9:
        {
// switch_3F50_case_0x9
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0xa:
        {
// switch_3F50_case_0xa
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0xb:
        {
// switch_3F50_case_0xb
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0xc:
        {
// switch_3F50_case_0xc
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0xd:
        {
// switch_3F50_case_0xd
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0xe:
        {
// switch_3F50_case_0xe
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0xf:
        {
// switch_3F50_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x10:
        {
// switch_3F50_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x11:
        {
// switch_3F50_case_0x11
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0x12:
        {
// switch_3F50_case_0x12
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0x13:
        {
// switch_3F50_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x14:
        {
// switch_3F50_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x15:
        {
// switch_3F50_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x16:
        {
// switch_3F50_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x17:
        {
// switch_3F50_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x18:
        {
// switch_3F50_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x19:
        {
// switch_3F50_case_0x19
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1a:
        {
// switch_3F50_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AD8(var_48, var_40)
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
            pri = fun_0DC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1b:
        {
// switch_3F50_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AD8(var_48, var_40)
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
            pri = fun_0DC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1c:
        {
// switch_3F50_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AD8(var_48, var_40)
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
            pri = fun_0DC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1d:
        {
// switch_3F50_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1e:
        {
// switch_3F50_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x1f:
        {
// switch_3F50_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x20:
        {
// switch_3F50_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x21:
        {
// switch_3F50_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x22:
        {
// switch_3F50_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x23:
        {
// switch_3F50_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x24:
        {
// switch_3F50_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x25:
        {
// switch_3F50_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x26:
        {
// switch_3F50_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x27:
        {
// switch_3F50_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x28:
        {
// switch_3F50_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
        case 0x29:
        {
// switch_3F50_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F50_case_default
        }
    }
}
// fun_4590
fun_4590() {
    pri = arg_5;
    OP_JNZ lab_45C8
    var_8 = 0;
    pri = fun_1060()
// lab_45C8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4618
    OP_CONST_S -8, -1
// lab_4618
    pri = arg_1;
    switch (pri) {
// switch_60D0
        case default:
        {
// switch_60D0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6578
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B50(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6578
            pri = 1;
            OP_JUMP lab_6580
// lab_6578
            pri = 0;
// lab_6580
            OP_JZER lab_65D0
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6828
// lab_65D0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6638
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6638
            pri = 1;
            OP_JUMP lab_6640
// lab_6638
            pri = 0;
// lab_6640
            OP_JZER lab_67C8
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B50(var_24, var_16)
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
            OP_JUMP lab_6828
// lab_67C8
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
// lab_6828
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6898
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6898
            var_8 = 0;
            pri = fun_10A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_60D0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1:
        {
// switch_60D0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2:
        {
// switch_60D0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x3:
        {
// switch_60D0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x4:
        {
// switch_60D0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x5:
        {
// switch_60D0_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D88(var_40)
            OP_JUMP switch_60D0_case_default
        }
        case 0x6:
        {
// switch_60D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x7:
        {
// switch_60D0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x8:
        {
// switch_60D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x9:
        {
// switch_60D0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0xa:
        {
// switch_60D0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0xb:
        {
// switch_60D0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0xc:
        {
// switch_60D0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0xd:
        {
// switch_60D0_case_0xd
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0xe:
        {
// switch_60D0_case_0xe
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0xf:
        {
// switch_60D0_case_0xf
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x10:
        {
// switch_60D0_case_0x10
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x11:
        {
// switch_60D0_case_0x11
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x12:
        {
// switch_60D0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x13:
        {
// switch_60D0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x14:
        {
// switch_60D0_case_0x14
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x15:
        {
// switch_60D0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x16:
        {
// switch_60D0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x17:
        {
// switch_60D0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x18:
        {
// switch_60D0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x19:
        {
// switch_60D0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1a:
        {
// switch_60D0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1b:
        {
// switch_60D0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1c:
        {
// switch_60D0_case_0x1c
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1d:
        {
// switch_60D0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1e:
        {
// switch_60D0_case_0x1e
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x1f:
        {
// switch_60D0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x20:
        {
// switch_60D0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x21:
        {
// switch_60D0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x22:
        {
// switch_60D0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x23:
        {
// switch_60D0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x24:
        {
// switch_60D0_case_0x24
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x25:
        {
// switch_60D0_case_0x25
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x26:
        {
// switch_60D0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x27:
        {
// switch_60D0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x28:
        {
// switch_60D0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x29:
        {
// switch_60D0_case_0x29
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2a:
        {
// switch_60D0_case_0x2a
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2b:
        {
// switch_60D0_case_0x2b
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2c:
        {
// switch_60D0_case_0x2c
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2d:
        {
// switch_60D0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2e:
        {
// switch_60D0_case_0x2e
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x2f:
        {
// switch_60D0_case_0x2f
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x30:
        {
// switch_60D0_case_0x30
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x31:
        {
// switch_60D0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x32:
        {
// switch_60D0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x33:
        {
// switch_60D0_case_0x33
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x34:
        {
// switch_60D0_case_0x34
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x35:
        {
// switch_60D0_case_0x35
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x36:
        {
// switch_60D0_case_0x36
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x37:
        {
// switch_60D0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x38:
        {
// switch_60D0_case_0x38
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
            pri = fun_0DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60D0_case_default
        }
        case 0x39:
        {
// switch_60D0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x3a:
        {
// switch_60D0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x3b:
        {
// switch_60D0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x3c:
        {
// switch_60D0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x3d:
        {
// switch_60D0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
        case 0x3e:
        {
// switch_60D0_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            OP_JUMP switch_60D0_case_default
        }
    }
}
// fun_68C8
fun_68C8() {
    pri = arg_4;
    OP_JNZ lab_6900
    var_8 = 0;
    pri = fun_1060()
// lab_6900
    pri = arg_1;
    switch (pri) {
// switch_7CD8
        case default:
        {
// switch_7CD8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1578(var_264)
            OP_JZER lab_82A0
            pri = arg_3;
            switch (pri) {
// switch_8248
                case default:
                {
// switch_8248_case_default
                    OP_JUMP lab_8558
// lab_8558
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_85C8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_85C8
                    var_8 = 0;
                    pri = fun_10A0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8248_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8248_case_default
                }
                case 0x2:
                {
// switch_8248_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8248_case_default
                }
                case 0x3:
                {
// switch_8248_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8248_case_default
                }
            }
// lab_82A0
            pri = arg_1;
            OP_JZER lab_82F0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_82F0
            pri = 0;
            OP_JUMP lab_82F8
// lab_82F0
            pri = 1;
// lab_82F8
            OP_JZER lab_8360
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8360
            pri = 1;
            OP_JUMP lab_8368
// lab_8360
            pri = 0;
// lab_8368
            OP_JZER lab_83B8
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8558
// lab_83B8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8420
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8558
// lab_8420
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B50(var_24, var_16)
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
// switch_7CD8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1:
        {
// switch_7CD8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2:
        {
// switch_7CD8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3:
        {
// switch_7CD8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x4:
        {
// switch_7CD8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x5:
        {
// switch_7CD8_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D88(var_40)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x6:
        {
// switch_7CD8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x7:
        {
// switch_7CD8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x8:
        {
// switch_7CD8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x9:
        {
// switch_7CD8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0xa:
        {
// switch_7CD8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0xb:
        {
// switch_7CD8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0xc:
        {
// switch_7CD8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0xd:
        {
// switch_7CD8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0xe:
        {
// switch_7CD8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0xf:
        {
// switch_7CD8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x10:
        {
// switch_7CD8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x11:
        {
// switch_7CD8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x12:
        {
// switch_7CD8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x13:
        {
// switch_7CD8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x14:
        {
// switch_7CD8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x15:
        {
// switch_7CD8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x16:
        {
// switch_7CD8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x17:
        {
// switch_7CD8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x18:
        {
// switch_7CD8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x19:
        {
// switch_7CD8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1a:
        {
// switch_7CD8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1b:
        {
// switch_7CD8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1c:
        {
// switch_7CD8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1d:
        {
// switch_7CD8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1e:
        {
// switch_7CD8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x1f:
        {
// switch_7CD8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x20:
        {
// switch_7CD8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x21:
        {
// switch_7CD8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x22:
        {
// switch_7CD8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x23:
        {
// switch_7CD8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x24:
        {
// switch_7CD8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x25:
        {
// switch_7CD8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x26:
        {
// switch_7CD8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x27:
        {
// switch_7CD8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x28:
        {
// switch_7CD8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x29:
        {
// switch_7CD8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2a:
        {
// switch_7CD8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2b:
        {
// switch_7CD8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2c:
        {
// switch_7CD8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2d:
        {
// switch_7CD8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2e:
        {
// switch_7CD8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x2f:
        {
// switch_7CD8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x30:
        {
// switch_7CD8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x31:
        {
// switch_7CD8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x32:
        {
// switch_7CD8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x33:
        {
// switch_7CD8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x34:
        {
// switch_7CD8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x35:
        {
// switch_7CD8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x36:
        {
// switch_7CD8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x37:
        {
// switch_7CD8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x38:
        {
// switch_7CD8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x39:
        {
// switch_7CD8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3a:
        {
// switch_7CD8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3b:
        {
// switch_7CD8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3c:
        {
// switch_7CD8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3d:
        {
// switch_7CD8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
        case 0x3e:
        {
// switch_7CD8_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            OP_JUMP switch_7CD8_case_default
        }
    }
}
// fun_85F8
fun_85F8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8690
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B88(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_29B0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8690
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_87E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8750
    var_24 = 32808;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8750
    pri = 1;
    OP_JUMP lab_8758
// lab_87E8
    pri = 0;
    return pri;
// lab_8750
    pri = 0;
// lab_8758
    OP_JZER lab_87E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_29B0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_87F8
fun_87F8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8B78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8860
fun_8860() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_88D0
    OP_CONST_S -8, 1
// lab_88D0
    pri = arg_0;
    OP_JNZ lab_88F0
    OP_ZERO_P_S -8
// lab_88F0
    pri = var_8;
    OP_JZER lab_8978
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8978
    pri = 0;
    return pri;
}
// fun_8990
fun_8990() {
    var_8 = 32912;
    var_16 = 8;
    pri = fun_23E0(var_8)
    var_24 = 0;
    pri = fun_2418()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2548(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2688(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8AA8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8AA8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_85F8(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_87F8(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_24B8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2978(var_112)
    pri = 0;
    return pri;
}
// fun_8B78
fun_8B78() {
    var_8 = 33072;
    var_16 = 8;
    pri = fun_23E0(var_8)
    var_24 = 0;
    pri = fun_2418()
    pri = arg_3;
    OP_JNZ lab_8C98
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8C60
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8D08(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8C88
// lab_8C98
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8EA8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8C60
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8DD0(var_16, var_8)
// lab_8C88
    OP_JUMP lab_8CE0
// lab_8CE0
    var_8 = 0;
    pri = fun_24B8()
    pri = 0;
    return pri;
}
// fun_8D08
fun_8D08() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8EA8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8DB8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8DB8
    pri = 0;
    return pri;
}
// fun_8DD0
fun_8DD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2598(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_21F8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_22F0(var_72)
    var_88 = 0;
    pri = fun_23B0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2548(var_96)
    pri = 0;
    return pri;
}
// fun_8EA8
fun_8EA8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8EF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_91B0(var_8)
// lab_8EF0
    pri = arg_4;
    OP_JNZ lab_8F58
    var_8 = 0;
    var_16 = 8;
    pri = fun_2548(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2598(var_40, var_32, var_24)
// lab_8F58
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8FF8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_25E8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_21F8(var_56, var_48, var_40)
    OP_JUMP lab_90E8
// lab_8FF8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_90B0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_90B0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_90B0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_21F8(var_24, var_16, var_8)
// lab_90E8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9128
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_9128
    var_8 = 1;
    var_16 = 8;
    pri = fun_22F0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_93B8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8860(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_91B0
fun_91B0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9210
    var_16 = 33232;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9210
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9350
        case default:
        {
// switch_9350_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9340
            var_16 = 33776;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9340
            OP_JUMP lab_9388
// lab_9388
            var_8 = 33992;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9350_case_0x1
            var_8 = 33448;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9388
        }
        case 0x2:
        {
// switch_9350_case_0x2
            var_8 = 33576;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9388
        }
    }
}
// fun_93B8
fun_93B8() {
    pri = arg_2;
    OP_JNZ lab_94A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2548(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2598(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2638(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_94A0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_21F8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_22F0(var_40)
    var_56 = 0;
    pri = fun_23B0()
    pri = 0;
    return pri;
}
// fun_9518
fun_9518() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9560
    pri = arg_0;
    return pri;
// lab_9560
    pri = arg_1;
    return pri;
}
// fun_9570
fun_9570() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9608
    var_8 = 1;
    var_16 = 0;
    var_24 = 34176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1820()
// lab_9608
    pri = arg_4;
    OP_JZER lab_9640
    var_8 = 1;
    var_16 = 8;
    pri = fun_1848(var_8)
// lab_9640
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9698
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9698
    pri = 0;
    OP_JUMP lab_96A0
// lab_9698
    pri = 1;
// lab_96A0
    OP_JZER lab_9768
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9768
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9740
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1760(var_32, var_24)
    OP_JUMP lab_9768
// lab_9768
    pri = arg_2;
    OP_JZER lab_9840
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9810
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_10E0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07E8(var_40)
    OP_JUMP lab_9840
// lab_9840
    pri = arg_3;
    OP_JZER lab_9878
    var_8 = 1;
    var_16 = 8;
    pri = fun_17E8(var_8)
// lab_9878
    pri = 0;
    return pri;
// lab_9810
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_10E0(var_16, var_8)
// lab_9740
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1760(var_16, var_8)
}
// fun_9888
fun_9888() {
    pri = g_mode;
    switch (pri) {
// switch_9948
        case default:
        {
// switch_9948_case_default
            pri = CommandNOP()
            OP_JUMP lab_9990
// lab_9990
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9948_case_0x0
            var_8 = 0;
            pri = fun_99A0()
            OP_JUMP lab_9990
        }
        case 0xd975017f7bd642f:
        {
// switch_9948_case_0xd975017f7bd642f
            var_8 = 0;
            pri = fun_CD68()
            OP_JUMP lab_9990
        }
        case 0x2ca9ba1b8323d13b:
        {
// switch_9948_case_0x2ca9ba1b8323d13b
            var_8 = 0;
            pri = fun_CC78()
            OP_JUMP lab_9990
        }
    }
}
// fun_99A0
fun_99A0() {
    pri = 0;
    return pri;
}
// fun_99B8
fun_99B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9570(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9A10
fun_9A10() {
    OP_PUSH2_C -4124947564017203457, -8958263881345873397
    var_8 = 16;
    pri = fun_9518(var_0, var_-8)
    var_16 = pri;
    var_24 = 8;
    pri = fun_0540(var_16)
    OP_PUSH2_C -6635286479268925353, 643169185203737588
    var_32 = 16;
    pri = fun_9518(var_24, var_16)
    var_40 = pri;
    var_48 = 8;
    pri = fun_0540(var_40)
    OP_PUSH2_C -783341769600439278, 5416558514670626579
    var_56 = 16;
    pri = fun_9518(var_48, var_40)
    var_64 = pri;
    var_72 = 8;
    pri = fun_0540(var_64)
    pri = 0;
    return pri;
}
// fun_9B18
fun_9B18() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_9B48
fun_9B48() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    OP_ZERO_P_S -56
    OP_ZERO_P_S -64
    OP_ZERO_P_S -72
    OP_ZERO_P_S -80
    OP_ZERO_P_S -88
    OP_ZERO_P_S -96
    OP_ZERO_P_S -104
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9D98
    OP_CONST_S -8, -8958263881345873397
    OP_CONST_S -16, 5416558514670626579
    OP_CONST_S -24, 643169185203737588
    OP_CONST_S -32, 2659169464254619836
    OP_CONST_S -40, 2659172762789504469
    OP_CONST_S -48, 2659166165719735203
    OP_CONST_S -56, 2659165066208106992
    OP_CONST_S -64, 2659168364742991625
    OP_CONST_S -72, 2659167265231363414
    OP_CONST_S -80, 2659179359859273735
    OP_CONST_S -88, 2659178260347645524
    OP_CONST_S -96, 2658178804277790950
    OP_CONST_S -104, 2658179903789419161
    OP_JUMP lab_9ED0
// lab_9D98
    OP_CONST_S -8, -4124947564017203457
    OP_CONST_S -16, -783341769600439278
    OP_CONST_S -24, -6635286479268925353
    OP_CONST_S -32, 719915919896088439
    OP_CONST_S -40, 719917019407716650
    OP_CONST_S -48, 719910422337947384
    OP_CONST_S -56, 719911521849575595
    OP_CONST_S -64, 719912621361203806
    OP_CONST_S -72, 719913720872832017
    OP_CONST_S -80, 719906024291434540
    OP_CONST_S -88, 719907123803062751
    OP_CONST_S -96, 720906579872917325
    OP_CONST_S -104, 720905480361289114
// lab_9ED0
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = var_24;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = var_16;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = var_8;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4640537203540230144, 4658025375784658534, 4657556104221923738, 8802641224559852288
    var_120 = 48;
    pri = fun_0718(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH3_C 4640537203540230144, 4658199758328823808, 4657350935352180736
    var_144 = var_24;
    var_152 = 48;
    pri = fun_0718(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 1;
    OP_PUSH3_C 4640537203540230144, 4658217350514868224, 4657740162468413440
    var_176 = var_16;
    var_184 = 48;
    pri = fun_0718(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 1;
    var_200 = 1;
    OP_PUSH3_C 4640537203540230144, 4656805357682478285, 4657555444514947072
    var_208 = var_8;
    var_216 = 48;
    pri = fun_0718(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 0;
    var_248 = 4631952216750555136;
    var_256 = 0;
    OP_PUSH5_C 4656861124912239084, 4646750587729257431, 4657523580667974124, 4658354437624619336, 4644800493906233917
    var_264 = 4657637468082379162;
    var_272 = 1;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    pri = fun_28E8()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_A360
    var_288 = 0;
    var_296 = 4467989009975189014;
    var_304 = 16;
    pri = fun_0770(var_296, var_288)
    var_312 = 0;
    var_320 = -859442629318187455;
    var_328 = 16;
    pri = fun_0770(var_320, var_312)
    var_336 = 0;
    var_344 = 4415606294098691622;
    var_352 = 16;
    pri = fun_0770(var_344, var_336)
    var_360 = 0;
    var_368 = 8988264144358404956;
    var_376 = 16;
    pri = fun_0770(var_368, var_360)
    var_384 = 0;
    var_392 = 8988276238986315277;
    var_400 = 16;
    pri = fun_0770(var_392, var_384)
    var_408 = 0;
    var_416 = -8309174203624311491;
    var_424 = 16;
    pri = fun_0770(var_416, var_408)
    var_432 = 0;
    var_440 = 6164296788199418986;
    var_448 = 16;
    pri = fun_0770(var_440, var_432)
    var_456 = 0;
    var_464 = 9079075346306917645;
    var_472 = 16;
    pri = fun_0770(var_464, var_456)
    var_480 = 0;
    var_488 = 8885309625560601597;
    var_496 = 16;
    pri = fun_0770(var_488, var_480)
    OP_JUMP lab_A510
// lab_A360
    var_8 = 0;
    var_16 = 8179156693783107887;
    var_24 = 16;
    pri = fun_0770(var_16, var_8)
    var_32 = 0;
    var_40 = -8432151180894290400;
    var_48 = 16;
    pri = fun_0770(var_40, var_32)
    var_56 = 0;
    var_64 = -146328789253612487;
    var_72 = 16;
    pri = fun_0770(var_64, var_56)
    var_80 = 0;
    var_88 = 4783835900312457763;
    var_96 = 16;
    pri = fun_0770(var_88, var_80)
    var_104 = 0;
    var_112 = 4783845795917111662;
    var_120 = 16;
    pri = fun_0770(var_112, var_104)
    var_128 = 0;
    var_136 = 1510685755535804562;
    var_144 = 16;
    pri = fun_0770(var_136, var_128)
    var_152 = 0;
    var_160 = -5573069934334758455;
    var_168 = 16;
    pri = fun_0770(var_160, var_152)
    var_176 = 0;
    var_184 = 7270287811182647254;
    var_192 = 16;
    pri = fun_0770(var_184, var_176)
    var_200 = 0;
    var_208 = 8496777380071952424;
    var_216 = 16;
    pri = fun_0770(var_208, var_200)
// lab_A510
    var_8 = 34224;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    var_40 = 0;
    pri = fun_24E8()
    var_48 = 0;
    var_56 = 4631121865569258701;
    var_64 = 3;
    OP_PUSH5_C 4655974170872344740, -4588647995271062487, 4657304250088465367, 4657684966984699085, 4641572679610804470
    var_72 = 4657669969646096220;
    var_80 = 180;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 85;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 4607182418800017408;
    var_136 = var_8;
    var_144 = 0;
    var_152 = 48;
    pri = fun_13D8(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 8802641224559852288;
    var_200 = var_8;
    var_208 = 48;
    pri = fun_0958(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = var_8;
    var_224 = 8;
    pri = fun_09B0(var_216)
    var_232 = 1;
    var_240 = 0;
    var_248 = 4641240890982006784;
    var_256 = var_8;
    OP_PUSH4_C 4657189746947548774, 4657556104221923738, 4611686018427387904, 8802641224559852288
    var_264 = 64;
    pri = fun_0898(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_272 = 1;
    var_280 = 0;
    var_288 = 4641240890982006784;
    var_296 = var_8;
    OP_PUSH3_C 4657302556840558592, 4657740162468413440, 4611686018427387904
    var_304 = var_16;
    var_312 = 64;
    pri = fun_0898(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_320 = 1;
    var_328 = 0;
    var_336 = 4641240890982006784;
    var_344 = var_8;
    OP_PUSH3_C 4657284964654514176, 4657350935352180736, 4611686018427387904
    var_352 = var_24;
    var_360 = 64;
    pri = fun_0898(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_368 = 4;
    var_376 = 4;
    var_384 = var_8;
    var_392 = 24;
    pri = fun_1210(var_384, var_376, var_368)
    var_400 = 1;
    var_408 = 1;
    var_416 = -1;
    var_424 = -1;
    var_432 = 0;
    var_440 = 1;
    var_448 = var_8;
    var_456 = 56;
    pri = fun_4590(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 0;
    var_472 = 3;
    var_480 = 0;
    var_488 = 100;
    var_496 = -1;
    var_504 = var_32;
    var_512 = var_8;
    var_520 = 56;
    pri = fun_20F8(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 8802641224559852288;
    var_536 = 8;
    pri = fun_09B0(var_528)
    var_544 = var_16;
    var_552 = 8;
    pri = fun_09B0(var_544)
    var_560 = var_24;
    var_568 = 8;
    pri = fun_09B0(var_560)
    var_576 = 1;
    var_584 = 8;
    pri = fun_22F0(var_576)
    var_592 = 0;
    pri = fun_23B0()
    var_600 = 1;
    var_608 = 3;
    var_616 = 0;
    var_624 = 1;
    var_632 = var_8;
    var_640 = 40;
    pri = fun_68C8(var_632, var_624, var_616, var_608, var_600)
    var_648 = 2;
    var_656 = 8;
    var_664 = var_24;
    var_672 = 24;
    pri = fun_1210(var_664, var_656, var_648)
    OP_PUSH2_C 4621199872640208077, 4631121865569258701
    var_680 = 0;
    OP_PUSH5_C 4657826781994449633, -4586261791155997901, 4656733515592719401, 4656876540065260503, 4641471348619188634
    var_688 = 4657697391466092954;
    var_696 = 1;
    pri = EvCameraMove(var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_704 = 0;
    pri = fun_28E8()
    var_712 = 1;
    var_720 = -1;
    var_728 = -1;
    var_736 = 3;
    var_744 = 0;
    var_752 = 0;
    var_760 = var_24;
    var_768 = 56;
    pri = fun_29B0(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    var_816 = 1718239044225654447;
    var_824 = var_24;
    var_832 = 56;
    pri = fun_20F8(var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_840 = var_24;
    var_848 = 8;
    pri = fun_0B88(var_840)
    var_856 = 1;
    var_864 = 8;
    pri = fun_22F0(var_856)
    var_872 = 0;
    pri = fun_23B0()
    var_880 = var_24;
    var_888 = 8;
    pri = fun_1278(var_880)
    var_896 = 7;
    var_904 = 7;
    var_912 = var_8;
    var_920 = 24;
    pri = fun_1210(var_912, var_904, var_896)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_ACA0
    var_928 = 0;
    var_936 = 4631952216750555136;
    var_944 = 0;
    OP_PUSH5_C 4656005572924434022, 4626035612740097147, 4656914187343395553, 4656964457015017472, 4639801498319852667
    var_952 = 4657689452992140411;
    var_960 = 1;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 0;
    pri = fun_28E8()
    OP_JUMP lab_ADB8
// lab_ACA0
    var_8 = 0;
    var_16 = 4628236747057974477;
    var_24 = 0;
    OP_PUSH5_C 4655528648760769905, 4634921074067410780, 4657336223886601093, 4657119202281510666, 4637958189066118758
    var_32 = 4657581085126106808;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_28E8()
    var_56 = 0;
    var_64 = 4628236747057974477;
    var_72 = 3;
    OP_PUSH5_C 4655514970836120371, 4634921074067410780, 4657363931579621048, 4657112451280116122, 4637956078003793428
    var_80 = 4657608528936336097;
    var_88 = 80;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_ADB8
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 0;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_29B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = var_40;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_20F8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = var_8;
    var_144 = 8;
    pri = fun_0B88(var_136)
    var_152 = 1;
    var_160 = 8;
    pri = fun_22F0(var_152)
    var_168 = 0;
    pri = fun_23B0()
    var_176 = 2;
    var_184 = 2;
    var_192 = var_16;
    var_200 = 24;
    pri = fun_1210(var_192, var_184, var_176)
    var_208 = 0;
    var_216 = 4625619029774565376;
    var_224 = 0;
    OP_PUSH5_C 4658118394468368384, -4604255079042226586, 4657542008482855649, 4656687797899236475, 4641391831938267873
    var_232 = 4657840811762820055;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    pri = fun_28E8()
    var_256 = 1;
    var_264 = -1;
    var_272 = -1;
    var_280 = 3;
    var_288 = 0;
    var_296 = 0;
    var_304 = var_16;
    var_312 = 56;
    pri = fun_29B0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    var_360 = 7023633806881796386;
    var_368 = var_16;
    var_376 = 56;
    pri = fun_20F8(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = var_16;
    var_392 = 8;
    pri = fun_0B88(var_384)
    var_400 = 1;
    var_408 = 8;
    pri = fun_22F0(var_400)
    var_416 = 0;
    pri = fun_23B0()
    var_424 = 5;
    var_432 = 5;
    var_440 = var_8;
    var_448 = 24;
    pri = fun_1210(var_440, var_432, var_424)
    var_456 = 0;
    var_464 = 4631952216750555136;
    var_472 = 0;
    OP_PUSH5_C 4656725643089464525, -4588006232324162191, 4656802476962013512, 4657372089955899146, 4640961175223900570
    var_480 = 4658037470412564070;
    var_488 = 1;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    pri = fun_28E8()
    var_504 = 1;
    var_512 = 1;
    var_520 = -1;
    var_528 = -1;
    var_536 = 0;
    var_544 = 2;
    var_552 = var_8;
    var_560 = 56;
    pri = fun_4590(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 100;
    var_600 = -1;
    var_608 = var_48;
    var_616 = var_8;
    var_624 = 56;
    pri = fun_20F8(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_22F0(var_632)
    var_648 = 0;
    pri = fun_23B0()
    var_656 = var_16;
    var_664 = 8;
    pri = fun_1278(var_656)
    var_672 = 0;
    var_680 = 3;
    var_688 = 0;
    var_696 = 100;
    var_704 = -1;
    var_712 = var_56;
    var_720 = var_8;
    var_728 = 56;
    pri = fun_20F8(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_22F0(var_736)
    var_752 = 0;
    pri = fun_23B0()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_B418
    var_760 = 0;
    var_768 = 4631727036769186611;
    var_776 = 0;
    OP_PUSH5_C 4654298779034404782, 4637616900656857088, 4657495697053093724, 4657025677822452040, 4638738578439049052
    var_784 = 4657565669973085389;
    var_792 = 1;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    pri = fun_28E8()
    var_808 = 0;
    var_816 = 4631727036769186611;
    var_824 = 3;
    OP_PUSH5_C 4654207035784183153, 4638217146044692562, 4657493564000535839, 4656979784207108669, 4639038701132966789
    var_832 = 4657563536920527503;
    var_840 = 60;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    OP_JUMP lab_B530
// lab_B418
    var_8 = 0;
    var_16 = 4631727036769186611;
    var_24 = 0;
    OP_PUSH5_C 4654296448069753897, 4635184956858077020, 4657500161070302495, 4657024710252219597, 4636928694338799534
    var_32 = 4657551288360994079;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_28E8()
    var_56 = 0;
    var_64 = 4631727036769186611;
    var_72 = 3;
    OP_PUSH5_C 4654212621303252255, 4635389026216192246, 4657498753695418941, 4656982796868968776, 4637132763696914760
    var_80 = 4657549858995877970;
    var_88 = 60;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_B530
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 2;
    var_40 = var_8;
    var_48 = 40;
    pri = fun_68C8(var_40, var_32, var_24, var_16, var_8)
    var_56 = 16;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 2;
    var_80 = 2;
    var_88 = var_8;
    var_96 = 24;
    pri = fun_1210(var_88, var_80, var_72)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = var_64;
    var_152 = var_8;
    var_160 = 56;
    pri = fun_20F8(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = var_8;
    var_176 = 8;
    pri = fun_0B88(var_168)
    var_184 = 1;
    var_192 = 8;
    pri = fun_22F0(var_184)
    var_200 = 0;
    pri = fun_23B0()
    var_208 = 0;
    var_216 = 4629053024490435379;
    var_224 = 0;
    OP_PUSH5_C 4656111785747677184, -4594228940371793019, 4657474916283328758, 4657788409038640251, 4643292139874785690
    var_232 = 4657587924088431575;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    pri = fun_28E8()
    var_256 = 0;
    var_264 = 4629053024490435379;
    var_272 = 3;
    OP_PUSH5_C 4656263606313240494, 4647975619604460339, 4657513355209835807, 4657827573642821632, 4641850636150306243
    var_280 = 4657622998509357629;
    var_288 = 95;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 1;
    var_304 = 0;
    var_312 = 4641240890982006784;
    var_320 = 0;
    var_328 = 0;
    OP_PUSH3_C 4654916616608284672, 4657562041584713728, 4611686018427387904
    var_336 = var_8;
    var_344 = 72;
    pri = fun_0820(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 15;
    var_360 = 8;
    pri = fun_0060(var_352)
    var_368 = var_8;
    var_376 = 8;
    pri = fun_1278(var_368)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH4_C 4656572041315064218, 4657556104221923738, 4611686018427387904, 8802641224559852288
    var_424 = 72;
    pri = fun_0820(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 1;
    var_440 = 0;
    var_448 = 4641240890982006784;
    var_456 = 0;
    var_464 = 0;
    OP_PUSH3_C 4656678034235981824, 4657740162468413440, 4611686018427387904
    var_472 = var_16;
    var_480 = 72;
    pri = fun_0820(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 1;
    var_496 = 0;
    var_504 = 4641240890982006784;
    var_512 = 0;
    var_520 = 0;
    OP_PUSH3_C 4656660442049937408, 4657350935352180736, 4607182418800017408
    var_528 = var_24;
    var_536 = 72;
    pri = fun_0820(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 50;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 8802641224559852288;
    var_568 = 8;
    pri = fun_09B0(var_560)
    var_576 = var_16;
    var_584 = 8;
    pri = fun_09B0(var_576)
    var_592 = var_24;
    var_600 = 8;
    pri = fun_09B0(var_592)
    var_608 = var_8;
    var_616 = 8;
    pri = fun_09B0(var_608)
    var_624 = 1;
    var_632 = 0;
    var_640 = 34176;
    var_648 = 8;
    var_656 = 32;
    pri = fun_0308(var_648, var_640, var_632, var_624)
    var_664 = 0;
    pri = fun_0378()
    var_672 = 0;
    var_680 = -1;
    OP_PUSH2_C -6121321245959042150, 6849040692128162081
    var_688 = 16;
    pri = fun_9518(var_680, var_672)
    var_696 = pri;
    var_704 = 24;
    pri = fun_2728(var_696, var_688, var_680)
    var_712 = 0;
    pri = fun_27E8()
    OP_JZER lab_BB18
    var_720 = 0;
    pri = fun_2898()
// lab_BB18
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = var_24;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = var_16;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = var_8;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    var_120 = 0;
    OP_PUSH2_C 4656805357682478285, 4657562041584713728
    var_128 = var_8;
    var_136 = 48;
    pri = fun_0718(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 1;
    var_152 = 1;
    OP_PUSH4_C 4640537203540230144, 4657189746947548774, 4657556104221923738, 8802641224559852288
    var_160 = 48;
    pri = fun_0718(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 1;
    var_184 = 4640537203540230144;
    var_192 = 2312;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 4657740162468413440;
    var_216 = var_16;
    var_224 = 48;
    pri = fun_0718(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 1;
    var_240 = 1;
    OP_PUSH3_C 4640537203540230144, 4657284964654514176, 4657350935352180736
    var_248 = var_24;
    var_256 = 48;
    pri = fun_0718(var_248, var_240, var_232, var_224, var_216, var_208)
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = var_8;
    var_304 = 8802641224559852288;
    var_312 = 48;
    pri = fun_0958(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    var_352 = var_8;
    var_360 = var_16;
    var_368 = 48;
    pri = fun_0958(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = var_8;
    var_416 = var_24;
    var_424 = 48;
    pri = fun_0958(var_416, var_408, var_400, var_392, var_384, var_376)
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_09B0(var_432)
    var_448 = var_16;
    var_456 = 8;
    pri = fun_09B0(var_448)
    var_464 = var_24;
    var_472 = 8;
    pri = fun_09B0(var_464)
    var_480 = 0;
    var_488 = 4631727036769186611;
    var_496 = 0;
    OP_PUSH5_C 4656387279381132739, 4637196799254116434, 4656992846405246648, 4657673642014932992, 4642789003353915392
    var_504 = 4657971983500013732;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_28E8()
    var_528 = 0;
    var_536 = 4631727036769186611;
    var_544 = 3;
    OP_PUSH5_C 4656311764922537083, -4589926595352770642, 4656913791519209554, 4657517599324719022, 4640826419078800343
    var_552 = 4657916853986997043;
    var_560 = 140;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 5;
    var_576 = var_8;
    var_584 = 16;
    pri = fun_1120(var_576, var_568)
    var_592 = 34224;
    var_600 = 8;
    var_608 = 16;
    pri = fun_02A8(var_600, var_592)
    var_616 = 0;
    pri = fun_0378()
    var_624 = 1;
    var_632 = 1;
    var_640 = -1;
    var_648 = -1;
    var_656 = 0;
    var_664 = 1;
    var_672 = var_8;
    var_680 = 56;
    pri = fun_4590(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    var_728 = var_72;
    var_736 = var_8;
    var_744 = 56;
    pri = fun_20F8(var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_752 = 1;
    var_760 = 8;
    pri = fun_22F0(var_752)
    var_768 = 0;
    pri = fun_23B0()
    var_776 = 1;
    var_784 = 3;
    var_792 = 0;
    var_800 = 1;
    var_808 = var_8;
    var_816 = 40;
    pri = fun_68C8(var_808, var_800, var_792, var_784, var_776)
    var_824 = var_8;
    var_832 = 8;
    pri = fun_0B88(var_824)
    var_840 = var_8;
    var_848 = 8;
    pri = fun_1160(var_840)
    var_856 = 1;
    var_864 = -1;
    var_872 = -1;
    var_880 = 3;
    var_888 = 0;
    var_896 = 0;
    var_904 = var_8;
    var_912 = 56;
    pri = fun_29B0(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_920 = 0;
    var_928 = 3;
    var_936 = 0;
    var_944 = 100;
    var_952 = -1;
    var_960 = var_80;
    var_968 = var_8;
    var_976 = 56;
    pri = fun_20F8(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 1;
    var_992 = 8;
    pri = fun_22F0(var_984)
    var_1000 = 0;
    pri = fun_23B0()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_C378
    var_1008 = 0;
    var_1016 = 4631727036769186611;
    var_1024 = 0;
    OP_PUSH5_C 4655192506065926226, -4589539567259793490, 4656549743219252920, 4656968679139668132, 4639887348187749417
    var_1032 = 4657655192209818911;
    var_1040 = 1;
    pri = EvCameraMove(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 0;
    pri = fun_28E8()
    var_1056 = 0;
    var_1064 = 4631727036769186611;
    var_1072 = 3;
    OP_PUSH5_C 4655170779716161372, -4589539567259793490, 4656571293647157330, 4656957728003855483, 4639894385062167183
    var_1080 = 4657665835482375782;
    var_1088 = 50;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    OP_JUMP lab_C490
// lab_C378
    OP_PUSH2_C 4623339082463209062, 4631727036769186611
    var_8 = 0;
    OP_PUSH5_C 4654941993336653742, 4638757577999977021, 4656750140208531374, 4657038212255008686, 4635460098647811686
    var_16 = 4657664648009817784;
    var_24 = 1;
    pri = EvCameraMove(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40, var_-48)
    var_32 = 0;
    pri = fun_28E8()
    OP_PUSH2_C 4623339082463209062, 4631727036769186611
    var_40 = 3;
    OP_PUSH5_C 4654915297194331341, 4638757577999977021, 4656767754384808346, 4657024886174080041, 4635462913397578793
    var_48 = 4657682218205629645;
    var_56 = 50;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
// lab_C490
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = var_88;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_20F8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_22F0(var_72)
    var_88 = 0;
    pri = fun_23B0()
    var_96 = 0;
    var_104 = 4631727036769186611;
    var_112 = 0;
    OP_PUSH5_C 4655545801142163210, -4593398589190496584, 4656865369027122299, 4657326900027997553, 4639283936206425948
    var_120 = 4657716962773067366;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_28E8()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_C630
    var_144 = 1;
    var_152 = 11;
    var_160 = -992265296180185582;
    var_168 = var_8;
    var_176 = 32;
    pri = fun_8990(var_168, var_160, var_152, var_144)
    OP_JUMP lab_C670
// lab_C630
    var_8 = 1;
    var_16 = 13;
    var_24 = 2272013230295110087;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_8990(var_32, var_24, var_16, var_8)
// lab_C670
    var_8 = 5;
    var_16 = var_8;
    var_24 = 16;
    pri = fun_1120(var_16, var_8)
    var_32 = 0;
    var_40 = 4631727036769186611;
    var_48 = 0;
    OP_PUSH5_C 4656471501971820380, -4588288410988314624, 4656863301945262080, 4657510694391696589, 4640844363108565647
    var_56 = 4657924726490251919;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_28E8()
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 1;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_29B0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = var_96;
    var_192 = var_8;
    var_200 = 56;
    pri = fun_20F8(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = var_8;
    var_216 = 8;
    pri = fun_0B88(var_208)
    var_224 = 1;
    var_232 = 8;
    pri = fun_22F0(var_224)
    var_240 = 0;
    pri = fun_23B0()
    var_248 = 2;
    var_256 = 2;
    var_264 = var_8;
    var_272 = 24;
    pri = fun_1210(var_264, var_256, var_248)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    var_320 = var_104;
    var_328 = var_8;
    var_336 = 56;
    pri = fun_20F8(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_22F0(var_344)
    var_360 = 0;
    pri = fun_23B0()
    var_368 = var_8;
    var_376 = 8;
    pri = fun_1278(var_368)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH3_C 4656367971956948992, 4658276724142768128, 4607182418800017408
    var_424 = var_8;
    var_432 = 72;
    pri = fun_0820(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 75;
    var_448 = 8;
    pri = fun_0060(var_440)
    var_456 = 0;
    var_464 = 8802641224559852288;
    var_472 = 16;
    pri = fun_07A8(var_464, var_456)
    var_480 = 0;
    var_488 = var_24;
    var_496 = 16;
    pri = fun_07A8(var_488, var_480)
    var_504 = 0;
    var_512 = var_16;
    var_520 = 16;
    pri = fun_07A8(var_512, var_504)
    var_528 = 0;
    var_536 = var_8;
    var_544 = 16;
    pri = fun_07A8(var_536, var_528)
    var_552 = 0;
    var_560 = var_8;
    var_568 = 16;
    pri = fun_0770(var_560, var_552)
    var_576 = 3;
    var_584 = 0;
    pri = EvCameraEnd(var_584, var_576)
    var_592 = var_8;
    var_600 = 8;
    pri = fun_09B0(var_592)
    pri = 0;
    return pri;
}
// fun_CAC0
fun_CAC0() {
    pri = 0;
    return pri;
}
// fun_CAD8
fun_CAD8() {
    OP_PUSH2_C -4124947564017203457, -8958263881345873397
    var_8 = 16;
    pri = fun_9518(var_0, var_-8)
    var_16 = pri;
    var_24 = 8;
    pri = fun_06C0(var_16)
    var_32 = 100;
    var_40 = -5942001667139114848;
    pri = WorkSet(var_40, var_32)
    var_48 = -6555521602960546522;
    pri = FlagReset(var_48)
    var_64 = -4109595392289114602;
    pri = WorkGet(var_64)
    OP_ADD_P_C 1
    var_8 = pri;
    var_72 = var_8;
    var_80 = -4109595392289114602;
    pri = WorkSet(var_80, var_72)
    var_88 = 8190714646949941821;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_CC38
fun_CC38() {
    var_8 = 3221248130153244534;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_CC78
fun_CC78() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_99B8()
    var_16 = 0;
    pri = fun_9A10()
    var_24 = 0;
    pri = fun_9B18()
    var_32 = 0;
    pri = fun_9B48()
    var_40 = 0;
    pri = fun_CAC0()
    var_48 = 0;
    pri = fun_CAD8()
    var_56 = 0;
    pri = fun_CC38()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CD68
fun_CD68() {
    var_8 = 0;
    pri = fun_9A10()
    var_16 = 0;
    pri = fun_CAD8()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_CE00
    var_24 = 11;
    pri = SetNpcLicenseCardFlag(var_24)
    OP_JUMP lab_CE20
// lab_CE00
    var_8 = 13;
    pri = SetNpcLicenseCardFlag(var_8)
// lab_CE20
    pri = 0;
    return pri;
}
