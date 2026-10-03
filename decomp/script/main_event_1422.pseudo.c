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
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
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
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
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
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = IsLoadedLogoFade_()
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
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
// fun_0570
fun_0570() {
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
// fun_0630
fun_0630() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0678
// lab_0678
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06B8
    OP_JUMP lab_0728
// lab_06B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_06F8
    OP_JUMP lab_0728
// lab_06F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0678
// lab_0728
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07A8
// lab_07A8
    var_8 = 0;
    pri = fun_08F0()
    OP_JNZ lab_07E0
    OP_JUMP lab_0810
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A8
// lab_0810
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0840
// lab_0840
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0880
    pri = 0;
    return pri;
// lab_0880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0840
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_08F0
fun_08F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0A38
fun_0A38() {
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
// fun_0AB0
fun_0AB0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
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
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13F0(var_8)
    OP_JZER lab_0BD0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1420(var_24)
    OP_JNZ lab_0BD0
    pri = 0;
    return pri;
// lab_0BD0
    OP_JUMP lab_0BE0
// lab_0BE0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C40
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BE0
    pri = 0;
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D78
    pri = 0;
    return pri;
// lab_0D78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DB8
// lab_0DB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13F0(var_8)
    OP_JNZ lab_0E40
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E30
    pri = 0;
    return pri;
// lab_0E40
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E88
    pri = 0;
    return pri;
// lab_0E88
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1058(var_8)
    pri = 0;
    return pri;
// lab_0EE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DB8
    pri = 0;
    return pri;
// lab_0E30
    OP_JUMP lab_0E88
}
// fun_0F30
fun_0F30() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0F78
// lab_0F78
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FD0
    pri = 0;
    return pri;
// lab_0FD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1010
    pri = 0;
    return pri;
// lab_1010
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F78
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10E0
    pri = 0;
    return pri;
// lab_10E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13F0(var_8)
    OP_JZER lab_1210
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1138
    OP_ZERO_P_S 64
// lab_1210
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1248
    OP_CONST_S 64, 1
// lab_1248
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1280
    OP_CONST_S 72, 1
// lab_1280
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
// lab_1138
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1160
    OP_ZERO_P_S 72
// lab_1160
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
    OP_JUMP lab_1320
// lab_1320
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1450
fun_1450() {
    OP_JUMP lab_1468
// lab_1468
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_14F8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_14E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D30(var_8)
    pri = 0;
    return pri;
// lab_14F8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1588
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1578
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D30(var_8)
    pri = 0;
    return pri;
// lab_1588
    pri = 0;
    return pri;
// lab_1578
    OP_JUMP lab_1598
// lab_1598
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1468
    pri = 0;
    return pri;
// lab_14E8
    OP_JUMP lab_1598
}
// fun_15D8
fun_15D8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D30(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1450(var_40)
    pri = 0;
    return pri;
}
// fun_1660
fun_1660() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1698
fun_1698() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_16C0
fun_16C0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_16F0
fun_16F0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1728
fun_1728() {
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
// switch_1D40
        case default:
        {
// switch_1D40_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1D88
// lab_1D88
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
            OP_JNZ lab_1E30
            var_88 = 0;
            pri = fun_1FE8()
// lab_1E30
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D40_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1928
                case default:
                {
// switch_1928_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19A0
// lab_19A0
                    OP_JUMP lab_1D88
                }
                case 0x0:
                {
// switch_1928_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19A0
                }
                case 0x1:
                {
// switch_1928_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19A0
                }
                case 0x2:
                {
// switch_1928_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19A0
                }
                case 0x3:
                {
// switch_1928_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19A0
                }
                case 0x4:
                {
// switch_1928_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19A0
                }
                case 0x5:
                {
// switch_1928_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19A0
                }
            }
        }
        case 0x65:
        {
// switch_1D40_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1AE0
                case default:
                {
// switch_1AE0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B58
// lab_1B58
                    OP_JUMP lab_1D88
                }
                case 0x0:
                {
// switch_1AE0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1B58
                }
                case 0x1:
                {
// switch_1AE0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1B58
                }
                case 0x2:
                {
// switch_1AE0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1B58
                }
                case 0x3:
                {
// switch_1AE0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B58
                }
                case 0x4:
                {
// switch_1AE0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1B58
                }
                case 0x5:
                {
// switch_1AE0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1B58
                }
            }
        }
        case 0x66:
        {
// switch_1D40_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1C98
                case default:
                {
// switch_1C98_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D10
// lab_1D10
                    OP_JUMP lab_1D88
                }
                case 0x0:
                {
// switch_1C98_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D10
                }
                case 0x1:
                {
// switch_1C98_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D10
                }
                case 0x2:
                {
// switch_1C98_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D10
                }
                case 0x3:
                {
// switch_1C98_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D10
                }
                case 0x4:
                {
// switch_1C98_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D10
                }
                case 0x5:
                {
// switch_1C98_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D10
                }
            }
        }
    }
}
// fun_1E48
fun_1E48() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CF8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1EF0
    pri = 1;
    return pri;
// lab_1EF0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1F38
fun_1F38() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E48(var_8)
    arg_2 = pri;
