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
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0808
fun_0808() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0878
fun_0878() {
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
// fun_08F0
fun_08F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1230(var_8)
    OP_JZER lab_0A10
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1260(var_24)
    OP_JNZ lab_0A10
    pri = 0;
    return pri;
// lab_0A10
    OP_JUMP lab_0A20
// lab_0A20
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A80
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A20
    pri = 0;
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BF8
// lab_0BF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1230(var_8)
    OP_JNZ lab_0C80
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C70
    pri = 0;
    return pri;
// lab_0C80
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CC8
    pri = 0;
    return pri;
// lab_0CC8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E98(var_8)
    pri = 0;
    return pri;
// lab_0D28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BF8
    pri = 0;
    return pri;
// lab_0C70
    OP_JUMP lab_0CC8
}
// fun_0D70
fun_0D70() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DB8
// lab_0DB8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E10
    pri = 0;
    return pri;
// lab_0E10
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E50
    pri = 0;
    return pri;
// lab_0E50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DB8
    pri = 0;
    return pri;
}
// fun_0E98
fun_0E98() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F20
    pri = 0;
    return pri;
// lab_0F20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1230(var_8)
    OP_JZER lab_1050
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F78
    OP_ZERO_P_S 64
// lab_1050
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1088
    OP_CONST_S 64, 1
// lab_1088
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10C0
    OP_CONST_S 72, 1
// lab_10C0
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
// lab_0F78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FA0
    OP_ZERO_P_S 72
// lab_0FA0
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
    OP_JUMP lab_1160
