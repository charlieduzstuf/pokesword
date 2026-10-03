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
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0678
fun_0678() {
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
// fun_06F0
fun_06F0() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10C0(var_8)
    OP_JZER lab_0868
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10F0(var_24)
    OP_JNZ lab_0868
    pri = 0;
    return pri;
// lab_0868
    OP_JUMP lab_0878
// lab_0878
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08D8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0878
    pri = 0;
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A10
    pri = 0;
    return pri;
// lab_0A10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A50
// lab_0A50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10C0(var_8)
    OP_JNZ lab_0AD8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AC8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B20
    pri = 0;
    return pri;
// lab_0B20
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    pri = 0;
    return pri;
// lab_0B80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A50
    pri = 0;
    return pri;
// lab_0AC8
    OP_JUMP lab_0B20
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C00
fun_0C00() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C50
    pri = 0;
    return pri;
// lab_0C50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10C0(var_8)
    OP_JZER lab_0D80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CA8
    OP_ZERO_P_S 64
// lab_0D80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB8
    OP_CONST_S 64, 1
// lab_0DB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF0
    OP_CONST_S 72, 1
// lab_0DF0
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
// lab_0CA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD0
    OP_ZERO_P_S 72
// lab_0CD0
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
    OP_JUMP lab_0E90
// lab_0E90
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1030
fun_1030() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1068
fun_1068() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FF8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1030(var_24)
    pri = 0;
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1120
fun_1120() {
    OP_JUMP lab_1138
// lab_1138
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_11C8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_11B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    pri = 0;
    return pri;
// lab_11C8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1258
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1248
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    pri = 0;
    return pri;
// lab_1258
    pri = 0;
    return pri;
// lab_1248
    OP_JUMP lab_1268
// lab_1268
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1138
    pri = 0;
    return pri;
// lab_11B8
    OP_JUMP lab_1268
}
// fun_12A8
fun_12A8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1120(var_40)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1390
fun_1390() {
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
// fun_1460
fun_1460() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1498
fun_1498() {
    var_8 = arg_0;
    pri = SetShadowAreaFollowMode_(var_8)
    pri = 0;
    return pri;
}
// fun_14D0
fun_14D0() {
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
// switch_1AE8
        case default:
        {
// switch_1AE8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B30
// lab_1B30
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
            OP_JNZ lab_1BD8
            var_88 = 0;
            pri = fun_1EA8()
// lab_1BD8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1AE8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_16D0
                case default:
                {
// switch_16D0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1748
// lab_1748
                    OP_JUMP lab_1B30
                }
                case 0x0:
                {
// switch_16D0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1748
                }
                case 0x1:
                {
// switch_16D0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1748
                }
                case 0x2:
                {
// switch_16D0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1748
                }
                case 0x3:
                {
// switch_16D0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1748
                }
                case 0x4:
                {
// switch_16D0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1748
                }
                case 0x5:
                {
// switch_16D0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1748
                }
            }
        }
        case 0x65:
        {
// switch_1AE8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1888
                case default:
                {
// switch_1888_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1900
// lab_1900
                    OP_JUMP lab_1B30
                }
                case 0x0:
                {
// switch_1888_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1900
                }
                case 0x1:
                {
// switch_1888_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1900
                }
                case 0x2:
                {
// switch_1888_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1900
                }
                case 0x3:
                {
// switch_1888_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1900
                }
                case 0x4:
                {
// switch_1888_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1900
                }
                case 0x5:
                {
// switch_1888_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1900
                }
            }
        }
        case 0x66:
        {
// switch_1AE8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A40
                case default:
                {
// switch_1A40_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1AB8
// lab_1AB8
                    OP_JUMP lab_1B30
                }
                case 0x0:
                {
// switch_1A40_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1AB8
                }
                case 0x1:
                {
// switch_1A40_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1AB8
                }
                case 0x2:
                {
// switch_1A40_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1AB8
                }
                case 0x3:
                {
// switch_1A40_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1AB8
                }
                case 0x4:
                {
// switch_1A40_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1AB8
                }
                case 0x5:
                {
// switch_1A40_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1AB8
                }
            }
        }
    }
}
// fun_1BF0
fun_1BF0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_14D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C58
fun_1C58() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0990(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D00
    pri = 1;
    return pri;
// lab_1D00
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D48
fun_1D48() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C58(var_8)
    arg_2 = pri;
// lab_1D98
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_14D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1BF0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1DF8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
    OP_JUMP lab_1EC0
// lab_1EC0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F00
    pri = 0;
    return pri;
// lab_1F00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1EC0
    pri = 0;
    return pri;
}
// fun_1F40
fun_1F40() {
    var_8 = 0;
    pri = fun_1EA8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FF0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1FF0
    pri = 0;
    return pri;
}
// fun_2000
fun_2000() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2068
fun_2068() {
    OP_JUMP lab_2080
// lab_2080
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_20C8
    OP_JUMP lab_20F8
    OP_JUMP lab_20E8
// lab_20C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_20F8
    pri = 0;
    return pri;
// lab_20E8
    OP_JUMP lab_2080
}
// fun_2108
fun_2108() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2138
fun_2138() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2188
fun_2188() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21D8
fun_21D8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2228
fun_2228() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2278
fun_2278() {
    OP_JUMP lab_2290
// lab_2290
    pri = EvCameraMoveWait_()
    OP_JZER lab_22C8
    pri = 0;
    return pri;
// lab_22C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2290
    pri = 0;
    return pri;
}
// fun_2308
fun_2308() {
    pri = arg_6;
    OP_JNZ lab_2340
    var_8 = 0;
    pri = fun_0EA0()
// lab_2340
    pri = arg_1;
    switch (pri) {
// switch_38A8
        case default:
        {
// switch_38A8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3BF8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3BF8
            pri = 1;
            OP_JUMP lab_3C00
// lab_3BF8
            pri = 0;
// lab_3C00
            OP_JZER lab_3D58
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0990(var_24, var_16)
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
            OP_JUMP lab_3DB8
// lab_3D58
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
// lab_3DB8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E18
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E78
// lab_3E18
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E78
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E78
            pri = arg_2;
            OP_JZER lab_3EB8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3EB8
            var_8 = 0;
            pri = fun_0EE0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38A8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1:
        {
// switch_38A8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x2:
        {
// switch_38A8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x3:
        {
// switch_38A8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x4:
        {
// switch_38A8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x5:
        {
// switch_38A8_case_0x5
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0x6:
        {
// switch_38A8_case_0x6
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0x7:
        {
// switch_38A8_case_0x7
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0x8:
        {
// switch_38A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x9:
        {
// switch_38A8_case_0x9
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0xa:
        {
// switch_38A8_case_0xa
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0xb:
        {
// switch_38A8_case_0xb
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0xc:
        {
// switch_38A8_case_0xc
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0xd:
        {
// switch_38A8_case_0xd
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0xe:
        {
// switch_38A8_case_0xe
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0xf:
        {
// switch_38A8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x10:
        {
// switch_38A8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x11:
        {
// switch_38A8_case_0x11
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0x12:
        {
// switch_38A8_case_0x12
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0x13:
        {
// switch_38A8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x14:
        {
// switch_38A8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x15:
        {
// switch_38A8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x16:
        {
// switch_38A8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x17:
        {
// switch_38A8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x18:
        {
// switch_38A8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x19:
        {
// switch_38A8_case_0x19
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1a:
        {
// switch_38A8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0918(var_48, var_40)
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
            pri = fun_0C00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1b:
        {
// switch_38A8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0918(var_48, var_40)
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
            pri = fun_0C00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1c:
        {
// switch_38A8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0918(var_48, var_40)
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
            pri = fun_0C00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1d:
        {
// switch_38A8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1e:
        {
// switch_38A8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x1f:
        {
// switch_38A8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x20:
        {
// switch_38A8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x21:
        {
// switch_38A8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x22:
        {
// switch_38A8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x23:
        {
// switch_38A8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x24:
        {
// switch_38A8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x25:
        {
// switch_38A8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x26:
        {
// switch_38A8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x27:
        {
// switch_38A8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x28:
        {
// switch_38A8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
        case 0x29:
        {
// switch_38A8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38A8_case_default
        }
    }
}
// fun_3EE8
fun_3EE8() {
    pri = arg_5;
    OP_JNZ lab_3F20
    var_8 = 0;
    pri = fun_0EA0()
// lab_3F20
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3F70
    OP_CONST_S -8, -1
// lab_3F70
    pri = arg_1;
    switch (pri) {
// switch_5A28
        case default:
        {
// switch_5A28_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5ED0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0990(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5ED0
            pri = 1;
            OP_JUMP lab_5ED8
// lab_5ED0
            pri = 0;
// lab_5ED8
            OP_JZER lab_5F28
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6180
// lab_5F28
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5F90
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5F90
            pri = 1;
            OP_JUMP lab_5F98
// lab_5F90
            pri = 0;
// lab_5F98
            OP_JZER lab_6120
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0990(var_24, var_16)
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
            OP_JUMP lab_6180
// lab_6120
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
// lab_6180
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_61F0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_61F0
            var_8 = 0;
            pri = fun_0EE0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5A28_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1:
        {
// switch_5A28_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2:
        {
// switch_5A28_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x3:
        {
// switch_5A28_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x4:
        {
// switch_5A28_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x5:
        {
// switch_5A28_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BC8(var_40)
            OP_JUMP switch_5A28_case_default
        }
        case 0x6:
        {
// switch_5A28_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x7:
        {
// switch_5A28_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x8:
        {
// switch_5A28_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x9:
        {
// switch_5A28_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0xa:
        {
// switch_5A28_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0xb:
        {
// switch_5A28_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0xc:
        {
// switch_5A28_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0xd:
        {
// switch_5A28_case_0xd
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0xe:
        {
// switch_5A28_case_0xe
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0xf:
        {
// switch_5A28_case_0xf
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x10:
        {
// switch_5A28_case_0x10
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x11:
        {
// switch_5A28_case_0x11
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x12:
        {
// switch_5A28_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x13:
        {
// switch_5A28_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x14:
        {
// switch_5A28_case_0x14
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x15:
        {
// switch_5A28_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x16:
        {
// switch_5A28_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x17:
        {
// switch_5A28_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x18:
        {
// switch_5A28_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x19:
        {
// switch_5A28_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1a:
        {
// switch_5A28_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1b:
        {
// switch_5A28_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1c:
        {
// switch_5A28_case_0x1c
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1d:
        {
// switch_5A28_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1e:
        {
// switch_5A28_case_0x1e
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x1f:
        {
// switch_5A28_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x20:
        {
// switch_5A28_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x21:
        {
// switch_5A28_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x22:
        {
// switch_5A28_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x23:
        {
// switch_5A28_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x24:
        {
// switch_5A28_case_0x24
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x25:
        {
// switch_5A28_case_0x25
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x26:
        {
// switch_5A28_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x27:
        {
// switch_5A28_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x28:
        {
// switch_5A28_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x29:
        {
// switch_5A28_case_0x29
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2a:
        {
// switch_5A28_case_0x2a
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2b:
        {
// switch_5A28_case_0x2b
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2c:
        {
// switch_5A28_case_0x2c
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2d:
        {
// switch_5A28_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2e:
        {
// switch_5A28_case_0x2e
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x2f:
        {
// switch_5A28_case_0x2f
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x30:
        {
// switch_5A28_case_0x30
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x31:
        {
// switch_5A28_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x32:
        {
// switch_5A28_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x33:
        {
// switch_5A28_case_0x33
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x34:
        {
// switch_5A28_case_0x34
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x35:
        {
// switch_5A28_case_0x35
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x36:
        {
// switch_5A28_case_0x36
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x37:
        {
// switch_5A28_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x38:
        {
// switch_5A28_case_0x38
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
            pri = fun_0C00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A28_case_default
        }
        case 0x39:
        {
// switch_5A28_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x3a:
        {
// switch_5A28_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x3b:
        {
// switch_5A28_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x3c:
        {
// switch_5A28_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x3d:
        {
// switch_5A28_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
        case 0x3e:
        {
// switch_5A28_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            OP_JUMP switch_5A28_case_default
        }
    }
}
// fun_6220
fun_6220() {
    pri = arg_4;
    OP_JNZ lab_6258
    var_8 = 0;
    pri = fun_0EA0()
// lab_6258
    pri = arg_1;
    switch (pri) {
// switch_7630
        case default:
        {
// switch_7630_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_10C0(var_264)
            OP_JZER lab_7BF8
            pri = arg_3;
            switch (pri) {
// switch_7BA0
                case default:
                {
// switch_7BA0_case_default
                    OP_JUMP lab_7EB0
// lab_7EB0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7F20
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7F20
                    var_8 = 0;
                    pri = fun_0EE0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7BA0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BA0_case_default
                }
                case 0x2:
                {
// switch_7BA0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BA0_case_default
                }
                case 0x3:
                {
// switch_7BA0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BA0_case_default
                }
            }
// lab_7BF8
            pri = arg_1;
            OP_JZER lab_7C48
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7C48
            pri = 0;
            OP_JUMP lab_7C50
// lab_7C48
            pri = 1;
// lab_7C50
            OP_JZER lab_7CB8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0990(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7CB8
            pri = 1;
            OP_JUMP lab_7CC0
// lab_7CB8
            pri = 0;
// lab_7CC0
            OP_JZER lab_7D10
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7EB0
// lab_7D10
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7D78
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7EB0
// lab_7D78
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0990(var_24, var_16)
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
// switch_7630_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1:
        {
// switch_7630_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2:
        {
// switch_7630_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x3:
        {
// switch_7630_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x4:
        {
// switch_7630_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x5:
        {
// switch_7630_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BC8(var_40)
            OP_JUMP switch_7630_case_default
        }
        case 0x6:
        {
// switch_7630_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x7:
        {
// switch_7630_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x8:
        {
// switch_7630_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x9:
        {
// switch_7630_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0xa:
        {
// switch_7630_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0xb:
        {
// switch_7630_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0xc:
        {
// switch_7630_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0xd:
        {
// switch_7630_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0xe:
        {
// switch_7630_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0xf:
        {
// switch_7630_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x10:
        {
// switch_7630_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x11:
        {
// switch_7630_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x12:
        {
// switch_7630_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x13:
        {
// switch_7630_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x14:
        {
// switch_7630_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x15:
        {
// switch_7630_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x16:
        {
// switch_7630_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x17:
        {
// switch_7630_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x18:
        {
// switch_7630_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x19:
        {
// switch_7630_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1a:
        {
// switch_7630_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1b:
        {
// switch_7630_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1c:
        {
// switch_7630_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1d:
        {
// switch_7630_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1e:
        {
// switch_7630_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x1f:
        {
// switch_7630_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x20:
        {
// switch_7630_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x21:
        {
// switch_7630_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x22:
        {
// switch_7630_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x23:
        {
// switch_7630_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x24:
        {
// switch_7630_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x25:
        {
// switch_7630_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x26:
        {
// switch_7630_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x27:
        {
// switch_7630_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x28:
        {
// switch_7630_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x29:
        {
// switch_7630_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2a:
        {
// switch_7630_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2b:
        {
// switch_7630_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2c:
        {
// switch_7630_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2d:
        {
// switch_7630_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2e:
        {
// switch_7630_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x2f:
        {
// switch_7630_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x30:
        {
// switch_7630_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x31:
        {
// switch_7630_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x32:
        {
// switch_7630_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x33:
        {
// switch_7630_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x34:
        {
// switch_7630_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x35:
        {
// switch_7630_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x36:
        {
// switch_7630_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x37:
        {
// switch_7630_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x38:
        {
// switch_7630_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x39:
        {
// switch_7630_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x3a:
        {
// switch_7630_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x3b:
        {
// switch_7630_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x3c:
        {
// switch_7630_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x3d:
        {
// switch_7630_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
        case 0x3e:
        {
// switch_7630_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0950(var_24, var_16, var_8)
            OP_JUMP switch_7630_case_default
        }
    }
}
// fun_7F50
fun_7F50() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_7FE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2308(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7FE8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8140
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_80A8
    var_24 = 30048;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_80A8
    pri = 1;
    OP_JUMP lab_80B0
// lab_8140
    pri = 0;
    return pri;
// lab_80A8
    pri = 0;
// lab_80B0
    OP_JZER lab_8140
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09C8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2308(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8150
fun_8150() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_7F50(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_81D8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_81D8
fun_81D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8370(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8240
fun_8240() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_82B0
    OP_CONST_S -8, 1
// lab_82B0
    pri = arg_0;
    OP_JNZ lab_82D0
    OP_ZERO_P_S -8
// lab_82D0
    pri = var_8;
    OP_JZER lab_8358
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8358
    pri = 0;
    return pri;
}
// fun_8370
fun_8370() {
    var_8 = 30152;
    var_16 = 8;
    pri = fun_2030(var_8)
    var_24 = 0;
    pri = fun_2068()
    pri = arg_3;
    OP_JNZ lab_8490
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8458
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8500(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8480
// lab_8490
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_86A0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8458
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_85C8(var_16, var_8)
// lab_8480
    OP_JUMP lab_84D8
// lab_84D8
    var_8 = 0;
    pri = fun_2108()
    pri = 0;
    return pri;
}
// fun_8500
fun_8500() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_86A0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_85B0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_85B0
    pri = 0;
    return pri;
}
// fun_85C8
fun_85C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2188(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1E48(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1F40(var_72)
    var_88 = 0;
    pri = fun_2000()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2138(var_96)
    pri = 0;
    return pri;
}
// fun_86A0
fun_86A0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_86E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_89A8(var_8)
// lab_86E8
    pri = arg_4;
    OP_JNZ lab_8750
    var_8 = 0;
    var_16 = 8;
    pri = fun_2138(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2188(var_40, var_32, var_24)
// lab_8750
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_87F0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_21D8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1E48(var_56, var_48, var_40)
    OP_JUMP lab_88E0
// lab_87F0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_88A8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_88A8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_88A8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1E48(var_24, var_16, var_8)
// lab_88E0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8920
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8920
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F40(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8BB0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8240(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_89A8
fun_89A8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8A08
    var_16 = 30312;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8A08
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8B48
        case default:
        {
// switch_8B48_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8B38
            var_16 = 30856;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8B38
            OP_JUMP lab_8B80
// lab_8B80
            var_8 = 31072;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8B48_case_0x1
            var_8 = 30528;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8B80
        }
        case 0x2:
        {
// switch_8B48_case_0x2
            var_8 = 30656;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8B80
        }
    }
}
// fun_8BB0
fun_8BB0() {
    pri = arg_2;
    OP_JNZ lab_8C98
    var_8 = 0;
    var_16 = 8;
    pri = fun_2138(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2188(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2228(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8C98
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1E48(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1F40(var_40)
    var_56 = 0;
    pri = fun_2000()
    pri = 0;
    return pri;
}
// fun_8D10
fun_8D10() {
    pri = 31256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8D98
// lab_8D98
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8F18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8F08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8E58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8E58
    pri = 0;
    OP_JUMP lab_8E60
// lab_8F18
    pri = 0;
    return pri;
// lab_8F08
    OP_JUMP lab_8D90
// lab_8D90
    OP_INC_P_S -936
// lab_8E58
    pri = 1;
// lab_8E60
    OP_JZER lab_8ED8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8ED0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8ED8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8ED0
}
// fun_8F38
fun_8F38() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8FD0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1368()
// lab_8FD0
    pri = arg_4;
    OP_JZER lab_9008
    var_8 = 1;
    var_16 = 8;
    pri = fun_1460(var_8)
// lab_9008
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9060
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9060
    pri = 0;
    OP_JUMP lab_9068
// lab_9060
    pri = 1;
// lab_9068
    OP_JZER lab_9130
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9130
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9108
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_12A8(var_32, var_24)
    OP_JUMP lab_9130
// lab_9130
    pri = arg_2;
    OP_JZER lab_9208
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_91D8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F78(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0640(var_40)
    OP_JUMP lab_9208
// lab_9208
    pri = arg_3;
    OP_JZER lab_9240
    var_8 = 1;
    var_16 = 8;
    pri = fun_1330(var_8)
// lab_9240
    pri = 0;
    return pri;
// lab_91D8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F78(var_16, var_8)
// lab_9108
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_12A8(var_16, var_8)
}
// fun_9250
fun_9250() {
    var_8 = 3466787895896185279;
    pri = FlagSet(var_8)
    var_16 = 0;
    var_24 = 7829858067611776523;
    pri = WorkSet(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_92C0
fun_92C0() {
    var_8 = 3466787895896185279;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_9300
fun_9300() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8D10(var_24)
    pri = 0;
    return pri;
}
// fun_9368
fun_9368() {
    pri = g_mode;
    switch (pri) {
// switch_9478
        case default:
        {
// switch_9478_case_default
            pri = CommandNOP()
            OP_JUMP lab_94E0
// lab_94E0
            pri = 0;
            return pri;
        }
        case 0xf1e2f1bef065eda6:
        {
// switch_9478_case_0xf1e2f1bef065eda6
            var_8 = 0;
            pri = fun_B5E0()
            OP_JUMP lab_94E0
        }
        case 0xf92b3b5691fd4eeb:
        {
// switch_9478_case_0xf92b3b5691fd4eeb
            var_8 = 0;
            pri = fun_B4F0()
            OP_JUMP lab_94E0
        }
        case 0xf92b3c5691fd509e:
        {
// switch_9478_case_0xf92b3c5691fd509e
            var_8 = 0;
            pri = fun_C0D0()
            OP_JUMP lab_94E0
        }
        case 0x0:
        {
// switch_9478_case_0x0
            var_8 = 0;
            pri = fun_94F0()
            OP_JUMP lab_94E0
        }
        case 0x6df2be1e76e4fa73:
        {
// switch_9478_case_0x6df2be1e76e4fa73
            var_8 = 0;
            pri = fun_C1C0()
            OP_JUMP lab_94E0
        }
    }
}
// fun_94F0
fun_94F0() {
    pri = 0;
    return pri;
}
// fun_9508
fun_9508() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8F38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9560
fun_9560() {
    pri = 0;
    return pri;
}
// fun_9578
fun_9578() {
    pri = 0;
    return pri;
}
// fun_9590
fun_9590() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH4_C 4673328213693300736, 4675535895602921472, 4607182418800017408, -5291113835877623842
    var_48 = 72;
    pri = fun_0678(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 1;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 32224;
    pri = SoundPostEvent(var_72)
    var_80 = 1;
    var_88 = 1;
    var_96 = -1;
    OP_PUSH2_C -542323289986350154, 8802641224559852288
    var_104 = 40;
    pri = fun_0F20(var_96, var_88, var_80, var_72, var_64)
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    OP_PUSH2_C 8802641224559852288, -542323289986350154
    var_136 = 40;
    pri = fun_0F20(var_128, var_120, var_112, var_104, var_96)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH2_C 8802641224559852288, -542323289986350154
    var_176 = 48;
    pri = fun_0798(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = -542323289986350154;
    var_192 = 8;
    pri = fun_07F0(var_184)
    var_200 = 1;
    var_208 = 1;
    var_216 = -1;
    var_224 = -1;
    var_232 = 0;
    var_240 = 2;
    var_248 = -542323289986350154;
    var_256 = 56;
    pri = fun_3EE8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    OP_PUSH2_C -781457090534708568, -542323289986350154
    var_304 = 56;
    pri = fun_1D48(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1F40(var_312)
    var_328 = -5291113835877623842;
    var_336 = 8;
    pri = fun_07F0(var_328)
    var_344 = 0;
    pri = fun_2000()
    var_352 = 1;
    var_360 = 3;
    var_368 = 0;
    var_376 = 2;
    var_384 = -542323289986350154;
    var_392 = 40;
    pri = fun_6220(var_384, var_376, var_368, var_360, var_352)
    var_400 = 0;
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    OP_PUSH2_C -542323289986350154, 8802641224559852288
    var_432 = 48;
    pri = fun_0798(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = -1;
    var_448 = 8802641224559852288;
    var_456 = 16;
    pri = fun_0F78(var_448, var_440)
    var_464 = 1;
    var_472 = 0;
    var_480 = 4641240890982006784;
    var_488 = 0;
    var_496 = 0;
    OP_PUSH4_C 4673297977123536896, 4675530398044782592, 4607182418800017408, -5291113835877623842
    var_504 = 72;
    pri = fun_0678(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_512 = 3;
    OP_PUSH5_C 4673275654288713974, -4567206199115477156, 4675502198320309207, 4673420883282068767, -4568500720125555507
    var_520 = 4675494903060658913;
    var_528 = 70;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 10;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = 8802641224559852288;
    var_560 = 8;
    pri = fun_07F0(var_552)
    var_568 = -1;
    var_576 = -542323289986350154;
    var_584 = 16;
    pri = fun_0F78(var_576, var_568)
    var_592 = -542323289986350154;
    var_600 = 8;
    pri = fun_09C8(var_592)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 90;
    pri = float(var_632)
    var_640 = pri;
    var_648 = -542323289986350154;
    var_656 = 40;
    pri = fun_0748(var_648, var_640, var_632, var_624, var_616)
    var_664 = -542323289986350154;
    var_672 = 8;
    pri = fun_07F0(var_664)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C -781453791999823935, -542323289986350154
    var_720 = 56;
    pri = fun_1D48(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 1;
    var_736 = 8;
    pri = fun_1F40(var_728)
    var_744 = 0;
    pri = fun_2000()
    var_752 = 1;
    var_760 = 1;
    var_768 = -1;
    var_776 = -1;
    var_784 = 0;
    var_792 = 3;
    var_800 = -542323289986350154;
    var_808 = 56;
    pri = fun_3EE8(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 0;
    var_824 = 3;
    var_832 = 0;
    var_840 = 100;
    var_848 = -1;
    OP_PUSH2_C -781454891511452146, -542323289986350154
    var_856 = 56;
    pri = fun_1D48(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1F40(var_864)
    var_880 = 0;
    pri = fun_2000()
    var_888 = 1;
    var_896 = 3;
    var_904 = 0;
    var_912 = 3;
    var_920 = -542323289986350154;
    var_928 = 40;
    pri = fun_6220(var_920, var_912, var_904, var_896, var_888)
    var_936 = -542323289986350154;
    var_944 = 8;
    pri = fun_09C8(var_936)
    var_952 = -5291113835877623842;
    var_960 = 8;
    pri = fun_07F0(var_952)
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_968 = 0;
    OP_PUSH5_C 4673299686864118088, -4567601495535895183, 4675495998449118085, 4673343752541380280, -4568136913718156984
    var_976 = 4675471296546010563;
    var_984 = 1;
    pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_992 = 0;
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = -100;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = -5291113835877623842;
    var_1040 = 40;
    pri = fun_0748(var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1048 = 0;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 100;
    var_1080 = -1;
    OP_PUSH2_C -781451592976567513, -542323289986350154
    var_1088 = 56;
    pri = fun_1D48(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 1;
    var_1104 = 8;
    pri = fun_1F40(var_1096)
    var_1112 = 0;
    pri = fun_2000()
    var_1120 = -5291113835877623842;
    var_1128 = 8;
    pri = fun_07F0(var_1120)
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = -542323289986350154;
    var_1192 = 56;
    pri = fun_2308(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 0;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 100;
    var_1232 = -1;
    OP_PUSH2_C -781452692488195724, -542323289986350154
    var_1240 = 56;
    pri = fun_1D48(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = 1;
    var_1256 = 8;
    pri = fun_1F40(var_1248)
    var_1264 = 0;
    pri = fun_2000()
    var_1272 = -542323289986350154;
    var_1280 = 8;
    pri = fun_09C8(var_1272)
    var_1288 = 1;
    var_1296 = 1;
    var_1304 = -1;
    OP_PUSH2_C 8802641224559852288, -542323289986350154
    var_1312 = 40;
    pri = fun_0F20(var_1304, var_1296, var_1288, var_1280, var_1272)
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_1320 = 3;
    OP_PUSH5_C 4673258012624646308, -4567637823400076902, 4675477239406358692, 4673352543136844349, -4567976868805617910
    var_1328 = 4675460367400430469;
    var_1336 = 40;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 0;
    OP_PUSH2_C 8802641224559852288, -542323289986350154
    var_1376 = 48;
    pri = fun_0798(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1384 = -542323289986350154;
    var_1392 = 8;
    pri = fun_07F0(var_1384)
    var_1400 = 10;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 1;
    var_1424 = 1;
    var_1432 = -1;
    var_1440 = -1;
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = -542323289986350154;
    var_1472 = 56;
    pri = fun_3EE8(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH2_C -781449393953311091, -542323289986350154
    var_1520 = 56;
    pri = fun_1D48(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_1F40(var_1528)
    var_1544 = 0;
    pri = fun_2000()
    var_1552 = 0;
    var_1560 = -5291113835877623842;
    var_1568 = 16;
    pri = fun_05C8(var_1560, var_1552)
    var_1576 = 1;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 0;
    var_1608 = -542323289986350154;
    var_1616 = 40;
    pri = fun_6220(var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1624 = -542323289986350154;
    var_1632 = 8;
    pri = fun_09C8(var_1624)
    var_1640 = 1;
    var_1648 = -1;
    var_1656 = -1;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 19;
    var_1688 = 8802641224559852288;
    var_1696 = 56;
    pri = fun_2308(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 8802641224559852288;
    var_1712 = 8;
    pri = fun_09C8(var_1704)
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_1720 = 3;
    OP_PUSH5_C 4673277754355923026, -4567518680320091095, 4675485507733799567, 4673397639606257582, -4568094604510720164
    var_1728 = 4675445508875170611;
    var_1736 = 1;
    pri = EvCameraMove(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1744 = 0;
    var_1752 = 0;
    var_1760 = 0;
    var_1768 = -10;
    pri = float(var_1768)
    var_1776 = pri;
    var_1784 = -542323289986350154;
    var_1792 = 40;
    pri = fun_0748(var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1800 = -542323289986350154;
    var_1808 = 8;
    pri = fun_07F0(var_1800)
    var_1816 = 6;
    var_1824 = -542323289986350154;
    var_1832 = 16;
    pri = fun_0FB8(var_1824, var_1816)
    var_1840 = 1;
    var_1848 = 1;
    var_1856 = -1;
    OP_PUSH2_C -542323289986350154, 8802641224559852288
    var_1864 = 40;
    pri = fun_0F20(var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1872 = 0;
    var_1880 = 3;
    var_1888 = 0;
    var_1896 = 100;
    var_1904 = -1;
    OP_PUSH2_C -781450493464939302, -542323289986350154
    var_1912 = 56;
    pri = fun_1D48(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1920 = 1;
    var_1928 = 8;
    pri = fun_1F40(var_1920)
    var_1936 = 0;
    pri = fun_2000()
    var_1944 = -1;
    var_1952 = -542323289986350154;
    var_1960 = 16;
    pri = fun_0F78(var_1952, var_1944)
    var_1968 = 1;
    var_1976 = 0;
    var_1984 = 4641240890982006784;
    var_1992 = 0;
    var_2000 = 0;
    OP_PUSH4_C 4673502486286303232, 4675481057460486144, 4611686018427387904, -542323289986350154
    var_2008 = 72;
    pri = fun_0678(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2016 = -542323289986350154;
    var_2024 = 8;
    pri = fun_07F0(var_2016)
    var_2032 = 32384;
    pri = SoundPostEvent(var_2032)
    var_2040 = -542323289986350154;
    var_2048 = 8;
    pri = fun_1068(var_2040)
    var_2056 = -1;
    var_2064 = 8802641224559852288;
    var_2072 = 16;
    pri = fun_0F78(var_2064, var_2056)
    var_2080 = 0;
    var_2088 = 0;
    var_2096 = 0;
    var_2104 = 0;
    pri = float(var_2104)
    var_2112 = pri;
    var_2120 = 8802641224559852288;
    var_2128 = 40;
    pri = fun_0748(var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2136 = 3;
    var_2144 = 20;
    pri = EvCameraEnd(var_2144, var_2136)
    var_2152 = 8802641224559852288;
    var_2160 = 8;
    pri = fun_07F0(var_2152)
    pri = 0;
    return pri;
}
// fun_A7A8
fun_A7A8() {
    pri = 0;
    return pri;
}
// fun_A7C0
fun_A7C0() {
    var_8 = -542323289986350154;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = -5291113835877623842;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 345;
    var_48 = 8;
    pri = fun_9300(var_40)
    var_56 = -4507474598933643017;
    pri = VanishFlagReset(var_56)
    var_64 = 0;
    pri = fun_9250()
    var_72 = 3447853788456145154;
    pri = FlagSet(var_72)
    pri = 0;
    return pri;
}
// fun_A8B0
fun_A8B0() {
    pri = 0;
    return pri;
}
// fun_A8C8
fun_A8C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8F38(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A920
fun_A920() {
    var_8 = 0;
    pri = fun_92C0()
    pri = 0;
    return pri;
}
// fun_A950
fun_A950() {
    pri = 0;
    return pri;
}
// fun_A968
fun_A968() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0600(var_16, var_8)
    var_32 = 32544;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 4631952216750555136;
    var_56 = 0;
    OP_PUSH5_C 4676016100434404966, -4578740955700149617, 4672031221530838958, 4676031501843531039, -4579603676503767777
    var_64 = 4672009544659097354;
    var_72 = 1;
    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_80 = 0;
    pri = fun_2278()
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C -4582838351751754547, 4676044254804023706, 4672027903754502144, 8802641224559852288
    var_104 = 48;
    pri = fun_0570(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C 8802641224559852288, -4507474598933643017
    var_144 = 48;
    pri = fun_0798(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    OP_PUSH2_C -4507474598933643017, 8802641224559852288
    var_184 = 48;
    pri = fun_0798(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = -4507474598933643017;
    var_200 = 8;
    pri = fun_07F0(var_192)
    var_208 = 8802641224559852288;
    var_216 = 8;
    pri = fun_07F0(var_208)
    var_224 = 1;
    var_232 = 1;
    var_240 = -1;
    OP_PUSH2_C -4507474598933643017, 8802641224559852288
    var_248 = 40;
    pri = fun_0F20(var_240, var_232, var_224, var_216, var_208)
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    OP_PUSH2_C 8802641224559852288, -4507474598933643017
    var_280 = 40;
    pri = fun_0F20(var_272, var_264, var_256, var_248, var_240)
    var_288 = 0;
    var_296 = 4631952216750555136;
    var_304 = 3;
    OP_PUSH5_C 4676022718120014643, -4577866448131881697, 4672041540447465636, 4676055909627278131, -4579725942196776468
    var_312 = 4671994824947180503;
    var_320 = 25;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C -781464787116106045, -4507474598933643017
    var_368 = 56;
    pri = fun_1D48(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_1F40(var_376)
    var_400 = 7829858067611776523;
    pri = WorkGet(var_400)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_AEC0
        case default:
        {
// switch_AEC0_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -782446650999909243, -4507474598933643017
            var_48 = 56;
            pri = fun_1D48(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_AEF8
// lab_AEF8
            var_8 = 1;
            var_16 = 8;
            pri = fun_1F40(var_8)
            var_24 = 0;
            pri = fun_2000()
            var_32 = -1;
            var_40 = -4507474598933643017;
            var_48 = 16;
            pri = fun_0F78(var_40, var_32)
            var_56 = 10;
            var_64 = 8;
            pri = fun_0060(var_56)
            var_72 = 0;
            pri = fun_2278()
            var_80 = 6;
            var_88 = 4;
            var_96 = 2;
            var_104 = 1;
            var_112 = 9;
            var_120 = 1;
            var_128 = 367;
            var_136 = -4507474598933643017;
            var_144 = 64;
            pri = fun_8150(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_152 = 1;
            var_160 = 1;
            var_168 = -1;
            var_176 = -1;
            var_184 = 0;
            var_192 = 1;
            var_200 = -4507474598933643017;
            var_208 = 56;
            pri = fun_3EE8(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 0;
            var_224 = 3;
            var_232 = 0;
            var_240 = 100;
            var_248 = -1;
            OP_PUSH2_C -782449949534793876, -4507474598933643017
            var_256 = 56;
            pri = fun_1D48(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
            var_264 = 1;
            var_272 = 8;
            pri = fun_1F40(var_264)
            var_280 = 0;
            pri = fun_2000()
            var_288 = 1;
            var_296 = 3;
            var_304 = 0;
            var_312 = 1;
            var_320 = -4507474598933643017;
            var_328 = 40;
            pri = fun_6220(var_320, var_312, var_304, var_296, var_288)
            var_336 = -4507474598933643017;
            var_344 = 8;
            pri = fun_09C8(var_336)
            var_352 = 0;
            var_360 = 3;
            var_368 = 0;
            var_376 = 100;
            var_384 = -1;
            OP_PUSH2_C -782448850023165665, -4507474598933643017
            var_392 = 56;
            pri = fun_1D48(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_400 = 1;
            var_408 = 8;
            pri = fun_1F40(var_400)
            var_416 = 0;
            pri = fun_2000()
            var_424 = -1;
            var_432 = -4507474598933643017;
            var_440 = 16;
            pri = fun_0F78(var_432, var_424)
            var_448 = 1;
            var_456 = 0;
            var_464 = 4641240890982006784;
            var_472 = 0;
            var_480 = 0;
            OP_PUSH4_C 4675997003291820032, 4672024467780665344, 4607182418800017408, -4507474598933643017
            var_488 = 72;
            pri = fun_0678(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
            var_496 = 15;
            var_504 = 8;
            pri = fun_0060(var_496)
            var_512 = 1;
            var_520 = 0;
            var_528 = 32176;
            var_536 = 8;
            var_544 = 32;
            pri = fun_0308(var_536, var_528, var_520, var_512)
            var_552 = 0;
            pri = fun_0378()
            var_560 = 32704;
            pri = SoundPostEvent(var_560)
            var_568 = -1;
            var_576 = 8802641224559852288;
            var_584 = 16;
            pri = fun_0F78(var_576, var_568)
            var_592 = -4507474598933643017;
            var_600 = 8;
            pri = fun_07F0(var_592)
            var_608 = 0;
            var_616 = 8802641224559852288;
            var_624 = 16;
            pri = fun_0600(var_616, var_608)
            var_632 = 3;
            var_640 = 0;
            pri = EvCameraEnd(var_640, var_632)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_AEC0_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -781465886627734256, -4507474598933643017
            var_48 = 56;
            pri = fun_1D48(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_AEF8
        }
        case 0x1:
        {
// switch_AEC0_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -782447750511537454, -4507474598933643017
            var_48 = 56;
            pri = fun_1D48(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_AEF8
        }
    }
}
// fun_B3D8
fun_B3D8() {
    pri = 0;
    return pri;
}
// fun_B3F0
fun_B3F0() {
    var_8 = -4507474598933643017;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 350;
    var_32 = 8;
    pri = fun_9300(var_24)
    var_40 = 1;
    var_48 = 367;
    pri = ItemAdd(var_48, var_40)
    pri = 0;
    return pri;
}
// fun_B478
fun_B478() {
    var_8 = 20;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 32864;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B4F0
fun_B4F0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9508()
    var_16 = 0;
    pri = fun_9560()
    var_24 = 0;
    pri = fun_9578()
    var_32 = 0;
    pri = fun_9590()
    var_40 = 0;
    pri = fun_A7A8()
    var_48 = 0;
    pri = fun_A7C0()
    var_56 = 0;
    pri = fun_A8B0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B5E0
fun_B5E0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_1498(var_8)
    var_24 = 1;
    var_32 = 8802641224559852288;
    var_40 = 16;
    pri = fun_0600(var_32, var_24)
    var_48 = 1;
    var_56 = -4507474598933643017;
    var_64 = 16;
    pri = fun_0600(var_56, var_48)
    pri = EvCameraStart()
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 8802641224559852288, -4507474598933643017
    var_104 = 48;
    pri = fun_0798(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 100;
    var_120 = 3;
    OP_PUSH2_C 4607182418800017408, -4507474598933643017
    var_128 = 40;
    pri = EvCameraMoveOffsetChr(var_128, var_120, var_112, var_104, var_96)
    var_136 = 1;
    var_144 = 1;
    var_152 = 1;
    var_160 = 1;
    var_168 = 0;
    var_176 = 40;
    pri = fun_8F38(var_168, var_160, var_152, var_144, var_136)
    var_184 = -4507474598933643017;
    var_192 = 8;
    pri = fun_07F0(var_184)
    var_200 = 32912;
    pri = SoundPostEvent(var_200)
    var_208 = 1;
    var_216 = 1;
    var_224 = -1;
    var_232 = -1;
    var_240 = 0;
    var_248 = 7;
    var_256 = -4507474598933643017;
    var_264 = 56;
    pri = fun_3EE8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    OP_PUSH2_C -782452148558050298, -4507474598933643017
    var_312 = 56;
    pri = fun_1D48(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 1;
    var_328 = 8;
    pri = fun_1F40(var_320)
    var_336 = 0;
    pri = fun_2000()
    var_344 = 1;
    var_352 = 3;
    var_360 = 0;
    var_368 = 7;
    var_376 = -4507474598933643017;
    var_384 = 40;
    pri = fun_6220(var_376, var_368, var_360, var_352, var_344)
    var_392 = 0;
    pri = fun_2278()
    var_400 = 0;
    var_408 = 4631952216750555136;
    var_416 = 0;
    OP_PUSH5_C 4676059481665678868, -4580963024719419802, 4672091788128854999, 4676142041245029499, -4601935725234130780
    var_424 = 4672063423477637448;
    var_432 = 1;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 0;
    pri = fun_2278()
    var_448 = -4507474598933643017;
    var_456 = 8;
    pri = fun_09C8(var_448)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    pri = float(var_488)
    var_496 = pri;
    var_504 = -4507474598933643017;
    var_512 = 40;
    pri = fun_0748(var_504, var_496, var_488, var_480, var_472)
    var_520 = -4507474598933643017;
    var_528 = 8;
    pri = fun_07F0(var_520)
    var_544 = 33080;
    var_552 = 1;
    var_560 = 0;
    var_568 = 1;
    var_576 = -1;
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH2_C 4676061594102393733, -4576899933430601482
    var_632 = 23059;
    pri = float(var_632)
    var_640 = pri;
    OP_PUSH5_C 4676056802980475699, -4576857008496653107, 4672219878484711834, 4675797441931378688, -4582254291175079936
    var_648 = 4672332331036442624;
    var_656 = 3;
    var_664 = 168;
    pri = fun_1390(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_8 = pri;
    var_672 = 1;
    var_680 = 4596373779694328218;
    var_688 = -1;
    var_696 = 4611686018427387904;
    var_704 = var_8;
    var_712 = -4507474598933643017;
    var_720 = 48;
    pri = fun_06F0(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 15;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    OP_PUSH2_C -4507474598933643017, 8802641224559852288
    var_776 = 48;
    pri = fun_0798(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 8802641224559852288;
    var_792 = 8;
    pri = fun_07F0(var_784)
    var_800 = 15;
    var_808 = 8;
    pri = fun_0060(var_800)
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    OP_PUSH2_C -4507474598933643017, 8802641224559852288
    var_848 = 48;
    pri = fun_0798(var_840, var_832, var_824, var_816, var_808, var_800)
    var_856 = 8802641224559852288;
    var_864 = 8;
    pri = fun_07F0(var_856)
    var_872 = 15;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    OP_PUSH2_C -4507474598933643017, 8802641224559852288
    var_920 = 48;
    pri = fun_0798(var_912, var_904, var_896, var_888, var_880, var_872)
    var_928 = 8802641224559852288;
    var_936 = 8;
    pri = fun_07F0(var_928)
    var_944 = -4507474598933643017;
    var_952 = 8;
    pri = fun_07F0(var_944)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 120;
    pri = float(var_984)
    var_992 = pri;
    var_1000 = -4507474598933643017;
    var_1008 = 40;
    pri = fun_0748(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = -4507474598933643017;
    var_1024 = 8;
    pri = fun_07F0(var_1016)
    var_1032 = 1;
    var_1040 = 1;
    var_1048 = -1;
    var_1056 = -1;
    var_1064 = 0;
    var_1072 = 7;
    var_1080 = -4507474598933643017;
    var_1088 = 56;
    pri = fun_3EE8(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 45;
    var_1104 = 8;
    pri = fun_0060(var_1096)
    var_1112 = 1;
    var_1120 = 0;
    var_1128 = 32176;
    var_1136 = 8;
    var_1144 = 32;
    pri = fun_0308(var_1136, var_1128, var_1120, var_1112)
    var_1152 = 0;
    pri = fun_0378()
    var_1160 = 3;
    var_1168 = 0;
    pri = EvCameraEnd(var_1168, var_1160)
    var_1176 = 1;
    var_1184 = 3;
    var_1192 = 0;
    var_1200 = 7;
    var_1208 = -4507474598933643017;
    var_1216 = 40;
    pri = fun_6220(var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1224 = 0;
    pri = fun_C098()
    OP_PUSH2_C -4507474598933643017, 172866380833472630
    pri = SetBamiriInfoToChara(var_1224, var_1216)
    var_1232 = 0;
    var_1240 = 8802641224559852288;
    var_1248 = 16;
    pri = fun_0600(var_1240, var_1232)
    var_1256 = 0;
    var_1264 = -4507474598933643017;
    var_1272 = 16;
    pri = fun_0600(var_1264, var_1256)
    var_1280 = 33128;
    pri = SoundPostEvent(var_1280)
    var_1288 = 0;
    var_1296 = 8;
    pri = fun_1498(var_1288)
    var_1304 = 32864;
    var_1312 = 8;
    var_1320 = 16;
    pri = fun_02A8(var_1312, var_1304)
    var_1328 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_C098
fun_C098() {
    var_8 = 346;
    var_16 = 8;
    pri = fun_9300(var_8)
    pri = 0;
    return pri;
}
// fun_C0D0
fun_C0D0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A8C8()
    var_16 = 0;
    pri = fun_A920()
    var_24 = 0;
    pri = fun_A950()
    var_32 = 0;
    pri = fun_A968()
    var_40 = 0;
    pri = fun_B3D8()
    var_48 = 0;
    pri = fun_B3F0()
    var_56 = 0;
    pri = fun_B478()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_C1C0
fun_C1C0() {
    var_8 = 0;
    pri = fun_9560()
    var_16 = 0;
    pri = fun_A7C0()
    var_24 = 0;
    pri = fun_C098()
    var_32 = 0;
    pri = fun_A920()
    var_40 = 0;
    pri = fun_B3F0()
    pri = 0;
    return pri;
}
