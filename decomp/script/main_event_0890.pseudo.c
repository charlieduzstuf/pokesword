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
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0538
// lab_0538
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0578
    OP_JUMP lab_05E8
// lab_0578
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0538
// lab_05E8
    pri = 0;
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0688
fun_0688() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
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
// fun_0738
fun_0738() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07E0
fun_07E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1158(var_8)
    OP_JZER lab_0858
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1188(var_24)
    OP_JNZ lab_0858
    pri = 0;
    return pri;
// lab_0858
    OP_JUMP lab_0868
// lab_0868
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08C8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0868
    pri = 0;
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A00
    pri = 0;
    return pri;
// lab_0A00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A40
// lab_0A40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1158(var_8)
    OP_JNZ lab_0AC8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AB8
    pri = 0;
    return pri;
// lab_0AC8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B10
    pri = 0;
    return pri;
// lab_0B10
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BB8(var_8)
    pri = 0;
    return pri;
// lab_0B70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A40
    pri = 0;
    return pri;
// lab_0AB8
    OP_JUMP lab_0B10
}
// fun_0BB8
fun_0BB8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C40
    pri = 0;
    return pri;
// lab_0C40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1158(var_8)
    OP_JZER lab_0D70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C98
    OP_ZERO_P_S 64
// lab_0D70
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA8
    OP_CONST_S 64, 1
// lab_0DA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE0
    OP_CONST_S 72, 1
// lab_0DE0
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
// lab_0C98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CC0
    OP_ZERO_P_S 72
// lab_0CC0
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
    OP_JUMP lab_0E80
