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
    pri = arg_0;
    switch (pri) {
// switch_06E8
        case default:
        {
// switch_06E8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_06E8_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
        case 0x1:
        {
// switch_06E8_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
        case 0x2:
        {
// switch_06E8_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
        case 0x3:
        {
// switch_06E8_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
        case 0x4:
        {
// switch_06E8_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
        case 0x5:
        {
// switch_06E8_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
        case 0x6:
        {
// switch_06E8_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_06E8_case_default
        }
    }
}
// fun_0780
fun_0780() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0810
fun_0810() {
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
// fun_0888
fun_0888() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D8
fun_08D8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A0(var_8)
    OP_JZER lab_0950
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10D0(var_24)
    OP_JNZ lab_0950
    pri = 0;
    return pri;
// lab_0950
    OP_JUMP lab_0960
// lab_0960
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09C0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0960
    pri = 0;
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A78
fun_0A78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AF8
    pri = 0;
    return pri;
// lab_0AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B38
// lab_0B38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A0(var_8)
    OP_JNZ lab_0BC0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BB0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C08
    pri = 0;
    return pri;
// lab_0C08
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CB0(var_8)
    pri = 0;
    return pri;
// lab_0C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B38
    pri = 0;
    return pri;
// lab_0BB0
    OP_JUMP lab_0C08
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D38
    pri = 0;
    return pri;
// lab_0D38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A0(var_8)
    OP_JZER lab_0E68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D90
    OP_ZERO_P_S 64
// lab_0E68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA0
    OP_CONST_S 64, 1
// lab_0EA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED8
    OP_CONST_S 72, 1
// lab_0ED8
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
// lab_0D90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB8
    OP_ZERO_P_S 72
// lab_0DB8
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
    OP_JUMP lab_0F78
// lab_0F78
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1008
fun_1008() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1100
fun_1100() {
    OP_JUMP lab_1118
// lab_1118
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_11A8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1198
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    pri = 0;
    return pri;
// lab_11A8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1238
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1228
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    pri = 0;
    return pri;
// lab_1238
    pri = 0;
    return pri;
// lab_1228
    OP_JUMP lab_1248
// lab_1248
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1118
    pri = 0;
    return pri;
// lab_1198
    OP_JUMP lab_1248
}
// fun_1288
fun_1288() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1100(var_40)
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_13A0
fun_13A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
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
// switch_19F0
        case default:
        {
// switch_19F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A38
// lab_1A38
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
            OP_JNZ lab_1AE0
            var_88 = 0;
            pri = fun_1DB0()
// lab_1AE0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15D8
                case default:
                {
// switch_15D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1650
// lab_1650
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_15D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1650
                }
                case 0x1:
                {
// switch_15D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1650
                }
                case 0x2:
                {
// switch_15D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1650
                }
                case 0x3:
                {
// switch_15D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1650
                }
                case 0x4:
                {
// switch_15D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1650
                }
                case 0x5:
                {
// switch_15D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1650
                }
            }
        }
        case 0x65:
        {
// switch_19F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1790
                case default:
                {
// switch_1790_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1808
// lab_1808
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_1790_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1808
                }
                case 0x1:
                {
// switch_1790_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1808
                }
                case 0x2:
                {
// switch_1790_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1808
                }
                case 0x3:
                {
// switch_1790_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1808
                }
                case 0x4:
                {
// switch_1790_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1808
                }
                case 0x5:
                {
// switch_1790_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1808
                }
            }
        }
        case 0x66:
        {
// switch_19F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1948
                case default:
                {
// switch_1948_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19C0
// lab_19C0
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_1948_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19C0
                }
                case 0x1:
                {
// switch_1948_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19C0
                }
                case 0x2:
                {
// switch_1948_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19C0
                }
                case 0x3:
                {
// switch_1948_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19C0
                }
                case 0x4:
                {
// switch_1948_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19C0
                }
                case 0x5:
                {
// switch_1948_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19C0
                }
            }
        }
    }
}
// fun_1AF8
fun_1AF8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_13D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A78(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C08
    pri = 1;
    return pri;
// lab_1C08
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C50
fun_1C50() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1CA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B60(var_8)
    arg_2 = pri;
// lab_1CA0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1AF8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1D00(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DB0
fun_1DB0() {
    OP_JUMP lab_1DC8
// lab_1DC8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E08
    pri = 0;
    return pri;
// lab_1E08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DC8
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = 0;
    pri = fun_1DB0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1EF8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1EF8
    pri = 0;
    return pri;
}
// fun_1F08
fun_1F08() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F70
fun_1F70() {
    OP_JUMP lab_1F88
// lab_1F88
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1FD0
    OP_JUMP lab_2000
    OP_JUMP lab_1FF0
// lab_1FD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2000
    pri = 0;
    return pri;
// lab_1FF0
    OP_JUMP lab_1F88
}
// fun_2010
fun_2010() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2040
fun_2040() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2090
fun_2090() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20E0
fun_20E0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21D0
fun_21D0() {
    OP_JUMP lab_21E8
// lab_21E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2220
    pri = 0;
    return pri;
// lab_2220
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21E8
    pri = 0;
    return pri;
}
// fun_2260
fun_2260() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2298
fun_2298() {
    pri = arg_6;
    OP_JNZ lab_22D0
    var_8 = 0;
    pri = fun_0F88()
// lab_22D0
    pri = arg_1;
    switch (pri) {
// switch_3838
        case default:
        {
// switch_3838_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B88
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B88
            pri = 1;
            OP_JUMP lab_3B90
// lab_3B88
            pri = 0;
// lab_3B90
            OP_JZER lab_3CE8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A78(var_24, var_16)
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
            OP_JUMP lab_3D48
// lab_3CE8
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
// lab_3D48
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3DA8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E08
// lab_3DA8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E08
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E08
            pri = arg_2;
            OP_JZER lab_3E48
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3E48
            var_8 = 0;
            pri = fun_0FC8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3838_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1:
        {
// switch_3838_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x2:
        {
// switch_3838_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x3:
        {
// switch_3838_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x4:
        {
// switch_3838_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x5:
        {
// switch_3838_case_0x5
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x6:
        {
// switch_3838_case_0x6
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x7:
        {
// switch_3838_case_0x7
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x8:
        {
// switch_3838_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x9:
        {
// switch_3838_case_0x9
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xa:
        {
// switch_3838_case_0xa
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xb:
        {
// switch_3838_case_0xb
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xc:
        {
// switch_3838_case_0xc
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xd:
        {
// switch_3838_case_0xd
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xe:
        {
// switch_3838_case_0xe
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0xf:
        {
// switch_3838_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x10:
        {
// switch_3838_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x11:
        {
// switch_3838_case_0x11
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x12:
        {
// switch_3838_case_0x12
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x13:
        {
// switch_3838_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x14:
        {
// switch_3838_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x15:
        {
// switch_3838_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x16:
        {
// switch_3838_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x17:
        {
// switch_3838_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x18:
        {
// switch_3838_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x19:
        {
// switch_3838_case_0x19
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
            pri = fun_0CE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3838_case_default
        }
        case 0x1a:
        {
// switch_3838_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A00(var_48, var_40)
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
            pri = fun_0CE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3838_case_default
        }
        case 0x1b:
        {
// switch_3838_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A00(var_48, var_40)
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
            pri = fun_0CE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3838_case_default
        }
        case 0x1c:
        {
// switch_3838_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A00(var_48, var_40)
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
            pri = fun_0CE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3838_case_default
        }
        case 0x1d:
        {
// switch_3838_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1e:
        {
// switch_3838_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x1f:
        {
// switch_3838_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x20:
        {
// switch_3838_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x21:
        {
// switch_3838_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x22:
        {
// switch_3838_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x23:
        {
// switch_3838_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x24:
        {
// switch_3838_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x25:
        {
// switch_3838_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x26:
        {
// switch_3838_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x27:
        {
// switch_3838_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x28:
        {
// switch_3838_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
        case 0x29:
        {
// switch_3838_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3838_case_default
        }
    }
}
// fun_3E78
fun_3E78() {
    pri = arg_4;
    OP_JNZ lab_3EB0
    var_8 = 0;
    pri = fun_0F88()
// lab_3EB0
    pri = arg_1;
    switch (pri) {
// switch_5288
        case default:
        {
// switch_5288_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_10A0(var_264)
            OP_JZER lab_5850
            pri = arg_3;
            switch (pri) {
// switch_57F8
                case default:
                {
// switch_57F8_case_default
                    OP_JUMP lab_5B08
// lab_5B08
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5B78
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5B78
                    var_8 = 0;
                    pri = fun_0FC8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_57F8_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_57F8_case_default
                }
                case 0x2:
                {
// switch_57F8_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_57F8_case_default
                }
                case 0x3:
                {
// switch_57F8_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_57F8_case_default
                }
            }
// lab_5850
            pri = arg_1;
            OP_JZER lab_58A0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_58A0
            pri = 0;
            OP_JUMP lab_58A8
// lab_58A0
            pri = 1;
// lab_58A8
            OP_JZER lab_5910
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A78(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5910
            pri = 1;
            OP_JUMP lab_5918
// lab_5910
            pri = 0;
// lab_5918
            OP_JZER lab_5968
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5B08
// lab_5968
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_59D0
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5B08
// lab_59D0
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A78(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5288_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1:
        {
// switch_5288_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2:
        {
// switch_5288_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x3:
        {
// switch_5288_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x4:
        {
// switch_5288_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x5:
        {
// switch_5288_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CB0(var_40)
            OP_JUMP switch_5288_case_default
        }
        case 0x6:
        {
// switch_5288_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x7:
        {
// switch_5288_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x8:
        {
// switch_5288_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x9:
        {
// switch_5288_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0xa:
        {
// switch_5288_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0xb:
        {
// switch_5288_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0xc:
        {
// switch_5288_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0xd:
        {
// switch_5288_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0xe:
        {
// switch_5288_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0xf:
        {
// switch_5288_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x10:
        {
// switch_5288_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x11:
        {
// switch_5288_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x12:
        {
// switch_5288_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x13:
        {
// switch_5288_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x14:
        {
// switch_5288_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x15:
        {
// switch_5288_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x16:
        {
// switch_5288_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x17:
        {
// switch_5288_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x18:
        {
// switch_5288_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x19:
        {
// switch_5288_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1a:
        {
// switch_5288_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1b:
        {
// switch_5288_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1c:
        {
// switch_5288_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1d:
        {
// switch_5288_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1e:
        {
// switch_5288_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x1f:
        {
// switch_5288_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x20:
        {
// switch_5288_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x21:
        {
// switch_5288_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x22:
        {
// switch_5288_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x23:
        {
// switch_5288_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x24:
        {
// switch_5288_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x25:
        {
// switch_5288_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x26:
        {
// switch_5288_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x27:
        {
// switch_5288_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x28:
        {
// switch_5288_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x29:
        {
// switch_5288_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2a:
        {
// switch_5288_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2b:
        {
// switch_5288_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2c:
        {
// switch_5288_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2d:
        {
// switch_5288_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2e:
        {
// switch_5288_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x2f:
        {
// switch_5288_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x30:
        {
// switch_5288_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x31:
        {
// switch_5288_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x32:
        {
// switch_5288_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x33:
        {
// switch_5288_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x34:
        {
// switch_5288_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x35:
        {
// switch_5288_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x36:
        {
// switch_5288_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x37:
        {
// switch_5288_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x38:
        {
// switch_5288_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x39:
        {
// switch_5288_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x3a:
        {
// switch_5288_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x3b:
        {
// switch_5288_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x3c:
        {
// switch_5288_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x3d:
        {
// switch_5288_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
        case 0x3e:
        {
// switch_5288_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A38(var_24, var_16, var_8)
            OP_JUMP switch_5288_case_default
        }
    }
}
// fun_5BA8
fun_5BA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5DB8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 9856;
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
    var_424 = 9912;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 9928;
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
    OP_JZER lab_5DA0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_5DA0
    pri = 0;
    return pri;
}
// fun_5DB8
fun_5DB8() {
    var_8 = arg_1;
    var_16 = 9976;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A38(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5E00
fun_5E00() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5F00
        case default:
        {
// switch_5F00_case_default
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
// switch_5F00_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5F00_case_default
        }
        case 0x1:
        {
// switch_5F00_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5F00_case_default
        }
        case 0x2:
        {
// switch_5F00_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5F00_case_default
        }
        case 0x3:
        {
// switch_5F00_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5F00_case_default
        }
    }
}
// fun_5FC0
fun_5FC0() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1DB0()
    pri = 0;
    return pri;
}
// fun_6058
fun_6058() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5E00(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5FC0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6100
fun_6100() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6150
// lab_6150
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 10080;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_61C8
    OP_JUMP lab_61F8
// lab_61C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_6150
// lab_61F8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6280
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3E78(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1370(var_56)
// lab_6280
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_62E8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1060(var_24, var_16)
// lab_62E8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1060(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_63A8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AB0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0888(var_88, var_80, var_72, var_64, var_56)
// lab_63A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_63E8
    pri = 0;
    return pri;
// lab_63E8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6530
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 10200;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A00(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_64F8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6530
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08D8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08D8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AB0(var_40)
    pri = 0;
    return pri;
// lab_64F8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1060(var_16, var_8)
}
// fun_65B8
fun_65B8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_6058(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1E48(var_112)
    var_128 = 0;
    pri = fun_1F08()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_6100(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6730
fun_6730() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_67C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2298(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_67C8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_6920
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_6888
    var_24 = 10336;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_6888
    pri = 1;
    OP_JUMP lab_6890
// lab_6920
    pri = 0;
    return pri;
// lab_6888
    pri = 0;
// lab_6890
    OP_JZER lab_6920
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AB0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2298(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_6930
fun_6930() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_6730(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_69B8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_69B8
fun_69B8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_6DA0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6A20
fun_6A20() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_6DA0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6A88
fun_6A88() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_6AF8
    OP_CONST_S -8, 1
// lab_6AF8
    pri = arg_0;
    OP_JNZ lab_6B18
    OP_ZERO_P_S -8
// lab_6B18
    pri = var_8;
    OP_JZER lab_6BA0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_6BA0
    pri = 0;
    return pri;
}
// fun_6BB8
fun_6BB8() {
    var_8 = 10440;
    var_16 = 8;
    pri = fun_1F38(var_8)
    var_24 = 0;
    pri = fun_1F70()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2040(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2180(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_6CD0
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_6CD0
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_6730(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_6A20(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2010()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2260(var_112)
    pri = 0;
    return pri;
}
// fun_6DA0
fun_6DA0() {
    var_8 = 10600;
    var_16 = 8;
    pri = fun_1F38(var_8)
    var_24 = 0;
    pri = fun_1F70()
    pri = arg_3;
    OP_JNZ lab_6EC0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_6E88
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_6F30(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_6EB0
// lab_6EC0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_70D0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_6E88
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6FF8(var_16, var_8)
// lab_6EB0
    OP_JUMP lab_6F08
// lab_6F08
    var_8 = 0;
    pri = fun_2010()
    pri = 0;
    return pri;
}
// fun_6F30
fun_6F30() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_70D0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_6FE0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_6FE0
    pri = 0;
    return pri;
}
// fun_6FF8
fun_6FF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2090(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1D50(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1E48(var_72)
    var_88 = 0;
    pri = fun_1F08()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2040(var_96)
    pri = 0;
    return pri;
}
// fun_70D0
fun_70D0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7118
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_73D8(var_8)
// lab_7118
    pri = arg_4;
    OP_JNZ lab_7180
    var_8 = 0;
    var_16 = 8;
    pri = fun_2040(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2090(var_40, var_32, var_24)
// lab_7180
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_7220
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_20E0(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1D50(var_56, var_48, var_40)
    OP_JUMP lab_7310
// lab_7220
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_72D8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_72D8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_72D8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1D50(var_24, var_16, var_8)
// lab_7310
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7350
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_7350
    var_8 = 1;
    var_16 = 8;
    pri = fun_1E48(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_75E0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_6A88(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_73D8
fun_73D8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_7438
    var_16 = 10760;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_7438
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7578
        case default:
        {
// switch_7578_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_7568
            var_16 = 11304;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_7568
            OP_JUMP lab_75B0
// lab_75B0
            var_8 = 11520;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_7578_case_0x1
            var_8 = 10976;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_75B0
        }
        case 0x2:
        {
// switch_7578_case_0x2
            var_8 = 11104;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_75B0
        }
    }
}
// fun_75E0
fun_75E0() {
    pri = arg_2;
    OP_JNZ lab_76C8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2040(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2090(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2130(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_76C8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1D50(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1E48(var_40)
    var_56 = 0;
    pri = fun_1F08()
    pri = 0;
    return pri;
}
// fun_7740
fun_7740() {
    pri = 11704;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_77C8
// lab_77C8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7948
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7938
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7888
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7888
    pri = 0;
    OP_JUMP lab_7890
// lab_7948
    pri = 0;
    return pri;
// lab_7938
    OP_JUMP lab_77C0
// lab_77C0
    OP_INC_P_S -936
// lab_7888
    pri = 1;
// lab_7890
    OP_JZER lab_7908
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7900
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7908
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7900
}
// fun_7968
fun_7968() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7A00
    var_8 = 1;
    var_16 = 0;
    var_24 = 12624;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1348()
// lab_7A00
    pri = arg_4;
    OP_JZER lab_7A38
    var_8 = 1;
    var_16 = 8;
    pri = fun_13A0(var_8)
// lab_7A38
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7A90
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7A90
    pri = 0;
    OP_JUMP lab_7A98
// lab_7A90
    pri = 1;
// lab_7A98
    OP_JZER lab_7B60
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7B60
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_7B38
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1288(var_32, var_24)
    OP_JUMP lab_7B60
// lab_7B60
    pri = arg_2;
    OP_JZER lab_7C38
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_7C08
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1060(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07D8(var_40)
    OP_JUMP lab_7C38
// lab_7C38
    pri = arg_3;
    OP_JZER lab_7C70
    var_8 = 1;
    var_16 = 8;
    pri = fun_1310(var_8)
// lab_7C70
    pri = 0;
    return pri;
// lab_7C08
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1060(var_16, var_8)
// lab_7B38
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1288(var_16, var_8)
}
// fun_7C80
fun_7C80() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_7E00
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7D18
    var_8 = 1;
    var_16 = 0;
    var_24 = 12624;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_7E00
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_7D18
    pri = arg_0;
    OP_JNZ lab_7D60
    var_8 = 12672;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_7D80
// lab_7D60
    var_8 = 12848;
    pri = SoundPostEvent(var_8)
// lab_7D80
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7E00
    var_24 = 13112;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_7E40
fun_7E40() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7740(var_24)
    pri = 0;
    return pri;
}
// fun_7EA8
fun_7EA8() {
    pri = g_mode;
    switch (pri) {
// switch_7FB8
        case default:
        {
// switch_7FB8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8020
// lab_8020
            pri = 0;
            return pri;
        }
        case 0xaf3b4e22158cbd02:
        {
// switch_7FB8_case_0xaf3b4e22158cbd02
            var_8 = 0;
            pri = fun_9198()
            OP_JUMP lab_8020
        }
        case 0x0:
        {
// switch_7FB8_case_0x0
            var_8 = 0;
            pri = fun_8030()
            OP_JUMP lab_8020
        }
        case 0xc0b00c6cd13b225:
        {
// switch_7FB8_case_0xc0b00c6cd13b225
            var_8 = 0;
            pri = fun_9378()
            OP_JUMP lab_8020
        }
        case 0x4b649c1e635935e6:
        {
// switch_7FB8_case_0x4b649c1e635935e6
            var_8 = 0;
            pri = fun_9288()
            OP_JUMP lab_8020
        }
        case 0x4e137bfb0428080d:
        {
// switch_7FB8_case_0x4e137bfb0428080d
            var_8 = 0;
            pri = fun_92F0()
            OP_JUMP lab_8020
        }
    }
}
// fun_8030
fun_8030() {
    pri = 0;
    return pri;
}
// fun_8048
fun_8048() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7968(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_80A0
fun_80A0() {
    pri = 0;
    return pri;
}
// fun_80B8
fun_80B8() {
    pri = 0;
    return pri;
}
// fun_80D0
fun_80D0() {
    pri = EvCameraStart()
    var_8 = 2;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    pri = float(var_40)
    var_48 = pri;
    OP_PUSH3_C 4650819836283191296, 4654808864468762624, 8802641224559852288
    var_56 = 48;
    pri = fun_0780(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C -4588021009760439501, 4654135963352563712, 4654369059817652224, 4166911318193987639
    var_80 = 48;
    pri = fun_0780(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4636301005140734771, 4654184341864185856, 4653920459073519616, 5996991087849294980
    var_104 = 48;
    pri = fun_0780(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 1;
    var_136 = 2;
    var_144 = 16;
    pri = fun_7C80(var_136, var_128)
    var_152 = 30;
    var_160 = 8;
    pri = fun_0060(var_152)
    var_168 = 13160;
    pri = SoundPostEvent(var_168)
    var_176 = 0;
    var_184 = 8;
    pri = fun_0430(var_176)
    var_192 = 40;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 0;
    var_216 = 4631952216750555136;
    var_224 = 0;
    OP_PUSH5_C 4657020202254545715, 4642081797474929869, 4652626113985301709, 4657998107896289690, 4646589971070671913
    var_232 = 4654475800406476718;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    pri = fun_21D0()
    var_256 = 0;
    var_264 = 4631952216750555136;
    var_272 = 0;
    OP_PUSH5_C 4655716753210049823, 4642081797474929869, 4654320065579518525, 4657198103235919872, 4646572554806487941
    var_280 = 4656170499668600422;
    var_288 = 300;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 30;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 13336;
    pri = SoundPostEvent(var_312)
    var_320 = 13112;
    var_328 = 30;
    var_336 = 16;
    pri = fun_02A8(var_328, var_320)
    var_344 = 0;
    pri = fun_0378()
    var_352 = 10;
    var_360 = 8;
    pri = fun_0060(var_352)
    var_368 = 3;
    var_376 = 0;
    var_384 = -1117907548031489356;
    var_392 = 24;
    pri = fun_1D00(var_384, var_376, var_368)
    var_400 = 70;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 1;
    var_424 = 0;
    var_432 = 4641240890982006784;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH4_C 4653128810701520896, 4654808864468762624, 4607182418800017408, 8802641224559852288
    var_456 = 72;
    pri = fun_0810(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 20;
    var_472 = 8;
    pri = fun_0060(var_464)
    var_480 = 0;
    pri = fun_1F08()
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    OP_PUSH2_C 4639615372991502746, 4166911318193987639
    var_512 = 40;
    pri = fun_0888(var_504, var_496, var_488, var_480, var_472)
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    OP_PUSH2_C 4638799095559041843, 5996991087849294980
    var_544 = 40;
    pri = fun_0888(var_536, var_528, var_520, var_512, var_504)
    var_552 = 4166911318193987639;
    var_560 = 8;
    pri = fun_08D8(var_552)
    var_568 = 0;
    var_576 = 2;
    var_584 = 4166911318193987639;
    var_592 = 24;
    pri = fun_5BA8(var_584, var_576, var_568)
    var_600 = 1;
    var_608 = 8;
    pri = fun_0060(var_600)
    var_616 = 4166911318193987639;
    var_624 = 8;
    pri = fun_0AB0(var_616)
    var_632 = 8802641224559852288;
    var_640 = 8;
    pri = fun_08D8(var_632)
    var_648 = 1;
    var_656 = 1;
    var_664 = -1;
    OP_PUSH2_C 4166911318193987639, 8802641224559852288
    var_672 = 40;
    pri = fun_1008(var_664, var_656, var_648, var_640, var_632)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C 1507162564950858245, 4166911318193987639
    var_720 = 56;
    pri = fun_1C50(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 1;
    var_736 = 8;
    pri = fun_1E48(var_728)
    var_744 = 0;
    pri = fun_1F08()
    var_752 = 10;
    var_760 = 8;
    pri = fun_0060(var_752)
    var_768 = 1;
    var_776 = 0;
    var_784 = 4641240890982006784;
    var_792 = 0;
    var_800 = 0;
    OP_PUSH4_C 4653674168468897792, 4654610952375762944, 4607182418800017408, 8802641224559852288
    var_808 = 72;
    pri = fun_0810(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 45;
    var_824 = 8;
    pri = fun_0060(var_816)
    var_832 = 0;
    var_840 = 4631389266797133824;
    var_848 = 0;
    OP_PUSH5_C 4653757203587027436, 4644129352008639447, 4654761673429698478, 4653626933449368535, 4644442316998369608
    var_856 = 4655219114247318405;
    var_864 = 1;
    pri = EvCameraMove(var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = 0;
    pri = fun_21D0()
    var_880 = 8802641224559852288;
    var_888 = 8;
    pri = fun_08D8(var_880)
    var_896 = 0;
    var_904 = 1;
    var_912 = 4166911318193987639;
    var_920 = 24;
    pri = fun_5BA8(var_912, var_904, var_896)
    var_928 = 1;
    var_936 = 8;
    pri = fun_0060(var_928)
    var_944 = 4166911318193987639;
    var_952 = 8;
    pri = fun_0AB0(var_944)
    var_960 = 0;
    var_968 = 3;
    var_976 = 0;
    var_984 = 100;
    var_992 = -1;
    OP_PUSH2_C 1507159266415973612, 4166911318193987639
    var_1000 = 56;
    pri = fun_1C50(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_1E48(var_1008)
    var_1024 = 0;
    pri = fun_1F08()
    var_1032 = 0;
    var_1040 = 8;
    OP_PUSH2_C -6371876384429773535, 4166911318193987639
    var_1048 = 32;
    pri = fun_6BB8(var_1040, var_1032, var_1024, var_1016)
    var_1056 = 0;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 100;
    var_1088 = -1;
    OP_PUSH2_C 1507154868369460768, 4166911318193987639
    var_1096 = 56;
    pri = fun_1C50(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1104 = 1;
    var_1112 = 8;
    pri = fun_1E48(var_1104)
    var_1120 = 0;
    pri = fun_1F08()
    var_1128 = 6;
    var_1136 = 4;
    var_1144 = 2;
    var_1152 = 1;
    var_1160 = 9;
    var_1168 = 2;
    var_1176 = 19;
    var_1184 = 4166911318193987639;
    var_1192 = 64;
    pri = fun_6930(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1200 = 0;
    var_1208 = 2;
    var_1216 = 4166911318193987639;
    var_1224 = 24;
    pri = fun_5BA8(var_1216, var_1208, var_1200)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 4166911318193987639;
    var_1256 = 8;
    pri = fun_0AB0(var_1248)
    var_1264 = 0;
    var_1272 = 3;
    var_1280 = 0;
    var_1288 = 100;
    var_1296 = -1;
    OP_PUSH2_C 1507160365927601823, 4166911318193987639
    var_1304 = 56;
    pri = fun_1C50(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1312 = 1;
    var_1320 = 8;
    pri = fun_1E48(var_1312)
    var_1328 = 0;
    pri = fun_1F08()
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 877;
    pri = SoundPlayPokeVoice(var_1360, var_1352, var_1344, var_1336)
    var_1368 = 0;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 100;
    var_1400 = -1;
    OP_PUSH2_C -1293902894817085197, 5996991087849294980
    var_1408 = 56;
    pri = fun_1C50(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 1;
    var_1424 = 8;
    pri = fun_1E48(var_1416)
    var_1432 = 0;
    pri = fun_1F08()
    var_1440 = 15;
    var_1448 = 8;
    pri = fun_0060(var_1440)
    var_1456 = -1;
    var_1464 = 8802641224559852288;
    var_1472 = 16;
    pri = fun_1060(var_1464, var_1456)
    var_1480 = 3;
    var_1488 = 1;
    pri = EvCameraEnd(var_1488, var_1480)
    var_1496 = 0;
    var_1504 = 0;
    var_1512 = 4166911318193987639;
    var_1520 = 24;
    pri = fun_5BA8(var_1512, var_1504, var_1496)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_0060(var_1528)
    var_1544 = 4166911318193987639;
    var_1552 = 8;
    pri = fun_0AB0(var_1544)
    pri = 0;
    return pri;
}
// fun_8E68
fun_8E68() {
    pri = 0;
    return pri;
}
// fun_8E80
fun_8E80() {
    var_8 = 760;
    var_16 = 8;
    pri = fun_7E40(var_8)
    var_24 = 4337981634622023336;
    pri = VanishFlagSet(var_24)
    var_32 = 4337976137063882281;
    pri = VanishFlagSet(var_32)
    var_40 = 3275595920700649692;
    pri = VanishFlagReset(var_40)
    var_48 = -3276541588292305844;
    pri = VanishFlagReset(var_48)
    var_56 = 8934089827376349105;
    pri = VanishFlagReset(var_56)
    var_64 = 7241280844505437625;
    pri = VanishFlagReset(var_64)
    var_72 = 189518795947836353;
    pri = VanishFlagReset(var_72)
    var_80 = 6404368837009661395;
    pri = VanishFlagReset(var_80)
    var_88 = 1341677696172497001;
    pri = VanishFlagReset(var_88)
    var_96 = -6389908182130456180;
    pri = VanishFlagReset(var_96)
    var_104 = 875198469300229184;
    pri = VanishFlagReset(var_104)
    var_112 = -7097984863355835431;
    pri = VanishFlagReset(var_112)
    var_120 = -8784670931408278673;
    pri = VanishFlagReset(var_120)
    var_128 = -4346193151434674169;
    pri = VanishFlagReset(var_128)
    var_136 = -8563725204570389190;
    pri = VanishFlagReset(var_136)
    var_144 = 2;
    var_152 = 19;
    pri = ItemAdd(var_152, var_144)
    var_160 = 2;
    var_168 = 8;
    pri = fun_0540(var_160)
    pri = 0;
    return pri;
}
// fun_9158
fun_9158() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_7C80(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9198
fun_9198() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8048()
    var_16 = 0;
    pri = fun_80A0()
    var_24 = 0;
    pri = fun_80B8()
    var_32 = 0;
    pri = fun_80D0()
    var_40 = 0;
    pri = fun_8E68()
    var_48 = 0;
    pri = fun_8E80()
    var_56 = 0;
    pri = fun_9158()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9288
fun_9288() {
    var_8 = 0;
    pri = fun_80A0()
    var_16 = 0;
    pri = fun_8E80()
    var_24 = 8;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
// fun_92F0
fun_92F0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 1507160365927601823;
    var_88 = 80;
    pri = fun_65B8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9378
fun_9378() {
    pri = 0;
    return pri;
}
