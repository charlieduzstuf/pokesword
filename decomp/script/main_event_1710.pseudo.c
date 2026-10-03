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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_05B8
// lab_05B8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_05F8
    OP_JUMP lab_0668
// lab_05F8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0638
    OP_JUMP lab_0668
// lab_0638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05B8
// lab_0668
    pri = 0;
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0728
fun_0728() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07A0
fun_07A0() {
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
// fun_0818
fun_0818() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11E8(var_8)
    OP_JZER lab_0938
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1218(var_24)
    OP_JNZ lab_0938
    pri = 0;
    return pri;
// lab_0938
    OP_JUMP lab_0948
// lab_0948
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09A8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0948
    pri = 0;
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AE8
// lab_0AE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11E8(var_8)
    OP_JNZ lab_0B70
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B60
    pri = 0;
    return pri;
// lab_0B70
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C60(var_8)
    pri = 0;
    return pri;
// lab_0C18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AE8
    pri = 0;
    return pri;
// lab_0B60
    OP_JUMP lab_0BB8
}
// fun_0C60
fun_0C60() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CE8
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11E8(var_8)
    OP_JZER lab_0E18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_ZERO_P_S 64
// lab_0E18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E50
    OP_CONST_S 64, 1
// lab_0E50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E88
    OP_CONST_S 72, 1
// lab_0E88
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
// lab_0D40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_ZERO_P_S 72
// lab_0D68
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
    OP_JUMP lab_0F28
// lab_0F28
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1038(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_10B0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1190
fun_1190() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1078(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10F0(var_24)
    pri = 0;
    return pri;
}
// fun_11E8
fun_11E8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1248
fun_1248() {
    OP_JUMP lab_1260
// lab_1260
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_12F0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_12E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_12F0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1380
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1370
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1380
    pri = 0;
    return pri;
// lab_1370
    OP_JUMP lab_1390
// lab_1390
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1260
    pri = 0;
    return pri;
// lab_12E0
    OP_JUMP lab_1390
}
// fun_13D0
fun_13D0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1248(var_40)
    pri = 0;
    return pri;
}
// fun_1458
fun_1458() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1490
fun_1490() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1508
fun_1508() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1548
fun_1548() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
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
// switch_1B98
        case default:
        {
// switch_1B98_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BE0
// lab_1BE0
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
            OP_JNZ lab_1C88
            var_88 = 0;
            pri = fun_1E40()
// lab_1C88
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B98_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1780
                case default:
                {
// switch_1780_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17F8
// lab_17F8
                    OP_JUMP lab_1BE0
                }
                case 0x0:
                {
// switch_1780_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17F8
                }
                case 0x1:
                {
// switch_1780_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17F8
                }
                case 0x2:
                {
// switch_1780_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17F8
                }
                case 0x3:
                {
// switch_1780_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17F8
                }
                case 0x4:
                {
// switch_1780_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17F8
                }
                case 0x5:
                {
// switch_1780_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17F8
                }
            }
        }
        case 0x65:
        {
// switch_1B98_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1938
                case default:
                {
// switch_1938_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19B0
// lab_19B0
                    OP_JUMP lab_1BE0
                }
                case 0x0:
                {
// switch_1938_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19B0
                }
                case 0x1:
                {
// switch_1938_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19B0
                }
                case 0x2:
                {
// switch_1938_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19B0
                }
                case 0x3:
                {
// switch_1938_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19B0
                }
                case 0x4:
                {
// switch_1938_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19B0
                }
                case 0x5:
                {
// switch_1938_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19B0
                }
            }
        }
        case 0x66:
        {
// switch_1B98_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AF0
                case default:
                {
// switch_1AF0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B68
// lab_1B68
                    OP_JUMP lab_1BE0
                }
                case 0x0:
                {
// switch_1AF0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B68
                }
                case 0x1:
                {
// switch_1AF0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B68
                }
                case 0x2:
                {
// switch_1AF0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B68
                }
                case 0x3:
                {
// switch_1AF0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B68
                }
                case 0x4:
                {
// switch_1AF0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B68
                }
                case 0x5:
                {
// switch_1AF0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B68
                }
            }
        }
    }
}
// fun_1CA0
fun_1CA0() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D48
    pri = 1;
    return pri;
// lab_1D48
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D90
fun_1D90() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CA0(var_8)
    arg_2 = pri;
