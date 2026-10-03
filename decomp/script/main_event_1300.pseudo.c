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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0830
fun_0830() {
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
// fun_08A8
fun_08A8() {
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
// fun_0968
fun_0968() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_09B8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = arg_2;
    var_96 = arg_0;
    var_104 = arg_1;
    var_112 = 48;
    pri = fun_09B8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14D0(var_8)
    OP_JZER lab_0B30
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1500(var_24)
    OP_JNZ lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    OP_JUMP lab_0B40
// lab_0B40
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0BA0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B40
    pri = 0;
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0CD8
    pri = 0;
    return pri;
// lab_0CD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D18
// lab_0D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14D0(var_8)
    OP_JNZ lab_0DA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D90
    pri = 0;
    return pri;
// lab_0DA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0DE8
    pri = 0;
    return pri;
// lab_0DE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E90(var_8)
    pri = 0;
    return pri;
// lab_0E48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D18
    pri = 0;
    return pri;
// lab_0D90
    OP_JUMP lab_0DE8
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F18
    pri = 0;
    return pri;
// lab_0F18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14D0(var_8)
    OP_JZER lab_1048
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F70
    OP_ZERO_P_S 64
// lab_1048
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1080
    OP_CONST_S 64, 1
// lab_1080
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10B8
    OP_CONST_S 72, 1
// lab_10B8
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
// lab_0F70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F98
    OP_ZERO_P_S 72
// lab_0F98
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
    OP_JUMP lab_1158
// lab_1158
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E8
fun_11E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
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
    pri = fun_0C90(var_8)
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
    pri = fun_0C90(var_8)
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
    pri = fun_0C90(var_8)
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
    pri = fun_0C58(var_104, var_96)
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
    pri = arg_1;
    OP_JNZ lab_2680
    var_8 = 3408;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2680
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
// fun_26D8
fun_26D8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2750
fun_2750() {
    var_8 = 0;
    pri = fun_26D8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_27D0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_27D0
    pri = 1;
    return pri;
// lab_27D0
    var_8 = 0;
    pri = fun_26D8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2810
    pri = 1;
    return pri;
// lab_2810
    var_8 = 0;
    pri = fun_26D8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2840
fun_2840() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2890
fun_2890() {
    OP_JUMP lab_28A8
// lab_28A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_28E0
    pri = 0;
    return pri;
// lab_28E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_28A8
    pri = 0;
    return pri;
}
// fun_2920
fun_2920() {
    pri = arg_6;
    OP_JNZ lab_2958
    var_8 = 0;
    pri = fun_1168()
// lab_2958
    pri = arg_1;
    switch (pri) {
// switch_3EC0
        case default:
        {
// switch_3EC0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4210
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4210
            pri = 1;
            OP_JUMP lab_4218
// lab_4210
            pri = 0;
// lab_4218
            OP_JZER lab_4370
            var_16 = 11088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C58(var_24, var_16)
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
            OP_JUMP lab_43D0
// lab_4370
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
// lab_43D0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4430
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4490
// lab_4430
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4490
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4490
            pri = arg_2;
            OP_JZER lab_44D0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_44D0
            var_8 = 0;
            pri = fun_11A8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3EC0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1:
        {
// switch_3EC0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x2:
        {
// switch_3EC0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x3:
        {
// switch_3EC0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x4:
        {
// switch_3EC0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x5:
        {
// switch_3EC0_case_0x5
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x6:
        {
// switch_3EC0_case_0x6
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x7:
        {
// switch_3EC0_case_0x7
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x8:
        {
// switch_3EC0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x9:
        {
// switch_3EC0_case_0x9
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0xa:
        {
// switch_3EC0_case_0xa
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0xb:
        {
// switch_3EC0_case_0xb
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0xc:
        {
// switch_3EC0_case_0xc
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0xd:
        {
// switch_3EC0_case_0xd
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0xe:
        {
// switch_3EC0_case_0xe
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0xf:
        {
// switch_3EC0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x10:
        {
// switch_3EC0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x11:
        {
// switch_3EC0_case_0x11
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x12:
        {
// switch_3EC0_case_0x12
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x13:
        {
// switch_3EC0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x14:
        {
// switch_3EC0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x15:
        {
// switch_3EC0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x16:
        {
// switch_3EC0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x17:
        {
// switch_3EC0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x18:
        {
// switch_3EC0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x19:
        {
// switch_3EC0_case_0x19
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1a:
        {
// switch_3EC0_case_0x1a
            var_8 = 1;
            var_16 = 8648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = 8784;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BE0(var_48, var_40)
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
            pri = fun_0EC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1b:
        {
// switch_3EC0_case_0x1b
            var_8 = 3;
            var_16 = 8872;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = 9008;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BE0(var_48, var_40)
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
            pri = fun_0EC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1c:
        {
// switch_3EC0_case_0x1c
            var_8 = 2;
            var_16 = 9096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = 9232;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BE0(var_48, var_40)
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
            pri = fun_0EC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1d:
        {
// switch_3EC0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9320;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1e:
        {
// switch_3EC0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9456;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x1f:
        {
// switch_3EC0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9592;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x20:
        {
// switch_3EC0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9728;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x21:
        {
// switch_3EC0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9848;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x22:
        {
// switch_3EC0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9968;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x23:
        {
// switch_3EC0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10104;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x24:
        {
// switch_3EC0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10240;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x25:
        {
// switch_3EC0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10376;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x26:
        {
// switch_3EC0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10512;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x27:
        {
// switch_3EC0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x28:
        {
// switch_3EC0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
        case 0x29:
        {
// switch_3EC0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10944;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EC0_case_default
        }
    }
}
// fun_4500
fun_4500() {
    pri = arg_5;
    OP_JNZ lab_4538
    var_8 = 0;
    pri = fun_1168()
// lab_4538
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4588
    OP_CONST_S -8, -1
// lab_4588
    pri = arg_1;
    switch (pri) {
// switch_6040
        case default:
        {
// switch_6040_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_64E8
            var_520 = 30952;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_64E8
            pri = 1;
            OP_JUMP lab_64F0
// lab_64E8
            pri = 0;
// lab_64F0
            OP_JZER lab_6540
            var_8 = 64;
            var_16 = 31048;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6798
// lab_6540
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_65A8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_65A8
            pri = 1;
            OP_JUMP lab_65B0
// lab_65A8
            pri = 0;
// lab_65B0
            OP_JZER lab_6738
            var_16 = 31224;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C58(var_24, var_16)
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
            OP_JUMP lab_6798
// lab_6738
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
// lab_6798
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6808
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6808
            var_8 = 0;
            pri = fun_11A8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6040_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x1:
        {
// switch_6040_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x2:
        {
// switch_6040_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x3:
        {
// switch_6040_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x4:
        {
// switch_6040_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x5:
        {
// switch_6040_case_0x5
            var_8 = 2;
            var_16 = 21208;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E90(var_40)
            OP_JUMP switch_6040_case_default
        }
        case 0x6:
        {
// switch_6040_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x7:
        {
// switch_6040_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x8:
        {
// switch_6040_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x9:
        {
// switch_6040_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0xa:
        {
// switch_6040_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0xb:
        {
// switch_6040_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0xc:
        {
// switch_6040_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0xd:
        {
// switch_6040_case_0xd
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0xe:
        {
// switch_6040_case_0xe
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0xf:
        {
// switch_6040_case_0xf
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x10:
        {
// switch_6040_case_0x10
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x11:
        {
// switch_6040_case_0x11
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x12:
        {
// switch_6040_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x13:
        {
// switch_6040_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x14:
        {
// switch_6040_case_0x14
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x15:
        {
// switch_6040_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x16:
        {
// switch_6040_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x17:
        {
// switch_6040_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x18:
        {
// switch_6040_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x19:
        {
// switch_6040_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x1a:
        {
// switch_6040_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x1b:
        {
// switch_6040_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x1c:
        {
// switch_6040_case_0x1c
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x1d:
        {
// switch_6040_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x1e:
        {
// switch_6040_case_0x1e
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x1f:
        {
// switch_6040_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x20:
        {
// switch_6040_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x21:
        {
// switch_6040_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x22:
        {
// switch_6040_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x23:
        {
// switch_6040_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x24:
        {
// switch_6040_case_0x24
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x25:
        {
// switch_6040_case_0x25
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x26:
        {
// switch_6040_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x27:
        {
// switch_6040_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x28:
        {
// switch_6040_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x29:
        {
// switch_6040_case_0x29
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x2a:
        {
// switch_6040_case_0x2a
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x2b:
        {
// switch_6040_case_0x2b
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x2c:
        {
// switch_6040_case_0x2c
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x2d:
        {
// switch_6040_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x2e:
        {
// switch_6040_case_0x2e
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x2f:
        {
// switch_6040_case_0x2f
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x30:
        {
// switch_6040_case_0x30
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x31:
        {
// switch_6040_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x32:
        {
// switch_6040_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x33:
        {
// switch_6040_case_0x33
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x34:
        {
// switch_6040_case_0x34
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x35:
        {
// switch_6040_case_0x35
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x36:
        {
// switch_6040_case_0x36
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x37:
        {
// switch_6040_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x38:
        {
// switch_6040_case_0x38
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
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6040_case_default
        }
        case 0x39:
        {
// switch_6040_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x3a:
        {
// switch_6040_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x3b:
        {
// switch_6040_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x3c:
        {
// switch_6040_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30528;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x3d:
        {
// switch_6040_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30704;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
        case 0x3e:
        {
// switch_6040_case_0x3e
            var_8 = 4;
            var_16 = 30848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            OP_JUMP switch_6040_case_default
        }
    }
}
// fun_6838
fun_6838() {
    pri = arg_4;
    OP_JNZ lab_6870
    var_8 = 0;
    pri = fun_1168()
// lab_6870
    pri = arg_1;
    switch (pri) {
// switch_7C48
        case default:
        {
// switch_7C48_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31920;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_14D0(var_264)
            OP_JZER lab_8210
            pri = arg_3;
            switch (pri) {
// switch_81B8
                case default:
                {
// switch_81B8_case_default
                    OP_JUMP lab_84C8
// lab_84C8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8538
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8538
                    var_8 = 0;
                    pri = fun_11A8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_81B8_case_0x1
                    var_8 = 32;
                    var_16 = 32072;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_81B8_case_default
                }
                case 0x2:
                {
// switch_81B8_case_0x2
                    var_8 = 32;
                    var_16 = 32176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_81B8_case_default
                }
                case 0x3:
                {
// switch_81B8_case_0x3
                    var_8 = 32;
                    var_16 = 31976;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_81B8_case_default
                }
            }
// lab_8210
            pri = arg_1;
            OP_JZER lab_8260
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8260
            pri = 0;
            OP_JUMP lab_8268
// lab_8260
            pri = 1;
// lab_8268
            OP_JZER lab_82D0
            var_8 = 32272;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_82D0
            pri = 1;
            OP_JUMP lab_82D8
// lab_82D0
            pri = 0;
// lab_82D8
            OP_JZER lab_8328
            var_8 = 32;
            var_16 = 32368;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_84C8
// lab_8328
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8390
            var_8 = 32;
            var_16 = 32528;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_84C8
// lab_8390
            var_16 = 32648;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C58(var_24, var_16)
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
// switch_7C48_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1:
        {
// switch_7C48_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2:
        {
// switch_7C48_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x3:
        {
// switch_7C48_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x4:
        {
// switch_7C48_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x5:
        {
// switch_7C48_case_0x5
            var_8 = 1;
            var_16 = 31400;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E90(var_40)
            OP_JUMP switch_7C48_case_default
        }
        case 0x6:
        {
// switch_7C48_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x7:
        {
// switch_7C48_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x8:
        {
// switch_7C48_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x9:
        {
// switch_7C48_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0xa:
        {
// switch_7C48_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0xb:
        {
// switch_7C48_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0xc:
        {
// switch_7C48_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0xd:
        {
// switch_7C48_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0xe:
        {
// switch_7C48_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0xf:
        {
// switch_7C48_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x10:
        {
// switch_7C48_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x11:
        {
// switch_7C48_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x12:
        {
// switch_7C48_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x13:
        {
// switch_7C48_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x14:
        {
// switch_7C48_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x15:
        {
// switch_7C48_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x16:
        {
// switch_7C48_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x17:
        {
// switch_7C48_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x18:
        {
// switch_7C48_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x19:
        {
// switch_7C48_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1a:
        {
// switch_7C48_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1b:
        {
// switch_7C48_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1c:
        {
// switch_7C48_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1d:
        {
// switch_7C48_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1e:
        {
// switch_7C48_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x1f:
        {
// switch_7C48_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x20:
        {
// switch_7C48_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x21:
        {
// switch_7C48_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x22:
        {
// switch_7C48_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x23:
        {
// switch_7C48_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x24:
        {
// switch_7C48_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x25:
        {
// switch_7C48_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x26:
        {
// switch_7C48_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x27:
        {
// switch_7C48_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x28:
        {
// switch_7C48_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x29:
        {
// switch_7C48_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2a:
        {
// switch_7C48_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2b:
        {
// switch_7C48_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2c:
        {
// switch_7C48_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2d:
        {
// switch_7C48_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2e:
        {
// switch_7C48_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x2f:
        {
// switch_7C48_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x30:
        {
// switch_7C48_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x31:
        {
// switch_7C48_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x32:
        {
// switch_7C48_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x33:
        {
// switch_7C48_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x34:
        {
// switch_7C48_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x35:
        {
// switch_7C48_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x36:
        {
// switch_7C48_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x37:
        {
// switch_7C48_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x38:
        {
// switch_7C48_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x39:
        {
// switch_7C48_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x3a:
        {
// switch_7C48_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x3b:
        {
// switch_7C48_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x3c:
        {
// switch_7C48_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31496;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x3d:
        {
// switch_7C48_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31672;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
        case 0x3e:
        {
// switch_7C48_case_0x3e
            var_8 = 3;
            var_16 = 31816;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            OP_JUMP switch_7C48_case_default
        }
    }
}
// fun_8568
fun_8568() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8600
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2920(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8600
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8758
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_86C0
    var_24 = 32816;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_86C0
    pri = 1;
    OP_JUMP lab_86C8
// lab_8758
    pri = 0;
    return pri;
// lab_86C0
    pri = 0;
// lab_86C8
    OP_JZER lab_8758
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2920(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8768
fun_8768() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8568(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_87F0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_87F0
fun_87F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8988(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8858
fun_8858() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_88C8
    OP_CONST_S -8, 1
// lab_88C8
    pri = arg_0;
    OP_JNZ lab_88E8
    OP_ZERO_P_S -8
// lab_88E8
    pri = var_8;
    OP_JZER lab_8970
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8970
    pri = 0;
    return pri;
}
// fun_8988
fun_8988() {
    var_8 = 32920;
    var_16 = 8;
    pri = fun_23F0(var_8)
    var_24 = 0;
    pri = fun_2428()
    pri = arg_3;
    OP_JNZ lab_8AA8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8A70
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8B18(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8A98
// lab_8AA8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8CB8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8A70
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8BE0(var_16, var_8)
// lab_8A98
    OP_JUMP lab_8AF0
// lab_8AF0
    var_8 = 0;
    pri = fun_24C8()
    pri = 0;
    return pri;
}
// fun_8B18
fun_8B18() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8CB8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8BC8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8BC8
    pri = 0;
    return pri;
}
// fun_8BE0
fun_8BE0() {
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
// fun_8CB8
fun_8CB8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8D00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8FC0(var_8)
// lab_8D00
    pri = arg_4;
    OP_JNZ lab_8D68
    var_8 = 0;
    var_16 = 8;
    pri = fun_24F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2548(var_40, var_32, var_24)
// lab_8D68
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8E08
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2598(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2150(var_56, var_48, var_40)
    OP_JUMP lab_8EF8
// lab_8E08
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8EC0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8EC0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8EC0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2150(var_24, var_16, var_8)
// lab_8EF8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8F38
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8F38
    var_8 = 1;
    var_16 = 8;
    pri = fun_2248(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_91C8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8858(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8FC0
fun_8FC0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9020
    var_16 = 33080;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9020
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9160
        case default:
        {
// switch_9160_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9150
            var_16 = 33624;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9150
            OP_JUMP lab_9198
// lab_9198
            var_8 = 33840;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9160_case_0x1
            var_8 = 33296;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9198
        }
        case 0x2:
        {
// switch_9160_case_0x2
            var_8 = 33424;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9198
        }
    }
}
// fun_91C8
fun_91C8() {
    pri = arg_2;
    OP_JNZ lab_92B0
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
// lab_92B0
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
// fun_9328
fun_9328() {
    pri = 34024;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_93B0
// lab_93B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9530
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9520
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9470
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9470
    pri = 0;
    OP_JUMP lab_9478
// lab_9530
    pri = 0;
    return pri;
// lab_9520
    OP_JUMP lab_93A8
// lab_93A8
    OP_INC_P_S -936
// lab_9470
    pri = 1;
// lab_9478
    OP_JZER lab_94F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_94E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_94F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_94E8
}
// fun_9550
fun_9550() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_95E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 34944;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1778()
// lab_95E8
    pri = arg_4;
    OP_JZER lab_9620
    var_8 = 1;
    var_16 = 8;
    pri = fun_17A0(var_8)
// lab_9620
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9678
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9678
    pri = 0;
    OP_JUMP lab_9680
// lab_9678
    pri = 1;
// lab_9680
    OP_JZER lab_9748
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9748
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9720
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_16B8(var_32, var_24)
    OP_JUMP lab_9748
// lab_9748
    pri = arg_2;
    OP_JZER lab_9820
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_97F0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11E8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07F8(var_40)
    OP_JUMP lab_9820
// lab_9820
    pri = arg_3;
    OP_JZER lab_9858
    var_8 = 1;
    var_16 = 8;
    pri = fun_1740(var_8)
// lab_9858
    pri = 0;
    return pri;
// lab_97F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11E8(var_16, var_8)
// lab_9720
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_16B8(var_16, var_8)
}
// fun_9868
fun_9868() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9328(var_24)
    pri = 0;
    return pri;
}
// fun_98D0
fun_98D0() {
    pri = g_mode;
    switch (pri) {
// switch_9990
        case default:
        {
// switch_9990_case_default
            pri = CommandNOP()
            OP_JUMP lab_99D8
// lab_99D8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9990_case_0x0
            var_8 = 0;
            pri = fun_99E8()
            OP_JUMP lab_99D8
        }
        case 0x34ea182774527b7e:
        {
// switch_9990_case_0x34ea182774527b7e
            var_8 = 0;
            pri = fun_CCA8()
            OP_JUMP lab_99D8
        }
        case 0x5249822afe47540a:
        {
// switch_9990_case_0x5249822afe47540a
            var_8 = 0;
            pri = fun_CB68()
            OP_JUMP lab_99D8
        }
    }
}
// fun_99E8
fun_99E8() {
    pri = 0;
    return pri;
}
// fun_9A00
fun_9A00() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9550(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9A58
fun_9A58() {
    pri = 0;
    return pri;
}
// fun_9A70
fun_9A70() {
    pri = 0;
    return pri;
}
// fun_9A88
fun_9A88() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 34992;
    pri = SoundPostEvent(var_24)
    var_32 = 6910712898869243;
    pri = WorkGet(var_32)
    alt = 1310;
    OP_JSGEQ lab_A8A0
    var_40 = 0;
    var_48 = 4631952216750555136;
    var_56 = 3;
    OP_PUSH5_C 4672709378312618639, -4573562959620766433, 4667192630947054879, 4672948068543113462, -4580205857032068137
    var_64 = 4667192916820078100;
    var_72 = 30;
    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_104 = 0;
    var_112 = 48;
    pri = fun_1330(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    pri = fun_2890()
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C -4617991057905706598, 4672601409019550106, 4667020095582424269, 8802641224559852288
    var_144 = 48;
    pri = fun_0768(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 0;
    var_160 = 4631952216750555136;
    var_168 = 0;
    OP_PUSH5_C 4672569795311472476, -4571804884508417720, 4667336095224247091, 4672787600318597693, -4574133914018837955
    var_176 = 4667127221000318484;
    var_184 = 1;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 0;
    pri = fun_2890()
    var_200 = 30;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 3;
    OP_PUSH5_C 4672560059136008520, -4572162973455351808, 4667311086832273326, 4672797212799003525, -4574698887073654374
    var_240 = 4667083652852067860;
    var_248 = 30;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = 8;
    pri = fun_0060(var_256)
    var_272 = 35152;
    pri = SoundPostEvent(var_272)
    var_280 = 1;
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 0;
    var_320 = 47;
    var_328 = -8755446489224417383;
    var_336 = 56;
    pri = fun_4500(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C -9209591852000705275, -8755446489224417383
    var_384 = 56;
    pri = fun_2050(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_2248(var_392)
    var_408 = 0;
    pri = fun_2308()
    var_416 = 1;
    var_424 = 0;
    OP_PUSH5_C 4641240890982006784, 4156158420330092502, 4672684642049772749, 4667210311094029517, 4607182418800017408
    var_432 = 8802641224559852288;
    var_440 = 64;
    pri = fun_08A8(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_448 = 35344;
    pri = SoundPostEvent(var_448)
    var_456 = 1;
    var_464 = 1;
    var_472 = -1;
    var_480 = -1;
    var_488 = 0;
    var_496 = 47;
    var_504 = -8755440991666276328;
    var_512 = 56;
    pri = fun_4500(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 0;
    var_528 = 3;
    var_536 = 0;
    var_544 = 100;
    var_552 = -1;
    OP_PUSH2_C 8945895891528887410, -8755440991666276328
    var_560 = 56;
    pri = fun_2050(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 8;
    pri = fun_2248(var_568)
    var_584 = 0;
    pri = fun_2308()
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    var_616 = 834;
    pri = SoundPlayPokeVoice(var_616, var_608, var_600, var_592)
    var_624 = 1;
    var_632 = -1;
    var_640 = -1;
    var_648 = 3;
    var_656 = 0;
    var_664 = 30;
    var_672 = 4156158420330092502;
    var_680 = 56;
    pri = fun_2920(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C -6776169266455709661, 4156158420330092502
    var_728 = 56;
    pri = fun_2050(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 4156158420330092502;
    var_744 = 8;
    pri = fun_0C90(var_736)
    var_752 = 1;
    var_760 = 8;
    pri = fun_2248(var_752)
    var_768 = 0;
    pri = fun_2308()
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    OP_PUSH2_C -8755446489224417383, 4322625172868200955
    var_808 = 48;
    pri = fun_09B8(var_800, var_792, var_784, var_776, var_768, var_760)
    var_816 = 4322625172868200955;
    var_824 = 8;
    pri = fun_0AB8(var_816)
    var_832 = 1;
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 0;
    var_872 = 9;
    var_880 = 4322625172868200955;
    var_888 = 56;
    pri = fun_4500(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C 914550739556778404, 4322625172868200955
    var_936 = 56;
    pri = fun_2050(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 1;
    var_952 = 8;
    pri = fun_2248(var_944)
    var_960 = 0;
    pri = fun_2308()
    var_968 = 8802641224559852288;
    var_976 = 8;
    pri = fun_0AB8(var_968)
    var_984 = 1;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 9;
    var_1016 = 4322625172868200955;
    var_1024 = 40;
    pri = fun_6838(var_1016, var_1008, var_1000, var_992, var_984)
    var_1032 = 4322625172868200955;
    var_1040 = 8;
    pri = fun_0C90(var_1032)
    var_1048 = 1;
    var_1056 = 0;
    var_1064 = 0;
    OP_PUSH2_C 4602678819172646912, 4322625172868200955
    var_1072 = 0;
    var_1080 = 48;
    pri = fun_1330(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1088 = 0;
    var_1096 = 0;
    var_1104 = 0;
    var_1112 = 0;
    OP_PUSH2_C 4322625172868200955, 8802641224559852288
    var_1120 = 48;
    pri = fun_09B8(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1128 = 3;
    var_1136 = 8;
    pri = fun_0060(var_1128)
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = 0;
    var_1168 = 0;
    OP_PUSH2_C 8802641224559852288, 4322625172868200955
    var_1176 = 48;
    pri = fun_09B8(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1184 = 8802641224559852288;
    var_1192 = 8;
    pri = fun_0AB8(var_1184)
    var_1200 = 4322625172868200955;
    var_1208 = 8;
    pri = fun_0AB8(var_1200)
    var_1216 = 20;
    var_1224 = 8;
    pri = fun_0060(var_1216)
    var_1232 = 1;
    var_1240 = 1;
    var_1248 = -1;
    var_1256 = -1;
    var_1264 = 0;
    var_1272 = 8;
    var_1280 = 4322625172868200955;
    var_1288 = 56;
    pri = fun_4500(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 0;
    var_1304 = 3;
    var_1312 = 0;
    var_1320 = 100;
    var_1328 = -1;
    OP_PUSH2_C 914554038091663037, 4322625172868200955
    var_1336 = 56;
    pri = fun_2050(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 1;
    var_1352 = 8;
    pri = fun_2248(var_1344)
    var_1360 = 0;
    pri = fun_2308()
    var_1368 = 1;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 8;
    var_1400 = 4322625172868200955;
    var_1408 = 40;
    pri = fun_6838(var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1416 = 1;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 47;
    var_1448 = -8755446489224417383;
    var_1456 = 40;
    pri = fun_6838(var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1464 = 1;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 47;
    var_1496 = -8755440991666276328;
    var_1504 = 40;
    pri = fun_6838(var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1512 = 4322625172868200955;
    var_1520 = 8;
    pri = fun_0C90(var_1512)
    var_1528 = -8755446489224417383;
    var_1536 = 8;
    pri = fun_0C90(var_1528)
    var_1544 = -8755440991666276328;
    var_1552 = 8;
    pri = fun_0C90(var_1544)
    var_1560 = 0;
    var_1568 = 0;
    var_1576 = 0;
    var_1584 = 0;
    OP_PUSH2_C -8755446489224417383, 8802641224559852288
    var_1592 = 48;
    pri = fun_09B8(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1600 = 0;
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = 0;
    OP_PUSH2_C 8802641224559852288, -8755446489224417383
    var_1632 = 48;
    pri = fun_09B8(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1640 = 0;
    var_1648 = 0;
    var_1656 = 0;
    var_1664 = 0;
    OP_PUSH2_C 8802641224559852288, -8755440991666276328
    var_1672 = 48;
    pri = fun_09B8(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1680 = 8802641224559852288;
    var_1688 = 8;
    pri = fun_0AB8(var_1680)
    var_1696 = -8755446489224417383;
    var_1704 = 8;
    pri = fun_0AB8(var_1696)
    var_1712 = -8755440991666276328;
    var_1720 = 8;
    pri = fun_0AB8(var_1712)
    OP_JUMP lab_AC68
// lab_A8A0
    var_8 = 1;
    var_16 = 0;
    var_24 = 34944;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 3;
    OP_PUSH5_C 4672560059136008520, -4572162973455351808, 4667311086832273326, 4672797212799003525, -4574698887073654374
    var_80 = 4667083652852067860;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4626632339690723738, 4672627220055012147, 4667182493449846784, 8802641224559852288
    var_112 = 48;
    pri = fun_0768(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH3_C 4672627220055012147, 4667182493449846784, 8802641224559852288
    var_136 = 40;
    pri = fun_0718(var_128, var_120, var_112, var_104, var_96)
    var_144 = 1;
    var_152 = 0;
    var_160 = 4641240890982006784;
    var_168 = 0;
    var_176 = 0;
    OP_PUSH4_C 4672684642049772749, 4667210311094029517, 4607182418800017408, 8802641224559852288
    var_184 = 72;
    pri = fun_0830(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 15;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 35512;
    var_216 = 8;
    var_224 = 16;
    pri = fun_02A8(var_216, var_208)
    var_232 = 0;
    pri = fun_0378()
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_0AB8(var_240)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    OP_PUSH2_C -8755446489224417383, 8802641224559852288
    var_288 = 48;
    pri = fun_09B8(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    OP_PUSH2_C 8802641224559852288, -8755446489224417383
    var_328 = 48;
    pri = fun_09B8(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    OP_PUSH2_C 8802641224559852288, -8755440991666276328
    var_368 = 48;
    pri = fun_09B8(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 8802641224559852288;
    var_384 = 8;
    pri = fun_0AB8(var_376)
    var_392 = -8755446489224417383;
    var_400 = 8;
    pri = fun_0AB8(var_392)
    var_408 = -8755440991666276328;
    var_416 = 8;
    pri = fun_0AB8(var_408)
// lab_AC68
    var_8 = 35560;
    pri = SoundPostEvent(var_8)
    var_16 = 35752;
    pri = SoundPostEvent(var_16)
    var_24 = 1;
    var_32 = 1;
    var_40 = -1;
    var_48 = -1;
    var_56 = 0;
    var_64 = 47;
    var_72 = -8755446489224417383;
    var_80 = 56;
    pri = fun_4500(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 1;
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 0;
    var_128 = 47;
    var_136 = -8755440991666276328;
    var_144 = 56;
    pri = fun_4500(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C -9209595150535589908, -8755446489224417383
    var_192 = 56;
    pri = fun_2050(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2248(var_200)
    var_224 = 0;
    var_232 = 0;
    var_240 = 1;
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 48;
    pri = fun_2338(var_264, var_256, var_248, var_240, var_232, var_224)
    var_8 = pri;
    var_280 = 0;
    pri = fun_2308()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_C458
    var_288 = 1;
    var_296 = 3;
    var_304 = 0;
    var_312 = 47;
    var_320 = -8755440991666276328;
    var_328 = 40;
    pri = fun_6838(var_320, var_312, var_304, var_296, var_288)
    var_336 = 0;
    var_344 = 3;
    var_352 = 0;
    var_360 = 100;
    var_368 = -1;
    OP_PUSH2_C -9209597349558846330, -8755446489224417383
    var_376 = 56;
    pri = fun_2050(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = -8755440991666276328;
    var_392 = 8;
    pri = fun_0C90(var_384)
    var_400 = 1;
    var_408 = 8;
    pri = fun_2248(var_400)
    var_416 = 0;
    pri = fun_2308()
    var_424 = -1;
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    var_456 = 137;
    var_464 = 40;
    pri = fun_2638(var_456, var_448, var_440, var_432, var_424)
    var_472 = 0;
    pri = fun_2750()
    OP_JZER lab_AFF8
    var_480 = 0;
    pri = fun_CB18()
    var_488 = 0;
    pri = fun_2840()
// lab_C458
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 47;
    var_40 = -8755446489224417383;
    var_48 = 40;
    pri = fun_6838(var_40, var_32, var_24, var_16, var_8)
    var_56 = 1;
    var_64 = 3;
    var_72 = 0;
    var_80 = 47;
    var_88 = -8755440991666276328;
    var_96 = 40;
    pri = fun_6838(var_88, var_80, var_72, var_64, var_56)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C -9209594051023961697, -8755446489224417383
    var_144 = 56;
    pri = fun_2050(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = -8755446489224417383;
    var_160 = 8;
    pri = fun_0C90(var_152)
    var_168 = -8755440991666276328;
    var_176 = 8;
    pri = fun_0C90(var_168)
    var_184 = 1;
    var_192 = 8;
    pri = fun_2248(var_184)
    var_200 = 0;
    pri = fun_2308()
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    OP_PUSH2_C 4156158420330092502, -8755446489224417383
    var_240 = 48;
    pri = fun_09B8(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    OP_PUSH2_C 4156158420330092502, -8755440991666276328
    var_280 = 48;
    pri = fun_09B8(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 12;
    var_296 = 8;
    pri = fun_0060(var_288)
    var_304 = 36592;
    pri = SoundPostEvent(var_304)
    var_312 = 1;
    var_320 = 0;
    var_328 = 34944;
    var_336 = 8;
    var_344 = 32;
    pri = fun_0308(var_336, var_328, var_320, var_312)
    var_352 = 0;
    pri = fun_0378()
    var_360 = -8755446489224417383;
    var_368 = 8;
    pri = fun_0AB8(var_360)
    var_376 = -8755440991666276328;
    var_384 = 8;
    pri = fun_0AB8(var_376)
    var_392 = 3;
    var_400 = 1;
    pri = EvCameraEnd(var_400, var_392)
    var_408 = 1;
    var_416 = 1;
    var_424 = -150;
    pri = float(var_424)
    var_432 = pri;
    var_440 = 24868;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 10403;
    pri = float(var_456)
    var_464 = pri;
    var_472 = 8802641224559852288;
    var_480 = 48;
    pri = fun_0768(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 10;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 35512;
    var_512 = 8;
    var_520 = 16;
    pri = fun_02A8(var_512, var_504)
    var_528 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
// lab_AFF8
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4672684642049772749, 4667210311094029517, 8802641224559852288
    var_40 = 48;
    pri = fun_0768(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C -8755446489224417383, 8802641224559852288
    var_80 = 48;
    pri = fun_09B8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0AB8(var_88)
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 0;
    OP_PUSH5_C 4672560059136008520, -4572162973455351808, 4667311086832273326, 4672797212799003525, -4574698887073654374
    var_128 = 4667083652852067860;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_2890()
    var_152 = 15;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 35512;
    var_176 = 8;
    var_184 = 16;
    pri = fun_02A8(var_176, var_168)
    var_192 = 0;
    pri = fun_0378()
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    OP_PUSH2_C -9209596250047218119, -8755446489224417383
    var_240 = 56;
    pri = fun_2050(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_2248(var_248)
    var_264 = 0;
    pri = fun_2308()
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH2_C -8755440991666276328, -8755446489224417383
    var_304 = 48;
    pri = fun_09B8(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    OP_PUSH2_C -8755446489224417383, -8755440991666276328
    var_344 = 48;
    pri = fun_09B8(var_336, var_328, var_320, var_312, var_304, var_296)
    var_352 = -8755446489224417383;
    var_360 = 8;
    pri = fun_0AB8(var_352)
    var_368 = -8755440991666276328;
    var_376 = 8;
    pri = fun_0AB8(var_368)
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 0;
    var_432 = -8755446489224417383;
    var_440 = 56;
    pri = fun_2920(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 1;
    var_456 = -1;
    var_464 = -1;
    var_472 = 3;
    var_480 = 0;
    var_488 = 0;
    var_496 = -8755440991666276328;
    var_504 = 56;
    pri = fun_2920(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = -8755446489224417383;
    var_520 = 8;
    pri = fun_0C90(var_512)
    var_528 = -8755440991666276328;
    var_536 = 8;
    pri = fun_0C90(var_528)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH2_C 4156158420330092502, -8755446489224417383
    var_576 = 48;
    pri = fun_09B8(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH2_C 4156158420330092502, -8755440991666276328
    var_616 = 48;
    pri = fun_09B8(var_608, var_600, var_592, var_584, var_576, var_568)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C 8945893692505630988, -8755446489224417383
    var_664 = 56;
    pri = fun_2050(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = -8755446489224417383;
    var_680 = 8;
    pri = fun_0AB8(var_672)
    var_688 = -8755440991666276328;
    var_696 = 8;
    pri = fun_0AB8(var_688)
    var_704 = 1;
    var_712 = 8;
    pri = fun_2248(var_704)
    var_720 = 0;
    pri = fun_2308()
    var_728 = 35920;
    pri = SoundPostEvent(var_728)
    var_736 = 36112;
    pri = SoundPostEvent(var_736)
    var_744 = 1;
    var_752 = 1;
    var_760 = -1;
    var_768 = -1;
    var_776 = 0;
    var_784 = 47;
    var_792 = -8755446489224417383;
    var_800 = 56;
    pri = fun_4500(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 1;
    var_816 = 1;
    var_824 = -1;
    var_832 = -1;
    var_840 = 0;
    var_848 = 47;
    var_856 = -8755440991666276328;
    var_864 = 56;
    pri = fun_4500(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 0;
    var_880 = 3;
    var_888 = 0;
    var_896 = 100;
    var_904 = -1;
    OP_PUSH2_C -9209599548582102752, -8755440991666276328
    var_912 = 56;
    pri = fun_2050(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_920 = 1;
    var_928 = 8;
    pri = fun_2248(var_920)
    var_936 = 0;
    pri = fun_2308()
    var_944 = 1;
    var_952 = -1;
    var_960 = -1;
    var_968 = 3;
    var_976 = 0;
    var_984 = 30;
    var_992 = 4156158420330092502;
    var_1000 = 56;
    pri = fun_2920(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 834;
    pri = SoundPlayPokeVoice(var_1032, var_1024, var_1016, var_1008)
    var_1040 = 0;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 100;
    var_1072 = -1;
    OP_PUSH2_C -6776168166944081450, 4156158420330092502
    var_1080 = 56;
    pri = fun_2050(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1088 = 4156158420330092502;
    var_1096 = 8;
    pri = fun_0C90(var_1088)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_2248(var_1104)
    var_1120 = 0;
    pri = fun_2308()
    var_1128 = 1;
    var_1136 = 0;
    var_1144 = 30;
    pri = float(var_1144)
    var_1152 = pri;
    var_1160 = 0;
    pri = float(var_1160)
    var_1168 = pri;
    var_1176 = 0;
    OP_PUSH4_C 4672821888588709888, 4667209706362634240, 4607182418800017408, 4156158420330092502
    var_1184 = 72;
    pri = fun_0830(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1192 = 1;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 47;
    var_1224 = -8755446489224417383;
    var_1232 = 40;
    pri = fun_6838(var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1240 = 1;
    var_1248 = 3;
    var_1256 = 0;
    var_1264 = 47;
    var_1272 = -8755440991666276328;
    var_1280 = 40;
    pri = fun_6838(var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1288 = -8755446489224417383;
    var_1296 = 8;
    pri = fun_0C90(var_1288)
    var_1304 = -8755440991666276328;
    var_1312 = 8;
    pri = fun_0C90(var_1304)
    var_1320 = 40;
    var_1328 = 8;
    pri = fun_0060(var_1320)
    var_1336 = 1;
    var_1344 = 0;
    var_1352 = 30;
    pri = float(var_1352)
    var_1360 = pri;
    var_1368 = 0;
    pri = float(var_1368)
    var_1376 = pri;
    var_1384 = 0;
    OP_PUSH4_C 4672798249088712704, 4667137138595201024, 4611686018427387904, -8755440991666276328
    var_1392 = 72;
    pri = fun_0830(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1400 = 20;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 1;
    var_1424 = 0;
    var_1432 = 30;
    pri = float(var_1432)
    var_1440 = pri;
    var_1448 = 0;
    pri = float(var_1448)
    var_1456 = pri;
    var_1464 = 0;
    OP_PUSH4_C 4672799348600340480, 4667195962467287040, 4611686018427387904, -8755446489224417383
    var_1472 = 72;
    pri = fun_0830(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1480 = 20;
    var_1488 = 8;
    pri = fun_0060(var_1480)
    var_1496 = 36280;
    pri = SoundPostEvent(var_1496)
    var_1504 = 36432;
    pri = SoundPostEvent(var_1504)
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 0;
    var_1536 = 0;
    pri = float(var_1536)
    var_1544 = pri;
    var_1552 = 8802641224559852288;
    var_1560 = 40;
    pri = fun_0968(var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1568 = 8802641224559852288;
    var_1576 = 8;
    pri = fun_0AB8(var_1568)
    var_1584 = 0;
    var_1592 = 4631952216750555136;
    var_1600 = 3;
    OP_PUSH5_C 4672571760688507126, -4572374607453466132, 4667369179529126871, 4672773518323424952, -4574503525847631135
    var_1608 = 4667176737506475377;
    var_1616 = 105;
    pri = EvCameraMove(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1624 = 4;
    OP_PUSH2_C 4322625172868200955, 8802641224559852288
    var_1632 = 24;
    pri = fun_0A10(var_1624, var_1616, var_1608)
    var_1640 = 8802641224559852288;
    var_1648 = 8;
    pri = fun_0AB8(var_1640)
    var_1656 = 4322625172868200955;
    var_1664 = 8;
    pri = fun_0AB8(var_1656)
    var_1672 = 1;
    var_1680 = -1;
    var_1688 = -1;
    var_1696 = 3;
    var_1704 = 0;
    var_1712 = 0;
    var_1720 = 4322625172868200955;
    var_1728 = 56;
    pri = fun_2920(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1736 = 0;
    var_1744 = 3;
    var_1752 = 0;
    var_1760 = 100;
    var_1768 = -1;
    OP_PUSH2_C -7281597726909693784, 4322625172868200955
    var_1776 = 56;
    pri = fun_2050(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1784 = 4322625172868200955;
    var_1792 = 8;
    pri = fun_0C90(var_1784)
    var_1800 = 1;
    var_1808 = 8;
    pri = fun_2248(var_1800)
    var_1816 = 0;
    pri = fun_2308()
    var_1824 = 1;
    var_1832 = 1;
    var_1840 = -1;
    var_1848 = -1;
    var_1856 = 0;
    var_1864 = 8;
    var_1872 = 4322625172868200955;
    var_1880 = 56;
    pri = fun_4500(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1888 = 0;
    var_1896 = 3;
    var_1904 = 0;
    var_1912 = 100;
    var_1920 = -1;
    OP_PUSH2_C -7281596627398065573, 4322625172868200955
    var_1928 = 56;
    pri = fun_2050(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1936 = 1;
    var_1944 = 8;
    pri = fun_2248(var_1936)
    var_1952 = 0;
    pri = fun_2308()
    var_1960 = 1;
    var_1968 = 3;
    var_1976 = 0;
    var_1984 = 8;
    var_1992 = 4322625172868200955;
    var_2000 = 40;
    pri = fun_6838(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 0;
    var_2016 = 3;
    var_2024 = 0;
    var_2032 = 100;
    var_2040 = -1;
    OP_PUSH2_C -7281591129839924518, 4322625172868200955
    var_2048 = 56;
    pri = fun_2050(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2056 = 4322625172868200955;
    var_2064 = 8;
    pri = fun_0C90(var_2056)
    var_2072 = 1;
    var_2080 = 8;
    pri = fun_2248(var_2072)
    var_2088 = 0;
    pri = fun_2308()
    var_2096 = 0;
    var_2104 = -8755446489224417383;
    var_2112 = 16;
    pri = fun_07C0(var_2104, var_2096)
    var_2120 = 0;
    var_2128 = -8755440991666276328;
    var_2136 = 16;
    pri = fun_07C0(var_2128, var_2120)
    var_2144 = 0;
    var_2152 = 4156158420330092502;
    var_2160 = 16;
    pri = fun_07C0(var_2152, var_2144)
    var_2168 = 6;
    var_2176 = 4;
    var_2184 = 2;
    var_2192 = 1;
    var_2200 = 9;
    var_2208 = 1;
    var_2216 = 1266;
    var_2224 = 4322625172868200955;
    var_2232 = 64;
    pri = fun_8768(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2240 = 0;
    var_2248 = 4631952216750555136;
    var_2256 = 3;
    OP_PUSH5_C 4672794763636852654, -4573025694258969969, 4667162064523802706, 4673014138196826522, -4575313206210325381
    var_2264 = 4667094235651485204;
    var_2272 = 80;
    pri = EvCameraMove(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2280 = 0;
    var_2288 = 0;
    var_2296 = 0;
    var_2304 = -15;
    pri = float(var_2304)
    var_2312 = pri;
    var_2320 = 4322625172868200955;
    var_2328 = 40;
    pri = fun_0968(var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2336 = 0;
    var_2344 = 0;
    var_2352 = 0;
    var_2360 = -11;
    pri = float(var_2360)
    var_2368 = pri;
    var_2376 = 8802641224559852288;
    var_2384 = 40;
    pri = fun_0968(var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2392 = 0;
    var_2400 = 3;
    var_2408 = 0;
    var_2416 = 100;
    var_2424 = -1;
    OP_PUSH2_C -7281590030328296307, 4322625172868200955
    var_2432 = 56;
    pri = fun_2050(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2440 = 4322625172868200955;
    var_2448 = 8;
    pri = fun_0AB8(var_2440)
    var_2456 = 8802641224559852288;
    var_2464 = 8;
    pri = fun_0AB8(var_2456)
    var_2472 = 1;
    var_2480 = 8;
    pri = fun_2248(var_2472)
    var_2488 = 0;
    pri = fun_2308()
    var_2496 = 1;
    var_2504 = 0;
    var_2512 = 34944;
    var_2520 = 8;
    var_2528 = 32;
    pri = fun_0308(var_2520, var_2512, var_2504, var_2496)
    var_2536 = 0;
    pri = fun_0378()
    var_2544 = 3;
    var_2552 = 1;
    pri = EvCameraEnd(var_2552, var_2544)
    pri = 1;
    return pri;
}
// fun_C898
fun_C898() {
    pri = 0;
    return pri;
}
// fun_C8B0
fun_C8B0() {
    var_8 = -8755440991666276328;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = -8755446489224417383;
    var_32 = 8;
    pri = fun_06C0(var_24)
    var_40 = 4156158420330092502;
    var_48 = 8;
    pri = fun_06C0(var_40)
    var_56 = -1761483136653644672;
    var_64 = 8;
    pri = fun_0540(var_56)
    var_72 = -79520384900933986;
    var_80 = 8;
    pri = fun_0540(var_72)
    var_88 = 1320;
    var_96 = 8;
    pri = fun_9868(var_88)
    var_104 = -464315911094145909;
    pri = VanishFlagSet(var_104)
    var_112 = -464312612559261276;
    pri = VanishFlagSet(var_112)
    var_120 = 20;
    var_128 = 8073260580274969210;
    pri = WorkSet(var_128, var_120)
    var_136 = 1;
    var_144 = 1266;
    pri = ItemAdd(var_144, var_136)
    var_152 = 1;
    var_160 = 1081;
    pri = ItemSub(var_160, var_152)
    var_168 = -8053805891332954820;
    pri = FlagSet(var_168)
    pri = 0;
    return pri;
}
// fun_CAA8
fun_CAA8() {
    var_8 = 0;
    pri = fun_0570()
    var_16 = 35512;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02A8(var_24, var_16)
    var_40 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_CB18
fun_CB18() {
    var_8 = 1310;
    var_16 = 8;
    pri = fun_9868(var_8)
    pri = 0;
    return pri;
}
// fun_CB50
fun_CB50() {
    pri = 0;
    return pri;
}
// fun_CB68
fun_CB68() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9A00()
    var_16 = 0;
    pri = fun_9A58()
    var_24 = 0;
    pri = fun_9A70()
    var_32 = 0;
    pri = fun_9A88()
    OP_JZER lab_CC50
    var_40 = 0;
    pri = fun_C898()
    var_48 = 0;
    pri = fun_C8B0()
    var_56 = 0;
    pri = fun_CAA8()
    OP_JUMP lab_CC80
// lab_CC50
    var_8 = 0;
    pri = fun_CB18()
    var_16 = 0;
    pri = fun_CB50()
// lab_CC80
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CCA8
fun_CCA8() {
    var_8 = 0;
    pri = fun_9A58()
    var_16 = 0;
    pri = fun_C8B0()
    pri = 0;
    return pri;
}
