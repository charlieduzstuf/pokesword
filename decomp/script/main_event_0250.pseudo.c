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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
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
// fun_0858
fun_0858() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13A0(var_8)
    OP_JZER lab_09D0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_13D0(var_24)
    OP_JNZ lab_09D0
    pri = 0;
    return pri;
// lab_09D0
    OP_JUMP lab_09E0
// lab_09E0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A40
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09E0
    pri = 0;
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B30
fun_0B30() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B78
    pri = 0;
    return pri;
// lab_0B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BB8
// lab_0BB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13A0(var_8)
    OP_JNZ lab_0C40
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C30
    pri = 0;
    return pri;
// lab_0C40
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C88
    pri = 0;
    return pri;
// lab_0C88
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BB8
    pri = 0;
    return pri;
// lab_0C30
    OP_JUMP lab_0C88
}
// fun_0D30
fun_0D30() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D78
// lab_0D78
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DD0
    pri = 0;
    return pri;
// lab_0DD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E10
    pri = 0;
    return pri;
// lab_0E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D78
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EE0
    pri = 0;
    return pri;
// lab_0EE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13A0(var_8)
    OP_JZER lab_1010
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F38
    OP_ZERO_P_S 64
// lab_1010
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1048
    OP_CONST_S 64, 1
// lab_1048
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1080
    OP_CONST_S 72, 1
// lab_1080
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
// lab_0F38
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F60
    OP_ZERO_P_S 72
// lab_0F60
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
    OP_JUMP lab_1120
