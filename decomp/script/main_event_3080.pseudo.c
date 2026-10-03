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
    pri = fun_15D0(var_8)
    OP_JZER lab_0A28
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1600(var_24)
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
    pri = fun_15D0(var_8)
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
    pri = fun_15D0(var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1178(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11F0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1230(var_24)
    pri = 0;
    return pri;
}
// fun_1328
fun_1328() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_15D0(var_8)
    OP_JZER lab_13C8
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
// lab_13C8
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
// fun_1430
fun_1430() {
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
    pri = fun_1328(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_15D0
fun_15D0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1600
fun_1600() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1630
fun_1630() {
    OP_JUMP lab_1648
// lab_1648
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_16D8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_16C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_16D8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1768
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1758
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    pri = 0;
    return pri;
// lab_1768
    pri = 0;
    return pri;
// lab_1758
    OP_JUMP lab_1778
// lab_1778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1648
    pri = 0;
    return pri;
// lab_16C8
    OP_JUMP lab_1778
}
// fun_17B8
fun_17B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B88(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1630(var_40)
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_18A0
fun_18A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_18D8
fun_18D8() {
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
// switch_1EF0
        case default:
        {
// switch_1EF0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F38
// lab_1F38
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
            OP_JNZ lab_1FE0
            var_88 = 0;
            pri = fun_22B0()
// lab_1FE0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1EF0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1AD8
                case default:
                {
// switch_1AD8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B50
// lab_1B50
                    OP_JUMP lab_1F38
                }
                case 0x0:
                {
// switch_1AD8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B50
                }
                case 0x1:
                {
// switch_1AD8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B50
                }
                case 0x2:
                {
// switch_1AD8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B50
                }
                case 0x3:
                {
// switch_1AD8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B50
                }
                case 0x4:
                {
// switch_1AD8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B50
                }
                case 0x5:
                {
// switch_1AD8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B50
                }
            }
        }
        case 0x65:
        {
// switch_1EF0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C90
                case default:
                {
// switch_1C90_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D08
// lab_1D08
                    OP_JUMP lab_1F38
                }
                case 0x0:
                {
// switch_1C90_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1D08
                }
                case 0x1:
                {
// switch_1C90_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1D08
                }
                case 0x2:
                {
// switch_1C90_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1D08
                }
                case 0x3:
                {
// switch_1C90_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D08
                }
                case 0x4:
                {
// switch_1C90_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1D08
                }
                case 0x5:
                {
// switch_1C90_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1D08
                }
            }
        }
        case 0x66:
        {
// switch_1EF0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E48
                case default:
                {
// switch_1E48_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1EC0
// lab_1EC0
                    OP_JUMP lab_1F38
                }
                case 0x0:
                {
// switch_1E48_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1EC0
                }
                case 0x1:
                {
// switch_1E48_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1EC0
                }
                case 0x2:
                {
// switch_1E48_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1EC0
                }
                case 0x3:
                {
// switch_1E48_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1EC0
                }
                case 0x4:
                {
// switch_1E48_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1EC0
                }
                case 0x5:
                {
// switch_1E48_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1EC0
                }
            }
        }
    }
}
// fun_1FF8
fun_1FF8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_18D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2060
fun_2060() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B50(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2108
    pri = 1;
    return pri;
// lab_2108
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2150
fun_2150() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_21A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2060(var_8)
    arg_2 = pri;
// lab_21A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_18D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1FF8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2200(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22B0
fun_22B0() {
    OP_JUMP lab_22C8
// lab_22C8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2308
    pri = 0;
    return pri;
// lab_2308
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22C8
    pri = 0;
    return pri;
}
// fun_2348
fun_2348() {
    var_8 = 0;
    pri = fun_22B0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_23F8
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_23F8
    pri = 0;
    return pri;
}
// fun_2408
fun_2408() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2438
fun_2438() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2470
fun_2470() {
    OP_JUMP lab_2488
// lab_2488
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_24D0
    OP_JUMP lab_2500
    OP_JUMP lab_24F0
// lab_24D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2500
    pri = 0;
    return pri;
// lab_24F0
    OP_JUMP lab_2488
}
// fun_2510
fun_2510() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2540
fun_2540() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_25A0(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2730(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_25A0
fun_25A0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25F0
fun_25F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2640
fun_2640() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2690
fun_2690() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E0
fun_26E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2730
fun_2730() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2780
fun_2780() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27C8
fun_27C8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2840
fun_2840() {
    var_8 = 0;
    pri = fun_27C8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_28C0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_28C0
    pri = 1;
    return pri;
// lab_28C0
    var_8 = 0;
    pri = fun_27C8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_28F0
fun_28F0() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2940
fun_2940() {
    OP_JUMP lab_2958
// lab_2958
    pri = EvCameraMoveWait_()
    OP_JZER lab_2990
    pri = 0;
    return pri;
// lab_2990
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2958
    pri = 0;
    return pri;
}
// fun_29D0
fun_29D0() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2A08
fun_2A08() {
    pri = arg_6;
    OP_JNZ lab_2A40
    var_8 = 0;
    pri = fun_1060()
// lab_2A40
    pri = arg_1;
    switch (pri) {
// switch_3FA8
        case default:
        {
// switch_3FA8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_42F8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_42F8
            pri = 1;
            OP_JUMP lab_4300
// lab_42F8
            pri = 0;
// lab_4300
            OP_JZER lab_4458
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
            OP_JUMP lab_44B8
// lab_4458
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
// lab_44B8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4518
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4578
// lab_4518
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4578
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4578
            pri = arg_2;
            OP_JZER lab_45B8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_45B8
            var_8 = 0;
            pri = fun_10A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3FA8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1:
        {
// switch_3FA8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x2:
        {
// switch_3FA8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x3:
        {
// switch_3FA8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x4:
        {
// switch_3FA8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x5:
        {
// switch_3FA8_case_0x5
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x6:
        {
// switch_3FA8_case_0x6
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x7:
        {
// switch_3FA8_case_0x7
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x8:
        {
// switch_3FA8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x9:
        {
// switch_3FA8_case_0x9
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0xa:
        {
// switch_3FA8_case_0xa
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0xb:
        {
// switch_3FA8_case_0xb
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0xc:
        {
// switch_3FA8_case_0xc
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0xd:
        {
// switch_3FA8_case_0xd
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0xe:
        {
// switch_3FA8_case_0xe
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0xf:
        {
// switch_3FA8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x10:
        {
// switch_3FA8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x11:
        {
// switch_3FA8_case_0x11
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x12:
        {
// switch_3FA8_case_0x12
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x13:
        {
// switch_3FA8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x14:
        {
// switch_3FA8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x15:
        {
// switch_3FA8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x16:
        {
// switch_3FA8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x17:
        {
// switch_3FA8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x18:
        {
// switch_3FA8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x19:
        {
// switch_3FA8_case_0x19
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1a:
        {
// switch_3FA8_case_0x1a
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1b:
        {
// switch_3FA8_case_0x1b
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1c:
        {
// switch_3FA8_case_0x1c
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
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1d:
        {
// switch_3FA8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1e:
        {
// switch_3FA8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x1f:
        {
// switch_3FA8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x20:
        {
// switch_3FA8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x21:
        {
// switch_3FA8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x22:
        {
// switch_3FA8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x23:
        {
// switch_3FA8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x24:
        {
// switch_3FA8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x25:
        {
// switch_3FA8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x26:
        {
// switch_3FA8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x27:
        {
// switch_3FA8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x28:
        {
// switch_3FA8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
        case 0x29:
        {
// switch_3FA8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FA8_case_default
        }
    }
}
// fun_45E8
fun_45E8() {
    pri = arg_5;
    OP_JNZ lab_4620
    var_8 = 0;
    pri = fun_1060()
// lab_4620
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4670
    OP_CONST_S -8, -1
// lab_4670
    pri = arg_1;
    switch (pri) {
// switch_6128
        case default:
        {
// switch_6128_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_65D0
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B50(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_65D0
            pri = 1;
            OP_JUMP lab_65D8
// lab_65D0
            pri = 0;
// lab_65D8
            OP_JZER lab_6628
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6880
// lab_6628
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6690
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6690
            pri = 1;
            OP_JUMP lab_6698
// lab_6690
            pri = 0;
// lab_6698
            OP_JZER lab_6820
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
            OP_JUMP lab_6880
// lab_6820
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
// lab_6880
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_68F0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_68F0
            var_8 = 0;
            pri = fun_10A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6128_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x1:
        {
// switch_6128_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x2:
        {
// switch_6128_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x3:
        {
// switch_6128_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x4:
        {
// switch_6128_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x5:
        {
// switch_6128_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D88(var_40)
            OP_JUMP switch_6128_case_default
        }
        case 0x6:
        {
// switch_6128_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x7:
        {
// switch_6128_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x8:
        {
// switch_6128_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x9:
        {
// switch_6128_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0xa:
        {
// switch_6128_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0xb:
        {
// switch_6128_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0xc:
        {
// switch_6128_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0xd:
        {
// switch_6128_case_0xd
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
            OP_JUMP switch_6128_case_default
        }
        case 0xe:
        {
// switch_6128_case_0xe
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
            OP_JUMP switch_6128_case_default
        }
        case 0xf:
        {
// switch_6128_case_0xf
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
            OP_JUMP switch_6128_case_default
        }
        case 0x10:
        {
// switch_6128_case_0x10
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
            OP_JUMP switch_6128_case_default
        }
        case 0x11:
        {
// switch_6128_case_0x11
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
            OP_JUMP switch_6128_case_default
        }
        case 0x12:
        {
// switch_6128_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x13:
        {
// switch_6128_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x14:
        {
// switch_6128_case_0x14
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
            OP_JUMP switch_6128_case_default
        }
        case 0x15:
        {
// switch_6128_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x16:
        {
// switch_6128_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x17:
        {
// switch_6128_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x18:
        {
// switch_6128_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x19:
        {
// switch_6128_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x1a:
        {
// switch_6128_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x1b:
        {
// switch_6128_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x1c:
        {
// switch_6128_case_0x1c
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
            OP_JUMP switch_6128_case_default
        }
        case 0x1d:
        {
// switch_6128_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x1e:
        {
// switch_6128_case_0x1e
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
            OP_JUMP switch_6128_case_default
        }
        case 0x1f:
        {
// switch_6128_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x20:
        {
// switch_6128_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x21:
        {
// switch_6128_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x22:
        {
// switch_6128_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x23:
        {
// switch_6128_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x24:
        {
// switch_6128_case_0x24
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
            OP_JUMP switch_6128_case_default
        }
        case 0x25:
        {
// switch_6128_case_0x25
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
            OP_JUMP switch_6128_case_default
        }
        case 0x26:
        {
// switch_6128_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x27:
        {
// switch_6128_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x28:
        {
// switch_6128_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x29:
        {
// switch_6128_case_0x29
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
            OP_JUMP switch_6128_case_default
        }
        case 0x2a:
        {
// switch_6128_case_0x2a
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
            OP_JUMP switch_6128_case_default
        }
        case 0x2b:
        {
// switch_6128_case_0x2b
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
            OP_JUMP switch_6128_case_default
        }
        case 0x2c:
        {
// switch_6128_case_0x2c
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
            OP_JUMP switch_6128_case_default
        }
        case 0x2d:
        {
// switch_6128_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x2e:
        {
// switch_6128_case_0x2e
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
            OP_JUMP switch_6128_case_default
        }
        case 0x2f:
        {
// switch_6128_case_0x2f
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
            OP_JUMP switch_6128_case_default
        }
        case 0x30:
        {
// switch_6128_case_0x30
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
            OP_JUMP switch_6128_case_default
        }
        case 0x31:
        {
// switch_6128_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x32:
        {
// switch_6128_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x33:
        {
// switch_6128_case_0x33
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
            OP_JUMP switch_6128_case_default
        }
        case 0x34:
        {
// switch_6128_case_0x34
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
            OP_JUMP switch_6128_case_default
        }
        case 0x35:
        {
// switch_6128_case_0x35
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
            OP_JUMP switch_6128_case_default
        }
        case 0x36:
        {
// switch_6128_case_0x36
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
            OP_JUMP switch_6128_case_default
        }
        case 0x37:
        {
// switch_6128_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x38:
        {
// switch_6128_case_0x38
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
            OP_JUMP switch_6128_case_default
        }
        case 0x39:
        {
// switch_6128_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x3a:
        {
// switch_6128_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x3b:
        {
// switch_6128_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x3c:
        {
// switch_6128_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x3d:
        {
// switch_6128_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
        case 0x3e:
        {
// switch_6128_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            OP_JUMP switch_6128_case_default
        }
    }
}
// fun_6920
fun_6920() {
    pri = arg_4;
    OP_JNZ lab_6958
    var_8 = 0;
    pri = fun_1060()
// lab_6958
    pri = arg_1;
    switch (pri) {
// switch_7D30
        case default:
        {
// switch_7D30_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_15D0(var_264)
            OP_JZER lab_82F8
            pri = arg_3;
            switch (pri) {
// switch_82A0
                case default:
                {
// switch_82A0_case_default
                    OP_JUMP lab_85B0
// lab_85B0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8620
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8620
                    var_8 = 0;
                    pri = fun_10A0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_82A0_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_82A0_case_default
                }
                case 0x2:
                {
// switch_82A0_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_82A0_case_default
                }
                case 0x3:
                {
// switch_82A0_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_82A0_case_default
                }
            }
// lab_82F8
            pri = arg_1;
            OP_JZER lab_8348
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8348
            pri = 0;
            OP_JUMP lab_8350
// lab_8348
            pri = 1;
// lab_8350
            OP_JZER lab_83B8
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B50(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_83B8
            pri = 1;
            OP_JUMP lab_83C0
// lab_83B8
            pri = 0;
// lab_83C0
            OP_JZER lab_8410
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_85B0
// lab_8410
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8478
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_85B0
// lab_8478
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
// switch_7D30_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1:
        {
// switch_7D30_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2:
        {
// switch_7D30_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x3:
        {
// switch_7D30_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x4:
        {
// switch_7D30_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x5:
        {
// switch_7D30_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0D88(var_40)
            OP_JUMP switch_7D30_case_default
        }
        case 0x6:
        {
// switch_7D30_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x7:
        {
// switch_7D30_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x8:
        {
// switch_7D30_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x9:
        {
// switch_7D30_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0xa:
        {
// switch_7D30_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0xb:
        {
// switch_7D30_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0xc:
        {
// switch_7D30_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0xd:
        {
// switch_7D30_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0xe:
        {
// switch_7D30_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0xf:
        {
// switch_7D30_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x10:
        {
// switch_7D30_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x11:
        {
// switch_7D30_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x12:
        {
// switch_7D30_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x13:
        {
// switch_7D30_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x14:
        {
// switch_7D30_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x15:
        {
// switch_7D30_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x16:
        {
// switch_7D30_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x17:
        {
// switch_7D30_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x18:
        {
// switch_7D30_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x19:
        {
// switch_7D30_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1a:
        {
// switch_7D30_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1b:
        {
// switch_7D30_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1c:
        {
// switch_7D30_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1d:
        {
// switch_7D30_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1e:
        {
// switch_7D30_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x1f:
        {
// switch_7D30_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x20:
        {
// switch_7D30_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x21:
        {
// switch_7D30_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x22:
        {
// switch_7D30_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x23:
        {
// switch_7D30_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x24:
        {
// switch_7D30_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x25:
        {
// switch_7D30_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x26:
        {
// switch_7D30_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x27:
        {
// switch_7D30_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x28:
        {
// switch_7D30_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x29:
        {
// switch_7D30_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2a:
        {
// switch_7D30_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2b:
        {
// switch_7D30_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2c:
        {
// switch_7D30_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2d:
        {
// switch_7D30_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2e:
        {
// switch_7D30_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x2f:
        {
// switch_7D30_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x30:
        {
// switch_7D30_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x31:
        {
// switch_7D30_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x32:
        {
// switch_7D30_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x33:
        {
// switch_7D30_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x34:
        {
// switch_7D30_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x35:
        {
// switch_7D30_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x36:
        {
// switch_7D30_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x37:
        {
// switch_7D30_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x38:
        {
// switch_7D30_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x39:
        {
// switch_7D30_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x3a:
        {
// switch_7D30_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x3b:
        {
// switch_7D30_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x3c:
        {
// switch_7D30_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x3d:
        {
// switch_7D30_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
        case 0x3e:
        {
// switch_7D30_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B10(var_24, var_16, var_8)
            OP_JUMP switch_7D30_case_default
        }
    }
}
// fun_8650
fun_8650() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_86E8
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
    pri = fun_2A08(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_86E8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8840
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_87A8
    var_24 = 32808;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_87A8
    pri = 1;
    OP_JUMP lab_87B0
// lab_8840
    pri = 0;
    return pri;
// lab_87A8
    pri = 0;
// lab_87B0
    OP_JZER lab_8840
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
    pri = fun_2A08(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8850
fun_8850() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8BD0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_88B8
fun_88B8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8928
    OP_CONST_S -8, 1
// lab_8928
    pri = arg_0;
    OP_JNZ lab_8948
    OP_ZERO_P_S -8
// lab_8948
    pri = var_8;
    OP_JZER lab_89D0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_89D0
    pri = 0;
    return pri;
}
// fun_89E8
fun_89E8() {
    var_8 = 32912;
    var_16 = 8;
    pri = fun_2438(var_8)
    var_24 = 0;
    pri = fun_2470()
    var_32 = 0;
    var_40 = 8;
    pri = fun_25A0(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_26E0(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8B00
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8B00
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8650(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8850(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2510()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_29D0(var_112)
    pri = 0;
    return pri;
}
// fun_8BD0
fun_8BD0() {
    var_8 = 33072;
    var_16 = 8;
    pri = fun_2438(var_8)
    var_24 = 0;
    pri = fun_2470()
    pri = arg_3;
    OP_JNZ lab_8CF0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8CB8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8D60(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8CE0
// lab_8CF0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8F00(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8CB8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8E28(var_16, var_8)
// lab_8CE0
    OP_JUMP lab_8D38
// lab_8D38
    var_8 = 0;
    pri = fun_2510()
    pri = 0;
    return pri;
}
// fun_8D60
fun_8D60() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8F00(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8E10
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8E10
    pri = 0;
    return pri;
}
// fun_8E28
fun_8E28() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_25F0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2250(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2348(var_72)
    var_88 = 0;
    pri = fun_2408()
    var_96 = 0;
    var_104 = 8;
    pri = fun_25A0(var_96)
    pri = 0;
    return pri;
}
// fun_8F00
fun_8F00() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8F48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9208(var_8)
// lab_8F48
    pri = arg_4;
    OP_JNZ lab_8FB0
    var_8 = 0;
    var_16 = 8;
    pri = fun_25A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_25F0(var_40, var_32, var_24)
// lab_8FB0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9050
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2640(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2250(var_56, var_48, var_40)
    OP_JUMP lab_9140
// lab_9050
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9108
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9108
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9108
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2250(var_24, var_16, var_8)
// lab_9140
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9180
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_9180
    var_8 = 1;
    var_16 = 8;
    pri = fun_2348(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9410(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_88B8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9208
fun_9208() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9268
    var_16 = 33232;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9268
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_93A8
        case default:
        {
// switch_93A8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9398
            var_16 = 33776;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9398
            OP_JUMP lab_93E0
// lab_93E0
            var_8 = 33992;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_93A8_case_0x1
            var_8 = 33448;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_93E0
        }
        case 0x2:
        {
// switch_93A8_case_0x2
            var_8 = 33576;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_93E0
        }
    }
}
// fun_9410
fun_9410() {
    pri = arg_2;
    OP_JNZ lab_94F8
    var_8 = 0;
    var_16 = 8;
    pri = fun_25A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_25F0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2690(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_94F8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2250(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2348(var_40)
    var_56 = 0;
    pri = fun_2408()
    pri = 0;
    return pri;
}
// fun_9570
fun_9570() {
    pri = 34176;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_95F8
// lab_95F8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9778
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9768
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_96B8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_96B8
    pri = 0;
    OP_JUMP lab_96C0
// lab_9778
    pri = 0;
    return pri;
// lab_9768
    OP_JUMP lab_95F0
// lab_95F0
    OP_INC_P_S -936
// lab_96B8
    pri = 1;
// lab_96C0
    OP_JZER lab_9738
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9730
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9738
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9730
}
// fun_9798
fun_9798() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9830
    var_8 = 1;
    var_16 = 0;
    var_24 = 35096;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1878()
// lab_9830
    pri = arg_4;
    OP_JZER lab_9868
    var_8 = 1;
    var_16 = 8;
    pri = fun_18A0(var_8)
// lab_9868
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_98C0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_98C0
    pri = 0;
    OP_JUMP lab_98C8
// lab_98C0
    pri = 1;
// lab_98C8
    OP_JZER lab_9990
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9990
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9968
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_17B8(var_32, var_24)
    OP_JUMP lab_9990
// lab_9990
    pri = arg_2;
    OP_JZER lab_9A68
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9A38
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1138(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07E8(var_40)
    OP_JUMP lab_9A68
// lab_9A68
    pri = arg_3;
    OP_JZER lab_9AA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1840(var_8)
// lab_9AA0
    pri = 0;
    return pri;
// lab_9A38
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1138(var_16, var_8)
// lab_9968
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_17B8(var_16, var_8)
}
// fun_9AB0
fun_9AB0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9570(var_24)
    pri = 0;
    return pri;
}
// fun_9B18
fun_9B18() {
    pri = g_mode;
    switch (pri) {
// switch_9BD8
        case default:
        {
// switch_9BD8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9C20
// lab_9C20
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9BD8_case_0x0
            var_8 = 0;
            pri = fun_9C30()
            OP_JUMP lab_9C20
        }
        case 0x168ef517fce7cb89:
        {
// switch_9BD8_case_0x168ef517fce7cb89
            var_8 = 0;
            pri = fun_CF10()
            OP_JUMP lab_9C20
        }
        case 0x3424df1b870b0d05:
        {
// switch_9BD8_case_0x3424df1b870b0d05
            var_8 = 0;
            pri = fun_CE20()
            OP_JUMP lab_9C20
        }
    }
}
// fun_9C30
fun_9C30() {
    pri = 0;
    return pri;
}
// fun_9C48
fun_9C48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9798(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9CA0
fun_9CA0() {
    var_8 = 8838721707033461072;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = -4060473859728235179;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 9010937134125686001;
    var_48 = 8;
    pri = fun_0540(var_40)
    pri = 0;
    return pri;
}
// fun_9D30
fun_9D30() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_9D60
fun_9D60() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = 8838721707033461072;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = -4060473859728235179;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = 9010937134125686001;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4640537203540230144, 4658025375784658534, 4657556104221923738, 8802641224559852288
    var_120 = 48;
    pri = fun_0718(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C 4640537203540230144, 4658199758328823808, 4657350935352180736, -4060473859728235179
    var_144 = 48;
    pri = fun_0718(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 1;
    OP_PUSH4_C 4640537203540230144, 4658217350514868224, 4657740162468413440, 8838721707033461072
    var_168 = 48;
    pri = fun_0718(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 1;
    var_184 = 1;
    OP_PUSH4_C 4640537203540230144, 4656805357682478285, 4657555444514947072, 9010937134125686001
    var_192 = 48;
    pri = fun_0718(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 1;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 0;
    OP_PUSH5_C 4656861124912239084, 4646750587729257431, 4657523580667974124, 4658354437624619336, 4644800493906233917
    var_240 = 4657637468082379162;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    pri = fun_2940()
    var_264 = 0;
    var_272 = -5797381177957162851;
    var_280 = 16;
    pri = fun_0770(var_272, var_264)
    var_288 = 0;
    var_296 = 966126402468243938;
    var_304 = 16;
    pri = fun_0770(var_296, var_288)
    var_312 = 0;
    var_320 = -4504382268511091935;
    var_328 = 16;
    pri = fun_0770(var_320, var_312)
    var_336 = 0;
    var_344 = 2423319261307039063;
    var_352 = 16;
    pri = fun_0770(var_344, var_336)
    var_360 = 0;
    var_368 = -8539039257394276789;
    var_376 = 16;
    pri = fun_0770(var_368, var_360)
    var_384 = 0;
    var_392 = -3149351691952044084;
    var_400 = 16;
    pri = fun_0770(var_392, var_384)
    var_408 = 0;
    var_416 = -3149339597324133763;
    var_424 = 16;
    pri = fun_0770(var_416, var_408)
    var_432 = 0;
    var_440 = -4504382268511091935;
    var_448 = 16;
    pri = fun_0770(var_440, var_432)
    var_456 = 0;
    var_464 = -6477629637938931612;
    var_472 = 16;
    pri = fun_0770(var_464, var_456)
    var_480 = 0;
    var_488 = -2747090564907400189;
    var_496 = 16;
    pri = fun_0770(var_488, var_480)
    var_504 = 0;
    var_512 = 2558031901490264850;
    var_520 = 16;
    pri = fun_0770(var_512, var_504)
    var_528 = 35144;
    var_536 = 8;
    var_544 = 16;
    pri = fun_02A8(var_536, var_528)
    var_552 = 0;
    pri = fun_0378()
    var_560 = 0;
    pri = fun_2540()
    var_568 = 1;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 0;
    var_592 = 4631121865569258701;
    var_600 = 3;
    OP_PUSH5_C 4655955215291881882, -4588697957079428628, 4657461348309842002, 4657717776411671921, 4641617011919636398
    var_608 = 4657593245724710011;
    var_616 = 160;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 85;
    var_632 = 8;
    pri = fun_0060(var_624)
    var_640 = 1;
    var_648 = 0;
    var_656 = 0;
    OP_PUSH2_C 4607182418800017408, 9010937134125686001
    var_664 = 0;
    var_672 = 48;
    pri = fun_1430(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    OP_PUSH2_C 8802641224559852288, 9010937134125686001
    var_712 = 48;
    pri = fun_0958(var_704, var_696, var_688, var_680, var_672, var_664)
    var_720 = 1;
    var_728 = 0;
    var_736 = 20;
    pri = float(var_736)
    var_744 = pri;
    OP_PUSH5_C 9010937134125686001, 4657189746947548774, 4657556104221923738, 4611686018427387904, 8802641224559852288
    var_752 = 64;
    pri = fun_0898(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_760 = 1;
    var_768 = 0;
    var_776 = 20;
    pri = float(var_776)
    var_784 = pri;
    OP_PUSH5_C 9010937134125686001, 4657302556840558592, 4657740162468413440, 4611686018427387904, 8838721707033461072
    var_792 = 64;
    pri = fun_0898(var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_800 = 1;
    var_808 = 0;
    var_816 = 20;
    pri = float(var_816)
    var_824 = pri;
    OP_PUSH5_C 9010937134125686001, 4657284964654514176, 4657350935352180736, 4611686018427387904, -4060473859728235179
    var_832 = 64;
    pri = fun_0898(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_840 = 9010937134125686001;
    var_848 = 8;
    pri = fun_09B0(var_840)
    var_856 = 4;
    var_864 = 7;
    var_872 = 9010937134125686001;
    var_880 = 24;
    pri = fun_1268(var_872, var_864, var_856)
    var_888 = 1;
    var_896 = 1;
    var_904 = -1;
    var_912 = -1;
    var_920 = 0;
    var_928 = 1;
    var_936 = 9010937134125686001;
    var_944 = 56;
    pri = fun_45E8(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 100;
    var_984 = -1;
    OP_PUSH2_C -7042158745378971123, 9010937134125686001
    var_992 = 56;
    pri = fun_2150(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 8802641224559852288;
    var_1008 = 8;
    pri = fun_09B0(var_1000)
    var_1016 = 8838721707033461072;
    var_1024 = 8;
    pri = fun_09B0(var_1016)
    var_1032 = -4060473859728235179;
    var_1040 = 8;
    pri = fun_09B0(var_1032)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_2348(var_1048)
    var_1064 = 0;
    pri = fun_2408()
    var_1072 = 1;
    var_1080 = 3;
    var_1088 = 0;
    var_1096 = 1;
    var_1104 = 9010937134125686001;
    var_1112 = 40;
    pri = fun_6920(var_1104, var_1096, var_1088, var_1080, var_1072)
    OP_PUSH2_C 4621199872640208077, 4631121865569258701
    var_1120 = 0;
    OP_PUSH5_C 4657826781994449633, -4586261791155997901, 4656733515592719401, 4656876540065260503, 4641471348619188634
    var_1128 = 4657697391466092954;
    var_1136 = 1;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 0;
    pri = fun_2940()
    var_1152 = 1;
    var_1160 = -1;
    var_1168 = -1;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = -4060473859728235179;
    var_1208 = 56;
    pri = fun_2A08(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = 0;
    var_1224 = 3;
    var_1232 = 0;
    var_1240 = 100;
    var_1248 = -1;
    OP_PUSH2_C 2596614150076317481, -4060473859728235179
    var_1256 = 56;
    pri = fun_2150(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1264 = -4060473859728235179;
    var_1272 = 8;
    pri = fun_0B88(var_1264)
    var_1280 = 1;
    var_1288 = 8;
    pri = fun_2348(var_1280)
    var_1296 = 0;
    pri = fun_2408()
    var_1304 = 9010937134125686001;
    var_1312 = 8;
    pri = fun_0B88(var_1304)
    var_1320 = 2;
    var_1328 = 6;
    var_1336 = 9010937134125686001;
    var_1344 = 24;
    pri = fun_1268(var_1336, var_1328, var_1320)
    var_1352 = 0;
    var_1360 = 4631952216750555136;
    var_1368 = 0;
    OP_PUSH5_C 4656005572924434022, 4626035612740097147, 4656914187343395553, 4656964457015017472, 4639801498319852667
    var_1376 = 4657689452992140411;
    var_1384 = 1;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = 0;
    pri = fun_2940()
    var_1400 = 1;
    var_1408 = 1;
    var_1416 = -1;
    var_1424 = -1;
    var_1432 = 0;
    var_1440 = 6;
    var_1448 = 9010937134125686001;
    var_1456 = 56;
    pri = fun_45E8(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 0;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 100;
    var_1496 = -1;
    OP_PUSH2_C -7042162043913855756, 9010937134125686001
    var_1504 = 56;
    pri = fun_2150(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_2348(var_1512)
    var_1528 = 0;
    pri = fun_2408()
    var_1536 = 9010937134125686001;
    var_1544 = 8;
    pri = fun_12D0(var_1536)
    OP_PUSH2_C 4618328827877759386, 4627448617123184640
    var_1552 = 0;
    OP_PUSH5_C 4657168702294993142, 4633248409018307707, 4657528066675415450, 4655838491137477181, 4641945282111225201
    var_1560 = 4657904649407928730;
    var_1568 = 1;
    pri = EvCameraMove(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1576 = 0;
    pri = fun_2940()
    OP_PUSH2_C 4618328827877759386, 4627448617123184640
    var_1584 = 3;
    OP_PUSH5_C 4657192253834060104, 4635622650446862090, 4657526373427508675, 4655907804350492180, 4643304806248737669
    var_1592 = 4657897678504208630;
    var_1600 = 60;
    pri = EvCameraMove(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1608 = 1;
    var_1616 = 3;
    var_1624 = 0;
    var_1632 = 6;
    var_1640 = 9010937134125686001;
    var_1648 = 40;
    pri = fun_6920(var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C -7042160944402227545, 9010937134125686001
    var_1696 = 56;
    pri = fun_2150(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 9010937134125686001;
    var_1712 = 8;
    pri = fun_0B88(var_1704)
    var_1720 = 1;
    var_1728 = 8;
    pri = fun_2348(var_1720)
    var_1736 = 0;
    pri = fun_2408()
    var_1744 = 7;
    var_1752 = 7;
    var_1760 = -4060473859728235179;
    var_1768 = 24;
    pri = fun_1268(var_1760, var_1752, var_1744)
    var_1776 = 1;
    var_1784 = -1;
    var_1792 = -1;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 1;
    var_1824 = -4060473859728235179;
    var_1832 = 56;
    pri = fun_2A08(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 0;
    var_1848 = 3;
    var_1856 = 0;
    var_1864 = 100;
    var_1872 = -1;
    OP_PUSH2_C 2596610851541432848, -4060473859728235179
    var_1880 = 56;
    pri = fun_2150(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1888 = -4060473859728235179;
    var_1896 = 8;
    pri = fun_0B88(var_1888)
    var_1904 = 1;
    var_1912 = 8;
    pri = fun_2348(var_1904)
    var_1920 = 0;
    pri = fun_2408()
    var_1928 = 7;
    var_1936 = 4;
    var_1944 = 8838721707033461072;
    var_1952 = 24;
    pri = fun_1268(var_1944, var_1936, var_1928)
    var_1960 = 0;
    var_1968 = 4625619029774565376;
    var_1976 = 0;
    OP_PUSH5_C 4658118394468368384, -4604255079042226586, 4657542008482855649, 4656687797899236475, 4641391831938267873
    var_1984 = 4657840811762820055;
    var_1992 = 1;
    pri = EvCameraMove(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_2000 = 0;
    pri = fun_2940()
    var_2008 = 1;
    var_2016 = 1;
    var_2024 = -1;
    var_2032 = -1;
    var_2040 = 0;
    var_2048 = 1;
    var_2056 = 8838721707033461072;
    var_2064 = 56;
    pri = fun_45E8(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2072 = 0;
    var_2080 = 3;
    var_2088 = 0;
    var_2096 = 100;
    var_2104 = -1;
    OP_PUSH2_C 8675159943243845168, 8838721707033461072
    var_2112 = 56;
    pri = fun_2150(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2120 = 1;
    var_2128 = 8;
    pri = fun_2348(var_2120)
    var_2136 = 0;
    pri = fun_2408()
    var_2144 = 5;
    var_2152 = 4;
    var_2160 = 9010937134125686001;
    var_2168 = 24;
    pri = fun_1268(var_2160, var_2152, var_2144)
    var_2176 = 0;
    var_2184 = 4631952216750555136;
    var_2192 = 0;
    OP_PUSH5_C 4656725643089464525, -4588006232324162191, 4656802476962013512, 4657372089955899146, 4640961175223900570
    var_2200 = 4658037470412564070;
    var_2208 = 1;
    pri = EvCameraMove(var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136)
    var_2216 = 0;
    pri = fun_2940()
    var_2224 = 1;
    var_2232 = 1;
    var_2240 = 30;
    OP_PUSH2_C 8838721707033461072, 9010937134125686001
    var_2248 = 40;
    pri = fun_10E0(var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2256 = 1;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 1;
    var_2288 = 8838721707033461072;
    var_2296 = 40;
    pri = fun_6920(var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2304 = 0;
    var_2312 = 3;
    var_2320 = 0;
    var_2328 = 100;
    var_2336 = -1;
    OP_PUSH2_C -7042164242937112178, 9010937134125686001
    var_2344 = 56;
    pri = fun_2150(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2352 = 8838721707033461072;
    var_2360 = 8;
    pri = fun_0B88(var_2352)
    var_2368 = 1;
    var_2376 = 8;
    pri = fun_2348(var_2368)
    var_2384 = 0;
    pri = fun_2408()
    var_2392 = 9010937134125686001;
    var_2400 = 8;
    pri = fun_12D0(var_2392)
    var_2408 = 1;
    var_2416 = 1;
    var_2424 = -1;
    OP_PUSH2_C -4060473859728235179, 9010937134125686001
    var_2432 = 40;
    pri = fun_10E0(var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2440 = 0;
    var_2448 = 3;
    var_2456 = 0;
    var_2464 = 100;
    var_2472 = -1;
    OP_PUSH2_C -7042163143425483967, 9010937134125686001
    var_2480 = 56;
    pri = fun_2150(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2488 = 1;
    var_2496 = 8;
    pri = fun_2348(var_2488)
    var_2504 = 0;
    pri = fun_2408()
    var_2512 = 2;
    var_2520 = 9010937134125686001;
    var_2528 = 16;
    pri = fun_1178(var_2520, var_2512)
    var_2536 = 0;
    var_2544 = 4631727036769186611;
    var_2552 = 0;
    OP_PUSH5_C 4654265177959059948, 4637509236478265262, 4657471002021933875, 4657007799763384402, 4638980998762741105
    var_2560 = 4657551354331691745;
    var_2568 = 1;
    pri = EvCameraMove(var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2576 = 0;
    pri = fun_2940()
    var_2584 = 0;
    var_2592 = 4631727036769186611;
    var_2600 = 3;
    OP_PUSH5_C 4654209366748834038, 4637716824273589371, 4657469528676352655, 4656979894158271447, 4639084792660403159
    var_2608 = 4657549880986110525;
    var_2616 = 60;
    pri = EvCameraMove(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2624 = -1;
    var_2632 = 9010937134125686001;
    var_2640 = 16;
    pri = fun_1138(var_2632, var_2624)
    var_2648 = 1;
    var_2656 = -1;
    var_2664 = -1;
    var_2672 = 3;
    var_2680 = 0;
    var_2688 = 0;
    var_2696 = 9010937134125686001;
    var_2704 = 56;
    pri = fun_2A08(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2712 = 0;
    var_2720 = 3;
    var_2728 = 0;
    var_2736 = 100;
    var_2744 = -1;
    OP_PUSH2_C -7042166441960368600, 9010937134125686001
    var_2752 = 56;
    pri = fun_2150(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2760 = 9010937134125686001;
    var_2768 = 8;
    pri = fun_0B88(var_2760)
    var_2776 = 1;
    var_2784 = 8;
    pri = fun_2348(var_2776)
    var_2792 = 0;
    pri = fun_2408()
    var_2800 = 0;
    var_2808 = 4629053024490435379;
    var_2816 = 0;
    OP_PUSH5_C 4656111785747677184, -4594228940371793019, 4657474916283328758, 4657788409038640251, 4643292139874785690
    var_2824 = 4657587924088431575;
    var_2832 = 1;
    pri = EvCameraMove(var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
    var_2840 = 0;
    pri = fun_2940()
    var_2848 = 0;
    var_2856 = 4629053024490435379;
    var_2864 = 3;
    OP_PUSH5_C 4656263606313240494, 4647975619604460339, 4657513355209835807, 4657827573642821632, 4641850636150306243
    var_2872 = 4657622998509357629;
    var_2880 = 95;
    pri = EvCameraMove(var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2888 = 1;
    var_2896 = 0;
    var_2904 = 4641240890982006784;
    var_2912 = 0;
    var_2920 = 0;
    OP_PUSH4_C 4654916616608284672, 4657562041584713728, 4611686018427387904, 9010937134125686001
    var_2928 = 72;
    pri = fun_0820(var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2936 = 15;
    var_2944 = 8;
    pri = fun_0060(var_2936)
    var_2952 = 1;
    var_2960 = 0;
    var_2968 = 4641240890982006784;
    var_2976 = 0;
    var_2984 = 0;
    OP_PUSH4_C 4656572041315064218, 4657556104221923738, 4611686018427387904, 8802641224559852288
    var_2992 = 72;
    pri = fun_0820(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920)
    var_3000 = 1;
    var_3008 = 0;
    var_3016 = 4641240890982006784;
    var_3024 = 0;
    var_3032 = 0;
    OP_PUSH4_C 4656678034235981824, 4657740162468413440, 4611686018427387904, 8838721707033461072
    var_3040 = 72;
    pri = fun_0820(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968)
    var_3048 = 1;
    var_3056 = 0;
    var_3064 = 4641240890982006784;
    var_3072 = 0;
    var_3080 = 0;
    OP_PUSH4_C 4656660442049937408, 4657350935352180736, 4607182418800017408, -4060473859728235179
    var_3088 = 72;
    pri = fun_0820(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016)
    var_3096 = 50;
    var_3104 = 8;
    pri = fun_0060(var_3096)
    var_3112 = 8802641224559852288;
    var_3120 = 8;
    pri = fun_09B0(var_3112)
    var_3128 = 8838721707033461072;
    var_3136 = 8;
    pri = fun_09B0(var_3128)
    var_3144 = -4060473859728235179;
    var_3152 = 8;
    pri = fun_09B0(var_3144)
    var_3160 = 9010937134125686001;
    var_3168 = 8;
    pri = fun_09B0(var_3160)
    var_3176 = 1;
    var_3184 = 0;
    var_3192 = 35096;
    var_3200 = 8;
    var_3208 = 32;
    pri = fun_0308(var_3200, var_3192, var_3184, var_3176)
    var_3216 = 0;
    pri = fun_0378()
    var_3224 = 0;
    var_3232 = -1;
    var_3240 = 118645284709339424;
    var_3248 = 24;
    pri = fun_2780(var_3240, var_3232, var_3224)
    var_3256 = 0;
    pri = fun_2840()
    OP_JZER lab_BA70
    var_3264 = 0;
    pri = fun_28F0()
// lab_BA70
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07A8(var_16, var_8)
    var_32 = 1;
    var_40 = 8838721707033461072;
    var_48 = 16;
    pri = fun_07A8(var_40, var_32)
    var_56 = 1;
    var_64 = -4060473859728235179;
    var_72 = 16;
    pri = fun_07A8(var_64, var_56)
    var_80 = 1;
    var_88 = 9010937134125686001;
    var_96 = 16;
    pri = fun_07A8(var_88, var_80)
    var_104 = 1;
    var_112 = 1;
    var_120 = 0;
    OP_PUSH3_C 4656805357682478285, 4657562041584713728, 9010937134125686001
    var_128 = 48;
    pri = fun_0718(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    OP_PUSH4_C 4640537203540230144, 4657189746947548774, 4657556104221923738, 8802641224559852288
    var_152 = 48;
    pri = fun_0718(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 1;
    var_176 = 4640537203540230144;
    var_184 = 2312;
    pri = float(var_184)
    var_192 = pri;
    OP_PUSH2_C 4657740162468413440, 8838721707033461072
    var_200 = 48;
    pri = fun_0718(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 1;
    var_216 = 1;
    OP_PUSH4_C 4640537203540230144, 4657284964654514176, 4657350935352180736, -4060473859728235179
    var_224 = 48;
    pri = fun_0718(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C 9010937134125686001, 8802641224559852288
    var_264 = 48;
    pri = fun_0958(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH2_C 9010937134125686001, 8838721707033461072
    var_304 = 48;
    pri = fun_0958(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    OP_PUSH2_C 9010937134125686001, -4060473859728235179
    var_344 = 48;
    pri = fun_0958(var_336, var_328, var_320, var_312, var_304, var_296)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_09B0(var_352)
    var_368 = 8838721707033461072;
    var_376 = 8;
    pri = fun_09B0(var_368)
    var_384 = -4060473859728235179;
    var_392 = 8;
    pri = fun_09B0(var_384)
    var_400 = 0;
    var_408 = 4631727036769186611;
    var_416 = 0;
    OP_PUSH5_C 4656387279381132739, 4637196799254116434, 4656992846405246648, 4657673642014932992, 4642789003353915392
    var_424 = 4657971983500013732;
    var_432 = 1;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 0;
    pri = fun_2940()
    var_448 = 0;
    var_456 = 4631727036769186611;
    var_464 = 3;
    OP_PUSH5_C 4656311764922537083, -4589926595352770642, 4656913791519209554, 4657517599324719022, 4640826419078800343
    var_472 = 4657916853986997043;
    var_480 = 140;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 5;
    var_496 = 5;
    var_504 = 9010937134125686001;
    var_512 = 24;
    pri = fun_1268(var_504, var_496, var_488)
    var_520 = 35144;
    var_528 = 8;
    var_536 = 16;
    pri = fun_02A8(var_528, var_520)
    var_544 = 0;
    pri = fun_0378()
    var_552 = 8838721707033461072;
    var_560 = 8;
    pri = fun_1230(var_552)
    var_568 = 1;
    var_576 = 1;
    var_584 = -1;
    var_592 = -1;
    var_600 = 0;
    var_608 = 8;
    var_616 = 9010937134125686001;
    var_624 = 56;
    pri = fun_45E8(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C -7042165342448740389, 9010937134125686001
    var_672 = 56;
    pri = fun_2150(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 1;
    var_688 = 8;
    pri = fun_2348(var_680)
    var_696 = 0;
    pri = fun_2408()
    var_704 = 9010937134125686001;
    var_712 = 8;
    pri = fun_11B8(var_704)
    var_720 = 1;
    var_728 = 3;
    var_736 = 0;
    var_744 = 8;
    var_752 = 9010937134125686001;
    var_760 = 40;
    pri = fun_6920(var_752, var_744, var_736, var_728, var_720)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C -7042168640983625022, 9010937134125686001
    var_808 = 56;
    pri = fun_2150(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 9010937134125686001;
    var_824 = 8;
    pri = fun_0B88(var_816)
    var_832 = 1;
    var_840 = 8;
    pri = fun_2348(var_832)
    var_848 = 0;
    pri = fun_2408()
    var_856 = 2;
    var_864 = 9010937134125686001;
    var_872 = 16;
    pri = fun_1178(var_864, var_856)
    var_880 = 0;
    var_888 = 4631727036769186611;
    var_896 = 0;
    OP_PUSH5_C 4655192506065926226, -4589539567259793490, 4656549743219252920, 4656968679139668132, 4639887348187749417
    var_904 = 4657655192209818911;
    var_912 = 1;
    pri = EvCameraMove(var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_920 = 0;
    pri = fun_2940()
    var_928 = 0;
    var_936 = 4631727036769186611;
    var_944 = 3;
    OP_PUSH5_C 4655170779716161372, -4589539567259793490, 4656571293647157330, 4656957728003855483, 4639894385062167183
    var_952 = 4657665835482375782;
    var_960 = 50;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 0;
    var_976 = 3;
    var_984 = 0;
    var_992 = 100;
    var_1000 = -1;
    OP_PUSH2_C -7042167541471996811, 9010937134125686001
    var_1008 = 56;
    pri = fun_2150(var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_2348(var_1016)
    var_1032 = 0;
    pri = fun_2408()
    var_1040 = 0;
    var_1048 = 4631727036769186611;
    var_1056 = 0;
    OP_PUSH5_C 4655545801142163210, -4593398589190496584, 4656865369027122299, 4657326900027997553, 4639283936206425948
    var_1064 = 4657716962773067366;
    var_1072 = 1;
    pri = EvCameraMove(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1080 = 0;
    pri = fun_2940()
    var_1088 = 1;
    var_1096 = 7;
    OP_PUSH2_C 5849261296325962060, 9010937134125686001
    var_1104 = 32;
    pri = fun_89E8(var_1096, var_1088, var_1080, var_1072)
    var_1112 = 5;
    var_1120 = 9010937134125686001;
    var_1128 = 16;
    pri = fun_1178(var_1120, var_1112)
    var_1136 = 0;
    var_1144 = 4631727036769186611;
    var_1152 = 3;
    OP_PUSH5_C 4656311764922537083, -4589926595352770642, 4656913791519209554, 4657517599324719022, 4640826419078800343
    var_1160 = 4657916853986997043;
    var_1168 = 1;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = 0;
    pri = fun_2940()
    var_1184 = 1;
    var_1192 = -1;
    var_1200 = -1;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 9010937134125686001;
    var_1240 = 56;
    pri = fun_2A08(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = 0;
    var_1256 = 3;
    var_1264 = 0;
    var_1272 = 100;
    var_1280 = -1;
    OP_PUSH2_C -7041203269774244989, 9010937134125686001
    var_1288 = 56;
    pri = fun_2150(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 9010937134125686001;
    var_1304 = 8;
    pri = fun_0B88(var_1296)
    var_1312 = 1;
    var_1320 = 8;
    pri = fun_2348(var_1312)
    var_1328 = 0;
    pri = fun_2408()
    var_1336 = 9010937134125686001;
    var_1344 = 8;
    pri = fun_11B8(var_1336)
    var_1352 = 1;
    var_1360 = 0;
    var_1368 = 4641240890982006784;
    var_1376 = 0;
    var_1384 = 0;
    OP_PUSH4_C 4656367971956948992, 4658276724142768128, 4607182418800017408, 9010937134125686001
    var_1392 = 72;
    pri = fun_0820(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1400 = 75;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 9010937134125686001;
    var_1424 = 8;
    pri = fun_09B0(var_1416)
    var_1432 = 1;
    var_1440 = 0;
    var_1448 = 35096;
    var_1456 = 8;
    var_1464 = 32;
    pri = fun_0308(var_1456, var_1448, var_1440, var_1432)
    var_1472 = 0;
    pri = fun_0378()
    var_1480 = 1;
    var_1488 = -5797381177957162851;
    var_1496 = 16;
    pri = fun_0770(var_1488, var_1480)
    var_1504 = 1;
    var_1512 = 966126402468243938;
    var_1520 = 16;
    pri = fun_0770(var_1512, var_1504)
    var_1528 = 1;
    var_1536 = -4504382268511091935;
    var_1544 = 16;
    pri = fun_0770(var_1536, var_1528)
    var_1552 = 1;
    var_1560 = 2423319261307039063;
    var_1568 = 16;
    pri = fun_0770(var_1560, var_1552)
    var_1576 = 1;
    var_1584 = -8539039257394276789;
    var_1592 = 16;
    pri = fun_0770(var_1584, var_1576)
    var_1600 = 1;
    var_1608 = -3149351691952044084;
    var_1616 = 16;
    pri = fun_0770(var_1608, var_1600)
    var_1624 = 1;
    var_1632 = -3149339597324133763;
    var_1640 = 16;
    pri = fun_0770(var_1632, var_1624)
    var_1648 = 1;
    var_1656 = -4504382268511091935;
    var_1664 = 16;
    pri = fun_0770(var_1656, var_1648)
    var_1672 = 1;
    var_1680 = -6477629637938931612;
    var_1688 = 16;
    pri = fun_0770(var_1680, var_1672)
    var_1696 = 1;
    var_1704 = -2747090564907400189;
    var_1712 = 16;
    pri = fun_0770(var_1704, var_1696)
    var_1720 = 1;
    var_1728 = 2558031901490264850;
    var_1736 = 16;
    pri = fun_0770(var_1728, var_1720)
    var_1744 = 0;
    var_1752 = 8802641224559852288;
    var_1760 = 16;
    pri = fun_07A8(var_1752, var_1744)
    var_1768 = 0;
    var_1776 = 8838721707033461072;
    var_1784 = 16;
    pri = fun_07A8(var_1776, var_1768)
    var_1792 = 0;
    var_1800 = -4060473859728235179;
    var_1808 = 16;
    pri = fun_07A8(var_1800, var_1792)
    var_1816 = 0;
    var_1824 = 9010937134125686001;
    var_1832 = 16;
    pri = fun_07A8(var_1824, var_1816)
    var_1840 = 3;
    var_1848 = 1;
    pri = EvCameraEnd(var_1848, var_1840)
    pri = 1;
    return pri;
}
// fun_CA88
fun_CA88() {
    pri = 0;
    return pri;
}
// fun_CAA0
fun_CAA0() {
    var_8 = 9010937134125686001;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = 100;
    var_32 = -6572827771961546186;
    pri = WorkSet(var_32, var_24)
    var_40 = -6572827771961546186;
    pri = WorkGet(var_40)
    OP_EQ_P_C_PRI 100
    OP_JZER lab_CB98
    var_48 = -6571976749961500097;
    pri = WorkGet(var_48)
    OP_EQ_P_C_PRI 100
    OP_JZER lab_CB98
    pri = 1;
    OP_JUMP lab_CBA0
// lab_CB98
    pri = 0;
// lab_CBA0
    OP_JZER lab_CBD0
    var_8 = 3092;
    var_16 = 8;
    pri = fun_9AB0(var_8)
// lab_CBD0
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 3092;
    OP_JSLESS lab_CC20
    OP_JUMP lab_CC70
// lab_CC20
    var_8 = -4060473859728235179;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = 8838721707033461072;
    var_32 = 8;
    pri = fun_06C0(var_24)
// lab_CC70
    var_8 = -6555520503448918311;
    pri = FlagReset(var_8)
    var_16 = -1443485124196728557;
    pri = FlagSet(var_16)
    pri = 0;
    return pri;
}
// fun_CCD0
fun_CCD0() {
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 35144;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    var_56 = -6572827771961546186;
    pri = WorkGet(var_56)
    OP_EQ_P_C_PRI 100
    OP_JZER lab_CDD0
    var_64 = -6571976749961500097;
    pri = WorkGet(var_64)
    OP_EQ_P_C_PRI 100
    OP_JZER lab_CDD0
    pri = 1;
    OP_JUMP lab_CDD8
// lab_CDD0
    pri = 0;
// lab_CDD8
    OP_JZER lab_CE10
    var_8 = 3756383737991395042;
    pri = ReserveScript(var_8)
// lab_CE10
    pri = 0;
    return pri;
}
// fun_CE20
fun_CE20() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9C48()
    var_16 = 0;
    pri = fun_9CA0()
    var_24 = 0;
    pri = fun_9D30()
    var_32 = 0;
    pri = fun_9D60()
    var_40 = 0;
    pri = fun_CA88()
    var_48 = 0;
    pri = fun_CAA0()
    var_56 = 0;
    pri = fun_CCD0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CF10
fun_CF10() {
    var_8 = 0;
    pri = fun_9CA0()
    var_16 = 0;
    pri = fun_CAA0()
    var_24 = 7;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