// lab_1160
    pri = 0;
    return pri;
}
// fun_1170
fun_1170() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1290
fun_1290() {
    OP_JUMP lab_12A8
// lab_12A8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1338
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1328
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B70(var_8)
    pri = 0;
    return pri;
// lab_1338
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13C8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B70(var_8)
    pri = 0;
    return pri;
// lab_13C8
    pri = 0;
    return pri;
// lab_13B8
    OP_JUMP lab_13D8
// lab_13D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12A8
    pri = 0;
    return pri;
// lab_1328
    OP_JUMP lab_13D8
}
// fun_1418
fun_1418() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B70(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1290(var_40)
    pri = 0;
    return pri;
}
// fun_14A0
fun_14A0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14D8
fun_14D8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1538
fun_1538() {
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
// switch_1B50
        case default:
        {
// switch_1B50_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B98
// lab_1B98
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
            OP_JNZ lab_1C40
            var_88 = 0;
            pri = fun_1FD8()
// lab_1C40
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B50_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1738
                case default:
                {
// switch_1738_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17B0
// lab_17B0
                    OP_JUMP lab_1B98
                }
                case 0x0:
                {
// switch_1738_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17B0
                }
                case 0x1:
                {
// switch_1738_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17B0
                }
                case 0x2:
                {
// switch_1738_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17B0
                }
                case 0x3:
                {
// switch_1738_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17B0
                }
                case 0x4:
                {
// switch_1738_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17B0
                }
                case 0x5:
                {
// switch_1738_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17B0
                }
            }
        }
        case 0x65:
        {
// switch_1B50_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_18F0
                case default:
                {
// switch_18F0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1968
// lab_1968
                    OP_JUMP lab_1B98
                }
                case 0x0:
                {
// switch_18F0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1968
                }
                case 0x1:
                {
// switch_18F0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1968
                }
                case 0x2:
                {
// switch_18F0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1968
                }
                case 0x3:
                {
// switch_18F0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1968
                }
                case 0x4:
                {
// switch_18F0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1968
                }
                case 0x5:
                {
// switch_18F0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1968
                }
            }
        }
        case 0x66:
        {
// switch_1B50_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AA8
                case default:
                {
// switch_1AA8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B20
// lab_1B20
                    OP_JUMP lab_1B98
                }
                case 0x0:
                {
// switch_1AA8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B20
                }
                case 0x1:
                {
// switch_1AA8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B20
                }
                case 0x2:
                {
// switch_1AA8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B20
                }
                case 0x3:
                {
// switch_1AA8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B20
                }
                case 0x4:
                {
// switch_1AA8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B20
                }
                case 0x5:
                {
// switch_1AA8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B20
                }
            }
        }
    }
}
// fun_1C58
fun_1C58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1538(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CC0
fun_1CC0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B38(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D68
    pri = 1;
    return pri;
// lab_1D68
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1DB0
fun_1DB0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CC0(var_8)
    arg_2 = pri;
// lab_1E00
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1538(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E60
fun_1E60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CC0(var_8)
    arg_2 = pri;
// lab_1EB0
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
    pri = fun_1DB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F28
fun_1F28() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1C58(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F78
fun_1F78() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1F28(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FD8
fun_1FD8() {
    OP_JUMP lab_1FF0
// lab_1FF0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2030
    pri = 0;
    return pri;
// lab_2030
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1FF0
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    var_8 = 0;
    pri = fun_1FD8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2120
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2120
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2160
fun_2160() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    OP_JUMP lab_21B0
// lab_21B0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_21F8
    OP_JUMP lab_2228
    OP_JUMP lab_2218
// lab_21F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2228
    pri = 0;
    return pri;
// lab_2218
    OP_JUMP lab_21B0
}
// fun_2238
fun_2238() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2268
fun_2268() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22B8
fun_22B8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2308
fun_2308() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23A8
fun_23A8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F8
fun_23F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2448
fun_2448() {
    OP_CONST_S -8, -1
    var_24 = 0;
    var_32 = 0;
    pri = PokePartyGetCount(var_32, var_24)
    var_16 = pri;
}
// lab_24A8
OP_LOAD_S_BOTH 32, -16
OP_JSGEQ lab_26A0
pri = arg_0;
switch (pri) {
// switch_2640
    case default:
    {
// switch_2640_case_default
        pri = arg_1;
        OP_ADD_P_C 1
        arg_1 = pri;
        OP_JUMP lab_24A8
    }
    case 0x0:
    {
// switch_2640_case_0x0
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_2630
        pri = arg_1;
        return pri;
// lab_2630
        OP_JUMP switch_2640_case_default
    }
    case 0x1:
    {
// switch_2640_case_0x1
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_2598
        var_32 = 0;
        var_40 = 2;
        var_48 = arg_1;
        pri = PokePartyGetParam(var_48, var_40, var_32)
        OP_MOVE_ALT 
        pri = 0;
        OP_XCHG 
        OP_JSLEQ lab_2598
        pri = 1;
        OP_JUMP lab_25A0
// lab_2598
        pri = 0;
// lab_25A0
        OP_JZER lab_25C8
        pri = arg_1;
        return pri;
// lab_25C8
        OP_JUMP switch_2640_case_default
    }
}
// lab_26A0
pri = var_8;
return pri;
// fun_26B8
fun_26B8() {
    var_16 = 0;
    var_24 = 1;
    var_32 = 16;
    pri = fun_2448(var_24, var_16)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2750
    pri = CommandNOP()
    pri = arg_0;
    OP_JZER lab_2750
    OP_ZERO_P_S -8
// lab_2750
    pri = var_8;
    return pri;
}
// fun_2768
fun_2768() {
    OP_JUMP lab_2780
// lab_2780
    pri = EvCameraMoveWait_()
    OP_JZER lab_27B8
    pri = 0;
    return pri;
// lab_27B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2780
    pri = 0;
    return pri;
}
// fun_27F8
fun_27F8() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_2830
fun_2830() {
    pri = arg_6;
    OP_JNZ lab_2868
    var_8 = 0;
    pri = fun_1170()
// lab_2868
    pri = arg_1;
    switch (pri) {
// switch_3DD0
        case default:
        {
// switch_3DD0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4120
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4120
            pri = 1;
            OP_JUMP lab_4128
// lab_4120
            pri = 0;
// lab_4128
            OP_JZER lab_4280
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B38(var_24, var_16)
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
            OP_JUMP lab_42E0
// lab_4280
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
// lab_42E0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4340
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_43A0
// lab_4340
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_43A0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_43A0
            pri = arg_2;
            OP_JZER lab_43E0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_43E0
            var_8 = 0;
            pri = fun_11B0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3DD0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1:
        {
// switch_3DD0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x2:
        {
// switch_3DD0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x3:
        {
// switch_3DD0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x4:
        {
// switch_3DD0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x5:
        {
// switch_3DD0_case_0x5
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x6:
        {
// switch_3DD0_case_0x6
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x7:
        {
// switch_3DD0_case_0x7
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x8:
        {
// switch_3DD0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x9:
        {
// switch_3DD0_case_0x9
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xa:
        {
// switch_3DD0_case_0xa
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xb:
        {
// switch_3DD0_case_0xb
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xc:
        {
// switch_3DD0_case_0xc
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xd:
        {
// switch_3DD0_case_0xd
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xe:
        {
// switch_3DD0_case_0xe
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0xf:
        {
// switch_3DD0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x10:
        {
// switch_3DD0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x11:
        {
// switch_3DD0_case_0x11
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x12:
        {
// switch_3DD0_case_0x12
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x13:
        {
// switch_3DD0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x14:
        {
// switch_3DD0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x15:
        {
// switch_3DD0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x16:
        {
// switch_3DD0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x17:
        {
// switch_3DD0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x18:
        {
// switch_3DD0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x19:
        {
// switch_3DD0_case_0x19
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1a:
        {
// switch_3DD0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AC0(var_48, var_40)
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
            pri = fun_0ED0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1b:
        {
// switch_3DD0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AC0(var_48, var_40)
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
            pri = fun_0ED0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1c:
        {
// switch_3DD0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0AC0(var_48, var_40)
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
            pri = fun_0ED0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1d:
        {
// switch_3DD0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1e:
        {
// switch_3DD0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x1f:
        {
// switch_3DD0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x20:
        {
// switch_3DD0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x21:
        {
// switch_3DD0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x22:
        {
// switch_3DD0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x23:
        {
// switch_3DD0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x24:
        {
// switch_3DD0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x25:
        {
// switch_3DD0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x26:
        {
// switch_3DD0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x27:
        {
// switch_3DD0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x28:
        {
// switch_3DD0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
        case 0x29:
        {
// switch_3DD0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3DD0_case_default
        }
    }
}
// fun_4410
fun_4410() {
    pri = arg_5;
    OP_JNZ lab_4448
    var_8 = 0;
    pri = fun_1170()
// lab_4448
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4498
    OP_CONST_S -8, -1
// lab_4498
    pri = arg_1;
    switch (pri) {
// switch_5F50
        case default:
        {
// switch_5F50_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_63F8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B38(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_63F8
            pri = 1;
            OP_JUMP lab_6400
// lab_63F8
            pri = 0;
// lab_6400
            OP_JZER lab_6450
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_66A8
// lab_6450
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_64B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_64B8
            pri = 1;
            OP_JUMP lab_64C0
// lab_64B8
            pri = 0;
// lab_64C0
            OP_JZER lab_6648
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B38(var_24, var_16)
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
            OP_JUMP lab_66A8
// lab_6648
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
// lab_66A8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6718
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6718
            var_8 = 0;
            pri = fun_11B0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5F50_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1:
        {
// switch_5F50_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2:
        {
// switch_5F50_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x3:
        {
// switch_5F50_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x4:
        {
// switch_5F50_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x5:
        {
// switch_5F50_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E98(var_40)
            OP_JUMP switch_5F50_case_default
        }
        case 0x6:
        {
// switch_5F50_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x7:
        {
// switch_5F50_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x8:
        {
// switch_5F50_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x9:
        {
// switch_5F50_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0xa:
        {
// switch_5F50_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0xb:
        {
// switch_5F50_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0xc:
        {
// switch_5F50_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0xd:
        {
// switch_5F50_case_0xd
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0xe:
        {
// switch_5F50_case_0xe
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0xf:
        {
// switch_5F50_case_0xf
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x10:
        {
// switch_5F50_case_0x10
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x11:
        {
// switch_5F50_case_0x11
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x12:
        {
// switch_5F50_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x13:
        {
// switch_5F50_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x14:
        {
// switch_5F50_case_0x14
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x15:
        {
// switch_5F50_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x16:
        {
// switch_5F50_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x17:
        {
// switch_5F50_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x18:
        {
// switch_5F50_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x19:
        {
// switch_5F50_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1a:
        {
// switch_5F50_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1b:
        {
// switch_5F50_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1c:
        {
// switch_5F50_case_0x1c
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1d:
        {
// switch_5F50_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1e:
        {
// switch_5F50_case_0x1e
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x1f:
        {
// switch_5F50_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x20:
        {
// switch_5F50_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x21:
        {
// switch_5F50_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x22:
        {
// switch_5F50_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x23:
        {
// switch_5F50_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x24:
        {
// switch_5F50_case_0x24
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x25:
        {
// switch_5F50_case_0x25
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x26:
        {
// switch_5F50_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x27:
        {
// switch_5F50_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x28:
        {
// switch_5F50_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x29:
        {
// switch_5F50_case_0x29
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2a:
        {
// switch_5F50_case_0x2a
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2b:
        {
// switch_5F50_case_0x2b
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2c:
        {
// switch_5F50_case_0x2c
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2d:
        {
// switch_5F50_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2e:
        {
// switch_5F50_case_0x2e
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x2f:
        {
// switch_5F50_case_0x2f
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x30:
        {
// switch_5F50_case_0x30
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x31:
        {
// switch_5F50_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x32:
        {
// switch_5F50_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x33:
        {
// switch_5F50_case_0x33
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x34:
        {
// switch_5F50_case_0x34
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x35:
        {
// switch_5F50_case_0x35
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x36:
        {
// switch_5F50_case_0x36
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x37:
        {
// switch_5F50_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x38:
        {
// switch_5F50_case_0x38
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
            pri = fun_0ED0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5F50_case_default
        }
        case 0x39:
        {
// switch_5F50_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x3a:
        {
// switch_5F50_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x3b:
        {
// switch_5F50_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x3c:
        {
// switch_5F50_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x3d:
        {
// switch_5F50_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
        case 0x3e:
        {
// switch_5F50_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            OP_JUMP switch_5F50_case_default
        }
    }
}
// fun_6748
fun_6748() {
    pri = arg_4;
    OP_JNZ lab_6780
    var_8 = 0;
    pri = fun_1170()
// lab_6780
    pri = arg_1;
    switch (pri) {
// switch_7B58
        case default:
        {
// switch_7B58_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1230(var_264)
            OP_JZER lab_8120
            pri = arg_3;
            switch (pri) {
// switch_80C8
                case default:
                {
// switch_80C8_case_default
                    OP_JUMP lab_83D8
// lab_83D8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8448
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8448
                    var_8 = 0;
                    pri = fun_11B0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_80C8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_80C8_case_default
                }
                case 0x2:
                {
// switch_80C8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_80C8_case_default
                }
                case 0x3:
                {
// switch_80C8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_80C8_case_default
                }
            }
// lab_8120
            pri = arg_1;
            OP_JZER lab_8170
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8170
            pri = 0;
            OP_JUMP lab_8178
// lab_8170
            pri = 1;
// lab_8178
            OP_JZER lab_81E0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B38(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_81E0
            pri = 1;
            OP_JUMP lab_81E8
// lab_81E0
            pri = 0;
// lab_81E8
            OP_JZER lab_8238
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_83D8
// lab_8238
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_82A0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_83D8
// lab_82A0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B38(var_24, var_16)
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
// switch_7B58_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1:
        {
// switch_7B58_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2:
        {
// switch_7B58_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x3:
        {
// switch_7B58_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x4:
        {
// switch_7B58_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x5:
        {
// switch_7B58_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E98(var_40)
            OP_JUMP switch_7B58_case_default
        }
        case 0x6:
        {
// switch_7B58_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x7:
        {
// switch_7B58_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x8:
        {
// switch_7B58_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x9:
        {
// switch_7B58_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0xa:
        {
// switch_7B58_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0xb:
        {
// switch_7B58_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0xc:
        {
// switch_7B58_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0xd:
        {
// switch_7B58_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0xe:
        {
// switch_7B58_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0xf:
        {
// switch_7B58_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x10:
        {
// switch_7B58_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x11:
        {
// switch_7B58_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x12:
        {
// switch_7B58_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x13:
        {
// switch_7B58_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x14:
        {
// switch_7B58_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x15:
        {
// switch_7B58_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x16:
        {
// switch_7B58_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x17:
        {
// switch_7B58_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x18:
        {
// switch_7B58_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x19:
        {
// switch_7B58_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1a:
        {
// switch_7B58_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1b:
        {
// switch_7B58_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1c:
        {
// switch_7B58_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1d:
        {
// switch_7B58_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1e:
        {
// switch_7B58_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x1f:
        {
// switch_7B58_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x20:
        {
// switch_7B58_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x21:
        {
// switch_7B58_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x22:
        {
// switch_7B58_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x23:
        {
// switch_7B58_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x24:
        {
// switch_7B58_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x25:
        {
// switch_7B58_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x26:
        {
// switch_7B58_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x27:
        {
// switch_7B58_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x28:
        {
// switch_7B58_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x29:
        {
// switch_7B58_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2a:
        {
// switch_7B58_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2b:
        {
// switch_7B58_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2c:
        {
// switch_7B58_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2d:
        {
// switch_7B58_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2e:
        {
// switch_7B58_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x2f:
        {
// switch_7B58_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x30:
        {
// switch_7B58_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x31:
        {
// switch_7B58_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x32:
        {
// switch_7B58_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x33:
        {
// switch_7B58_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x34:
        {
// switch_7B58_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x35:
        {
// switch_7B58_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x36:
        {
// switch_7B58_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x37:
        {
// switch_7B58_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x38:
        {
// switch_7B58_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x39:
        {
// switch_7B58_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x3a:
        {
// switch_7B58_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x3b:
        {
// switch_7B58_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x3c:
        {
// switch_7B58_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x3d:
        {
// switch_7B58_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
        case 0x3e:
        {
// switch_7B58_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AF8(var_24, var_16, var_8)
            OP_JUMP switch_7B58_case_default
        }
    }
}
// fun_8478
fun_8478() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8688(var_16, var_8)
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
    OP_JZER lab_8670
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8670
    pri = 0;
    return pri;
}
// fun_8688
fun_8688() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AF8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_86D0
fun_86D0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8768
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B70(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2830(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8768
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_88C0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8828
    var_24 = 30272;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8828
    pri = 1;
    OP_JUMP lab_8830
// lab_88C0
    pri = 0;
    return pri;
// lab_8828
    pri = 0;
// lab_8830
    OP_JZER lab_88C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B70(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2830(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_88D0
fun_88D0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_86D0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8958(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8958
fun_8958() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8CF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_89C0
fun_89C0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8A30
    OP_CONST_S -8, 1
// lab_8A30
    pri = arg_0;
    OP_JNZ lab_8A50
    OP_ZERO_P_S -8
// lab_8A50
    pri = var_8;
    OP_JZER lab_8AD8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8AD8
    pri = 0;
    return pri;
}
// fun_8AF0
fun_8AF0() {
    var_8 = 30376;
    var_16 = 8;
    pri = fun_2160(var_8)
    var_24 = 0;
    pri = fun_2198()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2268(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_23F8(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_2238()
    var_88 = 30608;
    var_96 = 8;
    pri = fun_2160(var_88)
    var_104 = 0;
    pri = fun_2198()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_86D0(var_128, var_120, var_112)
    var_144 = 30768;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_1F78(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0430(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2070(var_200)
    var_216 = 0;
    pri = fun_2130()
    var_224 = 0;
    pri = fun_2238()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_27F8(var_232)
    pri = 0;
    return pri;
}
// fun_8CF8
fun_8CF8() {
    var_8 = 30952;
    var_16 = 8;
    pri = fun_2160(var_8)
    var_24 = 0;
    pri = fun_2198()
    pri = arg_3;
    OP_JNZ lab_8E18
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8DE0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8E88(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8E08
// lab_8E18
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9028(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8DE0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8F50(var_16, var_8)
// lab_8E08
    OP_JUMP lab_8E60
// lab_8E60
    var_8 = 0;
    pri = fun_2238()
    pri = 0;
    return pri;
}
// fun_8E88
fun_8E88() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9028(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8F38
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8F38
    pri = 0;
    return pri;
}
// fun_8F50
fun_8F50() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2308(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1F78(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2070(var_72)
    var_88 = 0;
    pri = fun_2130()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2268(var_96)
    pri = 0;
    return pri;
}
// fun_9028
fun_9028() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9070
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9330(var_8)
// lab_9070
    pri = arg_4;
    OP_JNZ lab_90D8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2268(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2308(var_40, var_32, var_24)
// lab_90D8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9178
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2358(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1F78(var_56, var_48, var_40)
    OP_JUMP lab_9268
// lab_9178
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9230
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9230
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9230
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1F78(var_24, var_16, var_8)
// lab_9268
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_92A8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_92A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_2070(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9538(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_89C0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9330
fun_9330() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9390
    var_16 = 31112;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9390
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_94D0
        case default:
        {
// switch_94D0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_94C0
            var_16 = 31656;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_94C0
            OP_JUMP lab_9508
// lab_9508
            var_8 = 31872;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_94D0_case_0x1
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9508
        }
        case 0x2:
        {
// switch_94D0_case_0x2
            var_8 = 31456;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9508
        }
    }
}
// fun_9538
fun_9538() {
    pri = arg_2;
    OP_JNZ lab_9620
    var_8 = 0;
    var_16 = 8;
    pri = fun_2268(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2308(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_23A8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9620
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1F78(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2070(var_40)
    var_56 = 0;
    pri = fun_2130()
    pri = 0;
    return pri;
}
// fun_9698
fun_9698() {
    pri = 32056;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9720
// lab_9720
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_98A0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9890
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_97E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_97E0
    pri = 0;
    OP_JUMP lab_97E8
// lab_98A0
    pri = 0;
    return pri;
// lab_9890
    OP_JUMP lab_9718
// lab_9718
    OP_INC_P_S -936
// lab_97E0
    pri = 1;
// lab_97E8
    OP_JZER lab_9860
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9858
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9860
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9858
}
// fun_98C0
fun_98C0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9958
    var_8 = 1;
    var_16 = 0;
    var_24 = 32976;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_14D8()
// lab_9958
    pri = arg_4;
    OP_JZER lab_9990
    var_8 = 1;
    var_16 = 8;
    pri = fun_1500(var_8)
// lab_9990
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_99E8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_99E8
    pri = 0;
    OP_JUMP lab_99F0
// lab_99E8
    pri = 1;
// lab_99F0
    OP_JZER lab_9AB8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9AB8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9A90
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1418(var_32, var_24)
    OP_JUMP lab_9AB8
// lab_9AB8
    pri = arg_2;
    OP_JZER lab_9B90
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9B60
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11F0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0840(var_40)
    OP_JUMP lab_9B90
// lab_9B90
    pri = arg_3;
    OP_JZER lab_9BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_14A0(var_8)
// lab_9BC8
    pri = 0;
    return pri;
// lab_9B60
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11F0(var_16, var_8)
// lab_9A90
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1418(var_16, var_8)
}
// fun_9BD8
fun_9BD8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9698(var_24)
    pri = 0;
    return pri;
}
// fun_9C40
fun_9C40() {
    pri = g_mode;
    switch (pri) {
// switch_9D00
        case default:
        {
// switch_9D00_case_default
            pri = CommandNOP()
            OP_JUMP lab_9D48
// lab_9D48
            pri = 0;
            return pri;
        }
        case 0xbd3c491ea42e4d9a:
        {
// switch_9D00_case_0xbd3c491ea42e4d9a
            var_8 = 0;
            pri = fun_B3A0()
            OP_JUMP lab_9D48
        }
        case 0x0:
        {
// switch_9D00_case_0x0
            var_8 = 0;
            pri = fun_9D58()
            OP_JUMP lab_9D48
        }
        case 0x4f970321df466996:
        {
// switch_9D00_case_0x4f970321df466996
            var_8 = 0;
            pri = fun_B2B0()
            OP_JUMP lab_9D48
        }
    }
}
// fun_9D58
fun_9D58() {
    pri = 0;
    return pri;
}
// fun_9D70
fun_9D70() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_98C0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9DC8
fun_9DC8() {
    pri = 0;
    return pri;
}
// fun_9DE0
fun_9DE0() {
    pri = 0;
    return pri;
}
// fun_9DF8
fun_9DF8() {
    pri = EvCameraStart()
    var_8 = 4;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C -4592616088755240960, 4657443294328913920, 4657962263817224192, 8802641224559852288
    var_40 = 48;
    pri = fun_07B0(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4639168531465974579, 4658263530003234816, 4657419105073102848, -2664763386676178833
    var_64 = 48;
    pri = fun_07B0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    OP_PUSH4_C -4590448731434568909, 4657368527538225152, 4658175569073012736, -4228322870407095995
    var_88 = 48;
    pri = fun_07B0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = -4228322870407095995;
    var_112 = 16;
    pri = fun_0808(var_104, var_96)
    var_120 = 1;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH4_C 4657975457956757504, 4657656599584702464, 4607182418800017408, 8802641224559852288
    var_176 = 72;
    pri = fun_0878(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 0;
    var_192 = 4629897449420567347;
    var_200 = 0;
    OP_PUSH5_C 4657532552682856776, 4631506078912468746, 4657164062355923927, 4658840179871538217, 4638756170625093468
    var_208 = 4657901021019557069;
    var_216 = 1;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 0;
    pri = fun_2768()
    var_232 = 33024;
    pri = SoundPostEvent(var_232)
    var_240 = 33296;
    var_248 = 8;
    var_256 = 16;
    pri = fun_02A8(var_248, var_240)
    var_264 = 0;
    pri = fun_0378()
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_0998(var_272)
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    OP_PUSH2_C -2664763386676178833, 8802641224559852288
    var_320 = 48;
    pri = fun_0940(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    OP_PUSH2_C 8802641224559852288, -2664763386676178833
    var_360 = 48;
    pri = fun_0940(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 1;
    var_376 = 1;
    var_384 = -1;
    var_392 = -1;
    var_400 = 0;
    var_408 = 22;
    var_416 = -2664763386676178833;
    var_424 = 56;
    pri = fun_4410(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 0;
    pri = fun_2768()
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 8;
    pri = fun_26B8(var_464)
    var_480 = pri;
    pri = PokePartyGetParam(var_480, var_472, var_464)
    var_8 = pri;
    var_488 = var_8;
    var_496 = 1;
    var_504 = 16;
    pri = fun_22B8(var_496, var_488)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -4403966013354067041, -2664763386676178833
    var_552 = 56;
    pri = fun_1DB0(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_2070(var_560)
    var_576 = 0;
    pri = fun_2130()
    var_584 = 1;
    var_592 = -4228322870407095995;
    var_600 = 16;
    pri = fun_0808(var_592, var_584)
    var_608 = 1;
    var_616 = 0;
    var_624 = 4641240890982006784;
    var_632 = 0;
    var_640 = 0;
    OP_PUSH4_C 4657775346840502272, 4657951268700946432, 4607182418800017408, -4228322870407095995
    var_648 = 72;
    pri = fun_0878(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_656 = 33312;
    var_664 = -2664763386676178833;
    var_672 = 16;
    pri = fun_0D70(var_664, var_656)
    var_680 = 1;
    var_688 = 3;
    var_696 = 0;
    var_704 = 22;
    var_712 = -2664763386676178833;
    var_720 = 40;
    pri = fun_6748(var_712, var_704, var_696, var_688, var_680)
    var_728 = -2664763386676178833;
    var_736 = 8;
    pri = fun_0B70(var_728)
    var_744 = -2664763386676178833;
    var_752 = 8;
    pri = fun_0998(var_744)
    var_760 = 8802641224559852288;
    var_768 = 8;
    pri = fun_0998(var_760)
    var_776 = 0;
    var_784 = 4629897449420567347;
    var_792 = 3;
    OP_PUSH5_C 4657452376294959350, 4631506078912468746, 4657306317170325586, 4658870856245953167, 4639008090729249505
    var_800 = 4658105772074881516;
    var_808 = 30;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = -4228322870407095995;
    var_824 = 8;
    pri = fun_0998(var_816)
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    OP_PUSH2_C -4228322870407095995, 8802641224559852288
    var_864 = 48;
    pri = fun_0940(var_856, var_848, var_840, var_832, var_824, var_816)
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    var_896 = 0;
    OP_PUSH2_C 8802641224559852288, -4228322870407095995
    var_904 = 48;
    pri = fun_0940(var_896, var_888, var_880, var_872, var_864, var_856)
    var_912 = 0;
    var_920 = 3;
    var_928 = -2664763386676178833;
    var_936 = 24;
    pri = fun_8478(var_928, var_920, var_912)
    var_944 = 1;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = -2664763386676178833;
    var_968 = 8;
    pri = fun_0B70(var_960)
    var_976 = 0;
    pri = fun_2768()
    var_984 = -4228322870407095995;
    var_992 = 8;
    pri = fun_0998(var_984)
    var_1000 = 8802641224559852288;
    var_1008 = 8;
    pri = fun_0998(var_1000)
    var_1016 = 0;
    var_1024 = 4629897449420567347;
    var_1032 = 0;
    OP_PUSH5_C 4657682987863769088, 4635552985390126203, 4657851257123283927, 4658406884329264251, 4638878260396241715
    var_1040 = 4657594059363314565;
    var_1048 = 1;
    pri = EvCameraMove(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 0;
    pri = fun_2768()
    var_1064 = 0;
    var_1072 = 1;
    var_1080 = -4228322870407095995;
    var_1088 = 24;
    pri = fun_8478(var_1080, var_1072, var_1064)
    var_1096 = 1;
    var_1104 = 8;
    pri = fun_0060(var_1096)
    var_1112 = -4228322870407095995;
    var_1120 = 8;
    pri = fun_0B70(var_1112)
    var_1128 = 0;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 100;
    var_1160 = -1;
    OP_PUSH2_C -5117659435097217164, -4228322870407095995
    var_1168 = 56;
    pri = fun_1DB0(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 1;
    var_1184 = 8;
    pri = fun_2070(var_1176)
    var_1192 = 0;
    pri = fun_2130()
    var_1200 = 33488;
    var_1208 = 8;
    pri = fun_2160(var_1200)
    var_1216 = 0;
    pri = fun_2198()
    var_1224 = 0;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 100;
    var_1256 = -1;
    OP_PUSH2_C -8990295230125868142, -4228322870407095995
    var_1264 = 56;
    pri = fun_1E60(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 1;
    var_1280 = 8;
    pri = fun_2070(var_1272)
    var_1288 = 0;
    pri = fun_2130()
    var_1296 = 6;
    var_1304 = 4;
    var_1312 = 2;
    var_1320 = 1;
    var_1328 = 9;
    var_1336 = 1;
    var_1344 = 365;
    var_1352 = -4228322870407095995;
    var_1360 = 64;
    pri = fun_88D0(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1368 = 0;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 100;
    var_1400 = -1;
    OP_PUSH2_C -8991288089125953450, -4228322870407095995
    var_1408 = 56;
    pri = fun_1E60(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 1;
    var_1424 = 8;
    pri = fun_2070(var_1416)
    var_1432 = 0;
    pri = fun_2130()
    var_1440 = 0;
    pri = fun_2238()
    var_1448 = 8903958014646581543;
    var_1456 = 33704;
    var_1464 = -4228322870407095995;
    var_1472 = 24;
    pri = fun_8AF0(var_1464, var_1456, var_1448)
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = -4228322870407095995;
    var_1504 = 24;
    pri = fun_8478(var_1496, var_1488, var_1480)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_0060(var_1512)
    var_1528 = -4228322870407095995;
    var_1536 = 8;
    pri = fun_0B70(var_1528)
    var_1544 = 0;
    var_1552 = 3;
    var_1560 = 0;
    var_1568 = 100;
    var_1576 = -1;
    OP_PUSH2_C -5117656136562332531, -4228322870407095995
    var_1584 = 56;
    pri = fun_1DB0(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1592 = 1;
    var_1600 = 8;
    pri = fun_2070(var_1592)
    var_1608 = 0;
    pri = fun_2130()
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 100;
    var_1648 = -1;
    OP_PUSH2_C -5117657236073960742, -4228322870407095995
    var_1656 = 56;
    pri = fun_1DB0(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_2070(var_1664)
    var_1680 = 0;
    pri = fun_2130()
    var_1688 = 0;
    var_1696 = 4629897449420567347;
    var_1704 = 3;
    OP_PUSH5_C 4657677688217723208, 4630581433613974241, 4657794390381895352, 4658971043745476116, 4638639358509758546
    var_1712 = 4657334904472647762;
    var_1720 = 30;
    pri = EvCameraMove(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1728 = 0;
    var_1736 = 0;
    var_1744 = 0;
    var_1752 = 0;
    OP_PUSH2_C -2664763386676178833, 8802641224559852288
    var_1760 = 48;
    pri = fun_0940(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1768 = 0;
    var_1776 = 0;
    var_1784 = 0;
    var_1792 = 0;
    OP_PUSH2_C 8802641224559852288, -2664763386676178833
    var_1800 = 48;
    pri = fun_0940(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1808 = 0;
    pri = fun_2768()
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = -2664763386676178833;
    var_1840 = 24;
    pri = fun_8478(var_1832, var_1824, var_1816)
    var_1848 = 1;
    var_1856 = 8;
    pri = fun_0060(var_1848)
    var_1864 = -2664763386676178833;
    var_1872 = 8;
    pri = fun_0B70(var_1864)
    var_1880 = 0;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 100;
    var_1912 = -1;
    OP_PUSH2_C -4403964913842438830, -2664763386676178833
    var_1920 = 56;
    pri = fun_1DB0(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1928 = 1;
    var_1936 = 8;
    pri = fun_2070(var_1928)
    var_1944 = 0;
    pri = fun_2130()
    var_1952 = -2664763386676178833;
    var_1960 = 8;
    pri = fun_0998(var_1952)
    var_1968 = 8802641224559852288;
    var_1976 = 8;
    pri = fun_0998(var_1968)
    var_1984 = 1;
    var_1992 = 0;
    var_2000 = 4641240890982006784;
    var_2008 = 0;
    var_2016 = 0;
    OP_PUSH4_C 4659046382282211328, 4657458687491702784, 4611686018427387904, -2664763386676178833
    var_2024 = 72;
    pri = fun_0878(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2032 = 20;
    var_2040 = 8;
    pri = fun_0060(var_2032)
    var_2048 = 0;
    var_2056 = 0;
    var_2064 = 0;
    var_2072 = 0;
    pri = float(var_2072)
    var_2080 = pri;
    var_2088 = 8802641224559852288;
    var_2096 = 40;
    pri = fun_08F0(var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2104 = 8802641224559852288;
    var_2112 = 8;
    pri = fun_0998(var_2104)
    var_2120 = 30;
    var_2128 = 8;
    pri = fun_0060(var_2120)
    var_2136 = 1;
    var_2144 = 0;
    var_2152 = 32976;
    var_2160 = 8;
    var_2168 = 32;
    pri = fun_0308(var_2160, var_2152, var_2144, var_2136)
    var_2176 = 0;
    pri = fun_0378()
    var_2184 = 3;
    var_2192 = 1;
    pri = EvCameraEnd(var_2192, var_2184)
    var_2200 = 30;
    var_2208 = 8;
    pri = fun_0060(var_2200)
    var_2216 = -2664763386676178833;
    var_2224 = 8;
    pri = fun_0998(var_2216)
    pri = 0;
    return pri;
}
// fun_B0F8
fun_B0F8() {
    pri = 0;
    return pri;
}
// fun_B110
fun_B110() {
    var_8 = -4228322870407095995;
    var_16 = 8;
    pri = fun_0780(var_8)
    var_24 = -2664763386676178833;
    var_32 = 8;
    pri = fun_0780(var_24)
    var_40 = 820;
    var_48 = 8;
    pri = fun_9BD8(var_40)
    var_56 = 30;
    var_64 = 2308525758704345885;
    pri = WorkSet(var_64, var_56)
    var_72 = 3275595920700649692;
    pri = VanishFlagReset(var_72)
    var_80 = 1;
    var_88 = 365;
    pri = ItemAdd(var_88, var_80)
    var_96 = 33768;
    var_104 = 8;
    pri = fun_27F8(var_96)
    var_112 = 4;
    var_120 = 8;
    pri = fun_0540(var_112)
    pri = 0;
    return pri;
}
// fun_B258
fun_B258() {
    var_8 = 33832;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B2B0
fun_B2B0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9D70()
    var_16 = 0;
    pri = fun_9DC8()
    var_24 = 0;
    pri = fun_9DE0()
    var_32 = 0;
    pri = fun_9DF8()
    var_40 = 0;
    pri = fun_B0F8()
    var_48 = 0;
    pri = fun_B110()
    var_56 = 0;
    pri = fun_B258()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B3A0
fun_B3A0() {
    var_8 = 0;
    pri = fun_9DC8()
    var_16 = 0;
    pri = fun_B110()
    pri = 0;
    return pri;
}