// lab_1F88
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1728(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FE8
fun_1FE8() {
    OP_JUMP lab_2000
// lab_2000
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2040
    pri = 0;
    return pri;
// lab_2040
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2000
    pri = 0;
    return pri;
}
// fun_2080
fun_2080() {
    var_8 = 0;
    pri = fun_1FE8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2130
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2130
    pri = 0;
    return pri;
}
// fun_2140
fun_2140() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2170
fun_2170() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_21A0
// lab_21A0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21E0
    OP_JUMP lab_2210
// lab_21E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21A0
// lab_2210
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2258
fun_2258() {
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
// fun_22C8
fun_22C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2340()
    return pri;
}
// fun_2340
fun_2340() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2380
fun_2380() {
    pri = arg_2;
    OP_JNZ lab_23C8
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_2 = pri;
// lab_23C8
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2420
fun_2420() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2498
fun_2498() {
    var_8 = 0;
    pri = fun_2420()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2518
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2518
    pri = 1;
    return pri;
// lab_2518
    var_8 = 0;
    pri = fun_2420()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2558
    pri = 1;
    return pri;
// lab_2558
    var_8 = 0;
    pri = fun_2420()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2588
fun_2588() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_25D8
fun_25D8() {
    OP_JUMP lab_25F0
// lab_25F0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2628
    pri = 0;
    return pri;
// lab_2628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25F0
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    pri = arg_5;
    OP_JNZ lab_26A0
    var_8 = 0;
    pri = fun_1330()
// lab_26A0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_26F0
    OP_CONST_S -8, -1
// lab_26F0
    pri = arg_1;
    switch (pri) {
// switch_41A8
        case default:
        {
// switch_41A8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4650
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0CF8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4650
            pri = 1;
            OP_JUMP lab_4658
// lab_4650
            pri = 0;
// lab_4658
            OP_JZER lab_46A8
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4900
// lab_46A8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4710
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4710
            pri = 1;
            OP_JUMP lab_4718
// lab_4710
            pri = 0;
// lab_4718
            OP_JZER lab_48A0
            var_16 = 20672;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CF8(var_24, var_16)
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
            var_176 = 20776;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20792;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4900
// lab_48A0
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4900
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4970
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4970
            var_8 = 0;
            pri = fun_1370()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_41A8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1:
        {
// switch_41A8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2:
        {
// switch_41A8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3:
        {
// switch_41A8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x4:
        {
// switch_41A8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x5:
        {
// switch_41A8_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1058(var_40)
            OP_JUMP switch_41A8_case_default
        }
        case 0x6:
        {
// switch_41A8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x7:
        {
// switch_41A8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x8:
        {
// switch_41A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x9:
        {
// switch_41A8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0xa:
        {
// switch_41A8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0xb:
        {
// switch_41A8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0xc:
        {
// switch_41A8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0xd:
        {
// switch_41A8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11304;
            var_72 = 11128;
            var_80 = 10944;
            var_88 = 10752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xe:
        {
// switch_41A8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11960;
            var_72 = 11752;
            var_80 = 11536;
            var_88 = 11312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xf:
        {
// switch_41A8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12352;
            var_72 = 12232;
            var_80 = 12104;
            var_88 = 11968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x10:
        {
// switch_41A8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12696;
            var_72 = 12592;
            var_80 = 12480;
            var_88 = 12360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x11:
        {
// switch_41A8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13040;
            var_72 = 12936;
            var_80 = 12824;
            var_88 = 12704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x12:
        {
// switch_41A8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x13:
        {
// switch_41A8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x14:
        {
// switch_41A8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13600;
            var_72 = 13424;
            var_80 = 13240;
            var_88 = 13048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x15:
        {
// switch_41A8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x16:
        {
// switch_41A8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x17:
        {
// switch_41A8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x18:
        {
// switch_41A8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x19:
        {
// switch_41A8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1a:
        {
// switch_41A8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1b:
        {
// switch_41A8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1c:
        {
// switch_41A8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13992;
            var_72 = 13872;
            var_80 = 13744;
            var_88 = 13608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1d:
        {
// switch_41A8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1e:
        {
// switch_41A8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14456;
            var_72 = 14312;
            var_80 = 14160;
            var_88 = 14000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1f:
        {
// switch_41A8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x20:
        {
// switch_41A8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x21:
        {
// switch_41A8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x22:
        {
// switch_41A8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x23:
        {
// switch_41A8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x24:
        {
// switch_41A8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14824;
            var_72 = 14712;
            var_80 = 14592;
            var_88 = 14464;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x25:
        {
// switch_41A8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15192;
            var_72 = 15080;
            var_80 = 14960;
            var_88 = 14832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x26:
        {
// switch_41A8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x27:
        {
// switch_41A8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x28:
        {
// switch_41A8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x29:
        {
// switch_41A8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15632;
            var_72 = 15496;
            var_80 = 15352;
            var_88 = 15200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2a:
        {
// switch_41A8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16024;
            var_72 = 15904;
            var_80 = 15776;
            var_88 = 15640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2b:
        {
// switch_41A8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16440;
            var_72 = 16312;
            var_80 = 16176;
            var_88 = 16032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2c:
        {
// switch_41A8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16880;
            var_72 = 16744;
            var_80 = 16600;
            var_88 = 16448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2d:
        {
// switch_41A8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2e:
        {
// switch_41A8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17200;
            var_72 = 17104;
            var_80 = 17000;
            var_88 = 16888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2f:
        {
// switch_41A8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17592;
            var_72 = 17472;
            var_80 = 17344;
            var_88 = 17208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x30:
        {
// switch_41A8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17984;
            var_72 = 17864;
            var_80 = 17736;
            var_88 = 17600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x31:
        {
// switch_41A8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x32:
        {
// switch_41A8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x33:
        {
// switch_41A8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18376;
            var_72 = 18256;
            var_80 = 18128;
            var_88 = 17992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x34:
        {
// switch_41A8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18744;
            var_72 = 18632;
            var_80 = 18512;
            var_88 = 18384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x35:
        {
// switch_41A8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19080;
            var_80 = 18920;
            var_88 = 18752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x36:
        {
// switch_41A8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19600;
            var_72 = 19488;
            var_80 = 19368;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x37:
        {
// switch_41A8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x38:
        {
// switch_41A8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19968;
            var_72 = 19856;
            var_80 = 19736;
            var_88 = 19608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1090(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x39:
        {
// switch_41A8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3a:
        {
// switch_41A8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3b:
        {
// switch_41A8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3c:
        {
// switch_41A8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3d:
        {
// switch_41A8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3e:
        {
// switch_41A8_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CB8(var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
    }
}
// fun_49A0
fun_49A0() {
    pri = arg_4;
    OP_JNZ lab_49D8
    var_8 = 0;
    pri = fun_1330()
// lab_49D8
    pri = arg_1;
    switch (pri) {
// switch_5DB0
        case default:
        {
// switch_5DB0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_13F0(var_264)
            OP_JZER lab_6378
            pri = arg_3;
            switch (pri) {
// switch_6320
                case default:
                {
// switch_6320_case_default
                    OP_JUMP lab_6630
// lab_6630
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_66A0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_66A0
                    var_8 = 0;
                    pri = fun_1370()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6320_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6320_case_default
                }
                case 0x2:
                {
// switch_6320_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6320_case_default
                }
                case 0x3:
                {
// switch_6320_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6320_case_default
                }
            }
// lab_6378
            pri = arg_1;
            OP_JZER lab_63C8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_63C8
            pri = 0;
            OP_JUMP lab_63D0
// lab_63C8
            pri = 1;
// lab_63D0
            OP_JZER lab_6438
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CF8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6438
            pri = 1;
            OP_JUMP lab_6440
// lab_6438
            pri = 0;
// lab_6440
            OP_JZER lab_6490
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6630
// lab_6490
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_64F8
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6630
// lab_64F8
            var_16 = 22096;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CF8(var_24, var_16)
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
            var_176 = 22200;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22216;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5DB0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1:
        {
// switch_5DB0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2:
        {
// switch_5DB0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x3:
        {
// switch_5DB0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x4:
        {
// switch_5DB0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x5:
        {
// switch_5DB0_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1058(var_40)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x6:
        {
// switch_5DB0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x7:
        {
// switch_5DB0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x8:
        {
// switch_5DB0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x9:
        {
// switch_5DB0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0xa:
        {
// switch_5DB0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0xb:
        {
// switch_5DB0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0xc:
        {
// switch_5DB0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0xd:
        {
// switch_5DB0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0xe:
        {
// switch_5DB0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0xf:
        {
// switch_5DB0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x10:
        {
// switch_5DB0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x11:
        {
// switch_5DB0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x12:
        {
// switch_5DB0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x13:
        {
// switch_5DB0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x14:
        {
// switch_5DB0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x15:
        {
// switch_5DB0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x16:
        {
// switch_5DB0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x17:
        {
// switch_5DB0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x18:
        {
// switch_5DB0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x19:
        {
// switch_5DB0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1a:
        {
// switch_5DB0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1b:
        {
// switch_5DB0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1c:
        {
// switch_5DB0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1d:
        {
// switch_5DB0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1e:
        {
// switch_5DB0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x1f:
        {
// switch_5DB0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x20:
        {
// switch_5DB0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x21:
        {
// switch_5DB0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x22:
        {
// switch_5DB0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x23:
        {
// switch_5DB0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x24:
        {
// switch_5DB0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x25:
        {
// switch_5DB0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x26:
        {
// switch_5DB0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x27:
        {
// switch_5DB0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x28:
        {
// switch_5DB0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x29:
        {
// switch_5DB0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2a:
        {
// switch_5DB0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2b:
        {
// switch_5DB0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2c:
        {
// switch_5DB0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2d:
        {
// switch_5DB0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2e:
        {
// switch_5DB0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x2f:
        {
// switch_5DB0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x30:
        {
// switch_5DB0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x31:
        {
// switch_5DB0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x32:
        {
// switch_5DB0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x33:
        {
// switch_5DB0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x34:
        {
// switch_5DB0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x35:
        {
// switch_5DB0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x36:
        {
// switch_5DB0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x37:
        {
// switch_5DB0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x38:
        {
// switch_5DB0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x39:
        {
// switch_5DB0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x3a:
        {
// switch_5DB0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x3b:
        {
// switch_5DB0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x3c:
        {
// switch_5DB0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x3d:
        {
// switch_5DB0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
        case 0x3e:
        {
// switch_5DB0_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CB8(var_24, var_16, var_8)
            OP_JUMP switch_5DB0_case_default
        }
    }
}
// fun_66D0
fun_66D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_68E0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22264;
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
    var_424 = 22320;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22336;
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
    OP_JZER lab_68C8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_68C8
    pri = 0;
    return pri;
}
// fun_68E0
fun_68E0() {
    var_8 = arg_1;
    var_16 = 22384;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0CB8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6928
fun_6928() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6A28
        case default:
        {
// switch_6A28_case_default
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
// switch_6A28_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6A28_case_default
        }
        case 0x1:
        {
// switch_6A28_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6A28_case_default
        }
        case 0x2:
        {
// switch_6A28_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6A28_case_default
        }
        case 0x3:
        {
// switch_6A28_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6A28_case_default
        }
    }
}
// fun_6AE8
fun_6AE8() {
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
    pri = fun_1F38(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1FE8()
    pri = 0;
    return pri;
}
// fun_6B80
fun_6B80() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6928(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_6AE8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6C28
fun_6C28() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6C78
// lab_6C78
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22488;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6CF0
    OP_JUMP lab_6D20
// lab_6CF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_6C78
// lab_6D20
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6DA8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_49A0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_16C0(var_56)
// lab_6DA8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6E10
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B0(var_24, var_16)
// lab_6E10
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6ED0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D30(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0AB0(var_88, var_80, var_72, var_64, var_56)
// lab_6ED0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6F10
    pri = 0;
    return pri;
// lab_6F10
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7058
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22608;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0C80(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7020
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7058
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B58(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B58(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D30(var_40)
    pri = 0;
    return pri;
// lab_7020
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
}
// fun_70E0
fun_70E0() {
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
    pri = fun_6B80(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2080(var_112)
    var_128 = 0;
    pri = fun_2140()
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
    pri = fun_6C28(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_7258
fun_7258() {
    pri = 22744;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_72E0
// lab_72E0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7460
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7450
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_73A0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_73A0
    pri = 0;
    OP_JUMP lab_73A8
// lab_7460
    pri = 0;
    return pri;
// lab_7450
    OP_JUMP lab_72D8
// lab_72D8
    OP_INC_P_S -936
// lab_73A0
    pri = 1;
// lab_73A8
    OP_JZER lab_7420
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7418
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7420
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7418
}
// fun_7480
fun_7480() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7518
    var_8 = 1;
    var_16 = 0;
    var_24 = 23664;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1698()
// lab_7518
    pri = arg_4;
    OP_JZER lab_7550
    var_8 = 1;
    var_16 = 8;
    pri = fun_16F0(var_8)
// lab_7550
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_75A8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_75A8
    pri = 0;
    OP_JUMP lab_75B0
// lab_75A8
    pri = 1;
// lab_75B0
    OP_JZER lab_7678
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7678
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7650
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_15D8(var_32, var_24)
    OP_JUMP lab_7678
// lab_7678
    pri = arg_2;
    OP_JZER lab_7750
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7720
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_13B0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A00(var_40)
    OP_JUMP lab_7750
// lab_7750
    pri = arg_3;
    OP_JZER lab_7788
    var_8 = 1;
    var_16 = 8;
    pri = fun_1660(var_8)
// lab_7788
    pri = 0;
    return pri;
// lab_7720
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_13B0(var_16, var_8)
// lab_7650
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_15D8(var_16, var_8)
}
// fun_7798
fun_7798() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_7918
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7830
    var_8 = 1;
    var_16 = 0;
    var_24 = 23664;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_7918
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_7830
    pri = arg_0;
    OP_JNZ lab_7878
    var_8 = 23712;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_7898
// lab_7878
    var_8 = 23888;
    pri = SoundPostEvent(var_8)
// lab_7898
    var_8 = 0;
    var_16 = 8;
    pri = fun_0630(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7918
    var_24 = 24152;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_7958
fun_7958() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0B58(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_6928(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    pri = arg_1;
    OP_LOAD_I 
    var_128 = pri;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1F38(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2080(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_7AF0
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_2170(var_184, var_176, var_168)
// lab_7AF0
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_2170(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_2170(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_2258(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_8358
        case default:
        {
// switch_8358_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8358_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 32
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1F38(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2080(var_72)
            var_88 = 0;
            pri = fun_2140()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_6C28(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_7DB8
            var_136 = 1;
            var_144 = 0;
            var_152 = 4641240890982006784;
            var_160 = 0;
            var_168 = 0;
            var_176 = arg_3;
            pri = float(var_176)
            var_184 = pri;
            var_192 = arg_2;
            pri = float(var_192)
            var_200 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_208 = 72;
            pri = fun_0A38(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_0B58(var_216)
// lab_7DB8
            OP_JUMP switch_8358_case_default
        }
        case 0x1:
        {
// switch_8358_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 40
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1F38(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2080(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_22C8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_7FD8
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            pri = arg_1;
            OP_ADD_P_C 48
            OP_LOAD_I 
            var_192 = pri;
            var_200 = arg_0;
            var_208 = 56;
            pri = fun_1F38(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_2080(var_216)
            var_232 = 0;
            pri = fun_2140()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_6C28(var_264, var_256, var_248, var_240)
            var_280 = 24200;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_7FD8
            var_8 = 0;
            pri = fun_2140()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_6C28(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_8128
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0A38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0B58(var_136)
// lab_8128
            OP_JUMP switch_8358_case_default
        }
        case 0x2:
        {
// switch_8358_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_81F8
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1F38(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2080(var_72)
// lab_81F8
            var_8 = 0;
            pri = fun_2140()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_6C28(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_8348
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0A38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0B58(var_136)
// lab_8348
            OP_JUMP switch_8358_case_default
        }
    }
}
// fun_83B8
fun_83B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = fun_0440()
    pri = arg_1;
    OP_JZER lab_8430
    var_32 = 24312;
    pri = SoundPostEvent(var_32)
// lab_8430
    var_8 = 24512;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 24776;
    var_40 = 8;
    var_48 = 32;
    pri = fun_02E0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_84B0
fun_84B0() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_8500
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_83B8(var_16, var_8)
// lab_8500
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B58(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_85A0
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_85A0
    pri = 1;
    OP_JUMP lab_85A8
// lab_85A0
    pri = 0;
// lab_85A8
    OP_JZER lab_8740
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_8688
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = 72;
    pri = fun_04D0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_8730
// lab_8740
    var_8 = 1;
    var_16 = 1;
    var_24 = arg_4;
    pri = float(var_24)
    var_32 = pri;
    var_40 = arg_3;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0918(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8688
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_7;
    var_104 = 80;
    pri = fun_0570(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8730
    OP_JUMP lab_8800
// lab_8800
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_8878
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_09C0(var_32, var_24, var_16)
// lab_8878
    var_8 = 24792;
    pri = SoundPostEvent(var_8)
    var_16 = 25064;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_88E8
fun_88E8() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 0;
    var_24 = arg_5;
    var_32 = 0;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_84B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_8988
fun_8988() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1;
    var_24 = -1;
    var_32 = 1;
    var_40 = 180;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_84B0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_8A28
fun_8A28() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7258(var_24)
    pri = 0;
    return pri;
}
// fun_8A90
fun_8A90() {
    pri = g_mode;
    switch (pri) {
// switch_8C18
        case default:
        {
// switch_8C18_case_default
            pri = CommandNOP()
            OP_JUMP lab_8CB0
// lab_8CB0
            pri = 0;
            return pri;
        }
        case 0xb6efcd2d8347bf18:
        {
// switch_8C18_case_0xb6efcd2d8347bf18
            var_8 = 0;
            pri = fun_BBF8()
            OP_JUMP lab_8CB0
        }
        case 0xb6efce2d8347c0cb:
        {
// switch_8C18_case_0xb6efce2d8347c0cb
            var_8 = 0;
            pri = fun_B128()
            OP_JUMP lab_8CB0
        }
        case 0xb6efcf2d8347c27e:
        {
// switch_8C18_case_0xb6efcf2d8347c27e
            var_8 = 0;
            pri = fun_B0A0()
            OP_JUMP lab_8CB0
        }
        case 0xf5f2e90bb2c61cb6:
        {
// switch_8C18_case_0xf5f2e90bb2c61cb6
            var_8 = 0;
            pri = fun_AD48()
            OP_JUMP lab_8CB0
        }
        case 0x0:
        {
// switch_8C18_case_0x0
            var_8 = 0;
            pri = fun_8CC0()
            OP_JUMP lab_8CB0
        }
        case 0x26f3ad2ae5ba341b:
        {
// switch_8C18_case_0x26f3ad2ae5ba341b
            var_8 = 0;
            pri = fun_ABD0()
            OP_JUMP lab_8CB0
        }
        case 0x28e720eec93fe548:
        {
// switch_8C18_case_0x28e720eec93fe548
            var_8 = 0;
            pri = fun_C5E8()
            OP_JUMP lab_8CB0
        }
        case 0x4fb99b2783be1b27:
        {
// switch_8C18_case_0x4fb99b2783be1b27
            var_8 = 0;
            pri = fun_ACC0()
            OP_JUMP lab_8CB0
        }
    }
}
// fun_8CC0
fun_8CC0() {
    pri = 0;
    return pri;
}
// fun_8CD8
fun_8CD8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7480(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8D30
fun_8D30() {
    pri = 0;
    return pri;
}
// fun_8D48
fun_8D48() {
    pri = 0;
    return pri;
}
// fun_8D60
fun_8D60() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 1830;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 1122;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_0968(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = 0;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 1174;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 1122;
    pri = float(var_136)
    var_144 = pri;
    var_152 = -4807553854326954453;
    var_160 = 48;
    pri = fun_0968(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 0;
    var_208 = 6;
    var_216 = -4807553854326954453;
    var_224 = 56;
    pri = fun_2668(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = -4807553854326954453;
    var_256 = 8;
    pri = fun_0D30(var_248)
    var_264 = 10;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 1;
    var_288 = 0;
    var_296 = 30;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 0;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 0;
    var_336 = 1419;
    pri = float(var_336)
    var_344 = pri;
    var_352 = 1122;
    pri = float(var_352)
    var_360 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_368 = 72;
    pri = fun_0A38(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_376 = 10;
    var_384 = 8;
    pri = fun_0060(var_376)
    var_392 = 25080;
    pri = SoundPostEvent(var_392)
    var_400 = 25352;
    var_408 = 8;
    var_416 = 16;
    pri = fun_0280(var_408, var_400)
    var_424 = 0;
    pri = fun_0350()
    var_432 = 50;
    var_440 = 8;
    pri = fun_0060(var_432)
    pri = EvCameraStart()
    var_448 = 0;
    var_456 = 4629531531950843494;
    var_464 = 0;
    OP_PUSH5_C 4653922350233519391, 4634799336139983421, 4652846280193647575, 4655530144096583680, 4630950165833465201
    var_472 = 4653750870400051446;
    var_480 = 1;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 8802641224559852288;
    var_496 = 8;
    pri = fun_0B58(var_488)
    var_504 = 1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 6;
    var_536 = -4807553854326954453;
    var_544 = 40;
    pri = fun_49A0(var_536, var_528, var_520, var_512, var_504)
    var_552 = 0;
    var_560 = 0;
    var_568 = -4807553854326954453;
    var_576 = 24;
    pri = fun_66D0(var_568, var_560, var_552)
    var_584 = 1;
    var_592 = 8;
    pri = fun_0060(var_584)
    var_600 = -4807553854326954453;
    var_608 = 8;
    pri = fun_0D30(var_600)
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C 4898176246508569463, -4807553854326954453
    var_656 = 56;
    pri = fun_1F38(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_2080(var_664)
    var_680 = 0;
    pri = fun_2140()
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C 4898177346020197674, -4807553854326954453
    var_728 = 56;
    pri = fun_1F38(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_2080(var_736)
    var_752 = 0;
    pri = fun_2140()
    var_760 = 0;
    var_768 = 4631952216750555136;
    var_776 = 0;
    OP_PUSH5_C 4652565245021588029, 4639245233397128233, 4652555129514612490, 4653498730393569853, 4637296722870848717
    var_784 = 4653080564131294085;
    var_792 = 1;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    pri = fun_25D8()
    var_808 = 0;
    var_816 = 4631952216750555136;
    var_824 = 0;
    OP_PUSH5_C 4652271983280227615, 4640477390107679130, 4652390070829050757, 4653205468652209439, 4639234326241780695
    var_832 = 4652915505445732352;
    var_840 = 300;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_848 = 0;
    var_856 = 1;
    var_864 = -4807553854326954453;
    var_872 = 24;
    pri = fun_66D0(var_864, var_856, var_848)
    var_880 = 1;
    var_888 = 8;
    pri = fun_0060(var_880)
    var_896 = -4807553854326954453;
    var_904 = 8;
    pri = fun_0D30(var_896)
    var_912 = 0;
    var_920 = 3;
    var_928 = 0;
    var_936 = 100;
    var_944 = -1;
    OP_PUSH2_C 4898178445531825885, -4807553854326954453
    var_952 = 56;
    pri = fun_1F38(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 1;
    var_968 = 8;
    pri = fun_2080(var_960)
    var_976 = 0;
    pri = fun_2140()
    var_984 = 0;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 100;
    var_1016 = -1;
    OP_PUSH2_C 4898170748950428408, -4807553854326954453
    var_1024 = 56;
    pri = fun_1F38(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 1;
    var_1040 = 8;
    pri = fun_2080(var_1032)
    var_1048 = 0;
    pri = fun_2140()
    var_1056 = -2219091719801836476;
    var_1064 = 8;
    pri = fun_08C0(var_1056)
    var_1072 = 0;
    var_1080 = 4629939670667073946;
    var_1088 = 0;
    OP_PUSH5_C 4653517246169381601, 4638338180284678144, 4652433963333231575, 4654514327293913989, 4635861904177066148
    var_1096 = 4652825785296905830;
    var_1104 = 1;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_25D8()
    var_1120 = 0;
    var_1128 = 4629939670667073946;
    var_1136 = 0;
    OP_PUSH5_C 4653465481161945907, 4638338180284678144, 4652565772787169362, 4654462518306013184, 4635861904177066148
    var_1144 = 4652957594750843617;
    var_1152 = 300;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 1;
    var_1168 = 1;
    var_1176 = -1;
    var_1184 = -1;
    var_1192 = 0;
    var_1200 = 8;
    var_1208 = -4807553854326954453;
    var_1216 = 56;
    pri = fun_2668(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1224 = 0;
    var_1232 = 3;
    var_1240 = 0;
    var_1248 = 100;
    var_1256 = -1;
    OP_PUSH2_C 4898171848462056619, -4807553854326954453
    var_1264 = 56;
    pri = fun_1F38(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 1;
    var_1280 = 8;
    pri = fun_2080(var_1272)
    var_1288 = 0;
    pri = fun_2140()
    var_1296 = 25368;
    var_1304 = -4807553854326954453;
    var_1312 = 16;
    pri = fun_0F30(var_1304, var_1296)
    var_1320 = 1;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 8;
    var_1352 = -4807553854326954453;
    var_1360 = 40;
    pri = fun_49A0(var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1368 = -4807553854326954453;
    var_1376 = 8;
    pri = fun_0D30(var_1368)
    var_1384 = -2219091719801836476;
    var_1392 = 8;
    pri = fun_0740(var_1384)
    var_1400 = 0;
    pri = fun_0770()
    var_1408 = 0;
    var_1416 = 4629531531950843494;
    var_1424 = 0;
    OP_PUSH5_C 4653922350233519391, 4634799336139983421, 4652846280193647575, 4655530144096583680, 4630950165833465201
    var_1432 = 4653750870400051446;
    var_1440 = 1;
    pri = EvCameraMove(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 0;
    var_1456 = 3;
    var_1464 = 0;
    var_1472 = 100;
    var_1480 = -1;
    OP_PUSH2_C 4898172947973684830, -4807553854326954453
    var_1488 = 56;
    pri = fun_1F38(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1496 = 1;
    var_1504 = 8;
    pri = fun_2080(var_1496)
    var_1512 = 0;
    pri = fun_2140()
    var_1520 = 1;
    var_1528 = 0;
    var_1536 = 30;
    pri = float(var_1536)
    var_1544 = pri;
    var_1552 = 0;
    pri = float(var_1552)
    var_1560 = pri;
    var_1568 = 0;
    var_1576 = 1174;
    pri = float(var_1576)
    var_1584 = pri;
    var_1592 = 778;
    pri = float(var_1592)
    var_1600 = pri;
    OP_PUSH2_C 4607182418800017408, -4807553854326954453
    var_1608 = 72;
    pri = fun_0A38(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1616 = 30;
    var_1624 = 8;
    pri = fun_0060(var_1616)
    var_1632 = 1;
    var_1640 = 0;
    var_1648 = 30;
    pri = float(var_1648)
    var_1656 = pri;
    var_1664 = 0;
    pri = float(var_1664)
    var_1672 = pri;
    var_1680 = 0;
    var_1688 = 1174;
    pri = float(var_1688)
    var_1696 = pri;
    var_1704 = 1122;
    pri = float(var_1704)
    var_1712 = pri;
    OP_PUSH2_C 4607182418800017408, 7589307597612998181
    var_1720 = 72;
    pri = fun_0A38(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1728 = -4807553854326954453;
    var_1736 = 8;
    pri = fun_0B58(var_1728)
    var_1744 = 0;
    var_1752 = 0;
    var_1760 = 0;
    var_1768 = 80;
    pri = float(var_1768)
    var_1776 = pri;
    var_1784 = -4807553854326954453;
    var_1792 = 40;
    pri = fun_0AB0(var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1800 = -4807553854326954453;
    var_1808 = 8;
    pri = fun_0B58(var_1800)
    var_1816 = 0;
    var_1824 = 1;
    var_1832 = -4807553854326954453;
    var_1840 = 24;
    pri = fun_66D0(var_1832, var_1824, var_1816)
    var_1848 = 1;
    var_1856 = 8;
    pri = fun_0060(var_1848)
    var_1864 = -4807553854326954453;
    var_1872 = 8;
    pri = fun_0D30(var_1864)
    var_1880 = 7589307597612998181;
    var_1888 = 8;
    pri = fun_0B58(var_1880)
    var_1896 = -2219091719801836476;
    var_1904 = 8;
    pri = fun_08C0(var_1896)
    var_1912 = 0;
    var_1920 = 4630558915615837389;
    var_1928 = 0;
    OP_PUSH5_C 4652737956308079084, 4637628863343367291, 4652406211659746509, 4653475244825200558, 4638627395823248343
    var_1936 = 4653196188774071009;
    var_1944 = 1;
    pri = EvCameraMove(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = 0;
    pri = fun_25D8()
    var_1960 = 0;
    var_1968 = 0;
    var_1976 = 0;
    var_1984 = 0;
    OP_PUSH2_C 8802641224559852288, 7589307597612998181
    var_1992 = 48;
    pri = fun_0B00(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2000 = 7589307597612998181;
    var_2008 = 8;
    pri = fun_0B58(var_2000)
    var_2016 = 0;
    pri = fun_25D8()
    var_2024 = 0;
    var_2032 = 3;
    var_2040 = 0;
    var_2048 = 100;
    var_2056 = -1;
    OP_PUSH2_C -2796106361630259824, 7589307597612998181
    var_2064 = 56;
    pri = fun_1F38(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2072 = 1;
    var_2080 = 8;
    pri = fun_2080(var_2072)
    var_2088 = 0;
    pri = fun_2140()
    var_2096 = 0;
    var_2104 = 4630558915615837389;
    var_2112 = 3;
    OP_PUSH5_C 4653535586023332905, 4636308745702594314, 4652571138403912909, 4654272918520919491, 4637307278182475366
    var_2120 = 4653361115518237409;
    var_2128 = 10;
    pri = EvCameraMove(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2136 = 0;
    pri = fun_25D8()
    var_2144 = 15;
    var_2152 = 8;
    pri = fun_0060(var_2144)
    var_2160 = -1;
    var_2168 = 0;
    var_2176 = 0;
    var_2184 = -9078299556052297195;
    var_2192 = 0;
    var_2200 = 150;
    var_2208 = 48;
    pri = fun_2380(var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2216 = 0;
    pri = fun_2498()
    OP_JZER lab_A100
    var_2224 = 0;
    pri = fun_2588()
// lab_A100
    var_8 = 0;
    var_16 = 4629644121941527757;
    var_24 = 0;
    OP_PUSH5_C 4653862844664224154, 4634675487150230733, 4652943125177822085, 4655580941533786931, 4632512351954209341
    var_32 = 4653654773083783823;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 1;
    var_64 = 180;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 1419;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 1122;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 8802641224559852288;
    var_120 = 48;
    pri = fun_0968(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = 0;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 1174;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 1122;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 7589307597612998181;
    var_200 = 48;
    pri = fun_0968(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = -2219091719801836476;
    var_216 = 8;
    pri = fun_0740(var_208)
    var_224 = 0;
    pri = fun_0770()
    var_232 = 24152;
    var_240 = 8;
    var_248 = 16;
    pri = fun_0280(var_240, var_232)
    var_256 = 0;
    pri = fun_0350()
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    OP_PUSH2_C -2796103063095375191, 7589307597612998181
    var_304 = 56;
    pri = fun_1F38(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_2080(var_312)
    var_328 = 0;
    pri = fun_2140()
    var_336 = 1;
    var_344 = 0;
    var_352 = 30;
    pri = float(var_352)
    var_360 = pri;
    var_368 = 0;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 0;
    var_392 = 730;
    pri = float(var_392)
    var_400 = pri;
    var_408 = 870;
    pri = float(var_408)
    var_416 = pri;
    OP_PUSH2_C 4607182418800017408, 7589307597612998181
    var_424 = 72;
    pri = fun_0A38(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 7589307597612998181;
    var_440 = 8;
    pri = fun_0B58(var_432)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    OP_PUSH2_C 8802641224559852288, 7589307597612998181
    var_480 = 48;
    pri = fun_0B00(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 7589307597612998181;
    var_496 = 8;
    pri = fun_0B58(var_488)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    OP_PUSH2_C 4899165806973770138, -4807553854326954453
    var_544 = 56;
    pri = fun_1F38(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 1;
    var_560 = 8;
    pri = fun_2080(var_552)
    var_568 = 0;
    pri = fun_2140()
    var_576 = 1;
    var_584 = 0;
    var_592 = 30;
    pri = float(var_592)
    var_600 = pri;
    var_608 = 0;
    pri = float(var_608)
    var_616 = pri;
    var_624 = 0;
    var_632 = 1174;
    pri = float(var_632)
    var_640 = pri;
    var_648 = 1122;
    pri = float(var_648)
    var_656 = pri;
    OP_PUSH2_C 4607182418800017408, 1437989026607552983
    var_664 = 72;
    pri = fun_0A38(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = 1437989026607552983;
    var_680 = 8;
    pri = fun_0B58(var_672)
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH2_C 8802641224559852288, 1437989026607552983
    var_720 = 48;
    pri = fun_0B00(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 1437989026607552983;
    var_736 = 8;
    pri = fun_0B58(var_728)
    var_744 = 15;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 3;
    var_768 = 1;
    pri = EvCameraEnd(var_768, var_760)
    pri = 0;
    return pri;
}
// fun_A7E8
fun_A7E8() {
    pri = 0;
    return pri;
}
// fun_A800
fun_A800() {
    var_8 = -3293621181990616472;
    pri = FlagSet(var_8)
    var_16 = 10;
    var_24 = -4451396045221236065;
    pri = WorkSet(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_A870
fun_A870() {
    pri = 0;
    return pri;
}
// fun_A888
fun_A888() {
    var_8 = -4807553854326954453;
    pri = FlagSet(var_8)
    var_16 = 7589307597612998181;
    pri = FlagSet(var_16)
    var_24 = 1437989026607552983;
    pri = FlagSet(var_24)
    var_32 = 1437990126119181194;
    pri = FlagSet(var_32)
    var_40 = -2074260347958720186;
    pri = FlagSet(var_40)
    var_48 = 30;
    var_56 = -4451396045221236065;
    pri = WorkSet(var_56, var_48)
    var_64 = 1430;
    var_72 = 8;
    pri = fun_8A28(var_64)
    pri = 0;
    return pri;
}
// fun_A9B8
fun_A9B8() {
    var_8 = 0;
    var_16 = 1;
    pri = PokePartyGetCount(var_16, var_8)
    alt = 1;
    OP_JSGRTR lab_AA28
    var_24 = 0;
    var_32 = 2;
    var_40 = 16;
    pri = fun_7798(var_32, var_24)
// lab_AA28
    var_8 = 26500;
    var_16 = 20000;
    OP_PUSH2_C -2908063149080961217, -1800407467347990206
    var_24 = 7;
    var_32 = 40;
    pri = fun_8988(var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_AA80
fun_AA80() {
    var_8 = 1420;
    var_16 = 8;
    pri = fun_8A28(var_8)
    var_24 = -4807553854326954453;
    pri = FlagSet(var_24)
    var_32 = 7589307597612998181;
    pri = FlagSet(var_32)
    var_40 = 1437989026607552983;
    pri = FlagSet(var_40)
    var_48 = 1437990126119181194;
    pri = FlagSet(var_48)
    pri = 0;
    return pri;
}
// fun_AB58
fun_AB58() {
    var_8 = 180;
    var_16 = -6753229122579741207;
    var_24 = 1450;
    var_32 = 1475;
    OP_PUSH2_C -2908913071569379095, -1799557544859572328
    var_40 = 7;
    var_48 = 56;
    pri = fun_88E8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_ABD0
fun_ABD0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8CD8()
    var_16 = 0;
    pri = fun_8D30()
    var_24 = 0;
    pri = fun_8D48()
    var_32 = 0;
    pri = fun_8D60()
    var_40 = 0;
    pri = fun_A7E8()
    var_48 = 0;
    pri = fun_A800()
    var_56 = 0;
    pri = fun_A870()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_ACC0
fun_ACC0() {
    var_8 = 0;
    pri = fun_8D30()
    var_16 = 0;
    pri = fun_A800()
    var_24 = 0;
    pri = fun_A888()
    var_32 = -3293621181990616472;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_AD48
fun_AD48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 80;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 1174;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 778;
    pri = float(var_56)
    var_64 = pri;
    var_72 = -4807553854326954453;
    var_80 = 48;
    pri = fun_0968(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 1;
    var_104 = -4807553854326954453;
    var_112 = 24;
    pri = fun_66D0(var_104, var_96, var_88)
    var_120 = 1;
    var_128 = 8;
    pri = fun_0060(var_120)
    var_136 = -4807553854326954453;
    var_144 = 8;
    pri = fun_0D30(var_136)
    var_152 = -4451396045221236065;
    pri = WorkGet(var_152)
    alt = 20;
    OP_JSLESS lab_AF80
    var_160 = 1;
    var_168 = 1;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 1174;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 1122;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 1437990126119181194;
    var_232 = 48;
    pri = fun_0968(var_224, var_216, var_208, var_200, var_192, var_184)
    OP_JUMP lab_B030
// lab_AF80
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 1174;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 1122;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 1437989026607552983;
    var_80 = 48;
    pri = fun_0968(var_72, var_64, var_56, var_48, var_40, var_32)
// lab_B030
    var_8 = 25544;
    pri = SoundPostEvent(var_8)
    var_16 = 25816;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_B0A0
fun_B0A0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2796103063095375191;
    var_88 = 80;
    pri = fun_70E0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_B128
fun_B128() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = 1437989026607552983;
    var_56 = 48;
    pri = fun_6928(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -4451396045221236065;
    pri = WorkGet(var_64)
    alt = 20;
    OP_JSLESS lab_B2A0
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -3037935170226896051, 1437989026607552983
    var_112 = 56;
    pri = fun_1F38(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_2080(var_120)
    var_136 = 0;
    pri = fun_2140()
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 1437989026607552983;
    var_176 = 32;
    pri = fun_6C28(var_168, var_160, var_152, var_144)
    pri = 0;
    return pri;
// lab_B2A0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -3037937369250152473, 1437989026607552983
    var_48 = 56;
    pri = fun_1F38(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2080(var_56)
    var_72 = 0;
    var_80 = 1;
    pri = PokePartyGetCount(var_80, var_72)
    alt = 2;
    OP_JSGEQ lab_B438
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C -3037936269738524262, 1437989026607552983
    var_128 = 56;
    pri = fun_1F38(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_2080(var_136)
    var_152 = 0;
    pri = fun_2140()
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 1437989026607552983;
    var_192 = 32;
    pri = fun_6C28(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
// lab_B438
    var_8 = 0;
    pri = fun_2140()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 1437989026607552983;
    var_48 = 32;
    pri = fun_6C28(var_40, var_32, var_24, var_16)
    var_56 = -1;
    var_64 = 0;
    var_72 = 0;
    var_80 = -9078299556052297195;
    var_88 = 0;
    var_96 = 151;
    var_104 = 48;
    pri = fun_2380(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    pri = fun_2498()
    OP_JZER lab_B520
    var_120 = 0;
    pri = fun_2588()
// lab_B520
    var_8 = 0;
    var_16 = 4629644121941527757;
    var_24 = 0;
    OP_PUSH5_C 4653862844664224154, 4634675487150230733, 4652943125177822085, 4655580941533786931, 4632512351954209341
    var_32 = 4653654773083783823;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 1;
    var_64 = 180;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 1419;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 1122;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 8802641224559852288;
    var_120 = 48;
    pri = fun_0968(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = 0;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 1174;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 1122;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 1437989026607552983;
    var_200 = 48;
    pri = fun_0968(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 24152;
    var_216 = 8;
    var_224 = 16;
    pri = fun_0280(var_216, var_208)
    var_232 = 0;
    pri = fun_0350()
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C -3037935170226896051, 1437989026607552983
    var_280 = 56;
    pri = fun_1F38(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_2080(var_288)
    var_304 = 0;
    pri = fun_2140()
    var_312 = 1;
    var_320 = 0;
    var_328 = 30;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 0;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 0;
    var_368 = 730;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 1122;
    pri = float(var_384)
    var_392 = pri;
    OP_PUSH2_C 4607182418800017408, 1437989026607552983
    var_400 = 72;
    pri = fun_0A38(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 1437989026607552983;
    var_416 = 8;
    pri = fun_0B58(var_408)
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH2_C 8802641224559852288, 1437989026607552983
    var_456 = 48;
    pri = fun_0B00(var_448, var_440, var_432, var_424, var_416, var_408)
    var_464 = 1437989026607552983;
    var_472 = 8;
    pri = fun_0B58(var_464)
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C 4899164707462141927, -4807553854326954453
    var_520 = 56;
    pri = fun_1F38(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_2080(var_528)
    var_544 = 0;
    pri = fun_2140()
    var_552 = 1;
    var_560 = 0;
    var_568 = 30;
    pri = float(var_568)
    var_576 = pri;
    var_584 = 0;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 0;
    var_608 = 1174;
    pri = float(var_608)
    var_616 = pri;
    var_624 = 1122;
    pri = float(var_624)
    var_632 = pri;
    OP_PUSH2_C 4607182418800017408, 1437990126119181194
    var_640 = 72;
    pri = fun_0A38(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 1437990126119181194;
    var_656 = 8;
    pri = fun_0B58(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH2_C 8802641224559852288, 1437990126119181194
    var_696 = 48;
    pri = fun_0B00(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 1437990126119181194;
    var_712 = 8;
    pri = fun_0B58(var_704)
    var_720 = 20;
    var_728 = -4451396045221236065;
    pri = WorkSet(var_728, var_720)
    var_736 = 15;
    var_744 = 8;
    pri = fun_0060(var_736)
    var_752 = 3;
    var_760 = 1;
    pri = EvCameraEnd(var_760, var_752)
    pri = 0;
    return pri;
}
// fun_BBF8
fun_BBF8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = 1437990126119181194;
    var_56 = 48;
    pri = fun_6928(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -4451396045221236065;
    pri = WorkGet(var_64)
    alt = 20;
    OP_JSGEQ lab_BD70
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C 8004213847744494737, 1437990126119181194
    var_112 = 56;
    pri = fun_1F38(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_2080(var_120)
    var_136 = 0;
    pri = fun_2140()
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 1437990126119181194;
    var_176 = 32;
    pri = fun_6C28(var_168, var_160, var_152, var_144)
    pri = 0;
    return pri;
// lab_BD70
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 54474219771720754, 1437990126119181194
    var_48 = 56;
    pri = fun_1F38(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2080(var_56)
    var_72 = 0;
    var_80 = 1;
    pri = PokePartyGetCount(var_80, var_72)
    alt = 2;
    OP_JSGEQ lab_BF08
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C 8004216046767751159, 1437990126119181194
    var_128 = 56;
    pri = fun_1F38(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_2080(var_136)
    var_152 = 0;
    pri = fun_2140()
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 1437990126119181194;
    var_192 = 32;
    pri = fun_6C28(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
// lab_BF08
    var_8 = 0;
    pri = fun_2140()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 1437990126119181194;
    var_48 = 32;
    pri = fun_6C28(var_40, var_32, var_24, var_16)
    var_56 = -1;
    var_64 = 0;
    var_72 = 0;
    var_80 = -9078299556052297195;
    var_88 = 0;
    var_96 = 152;
    var_104 = 48;
    pri = fun_2380(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    pri = fun_2498()
    OP_JZER lab_BFF0
    var_120 = 0;
    pri = fun_2588()
// lab_BFF0
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4629644121941527757;
    var_24 = 0;
    OP_PUSH5_C 4653862844664224154, 4634675487150230733, 4652943125177822085, 4655580941533786931, 4632512351954209341
    var_32 = 4653654773083783823;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_25D8()
    var_56 = 1;
    var_64 = 1;
    var_72 = 180;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 1419;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 1122;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 8802641224559852288;
    var_128 = 48;
    pri = fun_0968(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    var_152 = 0;
    pri = float(var_152)
    var_160 = pri;
    var_168 = 1174;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 1122;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 1437990126119181194;
    var_208 = 48;
    pri = fun_0968(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 0;
    var_224 = 0;
    var_232 = -4807553854326954453;
    var_240 = 24;
    pri = fun_66D0(var_232, var_224, var_216)
    var_248 = 1;
    var_256 = 8;
    pri = fun_0060(var_248)
    var_264 = -4807553854326954453;
    var_272 = 8;
    pri = fun_0D30(var_264)
    var_280 = 24152;
    var_288 = 8;
    var_296 = 16;
    pri = fun_0280(var_288, var_280)
    var_304 = 0;
    pri = fun_0350()
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 100;
    var_344 = -1;
    OP_PUSH2_C 8004214947256122948, 1437990126119181194
    var_352 = 56;
    pri = fun_1F38(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 1;
    var_368 = 8;
    pri = fun_2080(var_360)
    var_376 = 0;
    pri = fun_2140()
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH4_C 4653137606794543104, 4651866571352834048, 4607182418800017408, -4807553854326954453
    var_424 = 72;
    pri = fun_0A38(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = -4807553854326954453;
    var_440 = 8;
    pri = fun_0B58(var_432)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    OP_PUSH2_C -4807553854326954453, 8802641224559852288
    var_480 = 48;
    pri = fun_0B00(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    OP_PUSH2_C 8802641224559852288, -4807553854326954453
    var_520 = 48;
    pri = fun_0B00(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 8802641224559852288;
    var_536 = 8;
    pri = fun_0B58(var_528)
    var_544 = -4807553854326954453;
    var_552 = 8;
    pri = fun_0B58(var_544)
    var_560 = 25832;
    pri = SoundPostEvent(var_560)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 100;
    var_600 = -1;
    OP_PUSH2_C 4899166906485398349, -4807553854326954453
    var_608 = 56;
    pri = fun_1F38(var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_616 = 0;
    var_624 = 8;
    pri = fun_0630(var_616)
    var_632 = 1;
    var_640 = 8;
    pri = fun_2080(var_632)
    var_648 = 0;
    pri = fun_2140()
    var_656 = 0;
    pri = fun_A888()
    var_664 = 0;
    pri = fun_A9B8()
    pri = 0;
    return pri;
}
// fun_C5E8
fun_C5E8() {
    pri = 26072;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 1750;
    var_80 = 1125;
    OP_PUSH_P_ADR -64
    var_88 = -4807553854326954453;
    var_96 = 32;
    pri = fun_7958(var_88, var_80, var_72, var_64)
    OP_JZER lab_C6A8
    var_104 = 0;
    pri = fun_AA80()
    var_112 = 0;
    pri = fun_AB58()
// lab_C6A8
    pri = 0;
    return pri;
}