// lab_1120
    pri = 0;
    return pri;
}
// fun_1130
fun_1130() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1170
fun_1170() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11F0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1268(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1230(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12A8(var_24)
    pri = 0;
    return pri;
}
// fun_13A0
fun_13A0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_13D0
fun_13D0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1400
fun_1400() {
    OP_JUMP lab_1418
// lab_1418
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_14A8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1498
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B30(var_8)
    pri = 0;
    return pri;
// lab_14A8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1538
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1528
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B30(var_8)
    pri = 0;
    return pri;
// lab_1538
    pri = 0;
    return pri;
// lab_1528
    OP_JUMP lab_1548
// lab_1548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1418
    pri = 0;
    return pri;
// lab_1498
    OP_JUMP lab_1548
}
// fun_1588
fun_1588() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B30(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1400(var_40)
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_20;
    var_16 = arg_19;
    var_24 = arg_18;
    var_32 = arg_17;
    var_40 = arg_16;
    var_48 = arg_15;
    var_56 = arg_14;
    var_64 = arg_13;
    var_72 = arg_12;
    var_80 = arg_11;
    var_88 = arg_10;
    var_96 = arg_9;
    var_104 = arg_8;
    var_112 = arg_7;
    var_120 = arg_6;
    var_128 = arg_5;
    var_136 = arg_4;
    var_144 = arg_3;
    var_152 = arg_2;
    var_160 = arg_1;
    var_168 = arg_0;
    pri = CreatePathObject_(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1740
fun_1740() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
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
// switch_1D90
        case default:
        {
// switch_1D90_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DD8
// lab_1DD8
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
            OP_JNZ lab_1E80
            var_88 = 0;
            pri = fun_2150()
// lab_1E80
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D90_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1978
                case default:
                {
// switch_1978_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19F0
// lab_19F0
                    OP_JUMP lab_1DD8
                }
                case 0x0:
                {
// switch_1978_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19F0
                }
                case 0x1:
                {
// switch_1978_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19F0
                }
                case 0x2:
                {
// switch_1978_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19F0
                }
                case 0x3:
                {
// switch_1978_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19F0
                }
                case 0x4:
                {
// switch_1978_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19F0
                }
                case 0x5:
                {
// switch_1978_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19F0
                }
            }
        }
        case 0x65:
        {
// switch_1D90_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B30
                case default:
                {
// switch_1B30_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA8
// lab_1BA8
                    OP_JUMP lab_1DD8
                }
                case 0x0:
                {
// switch_1B30_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BA8
                }
                case 0x1:
                {
// switch_1B30_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BA8
                }
                case 0x2:
                {
// switch_1B30_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BA8
                }
                case 0x3:
                {
// switch_1B30_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA8
                }
                case 0x4:
                {
// switch_1B30_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BA8
                }
                case 0x5:
                {
// switch_1B30_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BA8
                }
            }
        }
        case 0x66:
        {
// switch_1D90_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CE8
                case default:
                {
// switch_1CE8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D60
// lab_1D60
                    OP_JUMP lab_1DD8
                }
                case 0x0:
                {
// switch_1CE8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D60
                }
                case 0x1:
                {
// switch_1CE8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D60
                }
                case 0x2:
                {
// switch_1CE8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D60
                }
                case 0x3:
                {
// switch_1CE8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D60
                }
                case 0x4:
                {
// switch_1CE8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D60
                }
                case 0x5:
                {
// switch_1CE8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D60
                }
            }
        }
    }
}
// fun_1E98
fun_1E98() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1778(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AF8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FA8
    pri = 1;
    return pri;
// lab_1FA8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FF0
fun_1FF0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2040
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F00(var_8)
    arg_2 = pri;
// lab_2040
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1778(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1E98(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20F0
fun_20F0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_20A0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    OP_JUMP lab_2168
// lab_2168
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21A8
    pri = 0;
    return pri;
// lab_21A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2168
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    var_8 = 0;
    pri = fun_2150()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2298
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2298
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22D8
fun_22D8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2310
fun_2310() {
    OP_JUMP lab_2328
// lab_2328
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2370
    OP_JUMP lab_23A0
    OP_JUMP lab_2390
// lab_2370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_23A0
    pri = 0;
    return pri;
// lab_2390
    OP_JUMP lab_2328
}
// fun_23B0
fun_23B0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_23E0
fun_23E0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2430
fun_2430() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2480
fun_2480() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24D0
fun_24D0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2520
fun_2520() {
    OP_JUMP lab_2538
// lab_2538
    pri = EvCameraMoveWait_()
    OP_JZER lab_2570
    pri = 0;
    return pri;
// lab_2570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2538
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    pri = arg_6;
    OP_JNZ lab_25E8
    var_8 = 0;
    pri = fun_1130()
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
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AF8(var_24, var_16)
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
            OP_JUMP lab_4060
// lab_4000
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
            pri = fun_0160(var_16, var_8, var_0)
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
            pri = fun_1170()
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1a:
        {
// switch_3B50_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A80(var_48, var_40)
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
            pri = fun_0E90(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1b:
        {
// switch_3B50_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A80(var_48, var_40)
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
            pri = fun_0E90(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1c:
        {
// switch_3B50_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A80(var_48, var_40)
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
            pri = fun_0E90(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B50_case_default
        }
        case 0x1d:
        {
// switch_3B50_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
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
            var_24 = 6688;
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
            var_24 = 6824;
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
            var_24 = 6960;
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
            var_24 = 7080;
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
            var_24 = 7200;
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
            var_24 = 7336;
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
            var_24 = 7472;
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
            var_24 = 7608;
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
            var_24 = 7744;
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
            var_24 = 7888;
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
            var_24 = 8032;
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
            var_24 = 8176;
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
    pri = fun_1130()
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
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AF8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6178
            pri = 1;
            OP_JUMP lab_6180
// lab_6178
            pri = 0;
// lab_6180
            OP_JZER lab_61D0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
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
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AF8(var_24, var_16)
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
            OP_JUMP lab_6428
// lab_63C8
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
            pri = fun_0160(var_16, var_8, var_0)
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
            pri = fun_1170()
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
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E58(var_40)
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
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_24 = 27760;
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
            var_24 = 27936;
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
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            OP_JUMP switch_5CD0_case_default
        }
    }
}
// fun_64C8
fun_64C8() {
    pri = arg_4;
    OP_JNZ lab_6500
    var_8 = 0;
    pri = fun_1130()
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
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_13A0(var_264)
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
                    pri = fun_1170()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7E48_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7E48_case_default
                }
                case 0x2:
                {
// switch_7E48_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7E48_case_default
                }
                case 0x3:
                {
// switch_7E48_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
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
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AF8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7F60
            pri = 1;
            OP_JUMP lab_7F68
// lab_7F60
            pri = 0;
// lab_7F68
            OP_JZER lab_7FB8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8158
// lab_7FB8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8020
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8158
// lab_8020
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AF8(var_24, var_16)
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
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E58(var_40)
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
            var_24 = 28728;
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
            var_24 = 28904;
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
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AB8(var_24, var_16, var_8)
            OP_JUMP switch_78D8_case_default
        }
    }
}
// fun_81F8
fun_81F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8408(var_16, var_8)
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
    OP_JZER lab_83F0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_83F0
    pri = 0;
    return pri;
}
// fun_8408
fun_8408() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AB8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8450
fun_8450() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_84E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B30(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_25B0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_84E8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8640
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_85A8
    var_24 = 30272;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_85A8
    pri = 1;
    OP_JUMP lab_85B0
// lab_8640
    pri = 0;
    return pri;
// lab_85A8
    pri = 0;
// lab_85B0
    OP_JZER lab_8640
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B30(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_25B0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8650
fun_8650() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8450(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_86D8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_86D8
fun_86D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8870(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8740
fun_8740() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_87B0
    OP_CONST_S -8, 1
// lab_87B0
    pri = arg_0;
    OP_JNZ lab_87D0
    OP_ZERO_P_S -8
// lab_87D0
    pri = var_8;
    OP_JZER lab_8858
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8858
    pri = 0;
    return pri;
}
// fun_8870
fun_8870() {
    var_8 = 30376;
    var_16 = 8;
    pri = fun_22D8(var_8)
    var_24 = 0;
    pri = fun_2310()
    pri = arg_3;
    OP_JNZ lab_8990
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8958
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8A00(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8980
// lab_8990
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8BA0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8958
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8AC8(var_16, var_8)
// lab_8980
    OP_JUMP lab_89D8
// lab_89D8
    var_8 = 0;
    pri = fun_23B0()
    pri = 0;
    return pri;
}
// fun_8A00
fun_8A00() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8BA0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8AB0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8AB0
    pri = 0;
    return pri;
}
// fun_8AC8
fun_8AC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2430(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_20F0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_21E8(var_72)
    var_88 = 0;
    pri = fun_22A8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_23E0(var_96)
    pri = 0;
    return pri;
}
// fun_8BA0
fun_8BA0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8BE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8EA8(var_8)
// lab_8BE8
    pri = arg_4;
    OP_JNZ lab_8C50
    var_8 = 0;
    var_16 = 8;
    pri = fun_23E0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2430(var_40, var_32, var_24)
// lab_8C50
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8CF0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2480(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_20F0(var_56, var_48, var_40)
    OP_JUMP lab_8DE0
// lab_8CF0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8DA8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8DA8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8DA8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_20F0(var_24, var_16, var_8)
// lab_8DE0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8E20
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8E20
    var_8 = 1;
    var_16 = 8;
    pri = fun_21E8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_90B0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8740(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8EA8
fun_8EA8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8F08
    var_16 = 30536;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8F08
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9048
        case default:
        {
// switch_9048_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9038
            var_16 = 31080;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9038
            OP_JUMP lab_9080
// lab_9080
            var_8 = 31296;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9048_case_0x1
            var_8 = 30752;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9080
        }
        case 0x2:
        {
// switch_9048_case_0x2
            var_8 = 30880;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9080
        }
    }
}
// fun_90B0
fun_90B0() {
    pri = arg_2;
    OP_JNZ lab_9198
    var_8 = 0;
    var_16 = 8;
    pri = fun_23E0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2430(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_24D0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9198
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_20F0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_21E8(var_40)
    var_56 = 0;
    pri = fun_22A8()
    pri = 0;
    return pri;
}
// fun_9210
fun_9210() {
    pri = 31480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9298
// lab_9298
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9418
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9408
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9358
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9358
    pri = 0;
    OP_JUMP lab_9360
// lab_9418
    pri = 0;
    return pri;
// lab_9408
    OP_JUMP lab_9290
// lab_9290
    OP_INC_P_S -936
// lab_9358
    pri = 1;
// lab_9360
    OP_JZER lab_93D8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_93D0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_93D8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_93D0
}
// fun_9438
fun_9438() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_94D0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1648()
// lab_94D0
    pri = arg_4;
    OP_JZER lab_9508
    var_8 = 1;
    var_16 = 8;
    pri = fun_1740(var_8)
// lab_9508
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9560
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9560
    pri = 0;
    OP_JUMP lab_9568
// lab_9560
    pri = 1;
// lab_9568
    OP_JZER lab_9630
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9630
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9608
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1588(var_32, var_24)
    OP_JUMP lab_9630
// lab_9630
    pri = arg_2;
    OP_JZER lab_9708
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_96D8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A8(var_40)
    OP_JUMP lab_9708
// lab_9708
    pri = arg_3;
    OP_JZER lab_9740
    var_8 = 1;
    var_16 = 8;
    pri = fun_1610(var_8)
// lab_9740
    pri = 0;
    return pri;
// lab_96D8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11B0(var_16, var_8)
// lab_9608
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1588(var_16, var_8)
}
// fun_9750
fun_9750() {
    var_8 = 3466787895896185279;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_9790
fun_9790() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9210(var_24)
    pri = 0;
    return pri;
}
// fun_97F8
fun_97F8() {
    pri = g_mode;
    switch (pri) {
// switch_98B8
        case default:
        {
// switch_98B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9900
// lab_9900
            pri = 0;
            return pri;
        }
        case 0x840d8321fd210025:
        {
// switch_98B8_case_0x840d8321fd210025
            var_8 = 0;
            pri = fun_B598()
            OP_JUMP lab_9900
        }
        case 0x0:
        {
// switch_98B8_case_0x0
            var_8 = 0;
            pri = fun_9910()
            OP_JUMP lab_9900
        }
        case 0x6693291e73157b11:
        {
// switch_98B8_case_0x6693291e73157b11
            var_8 = 0;
            pri = fun_B688()
            OP_JUMP lab_9900
        }
    }
}
// fun_9910
fun_9910() {
    pri = 0;
    return pri;
}
// fun_9928
fun_9928() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9438(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9980
fun_9980() {
    pri = 0;
    return pri;
}
// fun_9998
fun_9998() {
    pri = 0;
    return pri;
}
// fun_99B0
fun_99B0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C 8802641224559852288, -542322190474721943
    var_56 = 48;
    pri = fun_0900(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C -542322190474721943, 8802641224559852288
    var_96 = 48;
    pri = fun_0900(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 32448;
    pri = SoundPostEvent(var_104)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    OP_PUSH2_C 7813998231757044587, -542322190474721943
    var_152 = 56;
    pri = fun_1FF0(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_21E8(var_160)
    var_176 = 0;
    pri = fun_22A8()
    var_184 = 8802641224559852288;
    var_192 = 8;
    pri = fun_0958(var_184)
    var_200 = -542322190474721943;
    var_208 = 8;
    pri = fun_0958(var_200)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH4_C 4675329943331143680, 4673826319948473958, 4607182418800017408, 8802641224559852288
    var_256 = 72;
    pri = fun_07E0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 30;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 0;
    var_288 = 4631952216750555136;
    var_296 = 3;
    OP_PUSH5_C 4675342487384427069, -4578639448786673336, 4673834632256379945, 4675369663188697088, -4580362075644142551
    var_304 = 4673834632256379945;
    var_312 = 30;
    pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 8802641224559852288;
    var_328 = 8;
    pri = fun_0958(var_320)
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    OP_PUSH2_C -542322190474721943, 8802641224559852288
    var_368 = 48;
    pri = fun_0900(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    OP_PUSH2_C 8802641224559852288, -542322190474721943
    var_408 = 48;
    pri = fun_0900(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 8802641224559852288;
    var_424 = 8;
    pri = fun_0958(var_416)
    var_432 = -542322190474721943;
    var_440 = 8;
    pri = fun_0958(var_432)
    var_448 = 357722928481934510;
    var_456 = 8;
    pri = fun_0540(var_448)
    var_464 = 0;
    pri = fun_0570()
    var_472 = 1;
    var_480 = 8;
    pri = fun_0060(var_472)
    var_488 = 1;
    var_496 = 1;
    OP_PUSH4_C 4636033603912859648, 4675333997780271104, 4673685554972327936, 357722928481934510
    var_504 = 48;
    pri = fun_0718(var_496, var_488, var_480, var_472, var_464, var_456)
    var_512 = 1;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 0;
    var_536 = 2;
    var_544 = -542322190474721943;
    var_552 = 24;
    pri = fun_81F8(var_544, var_536, var_528)
    var_560 = 1;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = -542322190474721943;
    var_584 = 8;
    pri = fun_0B30(var_576)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C 7814003729315185642, -542322190474721943
    var_632 = 56;
    pri = fun_1FF0(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_21E8(var_640)
    var_656 = 0;
    pri = fun_22A8()
    var_664 = 1;
    var_672 = 357722928481934510;
    var_680 = 16;
    pri = fun_0770(var_672, var_664)
    var_688 = 32608;
    pri = SoundPostEvent(var_688)
    var_696 = 32768;
    pri = SoundPostEvent(var_696)
    var_704 = 32928;
    pri = SoundPostEvent(var_704)
    var_720 = 33112;
    var_728 = 1;
    var_736 = 0;
    var_744 = 1;
    var_752 = -1;
    var_760 = 0;
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    var_808 = 4675342793873293312;
    var_816 = 0;
    OP_PUSH2_C 4673790833210687488, 4675362172765732864
    var_824 = 0;
    OP_PUSH2_C 4673753449815343104, 4675370144225034240
    var_832 = 0;
    var_840 = 4673708094960697344;
    var_848 = 3;
    var_856 = 168;
    pri = fun_1670(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_8 = pri;
    var_864 = 1;
    var_872 = 4596373779694328218;
    var_880 = -1;
    var_888 = 4611686018427387904;
    var_896 = var_8;
    var_904 = 357722928481934510;
    var_912 = 48;
    pri = fun_0858(var_904, var_896, var_888, var_880, var_872, var_864)
    var_920 = 0;
    pri = fun_2520()
    var_928 = 10;
    var_936 = 8;
    pri = fun_0060(var_928)
    var_944 = 0;
    var_952 = 4631952216750555136;
    var_960 = 3;
    OP_PUSH5_C 4675343922247101317, -4578245207897417974, 4673809879500859638, 4675371098051371336, -4579867383372573573
    var_968 = 4673809879500859638;
    var_976 = 15;
    pri = EvCameraMove(var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_984 = 0;
    pri = fun_2520()
    var_992 = 357722928481934510;
    var_1000 = 8;
    pri = fun_0958(var_992)
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 0;
    OP_PUSH2_C 8802641224559852288, 357722928481934510
    var_1040 = 48;
    pri = fun_0900(var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1048 = 0;
    var_1056 = 0;
    var_1064 = 0;
    var_1072 = 0;
    OP_PUSH2_C 357722928481934510, 8802641224559852288
    var_1080 = 48;
    pri = fun_0900(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1088 = 0;
    var_1096 = 0;
    var_1104 = 0;
    var_1112 = 0;
    OP_PUSH2_C 357722928481934510, -542322190474721943
    var_1120 = 48;
    pri = fun_0900(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1128 = 1;
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 0;
    var_1168 = 12;
    var_1176 = -542322190474721943;
    var_1184 = 56;
    pri = fun_4190(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1192 = 4;
    var_1200 = 4;
    var_1208 = -542322190474721943;
    var_1216 = 24;
    pri = fun_12E0(var_1208, var_1200, var_1192)
    var_1224 = 0;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 100;
    var_1256 = -1;
    OP_PUSH2_C 8520937467937524607, 357722928481934510
    var_1264 = 56;
    pri = fun_1FF0(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 1;
    var_1280 = 8;
    pri = fun_21E8(var_1272)
    var_1288 = 0;
    pri = fun_22A8()
    var_1296 = 357722928481934510;
    var_1304 = 8;
    pri = fun_0958(var_1296)
    var_1312 = 8802641224559852288;
    var_1320 = 8;
    pri = fun_0958(var_1312)
    var_1328 = -542322190474721943;
    var_1336 = 8;
    pri = fun_0958(var_1328)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    OP_PUSH2_C 7814002629803557431, -542322190474721943
    var_1384 = 56;
    pri = fun_1FF0(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_21E8(var_1392)
    var_1408 = 0;
    pri = fun_22A8()
    var_1416 = -542322190474721943;
    var_1424 = 8;
    pri = fun_1348(var_1416)
    var_1432 = 1;
    var_1440 = 3;
    var_1448 = 0;
    var_1456 = 12;
    var_1464 = -542322190474721943;
    var_1472 = 40;
    pri = fun_64C8(var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1480 = -542322190474721943;
    var_1488 = 8;
    pri = fun_0B30(var_1480)
    var_1504 = 7829858067611776523;
    pri = WorkGet(var_1504)
    var_16 = pri;
    pri = var_16;
    alt = 1;
    OP_JSGEQ lab_A880
    var_1512 = 0;
    var_1520 = 3;
    var_1528 = 0;
    var_1536 = 100;
    var_1544 = -1;
    OP_PUSH2_C 8520938567449152818, 357722928481934510
    var_1552 = 56;
    pri = fun_1FF0(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1560 = 1;
    var_1568 = 8;
    pri = fun_21E8(var_1560)
    var_1576 = 0;
    pri = fun_22A8()
    pri = CallCaptureTutorial()
    var_1584 = 0;
    var_1592 = 4631952216750555136;
    var_1600 = 3;
    OP_PUSH5_C 4675343922247101317, -4578245207897417974, 4673809879500859638, 4675371098051371336, -4579867383372573573
    var_1608 = 4673809879500859638;
    var_1616 = 1;
    pri = EvCameraMove(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1624 = 33160;
    var_1632 = 8;
    var_1640 = 16;
    pri = fun_02A8(var_1632, var_1624)
    var_1648 = 0;
    pri = fun_0378()
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C 7814001530291929220, -542322190474721943
    var_1696 = 56;
    pri = fun_1FF0(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_21E8(var_1704)
    var_1720 = 0;
    pri = fun_22A8()
    OP_JUMP lab_A910
// lab_A880
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 8520933069891011763, 357722928481934510
    var_48 = 56;
    pri = fun_1FF0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_21E8(var_56)
    var_72 = 0;
    pri = fun_22A8()
// lab_A910
    var_8 = 0;
    var_16 = 2;
    var_24 = 357722928481934510;
    var_32 = 24;
    pri = fun_81F8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_0060(var_40)
    var_56 = 357722928481934510;
    var_64 = 8;
    pri = fun_0B30(var_56)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C 8520939666960781029, 357722928481934510
    var_112 = 56;
    pri = fun_1FF0(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_21E8(var_120)
    var_136 = 0;
    pri = fun_22A8()
    var_144 = 6;
    var_152 = 4;
    var_160 = 2;
    var_168 = 1;
    var_176 = 9;
    var_184 = 20;
    var_192 = 4;
    var_200 = 357722928481934510;
    var_208 = 64;
    pri = fun_8650(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    OP_PUSH2_C 7814000430780301009, -542322190474721943
    var_256 = 56;
    pri = fun_1FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_21E8(var_264)
    var_280 = 0;
    pri = fun_22A8()
    var_288 = 0;
    var_296 = 0;
    var_304 = 357722928481934510;
    var_312 = 24;
    pri = fun_81F8(var_304, var_296, var_288)
    var_320 = 1;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 357722928481934510;
    var_344 = 8;
    pri = fun_0B30(var_336)
    var_352 = 0;
    var_360 = 3;
    var_368 = 0;
    var_376 = 100;
    var_384 = -1;
    OP_PUSH2_C 8520931970379383552, 357722928481934510
    var_392 = 56;
    pri = fun_1FF0(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 1;
    var_408 = 8;
    pri = fun_21E8(var_400)
    var_416 = 0;
    pri = fun_22A8()
    var_424 = 1;
    var_432 = 0;
    var_440 = 30;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 0;
    pri = float(var_456)
    var_464 = pri;
    var_472 = 0;
    OP_PUSH4_C 4675345680091316224, 4673915078024626176, 4611686018427387904, 357722928481934510
    var_480 = 72;
    pri = fun_07E0(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 20;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 0;
    var_512 = 0;
    var_520 = 0;
    var_528 = 92;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 8802641224559852288;
    var_552 = 40;
    pri = fun_08B0(var_544, var_536, var_528, var_520, var_512)
    var_560 = 0;
    var_568 = 0;
    var_576 = 0;
    var_584 = 45;
    pri = float(var_584)
    var_592 = pri;
    var_600 = -542322190474721943;
    var_608 = 40;
    pri = fun_08B0(var_600, var_592, var_584, var_576, var_568)
    var_616 = 8802641224559852288;
    var_624 = 8;
    pri = fun_0958(var_616)
    var_632 = -542322190474721943;
    var_640 = 8;
    pri = fun_0958(var_632)
    var_648 = 50;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C -542322190474721943, 8802641224559852288
    var_696 = 48;
    pri = fun_0900(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 8802641224559852288, -542322190474721943
    var_736 = 48;
    pri = fun_0900(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 0;
    var_752 = 4631952216750555136;
    var_760 = 3;
    OP_PUSH5_C 4675342487384427069, -4578639448786673336, 4673834632256379945, 4675369663188697088, -4580362075644142551
    var_768 = 4673834632256379945;
    var_776 = 15;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 0;
    pri = fun_2520()
    var_792 = 8802641224559852288;
    var_800 = 8;
    pri = fun_0958(var_792)
    var_808 = -542322190474721943;
    var_816 = 8;
    pri = fun_0958(var_808)
    var_824 = 1;
    var_832 = 1;
    var_840 = -1;
    var_848 = -1;
    var_856 = 0;
    var_864 = 22;
    var_872 = -542322190474721943;
    var_880 = 56;
    pri = fun_4190(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 0;
    var_896 = 3;
    var_904 = 0;
    var_912 = 100;
    var_920 = -1;
    OP_PUSH2_C 7813999331268672798, -542322190474721943
    var_928 = 56;
    pri = fun_1FF0(var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_936 = 1;
    var_944 = 8;
    pri = fun_21E8(var_936)
    var_952 = 0;
    pri = fun_22A8()
    var_960 = 33208;
    var_968 = -542322190474721943;
    var_976 = 16;
    pri = fun_0D30(var_968, var_960)
    var_984 = 1;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 22;
    var_1016 = -542322190474721943;
    var_1024 = 40;
    pri = fun_64C8(var_1016, var_1008, var_1000, var_992, var_984)
    var_1032 = -542322190474721943;
    var_1040 = 8;
    pri = fun_0B30(var_1032)
    var_1048 = 1;
    var_1056 = 0;
    var_1064 = 30;
    pri = float(var_1064)
    var_1072 = pri;
    var_1080 = 0;
    pri = float(var_1080)
    var_1088 = pri;
    var_1096 = 0;
    OP_PUSH4_C 4675309258768646144, 4673963731414155264, 4611686018427387904, -542322190474721943
    var_1104 = 72;
    pri = fun_07E0(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 30;
    var_1120 = 8;
    pri = fun_0060(var_1112)
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = 92;
    pri = float(var_1152)
    var_1160 = pri;
    var_1168 = 8802641224559852288;
    var_1176 = 40;
    pri = fun_08B0(var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1184 = 8802641224559852288;
    var_1192 = 8;
    pri = fun_0958(var_1184)
    var_1200 = -542322190474721943;
    var_1208 = 8;
    pri = fun_0958(var_1200)
    var_1216 = 357722928481934510;
    var_1224 = 8;
    pri = fun_0958(var_1216)
    var_1232 = 30;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 33384;
    pri = SoundPostEvent(var_1248)
    var_1256 = 1;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = 33544;
    pri = SoundPostEvent(var_1272)
    var_1280 = 1;
    var_1288 = 8;
    pri = fun_0060(var_1280)
    var_1296 = 33672;
    pri = SoundPostEvent(var_1296)
    var_1304 = 3;
    var_1312 = 30;
    pri = EvCameraEnd(var_1312, var_1304)
    pri = 0;
    return pri;
}
// fun_B3E0
fun_B3E0() {
    pri = 0;
    return pri;
}
// fun_B3F8
fun_B3F8() {
    var_8 = -542322190474721943;
    var_16 = 8;
    pri = fun_06C0(var_8)
    var_24 = 357722928481934510;
    var_32 = 8;
    pri = fun_06C0(var_24)
    var_40 = 270;
    var_48 = 8;
    pri = fun_9790(var_40)
    var_56 = 1;
    var_64 = -8697999404008829828;
    pri = WorkSet(var_64, var_56)
    var_72 = -1772686665497876459;
    var_80 = 8;
    pri = fun_0540(var_72)
    var_88 = 702631533266588014;
    var_96 = 8;
    pri = fun_0540(var_88)
    var_104 = -3470649453704576271;
    var_112 = 8;
    pri = fun_0540(var_104)
    var_120 = 20;
    var_128 = 4;
    pri = ItemAdd(var_128, var_120)
    var_136 = 0;
    pri = fun_9750()
    pri = 0;
    return pri;
}
// fun_B568
fun_B568() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_B598
fun_B598() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9928()
    var_16 = 0;
    pri = fun_9980()
    var_24 = 0;
    pri = fun_9998()
    var_32 = 0;
    pri = fun_99B0()
    var_40 = 0;
    pri = fun_B3E0()
    var_48 = 0;
    pri = fun_B3F8()
    var_56 = 0;
    pri = fun_B568()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B688
fun_B688() {
    var_8 = 0;
    pri = fun_9980()
    var_16 = 0;
    pri = fun_B3F8()
    pri = 0;
    return pri;
}
