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
// fun_04D0
fun_04D0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0518
// lab_0518
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0558
    OP_JUMP lab_05C8
// lab_0558
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0598
    OP_JUMP lab_05C8
// lab_0598
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0518
// lab_05C8
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0610
fun_0610() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0690
fun_0690() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06E8
fun_06E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0728
fun_0728() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0798
fun_0798() {
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
// fun_0810
fun_0810() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1150(var_8)
    OP_JZER lab_0930
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1180(var_24)
    OP_JNZ lab_0930
    pri = 0;
    return pri;
// lab_0930
    OP_JUMP lab_0940
// lab_0940
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09A0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0940
    pri = 0;
    return pri;
}
// fun_09E0
fun_09E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B18
// lab_0B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1150(var_8)
    OP_JNZ lab_0BA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B90
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DB8(var_8)
    pri = 0;
    return pri;
// lab_0C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B18
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BE8
}
// fun_0C90
fun_0C90() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0CD8
// lab_0CD8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D30
    pri = 0;
    return pri;
// lab_0D30
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D70
    pri = 0;
    return pri;
// lab_0D70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CD8
    pri = 0;
    return pri;
}
// fun_0DB8
fun_0DB8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E40
    pri = 0;
    return pri;
// lab_0E40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1150(var_8)
    OP_JZER lab_0F70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E98
    OP_ZERO_P_S 64
// lab_0F70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FA8
    OP_CONST_S 64, 1
// lab_0FA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE0
    OP_CONST_S 72, 1
// lab_0FE0
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
// lab_0E98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC0
    OP_ZERO_P_S 72
// lab_0EC0
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
    OP_JUMP lab_1080