// lab_1DE0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1580(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E40
fun_1E40() {
    OP_JUMP lab_1E58
// lab_1E58
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E98
    pri = 0;
    return pri;
// lab_1E98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E58
    pri = 0;
    return pri;
}
// fun_1ED8
fun_1ED8() {
    var_8 = 0;
    pri = fun_1E40()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F88
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_1F88
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FC8
fun_1FC8() {
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
// fun_2028
fun_2028() {
    OP_JUMP lab_2040
// lab_2040
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2078
    pri = 0;
    return pri;
// lab_2078
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2040
    pri = 0;
    return pri;
}
// fun_20B8
fun_20B8() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_20E8
fun_20E8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2160
fun_2160() {
    var_8 = 0;
    pri = fun_20E8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_21E0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_21E0
    pri = 1;
    return pri;
// lab_21E0
    var_8 = 0;
    pri = fun_20E8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2220
    pri = 1;
    return pri;
// lab_2220
    var_8 = 0;
    pri = fun_20E8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2250
fun_2250() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_22A0
fun_22A0() {
    OP_JUMP lab_22B8
// lab_22B8
    pri = EvCameraMoveWait_()
    OP_JZER lab_22F0
    pri = 0;
    return pri;
// lab_22F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22B8
    pri = 0;
    return pri;
}
// fun_2330
fun_2330() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2398(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2470()
    pri = 0;
    return pri;
}
// fun_2398
fun_2398() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2398(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2470()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2470
fun_2470() {
    OP_JUMP lab_2488
// lab_2488
    pri = IsEasingRunningDof_()
    OP_JZER lab_24E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24F0
// lab_24E0
    pri = 0;
    return pri;
// lab_24F0
    OP_JUMP lab_2488
    pri = 0;
    return pri;
}
// fun_2510
fun_2510() {
    pri = arg_5;
    OP_JNZ lab_2548
    var_8 = 0;
    pri = fun_0F38()
// lab_2548
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2598
    OP_CONST_S -8, -1
// lab_2598
    pri = arg_1;
    switch (pri) {
// switch_4050
        case default:
        {
// switch_4050_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_44F8
            var_520 = 20440;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A28(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_44F8
            pri = 1;
            OP_JUMP lab_4500
// lab_44F8
            pri = 0;
// lab_4500
            OP_JZER lab_4550
            var_8 = 64;
            var_16 = 20536;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_47A8
// lab_4550
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_45B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_45B8
            pri = 1;
            OP_JUMP lab_45C0
// lab_45B8
            pri = 0;
// lab_45C0
            OP_JZER lab_4748
            var_16 = 20712;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            OP_JUMP lab_47A8
// lab_4748
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
// lab_47A8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4818
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4818
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4050_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x1:
        {
// switch_4050_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x2:
        {
// switch_4050_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x3:
        {
// switch_4050_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x4:
        {
// switch_4050_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x5:
        {
// switch_4050_case_0x5
            var_8 = 2;
            var_16 = 10696;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_4050_case_default
        }
        case 0x6:
        {
// switch_4050_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x7:
        {
// switch_4050_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x8:
        {
// switch_4050_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x9:
        {
// switch_4050_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0xa:
        {
// switch_4050_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0xb:
        {
// switch_4050_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0xc:
        {
// switch_4050_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0xd:
        {
// switch_4050_case_0xd
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0xe:
        {
// switch_4050_case_0xe
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0xf:
        {
// switch_4050_case_0xf
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x10:
        {
// switch_4050_case_0x10
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x11:
        {
// switch_4050_case_0x11
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x12:
        {
// switch_4050_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x13:
        {
// switch_4050_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x14:
        {
// switch_4050_case_0x14
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x15:
        {
// switch_4050_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x16:
        {
// switch_4050_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x17:
        {
// switch_4050_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x18:
        {
// switch_4050_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x19:
        {
// switch_4050_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x1a:
        {
// switch_4050_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x1b:
        {
// switch_4050_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x1c:
        {
// switch_4050_case_0x1c
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x1d:
        {
// switch_4050_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x1e:
        {
// switch_4050_case_0x1e
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x1f:
        {
// switch_4050_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x20:
        {
// switch_4050_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x21:
        {
// switch_4050_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x22:
        {
// switch_4050_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x23:
        {
// switch_4050_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x24:
        {
// switch_4050_case_0x24
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x25:
        {
// switch_4050_case_0x25
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x26:
        {
// switch_4050_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x27:
        {
// switch_4050_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x28:
        {
// switch_4050_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x29:
        {
// switch_4050_case_0x29
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x2a:
        {
// switch_4050_case_0x2a
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x2b:
        {
// switch_4050_case_0x2b
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x2c:
        {
// switch_4050_case_0x2c
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x2d:
        {
// switch_4050_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x2e:
        {
// switch_4050_case_0x2e
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x2f:
        {
// switch_4050_case_0x2f
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x30:
        {
// switch_4050_case_0x30
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x31:
        {
// switch_4050_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x32:
        {
// switch_4050_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x33:
        {
// switch_4050_case_0x33
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x34:
        {
// switch_4050_case_0x34
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x35:
        {
// switch_4050_case_0x35
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x36:
        {
// switch_4050_case_0x36
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x37:
        {
// switch_4050_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x38:
        {
// switch_4050_case_0x38
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4050_case_default
        }
        case 0x39:
        {
// switch_4050_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x3a:
        {
// switch_4050_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x3b:
        {
// switch_4050_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x3c:
        {
// switch_4050_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 20016;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x3d:
        {
// switch_4050_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20192;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
        case 0x3e:
        {
// switch_4050_case_0x3e
            var_8 = 4;
            var_16 = 20336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_4050_case_default
        }
    }
}
// fun_4848
fun_4848() {
    pri = arg_4;
    OP_JNZ lab_4880
    var_8 = 0;
    pri = fun_0F38()
// lab_4880
    pri = arg_1;
    switch (pri) {
// switch_5C58
        case default:
        {
// switch_5C58_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21408;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_11E8(var_264)
            OP_JZER lab_6220
            pri = arg_3;
            switch (pri) {
// switch_61C8
                case default:
                {
// switch_61C8_case_default
                    OP_JUMP lab_64D8
// lab_64D8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6548
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6548
                    var_8 = 0;
                    pri = fun_0F78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_61C8_case_0x1
                    var_8 = 32;
                    var_16 = 21560;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_61C8_case_default
                }
                case 0x2:
                {
// switch_61C8_case_0x2
                    var_8 = 32;
                    var_16 = 21664;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_61C8_case_default
                }
                case 0x3:
                {
// switch_61C8_case_0x3
                    var_8 = 32;
                    var_16 = 21464;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_61C8_case_default
                }
            }
// lab_6220
            pri = arg_1;
            OP_JZER lab_6270
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6270
            pri = 0;
            OP_JUMP lab_6278
// lab_6270
            pri = 1;
// lab_6278
            OP_JZER lab_62E0
            var_8 = 21760;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A28(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_62E0
            pri = 1;
            OP_JUMP lab_62E8
// lab_62E0
            pri = 0;
// lab_62E8
            OP_JZER lab_6338
            var_8 = 32;
            var_16 = 21856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_64D8
// lab_6338
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_63A0
            var_8 = 32;
            var_16 = 22016;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_64D8
// lab_63A0
            var_16 = 22136;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
// switch_5C58_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1:
        {
// switch_5C58_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2:
        {
// switch_5C58_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x3:
        {
// switch_5C58_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x4:
        {
// switch_5C58_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x5:
        {
// switch_5C58_case_0x5
            var_8 = 1;
            var_16 = 20888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_5C58_case_default
        }
        case 0x6:
        {
// switch_5C58_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x7:
        {
// switch_5C58_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x8:
        {
// switch_5C58_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x9:
        {
// switch_5C58_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0xa:
        {
// switch_5C58_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0xb:
        {
// switch_5C58_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0xc:
        {
// switch_5C58_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0xd:
        {
// switch_5C58_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0xe:
        {
// switch_5C58_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0xf:
        {
// switch_5C58_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x10:
        {
// switch_5C58_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x11:
        {
// switch_5C58_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x12:
        {
// switch_5C58_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x13:
        {
// switch_5C58_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x14:
        {
// switch_5C58_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x15:
        {
// switch_5C58_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x16:
        {
// switch_5C58_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x17:
        {
// switch_5C58_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x18:
        {
// switch_5C58_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x19:
        {
// switch_5C58_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1a:
        {
// switch_5C58_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1b:
        {
// switch_5C58_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1c:
        {
// switch_5C58_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1d:
        {
// switch_5C58_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1e:
        {
// switch_5C58_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x1f:
        {
// switch_5C58_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x20:
        {
// switch_5C58_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x21:
        {
// switch_5C58_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x22:
        {
// switch_5C58_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x23:
        {
// switch_5C58_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x24:
        {
// switch_5C58_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x25:
        {
// switch_5C58_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x26:
        {
// switch_5C58_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x27:
        {
// switch_5C58_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x28:
        {
// switch_5C58_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x29:
        {
// switch_5C58_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2a:
        {
// switch_5C58_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2b:
        {
// switch_5C58_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2c:
        {
// switch_5C58_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2d:
        {
// switch_5C58_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2e:
        {
// switch_5C58_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x2f:
        {
// switch_5C58_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x30:
        {
// switch_5C58_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x31:
        {
// switch_5C58_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x32:
        {
// switch_5C58_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x33:
        {
// switch_5C58_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x34:
        {
// switch_5C58_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x35:
        {
// switch_5C58_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x36:
        {
// switch_5C58_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x37:
        {
// switch_5C58_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x38:
        {
// switch_5C58_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x39:
        {
// switch_5C58_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x3a:
        {
// switch_5C58_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x3b:
        {
// switch_5C58_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x3c:
        {
// switch_5C58_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20984;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x3d:
        {
// switch_5C58_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21160;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
        case 0x3e:
        {
// switch_5C58_case_0x3e
            var_8 = 3;
            var_16 = 21304;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_5C58_case_default
        }
    }
}
// fun_6578
fun_6578() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6788(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22304;
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
    var_424 = 22360;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22376;
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
    OP_JZER lab_6770
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6770
    pri = 0;
    return pri;
}
// fun_6788
fun_6788() {
    var_8 = arg_1;
    var_16 = 22424;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_09E8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_67D0
fun_67D0() {
    pri = 22528;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6858
// lab_6858
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_69D8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_69C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6918
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6918
    pri = 0;
    OP_JUMP lab_6920
// lab_69D8
    pri = 0;
    return pri;
// lab_69C8
    OP_JUMP lab_6850
// lab_6850
    OP_INC_P_S -936
// lab_6918
    pri = 1;
// lab_6920
    OP_JZER lab_6998
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6990
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6998
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6990
}
// fun_69F8
fun_69F8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_6A40
    pri = arg_0;
    return pri;
// lab_6A40
    pri = arg_1;
    return pri;
}
// fun_6A50
fun_6A50() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6AE8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23448;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1490()
// lab_6AE8
    pri = arg_4;
    OP_JZER lab_6B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_1548(var_8)
// lab_6B20
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6B78
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6B78
    pri = 0;
    OP_JUMP lab_6B80
// lab_6B78
    pri = 1;
// lab_6B80
    OP_JZER lab_6C48
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6C48
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6C20
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_13D0(var_32, var_24)
    OP_JUMP lab_6C48
// lab_6C48
    pri = arg_2;
    OP_JZER lab_6D20
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6CF0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0FB8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0768(var_40)
    OP_JUMP lab_6D20
// lab_6D20
    pri = arg_3;
    OP_JZER lab_6D58
    var_8 = 1;
    var_16 = 8;
    pri = fun_1458(var_8)
// lab_6D58
    pri = 0;
    return pri;
// lab_6CF0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0FB8(var_16, var_8)
// lab_6C20
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_13D0(var_16, var_8)
}
// fun_6D68
fun_6D68() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_6EE8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6E00
    var_8 = 1;
    var_16 = 0;
    var_24 = 23448;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_6EE8
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6E00
    pri = arg_0;
    OP_JNZ lab_6E48
    var_8 = 23496;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6E68
// lab_6E48
    var_8 = 23672;
    pri = SoundPostEvent(var_8)
// lab_6E68
    var_8 = 0;
    var_16 = 8;
    pri = fun_0570(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6EE8
    var_24 = 23936;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_6F28
fun_6F28() {
    var_16 = 136;
    var_24 = 135;
    var_32 = 16;
    pri = fun_69F8(var_24, var_16)
    var_8 = pri;
    var_48 = 78;
    var_56 = 77;
    var_64 = 16;
    pri = fun_69F8(var_56, var_48)
    var_16 = pri;
    pri = 23984;
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
    pri = 24048;
    OP_ADDR_ALT -144
    OP_MOVS 64
    var_208 = 52;
    var_216 = 51;
    var_224 = 16;
    pri = fun_69F8(var_216, var_208)
    var_152 = pri;
    var_240 = 49;
    var_248 = 48;
    var_256 = 16;
    pri = fun_69F8(var_248, var_240)
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
// fun_7170
fun_7170() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_67D0(var_24)
    pri = 0;
    return pri;
}
// fun_71D8
fun_71D8() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_7358(var_16)
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
    pri = fun_0680(var_80, var_72, var_64, var_56, var_48)
    var_96 = 24168;
    var_104 = 24112;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_14B8(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_72E0
fun_72E0() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_7358(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1508(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_7358
fun_7358() {
    pri = arg_0;
    OP_JNZ lab_73A0
    var_8 = 24224;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_73A0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_73E8
    var_8 = 24376;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_73E8
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 24528;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_7430
fun_7430() {
    pri = g_mode;
    switch (pri) {
// switch_74F0
        case default:
        {
// switch_74F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_7538
// lab_7538
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_74F0_case_0x0
            var_8 = 0;
            pri = fun_7548()
            OP_JUMP lab_7538
        }
        case 0x3013dc2aeb06d807:
        {
// switch_74F0_case_0x3013dc2aeb06d807
            var_8 = 0;
            pri = fun_9FA0()
            OP_JUMP lab_7538
        }
        case 0x5726aa278798f433:
        {
// switch_74F0_case_0x5726aa278798f433
            var_8 = 0;
            pri = fun_A090()
            OP_JUMP lab_7538
        }
    }
}
// fun_7548
fun_7548() {
    pri = 0;
    return pri;
}
// fun_7560
fun_7560() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6A50(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_75B8
fun_75B8() {
    pri = 0;
    return pri;
}
// fun_75D0
fun_75D0() {
    pri = 0;
    return pri;
}
// fun_75E8
fun_75E8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 23448;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_71D8(var_64, var_56)
    var_80 = 1;
    var_88 = -98310360955755334;
    var_96 = 16;
    pri = fun_71D8(var_88, var_80)
    pri = EvCameraStart()
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0728(var_112, var_104)
    var_128 = 1;
    var_136 = -98310360955755334;
    var_144 = 16;
    pri = fun_0728(var_136, var_128)
    var_152 = 1;
    var_160 = 3458049540832089695;
    var_168 = 16;
    pri = fun_0728(var_160, var_152)
    var_176 = 1;
    var_184 = 3458048441320461484;
    var_192 = 16;
    pri = fun_0728(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_216 = 48;
    pri = fun_06D0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, -98310360955755334
    var_248 = 48;
    pri = fun_06D0(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 2;
    var_264 = 2;
    var_272 = 8802641224559852288;
    var_280 = 24;
    pri = fun_1128(var_272, var_264, var_256)
    var_288 = 1;
    var_296 = 1;
    var_304 = -98310360955755334;
    var_312 = 24;
    pri = fun_1128(var_304, var_296, var_288)
    OP_CONST_S -8, 274
    var_328 = 24;
    var_336 = 0;
    var_344 = var_8;
    var_352 = 210;
    var_360 = 32;
    pri = fun_1FC8(var_352, var_344, var_336, var_328)
    var_368 = 0;
    var_376 = 60;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 24536;
    pri = SoundSetRTPC(var_392, var_384, var_376)
    var_400 = 15;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 0;
    var_424 = 4631952216750555136;
    var_432 = 0;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671211002349192479, 4654693239825985700
    var_440 = 4670926311300970578;
    var_448 = 1;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    pri = fun_22A0()
    var_464 = 0;
    var_472 = 4631952216750555136;
    var_480 = 2;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671487458055322337, 4654693019923660145
    var_488 = 4670935629662015980;
    var_496 = 1200;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 23936;
    var_512 = 8;
    var_520 = 16;
    pri = fun_0280(var_512, var_504)
    var_528 = 0;
    pri = fun_0350()
    var_536 = 0;
    var_544 = 3;
    var_552 = 0;
    var_560 = 101;
    var_568 = 0;
    var_576 = 1510653008321522302;
    var_584 = -1;
    var_592 = 56;
    pri = fun_1D90(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_1ED8(var_600)
    var_616 = 1;
    var_624 = 0;
    var_632 = 0;
    var_640 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_648 = 48;
    pri = fun_0818(var_640, var_632, var_624, var_616, var_608, var_600)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_656 = 16;
    pri = fun_2330(var_648, var_640)
    var_664 = 0;
    var_672 = 1;
    var_680 = 220;
    pri = float(var_680)
    var_688 = pri;
    var_696 = 4609434218613702656;
    var_704 = 32;
    pri = fun_2398(var_696, var_688, var_680, var_672)
    var_712 = 0;
    var_720 = 4630798169346041446;
    var_728 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_736 = 4671166637055011717;
    var_744 = 1;
    pri = EvCameraMove(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_752 = 0;
    pri = fun_22A0()
    var_760 = 0;
    var_768 = 4630798169346041446;
    var_776 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_784 = 4671174919126347940;
    var_792 = 90;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    var_808 = 60;
    var_816 = 100;
    pri = float(var_816)
    var_824 = pri;
    var_832 = 4609434218613702656;
    var_840 = 32;
    pri = fun_2398(var_832, var_824, var_816, var_808)
    var_848 = 15;
    var_856 = 8;
    pri = fun_0060(var_848)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 101;
    var_896 = 0;
    var_904 = 1510651908809894091;
    var_912 = -1;
    var_920 = 56;
    pri = fun_1D90(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_928 = 8802641224559852288;
    var_936 = 8;
    pri = fun_08C0(var_928)
    var_944 = 1;
    var_952 = 8;
    pri = fun_1ED8(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 0;
    var_984 = 75;
    OP_PUSH2_C 4607182418800017408, -98310360955755334
    var_992 = 48;
    pri = fun_0818(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 0;
    var_1008 = 1;
    var_1016 = 220;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = 4609434218613702656;
    var_1040 = 32;
    pri = fun_2398(var_1032, var_1024, var_1016, var_1008)
    var_1048 = 0;
    var_1056 = 4630798169346041446;
    var_1064 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_1072 = 4671252805781280522;
    var_1080 = 1;
    pri = EvCameraMove(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1088 = 0;
    pri = fun_22A0()
    var_1096 = 0;
    var_1104 = 4630798169346041446;
    var_1112 = 3;
    OP_PUSH5_C 4670052427705551421, 4641170522237829120, 4671391718080333742, 4670402297803067884, 4632852936676029235
    var_1120 = 4671208891286867149;
    var_1128 = 180;
    pri = EvCameraMove(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1136 = 0;
    var_1144 = 3;
    var_1152 = 0;
    var_1160 = 101;
    var_1168 = 0;
    var_1176 = 1510650809298265880;
    var_1184 = -1;
    var_1192 = 56;
    pri = fun_1D90(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = -98310360955755334;
    var_1208 = 8;
    pri = fun_08C0(var_1200)
    var_1216 = 1;
    var_1224 = 8;
    pri = fun_0060(var_1216)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_1ED8(var_1232)
    var_1248 = 0;
    pri = fun_1F98()
    var_1256 = 1;
    var_1264 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_1272 = 48;
    pri = fun_06D0(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1280 = 1;
    var_1288 = 1;
    var_1296 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, -98310360955755334
    var_1304 = 48;
    pri = fun_06D0(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1312 = 1;
    var_1320 = 8;
    pri = fun_0060(var_1312)
    var_1328 = 1;
    var_1336 = 0;
    var_1344 = 4641240890982006784;
    var_1352 = 0;
    var_1360 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1368 = 72;
    pri = fun_07A0(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 1;
    var_1384 = 0;
    var_1392 = 4641240890982006784;
    var_1400 = 0;
    var_1408 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, -98310360955755334
    var_1416 = 72;
    pri = fun_07A0(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1424 = 15;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = 0;
    var_1448 = 1;
    var_1456 = 700;
    pri = float(var_1456)
    var_1464 = pri;
    var_1472 = 4611686018427387904;
    var_1480 = 32;
    pri = fun_2398(var_1472, var_1464, var_1456, var_1448)
    var_1488 = 0;
    var_1496 = 4626857519672092262;
    var_1504 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1512 = 4671083459000370463;
    var_1520 = 1;
    pri = EvCameraMove(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1528 = 0;
    pri = fun_22A0()
    var_1536 = 0;
    var_1544 = 4626857519672092262;
    var_1552 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1560 = 4671072741510778716;
    var_1568 = 480;
    pri = EvCameraMove(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1576 = 8802641224559852288;
    var_1584 = 8;
    pri = fun_08C0(var_1576)
    var_1592 = -98310360955755334;
    var_1600 = 8;
    pri = fun_08C0(var_1592)
    var_1608 = 15;
    var_1616 = 8;
    pri = fun_0060(var_1608)
    var_1624 = 0;
    var_1632 = 30;
    pri = float(var_1632)
    var_1640 = pri;
    var_1648 = 24672;
    pri = SoundSetRTPC(var_1648, var_1640, var_1632)
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 0;
    var_1680 = 90;
    pri = float(var_1680)
    var_1688 = pri;
    var_1696 = 8802641224559852288;
    var_1704 = 40;
    pri = fun_0870(var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 0;
    var_1736 = 270;
    pri = float(var_1736)
    var_1744 = pri;
    var_1752 = -98310360955755334;
    var_1760 = 40;
    pri = fun_0870(var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1768 = 30;
    var_1776 = 8;
    pri = fun_0060(var_1768)
    var_1784 = 8802641224559852288;
    var_1792 = 8;
    pri = fun_08C0(var_1784)
    var_1800 = -98310360955755334;
    var_1808 = 8;
    pri = fun_08C0(var_1800)
    var_1816 = -98310360955755334;
    var_1824 = 8;
    pri = fun_0FF8(var_1816)
    var_1832 = 5;
    var_1840 = 6;
    var_1848 = -98310360955755334;
    var_1856 = 24;
    pri = fun_1128(var_1848, var_1840, var_1832)
    var_1864 = 1;
    var_1872 = 1;
    var_1880 = -1;
    var_1888 = -1;
    var_1896 = 0;
    var_1904 = 6;
    var_1912 = -98310360955755334;
    var_1920 = 56;
    pri = fun_2510(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1928 = 0;
    var_1936 = 3;
    var_1944 = 0;
    var_1952 = 100;
    var_1960 = -1;
    OP_PUSH2_C 8964890900174413938, -98310360955755334
    var_1968 = 56;
    pri = fun_1D90(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 1;
    var_1984 = 8;
    pri = fun_1ED8(var_1976)
    var_1992 = 2;
    var_2000 = 8;
    var_2008 = -98310360955755334;
    var_2016 = 24;
    pri = fun_1128(var_2008, var_2000, var_1992)
    var_2024 = 1;
    var_2032 = 3;
    var_2040 = 0;
    var_2048 = 6;
    var_2056 = -98310360955755334;
    var_2064 = 40;
    pri = fun_4848(var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2072 = 0;
    var_2080 = 3;
    var_2088 = 0;
    var_2096 = 100;
    var_2104 = -1;
    OP_PUSH2_C 8964889800662785727, -98310360955755334
    var_2112 = 56;
    pri = fun_1D90(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056)
    var_2120 = 1;
    var_2128 = 8;
    pri = fun_1ED8(var_2120)
    var_2136 = -98310360955755334;
    var_2144 = 8;
    pri = fun_0A60(var_2136)
    var_2152 = 2;
    var_2160 = -98310360955755334;
    var_2168 = 16;
    pri = fun_1038(var_2160, var_2152)
    var_2176 = 1;
    var_2184 = 1;
    var_2192 = -1;
    var_2200 = -1;
    var_2208 = 0;
    var_2216 = 8;
    var_2224 = -98310360955755334;
    var_2232 = 56;
    pri = fun_2510(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2240 = 0;
    var_2248 = 3;
    var_2256 = 0;
    var_2264 = 100;
    var_2272 = -1;
    OP_PUSH2_C 8964888701151157516, -98310360955755334
    var_2280 = 56;
    pri = fun_1D90(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2288 = 1;
    var_2296 = 8;
    pri = fun_1ED8(var_2288)
    var_2304 = 0;
    pri = fun_1F98()
    var_2312 = 1;
    var_2320 = 3;
    var_2328 = 0;
    var_2336 = 8;
    var_2344 = -98310360955755334;
    var_2352 = 40;
    pri = fun_4848(var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2360 = -98310360955755334;
    var_2368 = 8;
    pri = fun_0A60(var_2360)
    var_2376 = 0;
    var_2384 = 1;
    var_2392 = 200;
    pri = float(var_2392)
    var_2400 = pri;
    var_2408 = 4612811918334230528;
    var_2416 = 32;
    pri = fun_2398(var_2408, var_2400, var_2392, var_2384)
    var_2424 = 0;
    var_2432 = 4631952216750555136;
    var_2440 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_2448 = 4671031446602818519;
    var_2456 = 1;
    pri = EvCameraMove(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2464 = 0;
    pri = fun_22A0()
    var_2472 = 0;
    var_2480 = 4631952216750555136;
    var_2488 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_2496 = 4671018568572878193;
    var_2504 = 240;
    pri = EvCameraMove(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2512 = 0;
    var_2520 = 60;
    pri = float(var_2520)
    var_2528 = pri;
    var_2536 = 24808;
    pri = SoundSetRTPC(var_2536, var_2528, var_2520)
    var_2544 = 24944;
    pri = SoundPostEvent(var_2544)
    var_2552 = 30;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 0;
    var_2576 = 120;
    var_2584 = 850;
    pri = float(var_2584)
    var_2592 = pri;
    var_2600 = 4605380978949069210;
    var_2608 = 32;
    pri = fun_2398(var_2600, var_2592, var_2584, var_2576)
    var_2616 = 1;
    var_2624 = 0;
    var_2632 = 4641240890982006784;
    var_2640 = 0;
    var_2648 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2656 = 72;
    pri = fun_07A0(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2664 = 1;
    var_2672 = 0;
    var_2680 = 4641240890982006784;
    var_2688 = 0;
    var_2696 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -98310360955755334
    var_2704 = 72;
    pri = fun_07A0(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2712 = 8802641224559852288;
    var_2720 = 8;
    pri = fun_08C0(var_2712)
    var_2728 = -98310360955755334;
    var_2736 = 8;
    pri = fun_08C0(var_2728)
    var_2744 = 15;
    var_2752 = 8;
    pri = fun_0060(var_2744)
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = 90;
    pri = float(var_2784)
    var_2792 = pri;
    var_2800 = 8802641224559852288;
    var_2808 = 40;
    pri = fun_0870(var_2800, var_2792, var_2784, var_2776, var_2768)
    var_2816 = 0;
    var_2824 = 0;
    var_2832 = 0;
    var_2840 = 270;
    pri = float(var_2840)
    var_2848 = pri;
    var_2856 = -98310360955755334;
    var_2864 = 40;
    pri = fun_0870(var_2856, var_2848, var_2840, var_2832, var_2824)
    var_2872 = 30;
    var_2880 = 8;
    pri = fun_0060(var_2872)
    var_2888 = 8802641224559852288;
    var_2896 = 8;
    pri = fun_08C0(var_2888)
    var_2904 = -98310360955755334;
    var_2912 = 8;
    pri = fun_08C0(var_2904)
    var_2920 = 0;
    pri = fun_2028()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2928 = 3;
    var_2936 = 1;
    var_2944 = 32;
    pri = fun_23F0(var_2936, var_2928, var_2920, var_2912)
    var_2952 = 0;
    pri = fun_20B8()
    var_2960 = 0;
    pri = fun_2160()
    OP_JZER lab_8F90
    var_2968 = 0;
    pri = fun_2250()
// lab_8F90
    var_8 = 0;
    var_16 = 0;
    var_24 = 25192;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    var_48 = 90;
    pri = float(var_48)
    var_56 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_64 = 48;
    pri = fun_06D0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    var_88 = 270;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 4671226772094713856;
    var_112 = 20580;
    pri = float(var_112)
    var_120 = pri;
    var_128 = -98310360955755334;
    var_136 = 48;
    pri = fun_06D0(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_1190(var_144)
    var_160 = 5;
    var_168 = 1;
    var_176 = -98310360955755334;
    var_184 = 24;
    pri = fun_1128(var_176, var_168, var_160)
    var_192 = 15;
    var_200 = 8;
    pri = fun_0060(var_192)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_208 = 16;
    pri = fun_2330(var_200, var_192)
    var_216 = 0;
    var_224 = 1;
    var_232 = 250;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 4609434218613702656;
    var_256 = 32;
    pri = fun_2398(var_248, var_240, var_232, var_224)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = 0;
    var_296 = 0;
    var_304 = 20000;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 19850;
    pri = float(var_320)
    var_328 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_336 = 72;
    pri = fun_07A0(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 1;
    var_352 = 0;
    var_360 = 4641240890982006784;
    var_368 = 0;
    var_376 = 0;
    var_384 = 20000;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 20150;
    pri = float(var_400)
    var_408 = pri;
    OP_PUSH2_C 4607182418800017408, -98310360955755334
    var_416 = 72;
    pri = fun_07A0(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    var_432 = 4631952216750555136;
    var_440 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_448 = 4671115501517982925;
    var_456 = 1;
    pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 0;
    pri = fun_22A0()
    var_472 = 0;
    var_480 = 4631952216750555136;
    var_488 = 2;
    OP_PUSH5_C 4671260076301919191, 4633083746156931973, 4671169237400011407, 4671333688605398794, 4633439812002470953
    var_496 = 4671093984075427348;
    var_504 = 240;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    var_520 = 30;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 25344;
    pri = SoundSetRTPC(var_536, var_528, var_520)
    var_544 = 23936;
    var_552 = 8;
    var_560 = 16;
    pri = fun_0280(var_552, var_544)
    var_568 = 0;
    pri = fun_0350()
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 101;
    var_608 = 0;
    var_616 = 1510658505879663357;
    var_624 = -1;
    var_632 = 56;
    pri = fun_1D90(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 8802641224559852288;
    var_648 = 8;
    pri = fun_08C0(var_640)
    var_656 = -98310360955755334;
    var_664 = 8;
    pri = fun_08C0(var_656)
    var_672 = 15;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 1;
    var_696 = 8;
    pri = fun_1ED8(var_688)
    var_704 = 0;
    pri = fun_1F98()
    var_712 = 30;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 0;
    var_736 = 1;
    var_744 = 320;
    pri = float(var_744)
    var_752 = pri;
    var_760 = 4611686018427387904;
    var_768 = 32;
    pri = fun_2398(var_760, var_752, var_744, var_736)
    var_776 = 0;
    var_784 = 4629587826946185626;
    var_792 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_800 = 4671148720513037107;
    var_808 = 1;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 0;
    pri = fun_22A0()
    var_824 = 0;
    var_832 = 4629587826946185626;
    var_840 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_848 = 4671146447272746680;
    var_856 = 240;
    pri = EvCameraMove(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_864 = 0;
    var_872 = 3;
    var_880 = -98310360955755334;
    var_888 = 24;
    pri = fun_6578(var_880, var_872, var_864)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C 8964887601639529305, -98310360955755334
    var_936 = 56;
    pri = fun_1D90(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 1;
    var_952 = 8;
    pri = fun_1ED8(var_944)
    var_960 = 1;
    var_968 = 1;
    var_976 = -1;
    var_984 = -1;
    var_992 = 0;
    var_1000 = 1;
    var_1008 = -98310360955755334;
    var_1016 = 56;
    pri = fun_2510(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1024 = 0;
    var_1032 = 3;
    var_1040 = 0;
    var_1048 = 100;
    var_1056 = -1;
    OP_PUSH2_C 8964886502127901094, -98310360955755334
    var_1064 = 56;
    pri = fun_1D90(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1072 = 1;
    var_1080 = 8;
    pri = fun_1ED8(var_1072)
    var_1088 = 1;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 1;
    var_1120 = -98310360955755334;
    var_1128 = 40;
    pri = fun_4848(var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1136 = 5;
    var_1144 = -98310360955755334;
    var_1152 = 16;
    pri = fun_1038(var_1144, var_1136)
    var_1160 = 0;
    var_1168 = 3;
    var_1176 = 0;
    var_1184 = 100;
    var_1192 = -1;
    OP_PUSH2_C 8964885402616272883, -98310360955755334
    var_1200 = 56;
    pri = fun_1D90(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 1;
    var_1216 = 8;
    pri = fun_1ED8(var_1208)
    var_1224 = 0;
    pri = fun_1F98()
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 101;
    var_1264 = 0;
    var_1272 = 1510657406368035146;
    var_1280 = -1;
    var_1288 = 56;
    pri = fun_1D90(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 1;
    var_1304 = 8;
    pri = fun_1ED8(var_1296)
    var_1312 = 0;
    pri = fun_1F98()
    var_1320 = 1;
    var_1328 = 9027797789697785470;
    pri = WorkSet(var_1328, var_1320)
    var_1336 = 0;
    var_1344 = 9027796690186157259;
    pri = WorkSet(var_1344, var_1336)
    var_1352 = 1;
    var_1360 = 9027795590674529048;
    pri = WorkSet(var_1360, var_1352)
    var_1368 = 0;
    var_1376 = 9027803287255926525;
    pri = WorkSet(var_1376, var_1368)
    var_1384 = 1;
    var_1392 = 9027802187744298314;
    pri = WorkSet(var_1392, var_1384)
    var_1400 = 0;
    var_1408 = 9027801088232670103;
    pri = WorkSet(var_1408, var_1400)
    var_1416 = 0;
    var_1424 = 9027799988721041892;
    pri = WorkSet(var_1424, var_1416)
    var_1432 = 1;
    var_1440 = 9027790093116387993;
    pri = WorkSet(var_1440, var_1432)
    var_1448 = 1;
    var_1456 = 8;
    pri = fun_6F28(var_1448)
    var_1464 = 12;
    var_1472 = 8;
    pri = fun_0408(var_1464)
    var_1480 = 0;
    pri = fun_0440()
    var_1488 = 25480;
    pri = SoundPostEvent(var_1488)
    var_1496 = 1;
    var_1504 = 0;
    var_1512 = 25744;
    var_1520 = 8;
    var_1528 = 32;
    pri = fun_02E0(var_1520, var_1512, var_1504, var_1496)
    var_1536 = 0;
    pri = fun_0350()
    var_1544 = 0;
    var_1552 = 8802641224559852288;
    var_1560 = 16;
    pri = fun_72E0(var_1552, var_1544)
    var_1568 = 1;
    var_1576 = -98310360955755334;
    var_1584 = 16;
    pri = fun_72E0(var_1576, var_1568)
    pri = 0;
    return pri;
}
// fun_9D50
fun_9D50() {
    pri = 0;
    return pri;
}
// fun_9D68
fun_9D68() {
    var_8 = 1720;
    var_16 = 8;
    pri = fun_7170(var_8)
    OP_PUSH2_C 7412181012284178912, 4188046879888384287
    var_32 = 16;
    pri = fun_69F8(var_24, var_16)
    var_8 = pri;
    var_40 = var_8;
    pri = VanishFlagReset(var_40)
    var_48 = -98310360955755334;
    pri = VanishFlagSet(var_48)
    var_56 = -6558257827841193799;
    pri = FlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_9E58
fun_9E58() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_6D68(var_16, var_8)
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
    OP_PUSH2_C 9117463143071301695, -3308731028398755628
    var_104 = 72;
    pri = fun_04D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 25760;
    pri = SoundPostEvent(var_112)
    var_120 = 26032;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9FA0
fun_9FA0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7560()
    var_16 = 0;
    pri = fun_75B8()
    var_24 = 0;
    pri = fun_75D0()
    var_32 = 0;
    pri = fun_75E8()
    var_40 = 0;
    pri = fun_9D50()
    var_48 = 0;
    pri = fun_9D68()
    var_56 = 0;
    pri = fun_9E58()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A090
fun_A090() {
    var_8 = 0;
    pri = fun_75B8()
    var_16 = 0;
    pri = fun_9D68()
    pri = 0;
    return pri;
}
