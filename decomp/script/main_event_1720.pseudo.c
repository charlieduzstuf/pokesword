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
// fun_0590
fun_0590() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_05D8
// lab_05D8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0618
    OP_JUMP lab_0688
// lab_0618
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0658
    OP_JUMP lab_0688
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
// lab_0688
    pri = 0;
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07C0
fun_07C0() {
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
// fun_0838
fun_0838() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1208(var_8)
    OP_JZER lab_0958
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1238(var_24)
    OP_JNZ lab_0958
    pri = 0;
    return pri;
// lab_0958
    OP_JUMP lab_0968
// lab_0968
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09C8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0968
    pri = 0;
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A48
fun_0A48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A80
fun_0A80() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AC8
    pri = 0;
    return pri;
// lab_0AC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B08
// lab_0B08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1208(var_8)
    OP_JNZ lab_0B90
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B80
    pri = 0;
    return pri;
// lab_0B90
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BD8
    pri = 0;
    return pri;
// lab_0BD8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C80(var_8)
    pri = 0;
    return pri;
// lab_0C38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B08
    pri = 0;
    return pri;
// lab_0B80
    OP_JUMP lab_0BD8
}
// fun_0C80
fun_0C80() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D08
    pri = 0;
    return pri;
// lab_0D08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1208(var_8)
    OP_JZER lab_0E38
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D60
    OP_ZERO_P_S 64
// lab_0E38
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E70
    OP_CONST_S 64, 1
// lab_0E70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA8
    OP_CONST_S 72, 1
// lab_0EA8
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
// lab_0D60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D88
    OP_ZERO_P_S 72
// lab_0D88
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
    OP_JUMP lab_0F48
// lab_0F48
    pri = 0;
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1018
fun_1018() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1110
fun_1110() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1058(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_10D0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1098(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1110(var_24)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1268
fun_1268() {
    OP_JUMP lab_1280
// lab_1280
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1310
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1300
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A80(var_8)
    pri = 0;
    return pri;
// lab_1310
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1390
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A80(var_8)
    pri = 0;
    return pri;
// lab_13A0
    pri = 0;
    return pri;
// lab_1390
    OP_JUMP lab_13B0
// lab_13B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1280
    pri = 0;
    return pri;
// lab_1300
    OP_JUMP lab_13B0
}
// fun_13F0
fun_13F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A80(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1268(var_40)
    pri = 0;
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14B0
fun_14B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_14D8
fun_14D8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1568
fun_1568() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
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
// switch_1BB8
        case default:
        {
// switch_1BB8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C00
// lab_1C00
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
            OP_JNZ lab_1CA8
            var_88 = 0;
            pri = fun_1F28()
// lab_1CA8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BB8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17A0
                case default:
                {
// switch_17A0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1818
// lab_1818
                    OP_JUMP lab_1C00
                }
                case 0x0:
                {
// switch_17A0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1818
                }
                case 0x1:
                {
// switch_17A0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1818
                }
                case 0x2:
                {
// switch_17A0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1818
                }
                case 0x3:
                {
// switch_17A0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1818
                }
                case 0x4:
                {
// switch_17A0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1818
                }
                case 0x5:
                {
// switch_17A0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1818
                }
            }
        }
        case 0x65:
        {
// switch_1BB8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1958
                case default:
                {
// switch_1958_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19D0
// lab_19D0
                    OP_JUMP lab_1C00
                }
                case 0x0:
                {
// switch_1958_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19D0
                }
                case 0x1:
                {
// switch_1958_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19D0
                }
                case 0x2:
                {
// switch_1958_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19D0
                }
                case 0x3:
                {
// switch_1958_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19D0
                }
                case 0x4:
                {
// switch_1958_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19D0
                }
                case 0x5:
                {
// switch_1958_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19D0
                }
            }
        }
        case 0x66:
        {
// switch_1BB8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B10
                case default:
                {
// switch_1B10_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B88
// lab_1B88
                    OP_JUMP lab_1C00
                }
                case 0x0:
                {
// switch_1B10_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B88
                }
                case 0x1:
                {
// switch_1B10_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B88
                }
                case 0x2:
                {
// switch_1B10_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B88
                }
                case 0x3:
                {
// switch_1B10_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B88
                }
                case 0x4:
                {
// switch_1B10_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B88
                }
                case 0x5:
                {
// switch_1B10_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B88
                }
            }
        }
    }
}
// fun_1CC0
fun_1CC0() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A48(var_104, var_96)
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
    pri = fun_15A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
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
    OP_JUMP lab_1F40
// lab_1F40
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F80
    pri = 0;
    return pri;
// lab_1F80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F40
    pri = 0;
    return pri;
}
// fun_1FC0
fun_1FC0() {
    var_8 = 0;
    pri = fun_1F28()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2070
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2070
    pri = 0;
    return pri;
}
// fun_2080
fun_2080() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_20B0
fun_20B0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    OP_JUMP lab_2100
// lab_2100
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2148
    OP_JUMP lab_2178
    OP_JUMP lab_2168
// lab_2148
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2178
    pri = 0;
    return pri;
// lab_2168
    OP_JUMP lab_2100
}
// fun_2188
fun_2188() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 0;
    pri = StartLoadTrainerBattleSeamless_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
    OP_JUMP lab_2230
// lab_2230
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2268
    pri = 0;
    return pri;