// lab_0E80
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F10
fun_0F10() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0FA8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1020(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FE8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1060(var_24)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_11B8
fun_11B8() {
    OP_JUMP lab_11D0
// lab_11D0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1260
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1250
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09B8(var_8)
    pri = 0;
    return pri;
// lab_1260
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_12F0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_12E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09B8(var_8)
    pri = 0;
    return pri;
// lab_12F0
    pri = 0;
    return pri;
// lab_12E0
    OP_JUMP lab_1300
// lab_1300
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11D0
    pri = 0;
    return pri;
// lab_1250
    OP_JUMP lab_1300
}
// fun_1340
fun_1340() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09B8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_11B8(var_40)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1428
fun_1428() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1458
fun_1458() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1490
fun_1490() {
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
// switch_1AA8
        case default:
        {
// switch_1AA8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AF0
// lab_1AF0
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
            OP_JNZ lab_1B98
            var_88 = 0;
            pri = fun_1E68()
// lab_1B98
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1AA8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1690
                case default:
                {
// switch_1690_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1708
// lab_1708
                    OP_JUMP lab_1AF0
                }
                case 0x0:
                {
// switch_1690_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1708
                }
                case 0x1:
                {
// switch_1690_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1708
                }
                case 0x2:
                {
// switch_1690_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1708
                }
                case 0x3:
                {
// switch_1690_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1708
                }
                case 0x4:
                {
// switch_1690_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1708
                }
                case 0x5:
                {
// switch_1690_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1708
                }
            }
        }
        case 0x65:
        {
// switch_1AA8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1848
                case default:
                {
// switch_1848_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18C0
// lab_18C0
                    OP_JUMP lab_1AF0
                }
                case 0x0:
                {
// switch_1848_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_18C0
                }
                case 0x1:
                {
// switch_1848_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_18C0
                }
                case 0x2:
                {
// switch_1848_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_18C0
                }
                case 0x3:
                {
// switch_1848_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18C0
                }
                case 0x4:
                {
// switch_1848_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_18C0
                }
                case 0x5:
                {
// switch_1848_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_18C0
                }
            }
        }
        case 0x66:
        {
// switch_1AA8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A00
                case default:
                {
// switch_1A00_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A78
// lab_1A78
                    OP_JUMP lab_1AF0
                }
                case 0x0:
                {
// switch_1A00_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A78
                }
                case 0x1:
                {
// switch_1A00_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A78
                }
                case 0x2:
                {
// switch_1A00_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A78
                }
                case 0x3:
                {
// switch_1A00_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A78
                }
                case 0x4:
                {
// switch_1A00_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A78
                }
                case 0x5:
                {
// switch_1A00_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A78
                }
            }
        }
    }
}
// fun_1BB0
fun_1BB0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1490(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C18
fun_1C18() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0980(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1CC0
    pri = 1;
    return pri;
// lab_1CC0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D08
fun_1D08() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C18(var_8)
    arg_2 = pri;
// lab_1D58
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1490(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DB8
fun_1DB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1BB0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E08
fun_1E08() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1DB8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E68
fun_1E68() {
    OP_JUMP lab_1E80
// lab_1E80
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EC0
    pri = 0;
    return pri;
// lab_1EC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E80
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
    var_8 = 0;
    pri = fun_1E68()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FB0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1FB0
    pri = 0;
    return pri;
}
// fun_1FC0
fun_1FC0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FF0
fun_1FF0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2020
// lab_2020
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2060
    OP_JUMP lab_2090
// lab_2060
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2020
// lab_2090
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20D8
fun_20D8() {
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
// fun_2148
fun_2148() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    OP_JUMP lab_2198
// lab_2198
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_21E0
    OP_JUMP lab_2210
    OP_JUMP lab_2200
// lab_21E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2210
    pri = 0;
    return pri;
// lab_2200
    OP_JUMP lab_2198
}
// fun_2220
fun_2220() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22A0
fun_22A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22F0
fun_22F0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2340
fun_2340() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2390
fun_2390() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23E0
fun_23E0() {
    OP_JUMP lab_23F8
// lab_23F8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2430
    pri = 0;
    return pri;
// lab_2430
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23F8
    pri = 0;
    return pri;
}
// fun_2470
fun_2470() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_24A8
fun_24A8() {
    pri = arg_6;
    OP_JNZ lab_24E0
    var_8 = 0;
    pri = fun_0E90()
// lab_24E0
    pri = arg_1;
    switch (pri) {
// switch_3A48
        case default:
        {
// switch_3A48_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D98
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D98
            pri = 1;
            OP_JUMP lab_3DA0
// lab_3D98
            pri = 0;
// lab_3DA0
            OP_JZER lab_3EF8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0980(var_24, var_16)
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
            OP_JUMP lab_3F58
// lab_3EF8
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
// lab_3F58
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3FB8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4018
// lab_3FB8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4018
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4018
            pri = arg_2;
            OP_JZER lab_4058
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4058
            var_8 = 0;
            pri = fun_0ED0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A48_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1:
        {
// switch_3A48_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x2:
        {
// switch_3A48_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x3:
        {
// switch_3A48_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x4:
        {
// switch_3A48_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x5:
        {
// switch_3A48_case_0x5
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0x6:
        {
// switch_3A48_case_0x6
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0x7:
        {
// switch_3A48_case_0x7
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0x8:
        {
// switch_3A48_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x9:
        {
// switch_3A48_case_0x9
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0xa:
        {
// switch_3A48_case_0xa
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0xb:
        {
// switch_3A48_case_0xb
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0xc:
        {
// switch_3A48_case_0xc
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0xd:
        {
// switch_3A48_case_0xd
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0xe:
        {
// switch_3A48_case_0xe
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0xf:
        {
// switch_3A48_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x10:
        {
// switch_3A48_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x11:
        {
// switch_3A48_case_0x11
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0x12:
        {
// switch_3A48_case_0x12
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0x13:
        {
// switch_3A48_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x14:
        {
// switch_3A48_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x15:
        {
// switch_3A48_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x16:
        {
// switch_3A48_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x17:
        {
// switch_3A48_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x18:
        {
// switch_3A48_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x19:
        {
// switch_3A48_case_0x19
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1a:
        {
// switch_3A48_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0908(var_48, var_40)
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
            pri = fun_0BF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1b:
        {
// switch_3A48_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0908(var_48, var_40)
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
            pri = fun_0BF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1c:
        {
// switch_3A48_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0908(var_48, var_40)
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
            pri = fun_0BF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1d:
        {
// switch_3A48_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1e:
        {
// switch_3A48_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x1f:
        {
// switch_3A48_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x20:
        {
// switch_3A48_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x21:
        {
// switch_3A48_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x22:
        {
// switch_3A48_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x23:
        {
// switch_3A48_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x24:
        {
// switch_3A48_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x25:
        {
// switch_3A48_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x26:
        {
// switch_3A48_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x27:
        {
// switch_3A48_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x28:
        {
// switch_3A48_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
        case 0x29:
        {
// switch_3A48_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A48_case_default
        }
    }
}
// fun_4088
fun_4088() {
    pri = arg_5;
    OP_JNZ lab_40C0
    var_8 = 0;
    pri = fun_0E90()
// lab_40C0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4110
    OP_CONST_S -8, -1
// lab_4110
    pri = arg_1;
    switch (pri) {
// switch_5BC8
        case default:
        {
// switch_5BC8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6070
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0980(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6070
            pri = 1;
            OP_JUMP lab_6078
// lab_6070
            pri = 0;
// lab_6078
            OP_JZER lab_60C8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6320
// lab_60C8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6130
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6130
            pri = 1;
            OP_JUMP lab_6138
// lab_6130
            pri = 0;
// lab_6138
            OP_JZER lab_62C0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0980(var_24, var_16)
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
            OP_JUMP lab_6320
// lab_62C0
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
// lab_6320
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6390
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6390
            var_8 = 0;
            pri = fun_0ED0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5BC8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1:
        {
// switch_5BC8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2:
        {
// switch_5BC8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x3:
        {
// switch_5BC8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x4:
        {
// switch_5BC8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x5:
        {
// switch_5BC8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BB8(var_40)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x6:
        {
// switch_5BC8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x7:
        {
// switch_5BC8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x8:
        {
// switch_5BC8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x9:
        {
// switch_5BC8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0xa:
        {
// switch_5BC8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0xb:
        {
// switch_5BC8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0xc:
        {
// switch_5BC8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0xd:
        {
// switch_5BC8_case_0xd
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0xe:
        {
// switch_5BC8_case_0xe
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0xf:
        {
// switch_5BC8_case_0xf
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x10:
        {
// switch_5BC8_case_0x10
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x11:
        {
// switch_5BC8_case_0x11
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x12:
        {
// switch_5BC8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x13:
        {
// switch_5BC8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x14:
        {
// switch_5BC8_case_0x14
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x15:
        {
// switch_5BC8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x16:
        {
// switch_5BC8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x17:
        {
// switch_5BC8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x18:
        {
// switch_5BC8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x19:
        {
// switch_5BC8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1a:
        {
// switch_5BC8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1b:
        {
// switch_5BC8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1c:
        {
// switch_5BC8_case_0x1c
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1d:
        {
// switch_5BC8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1e:
        {
// switch_5BC8_case_0x1e
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x1f:
        {
// switch_5BC8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x20:
        {
// switch_5BC8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x21:
        {
// switch_5BC8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x22:
        {
// switch_5BC8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x23:
        {
// switch_5BC8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x24:
        {
// switch_5BC8_case_0x24
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x25:
        {
// switch_5BC8_case_0x25
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x26:
        {
// switch_5BC8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x27:
        {
// switch_5BC8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x28:
        {
// switch_5BC8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x29:
        {
// switch_5BC8_case_0x29
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2a:
        {
// switch_5BC8_case_0x2a
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2b:
        {
// switch_5BC8_case_0x2b
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2c:
        {
// switch_5BC8_case_0x2c
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2d:
        {
// switch_5BC8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2e:
        {
// switch_5BC8_case_0x2e
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x2f:
        {
// switch_5BC8_case_0x2f
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x30:
        {
// switch_5BC8_case_0x30
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x31:
        {
// switch_5BC8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x32:
        {
// switch_5BC8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x33:
        {
// switch_5BC8_case_0x33
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x34:
        {
// switch_5BC8_case_0x34
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x35:
        {
// switch_5BC8_case_0x35
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x36:
        {
// switch_5BC8_case_0x36
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x37:
        {
// switch_5BC8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x38:
        {
// switch_5BC8_case_0x38
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
            pri = fun_0BF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x39:
        {
// switch_5BC8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x3a:
        {
// switch_5BC8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x3b:
        {
// switch_5BC8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x3c:
        {
// switch_5BC8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x3d:
        {
// switch_5BC8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
        case 0x3e:
        {
// switch_5BC8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            OP_JUMP switch_5BC8_case_default
        }
    }
}
// fun_63C0
fun_63C0() {
    pri = arg_4;
    OP_JNZ lab_63F8
    var_8 = 0;
    pri = fun_0E90()
// lab_63F8
    pri = arg_1;
    switch (pri) {
// switch_77D0
        case default:
        {
// switch_77D0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1158(var_264)
            OP_JZER lab_7D98
            pri = arg_3;
            switch (pri) {
// switch_7D40
                case default:
                {
// switch_7D40_case_default
                    OP_JUMP lab_8050
// lab_8050
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_80C0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_80C0
                    var_8 = 0;
                    pri = fun_0ED0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7D40_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D40_case_default
                }
                case 0x2:
                {
// switch_7D40_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D40_case_default
                }
                case 0x3:
                {
// switch_7D40_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D40_case_default
                }
            }
// lab_7D98
            pri = arg_1;
            OP_JZER lab_7DE8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7DE8
            pri = 0;
            OP_JUMP lab_7DF0
// lab_7DE8
            pri = 1;
// lab_7DF0
            OP_JZER lab_7E58
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0980(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7E58
            pri = 1;
            OP_JUMP lab_7E60
// lab_7E58
            pri = 0;
// lab_7E60
            OP_JZER lab_7EB0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8050
// lab_7EB0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7F18
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8050
// lab_7F18
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0980(var_24, var_16)
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
// switch_77D0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1:
        {
// switch_77D0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2:
        {
// switch_77D0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x3:
        {
// switch_77D0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x4:
        {
// switch_77D0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x5:
        {
// switch_77D0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BB8(var_40)
            OP_JUMP switch_77D0_case_default
        }
        case 0x6:
        {
// switch_77D0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x7:
        {
// switch_77D0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x8:
        {
// switch_77D0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x9:
        {
// switch_77D0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0xa:
        {
// switch_77D0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0xb:
        {
// switch_77D0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0xc:
        {
// switch_77D0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0xd:
        {
// switch_77D0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0xe:
        {
// switch_77D0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0xf:
        {
// switch_77D0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x10:
        {
// switch_77D0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x11:
        {
// switch_77D0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x12:
        {
// switch_77D0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x13:
        {
// switch_77D0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x14:
        {
// switch_77D0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x15:
        {
// switch_77D0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x16:
        {
// switch_77D0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x17:
        {
// switch_77D0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x18:
        {
// switch_77D0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x19:
        {
// switch_77D0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1a:
        {
// switch_77D0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1b:
        {
// switch_77D0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1c:
        {
// switch_77D0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1d:
        {
// switch_77D0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1e:
        {
// switch_77D0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x1f:
        {
// switch_77D0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x20:
        {
// switch_77D0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x21:
        {
// switch_77D0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x22:
        {
// switch_77D0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x23:
        {
// switch_77D0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x24:
        {
// switch_77D0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x25:
        {
// switch_77D0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x26:
        {
// switch_77D0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x27:
        {
// switch_77D0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x28:
        {
// switch_77D0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x29:
        {
// switch_77D0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2a:
        {
// switch_77D0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2b:
        {
// switch_77D0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2c:
        {
// switch_77D0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2d:
        {
// switch_77D0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2e:
        {
// switch_77D0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x2f:
        {
// switch_77D0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x30:
        {
// switch_77D0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x31:
        {
// switch_77D0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x32:
        {
// switch_77D0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x33:
        {
// switch_77D0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x34:
        {
// switch_77D0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x35:
        {
// switch_77D0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x36:
        {
// switch_77D0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x37:
        {
// switch_77D0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x38:
        {
// switch_77D0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x39:
        {
// switch_77D0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x3a:
        {
// switch_77D0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x3b:
        {
// switch_77D0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x3c:
        {
// switch_77D0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x3d:
        {
// switch_77D0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
        case 0x3e:
        {
// switch_77D0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0940(var_24, var_16, var_8)
            OP_JUMP switch_77D0_case_default
        }
    }
}
// fun_80F0
fun_80F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8300(var_16, var_8)
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
    OP_JZER lab_82E8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_82E8
    pri = 0;
    return pri;
}
// fun_8300
fun_8300() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0940(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8348
fun_8348() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8448
        case default:
        {
// switch_8448_case_default
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
// switch_8448_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8448_case_default
        }
        case 0x1:
        {
// switch_8448_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8448_case_default
        }
        case 0x2:
        {
// switch_8448_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8448_case_default
        }
        case 0x3:
        {
// switch_8448_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8448_case_default
        }
    }
}
// fun_8508
fun_8508() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8558
// lab_8558
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_85D0
    OP_JUMP lab_8600
// lab_85D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8558
// lab_8600
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8688
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_63C0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1428(var_56)
// lab_8688
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_86F0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F68(var_24, var_16)
// lab_86F0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0F68(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_87B0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09B8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0738(var_88, var_80, var_72, var_64, var_56)
// lab_87B0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_87F0
    pri = 0;
    return pri;
// lab_87F0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8938
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0908(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8900
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8938
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_07E0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09B8(var_40)
    pri = 0;
    return pri;
// lab_8900
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F68(var_16, var_8)
}
// fun_89C0
fun_89C0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8A58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09B8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_24A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8A58
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8BB0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8B18
    var_24 = 30528;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8B18
    pri = 1;
    OP_JUMP lab_8B20
// lab_8BB0
    pri = 0;
    return pri;
// lab_8B18
    pri = 0;
// lab_8B20
    OP_JZER lab_8BB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09B8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_24A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8BC0
fun_8BC0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8F40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8C28
fun_8C28() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8C98
    OP_CONST_S -8, 1
// lab_8C98
    pri = arg_0;
    OP_JNZ lab_8CB8
    OP_ZERO_P_S -8
// lab_8CB8
    pri = var_8;
    OP_JZER lab_8D40
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8D40
    pri = 0;
    return pri;
}
// fun_8D58
fun_8D58() {
    var_8 = 30632;
    var_16 = 8;
    pri = fun_2148(var_8)
    var_24 = 0;
    pri = fun_2180()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2250(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2390(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8E70
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8E70
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_89C0(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8BC0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2220()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2470(var_112)
    pri = 0;
    return pri;
}
// fun_8F40
fun_8F40() {
    var_8 = 30792;
    var_16 = 8;
    pri = fun_2148(var_8)
    var_24 = 0;
    pri = fun_2180()
    pri = arg_3;
    OP_JNZ lab_9060
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9028
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_90D0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9050
// lab_9060
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9270(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9028
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9198(var_16, var_8)
// lab_9050
    OP_JUMP lab_90A8
// lab_90A8
    var_8 = 0;
    pri = fun_2220()
    pri = 0;
    return pri;
}
// fun_90D0
fun_90D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9270(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9180
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9180
    pri = 0;
    return pri;
}
// fun_9198
fun_9198() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_22A0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1E08(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1F00(var_72)
    var_88 = 0;
    pri = fun_1FC0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2250(var_96)
    pri = 0;
    return pri;
}
// fun_9270
fun_9270() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_92B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9578(var_8)
// lab_92B8
    pri = arg_4;
    OP_JNZ lab_9320
    var_8 = 0;
    var_16 = 8;
    pri = fun_2250(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_22A0(var_40, var_32, var_24)
// lab_9320
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_93C0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_22F0(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1E08(var_56, var_48, var_40)
    OP_JUMP lab_94B0
// lab_93C0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9478
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9478
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9478
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1E08(var_24, var_16, var_8)
// lab_94B0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_94F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_04F0(var_8)
// lab_94F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F00(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9780(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8C28(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9578
fun_9578() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_95D8
    var_16 = 30952;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_95D8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9718
        case default:
        {
// switch_9718_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9708
            var_16 = 31496;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9708
            OP_JUMP lab_9750
// lab_9750
            var_8 = 31712;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9718_case_0x1
            var_8 = 31168;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9750
        }
        case 0x2:
        {
// switch_9718_case_0x2
            var_8 = 31296;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9750
        }
    }
}
// fun_9780
fun_9780() {
    pri = arg_2;
    OP_JNZ lab_9868
    var_8 = 0;
    var_16 = 8;
    pri = fun_2250(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_22A0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2340(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9868
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1E08(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1F00(var_40)
    var_56 = 0;
    pri = fun_1FC0()
    pri = 0;
    return pri;
}
// fun_98E0
fun_98E0() {
    pri = 31896;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9968
// lab_9968
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9AE8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9AD8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9A28
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9A28
    pri = 0;
    OP_JUMP lab_9A30
// lab_9AE8
    pri = 0;
    return pri;
// lab_9AD8
    OP_JUMP lab_9960
// lab_9960
    OP_INC_P_S -936
// lab_9A28
    pri = 1;
// lab_9A30
    OP_JZER lab_9AA8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9AA0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9AA8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9AA0
}
// fun_9B08
fun_9B08() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9BA0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32816;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1400()
// lab_9BA0
    pri = arg_4;
    OP_JZER lab_9BD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1458(var_8)
// lab_9BD8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9C30
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9C30
    pri = 0;
    OP_JUMP lab_9C38
// lab_9C30
    pri = 1;
// lab_9C38
    OP_JZER lab_9D00
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9D00
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9CD8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1340(var_32, var_24)
    OP_JUMP lab_9D00
// lab_9D00
    pri = arg_2;
    OP_JZER lab_9DD8
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9DA8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F68(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0688(var_40)
    OP_JUMP lab_9DD8
// lab_9DD8
    pri = arg_3;
    OP_JZER lab_9E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_13C8(var_8)
// lab_9E10
    pri = 0;
    return pri;
// lab_9DA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F68(var_16, var_8)
// lab_9CD8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1340(var_16, var_8)
}
// fun_9E20
fun_9E20() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_98E0(var_24)
    pri = 0;
    return pri;
}
// fun_9E88
fun_9E88() {
    pri = g_mode;
    switch (pri) {
// switch_9F98
        case default:
        {
// switch_9F98_case_default
            pri = CommandNOP()
            OP_JUMP lab_A000
// lab_A000
            pri = 0;
            return pri;
        }
        case 0xbd243f1ea419aabb:
        {
// switch_9F98_case_0xbd243f1ea419aabb
            var_8 = 0;
            pri = fun_AD80()
            OP_JUMP lab_A000
        }
        case 0x0:
        {
// switch_9F98_case_0x0
            var_8 = 0;
            pri = fun_A010()
            OP_JUMP lab_A000
        }
        case 0x462652cc6851dbc:
        {
// switch_9F98_case_0x462652cc6851dbc
            var_8 = 0;
            pri = fun_B690()
            OP_JUMP lab_A000
        }
        case 0x4fb59921df606607:
        {
// switch_9F98_case_0x4fb59921df606607
            var_8 = 0;
            pri = fun_AC90()
            OP_JUMP lab_A000
        }
        case 0x772d93a4c5a01b9e:
        {
// switch_9F98_case_0x772d93a4c5a01b9e
            var_8 = 0;
            pri = fun_ADE8()
            OP_JUMP lab_A000
        }
    }
}
// fun_A010
fun_A010() {
    pri = 0;
    return pri;
}
// fun_A028
fun_A028() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9B08(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A080
fun_A080() {
    pri = 0;
    return pri;
}
// fun_A098
fun_A098() {
    pri = 0;
    return pri;
}
// fun_A0B0
fun_A0B0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4630319661885633331;
    var_24 = 0;
    OP_PUSH5_C 4666203521281823867, 4638894797051123466, 4665014487417314345, 4666257870141584835, 4638861723741359964
    var_32 = 4665021403345453056;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_23E0()
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4584175357891130163, 4666221850140658893, 4665123053195440947, 8802641224559852288
    var_72 = 48;
    pri = fun_0630(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    OP_PUSH2_C 8802641224559852288, 2298869767325498192
    var_112 = 48;
    pri = fun_0788(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 30;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 0;
    var_144 = 4630319661885633331;
    var_152 = 3;
    OP_PUSH5_C 4666201107853800899, 4636857621907180093, 4665085372931957064, 4666318618159019459, 4636716180731382989
    var_160 = 4665100337285211095;
    var_168 = 15;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    pri = fun_23E0()
    var_184 = 2298869767325498192;
    var_192 = 8;
    pri = fun_07E0(var_184)
    var_200 = 0;
    var_208 = 1;
    var_216 = 2298869767325498192;
    var_224 = 24;
    pri = fun_80F0(var_216, var_208, var_200)
    var_232 = 1;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 2298869767325498192;
    var_256 = 8;
    pri = fun_09B8(var_248)
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    OP_PUSH2_C 543636608200412089, 2298869767325498192
    var_304 = 56;
    pri = fun_1D08(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1F00(var_312)
    var_328 = 0;
    pri = fun_1FC0()
    var_336 = 1;
    var_344 = 1;
    var_352 = -1;
    var_360 = -1;
    var_368 = 0;
    var_376 = 6;
    var_384 = 2298869767325498192;
    var_392 = 56;
    pri = fun_4088(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_400 = 90;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 1;
    var_424 = 3;
    var_432 = 0;
    var_440 = 6;
    var_448 = 2298869767325498192;
    var_456 = 40;
    pri = fun_63C0(var_448, var_440, var_432, var_424, var_416)
    var_464 = 0;
    var_472 = 3;
    var_480 = 0;
    var_488 = 100;
    var_496 = -1;
    OP_PUSH2_C 543633309665527456, 2298869767325498192
    var_504 = 56;
    pri = fun_1D08(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 8;
    pri = fun_1F00(var_512)
    var_528 = 0;
    pri = fun_1FC0()
    var_536 = 2298869767325498192;
    var_544 = 8;
    pri = fun_09B8(var_536)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C 543634409177155667, 2298869767325498192
    var_592 = 56;
    pri = fun_1D08(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_1F00(var_600)
    var_616 = 0;
    var_624 = 2195450633310595492;
    var_632 = 0;
    var_640 = 24;
    pri = fun_1FF0(var_632, var_624, var_616)
    var_648 = 0;
    var_656 = 2195453931845480125;
    var_664 = 1;
    var_672 = 24;
    pri = fun_1FF0(var_664, var_656, var_648)
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    var_704 = 1;
    var_712 = 32;
    pri = fun_20D8(var_704, var_696, var_688, var_680)
    var_720 = 2;
    var_728 = 4;
    var_736 = 2298869767325498192;
    var_744 = 24;
    pri = fun_1098(var_736, var_728, var_720)
    var_752 = 1;
    var_760 = 1;
    var_768 = -1;
    var_776 = -1;
    var_784 = 0;
    var_792 = 12;
    var_800 = 2298869767325498192;
    var_808 = 56;
    pri = fun_4088(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 0;
    var_824 = 3;
    var_832 = 0;
    var_840 = 100;
    var_848 = -1;
    OP_PUSH2_C 543639906735296722, 2298869767325498192
    var_856 = 56;
    pri = fun_1D08(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1F00(var_864)
    var_880 = 0;
    pri = fun_1FC0()
    var_888 = 2298869767325498192;
    var_896 = 8;
    pri = fun_1100(var_888)
    var_904 = 1;
    var_912 = 3;
    var_920 = 0;
    var_928 = 12;
    var_936 = 2298869767325498192;
    var_944 = 40;
    pri = fun_63C0(var_936, var_928, var_920, var_912, var_904)
    var_952 = 2298869767325498192;
    var_960 = 8;
    pri = fun_09B8(var_952)
    var_968 = 1;
    var_976 = 1;
    var_984 = -1;
    var_992 = -1;
    var_1000 = 0;
    var_1008 = 8;
    var_1016 = 2298869767325498192;
    var_1024 = 56;
    pri = fun_4088(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 0;
    var_1040 = 3;
    var_1048 = 0;
    var_1056 = 100;
    var_1064 = -1;
    OP_PUSH2_C 543641006246924933, 2298869767325498192
    var_1072 = 56;
    pri = fun_1D08(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1080 = 1;
    var_1088 = 8;
    pri = fun_1F00(var_1080)
    var_1096 = 0;
    pri = fun_1FC0()
    var_1104 = 1;
    var_1112 = 3;
    var_1120 = 0;
    var_1128 = 8;
    var_1136 = 2298869767325498192;
    var_1144 = 40;
    pri = fun_63C0(var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1152 = 2298869767325498192;
    var_1160 = 8;
    pri = fun_09B8(var_1152)
    var_1168 = 1;
    var_1176 = 0;
    var_1184 = 4641240890982006784;
    var_1192 = 0;
    var_1200 = 0;
    OP_PUSH4_C 4666081772359280230, 4664995619797781709, 4607182418800017408, 2298869767325498192
    var_1208 = 72;
    pri = fun_06C0(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1216 = 15;
    var_1224 = 8;
    pri = fun_0060(var_1216)
    var_1232 = 1;
    var_1240 = 0;
    var_1248 = 32816;
    var_1256 = 8;
    var_1264 = 32;
    pri = fun_0308(var_1256, var_1248, var_1240, var_1232)
    var_1272 = 0;
    pri = fun_0378()
    var_1280 = 32864;
    pri = SoundPostEvent(var_1280)
    var_1288 = 2298869767325498192;
    var_1296 = 8;
    pri = fun_07E0(var_1288)
    pri = 0;
    return pri;
}
// fun_AAD8
fun_AAD8() {
    pri = 0;
    return pri;
}
// fun_AAF0
fun_AAF0() {
    var_8 = 2298869767325498192;
    var_16 = 8;
    pri = fun_0600(var_8)
    var_24 = 900;
    var_32 = 8;
    pri = fun_9E20(var_24)
    var_40 = 5306116557915082582;
    pri = VanishFlagReset(var_40)
    var_48 = 7664219872515097466;
    pri = VanishFlagReset(var_48)
    var_56 = -1490277263018139948;
    pri = FlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_ABC8
fun_ABC8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 1430;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 1725;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C -3563796490812336488, -1144674125616614935, 8587682400364927902
    var_80 = 80;
    pri = fun_0430(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_AC90
fun_AC90() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_A028()
    var_16 = 0;
    pri = fun_A080()
    var_24 = 0;
    pri = fun_A098()
    var_32 = 0;
    pri = fun_A0B0()
    var_40 = 0;
    pri = fun_AAD8()
    var_48 = 0;
    pri = fun_AAF0()
    var_56 = 0;
    pri = fun_ABC8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_AD80
fun_AD80() {
    var_8 = 0;
    pri = fun_A080()
    var_16 = 0;
    pri = fun_AAF0()
    var_24 = 22;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
// fun_ADE8
fun_ADE8() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4629756711932212019;
    var_24 = 0;
    OP_PUSH5_C 4653741766443773460, 4636315782577012081, 4655244007190571254, 4655662085491916800, 4638810002714389381
    var_32 = 4655796049988645028;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_23E0()
    var_56 = 0;
    var_64 = 4629756711932212019;
    var_72 = 0;
    OP_PUSH5_C 4653550627342400881, 4636315782577012081, 4655908859881654845, 4655470946390544220, 4638810002714389381
    var_80 = 4656460902679728620;
    var_88 = 200;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C -4582834833314545664, 4654734097678073856, 4655270659352428544, 8802641224559852288
    var_112 = 48;
    pri = fun_0630(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH4_C -4593404218690030797, 4651400378422657024, 4655631299166339072, 7664219872515097466
    var_136 = 48;
    pri = fun_0630(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 0;
    var_152 = 1;
    var_160 = 7664219872515097466;
    var_168 = 24;
    pri = fun_80F0(var_160, var_152, var_144)
    var_176 = 1;
    var_184 = 8;
    pri = fun_0060(var_176)
    var_192 = 7664219872515097466;
    var_200 = 8;
    pri = fun_09B8(var_192)
    var_208 = 1;
    var_216 = 1;
    var_224 = -1;
    OP_PUSH2_C 8802641224559852288, 7664219872515097466
    var_232 = 40;
    pri = fun_0F10(var_224, var_216, var_208, var_200, var_192)
    var_240 = 1;
    var_248 = 0;
    var_256 = 4641240890982006784;
    var_264 = 0;
    var_272 = 0;
    OP_PUSH4_C 4652345958422544384, 4655270659352428544, 4607182418800017408, 8802641224559852288
    var_280 = 72;
    pri = fun_06C0(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 33032;
    pri = SoundPostEvent(var_288)
    var_296 = 30;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 33208;
    var_320 = 8;
    var_328 = 16;
    pri = fun_02A8(var_320, var_312)
    var_336 = 0;
    pri = fun_0378()
    var_344 = 8802641224559852288;
    var_352 = 8;
    pri = fun_07E0(var_344)
    var_360 = -1;
    var_368 = 8802641224559852288;
    var_376 = 16;
    pri = fun_0F68(var_368, var_360)
    var_384 = 0;
    var_392 = 4629756711932212019;
    var_400 = 0;
    OP_PUSH5_C 4651691089297040998, 4637324166681078006, 4655360291540324844, 4653190559274536796, 4637500088541522166
    var_408 = 4655715389815631380;
    var_416 = 1;
    pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    pri = fun_23E0()
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    var_456 = 0;
    OP_PUSH2_C 7664219872515097466, 8802641224559852288
    var_464 = 48;
    pri = fun_0788(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 0;
    var_480 = 3;
    var_488 = 0;
    var_496 = 100;
    var_504 = -1;
    OP_PUSH2_C 543644304781809566, 7664219872515097466
    var_512 = 56;
    pri = fun_1D08(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_1F00(var_520)
    var_536 = 0;
    pri = fun_1FC0()
    var_544 = 8802641224559852288;
    var_552 = 8;
    pri = fun_07E0(var_544)
    var_560 = 0;
    var_568 = 22;
    OP_PUSH2_C -6159769295581934535, 7664219872515097466
    var_576 = 32;
    pri = fun_8D58(var_568, var_560, var_552, var_544)
    var_584 = 0;
    var_592 = 4630192998146113536;
    var_600 = 0;
    OP_PUSH5_C 4652640099773207020, 4636930101713683087, 4655733905591443128, 4653274517982433772, 4637808303641020334
    var_608 = 4656410501066711368;
    var_616 = 1;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    pri = fun_23E0()
    var_632 = 0;
    var_640 = 0;
    var_648 = 7664219872515097466;
    var_656 = 24;
    pri = fun_80F0(var_648, var_640, var_632)
    var_664 = 1;
    var_672 = 8;
    pri = fun_0060(var_664)
    var_680 = 7664219872515097466;
    var_688 = 8;
    pri = fun_09B8(var_680)
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH2_C -4587802866653488742, 7664219872515097466
    var_720 = 40;
    pri = fun_0738(var_712, var_704, var_696, var_688, var_680)
    var_728 = 7664219872515097466;
    var_736 = 8;
    pri = fun_07E0(var_728)
    var_744 = 0;
    var_752 = 3;
    var_760 = 0;
    var_768 = 100;
    var_776 = -1;
    OP_PUSH2_C 543645404293437777, 7664219872515097466
    var_784 = 56;
    pri = fun_1D08(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_792 = 1;
    var_800 = 8;
    pri = fun_1F00(var_792)
    var_808 = 0;
    pri = fun_1FC0()
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    OP_PUSH2_C -4586592524253632922, 8802641224559852288
    var_840 = 40;
    pri = fun_0738(var_832, var_824, var_816, var_808, var_800)
    var_848 = 8802641224559852288;
    var_856 = 8;
    pri = fun_07E0(var_848)
    var_864 = 50;
    var_872 = 8;
    pri = fun_0060(var_864)
    var_880 = 3;
    var_888 = 1;
    pri = EvCameraEnd(var_888, var_880)
    pri = 0;
    return pri;
}
// fun_B690
fun_B690() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = 7664219872515097466;
    var_56 = 48;
    pri = fun_8348(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C 543637707712040300, 7664219872515097466
    var_104 = 56;
    pri = fun_1D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1F00(var_112)
    var_128 = 0;
    pri = fun_1FC0()
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 7664219872515097466;
    var_168 = 32;
    pri = fun_8508(var_160, var_152, var_144, var_136)
    var_176 = 1;
    var_184 = 0;
    var_192 = 4641240890982006784;
    var_200 = 0;
    var_208 = 0;
    var_216 = 1430;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 1725;
    pri = float(var_232)
    var_240 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_248 = 72;
    pri = fun_06C0(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 8802641224559852288;
    var_264 = 8;
    pri = fun_07E0(var_256)
    pri = 0;
    return pri;
}
