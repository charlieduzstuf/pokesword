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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0708
// lab_0708
    var_8 = 0;
    pri = fun_0850()
    OP_JNZ lab_0740
    OP_JUMP lab_0770
// lab_0740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0708
// lab_0770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07A0
// lab_07A0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0850
fun_0850() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0998
fun_0998() {
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
// fun_0A10
fun_0A10() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1400(var_8)
    OP_JZER lab_0B30
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1430(var_24)
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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C20
fun_0C20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0CA0
    pri = 0;
    return pri;
// lab_0CA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0CE0
// lab_0CE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1400(var_8)
    OP_JNZ lab_0D68
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D58
    pri = 0;
    return pri;
// lab_0D68
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0DB0
    pri = 0;
    return pri;
// lab_0DB0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    pri = 0;
    return pri;
// lab_0E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CE0
    pri = 0;
    return pri;
// lab_0D58
    OP_JUMP lab_0DB0
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
    pri = fun_1400(var_8)
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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1290
fun_1290() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1250(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_12C8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1290(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1308(var_24)
    pri = 0;
    return pri;
}
// fun_1400
fun_1400() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1430
fun_1430() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1460
fun_1460() {
    OP_JUMP lab_1478
// lab_1478
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1508
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_14F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C58(var_8)
    pri = 0;
    return pri;
// lab_1508
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1598
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1588
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C58(var_8)
    pri = 0;
    return pri;
// lab_1598
    pri = 0;
    return pri;
// lab_1588
    OP_JUMP lab_15A8
// lab_15A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1478
    pri = 0;
    return pri;
// lab_14F8
    OP_JUMP lab_15A8
}
// fun_15E8
fun_15E8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1460(var_40)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1720
fun_1720() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1760
fun_1760() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1798
fun_1798() {
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
// switch_1DB0
        case default:
        {
// switch_1DB0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DF8
// lab_1DF8
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
            OP_JNZ lab_1EA0
            var_88 = 0;
            pri = fun_2058()
// lab_1EA0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1DB0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1998
                case default:
                {
// switch_1998_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A10
// lab_1A10
                    OP_JUMP lab_1DF8
                }
                case 0x0:
                {
// switch_1998_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A10
                }
                case 0x1:
                {
// switch_1998_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A10
                }
                case 0x2:
                {
// switch_1998_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A10
                }
                case 0x3:
                {
// switch_1998_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A10
                }
                case 0x4:
                {
// switch_1998_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A10
                }
                case 0x5:
                {
// switch_1998_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A10
                }
            }
        }
        case 0x65:
        {
// switch_1DB0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B50
                case default:
                {
// switch_1B50_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BC8
// lab_1BC8
                    OP_JUMP lab_1DF8
                }
                case 0x0:
                {
// switch_1B50_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BC8
                }
                case 0x1:
                {
// switch_1B50_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BC8
                }
                case 0x2:
                {
// switch_1B50_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BC8
                }
                case 0x3:
                {
// switch_1B50_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BC8
                }
                case 0x4:
                {
// switch_1B50_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BC8
                }
                case 0x5:
                {
// switch_1B50_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BC8
                }
            }
        }
        case 0x66:
        {
// switch_1DB0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D08
                case default:
                {
// switch_1D08_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D80
// lab_1D80
                    OP_JUMP lab_1DF8
                }
                case 0x0:
                {
// switch_1D08_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D80
                }
                case 0x1:
                {
// switch_1D08_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D80
                }
                case 0x2:
                {
// switch_1D08_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D80
                }
                case 0x3:
                {
// switch_1D08_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D80
                }
                case 0x4:
                {
// switch_1D08_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D80
                }
                case 0x5:
                {
// switch_1D08_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D80
                }
            }
        }
    }
}
// fun_1EB8
fun_1EB8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C20(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F60
    pri = 1;
    return pri;
// lab_1F60
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FA8
fun_1FA8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1FF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1EB8(var_8)
    arg_2 = pri;
// lab_1FF8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1798(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2058
fun_2058() {
    OP_JUMP lab_2070
// lab_2070
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20B0
    pri = 0;
    return pri;
// lab_20B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2070
    pri = 0;
    return pri;
}
// fun_20F0
fun_20F0() {
    var_8 = 0;
    pri = fun_2058()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_21A0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_21A0
    pri = 0;
    return pri;
}
// fun_21B0
fun_21B0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_21E0
fun_21E0() {
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
// fun_2240
fun_2240() {
    OP_JUMP lab_2258
// lab_2258
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2290
    pri = 0;
    return pri;
// lab_2290
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2258
    pri = 0;
    return pri;
}
// fun_22D0
fun_22D0() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2378
fun_2378() {
    var_8 = 0;
    pri = fun_2300()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_23F8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_23F8
    pri = 1;
    return pri;
// lab_23F8
    var_8 = 0;
    pri = fun_2300()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2438
    pri = 1;
    return pri;
// lab_2438
    var_8 = 0;
    pri = fun_2300()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2468
fun_2468() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_24B8
fun_24B8() {
    OP_JUMP lab_24D0
// lab_24D0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2508
    pri = 0;
    return pri;
// lab_2508
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24D0
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_25B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2688()
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2608
fun_2608() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_25B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2688()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
    OP_JUMP lab_26A0
// lab_26A0
    pri = IsEasingRunningDof_()
    OP_JZER lab_26F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2708
// lab_26F8
    pri = 0;
    return pri;
// lab_2708
    OP_JUMP lab_26A0
    pri = 0;
    return pri;
}
// fun_2728
fun_2728() {
    pri = arg_5;
    OP_JNZ lab_2760
    var_8 = 0;
    pri = fun_1130()
// lab_2760
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_27B0
    OP_CONST_S -8, -1
// lab_27B0
    pri = arg_1;
    switch (pri) {
// switch_4268
        case default:
        {
// switch_4268_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4710
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C20(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4710
            pri = 1;
            OP_JUMP lab_4718
// lab_4710
            pri = 0;
// lab_4718
            OP_JZER lab_4768
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_49C0
// lab_4768
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_47D0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_47D0
            pri = 1;
            OP_JUMP lab_47D8
// lab_47D0
            pri = 0;
// lab_47D8
            OP_JZER lab_4960
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C20(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_49C0
// lab_4960
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_49C0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4A30
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4A30
            var_8 = 0;
            pri = fun_1170()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4268_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x1:
        {
// switch_4268_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x2:
        {
// switch_4268_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x3:
        {
// switch_4268_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x4:
        {
// switch_4268_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x5:
        {
// switch_4268_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0BE0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E58(var_40)
            OP_JUMP switch_4268_case_default
        }
        case 0x6:
        {
// switch_4268_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x7:
        {
// switch_4268_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x8:
        {
// switch_4268_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x9:
        {
// switch_4268_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0xa:
        {
// switch_4268_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0xb:
        {
// switch_4268_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0xc:
        {
// switch_4268_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0xd:
        {
// switch_4268_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0xe:
        {
// switch_4268_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0xf:
        {
// switch_4268_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x10:
        {
// switch_4268_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x11:
        {
// switch_4268_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x12:
        {
// switch_4268_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x13:
        {
// switch_4268_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x14:
        {
// switch_4268_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x15:
        {
// switch_4268_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x16:
        {
// switch_4268_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x17:
        {
// switch_4268_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x18:
        {
// switch_4268_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x19:
        {
// switch_4268_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x1a:
        {
// switch_4268_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x1b:
        {
// switch_4268_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x1c:
        {
// switch_4268_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x1d:
        {
// switch_4268_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x1e:
        {
// switch_4268_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x1f:
        {
// switch_4268_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x20:
        {
// switch_4268_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x21:
        {
// switch_4268_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x22:
        {
// switch_4268_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x23:
        {
// switch_4268_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x24:
        {
// switch_4268_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x25:
        {
// switch_4268_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x26:
        {
// switch_4268_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x27:
        {
// switch_4268_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x28:
        {
// switch_4268_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x29:
        {
// switch_4268_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x2a:
        {
// switch_4268_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x2b:
        {
// switch_4268_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x2c:
        {
// switch_4268_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x2d:
        {
// switch_4268_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x2e:
        {
// switch_4268_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x2f:
        {
// switch_4268_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x30:
        {
// switch_4268_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x31:
        {
// switch_4268_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x32:
        {
// switch_4268_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x33:
        {
// switch_4268_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x34:
        {
// switch_4268_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x35:
        {
// switch_4268_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x36:
        {
// switch_4268_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x37:
        {
// switch_4268_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x38:
        {
// switch_4268_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E90(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4268_case_default
        }
        case 0x39:
        {
// switch_4268_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x3a:
        {
// switch_4268_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x3b:
        {
// switch_4268_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x3c:
        {
// switch_4268_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x3d:
        {
// switch_4268_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
        case 0x3e:
        {
// switch_4268_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0BE0(var_24, var_16, var_8)
            OP_JUMP switch_4268_case_default
        }
    }
}
// fun_4A60
fun_4A60() {
    pri = arg_4;
    OP_JNZ lab_4A98
    var_8 = 0;
    pri = fun_1130()
// lab_4A98
    pri = arg_1;
    switch (pri) {
// switch_5E70
        case default:
        {
// switch_5E70_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1400(var_264)
            OP_JZER lab_6438
            pri = arg_3;
            switch (pri) {
// switch_63E0
                case default:
                {
// switch_63E0_case_default
                    OP_JUMP lab_66F0
// lab_66F0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6760
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6760
                    var_8 = 0;
                    pri = fun_1170()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_63E0_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_63E0_case_default
                }
                case 0x2:
                {
// switch_63E0_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_63E0_case_default
                }
                case 0x3:
                {
// switch_63E0_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_63E0_case_default
                }
            }
// lab_6438
            pri = arg_1;
            OP_JZER lab_6488
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6488
            pri = 0;
            OP_JUMP lab_6490
// lab_6488
            pri = 1;
// lab_6490
            OP_JZER lab_64F8
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C20(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_64F8
            pri = 1;
            OP_JUMP lab_6500
// lab_64F8
            pri = 0;
// lab_6500
            OP_JZER lab_6550
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_66F0
// lab_6550
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_65B8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_66F0
// lab_65B8
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C20(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5E70_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1:
        {
// switch_5E70_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2:
        {
// switch_5E70_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x3:
        {
// switch_5E70_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x4:
        {
// switch_5E70_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x5:
        {
// switch_5E70_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0BE0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E58(var_40)
            OP_JUMP switch_5E70_case_default
        }
        case 0x6:
        {
// switch_5E70_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x7:
        {
// switch_5E70_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x8:
        {
// switch_5E70_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x9:
        {
// switch_5E70_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0xa:
        {
// switch_5E70_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0xb:
        {
// switch_5E70_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0xc:
        {
// switch_5E70_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0xd:
        {
// switch_5E70_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0xe:
        {
// switch_5E70_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0xf:
        {
// switch_5E70_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x10:
        {
// switch_5E70_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x11:
        {
// switch_5E70_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x12:
        {
// switch_5E70_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x13:
        {
// switch_5E70_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x14:
        {
// switch_5E70_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x15:
        {
// switch_5E70_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x16:
        {
// switch_5E70_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x17:
        {
// switch_5E70_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x18:
        {
// switch_5E70_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x19:
        {
// switch_5E70_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1a:
        {
// switch_5E70_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1b:
        {
// switch_5E70_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1c:
        {
// switch_5E70_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1d:
        {
// switch_5E70_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1e:
        {
// switch_5E70_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x1f:
        {
// switch_5E70_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x20:
        {
// switch_5E70_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x21:
        {
// switch_5E70_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x22:
        {
// switch_5E70_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x23:
        {
// switch_5E70_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x24:
        {
// switch_5E70_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x25:
        {
// switch_5E70_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x26:
        {
// switch_5E70_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x27:
        {
// switch_5E70_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x28:
        {
// switch_5E70_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x29:
        {
// switch_5E70_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2a:
        {
// switch_5E70_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2b:
        {
// switch_5E70_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2c:
        {
// switch_5E70_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2d:
        {
// switch_5E70_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2e:
        {
// switch_5E70_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x2f:
        {
// switch_5E70_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x30:
        {
// switch_5E70_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x31:
        {
// switch_5E70_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x32:
        {
// switch_5E70_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x33:
        {
// switch_5E70_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x34:
        {
// switch_5E70_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x35:
        {
// switch_5E70_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x36:
        {
// switch_5E70_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x37:
        {
// switch_5E70_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x38:
        {
// switch_5E70_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x39:
        {
// switch_5E70_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x3a:
        {
// switch_5E70_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x3b:
        {
// switch_5E70_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x3c:
        {
// switch_5E70_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x3d:
        {
// switch_5E70_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
        case 0x3e:
        {
// switch_5E70_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0BE0(var_24, var_16, var_8)
            OP_JUMP switch_5E70_case_default
        }
    }
}
// fun_6790
fun_6790() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6818
// lab_6818
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6998
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6988
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_68D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_68D8
    pri = 0;
    OP_JUMP lab_68E0
// lab_6998
    pri = 0;
    return pri;
// lab_6988
    OP_JUMP lab_6810
// lab_6810
    OP_INC_P_S -936
// lab_68D8
    pri = 1;
// lab_68E0
    OP_JZER lab_6958
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6950
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6958
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6950
}
// fun_69B8
fun_69B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6A50
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_16A8()
// lab_6A50
    pri = arg_4;
    OP_JZER lab_6A88
    var_8 = 1;
    var_16 = 8;
    pri = fun_1760(var_8)
// lab_6A88
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6AE0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6AE0
    pri = 0;
    OP_JUMP lab_6AE8
// lab_6AE0
    pri = 1;
// lab_6AE8
    OP_JZER lab_6BB0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6BB0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6B88
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_15E8(var_32, var_24)
    OP_JUMP lab_6BB0
// lab_6BB0
    pri = arg_2;
    OP_JZER lab_6C88
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6C58
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1210(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0960(var_40)
    OP_JUMP lab_6C88
// lab_6C88
    pri = arg_3;
    OP_JZER lab_6CC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1670(var_8)
// lab_6CC0
    pri = 0;
    return pri;
// lab_6C58
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1210(var_16, var_8)
// lab_6B88
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_15E8(var_16, var_8)
}
// fun_6CD0
fun_6CD0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_6E50
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6D68
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_6E50
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6D68
    pri = arg_0;
    OP_JNZ lab_6DB0
    var_8 = 23224;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6DD0
// lab_6DB0
    var_8 = 23400;
    pri = SoundPostEvent(var_8)
// lab_6DD0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0590(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6E50
    var_24 = 23664;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_6E90
fun_6E90() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6790(var_24)
    pri = 0;
    return pri;
}
// fun_6EF8
fun_6EF8() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_7078(var_16)
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
    pri = fun_0878(var_80, var_72, var_64, var_56, var_48)
    var_96 = 23768;
    var_104 = 23712;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_16D0(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_7000
fun_7000() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_7078(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1720(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_7078
fun_7078() {
    pri = arg_0;
    OP_JNZ lab_70C0
    var_8 = 23824;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_70C0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7108
    var_8 = 23976;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_7108
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 24128;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_7150
fun_7150() {
    pri = g_mode;
    switch (pri) {
// switch_7210
        case default:
        {
// switch_7210_case_default
            pri = CommandNOP()
            OP_JUMP lab_7258
// lab_7258
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7210_case_0x0
            var_8 = 0;
            pri = fun_7268()
            OP_JUMP lab_7258
        }
        case 0x1f9e0c2ae1f2f4da:
        {
// switch_7210_case_0x1f9e0c2ae1f2f4da
            var_8 = 0;
            pri = fun_9850()
            OP_JUMP lab_7258
        }
        case 0x46b0da277e851106:
        {
// switch_7210_case_0x46b0da277e851106
            var_8 = 0;
            pri = fun_9940()
            OP_JUMP lab_7258
        }
    }
}
// fun_7268
fun_7268() {
    pri = 0;
    return pri;
}
// fun_7280
fun_7280() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_69B8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_72D8
fun_72D8() {
    pri = 0;
    return pri;
}
// fun_72F0
fun_72F0() {
    pri = 0;
    return pri;
}
// fun_7308
fun_7308() {
    OP_CONST_S -8, 258
    var_16 = 20;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 145;
    var_48 = 32;
    pri = fun_21E0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_6EF8(var_64, var_56)
    var_80 = 1;
    var_88 = -8074183856950479541;
    var_96 = 16;
    pri = fun_6EF8(var_88, var_80)
    pri = EvCameraStart()
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0920(var_112, var_104)
    var_128 = 1;
    var_136 = -8074183856950479541;
    var_144 = 16;
    pri = fun_0920(var_136, var_128)
    var_152 = 1;
    var_160 = 3458049540832089695;
    var_168 = 16;
    pri = fun_0920(var_160, var_152)
    var_176 = 1;
    var_184 = 3458048441320461484;
    var_192 = 16;
    pri = fun_0920(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_216 = 48;
    pri = fun_08C8(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, -8074183856950479541
    var_248 = 48;
    pri = fun_08C8(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 2;
    var_264 = 2;
    var_272 = 8802641224559852288;
    var_280 = 24;
    pri = fun_1340(var_272, var_264, var_256)
    var_288 = 1;
    var_296 = 1;
    var_304 = -8074183856950479541;
    var_312 = 24;
    pri = fun_1340(var_304, var_296, var_288)
    var_320 = 0;
    var_328 = 60;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 24136;
    pri = SoundSetRTPC(var_344, var_336, var_328)
    var_352 = 15;
    var_360 = 8;
    pri = fun_0060(var_352)
    var_368 = 1;
    var_376 = 0;
    var_384 = 0;
    var_392 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_400 = 48;
    pri = fun_0A10(var_392, var_384, var_376, var_368, var_360, var_352)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_408 = 16;
    pri = fun_2548(var_400, var_392)
    var_416 = 0;
    var_424 = 1;
    var_432 = 220;
    pri = float(var_432)
    var_440 = pri;
    var_448 = 4609434218613702656;
    var_456 = 32;
    pri = fun_25B0(var_448, var_440, var_432, var_424)
    var_464 = 0;
    var_472 = 4630798169346041446;
    var_480 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_488 = 4671166637055011717;
    var_496 = 1;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 0;
    pri = fun_24B8()
    var_512 = 0;
    var_520 = 4630798169346041446;
    var_528 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_536 = 4671174919126347940;
    var_544 = 90;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 0;
    var_560 = 60;
    var_568 = 100;
    pri = float(var_568)
    var_576 = pri;
    var_584 = 4609434218613702656;
    var_592 = 32;
    pri = fun_25B0(var_584, var_576, var_568, var_560)
    var_600 = 23664;
    var_608 = 8;
    var_616 = 16;
    pri = fun_0280(var_608, var_600)
    var_624 = 0;
    pri = fun_0350()
    var_632 = 8802641224559852288;
    var_640 = 8;
    pri = fun_0AB8(var_632)
    var_648 = 1;
    var_656 = 0;
    var_664 = 0;
    var_672 = 75;
    OP_PUSH2_C 4607182418800017408, -8074183856950479541
    var_680 = 48;
    pri = fun_0A10(var_672, var_664, var_656, var_648, var_640, var_632)
    var_688 = 0;
    var_696 = 1;
    var_704 = 220;
    pri = float(var_704)
    var_712 = pri;
    var_720 = 4609434218613702656;
    var_728 = 32;
    pri = fun_25B0(var_720, var_712, var_704, var_696)
    var_736 = 0;
    var_744 = 4630798169346041446;
    var_752 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_760 = 4671252805781280522;
    var_768 = 1;
    pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 0;
    pri = fun_24B8()
    var_784 = 0;
    var_792 = 4630798169346041446;
    var_800 = 3;
    OP_PUSH5_C 4670052427705551421, 4641170522237829120, 4671391718080333742, 4670402297803067884, 4632852936676029235
    var_808 = 4671208891286867149;
    var_816 = 180;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = -8074183856950479541;
    var_832 = 8;
    pri = fun_0AB8(var_824)
    var_840 = 1;
    var_848 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_856 = 48;
    pri = fun_08C8(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 1;
    var_872 = 1;
    var_880 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, -8074183856950479541
    var_888 = 48;
    pri = fun_08C8(var_880, var_872, var_864, var_856, var_848, var_840)
    var_896 = 1;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 1;
    var_920 = 0;
    var_928 = 4641240890982006784;
    var_936 = 0;
    var_944 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_952 = 72;
    pri = fun_0998(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_960 = 1;
    var_968 = 0;
    var_976 = 4641240890982006784;
    var_984 = 0;
    var_992 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, -8074183856950479541
    var_1000 = 72;
    pri = fun_0998(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 15;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 0;
    var_1032 = 1;
    var_1040 = 700;
    pri = float(var_1040)
    var_1048 = pri;
    var_1056 = 4611686018427387904;
    var_1064 = 32;
    pri = fun_25B0(var_1056, var_1048, var_1040, var_1032)
    var_1072 = 0;
    var_1080 = 4626857519672092262;
    var_1088 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1096 = 4671083459000370463;
    var_1104 = 1;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_24B8()
    var_1120 = 0;
    var_1128 = 4626857519672092262;
    var_1136 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1144 = 4671072741510778716;
    var_1152 = 480;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 8802641224559852288;
    var_1168 = 8;
    pri = fun_0AB8(var_1160)
    var_1176 = -8074183856950479541;
    var_1184 = 8;
    pri = fun_0AB8(var_1176)
    var_1192 = 15;
    var_1200 = 8;
    pri = fun_0060(var_1192)
    var_1208 = 0;
    var_1216 = 30;
    pri = float(var_1216)
    var_1224 = pri;
    var_1232 = 24272;
    pri = SoundSetRTPC(var_1232, var_1224, var_1216)
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 90;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 8802641224559852288;
    var_1288 = 40;
    pri = fun_0A68(var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 0;
    var_1320 = 270;
    pri = float(var_1320)
    var_1328 = pri;
    var_1336 = -8074183856950479541;
    var_1344 = 40;
    pri = fun_0A68(var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1352 = 30;
    var_1360 = 8;
    pri = fun_0060(var_1352)
    var_1368 = 8802641224559852288;
    var_1376 = 8;
    pri = fun_0AB8(var_1368)
    var_1384 = -8074183856950479541;
    var_1392 = 8;
    pri = fun_0AB8(var_1384)
    var_1400 = 0;
    var_1408 = 3;
    var_1416 = 0;
    var_1424 = 100;
    var_1432 = -1;
    OP_PUSH2_C -2381589023777241275, -8074183856950479541
    var_1440 = 56;
    pri = fun_1FA8(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = 1;
    var_1456 = 8;
    pri = fun_20F0(var_1448)
    var_1464 = 1;
    var_1472 = 0;
    var_1480 = 15;
    var_1488 = 20;
    pri = float(var_1488)
    var_1496 = pri;
    var_1504 = 0;
    pri = float(var_1504)
    var_1512 = pri;
    var_1520 = -8074183856950479541;
    var_1528 = 48;
    pri = fun_11B0(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1536 = 8;
    var_1544 = -8074183856950479541;
    var_1552 = 16;
    pri = fun_1250(var_1544, var_1536)
    var_1560 = 0;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 100;
    var_1592 = -1;
    OP_PUSH2_C -2381592322312125908, -8074183856950479541
    var_1600 = 56;
    pri = fun_1FA8(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1608 = 1;
    var_1616 = 8;
    pri = fun_20F0(var_1608)
    var_1624 = 0;
    pri = fun_21B0()
    var_1632 = 5;
    var_1640 = -8074183856950479541;
    var_1648 = 16;
    pri = fun_1210(var_1640, var_1632)
    var_1656 = -8074183856950479541;
    var_1664 = 8;
    pri = fun_1290(var_1656)
    var_1672 = 5;
    var_1680 = -8074183856950479541;
    var_1688 = 16;
    pri = fun_12C8(var_1680, var_1672)
    var_1696 = 0;
    var_1704 = 3;
    var_1712 = 0;
    var_1720 = 100;
    var_1728 = -1;
    OP_PUSH2_C -2381591222800497697, -8074183856950479541
    var_1736 = 56;
    pri = fun_1FA8(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1744 = 1;
    var_1752 = 8;
    pri = fun_20F0(var_1744)
    var_1760 = 0;
    pri = fun_21B0()
    var_1768 = 1;
    var_1776 = 1;
    var_1784 = -1;
    var_1792 = -1;
    var_1800 = 0;
    var_1808 = 6;
    var_1816 = -8074183856950479541;
    var_1824 = 56;
    pri = fun_2728(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1832 = 0;
    var_1840 = 3;
    var_1848 = 0;
    var_1856 = 100;
    var_1864 = -1;
    OP_PUSH2_C -2381594521335382330, -8074183856950479541
    var_1872 = 56;
    pri = fun_1FA8(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1880 = 30;
    var_1888 = 8;
    pri = fun_0060(var_1880)
    var_1896 = 1;
    var_1904 = 3;
    var_1912 = 0;
    var_1920 = 6;
    var_1928 = -8074183856950479541;
    var_1936 = 40;
    pri = fun_4A60(var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1944 = -8074183856950479541;
    var_1952 = 8;
    pri = fun_0C58(var_1944)
    var_1960 = 1;
    var_1968 = 8;
    pri = fun_20F0(var_1960)
    var_1976 = 0;
    pri = fun_21B0()
    var_1984 = 0;
    var_1992 = 1;
    var_2000 = 200;
    pri = float(var_2000)
    var_2008 = pri;
    var_2016 = 4612811918334230528;
    var_2024 = 32;
    pri = fun_25B0(var_2016, var_2008, var_2000, var_1992)
    var_2032 = 0;
    var_2040 = 4631952216750555136;
    var_2048 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_2056 = 4671031446602818519;
    var_2064 = 1;
    pri = EvCameraMove(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 0;
    pri = fun_24B8()
    var_2080 = 0;
    var_2088 = 4631952216750555136;
    var_2096 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_2104 = 4671018568572878193;
    var_2112 = 240;
    pri = EvCameraMove(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2120 = 0;
    var_2128 = 60;
    pri = float(var_2128)
    var_2136 = pri;
    var_2144 = 24408;
    pri = SoundSetRTPC(var_2144, var_2136, var_2128)
    var_2152 = 24544;
    pri = SoundPostEvent(var_2152)
    var_2160 = 30;
    var_2168 = 8;
    pri = fun_0060(var_2160)
    var_2176 = 0;
    var_2184 = 120;
    var_2192 = 850;
    pri = float(var_2192)
    var_2200 = pri;
    var_2208 = 4605380978949069210;
    var_2216 = 32;
    pri = fun_25B0(var_2208, var_2200, var_2192, var_2184)
    var_2224 = 1;
    var_2232 = 0;
    var_2240 = 4641240890982006784;
    var_2248 = 0;
    var_2256 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2264 = 72;
    pri = fun_0998(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2272 = 1;
    var_2280 = 0;
    var_2288 = 4641240890982006784;
    var_2296 = 0;
    var_2304 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -8074183856950479541
    var_2312 = 72;
    pri = fun_0998(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2320 = 8802641224559852288;
    var_2328 = 8;
    pri = fun_0AB8(var_2320)
    var_2336 = -8074183856950479541;
    var_2344 = 8;
    pri = fun_0AB8(var_2336)
    var_2352 = 15;
    var_2360 = 8;
    pri = fun_0060(var_2352)
    var_2368 = 0;
    var_2376 = 0;
    var_2384 = 0;
    var_2392 = 90;
    pri = float(var_2392)
    var_2400 = pri;
    var_2408 = 8802641224559852288;
    var_2416 = 40;
    pri = fun_0A68(var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2424 = 0;
    var_2432 = 0;
    var_2440 = 0;
    var_2448 = 270;
    pri = float(var_2448)
    var_2456 = pri;
    var_2464 = -8074183856950479541;
    var_2472 = 40;
    pri = fun_0A68(var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2480 = 30;
    var_2488 = 8;
    pri = fun_0060(var_2480)
    var_2496 = 8802641224559852288;
    var_2504 = 8;
    pri = fun_0AB8(var_2496)
    var_2512 = -8074183856950479541;
    var_2520 = 8;
    pri = fun_0AB8(var_2512)
    var_2528 = 0;
    pri = fun_2240()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2536 = 3;
    var_2544 = 1;
    var_2552 = 32;
    pri = fun_2608(var_2544, var_2536, var_2528, var_2520)
    var_2560 = 0;
    pri = fun_22D0()
    var_2568 = 0;
    pri = fun_2378()
    OP_JZER lab_8A08
    var_2576 = 0;
    pri = fun_2468()
// lab_8A08
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_40 = 48;
    pri = fun_08C8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = 270;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 4671226772094713856;
    var_88 = 20580;
    pri = float(var_88)
    var_96 = pri;
    var_104 = -8074183856950479541;
    var_112 = 48;
    pri = fun_08C8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 8802641224559852288;
    var_128 = 8;
    pri = fun_13A8(var_120)
    var_136 = 1;
    var_144 = 1;
    var_152 = -8074183856950479541;
    var_160 = 24;
    pri = fun_1340(var_152, var_144, var_136)
    var_168 = 15;
    var_176 = 8;
    pri = fun_0060(var_168)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_184 = 16;
    pri = fun_2548(var_176, var_168)
    var_192 = 0;
    var_200 = 1;
    var_208 = 250;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 4609434218613702656;
    var_232 = 32;
    pri = fun_25B0(var_224, var_216, var_208, var_200)
    var_240 = 1;
    var_248 = 0;
    var_256 = 4641240890982006784;
    var_264 = 0;
    var_272 = 0;
    var_280 = 20000;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 19850;
    pri = float(var_296)
    var_304 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_312 = 72;
    pri = fun_0998(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 1;
    var_328 = 0;
    var_336 = 4641240890982006784;
    var_344 = 0;
    var_352 = 0;
    var_360 = 20000;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 20150;
    pri = float(var_376)
    var_384 = pri;
    OP_PUSH2_C 4607182418800017408, -8074183856950479541
    var_392 = 72;
    pri = fun_0998(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 0;
    var_408 = 4631952216750555136;
    var_416 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_424 = 4671115501517982925;
    var_432 = 1;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 0;
    pri = fun_24B8()
    var_448 = 0;
    var_456 = 4631952216750555136;
    var_464 = 2;
    OP_PUSH5_C 4671260076301919191, 4633083746156931973, 4671169237400011407, 4671333688605398794, 4633439812002470953
    var_472 = 4671093984075427348;
    var_480 = 240;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 0;
    var_496 = 30;
    pri = float(var_496)
    var_504 = pri;
    var_512 = 24792;
    pri = SoundSetRTPC(var_512, var_504, var_496)
    var_520 = 23664;
    var_528 = 8;
    var_536 = 16;
    pri = fun_0280(var_528, var_520)
    var_544 = 0;
    pri = fun_0350()
    var_552 = 8802641224559852288;
    var_560 = 8;
    pri = fun_0AB8(var_552)
    var_568 = -8074183856950479541;
    var_576 = 8;
    pri = fun_0AB8(var_568)
    var_584 = 5;
    var_592 = 5;
    var_600 = -8074183856950479541;
    var_608 = 24;
    pri = fun_1340(var_600, var_592, var_584)
    var_616 = 30;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 0;
    var_640 = 1;
    var_648 = 320;
    pri = float(var_648)
    var_656 = pri;
    var_664 = 4611686018427387904;
    var_672 = 32;
    pri = fun_25B0(var_664, var_656, var_648, var_640)
    var_680 = 0;
    var_688 = 4629587826946185626;
    var_696 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_704 = 4671148720513037107;
    var_712 = 1;
    pri = EvCameraMove(var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = 0;
    pri = fun_24B8()
    var_728 = 0;
    var_736 = 4629587826946185626;
    var_744 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_752 = 4671146447272746680;
    var_760 = 240;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 1;
    var_776 = 1;
    var_784 = -1;
    var_792 = -1;
    var_800 = 0;
    var_808 = 8;
    var_816 = -8074183856950479541;
    var_824 = 56;
    pri = fun_2728(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C -2381593421823754119, -8074183856950479541
    var_872 = 56;
    pri = fun_1FA8(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 1;
    var_888 = 8;
    pri = fun_20F0(var_880)
    var_896 = 1;
    var_904 = 3;
    var_912 = 0;
    var_920 = 8;
    var_928 = -8074183856950479541;
    var_936 = 40;
    pri = fun_4A60(var_928, var_920, var_912, var_904, var_896)
    var_944 = 9;
    var_952 = -8074183856950479541;
    var_960 = 16;
    pri = fun_1250(var_952, var_944)
    var_968 = 0;
    var_976 = 3;
    var_984 = 0;
    var_992 = 100;
    var_1000 = -1;
    OP_PUSH2_C -2381596720358638752, -8074183856950479541
    var_1008 = 56;
    pri = fun_1FA8(var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_20F0(var_1016)
    var_1032 = 0;
    pri = fun_21B0()
    var_1040 = 5;
    var_1048 = -8074183856950479541;
    var_1056 = 16;
    pri = fun_1250(var_1048, var_1040)
    var_1064 = 1;
    var_1072 = 1;
    var_1080 = -1;
    var_1088 = -1;
    var_1096 = 0;
    var_1104 = 1;
    var_1112 = -8074183856950479541;
    var_1120 = 56;
    pri = fun_2728(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1128 = 0;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 100;
    var_1160 = -1;
    OP_PUSH2_C -2381595620847010541, -8074183856950479541
    var_1168 = 56;
    pri = fun_1FA8(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 1;
    var_1184 = 8;
    pri = fun_20F0(var_1176)
    var_1192 = 0;
    pri = fun_21B0()
    var_1200 = 1;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 1;
    var_1232 = -8074183856950479541;
    var_1240 = 40;
    pri = fun_4A60(var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1248 = 0;
    var_1256 = 3;
    var_1264 = 0;
    var_1272 = 100;
    var_1280 = -1;
    OP_PUSH2_C -2381581327195843798, -8074183856950479541
    var_1288 = 56;
    pri = fun_1FA8(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1296 = 1;
    var_1304 = 8;
    pri = fun_20F0(var_1296)
    var_1312 = 0;
    pri = fun_21B0()
    var_1320 = 12;
    var_1328 = 8;
    pri = fun_0408(var_1320)
    var_1336 = 0;
    pri = fun_0440()
    var_1344 = 24928;
    pri = SoundPostEvent(var_1344)
    var_1352 = 1;
    var_1360 = 0;
    var_1368 = 25192;
    var_1376 = 8;
    var_1384 = 32;
    pri = fun_02E0(var_1376, var_1368, var_1360, var_1352)
    var_1392 = 0;
    pri = fun_0350()
    var_1400 = 0;
    var_1408 = 8802641224559852288;
    var_1416 = 16;
    pri = fun_7000(var_1408, var_1400)
    var_1424 = 1;
    var_1432 = -8074183856950479541;
    var_1440 = 16;
    pri = fun_7000(var_1432, var_1424)
    pri = 0;
    return pri;
}
// fun_9630
fun_9630() {
    pri = 0;
    return pri;
}
// fun_9648
fun_9648() {
    var_8 = -8074183856950479541;
    var_16 = 8;
    pri = fun_0820(var_8)
    var_24 = -8399045066815602958;
    var_32 = 8;
    pri = fun_06A0(var_24)
    var_40 = 1530;
    var_48 = 8;
    pri = fun_6E90(var_40)
    var_56 = 1157467776379281293;
    pri = VanishFlagReset(var_56)
    var_64 = -1103613497924482127;
    pri = VanishFlagReset(var_64)
    var_72 = -6559218801004060988;
    pri = FlagSet(var_72)
    pri = 0;
    return pri;
}
// fun_9748
fun_9748() {
    var_8 = 0;
    pri = fun_06D0()
    var_16 = 0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_6CD0(var_24, var_16)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2275;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 1719;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH3_C 9117463143071301695, -3308731028398755628, 2279228414931359747
    var_112 = 80;
    pri = fun_04D0(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_9850
fun_9850() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7280()
    var_16 = 0;
    pri = fun_72D8()
    var_24 = 0;
    pri = fun_72F0()
    var_32 = 0;
    pri = fun_7308()
    var_40 = 0;
    pri = fun_9630()
    var_48 = 0;
    pri = fun_9648()
    var_56 = 0;
    pri = fun_9748()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9940
fun_9940() {
    var_8 = 0;
    pri = fun_72D8()
    var_16 = 0;
    pri = fun_9648()
    pri = 0;
    return pri;
}