// lab_2268
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2230
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_22D8
fun_22D8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2350
fun_2350() {
    var_8 = 0;
    pri = fun_22D8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_23D0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_23D0
    pri = 1;
    return pri;
// lab_23D0
    var_8 = 0;
    pri = fun_22D8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2410
    pri = 1;
    return pri;
// lab_2410
    var_8 = 0;
    pri = fun_22D8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2440
fun_2440() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    OP_JUMP lab_24A8
// lab_24A8
    pri = EvCameraMoveWait_()
    OP_JZER lab_24E0
    pri = 0;
    return pri;
// lab_24E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24A8
    pri = 0;
    return pri;
}
// fun_2520
fun_2520() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2588(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2660()
    pri = 0;
    return pri;
}
// fun_2588
fun_2588() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25E0
fun_25E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2588(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2660()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2660
fun_2660() {
    OP_JUMP lab_2678
// lab_2678
    pri = IsEasingRunningDof_()
    OP_JZER lab_26D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_26E0
// lab_26D0
    pri = 0;
    return pri;
// lab_26E0
    OP_JUMP lab_2678
    pri = 0;
    return pri;
}
// fun_2700
fun_2700() {
    pri = arg_5;
    OP_JNZ lab_2738
    var_8 = 0;
    pri = fun_0F58()
// lab_2738
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2788
    OP_CONST_S -8, -1
// lab_2788
    pri = arg_1;
    switch (pri) {
// switch_4240
        case default:
        {
// switch_4240_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_46E8
            var_520 = 20440;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A48(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_46E8
            pri = 1;
            OP_JUMP lab_46F0
// lab_46E8
            pri = 0;
// lab_46F0
            OP_JZER lab_4740
            var_8 = 64;
            var_16 = 20536;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4998
// lab_4740
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_47A8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_47A8
            pri = 1;
            OP_JUMP lab_47B0
// lab_47A8
            pri = 0;
// lab_47B0
            OP_JZER lab_4938
            var_16 = 20712;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A48(var_24, var_16)
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
            var_176 = 20816;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20832;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4998
// lab_4938
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4998
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4A08
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4A08
            var_8 = 0;
            pri = fun_0F98()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4240_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x1:
        {
// switch_4240_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x2:
        {
// switch_4240_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x3:
        {
// switch_4240_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x4:
        {
// switch_4240_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x5:
        {
// switch_4240_case_0x5
            var_8 = 2;
            var_16 = 10696;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C80(var_40)
            OP_JUMP switch_4240_case_default
        }
        case 0x6:
        {
// switch_4240_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x7:
        {
// switch_4240_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x8:
        {
// switch_4240_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x9:
        {
// switch_4240_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0xa:
        {
// switch_4240_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0xb:
        {
// switch_4240_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0xc:
        {
// switch_4240_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0xd:
        {
// switch_4240_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11344;
            var_72 = 11168;
            var_80 = 10984;
            var_88 = 10792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0xe:
        {
// switch_4240_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12000;
            var_72 = 11792;
            var_80 = 11576;
            var_88 = 11352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0xf:
        {
// switch_4240_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12392;
            var_72 = 12272;
            var_80 = 12144;
            var_88 = 12008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x10:
        {
// switch_4240_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12736;
            var_72 = 12632;
            var_80 = 12520;
            var_88 = 12400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x11:
        {
// switch_4240_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13080;
            var_72 = 12976;
            var_80 = 12864;
            var_88 = 12744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x12:
        {
// switch_4240_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x13:
        {
// switch_4240_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x14:
        {
// switch_4240_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13640;
            var_72 = 13464;
            var_80 = 13280;
            var_88 = 13088;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x15:
        {
// switch_4240_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x16:
        {
// switch_4240_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x17:
        {
// switch_4240_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x18:
        {
// switch_4240_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x19:
        {
// switch_4240_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x1a:
        {
// switch_4240_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x1b:
        {
// switch_4240_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x1c:
        {
// switch_4240_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14032;
            var_72 = 13912;
            var_80 = 13784;
            var_88 = 13648;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x1d:
        {
// switch_4240_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x1e:
        {
// switch_4240_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14496;
            var_72 = 14352;
            var_80 = 14200;
            var_88 = 14040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x1f:
        {
// switch_4240_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x20:
        {
// switch_4240_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x21:
        {
// switch_4240_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x22:
        {
// switch_4240_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x23:
        {
// switch_4240_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x24:
        {
// switch_4240_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14864;
            var_72 = 14752;
            var_80 = 14632;
            var_88 = 14504;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x25:
        {
// switch_4240_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15232;
            var_72 = 15120;
            var_80 = 15000;
            var_88 = 14872;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x26:
        {
// switch_4240_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x27:
        {
// switch_4240_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x28:
        {
// switch_4240_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x29:
        {
// switch_4240_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15672;
            var_72 = 15536;
            var_80 = 15392;
            var_88 = 15240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x2a:
        {
// switch_4240_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16064;
            var_72 = 15944;
            var_80 = 15816;
            var_88 = 15680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x2b:
        {
// switch_4240_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16480;
            var_72 = 16352;
            var_80 = 16216;
            var_88 = 16072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x2c:
        {
// switch_4240_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16920;
            var_72 = 16784;
            var_80 = 16640;
            var_88 = 16488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x2d:
        {
// switch_4240_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x2e:
        {
// switch_4240_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17240;
            var_72 = 17144;
            var_80 = 17040;
            var_88 = 16928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x2f:
        {
// switch_4240_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17632;
            var_72 = 17512;
            var_80 = 17384;
            var_88 = 17248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x30:
        {
// switch_4240_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18024;
            var_72 = 17904;
            var_80 = 17776;
            var_88 = 17640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x31:
        {
// switch_4240_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x32:
        {
// switch_4240_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x33:
        {
// switch_4240_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18416;
            var_72 = 18296;
            var_80 = 18168;
            var_88 = 18032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x34:
        {
// switch_4240_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18784;
            var_72 = 18672;
            var_80 = 18552;
            var_88 = 18424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x35:
        {
// switch_4240_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19272;
            var_72 = 19120;
            var_80 = 18960;
            var_88 = 18792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x36:
        {
// switch_4240_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19640;
            var_72 = 19528;
            var_80 = 19408;
            var_88 = 19280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x37:
        {
// switch_4240_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x38:
        {
// switch_4240_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20008;
            var_72 = 19896;
            var_80 = 19776;
            var_88 = 19648;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4240_case_default
        }
        case 0x39:
        {
// switch_4240_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x3a:
        {
// switch_4240_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x3b:
        {
// switch_4240_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x3c:
        {
// switch_4240_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 20016;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x3d:
        {
// switch_4240_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20192;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
        case 0x3e:
        {
// switch_4240_case_0x3e
            var_8 = 4;
            var_16 = 20336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            OP_JUMP switch_4240_case_default
        }
    }
}
// fun_4A38
fun_4A38() {
    pri = arg_4;
    OP_JNZ lab_4A70
    var_8 = 0;
    pri = fun_0F58()
// lab_4A70
    pri = arg_1;
    switch (pri) {
// switch_5E48
        case default:
        {
// switch_5E48_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21408;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1208(var_264)
            OP_JZER lab_6410
            pri = arg_3;
            switch (pri) {
// switch_63B8
                case default:
                {
// switch_63B8_case_default
                    OP_JUMP lab_66C8
// lab_66C8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6738
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6738
                    var_8 = 0;
                    pri = fun_0F98()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_63B8_case_0x1
                    var_8 = 32;
                    var_16 = 21560;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_63B8_case_default
                }
                case 0x2:
                {
// switch_63B8_case_0x2
                    var_8 = 32;
                    var_16 = 21664;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_63B8_case_default
                }
                case 0x3:
                {
// switch_63B8_case_0x3
                    var_8 = 32;
                    var_16 = 21464;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_63B8_case_default
                }
            }
// lab_6410
            pri = arg_1;
            OP_JZER lab_6460
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6460
            pri = 0;
            OP_JUMP lab_6468
// lab_6460
            pri = 1;
// lab_6468
            OP_JZER lab_64D0
            var_8 = 21760;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A48(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_64D0
            pri = 1;
            OP_JUMP lab_64D8
// lab_64D0
            pri = 0;
// lab_64D8
            OP_JZER lab_6528
            var_8 = 32;
            var_16 = 21856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_66C8
// lab_6528
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6590
            var_8 = 32;
            var_16 = 22016;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_66C8
// lab_6590
            var_16 = 22136;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A48(var_24, var_16)
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
            var_176 = 22240;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22256;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5E48_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1:
        {
// switch_5E48_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2:
        {
// switch_5E48_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x3:
        {
// switch_5E48_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x4:
        {
// switch_5E48_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x5:
        {
// switch_5E48_case_0x5
            var_8 = 1;
            var_16 = 20888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C80(var_40)
            OP_JUMP switch_5E48_case_default
        }
        case 0x6:
        {
// switch_5E48_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x7:
        {
// switch_5E48_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x8:
        {
// switch_5E48_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x9:
        {
// switch_5E48_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0xa:
        {
// switch_5E48_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0xb:
        {
// switch_5E48_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0xc:
        {
// switch_5E48_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0xd:
        {
// switch_5E48_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0xe:
        {
// switch_5E48_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0xf:
        {
// switch_5E48_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x10:
        {
// switch_5E48_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x11:
        {
// switch_5E48_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x12:
        {
// switch_5E48_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x13:
        {
// switch_5E48_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x14:
        {
// switch_5E48_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x15:
        {
// switch_5E48_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x16:
        {
// switch_5E48_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x17:
        {
// switch_5E48_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x18:
        {
// switch_5E48_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x19:
        {
// switch_5E48_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1a:
        {
// switch_5E48_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1b:
        {
// switch_5E48_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1c:
        {
// switch_5E48_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1d:
        {
// switch_5E48_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1e:
        {
// switch_5E48_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x1f:
        {
// switch_5E48_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x20:
        {
// switch_5E48_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x21:
        {
// switch_5E48_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x22:
        {
// switch_5E48_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x23:
        {
// switch_5E48_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x24:
        {
// switch_5E48_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x25:
        {
// switch_5E48_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x26:
        {
// switch_5E48_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x27:
        {
// switch_5E48_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x28:
        {
// switch_5E48_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x29:
        {
// switch_5E48_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2a:
        {
// switch_5E48_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2b:
        {
// switch_5E48_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2c:
        {
// switch_5E48_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2d:
        {
// switch_5E48_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2e:
        {
// switch_5E48_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x2f:
        {
// switch_5E48_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x30:
        {
// switch_5E48_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x31:
        {
// switch_5E48_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x32:
        {
// switch_5E48_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x33:
        {
// switch_5E48_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x34:
        {
// switch_5E48_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x35:
        {
// switch_5E48_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x36:
        {
// switch_5E48_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x37:
        {
// switch_5E48_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x38:
        {
// switch_5E48_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x39:
        {
// switch_5E48_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x3a:
        {
// switch_5E48_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x3b:
        {
// switch_5E48_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x3c:
        {
// switch_5E48_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20984;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x3d:
        {
// switch_5E48_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21160;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
        case 0x3e:
        {
// switch_5E48_case_0x3e
            var_8 = 3;
            var_16 = 21304;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            OP_JUMP switch_5E48_case_default
        }
    }
}
// fun_6768
fun_6768() {
    pri = 22304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_67F0
// lab_67F0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6970
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6960
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_68B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_68B0
    pri = 0;
    OP_JUMP lab_68B8
// lab_6970
    pri = 0;
    return pri;
// lab_6960
    OP_JUMP lab_67E8
// lab_67E8
    OP_INC_P_S -936
// lab_68B0
    pri = 1;
// lab_68B8
    OP_JZER lab_6930
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6928
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6930
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6928
}
// fun_6990
fun_6990() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_69D8
    pri = arg_0;
    return pri;
// lab_69D8
    pri = arg_1;
    return pri;
}
// fun_69E8
fun_69E8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6A80
    var_8 = 1;
    var_16 = 0;
    var_24 = 23224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_14B0()
// lab_6A80
    pri = arg_4;
    OP_JZER lab_6AB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1568(var_8)
// lab_6AB8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6B10
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6B10
    pri = 0;
    OP_JUMP lab_6B18
// lab_6B10
    pri = 1;
// lab_6B18
    OP_JZER lab_6BE0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6BE0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6BB8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_13F0(var_32, var_24)
    OP_JUMP lab_6BE0
// lab_6BE0
    pri = arg_2;
    OP_JZER lab_6CB8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6C88
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FD8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0788(var_40)
    OP_JUMP lab_6CB8
// lab_6CB8
    pri = arg_3;
    OP_JZER lab_6CF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1478(var_8)
// lab_6CF0
    pri = 0;
    return pri;
// lab_6C88
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FD8(var_16, var_8)
// lab_6BB8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_13F0(var_16, var_8)
}
// fun_6D00
fun_6D00() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_6E80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6D98
    var_8 = 1;
    var_16 = 0;
    var_24 = 23224;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_6E80
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6D98
    pri = arg_0;
    OP_JNZ lab_6DE0
    var_8 = 23272;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6E00
// lab_6DE0
    var_8 = 23448;
    pri = SoundPostEvent(var_8)
// lab_6E00
    var_8 = 0;
    var_16 = 8;
    pri = fun_0590(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6E80
    var_24 = 23712;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_6EC0
fun_6EC0() {
    var_16 = 136;
    var_24 = 135;
    var_32 = 16;
    pri = fun_6990(var_24, var_16)
    var_8 = pri;
    var_48 = 78;
    var_56 = 77;
    var_64 = 16;
    pri = fun_6990(var_56, var_48)
    var_16 = pri;
    pri = 23760;
    OP_ADDR_ALT -80
    OP_MOVS 64
    OP_ADDR_P_PRI -80
    OP_ADD_P_C 24
    OP_MOVE_ALT 
    pri = var_8;
    OP_STOR_I 
    OP_ADDR_P_PRI -80
    OP_ADD_P_C 16
    OP_MOVE_ALT 
    pri = var_16;
    OP_STOR_I 
    pri = 23824;
    OP_ADDR_ALT -144
    OP_MOVS 64
    var_208 = 52;
    var_216 = 51;
    var_224 = 16;
    pri = fun_6990(var_216, var_208)
    var_152 = pri;
    var_240 = 49;
    var_248 = 48;
    var_256 = 16;
    pri = fun_6990(var_248, var_240)
    var_160 = pri;
    OP_ADDR_P_PRI -144
    OP_ADD_P_C 24
    OP_MOVE_ALT 
    pri = var_152;
    OP_STOR_I 
    OP_ADDR_P_PRI -144
    OP_ADD_P_C 16
    OP_MOVE_ALT 
    pri = var_160;
    OP_STOR_I 
    OP_PUSH_P_ADR -144
    OP_PUSH_P_ADR -80
    var_264 = arg_0;
    var_272 = 0;
    pri = CallTournament(var_272, var_264, var_256, var_248)
    pri = 0;
    return pri;
}
// fun_7108
fun_7108() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6768(var_24)
    pri = 0;
    return pri;
}
// fun_7170
fun_7170() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_72F0(var_16)
    var_8 = pri;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = arg_0;
    pri = GetFieldObjectPositionX_(var_64)
    var_72 = pri;
    var_80 = var_8;
    var_88 = 40;
    pri = fun_06A0(var_80, var_72, var_64, var_56, var_48)
    var_96 = 23944;
    var_104 = 23888;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_14D8(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_7278
fun_7278() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_72F0(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1528(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_72F0
fun_72F0() {
    pri = arg_0;
    OP_JNZ lab_7338
    var_8 = 24000;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_7338
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7380
    var_8 = 24152;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_7380
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 24304;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_73C8
fun_73C8() {
    pri = g_mode;
    switch (pri) {
// switch_7488
        case default:
        {
// switch_7488_case_default
            pri = CommandNOP()
            OP_JUMP lab_74D0
// lab_74D0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7488_case_0x0
            var_8 = 0;
            pri = fun_74E0()
            OP_JUMP lab_74D0
        }
        case 0x3009ca2aeafe64ec:
        {
// switch_7488_case_0x3009ca2aeafe64ec
            var_8 = 0;
            pri = fun_C970()
            OP_JUMP lab_74D0
        }
        case 0x571cb8278790b778:
        {
// switch_7488_case_0x571cb8278790b778
            var_8 = 0;
            pri = fun_CA60()
            OP_JUMP lab_74D0
        }
    }
}
// fun_74E0
fun_74E0() {
    pri = 0;
    return pri;
}
// fun_74F8
fun_74F8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_69E8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7550
fun_7550() {
    pri = 0;
    return pri;
}
// fun_7568
fun_7568() {
    pri = 0;
    return pri;
}
// fun_7580
fun_7580() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 0;
    var_32 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_40 = 48;
    pri = fun_0838(var_32, var_24, var_16, var_8, var_0, var_-8)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_48 = 16;
    pri = fun_2520(var_40, var_32)
    var_56 = 0;
    var_64 = 1;
    var_72 = 220;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 4609434218613702656;
    var_96 = 32;
    pri = fun_2588(var_88, var_80, var_72, var_64)
    var_104 = 0;
    var_112 = 4630798169346041446;
    var_120 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_128 = 4671166637055011717;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_2490()
    var_152 = 0;
    var_160 = 4630798169346041446;
    var_168 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_176 = 4671174919126347940;
    var_184 = 90;
    pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 0;
    var_200 = 60;
    var_208 = 100;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 4609434218613702656;
    var_232 = 32;
    pri = fun_2588(var_224, var_216, var_208, var_200)
    var_240 = 15;
    var_248 = 8;
    pri = fun_0060(var_240)
    var_256 = 0;
    var_264 = 3;
    var_272 = 0;
    var_280 = 101;
    var_288 = 0;
    var_296 = 3878564974317236404;
    var_304 = -1;
    var_312 = 56;
    pri = fun_1DB0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 8802641224559852288;
    var_328 = 8;
    pri = fun_08E0(var_320)
    var_336 = 1;
    var_344 = 8;
    pri = fun_1FC0(var_336)
    var_352 = 1;
    var_360 = 0;
    var_368 = 0;
    var_376 = 75;
    OP_PUSH3_C 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_384 = 16;
    pri = fun_6990(var_376, var_368)
    var_392 = pri;
    var_400 = 48;
    pri = fun_0838(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = 0;
    var_416 = 1;
    var_424 = 220;
    pri = float(var_424)
    var_432 = pri;
    var_440 = 4609434218613702656;
    var_448 = 32;
    pri = fun_2588(var_440, var_432, var_424, var_416)
    var_456 = 0;
    var_464 = 4630798169346041446;
    var_472 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_480 = 4671252805781280522;
    var_488 = 1;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    pri = fun_2490()
    var_504 = 0;
    var_512 = 4630798169346041446;
    var_520 = 3;
    OP_PUSH5_C 4670052427705551421, 4641170522237829120, 4671391718080333742, 4670402297803067884, 4632852936676029235
    var_528 = 4671208891286867149;
    var_536 = 180;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 101;
    var_576 = 0;
    var_584 = 3878566073828864615;
    var_592 = -1;
    var_600 = 56;
    pri = fun_1DB0(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_608 = 16;
    pri = fun_6990(var_600, var_592)
    var_616 = pri;
    var_624 = 8;
    pri = fun_08E0(var_616)
    var_632 = 1;
    var_640 = 8;
    pri = fun_0060(var_632)
    var_648 = 1;
    var_656 = 8;
    pri = fun_1FC0(var_648)
    var_664 = 0;
    pri = fun_2080()
    var_672 = 1;
    var_680 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_688 = 48;
    pri = fun_06F0(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 1;
    var_704 = 1;
    var_712 = 0;
    OP_PUSH4_C 4671158052617977856, 4671268003780755456, 7412181012284178912, 4188046879888384287
    var_720 = 16;
    pri = fun_6990(var_712, var_704)
    var_728 = pri;
    var_736 = 48;
    pri = fun_06F0(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 1;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 1;
    var_768 = 0;
    var_776 = 4641240890982006784;
    var_784 = 0;
    var_792 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_800 = 72;
    pri = fun_07C0(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 1;
    var_816 = 0;
    var_824 = 4641240890982006784;
    var_832 = 0;
    var_840 = 0;
    OP_PUSH5_C 4671226772094713856, 4671268003780755456, 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_848 = 16;
    pri = fun_6990(var_840, var_832)
    var_856 = pri;
    var_864 = 72;
    pri = fun_07C0(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = 15;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 1;
    var_904 = 700;
    pri = float(var_904)
    var_912 = pri;
    var_920 = 4611686018427387904;
    var_928 = 32;
    pri = fun_2588(var_920, var_912, var_904, var_896)
    var_936 = 0;
    var_944 = 4626857519672092262;
    var_952 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_960 = 4671083459000370463;
    var_968 = 1;
    pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 0;
    pri = fun_2490()
    var_984 = 0;
    var_992 = 4626857519672092262;
    var_1000 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1008 = 4671072741510778716;
    var_1016 = 480;
    pri = EvCameraMove(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1024 = 8802641224559852288;
    var_1032 = 8;
    pri = fun_08E0(var_1024)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1040 = 16;
    pri = fun_6990(var_1032, var_1024)
    var_1048 = pri;
    var_1056 = 8;
    pri = fun_08E0(var_1048)
    var_1064 = 15;
    var_1072 = 8;
    pri = fun_0060(var_1064)
    var_1080 = 0;
    var_1088 = 30;
    pri = float(var_1088)
    var_1096 = pri;
    var_1104 = 24312;
    pri = SoundSetRTPC(var_1104, var_1096, var_1088)
    var_1112 = 0;
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 90;
    pri = float(var_1136)
    var_1144 = pri;
    var_1152 = 8802641224559852288;
    var_1160 = 40;
    pri = fun_0890(var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 270;
    pri = float(var_1192)
    var_1200 = pri;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1208 = 16;
    pri = fun_6990(var_1200, var_1192)
    var_1216 = pri;
    var_1224 = 40;
    pri = fun_0890(var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1232 = 30;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 8802641224559852288;
    var_1256 = 8;
    pri = fun_08E0(var_1248)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1264 = 16;
    pri = fun_6990(var_1256, var_1248)
    var_1272 = pri;
    var_1280 = 8;
    pri = fun_08E0(var_1272)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1288 = 16;
    pri = fun_6990(var_1280, var_1272)
    var_1296 = pri;
    var_1304 = 8;
    pri = fun_1018(var_1296)
    var_1312 = 2;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1320 = 16;
    pri = fun_6990(var_1312, var_1304)
    var_1328 = pri;
    var_1336 = 16;
    pri = fun_1058(var_1328, var_1320)
    var_1344 = 1;
    var_1352 = 1;
    var_1360 = -1;
    var_1368 = -1;
    var_1376 = 0;
    var_1384 = 12;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1392 = 16;
    pri = fun_6990(var_1384, var_1376)
    var_1400 = pri;
    var_1408 = 56;
    pri = fun_2700(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 100;
    var_1448 = -1;
    OP_PUSH3_C -9074060805184103400, 7412181012284178912, 4188046879888384287
    var_1456 = 16;
    pri = fun_6990(var_1448, var_1440)
    var_1464 = pri;
    var_1472 = 56;
    pri = fun_1DB0(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1480 = 1;
    var_1488 = 8;
    pri = fun_1FC0(var_1480)
    var_1496 = 1;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 12;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1528 = 16;
    pri = fun_6990(var_1520, var_1512)
    var_1536 = pri;
    var_1544 = 40;
    pri = fun_4A38(var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1552 = 0;
    var_1560 = 3;
    var_1568 = 0;
    var_1576 = 100;
    var_1584 = -1;
    OP_PUSH3_C -9074057506649218767, 7412181012284178912, 4188046879888384287
    var_1592 = 16;
    pri = fun_6990(var_1584, var_1576)
    var_1600 = pri;
    var_1608 = 56;
    pri = fun_1DB0(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 1;
    var_1624 = 8;
    pri = fun_1FC0(var_1616)
    var_1632 = 0;
    pri = fun_2080()
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1640 = 16;
    pri = fun_6990(var_1632, var_1624)
    var_1648 = pri;
    var_1656 = 8;
    pri = fun_0A80(var_1648)
    var_1664 = 0;
    var_1672 = 1;
    var_1680 = 200;
    pri = float(var_1680)
    var_1688 = pri;
    var_1696 = 4612811918334230528;
    var_1704 = 32;
    pri = fun_2588(var_1696, var_1688, var_1680, var_1672)
    var_1712 = 0;
    var_1720 = 4631952216750555136;
    var_1728 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_1736 = 4671031446602818519;
    var_1744 = 1;
    pri = EvCameraMove(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1752 = 0;
    pri = fun_2490()
    var_1760 = 0;
    var_1768 = 4631952216750555136;
    var_1776 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_1784 = 4671018568572878193;
    var_1792 = 240;
    pri = EvCameraMove(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1800 = 0;
    var_1808 = 60;
    pri = float(var_1808)
    var_1816 = pri;
    var_1824 = 24448;
    pri = SoundSetRTPC(var_1824, var_1816, var_1808)
    var_1832 = 24584;
    pri = SoundPostEvent(var_1832)
    var_1840 = 30;
    var_1848 = 8;
    pri = fun_0060(var_1840)
    var_1856 = 0;
    var_1864 = 120;
    var_1872 = 850;
    pri = float(var_1872)
    var_1880 = pri;
    var_1888 = 4605380978949069210;
    var_1896 = 32;
    pri = fun_2588(var_1888, var_1880, var_1872, var_1864)
    var_1904 = 1;
    var_1912 = 0;
    var_1920 = 4641240890982006784;
    var_1928 = 0;
    var_1936 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_1944 = 72;
    pri = fun_07C0(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = 1;
    var_1960 = 0;
    var_1968 = 4641240890982006784;
    var_1976 = 0;
    var_1984 = 0;
    OP_PUSH5_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_1992 = 16;
    pri = fun_6990(var_1984, var_1976)
    var_2000 = pri;
    var_2008 = 72;
    pri = fun_07C0(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2016 = 8802641224559852288;
    var_2024 = 8;
    pri = fun_08E0(var_2016)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_2032 = 16;
    pri = fun_6990(var_2024, var_2016)
    var_2040 = pri;
    var_2048 = 8;
    pri = fun_08E0(var_2040)
    var_2056 = 15;
    var_2064 = 8;
    pri = fun_0060(var_2056)
    var_2072 = 0;
    var_2080 = 0;
    var_2088 = 0;
    var_2096 = 90;
    pri = float(var_2096)
    var_2104 = pri;
    var_2112 = 8802641224559852288;
    var_2120 = 40;
    pri = fun_0890(var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = 0;
    var_2152 = 270;
    pri = float(var_2152)
    var_2160 = pri;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_2168 = 16;
    pri = fun_6990(var_2160, var_2152)
    var_2176 = pri;
    var_2184 = 40;
    pri = fun_0890(var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2192 = 30;
    var_2200 = 8;
    pri = fun_0060(var_2192)
    var_2208 = 8802641224559852288;
    var_2216 = 8;
    pri = fun_08E0(var_2208)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_2224 = 16;
    pri = fun_6990(var_2216, var_2208)
    var_2232 = pri;
    var_2240 = 8;
    pri = fun_08E0(var_2232)
    var_2248 = 0;
    pri = fun_2218()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2256 = 3;
    var_2264 = 1;
    var_2272 = 32;
    pri = fun_25E0(var_2264, var_2256, var_2248, var_2240)
    var_2280 = 0;
    pri = fun_22A8()
    var_2288 = 0;
    pri = fun_2350()
    OP_JZER lab_8B18
    var_2296 = 0;
    pri = fun_2440()
// lab_8B18
    var_8 = 0;
    var_16 = 0;
    var_24 = 24832;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    var_48 = 90;
    pri = float(var_48)
    var_56 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_64 = 48;
    pri = fun_06F0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    var_88 = 270;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 4671226772094713856;
    var_112 = 20580;
    pri = float(var_112)
    var_120 = pri;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_128 = 16;
    pri = fun_6990(var_120, var_112)
    var_136 = pri;
    var_144 = 48;
    pri = fun_06F0(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 8802641224559852288;
    var_160 = 8;
    pri = fun_11B0(var_152)
    var_168 = 5;
    var_176 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_184 = 16;
    pri = fun_6990(var_176, var_168)
    var_192 = pri;
    var_200 = 24;
    pri = fun_1148(var_192, var_184, var_176)
    var_208 = 15;
    var_216 = 8;
    pri = fun_0060(var_208)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_224 = 16;
    pri = fun_2520(var_216, var_208)
    var_232 = 0;
    var_240 = 1;
    var_248 = 250;
    pri = float(var_248)
    var_256 = pri;
    var_264 = 4609434218613702656;
    var_272 = 32;
    pri = fun_2588(var_264, var_256, var_248, var_240)
    var_280 = 1;
    var_288 = 0;
    var_296 = 4641240890982006784;
    var_304 = 0;
    var_312 = 0;
    var_320 = 20000;
    pri = float(var_320)
    var_328 = pri;
    var_336 = 19850;
    pri = float(var_336)
    var_344 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_352 = 72;
    pri = fun_07C0(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 1;
    var_368 = 0;
    var_376 = 4641240890982006784;
    var_384 = 0;
    var_392 = 0;
    var_400 = 20000;
    pri = float(var_400)
    var_408 = pri;
    var_416 = 20150;
    pri = float(var_416)
    var_424 = pri;
    OP_PUSH3_C 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_432 = 16;
    pri = fun_6990(var_424, var_416)
    var_440 = pri;
    var_448 = 72;
    pri = fun_07C0(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    var_464 = 4631952216750555136;
    var_472 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_480 = 4671115501517982925;
    var_488 = 1;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 0;
    pri = fun_2490()
    var_504 = 0;
    var_512 = 4631952216750555136;
    var_520 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_528 = 4671018568572878193;
    var_536 = 240;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    var_552 = 30;
    pri = float(var_552)
    var_560 = pri;
    var_568 = 24984;
    pri = SoundSetRTPC(var_568, var_560, var_552)
    var_576 = 23712;
    var_584 = 8;
    var_592 = 16;
    pri = fun_0280(var_584, var_576)
    var_600 = 0;
    pri = fun_0350()
    var_608 = 0;
    var_616 = 3;
    var_624 = 0;
    var_632 = 101;
    var_640 = 0;
    var_648 = 3878562775293979982;
    var_656 = -1;
    var_664 = 56;
    pri = fun_1DB0(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 8802641224559852288;
    var_680 = 8;
    pri = fun_08E0(var_672)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_688 = 16;
    pri = fun_6990(var_680, var_672)
    var_696 = pri;
    var_704 = 8;
    pri = fun_08E0(var_696)
    var_712 = 15;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 1;
    var_736 = 8;
    pri = fun_1FC0(var_728)
    var_744 = 0;
    pri = fun_2080()
    var_752 = 30;
    var_760 = 8;
    pri = fun_0060(var_752)
    var_768 = 0;
    var_776 = 1;
    var_784 = 320;
    pri = float(var_784)
    var_792 = pri;
    var_800 = 4611686018427387904;
    var_808 = 32;
    pri = fun_2588(var_800, var_792, var_784, var_776)
    var_816 = 0;
    var_824 = 4629587826946185626;
    var_832 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_840 = 4671148720513037107;
    var_848 = 1;
    pri = EvCameraMove(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_856 = 0;
    pri = fun_2490()
    var_864 = 0;
    var_872 = 4629587826946185626;
    var_880 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_888 = 4671146447272746680;
    var_896 = 240;
    pri = EvCameraMove(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_904 = 8;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_912 = 16;
    pri = fun_6990(var_904, var_896)
    var_920 = pri;
    var_928 = 16;
    pri = fun_1058(var_920, var_912)
    var_936 = 1;
    var_944 = 1;
    var_952 = -1;
    var_960 = -1;
    var_968 = 0;
    var_976 = 7;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_984 = 16;
    pri = fun_6990(var_976, var_968)
    var_992 = pri;
    var_1000 = 56;
    pri = fun_2700(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = 0;
    var_1016 = 3;
    var_1024 = 0;
    var_1032 = 100;
    var_1040 = -1;
    OP_PUSH3_C -9074058606160846978, 7412181012284178912, 4188046879888384287
    var_1048 = 16;
    pri = fun_6990(var_1040, var_1032)
    var_1056 = pri;
    var_1064 = 56;
    pri = fun_1DB0(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1072 = 1;
    var_1080 = 8;
    pri = fun_1FC0(var_1072)
    var_1088 = 1;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 7;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1120 = 16;
    pri = fun_6990(var_1112, var_1104)
    var_1128 = pri;
    var_1136 = 40;
    pri = fun_4A38(var_1128, var_1120, var_1112, var_1104, var_1096)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1144 = 16;
    pri = fun_6990(var_1136, var_1128)
    var_1152 = pri;
    var_1160 = 8;
    pri = fun_0A80(var_1152)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1168 = 16;
    pri = fun_6990(var_1160, var_1152)
    var_1176 = pri;
    var_1184 = 8;
    pri = fun_1098(var_1176)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH3_C -9074055307625962345, 7412181012284178912, 4188046879888384287
    var_1232 = 16;
    pri = fun_6990(var_1224, var_1216)
    var_1240 = pri;
    var_1248 = 56;
    pri = fun_1DB0(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1256 = 1;
    var_1264 = 8;
    pri = fun_1FC0(var_1256)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1272 = 16;
    pri = fun_6990(var_1264, var_1256)
    var_1280 = pri;
    var_1288 = 8;
    pri = fun_1018(var_1280)
    var_1296 = 5;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1304 = 16;
    pri = fun_6990(var_1296, var_1288)
    var_1312 = pri;
    var_1320 = 16;
    pri = fun_1058(var_1312, var_1304)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 100;
    var_1360 = -1;
    OP_PUSH3_C -9074056407137590556, 7412181012284178912, 4188046879888384287
    var_1368 = 16;
    pri = fun_6990(var_1360, var_1352)
    var_1376 = pri;
    var_1384 = 56;
    pri = fun_1DB0(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_1FC0(var_1392)
    var_1408 = 1;
    var_1416 = 1;
    var_1424 = -1;
    var_1432 = -1;
    var_1440 = 0;
    var_1448 = 0;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1456 = 16;
    pri = fun_6990(var_1448, var_1440)
    var_1464 = pri;
    var_1472 = 56;
    pri = fun_2700(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 0;
    var_1504 = 100;
    var_1512 = -1;
    OP_PUSH3_C -9074053108602705923, 7412181012284178912, 4188046879888384287
    var_1520 = 16;
    pri = fun_6990(var_1512, var_1504)
    var_1528 = pri;
    var_1536 = 56;
    pri = fun_1DB0(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 1;
    var_1552 = 8;
    pri = fun_1FC0(var_1544)
    var_1560 = 0;
    pri = fun_2080()
    var_1568 = 1;
    var_1576 = 3;
    var_1584 = 0;
    var_1592 = 0;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1600 = 16;
    pri = fun_6990(var_1592, var_1584)
    var_1608 = pri;
    var_1616 = 40;
    pri = fun_4A38(var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1624 = 0;
    var_1632 = 3;
    var_1640 = 0;
    var_1648 = 101;
    var_1656 = 0;
    var_1664 = 3878563874805608193;
    var_1672 = -1;
    var_1680 = 56;
    pri = fun_1DB0(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_1FC0(var_1688)
    var_1704 = 0;
    pri = fun_2080()
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1712 = 16;
    pri = fun_6990(var_1704, var_1696)
    var_1720 = pri;
    var_1728 = 8;
    pri = fun_0A80(var_1720)
    pri = 0;
    return pri;
}
// fun_9AA8
fun_9AA8() {
    var_8 = 25120;
    var_16 = 8;
    pri = fun_20B0(var_8)
    var_24 = 0;
    pri = fun_20E8()
    var_32 = 1;
    var_40 = 0;
    var_48 = 0;
    var_56 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_64 = 48;
    pri = fun_0838(var_56, var_48, var_40, var_32, var_24, var_16)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_72 = 16;
    pri = fun_2520(var_64, var_56)
    var_80 = 0;
    var_88 = 1;
    var_96 = 220;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 4609434218613702656;
    var_120 = 32;
    pri = fun_2588(var_112, var_104, var_96, var_88)
    var_128 = 0;
    var_136 = 4630798169346041446;
    var_144 = 0;
    OP_PUSH5_C 4672367853508356997, 4639275843800845517, 4671255282431222088, 4672061842929672520, 4622669172018637701
    var_152 = 4671166637055011717;
    var_160 = 1;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_2490()
    var_176 = 0;
    var_184 = 4630798169346041446;
    var_192 = 3;
    OP_PUSH5_C 4672365451075450307, 4639275843800845517, 4671263564502558310, 4672059443245544899, 4622669172018637701
    var_200 = 4671174919126347940;
    var_208 = 90;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    var_224 = 60;
    var_232 = 100;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 4609434218613702656;
    var_256 = 32;
    pri = fun_2588(var_248, var_240, var_232, var_224)
    var_264 = 15;
    var_272 = 8;
    pri = fun_0060(var_264)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 101;
    var_312 = 0;
    var_320 = -6710131043172696206;
    var_328 = -1;
    var_336 = 56;
    pri = fun_1E60(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 8802641224559852288;
    var_352 = 8;
    pri = fun_08E0(var_344)
    var_360 = 1;
    var_368 = 8;
    pri = fun_1FC0(var_360)
    var_376 = 1;
    var_384 = 0;
    var_392 = 0;
    var_400 = 75;
    OP_PUSH3_C 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_408 = 16;
    pri = fun_6990(var_400, var_392)
    var_416 = pri;
    var_424 = 48;
    pri = fun_0838(var_416, var_408, var_400, var_392, var_384, var_376)
    var_432 = 0;
    var_440 = 1;
    var_448 = 220;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 4609434218613702656;
    var_472 = 32;
    pri = fun_2588(var_464, var_456, var_448, var_440)
    var_480 = 0;
    var_488 = 4630798169346041446;
    var_496 = 0;
    OP_PUSH5_C 4669939606817425326, 4640249395376543498, 4671321011236330537, 4670396387928068588, 4625818877008029942
    var_504 = 4671252805781280522;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_2490()
    var_528 = 0;
    var_536 = 4630798169346041446;
    var_544 = 3;
    OP_PUSH5_C 4670052427705551421, 4640466834796052480, 4671391718080333742, 4670402297803067884, 4627561207113868902
    var_552 = 4671208891286867149;
    var_560 = 180;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 101;
    var_600 = 0;
    var_608 = -6710132142684324417;
    var_616 = -1;
    var_624 = 56;
    pri = fun_1E60(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_632 = 16;
    pri = fun_6990(var_624, var_616)
    var_640 = pri;
    var_648 = 8;
    pri = fun_08E0(var_640)
    var_656 = 1;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 1;
    var_680 = 8;
    pri = fun_1FC0(var_672)
    var_688 = 0;
    pri = fun_2080()
    var_696 = 1;
    var_704 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_712 = 48;
    pri = fun_06F0(var_704, var_696, var_688, var_680, var_672, var_664)
    var_720 = 1;
    var_728 = 1;
    var_736 = 0;
    OP_PUSH4_C 4671158052617977856, 4671268003780755456, 7412181012284178912, 4188046879888384287
    var_744 = 16;
    pri = fun_6990(var_736, var_728)
    var_752 = pri;
    var_760 = 48;
    pri = fun_06F0(var_752, var_744, var_736, var_728, var_720, var_712)
    var_768 = 1;
    var_776 = 8;
    pri = fun_0060(var_768)
    var_784 = 1;
    var_792 = 0;
    var_800 = 4641240890982006784;
    var_808 = 0;
    var_816 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_824 = 72;
    pri = fun_07C0(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 1;
    var_840 = 0;
    var_848 = 4641240890982006784;
    var_856 = 0;
    var_864 = 0;
    OP_PUSH5_C 4671226772094713856, 4671268003780755456, 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_872 = 16;
    pri = fun_6990(var_864, var_856)
    var_880 = pri;
    var_888 = 72;
    pri = fun_07C0(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_896 = 15;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 0;
    var_920 = 1;
    var_928 = 700;
    pri = float(var_928)
    var_936 = pri;
    var_944 = 4611686018427387904;
    var_952 = 32;
    pri = fun_2588(var_944, var_936, var_928, var_920)
    var_960 = 0;
    var_968 = 4626857519672092262;
    var_976 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_984 = 4671083459000370463;
    var_992 = 1;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 0;
    pri = fun_2490()
    var_1008 = 0;
    var_1016 = 4626857519672092262;
    var_1024 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1032 = 4671072741510778716;
    var_1040 = 480;
    pri = EvCameraMove(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 8802641224559852288;
    var_1056 = 8;
    pri = fun_08E0(var_1048)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1064 = 16;
    pri = fun_6990(var_1056, var_1048)
    var_1072 = pri;
    var_1080 = 8;
    pri = fun_08E0(var_1072)
    var_1088 = 15;
    var_1096 = 8;
    pri = fun_0060(var_1088)
    var_1104 = 0;
    var_1112 = 30;
    pri = float(var_1112)
    var_1120 = pri;
    var_1128 = 25336;
    pri = SoundSetRTPC(var_1128, var_1120, var_1112)
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = 0;
    var_1160 = 90;
    pri = float(var_1160)
    var_1168 = pri;
    var_1176 = 8802641224559852288;
    var_1184 = 40;
    pri = fun_0890(var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1192 = 0;
    var_1200 = 0;
    var_1208 = 0;
    var_1216 = 270;
    pri = float(var_1216)
    var_1224 = pri;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1232 = 16;
    pri = fun_6990(var_1224, var_1216)
    var_1240 = pri;
    var_1248 = 40;
    pri = fun_0890(var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1256 = 30;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = 8802641224559852288;
    var_1280 = 8;
    pri = fun_08E0(var_1272)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1288 = 16;
    pri = fun_6990(var_1280, var_1272)
    var_1296 = pri;
    var_1304 = 8;
    pri = fun_08E0(var_1296)
    var_1312 = 1;
    var_1320 = 1;
    var_1328 = -1;
    var_1336 = -1;
    var_1344 = 0;
    var_1352 = 8;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1360 = 16;
    pri = fun_6990(var_1352, var_1344)
    var_1368 = pri;
    var_1376 = 56;
    pri = fun_2700(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 0;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 100;
    var_1416 = -1;
    OP_PUSH3_C 3115398855838650008, 7412181012284178912, 4188046879888384287
    var_1424 = 16;
    pri = fun_6990(var_1416, var_1408)
    var_1432 = pri;
    var_1440 = 56;
    pri = fun_1E60(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = 1;
    var_1456 = 8;
    pri = fun_1FC0(var_1448)
    var_1464 = 1;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 8;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1496 = 16;
    pri = fun_6990(var_1488, var_1480)
    var_1504 = pri;
    var_1512 = 40;
    pri = fun_4A38(var_1504, var_1496, var_1488, var_1480, var_1472)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1520 = 16;
    pri = fun_6990(var_1512, var_1504)
    var_1528 = pri;
    var_1536 = 8;
    pri = fun_0A80(var_1528)
    var_1544 = 1;
    var_1552 = 1;
    var_1560 = -1;
    var_1568 = -1;
    var_1576 = 0;
    var_1584 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1592 = 16;
    pri = fun_6990(var_1584, var_1576)
    var_1600 = pri;
    var_1608 = 56;
    pri = fun_2700(var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 100;
    var_1648 = -1;
    OP_PUSH3_C 3115402154373534641, 7412181012284178912, 4188046879888384287
    var_1656 = 16;
    pri = fun_6990(var_1648, var_1640)
    var_1664 = pri;
    var_1672 = 56;
    pri = fun_1E60(var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1680 = 1;
    var_1688 = 8;
    pri = fun_1FC0(var_1680)
    var_1696 = 0;
    pri = fun_2080()
    var_1704 = 1;
    var_1712 = 3;
    var_1720 = 0;
    var_1728 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1736 = 16;
    pri = fun_6990(var_1728, var_1720)
    var_1744 = pri;
    var_1752 = 40;
    pri = fun_4A38(var_1744, var_1736, var_1728, var_1720, var_1712)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1760 = 16;
    pri = fun_6990(var_1752, var_1744)
    var_1768 = pri;
    var_1776 = 8;
    pri = fun_0A80(var_1768)
    var_1784 = 0;
    var_1792 = 1;
    var_1800 = 200;
    pri = float(var_1800)
    var_1808 = pri;
    var_1816 = 4612811918334230528;
    var_1824 = 32;
    pri = fun_2588(var_1816, var_1808, var_1800, var_1792)
    var_1832 = 0;
    var_1840 = 4631952216750555136;
    var_1848 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_1856 = 4671031446602818519;
    var_1864 = 1;
    pri = EvCameraMove(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1872 = 0;
    pri = fun_2490()
    var_1880 = 0;
    var_1888 = 4631952216750555136;
    var_1896 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_1904 = 4671018568572878193;
    var_1912 = 240;
    pri = EvCameraMove(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1920 = 0;
    var_1928 = 60;
    pri = float(var_1928)
    var_1936 = pri;
    var_1944 = 25472;
    pri = SoundSetRTPC(var_1944, var_1936, var_1928)
    var_1952 = 25608;
    pri = SoundPostEvent(var_1952)
    var_1960 = 30;
    var_1968 = 8;
    pri = fun_0060(var_1960)
    var_1976 = 0;
    var_1984 = 120;
    var_1992 = 850;
    pri = float(var_1992)
    var_2000 = pri;
    var_2008 = 4605380978949069210;
    var_2016 = 32;
    pri = fun_2588(var_2008, var_2000, var_1992, var_1984)
    var_2024 = 1;
    var_2032 = 0;
    var_2040 = 4641240890982006784;
    var_2048 = 0;
    var_2056 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2064 = 72;
    pri = fun_07C0(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 1;
    var_2080 = 0;
    var_2088 = 4641240890982006784;
    var_2096 = 0;
    var_2104 = 0;
    OP_PUSH5_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_2112 = 16;
    pri = fun_6990(var_2104, var_2096)
    var_2120 = pri;
    var_2128 = 72;
    pri = fun_07C0(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2136 = 8802641224559852288;
    var_2144 = 8;
    pri = fun_08E0(var_2136)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_2152 = 16;
    pri = fun_6990(var_2144, var_2136)
    var_2160 = pri;
    var_2168 = 8;
    pri = fun_08E0(var_2160)
    var_2176 = 15;
    var_2184 = 8;
    pri = fun_0060(var_2176)
    var_2192 = 0;
    var_2200 = 0;
    var_2208 = 0;
    var_2216 = 90;
    pri = float(var_2216)
    var_2224 = pri;
    var_2232 = 8802641224559852288;
    var_2240 = 40;
    pri = fun_0890(var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2248 = 0;
    var_2256 = 0;
    var_2264 = 0;
    var_2272 = 270;
    pri = float(var_2272)
    var_2280 = pri;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_2288 = 16;
    pri = fun_6990(var_2280, var_2272)
    var_2296 = pri;
    var_2304 = 40;
    pri = fun_0890(var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2312 = 30;
    var_2320 = 8;
    pri = fun_0060(var_2312)
    var_2328 = 8802641224559852288;
    var_2336 = 8;
    pri = fun_08E0(var_2328)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_2344 = 16;
    pri = fun_6990(var_2336, var_2328)
    var_2352 = pri;
    var_2360 = 8;
    pri = fun_08E0(var_2352)
    var_2368 = 0;
    pri = fun_2218()
    var_2376 = 0;
    pri = fun_2188()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2384 = 3;
    var_2392 = 1;
    var_2400 = 32;
    pri = fun_25E0(var_2392, var_2384, var_2376, var_2368)
    var_2408 = 0;
    pri = fun_22A8()
    var_2416 = 0;
    pri = fun_2350()
    OP_JZER lab_B128
    var_2424 = 0;
    pri = fun_2440()
// lab_B128
    var_8 = 25856;
    var_16 = 8;
    pri = fun_20B0(var_8)
    var_24 = 0;
    pri = fun_20E8()
    var_32 = 0;
    var_40 = 0;
    var_48 = 26072;
    pri = PokeMemoryCheckParty(var_48, var_40, var_32)
    var_56 = 1;
    var_64 = 1;
    var_72 = 90;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_88 = 48;
    pri = fun_06F0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    var_112 = 270;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 4671226772094713856;
    var_136 = 20580;
    pri = float(var_136)
    var_144 = pri;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_152 = 16;
    pri = fun_6990(var_144, var_136)
    var_160 = pri;
    var_168 = 48;
    pri = fun_06F0(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_11B0(var_176)
    var_192 = 5;
    var_200 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_208 = 16;
    pri = fun_6990(var_200, var_192)
    var_216 = pri;
    var_224 = 24;
    pri = fun_1148(var_216, var_208, var_200)
    var_232 = 15;
    var_240 = 8;
    pri = fun_0060(var_232)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_248 = 16;
    pri = fun_2520(var_240, var_232)
    var_256 = 0;
    var_264 = 1;
    var_272 = 250;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 4609434218613702656;
    var_296 = 32;
    pri = fun_2588(var_288, var_280, var_272, var_264)
    var_304 = 1;
    var_312 = 0;
    var_320 = 4641240890982006784;
    var_328 = 0;
    var_336 = 0;
    var_344 = 20000;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 19850;
    pri = float(var_360)
    var_368 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_376 = 72;
    pri = fun_07C0(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    var_424 = 20000;
    pri = float(var_424)
    var_432 = pri;
    var_440 = 20150;
    pri = float(var_440)
    var_448 = pri;
    OP_PUSH3_C 4607182418800017408, 7412181012284178912, 4188046879888384287
    var_456 = 16;
    pri = fun_6990(var_448, var_440)
    var_464 = pri;
    var_472 = 72;
    pri = fun_07C0(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 0;
    var_488 = 4631952216750555136;
    var_496 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_504 = 4671115501517982925;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_2490()
    var_528 = 0;
    var_536 = 4631952216750555136;
    var_544 = 2;
    OP_PUSH5_C 4671260076301919191, 4633083746156931973, 4671169237400011407, 4671333688605398794, 4633439812002470953
    var_552 = 4671093984075427348;
    var_560 = 240;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 0;
    var_576 = 30;
    pri = float(var_576)
    var_584 = pri;
    var_592 = 26224;
    pri = SoundSetRTPC(var_592, var_584, var_576)
    var_600 = 23712;
    var_608 = 8;
    var_616 = 16;
    pri = fun_0280(var_608, var_600)
    var_624 = 0;
    pri = fun_0350()
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 101;
    var_664 = 0;
    var_672 = -6710133242195952628;
    var_680 = -1;
    var_688 = 56;
    pri = fun_1E60(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 8802641224559852288;
    var_704 = 8;
    pri = fun_08E0(var_696)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_712 = 16;
    pri = fun_6990(var_704, var_696)
    var_720 = pri;
    var_728 = 8;
    pri = fun_08E0(var_720)
    var_736 = 15;
    var_744 = 8;
    pri = fun_0060(var_736)
    var_752 = 1;
    var_760 = 8;
    pri = fun_1FC0(var_752)
    var_768 = 0;
    pri = fun_2080()
    var_776 = 30;
    var_784 = 8;
    pri = fun_0060(var_776)
    var_792 = 0;
    var_800 = 1;
    var_808 = 320;
    pri = float(var_808)
    var_816 = pri;
    var_824 = 4611686018427387904;
    var_832 = 32;
    pri = fun_2588(var_824, var_816, var_808, var_800)
    var_840 = 0;
    var_848 = 4629587826946185626;
    var_856 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_864 = 4671148720513037107;
    var_872 = 1;
    pri = EvCameraMove(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_880 = 0;
    pri = fun_2490()
    var_888 = 0;
    var_896 = 4629587826946185626;
    var_904 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_912 = 4671146447272746680;
    var_920 = 240;
    pri = EvCameraMove(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_928 = 1;
    var_936 = 1;
    var_944 = -1;
    var_952 = -1;
    var_960 = 0;
    var_968 = 7;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_976 = 16;
    pri = fun_6990(var_968, var_960)
    var_984 = pri;
    var_992 = 56;
    pri = fun_2700(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 0;
    var_1008 = 3;
    var_1016 = 0;
    var_1024 = 100;
    var_1032 = -1;
    OP_PUSH3_C 3115401054861906430, 7412181012284178912, 4188046879888384287
    var_1040 = 16;
    pri = fun_6990(var_1032, var_1024)
    var_1048 = pri;
    var_1056 = 56;
    pri = fun_1E60(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1064 = 1;
    var_1072 = 8;
    pri = fun_1FC0(var_1064)
    var_1080 = 0;
    var_1088 = 3;
    var_1096 = 0;
    var_1104 = 100;
    var_1112 = -1;
    OP_PUSH3_C 3115404353396791063, 7412181012284178912, 4188046879888384287
    var_1120 = 16;
    pri = fun_6990(var_1112, var_1104)
    var_1128 = pri;
    var_1136 = 56;
    pri = fun_1E60(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_1FC0(var_1144)
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 100;
    var_1192 = -1;
    OP_PUSH3_C 3115403253885162852, 7412181012284178912, 4188046879888384287
    var_1200 = 16;
    pri = fun_6990(var_1192, var_1184)
    var_1208 = pri;
    var_1216 = 56;
    pri = fun_1E60(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1224 = 1;
    var_1232 = 8;
    pri = fun_1FC0(var_1224)
    var_1240 = 0;
    pri = fun_2080()
    var_1248 = 1;
    var_1256 = 3;
    var_1264 = 0;
    var_1272 = 7;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1280 = 16;
    pri = fun_6990(var_1272, var_1264)
    var_1288 = pri;
    var_1296 = 40;
    pri = fun_4A38(var_1288, var_1280, var_1272, var_1264, var_1256)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_1304 = 16;
    pri = fun_6990(var_1296, var_1288)
    var_1312 = pri;
    var_1320 = 8;
    pri = fun_0A80(var_1312)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 101;
    var_1360 = 0;
    var_1368 = -6710134341707580839;
    var_1376 = -1;
    var_1384 = 56;
    pri = fun_1E60(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_1FC0(var_1392)
    var_1408 = 0;
    pri = fun_2080()
    var_1416 = 0;
    pri = fun_2188()
    pri = 0;
    return pri;
}
// fun_BDD8
fun_BDD8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 23224;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_7170(var_64, var_56)
    var_80 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_88 = 16;
    pri = fun_6990(var_80, var_72)
    var_96 = pri;
    var_104 = 16;
    pri = fun_7170(var_96, var_88)
    pri = EvCameraStart()
    var_120 = 212;
    var_128 = 211;
    var_136 = 16;
    pri = fun_6990(var_128, var_120)
    var_8 = pri;
    OP_CONST_S -16, 274
    var_160 = 26;
    var_168 = 25;
    var_176 = 16;
    pri = fun_6990(var_168, var_160)
    var_24 = pri;
    var_184 = var_24;
    var_192 = 0;
    var_200 = var_16;
    var_208 = var_8;
    var_216 = 32;
    pri = fun_21B8(var_208, var_200, var_192, var_184)
    var_224 = 1;
    var_232 = 8802641224559852288;
    var_240 = 16;
    pri = fun_0748(var_232, var_224)
    var_248 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_256 = 16;
    pri = fun_6990(var_248, var_240)
    var_264 = pri;
    var_272 = 16;
    pri = fun_0748(var_264, var_256)
    var_280 = 1;
    var_288 = 3458049540832089695;
    var_296 = 16;
    pri = fun_0748(var_288, var_280)
    var_304 = 1;
    var_312 = 3458048441320461484;
    var_320 = 16;
    pri = fun_0748(var_312, var_304)
    var_328 = 1;
    var_336 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_344 = 48;
    pri = fun_06F0(var_336, var_328, var_320, var_312, var_304, var_296)
    var_352 = 1;
    var_360 = 1;
    var_368 = 0;
    OP_PUSH4_C 4670292187211104256, 4671268003780755456, 7412181012284178912, 4188046879888384287
    var_376 = 16;
    pri = fun_6990(var_368, var_360)
    var_384 = pri;
    var_392 = 48;
    pri = fun_06F0(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 2;
    var_408 = 2;
    var_416 = 8802641224559852288;
    var_424 = 24;
    pri = fun_1148(var_416, var_408, var_400)
    var_432 = 1;
    var_440 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_448 = 16;
    pri = fun_6990(var_440, var_432)
    var_456 = pri;
    var_464 = 24;
    pri = fun_1148(var_456, var_448, var_440)
    var_472 = 0;
    var_480 = 60;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 26360;
    pri = SoundSetRTPC(var_496, var_488, var_480)
    var_504 = 15;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 0;
    var_528 = 4631952216750555136;
    var_536 = 0;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671211002349192479, 4654693239825985700
    var_544 = 4670926311300970578;
    var_552 = 1;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    pri = fun_2490()
    var_568 = 0;
    var_576 = 4631952216750555136;
    var_584 = 2;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671487458055322337, 4654693019923660145
    var_592 = 4670935629662015980;
    var_600 = 1200;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 23712;
    var_616 = 8;
    var_624 = 16;
    pri = fun_0280(var_616, var_608)
    var_632 = 0;
    pri = fun_0350()
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 101;
    var_672 = 0;
    var_680 = 3878568272852121037;
    var_688 = -1;
    var_696 = 56;
    pri = fun_1DB0(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 1;
    var_712 = 8;
    pri = fun_1FC0(var_704)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_C478
    var_720 = 0;
    pri = fun_7580()
    OP_JUMP lab_C490
// lab_C478
    var_8 = 0;
    pri = fun_9AA8()
// lab_C490
    var_8 = 2;
    var_16 = 9027797789697785470;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 9027796690186157259;
    pri = WorkSet(var_32, var_24)
    var_40 = 1;
    var_48 = 9027795590674529048;
    pri = WorkSet(var_48, var_40)
    var_56 = 0;
    var_64 = 9027803287255926525;
    pri = WorkSet(var_64, var_56)
    var_72 = 1;
    var_80 = 9027802187744298314;
    pri = WorkSet(var_80, var_72)
    var_88 = 0;
    var_96 = 9027801088232670103;
    pri = WorkSet(var_96, var_88)
    var_104 = 0;
    var_112 = 9027799988721041892;
    pri = WorkSet(var_112, var_104)
    var_120 = 2;
    var_128 = 9027790093116387993;
    pri = WorkSet(var_128, var_120)
    var_136 = 2;
    var_144 = 8;
    pri = fun_6EC0(var_136)
    var_152 = 12;
    var_160 = 8;
    pri = fun_0408(var_152)
    var_168 = 0;
    pri = fun_0440()
    var_176 = 26496;
    pri = SoundPostEvent(var_176)
    var_184 = 1;
    var_192 = 0;
    var_200 = 26760;
    var_208 = 8;
    var_216 = 32;
    pri = fun_02E0(var_208, var_200, var_192, var_184)
    var_224 = 0;
    pri = fun_0350()
    var_232 = 0;
    var_240 = 8802641224559852288;
    var_248 = 16;
    pri = fun_7278(var_240, var_232)
    var_256 = 1;
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_264 = 16;
    pri = fun_6990(var_256, var_248)
    var_272 = pri;
    var_280 = 16;
    pri = fun_7278(var_272, var_264)
    pri = 0;
    return pri;
}
// fun_C778
fun_C778() {
    pri = 0;
    return pri;
}
// fun_C790
fun_C790() {
    var_8 = 1725;
    var_16 = 8;
    pri = fun_7108(var_8)
    var_24 = 1141313780110520273;
    pri = VanishFlagReset(var_24)
    var_32 = -587242334477354430;
    pri = VanishFlagReset(var_32)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_48 = 16;
    pri = fun_6990(var_40, var_32)
    var_8 = pri;
    var_56 = var_8;
    pri = VanishFlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_C880
fun_C880() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_6D00(var_16, var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 2275;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 1719;
    pri = float(var_88)
    var_96 = pri;
    OP_PUSH3_C 9117463143071301695, -3308731028398755628, 3461516775756029907
    var_104 = 80;
    pri = fun_04D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_C970
fun_C970() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_74F8()
    var_16 = 0;
    pri = fun_7550()
    var_24 = 0;
    pri = fun_7568()
    var_32 = 0;
    pri = fun_BDD8()
    var_40 = 0;
    pri = fun_C778()
    var_48 = 0;
    pri = fun_C790()
    var_56 = 0;
    pri = fun_C880()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CA60
fun_CA60() {
    var_8 = 0;
    pri = fun_7550()
    var_16 = 0;
    pri = fun_C790()
    pri = 0;
    return pri;
}