// lab_1080
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1110
fun_1110() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1150
fun_1150() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_11B0
fun_11B0() {
    OP_JUMP lab_11C8
// lab_11C8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1258
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1248
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1258
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12E8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_12D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_12E8
    pri = 0;
    return pri;
// lab_12D8
    OP_JUMP lab_12F8
// lab_12F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11C8
    pri = 0;
    return pri;
// lab_1248
    OP_JUMP lab_12F8
}
// fun_1338
fun_1338() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_11B0(var_40)
    pri = 0;
    return pri;
}
// fun_13C0
fun_13C0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_13F8
fun_13F8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1458
fun_1458() {
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
// switch_1A70
        case default:
        {
// switch_1A70_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AB8
// lab_1AB8
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
            OP_JNZ lab_1B60
            var_88 = 0;
            pri = fun_1EF8()
// lab_1B60
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A70_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1658
                case default:
                {
// switch_1658_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16D0
// lab_16D0
                    OP_JUMP lab_1AB8
                }
                case 0x0:
                {
// switch_1658_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16D0
                }
                case 0x1:
                {
// switch_1658_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16D0
                }
                case 0x2:
                {
// switch_1658_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16D0
                }
                case 0x3:
                {
// switch_1658_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16D0
                }
                case 0x4:
                {
// switch_1658_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16D0
                }
                case 0x5:
                {
// switch_1658_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16D0
                }
            }
        }
        case 0x65:
        {
// switch_1A70_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1810
                case default:
                {
// switch_1810_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1888
// lab_1888
                    OP_JUMP lab_1AB8
                }
                case 0x0:
                {
// switch_1810_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1888
                }
                case 0x1:
                {
// switch_1810_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1888
                }
                case 0x2:
                {
// switch_1810_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1888
                }
                case 0x3:
                {
// switch_1810_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1888
                }
                case 0x4:
                {
// switch_1810_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1888
                }
                case 0x5:
                {
// switch_1810_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1888
                }
            }
        }
        case 0x66:
        {
// switch_1A70_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19C8
                case default:
                {
// switch_19C8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A40
// lab_1A40
                    OP_JUMP lab_1AB8
                }
                case 0x0:
                {
// switch_19C8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A40
                }
                case 0x1:
                {
// switch_19C8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A40
                }
                case 0x2:
                {
// switch_19C8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A40
                }
                case 0x3:
                {
// switch_19C8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A40
                }
                case 0x4:
                {
// switch_19C8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A40
                }
                case 0x5:
                {
// switch_19C8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A40
                }
            }
        }
    }
}
// fun_1B78
fun_1B78() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1458(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BE0
fun_1BE0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C88
    pri = 1;
    return pri;
// lab_1C88
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1CD0
fun_1CD0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BE0(var_8)
    arg_2 = pri;
// lab_1D20
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1458(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D80
fun_1D80() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BE0(var_8)
    arg_2 = pri;
// lab_1DD0
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
    pri = fun_1CD0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1B78(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1E48(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EF8
fun_1EF8() {
    OP_JUMP lab_1F10
// lab_1F10
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F50
    pri = 0;
    return pri;
// lab_1F50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F10
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    var_8 = 0;
    pri = fun_1EF8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2040
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2040
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2080
fun_2080() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_20B8
fun_20B8() {
    OP_JUMP lab_20D0
// lab_20D0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2118
    OP_JUMP lab_2148
    OP_JUMP lab_2138
// lab_2118
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2148
    pri = 0;
    return pri;
// lab_2138
    OP_JUMP lab_20D0
}
// fun_2158
fun_2158() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2188
fun_2188() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21D8
fun_21D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2228
fun_2228() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2278
fun_2278() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    OP_JUMP lab_22E0
// lab_22E0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2318
    pri = 0;
    return pri;
// lab_2318
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22E0
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    pri = arg_6;
    OP_JNZ lab_2390
    var_8 = 0;
    pri = fun_1090()
// lab_2390
    pri = arg_1;
    switch (pri) {
// switch_38F8
        case default:
        {
// switch_38F8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C48
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C48
            pri = 1;
            OP_JUMP lab_3C50
// lab_3C48
            pri = 0;
// lab_3C50
            OP_JZER lab_3DA8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            OP_JUMP lab_3E08
// lab_3DA8
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
// lab_3E08
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3E68
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3EC8
// lab_3E68
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3EC8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3EC8
            pri = arg_2;
            OP_JZER lab_3F08
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3F08
            var_8 = 0;
            pri = fun_10D0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_38F8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1:
        {
// switch_38F8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x2:
        {
// switch_38F8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x3:
        {
// switch_38F8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x4:
        {
// switch_38F8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x5:
        {
// switch_38F8_case_0x5
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0x6:
        {
// switch_38F8_case_0x6
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0x7:
        {
// switch_38F8_case_0x7
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0x8:
        {
// switch_38F8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x9:
        {
// switch_38F8_case_0x9
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0xa:
        {
// switch_38F8_case_0xa
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0xb:
        {
// switch_38F8_case_0xb
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0xc:
        {
// switch_38F8_case_0xc
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0xd:
        {
// switch_38F8_case_0xd
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0xe:
        {
// switch_38F8_case_0xe
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0xf:
        {
// switch_38F8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x10:
        {
// switch_38F8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x11:
        {
// switch_38F8_case_0x11
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0x12:
        {
// switch_38F8_case_0x12
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0x13:
        {
// switch_38F8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x14:
        {
// switch_38F8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x15:
        {
// switch_38F8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x16:
        {
// switch_38F8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x17:
        {
// switch_38F8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x18:
        {
// switch_38F8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x19:
        {
// switch_38F8_case_0x19
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1a:
        {
// switch_38F8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
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
            pri = fun_0DF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1b:
        {
// switch_38F8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
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
            pri = fun_0DF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1c:
        {
// switch_38F8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
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
            pri = fun_0DF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1d:
        {
// switch_38F8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1e:
        {
// switch_38F8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x1f:
        {
// switch_38F8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x20:
        {
// switch_38F8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x21:
        {
// switch_38F8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x22:
        {
// switch_38F8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x23:
        {
// switch_38F8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x24:
        {
// switch_38F8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x25:
        {
// switch_38F8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x26:
        {
// switch_38F8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x27:
        {
// switch_38F8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x28:
        {
// switch_38F8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
        case 0x29:
        {
// switch_38F8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_38F8_case_default
        }
    }
}
// fun_3F38
fun_3F38() {
    pri = arg_5;
    OP_JNZ lab_3F70
    var_8 = 0;
    pri = fun_1090()
// lab_3F70
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3FC0
    OP_CONST_S -8, -1
// lab_3FC0
    pri = arg_1;
    switch (pri) {
// switch_5A78
        case default:
        {
// switch_5A78_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5F20
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F20
            pri = 1;
            OP_JUMP lab_5F28
// lab_5F20
            pri = 0;
// lab_5F28
            OP_JZER lab_5F78
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_61D0
// lab_5F78
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5FE0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5FE0
            pri = 1;
            OP_JUMP lab_5FE8
// lab_5FE0
            pri = 0;
// lab_5FE8
            OP_JZER lab_6170
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            OP_JUMP lab_61D0
// lab_6170
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
// lab_61D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6240
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6240
            var_8 = 0;
            pri = fun_10D0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5A78_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1:
        {
// switch_5A78_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2:
        {
// switch_5A78_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x3:
        {
// switch_5A78_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x4:
        {
// switch_5A78_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x5:
        {
// switch_5A78_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DB8(var_40)
            OP_JUMP switch_5A78_case_default
        }
        case 0x6:
        {
// switch_5A78_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x7:
        {
// switch_5A78_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x8:
        {
// switch_5A78_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x9:
        {
// switch_5A78_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0xa:
        {
// switch_5A78_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0xb:
        {
// switch_5A78_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0xc:
        {
// switch_5A78_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0xd:
        {
// switch_5A78_case_0xd
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0xe:
        {
// switch_5A78_case_0xe
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0xf:
        {
// switch_5A78_case_0xf
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x10:
        {
// switch_5A78_case_0x10
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x11:
        {
// switch_5A78_case_0x11
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x12:
        {
// switch_5A78_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x13:
        {
// switch_5A78_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x14:
        {
// switch_5A78_case_0x14
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x15:
        {
// switch_5A78_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x16:
        {
// switch_5A78_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x17:
        {
// switch_5A78_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x18:
        {
// switch_5A78_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x19:
        {
// switch_5A78_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1a:
        {
// switch_5A78_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1b:
        {
// switch_5A78_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1c:
        {
// switch_5A78_case_0x1c
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1d:
        {
// switch_5A78_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1e:
        {
// switch_5A78_case_0x1e
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x1f:
        {
// switch_5A78_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x20:
        {
// switch_5A78_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x21:
        {
// switch_5A78_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x22:
        {
// switch_5A78_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x23:
        {
// switch_5A78_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x24:
        {
// switch_5A78_case_0x24
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x25:
        {
// switch_5A78_case_0x25
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x26:
        {
// switch_5A78_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x27:
        {
// switch_5A78_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x28:
        {
// switch_5A78_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x29:
        {
// switch_5A78_case_0x29
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2a:
        {
// switch_5A78_case_0x2a
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2b:
        {
// switch_5A78_case_0x2b
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2c:
        {
// switch_5A78_case_0x2c
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2d:
        {
// switch_5A78_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2e:
        {
// switch_5A78_case_0x2e
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x2f:
        {
// switch_5A78_case_0x2f
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x30:
        {
// switch_5A78_case_0x30
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x31:
        {
// switch_5A78_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x32:
        {
// switch_5A78_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x33:
        {
// switch_5A78_case_0x33
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x34:
        {
// switch_5A78_case_0x34
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x35:
        {
// switch_5A78_case_0x35
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x36:
        {
// switch_5A78_case_0x36
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x37:
        {
// switch_5A78_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x38:
        {
// switch_5A78_case_0x38
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
            pri = fun_0DF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5A78_case_default
        }
        case 0x39:
        {
// switch_5A78_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x3a:
        {
// switch_5A78_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x3b:
        {
// switch_5A78_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x3c:
        {
// switch_5A78_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x3d:
        {
// switch_5A78_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
        case 0x3e:
        {
// switch_5A78_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_5A78_case_default
        }
    }
}
// fun_6270
fun_6270() {
    pri = arg_4;
    OP_JNZ lab_62A8
    var_8 = 0;
    pri = fun_1090()
// lab_62A8
    pri = arg_1;
    switch (pri) {
// switch_7680
        case default:
        {
// switch_7680_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1150(var_264)
            OP_JZER lab_7C48
            pri = arg_3;
            switch (pri) {
// switch_7BF0
                case default:
                {
// switch_7BF0_case_default
                    OP_JUMP lab_7F00
// lab_7F00
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7F70
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7F70
                    var_8 = 0;
                    pri = fun_10D0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7BF0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BF0_case_default
                }
                case 0x2:
                {
// switch_7BF0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BF0_case_default
                }
                case 0x3:
                {
// switch_7BF0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7BF0_case_default
                }
            }
// lab_7C48
            pri = arg_1;
            OP_JZER lab_7C98
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7C98
            pri = 0;
            OP_JUMP lab_7CA0
// lab_7C98
            pri = 1;
// lab_7CA0
            OP_JZER lab_7D08
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7D08
            pri = 1;
            OP_JUMP lab_7D10
// lab_7D08
            pri = 0;
// lab_7D10
            OP_JZER lab_7D60
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7F00
// lab_7D60
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7DC8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7F00
// lab_7DC8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
// switch_7680_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1:
        {
// switch_7680_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2:
        {
// switch_7680_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x3:
        {
// switch_7680_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x4:
        {
// switch_7680_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x5:
        {
// switch_7680_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DB8(var_40)
            OP_JUMP switch_7680_case_default
        }
        case 0x6:
        {
// switch_7680_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x7:
        {
// switch_7680_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x8:
        {
// switch_7680_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x9:
        {
// switch_7680_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0xa:
        {
// switch_7680_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0xb:
        {
// switch_7680_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0xc:
        {
// switch_7680_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0xd:
        {
// switch_7680_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0xe:
        {
// switch_7680_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0xf:
        {
// switch_7680_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x10:
        {
// switch_7680_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x11:
        {
// switch_7680_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x12:
        {
// switch_7680_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x13:
        {
// switch_7680_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x14:
        {
// switch_7680_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x15:
        {
// switch_7680_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x16:
        {
// switch_7680_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x17:
        {
// switch_7680_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x18:
        {
// switch_7680_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x19:
        {
// switch_7680_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1a:
        {
// switch_7680_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1b:
        {
// switch_7680_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1c:
        {
// switch_7680_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1d:
        {
// switch_7680_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1e:
        {
// switch_7680_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x1f:
        {
// switch_7680_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x20:
        {
// switch_7680_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x21:
        {
// switch_7680_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x22:
        {
// switch_7680_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x23:
        {
// switch_7680_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x24:
        {
// switch_7680_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x25:
        {
// switch_7680_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x26:
        {
// switch_7680_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x27:
        {
// switch_7680_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x28:
        {
// switch_7680_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x29:
        {
// switch_7680_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2a:
        {
// switch_7680_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2b:
        {
// switch_7680_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2c:
        {
// switch_7680_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2d:
        {
// switch_7680_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2e:
        {
// switch_7680_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x2f:
        {
// switch_7680_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x30:
        {
// switch_7680_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x31:
        {
// switch_7680_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x32:
        {
// switch_7680_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x33:
        {
// switch_7680_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x34:
        {
// switch_7680_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x35:
        {
// switch_7680_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x36:
        {
// switch_7680_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x37:
        {
// switch_7680_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x38:
        {
// switch_7680_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x39:
        {
// switch_7680_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x3a:
        {
// switch_7680_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x3b:
        {
// switch_7680_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x3c:
        {
// switch_7680_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x3d:
        {
// switch_7680_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
        case 0x3e:
        {
// switch_7680_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_7680_case_default
        }
    }
}
// fun_7FA0
fun_7FA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_81B0(var_16, var_8)
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
    OP_JZER lab_8198
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8198
    pri = 0;
    return pri;
}
// fun_81B0
fun_81B0() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A18(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_81F8
fun_81F8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8290
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2358(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8290
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_83E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8350
    var_24 = 30272;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8350
    pri = 1;
    OP_JUMP lab_8358
// lab_83E8
    pri = 0;
    return pri;
// lab_8350
    pri = 0;
// lab_8358
    OP_JZER lab_83E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2358(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_83F8
fun_83F8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_81F8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8480(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8480
fun_8480() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8618(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_84E8
fun_84E8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8558
    OP_CONST_S -8, 1
// lab_8558
    pri = arg_0;
    OP_JNZ lab_8578
    OP_ZERO_P_S -8
// lab_8578
    pri = var_8;
    OP_JZER lab_8600
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8600
    pri = 0;
    return pri;
}
// fun_8618
fun_8618() {
    var_8 = 30376;
    var_16 = 8;
    pri = fun_2080(var_8)
    var_24 = 0;
    pri = fun_20B8()
    pri = arg_3;
    OP_JNZ lab_8738
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8700
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_87A8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8728
// lab_8738
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8948(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8700
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8870(var_16, var_8)
// lab_8728
    OP_JUMP lab_8780
// lab_8780
    var_8 = 0;
    pri = fun_2158()
    pri = 0;
    return pri;
}
// fun_87A8
fun_87A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8948(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8858
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8858
    pri = 0;
    return pri;
}
// fun_8870
fun_8870() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_21D8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1E98(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1F90(var_72)
    var_88 = 0;
    pri = fun_2050()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2188(var_96)
    pri = 0;
    return pri;
}
// fun_8948
fun_8948() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8990
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8C50(var_8)
// lab_8990
    pri = arg_4;
    OP_JNZ lab_89F8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2188(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_21D8(var_40, var_32, var_24)
// lab_89F8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8A98
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2228(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1E98(var_56, var_48, var_40)
    OP_JUMP lab_8B88
// lab_8A98
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8B50
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8B50
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8B50
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1E98(var_24, var_16, var_8)
// lab_8B88
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8BC8
    var_8 = 0;
    var_16 = 8;
    pri = fun_04D0(var_8)
// lab_8BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F90(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8E58(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_84E8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8C50
fun_8C50() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8CB0
    var_16 = 30536;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8CB0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8DF0
        case default:
        {
// switch_8DF0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8DE0
            var_16 = 31080;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8DE0
            OP_JUMP lab_8E28
// lab_8E28
            var_8 = 31296;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8DF0_case_0x1
            var_8 = 30752;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8E28
        }
        case 0x2:
        {
// switch_8DF0_case_0x2
            var_8 = 30880;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8E28
        }
    }
}
// fun_8E58
fun_8E58() {
    pri = arg_2;
    OP_JNZ lab_8F40
    var_8 = 0;
    var_16 = 8;
    pri = fun_2188(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_21D8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2278(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8F40
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1E98(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1F90(var_40)
    var_56 = 0;
    pri = fun_2050()
    pri = 0;
    return pri;
}
// fun_8FB8
fun_8FB8() {
    pri = 31480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9040
// lab_9040
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_91C0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_91B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9100
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9100
    pri = 0;
    OP_JUMP lab_9108
// lab_91C0
    pri = 0;
    return pri;
// lab_91B0
    OP_JUMP lab_9038
// lab_9038
    OP_INC_P_S -936
// lab_9100
    pri = 1;
// lab_9108
    OP_JZER lab_9180
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9178
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9180
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9178
}
// fun_91E0
fun_91E0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9278
    var_8 = 1;
    var_16 = 0;
    var_24 = 32400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_13F8()
// lab_9278
    pri = arg_4;
    OP_JZER lab_92B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1420(var_8)
// lab_92B0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9308
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9308
    pri = 0;
    OP_JUMP lab_9310
// lab_9308
    pri = 1;
// lab_9310
    OP_JZER lab_93D8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_93D8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_93B0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1338(var_32, var_24)
    OP_JUMP lab_93D8
// lab_93D8
    pri = arg_2;
    OP_JZER lab_94B0
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9480
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1110(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0760(var_40)
    OP_JUMP lab_94B0
// lab_94B0
    pri = arg_3;
    OP_JZER lab_94E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_13C0(var_8)
// lab_94E8
    pri = 0;
    return pri;
// lab_9480
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1110(var_16, var_8)
// lab_93B0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1338(var_16, var_8)
}
// fun_94F8
fun_94F8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8FB8(var_24)
    pri = 0;
    return pri;
}
// fun_9560
fun_9560() {
    pri = g_mode;
    switch (pri) {
// switch_9620
        case default:
        {
// switch_9620_case_default
            pri = CommandNOP()
            OP_JUMP lab_9668
// lab_9668
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9620_case_0x0
            var_8 = 0;
            pri = fun_9678()
            OP_JUMP lab_9668
        }
        case 0x34d28e27743eb21f:
        {
// switch_9620_case_0x34d28e27743eb21f
            var_8 = 0;
            pri = fun_B5D8()
            OP_JUMP lab_9668
        }
        case 0x5231f82afe338aab:
        {
// switch_9620_case_0x5231f82afe338aab
            var_8 = 0;
            pri = fun_B4E8()
            OP_JUMP lab_9668
        }
    }
}
// fun_9678
fun_9678() {
    pri = 0;
    return pri;
}
// fun_9690
fun_9690() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_91E0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_96E8
fun_96E8() {
    pri = 0;
    return pri;
}
// fun_9700
fun_9700() {
    pri = 0;
    return pri;
}
// fun_9718
fun_9718() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 2914;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 4200;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_0690(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = 2914;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 3300;
    pri = float(var_120)
    var_128 = pri;
    var_136 = -463679841549179559;
    var_144 = 40;
    pri = fun_0640(var_136, var_128, var_120, var_112, var_104)
    var_152 = 0;
    var_160 = -6406173741565687760;
    var_168 = 16;
    pri = fun_0728(var_160, var_152)
    var_176 = 32448;
    pri = SoundPostEvent(var_176)
    var_184 = 32712;
    var_192 = 8;
    var_200 = 16;
    pri = fun_02A8(var_192, var_184)
    var_208 = 0;
    pri = fun_0378()
    var_216 = 32728;
    var_224 = 8;
    pri = fun_2080(var_216)
    var_232 = 0;
    pri = fun_20B8()
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C 5394632527650128424, -3123382877661890469
    var_280 = 56;
    pri = fun_1D80(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1F90(var_288)
    var_304 = 0;
    pri = fun_2050()
    var_312 = 6;
    var_320 = 4;
    var_328 = 2;
    var_336 = 1;
    var_344 = 9;
    var_352 = 1;
    var_360 = 412;
    var_368 = -3123382877661890469;
    var_376 = 64;
    pri = fun_83F8(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_384 = 0;
    var_392 = 0;
    var_400 = 30;
    var_408 = 2;
    var_416 = 2;
    pri = float(var_416)
    var_424 = pri;
    var_432 = 4;
    var_440 = 0;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 4587366580439587226;
    var_464 = 0;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 0;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 4591870180066957722;
    var_504 = 0;
    pri = float(var_504)
    var_512 = pri;
    pri = EvCameraShake_(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_520 = 32944;
    pri = SoundPostEvent(var_520)
    var_528 = 5;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 1;
    var_552 = 0;
    var_560 = 4641240890982006784;
    var_568 = 0;
    var_576 = 0;
    var_584 = 2914;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 4000;
    pri = float(var_600)
    var_608 = pri;
    OP_PUSH2_C 4611686018427387904, -463679841549179559
    var_616 = 72;
    pri = fun_0798(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = -463679841549179559;
    var_632 = 8;
    pri = fun_08B8(var_624)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = -90;
    pri = float(var_664)
    var_672 = pri;
    var_680 = 8802641224559852288;
    var_688 = 40;
    pri = fun_0810(var_680, var_672, var_664, var_656, var_648)
    var_696 = 1;
    var_704 = 1;
    var_712 = -1;
    var_720 = -1;
    var_728 = 0;
    var_736 = 2;
    var_744 = -463679841549179559;
    var_752 = 56;
    pri = fun_3F38(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_760 = 0;
    var_768 = 3;
    var_776 = 0;
    var_784 = 101;
    var_792 = -1;
    OP_PUSH2_C -1421901049075771017, -463679841549179559
    var_800 = 56;
    pri = fun_1D80(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 1;
    var_816 = 8;
    pri = fun_1F90(var_808)
    var_824 = 0;
    pri = fun_2050()
    var_832 = 1;
    var_840 = 3;
    var_848 = 0;
    var_856 = 2;
    var_864 = -463679841549179559;
    var_872 = 40;
    pri = fun_6270(var_864, var_856, var_848, var_840, var_832)
    var_880 = 8802641224559852288;
    var_888 = 8;
    pri = fun_08B8(var_880)
    var_896 = -463679841549179559;
    var_904 = 8;
    pri = fun_0A90(var_896)
    var_912 = 0;
    pri = fun_2158()
    var_920 = 1;
    var_928 = 0;
    var_936 = 4641240890982006784;
    var_944 = 0;
    var_952 = 0;
    var_960 = 2914;
    pri = float(var_960)
    var_968 = pri;
    var_976 = 3000;
    pri = float(var_976)
    var_984 = pri;
    OP_PUSH2_C 4611686018427387904, -463679841549179559
    var_992 = 72;
    pri = fun_0798(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 40;
    var_1008 = 8;
    pri = fun_0060(var_1000)
    var_1016 = 1;
    var_1024 = 0;
    var_1032 = 32400;
    var_1040 = 8;
    var_1048 = 32;
    pri = fun_0308(var_1040, var_1032, var_1024, var_1016)
    var_1056 = 0;
    pri = fun_0378()
    var_1064 = -463679841549179559;
    var_1072 = 8;
    pri = fun_08B8(var_1064)
    var_1080 = 5642674740608937869;
    var_1088 = 8;
    pri = fun_05E0(var_1080)
    var_1096 = -2724302863974222557;
    var_1104 = 8;
    pri = fun_05E0(var_1096)
    var_1112 = 0;
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 0;
    OP_PUSH4_C 4675735869280223232, 4667987610839285760, 5475809795676860514, 6151529871078264393
    var_1152 = 72;
    pri = fun_0430(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    pri = EvCameraStart()
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    var_1176 = 1;
    var_1184 = -90;
    pri = float(var_1184)
    var_1192 = pri;
    var_1200 = 8802641224559852288;
    var_1208 = 24;
    pri = fun_06E8(var_1200, var_1192, var_1184)
    var_1216 = 1;
    var_1224 = 1;
    OP_PUSH4_C -4588042120383692800, 4675728447576735744, 4667404319920750592, 5031382083998270356
    var_1232 = 48;
    pri = fun_0690(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1240 = 1;
    var_1248 = 1;
    OP_PUSH4_C 4636033603912859648, 4675716627826737152, 4667736922188152832, 5642674740608937869
    var_1256 = 48;
    pri = fun_0690(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1264 = 1;
    var_1272 = 1;
    OP_PUSH4_C 4636033603912859648, 4675759646219173888, 4667681946606764032, -2724302863974222557
    var_1280 = 48;
    pri = fun_0690(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 5642674740608937869;
    var_1312 = 24;
    pri = fun_7FA0(var_1304, var_1296, var_1288)
    var_1320 = 0;
    var_1328 = 0;
    var_1336 = -2724302863974222557;
    var_1344 = 24;
    pri = fun_7FA0(var_1336, var_1328, var_1320)
    var_1352 = 5642674740608937869;
    var_1360 = 8;
    pri = fun_0A90(var_1352)
    var_1368 = -2724302863974222557;
    var_1376 = 8;
    pri = fun_0A90(var_1368)
    var_1384 = 0;
    var_1392 = 4631952216750555136;
    var_1400 = 0;
    OP_PUSH5_C 4675742743976675901, -4582765871945251553, 4667706520691644826, 4675752609344756122, 4612879472328641086
    var_1408 = 4667544875989687337;
    var_1416 = 1;
    pri = EvCameraMove(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1424 = 1;
    var_1432 = 0;
    var_1440 = 4641240890982006784;
    var_1448 = 0;
    var_1456 = 0;
    OP_PUSH4_C 4675741091960455168, 4667685245141647360, 4611686018427387904, 8802641224559852288
    var_1464 = 72;
    pri = fun_0798(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1472 = 1;
    var_1480 = 0;
    var_1488 = 4641240890982006784;
    var_1496 = 0;
    var_1504 = 0;
    OP_PUSH4_C 4675716627826737152, 4668922195722895360, 4611686018427387904, 5642674740608937869
    var_1512 = 72;
    pri = fun_0798(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1520 = 1;
    var_1528 = 0;
    var_1536 = 4641240890982006784;
    var_1544 = 0;
    var_1552 = 0;
    OP_PUSH4_C 4675759646219173888, 4668922195722895360, 4611686018427387904, -2724302863974222557
    var_1560 = 72;
    pri = fun_0798(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1568 = 30;
    var_1576 = 8;
    pri = fun_0060(var_1568)
    var_1584 = 33112;
    var_1592 = 8;
    var_1600 = 16;
    pri = fun_02A8(var_1592, var_1584)
    var_1608 = 0;
    pri = fun_0378()
    var_1616 = 8802641224559852288;
    var_1624 = 8;
    pri = fun_08B8(var_1616)
    var_1632 = 0;
    var_1640 = 0;
    var_1648 = 30;
    var_1656 = 2;
    var_1664 = 2;
    pri = float(var_1664)
    var_1672 = pri;
    var_1680 = 4;
    var_1688 = 0;
    pri = float(var_1688)
    var_1696 = pri;
    var_1704 = 4587366580439587226;
    var_1712 = 0;
    pri = float(var_1712)
    var_1720 = pri;
    var_1728 = 0;
    pri = float(var_1728)
    var_1736 = pri;
    var_1744 = 4591870180066957722;
    var_1752 = 0;
    pri = float(var_1752)
    var_1760 = pri;
    pri = EvCameraShake_(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1768 = 33160;
    pri = SoundPostEvent(var_1768)
    var_1776 = 3;
    var_1784 = 0;
    var_1792 = 101;
    var_1800 = 164951881483480964;
    var_1808 = 32;
    pri = fun_1B78(var_1800, var_1792, var_1784, var_1776)
    var_1816 = 1;
    var_1824 = 8;
    pri = fun_1F90(var_1816)
    var_1832 = 0;
    pri = fun_2050()
    var_1840 = 0;
    var_1848 = 4631952216750555136;
    var_1856 = 0;
    OP_PUSH5_C 4675734923700223345, -4584284077600884654, 4667446607137954857, 4675750180798448271, -4589214463661692682
    var_1864 = 4667492385304577311;
    var_1872 = 1;
    pri = EvCameraMove(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1880 = 5642674740608937869;
    var_1888 = 8;
    pri = fun_0610(var_1880)
    var_1896 = -2724302863974222557;
    var_1904 = 8;
    pri = fun_0610(var_1896)
    var_1912 = 1;
    var_1920 = 0;
    var_1928 = 4641240890982006784;
    var_1936 = 0;
    var_1944 = 0;
    OP_PUSH4_C 4675739717570920448, 4667497228653297664, 4611686018427387904, 8802641224559852288
    var_1952 = 72;
    pri = fun_0798(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1960 = 8802641224559852288;
    var_1968 = 8;
    pri = fun_08B8(var_1960)
    var_1976 = 0;
    var_1984 = 0;
    var_1992 = 0;
    var_2000 = 0;
    OP_PUSH2_C 5031382083998270356, 8802641224559852288
    var_2008 = 48;
    pri = fun_0860(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2016 = 8802641224559852288;
    var_2024 = 8;
    pri = fun_08B8(var_2016)
    var_2032 = 0;
    var_2040 = 4631952216750555136;
    var_2048 = 3;
    OP_PUSH5_C 4675737682100019528, -4583734497708857098, 4667453633017256346, 4675763831235307110, -4590547247676417638
    var_2056 = 4667479295618648637;
    var_2064 = 45;
    pri = EvCameraMove(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 0;
    var_2080 = 0;
    var_2088 = 0;
    var_2096 = 0;
    OP_PUSH2_C 8802641224559852288, 5031382083998270356
    var_2104 = 48;
    pri = fun_0860(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2112 = 4;
    var_2120 = 8;
    pri = fun_0060(var_2112)
    var_2128 = 0;
    var_2136 = 3;
    var_2144 = 0;
    var_2152 = 100;
    var_2160 = -1;
    OP_PUSH2_C 8305553088422100145, 5031382083998270356
    var_2168 = 56;
    pri = fun_1CD0(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2176 = 1;
    var_2184 = 8;
    pri = fun_1F90(var_2176)
    var_2192 = 5031382083998270356;
    var_2200 = 8;
    pri = fun_08B8(var_2192)
    var_2208 = 1;
    var_2216 = 1;
    var_2224 = -1;
    var_2232 = -1;
    var_2240 = 0;
    var_2248 = 1;
    var_2256 = 5031382083998270356;
    var_2264 = 56;
    pri = fun_3F38(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2272 = 0;
    var_2280 = 3;
    var_2288 = 0;
    var_2296 = 100;
    var_2304 = -1;
    OP_PUSH2_C 8305549789887215512, 5031382083998270356
    var_2312 = 56;
    pri = fun_1CD0(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2320 = 1;
    var_2328 = 8;
    pri = fun_1F90(var_2320)
    var_2336 = 0;
    var_2344 = 3;
    var_2352 = 0;
    var_2360 = 100;
    var_2368 = -1;
    OP_PUSH2_C 8305550889398843723, 5031382083998270356
    var_2376 = 56;
    pri = fun_1CD0(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2384 = 1;
    var_2392 = 8;
    pri = fun_1F90(var_2384)
    var_2400 = 0;
    pri = fun_2050()
    var_2408 = 1;
    var_2416 = 3;
    var_2424 = 0;
    var_2432 = 1;
    var_2440 = 5031382083998270356;
    var_2448 = 40;
    pri = fun_6270(var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2456 = 5031382083998270356;
    var_2464 = 8;
    pri = fun_0A90(var_2456)
    var_2472 = 10;
    var_2480 = 8;
    pri = fun_0060(var_2472)
    var_2488 = 0;
    var_2496 = 3;
    var_2504 = 0;
    var_2512 = 100;
    var_2520 = -1;
    OP_PUSH2_C 8305556386956984778, 5031382083998270356
    var_2528 = 56;
    pri = fun_1CD0(var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2536 = 1;
    var_2544 = 8;
    pri = fun_1F90(var_2536)
    var_2552 = 0;
    pri = fun_2050()
    var_2560 = 1;
    var_2568 = 1;
    var_2576 = -1;
    var_2584 = -1;
    var_2592 = 0;
    var_2600 = 21;
    var_2608 = 5031382083998270356;
    var_2616 = 56;
    pri = fun_3F38(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2624 = 0;
    var_2632 = 3;
    var_2640 = 0;
    var_2648 = 100;
    var_2656 = -1;
    OP_PUSH2_C 8305557486468612989, 5031382083998270356
    var_2664 = 56;
    pri = fun_1CD0(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608)
    var_2672 = 1;
    var_2680 = 8;
    pri = fun_1F90(var_2672)
    var_2688 = 0;
    pri = fun_2050()
    var_2696 = 0;
    var_2704 = 0;
    var_2712 = 30;
    var_2720 = 2;
    var_2728 = 2;
    pri = float(var_2728)
    var_2736 = pri;
    var_2744 = 4;
    var_2752 = 0;
    pri = float(var_2752)
    var_2760 = pri;
    var_2768 = 4587366580439587226;
    var_2776 = 0;
    pri = float(var_2776)
    var_2784 = pri;
    var_2792 = 0;
    pri = float(var_2792)
    var_2800 = pri;
    var_2808 = 4591870180066957722;
    var_2816 = 0;
    pri = float(var_2816)
    var_2824 = pri;
    pri = EvCameraShake_(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736)
    var_2832 = 33328;
    pri = SoundPostEvent(var_2832)
    var_2840 = 3;
    var_2848 = 0;
    var_2856 = 101;
    var_2864 = 164955180018365597;
    var_2872 = 32;
    pri = fun_1B78(var_2864, var_2856, var_2848, var_2840)
    var_2880 = 1;
    var_2888 = 8;
    pri = fun_1F90(var_2880)
    var_2896 = 0;
    pri = fun_2050()
    var_2904 = 33496;
    var_2912 = 5031382083998270356;
    var_2920 = 16;
    pri = fun_0C90(var_2912, var_2904)
    var_2928 = 1;
    var_2936 = 3;
    var_2944 = 0;
    var_2952 = 21;
    var_2960 = 5031382083998270356;
    var_2968 = 40;
    pri = fun_6270(var_2960, var_2952, var_2944, var_2936, var_2928)
    var_2976 = 5031382083998270356;
    var_2984 = 8;
    pri = fun_0A90(var_2976)
    var_2992 = 0;
    var_3000 = 0;
    var_3008 = 0;
    var_3016 = -90;
    pri = float(var_3016)
    var_3024 = pri;
    var_3032 = 5031382083998270356;
    var_3040 = 40;
    pri = fun_0810(var_3032, var_3024, var_3016, var_3008, var_3000)
    var_3048 = 0;
    var_3056 = 0;
    var_3064 = 0;
    var_3072 = -90;
    pri = float(var_3072)
    var_3080 = pri;
    var_3088 = 8802641224559852288;
    var_3096 = 40;
    pri = fun_0810(var_3088, var_3080, var_3072, var_3064, var_3056)
    var_3104 = 30;
    var_3112 = 8;
    pri = fun_0060(var_3104)
    var_3120 = 5031382083998270356;
    var_3128 = 8;
    pri = fun_08B8(var_3120)
    var_3136 = 8802641224559852288;
    var_3144 = 8;
    pri = fun_08B8(var_3136)
    var_3152 = 0;
    var_3160 = 4631952216750555136;
    var_3168 = 0;
    OP_PUSH5_C 4675855134680877629, 4634693079336275149, 4666441043281214177, 4675953304576563610, 4647497376026842890
    var_3176 = 4666529872825622200;
    var_3184 = 1;
    pri = EvCameraMove(var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112)
    var_3192 = 10;
    var_3200 = 8;
    pri = fun_0060(var_3192)
    var_3208 = 0;
    var_3216 = 4631952216750555136;
    var_3224 = 3;
    OP_PUSH5_C 4675855806757360108, 4645149698799215575, 4665998539329057587, 4675953976653046088, 4650203054240474071
    var_3232 = 4666087368873465610;
    var_3240 = 70;
    pri = EvCameraMove(var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168)
    var_3248 = 0;
    pri = fun_22C8()
    var_3256 = 1;
    var_3264 = 1;
    OP_PUSH4_C -4587338432941916160, 4675817370579632128, 4666708878816182272, 5031382083998270356
    var_3272 = 48;
    pri = fun_0690(var_3264, var_3256, var_3248, var_3240, var_3232, var_3224)
    var_3280 = 1;
    var_3288 = 0;
    var_3296 = 4641240890982006784;
    var_3304 = 0;
    var_3312 = 0;
    OP_PUSH4_C 4675824242527305728, 4665408156560523264, 4611686018427387904, 5031382083998270356
    var_3320 = 72;
    pri = fun_0798(var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3328 = 0;
    var_3336 = 3;
    var_3344 = 0;
    var_3352 = 100;
    var_3360 = -1;
    OP_PUSH2_C 8305554187933728356, 5031382083998270356
    var_3368 = 56;
    pri = fun_1CD0(var_3360, var_3352, var_3344, var_3336, var_3328, var_3320, var_3312)
    var_3376 = 1;
    var_3384 = 8;
    pri = fun_1F90(var_3376)
    var_3392 = 0;
    pri = fun_2050()
    var_3400 = 5031382083998270356;
    var_3408 = 8;
    pri = fun_08B8(var_3400)
    var_3416 = 3;
    var_3424 = 40;
    pri = EvCameraEnd(var_3424, var_3416)
    pri = 0;
    return pri;
}
// fun_B408
fun_B408() {
    pri = 0;
    return pri;
}
// fun_B420
fun_B420() {
    var_8 = 5031382083998270356;
    var_16 = 8;
    pri = fun_0610(var_8)
    var_24 = 1400;
    var_32 = 8;
    pri = fun_94F8(var_24)
    var_40 = 7927692416553760981;
    pri = VanishFlagReset(var_40)
    var_48 = 1;
    var_56 = 412;
    pri = ItemAdd(var_56, var_48)
    pri = 0;
    return pri;
}
// fun_B4D0
fun_B4D0() {
    pri = 0;
    return pri;
}
// fun_B4E8
fun_B4E8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9690()
    var_16 = 0;
    pri = fun_96E8()
    var_24 = 0;
    pri = fun_9700()
    var_32 = 0;
    pri = fun_9718()
    var_40 = 0;
    pri = fun_B408()
    var_48 = 0;
    pri = fun_B420()
    var_56 = 0;
    pri = fun_B4D0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B5D8
fun_B5D8() {
    var_8 = 0;
    pri = fun_96E8()
    var_16 = 0;
    pri = fun_B420()
    pri = 0;
    return pri;
}
