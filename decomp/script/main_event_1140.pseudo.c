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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0468
fun_0468() {
    OP_JUMP lab_0480
// lab_0480
    pri = IsLoadedLogoFade_()
    OP_JZER lab_04B8
    pri = 0;
    return pri;
// lab_04B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
    pri = 0;
    return pri;
}
// fun_04F8
fun_04F8() {
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
// fun_0598
fun_0598() {
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
// fun_0658
fun_0658() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_06A0
// lab_06A0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06E0
    OP_JUMP lab_0750
// lab_06E0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0720
    OP_JUMP lab_0750
// lab_0720
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06A0
// lab_0750
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07B8
fun_07B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0850
fun_0850() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08C8
fun_08C8() {
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
// fun_0940
fun_0940() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    OP_JZER lab_0A60
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1338(var_24)
    OP_JNZ lab_0A60
    pri = 0;
    return pri;
// lab_0A60
    OP_JUMP lab_0A70
// lab_0A70
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AD0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A70
    pri = 0;
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B48
fun_0B48() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B88
fun_0B88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BC0
fun_0BC0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C08
    pri = 0;
    return pri;
// lab_0C08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C48
// lab_0C48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    OP_JNZ lab_0CD0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CC0
    pri = 0;
    return pri;
// lab_0CD0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D18
    pri = 0;
    return pri;
// lab_0D18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DC0(var_8)
    pri = 0;
    return pri;
// lab_0D78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C48
    pri = 0;
    return pri;
// lab_0CC0
    OP_JUMP lab_0D18
}
// fun_0DC0
fun_0DC0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DF8
fun_0DF8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E48
    pri = 0;
    return pri;
// lab_0E48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1308(var_8)
    OP_JZER lab_0F78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA0
    OP_ZERO_P_S 64
// lab_0F78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FB0
    OP_CONST_S 64, 1
// lab_0FB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE8
    OP_CONST_S 72, 1
// lab_0FE8
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
// lab_0EA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC8
    OP_ZERO_P_S 72
// lab_0EC8
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
    OP_JUMP lab_1088
// lab_1088
    pri = 0;
    return pri;
}
// fun_1098
fun_1098() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10D8
fun_10D8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1158(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11D0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1198(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1210(var_24)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1368
fun_1368() {
    OP_JUMP lab_1380
// lab_1380
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1410
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1400
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC0(var_8)
    pri = 0;
    return pri;
// lab_1410
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1490
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC0(var_8)
    pri = 0;
    return pri;
// lab_14A0
    pri = 0;
    return pri;
// lab_1490
    OP_JUMP lab_14B0
// lab_14B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1380
    pri = 0;
    return pri;
// lab_1400
    OP_JUMP lab_14B0
}
// fun_14F0
fun_14F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1368(var_40)
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_15D8
fun_15D8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1658
fun_1658() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1698
fun_1698() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
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
// switch_1CE8
        case default:
        {
// switch_1CE8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1D30
// lab_1D30
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
            OP_JNZ lab_1DD8
            var_88 = 0;
            pri = fun_2170()
// lab_1DD8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1CE8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_18D0
                case default:
                {
// switch_18D0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1948
// lab_1948
                    OP_JUMP lab_1D30
                }
                case 0x0:
                {
// switch_18D0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1948
                }
                case 0x1:
                {
// switch_18D0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1948
                }
                case 0x2:
                {
// switch_18D0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1948
                }
                case 0x3:
                {
// switch_18D0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1948
                }
                case 0x4:
                {
// switch_18D0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1948
                }
                case 0x5:
                {
// switch_18D0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1948
                }
            }
        }
        case 0x65:
        {
// switch_1CE8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A88
                case default:
                {
// switch_1A88_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B00
// lab_1B00
                    OP_JUMP lab_1D30
                }
                case 0x0:
                {
// switch_1A88_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1B00
                }
                case 0x1:
                {
// switch_1A88_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1B00
                }
                case 0x2:
                {
// switch_1A88_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1B00
                }
                case 0x3:
                {
// switch_1A88_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B00
                }
                case 0x4:
                {
// switch_1A88_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1B00
                }
                case 0x5:
                {
// switch_1A88_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1B00
                }
            }
        }
        case 0x66:
        {
// switch_1CE8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1C40
                case default:
                {
// switch_1C40_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1CB8
// lab_1CB8
                    OP_JUMP lab_1D30
                }
                case 0x0:
                {
// switch_1C40_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1CB8
                }
                case 0x1:
                {
// switch_1C40_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1CB8
                }
                case 0x2:
                {
// switch_1C40_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1CB8
                }
                case 0x3:
                {
// switch_1C40_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1CB8
                }
                case 0x4:
                {
// switch_1C40_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1CB8
                }
                case 0x5:
                {
// switch_1C40_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1CB8
                }
            }
        }
    }
}
// fun_1DF0
fun_1DF0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_16D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E58
fun_1E58() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B88(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F00
    pri = 1;
    return pri;
// lab_1F00
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1F48
fun_1F48() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E58(var_8)
    arg_2 = pri;
// lab_1F98
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_16D0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2048
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E58(var_8)
    arg_2 = pri;
// lab_2048
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
    pri = fun_1F48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1DF0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2110
fun_2110() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_20C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2170
fun_2170() {
    OP_JUMP lab_2188
// lab_2188
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21C8
    pri = 0;
    return pri;
// lab_21C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2188
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    var_8 = 0;
    pri = fun_2170()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_22B8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_22B8
    pri = 0;
    return pri;
}
// fun_22C8
fun_22C8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22F8
fun_22F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2370()
    return pri;
}
// fun_2370
fun_2370() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_23B0
fun_23B0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_23E8
fun_23E8() {
    OP_JUMP lab_2400
// lab_2400
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2448
    OP_JUMP lab_2478
    OP_JUMP lab_2468
// lab_2448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2478
    pri = 0;
    return pri;
// lab_2468
    OP_JUMP lab_2400
}
// fun_2488
fun_2488() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_24B8
fun_24B8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2508
fun_2508() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2558
fun_2558() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25A8
fun_25A8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25F8
fun_25F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2648
fun_2648() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2688
fun_2688() {
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
// fun_26E8
fun_26E8() {
    OP_JUMP lab_2700
// lab_2700
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2738
    pri = 0;
    return pri;
// lab_2738
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2700
    pri = 0;
    return pri;
}
// fun_2778
fun_2778() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_27A8
fun_27A8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2820
fun_2820() {
    var_8 = 0;
    pri = fun_27A8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_28A0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_28A0
    pri = 1;
    return pri;
// lab_28A0
    var_8 = 0;
    pri = fun_27A8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_28E0
    pri = 1;
    return pri;
// lab_28E0
    var_8 = 0;
    pri = fun_27A8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2910
fun_2910() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2960
fun_2960() {
    OP_JUMP lab_2978
// lab_2978
    pri = EvCameraMoveWait_()
    OP_JZER lab_29B0
    pri = 0;
    return pri;
// lab_29B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2978
    pri = 0;
    return pri;
}
// fun_29F0
fun_29F0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2A58(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2B30()
    pri = 0;
    return pri;
}
// fun_2A58
fun_2A58() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AB0
fun_2AB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2A58(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2B30()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2B30
fun_2B30() {
    OP_JUMP lab_2B48
// lab_2B48
    pri = IsEasingRunningDof_()
    OP_JZER lab_2BA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2BB0
// lab_2BA0
    pri = 0;
    return pri;
// lab_2BB0
    OP_JUMP lab_2B48
    pri = 0;
    return pri;
}
// fun_2BD0
fun_2BD0() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_2C08
fun_2C08() {
    pri = arg_6;
    OP_JNZ lab_2C40
    var_8 = 0;
    pri = fun_1098()
// lab_2C40
    pri = arg_1;
    switch (pri) {
// switch_41A8
        case default:
        {
// switch_41A8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_44F8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_44F8
            pri = 1;
            OP_JUMP lab_4500
// lab_44F8
            pri = 0;
// lab_4500
            OP_JZER lab_4658
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B88(var_24, var_16)
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
            OP_JUMP lab_46B8
// lab_4658
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
// lab_46B8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4718
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4778
// lab_4718
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4778
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4778
            pri = arg_2;
            OP_JZER lab_47B8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_47B8
            var_8 = 0;
            pri = fun_10D8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_41A8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1:
        {
// switch_41A8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x2:
        {
// switch_41A8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x3:
        {
// switch_41A8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x4:
        {
// switch_41A8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x5:
        {
// switch_41A8_case_0x5
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x6:
        {
// switch_41A8_case_0x6
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x7:
        {
// switch_41A8_case_0x7
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x8:
        {
// switch_41A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x9:
        {
// switch_41A8_case_0x9
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xa:
        {
// switch_41A8_case_0xa
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xb:
        {
// switch_41A8_case_0xb
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xc:
        {
// switch_41A8_case_0xc
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xd:
        {
// switch_41A8_case_0xd
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xe:
        {
// switch_41A8_case_0xe
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0xf:
        {
// switch_41A8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x10:
        {
// switch_41A8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x11:
        {
// switch_41A8_case_0x11
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x12:
        {
// switch_41A8_case_0x12
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x13:
        {
// switch_41A8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x14:
        {
// switch_41A8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x15:
        {
// switch_41A8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x16:
        {
// switch_41A8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x17:
        {
// switch_41A8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x18:
        {
// switch_41A8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x19:
        {
// switch_41A8_case_0x19
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1a:
        {
// switch_41A8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B10(var_48, var_40)
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
            pri = fun_0DF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1b:
        {
// switch_41A8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B10(var_48, var_40)
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
            pri = fun_0DF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1c:
        {
// switch_41A8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B10(var_48, var_40)
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
            pri = fun_0DF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1d:
        {
// switch_41A8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1e:
        {
// switch_41A8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x1f:
        {
// switch_41A8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x20:
        {
// switch_41A8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x21:
        {
// switch_41A8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x22:
        {
// switch_41A8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x23:
        {
// switch_41A8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x24:
        {
// switch_41A8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x25:
        {
// switch_41A8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x26:
        {
// switch_41A8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x27:
        {
// switch_41A8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x28:
        {
// switch_41A8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
        case 0x29:
        {
// switch_41A8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
    }
}
// fun_47E8
fun_47E8() {
    pri = arg_5;
    OP_JNZ lab_4820
    var_8 = 0;
    pri = fun_1098()
// lab_4820
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4870
    OP_CONST_S -8, -1
// lab_4870
    pri = arg_1;
    switch (pri) {
// switch_6328
        case default:
        {
// switch_6328_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_67D0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B88(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_67D0
            pri = 1;
            OP_JUMP lab_67D8
// lab_67D0
            pri = 0;
// lab_67D8
            OP_JZER lab_6828
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6A80
// lab_6828
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6890
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6890
            pri = 1;
            OP_JUMP lab_6898
// lab_6890
            pri = 0;
// lab_6898
            OP_JZER lab_6A20
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B88(var_24, var_16)
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
            OP_JUMP lab_6A80
// lab_6A20
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
// lab_6A80
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6AF0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6AF0
            var_8 = 0;
            pri = fun_10D8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6328_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x1:
        {
// switch_6328_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x2:
        {
// switch_6328_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x3:
        {
// switch_6328_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x4:
        {
// switch_6328_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x5:
        {
// switch_6328_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DC0(var_40)
            OP_JUMP switch_6328_case_default
        }
        case 0x6:
        {
// switch_6328_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x7:
        {
// switch_6328_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x8:
        {
// switch_6328_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x9:
        {
// switch_6328_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0xa:
        {
// switch_6328_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0xb:
        {
// switch_6328_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0xc:
        {
// switch_6328_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0xd:
        {
// switch_6328_case_0xd
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0xe:
        {
// switch_6328_case_0xe
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0xf:
        {
// switch_6328_case_0xf
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x10:
        {
// switch_6328_case_0x10
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x11:
        {
// switch_6328_case_0x11
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x12:
        {
// switch_6328_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x13:
        {
// switch_6328_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x14:
        {
// switch_6328_case_0x14
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x15:
        {
// switch_6328_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x16:
        {
// switch_6328_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x17:
        {
// switch_6328_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x18:
        {
// switch_6328_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x19:
        {
// switch_6328_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x1a:
        {
// switch_6328_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x1b:
        {
// switch_6328_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x1c:
        {
// switch_6328_case_0x1c
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x1d:
        {
// switch_6328_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x1e:
        {
// switch_6328_case_0x1e
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x1f:
        {
// switch_6328_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x20:
        {
// switch_6328_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x21:
        {
// switch_6328_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x22:
        {
// switch_6328_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x23:
        {
// switch_6328_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x24:
        {
// switch_6328_case_0x24
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x25:
        {
// switch_6328_case_0x25
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x26:
        {
// switch_6328_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x27:
        {
// switch_6328_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x28:
        {
// switch_6328_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x29:
        {
// switch_6328_case_0x29
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x2a:
        {
// switch_6328_case_0x2a
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x2b:
        {
// switch_6328_case_0x2b
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x2c:
        {
// switch_6328_case_0x2c
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x2d:
        {
// switch_6328_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x2e:
        {
// switch_6328_case_0x2e
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x2f:
        {
// switch_6328_case_0x2f
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x30:
        {
// switch_6328_case_0x30
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x31:
        {
// switch_6328_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x32:
        {
// switch_6328_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x33:
        {
// switch_6328_case_0x33
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x34:
        {
// switch_6328_case_0x34
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x35:
        {
// switch_6328_case_0x35
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x36:
        {
// switch_6328_case_0x36
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x37:
        {
// switch_6328_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x38:
        {
// switch_6328_case_0x38
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
            pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6328_case_default
        }
        case 0x39:
        {
// switch_6328_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x3a:
        {
// switch_6328_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x3b:
        {
// switch_6328_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x3c:
        {
// switch_6328_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x3d:
        {
// switch_6328_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
        case 0x3e:
        {
// switch_6328_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            OP_JUMP switch_6328_case_default
        }
    }
}
// fun_6B20
fun_6B20() {
    pri = arg_4;
    OP_JNZ lab_6B58
    var_8 = 0;
    pri = fun_1098()
// lab_6B58
    pri = arg_1;
    switch (pri) {
// switch_7F30
        case default:
        {
// switch_7F30_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1308(var_264)
            OP_JZER lab_84F8
            pri = arg_3;
            switch (pri) {
// switch_84A0
                case default:
                {
// switch_84A0_case_default
                    OP_JUMP lab_87B0
// lab_87B0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8820
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8820
                    var_8 = 0;
                    pri = fun_10D8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_84A0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_84A0_case_default
                }
                case 0x2:
                {
// switch_84A0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_84A0_case_default
                }
                case 0x3:
                {
// switch_84A0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_84A0_case_default
                }
            }
// lab_84F8
            pri = arg_1;
            OP_JZER lab_8548
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8548
            pri = 0;
            OP_JUMP lab_8550
// lab_8548
            pri = 1;
// lab_8550
            OP_JZER lab_85B8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B88(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_85B8
            pri = 1;
            OP_JUMP lab_85C0
// lab_85B8
            pri = 0;
// lab_85C0
            OP_JZER lab_8610
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_87B0
// lab_8610
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8678
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_87B0
// lab_8678
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B88(var_24, var_16)
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
// switch_7F30_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1:
        {
// switch_7F30_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2:
        {
// switch_7F30_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x3:
        {
// switch_7F30_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x4:
        {
// switch_7F30_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x5:
        {
// switch_7F30_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DC0(var_40)
            OP_JUMP switch_7F30_case_default
        }
        case 0x6:
        {
// switch_7F30_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x7:
        {
// switch_7F30_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x8:
        {
// switch_7F30_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x9:
        {
// switch_7F30_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0xa:
        {
// switch_7F30_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0xb:
        {
// switch_7F30_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0xc:
        {
// switch_7F30_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0xd:
        {
// switch_7F30_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0xe:
        {
// switch_7F30_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0xf:
        {
// switch_7F30_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x10:
        {
// switch_7F30_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x11:
        {
// switch_7F30_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x12:
        {
// switch_7F30_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x13:
        {
// switch_7F30_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x14:
        {
// switch_7F30_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x15:
        {
// switch_7F30_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x16:
        {
// switch_7F30_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x17:
        {
// switch_7F30_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x18:
        {
// switch_7F30_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x19:
        {
// switch_7F30_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1a:
        {
// switch_7F30_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1b:
        {
// switch_7F30_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1c:
        {
// switch_7F30_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1d:
        {
// switch_7F30_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1e:
        {
// switch_7F30_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x1f:
        {
// switch_7F30_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x20:
        {
// switch_7F30_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x21:
        {
// switch_7F30_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x22:
        {
// switch_7F30_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x23:
        {
// switch_7F30_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x24:
        {
// switch_7F30_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x25:
        {
// switch_7F30_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x26:
        {
// switch_7F30_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x27:
        {
// switch_7F30_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x28:
        {
// switch_7F30_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x29:
        {
// switch_7F30_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2a:
        {
// switch_7F30_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2b:
        {
// switch_7F30_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2c:
        {
// switch_7F30_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2d:
        {
// switch_7F30_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2e:
        {
// switch_7F30_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x2f:
        {
// switch_7F30_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x30:
        {
// switch_7F30_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x31:
        {
// switch_7F30_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x32:
        {
// switch_7F30_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x33:
        {
// switch_7F30_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x34:
        {
// switch_7F30_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x35:
        {
// switch_7F30_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x36:
        {
// switch_7F30_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x37:
        {
// switch_7F30_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x38:
        {
// switch_7F30_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x39:
        {
// switch_7F30_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x3a:
        {
// switch_7F30_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x3b:
        {
// switch_7F30_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x3c:
        {
// switch_7F30_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x3d:
        {
// switch_7F30_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
        case 0x3e:
        {
// switch_7F30_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B48(var_24, var_16, var_8)
            OP_JUMP switch_7F30_case_default
        }
    }
}
// fun_8850
fun_8850() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8FC0(var_16, var_8)
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
    OP_JZER lab_8A48
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8A48
    pri = 0;
    return pri;
}
// fun_8A60
fun_8A60() {
    pri = arg_4;
    OP_JNZ lab_8A98
    var_8 = 0;
    pri = fun_1098()
// lab_8A98
    pri = arg_1;
    OP_JNZ lab_8B40
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30472;
    var_72 = 30464;
    var_80 = 30320;
    var_88 = 30168;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8B40
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8BA0
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8BA0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8C50
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30928;
    var_72 = 30784;
    var_80 = 30632;
    var_88 = 30480;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8C50
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_8D00
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31560;
    var_72 = 31408;
    var_80 = 31240;
    var_88 = 31064;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8D00
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8DB0
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31760;
    var_72 = 31752;
    var_80 = 31744;
    var_88 = 31568;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8DB0
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_8E60
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32176;
    var_72 = 32048;
    var_80 = 31912;
    var_88 = 31768;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0DF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8E60
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8EC0
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8EC0
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_8F20
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8F20
    var_8 = 0;
    pri = fun_10D8()
    pri = 0;
    return pri;
}
// fun_8F48
fun_8F48() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8F80(var_8)
    pri = 0;
    return pri;
}
// fun_8F80
fun_8F80() {
    var_8 = 32344;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B10(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8FC0
fun_8FC0() {
    var_8 = arg_1;
    var_16 = 32528;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B48(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9008
fun_9008() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_9108
        case default:
        {
// switch_9108_case_default
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
// switch_9108_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_9108_case_default
        }
        case 0x1:
        {
// switch_9108_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_9108_case_default
        }
        case 0x2:
        {
// switch_9108_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_9108_case_default
        }
        case 0x3:
        {
// switch_9108_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_9108_case_default
        }
    }
}
// fun_91C8
fun_91C8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_9218
// lab_9218
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32632;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_9290
    OP_JUMP lab_92C0
// lab_9290
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_9218
// lab_92C0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_9348
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6B20(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_15D8(var_56)
// lab_9348
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_93B0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1118(var_24, var_16)
// lab_93B0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1118(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_9470
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BC0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0998(var_88, var_80, var_72, var_64, var_56)
// lab_9470
    pri = IsPlayerRideBicycle()
    OP_JZER lab_94B0
    pri = 0;
    return pri;
// lab_94B0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_95F8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 32752;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B10(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_95C0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_95F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09E8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09E8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BC0(var_40)
    pri = 0;
    return pri;
// lab_95C0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1118(var_16, var_8)
}
// fun_9680
fun_9680() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9718
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BC0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2C08(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9718
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9870
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_97D8
    var_24 = 32888;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_97D8
    pri = 1;
    OP_JUMP lab_97E0
// lab_9870
    pri = 0;
    return pri;
// lab_97D8
    pri = 0;
// lab_97E0
    OP_JZER lab_9870
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2C08(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9880
fun_9880() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9680(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9908(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9908
fun_9908() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9CA8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9970
fun_9970() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_99E0
    OP_CONST_S -8, 1
// lab_99E0
    pri = arg_0;
    OP_JNZ lab_9A00
    OP_ZERO_P_S -8
// lab_9A00
    pri = var_8;
    OP_JZER lab_9A88
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9A88
    pri = 0;
    return pri;
}
// fun_9AA0
fun_9AA0() {
    var_8 = 32992;
    var_16 = 8;
    pri = fun_23B0(var_8)
    var_24 = 0;
    pri = fun_23E8()
    var_32 = 0;
    var_40 = 8;
    pri = fun_24B8(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_25F8(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_2488()
    var_88 = 33224;
    var_96 = 8;
    pri = fun_23B0(var_88)
    var_104 = 0;
    pri = fun_23E8()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_9680(var_128, var_120, var_112)
    var_144 = 33384;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_2110(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0658(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2208(var_200)
    var_216 = 0;
    pri = fun_22C8()
    var_224 = 0;
    pri = fun_2488()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_2BD0(var_232)
    pri = 0;
    return pri;
}
// fun_9CA8
fun_9CA8() {
    var_8 = 33568;
    var_16 = 8;
    pri = fun_23B0(var_8)
    var_24 = 0;
    pri = fun_23E8()
    pri = arg_3;
    OP_JNZ lab_9DC8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9D90
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9E38(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9DB8
// lab_9DC8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9FD8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9D90
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9F00(var_16, var_8)
// lab_9DB8
    OP_JUMP lab_9E10
// lab_9E10
    var_8 = 0;
    pri = fun_2488()
    pri = 0;
    return pri;
}
// fun_9E38
fun_9E38() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9FD8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9EE8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9EE8
    pri = 0;
    return pri;
}
// fun_9F00
fun_9F00() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2508(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2110(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2208(var_72)
    var_88 = 0;
    pri = fun_22C8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_24B8(var_96)
    pri = 0;
    return pri;
}
// fun_9FD8
fun_9FD8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A020
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A2E0(var_8)
// lab_A020
    pri = arg_4;
    OP_JNZ lab_A088
    var_8 = 0;
    var_16 = 8;
    pri = fun_24B8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2508(var_40, var_32, var_24)
// lab_A088
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_A128
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2558(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2110(var_56, var_48, var_40)
    OP_JUMP lab_A218
// lab_A128
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_A1E0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_A1E0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_A1E0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2110(var_24, var_16, var_8)
// lab_A218
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A258
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
// lab_A258
    var_8 = 1;
    var_16 = 8;
    pri = fun_2208(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A4E8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9970(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A2E0
fun_A2E0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A340
    var_16 = 33728;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A340
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A480
        case default:
        {
// switch_A480_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A470
            var_16 = 34272;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A470
            OP_JUMP lab_A4B8
// lab_A4B8
            var_8 = 34488;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A480_case_0x1
            var_8 = 33944;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A4B8
        }
        case 0x2:
        {
// switch_A480_case_0x2
            var_8 = 34072;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A4B8
        }
    }
}
// fun_A4E8
fun_A4E8() {
    pri = arg_2;
    OP_JNZ lab_A5D0
    var_8 = 0;
    var_16 = 8;
    pri = fun_24B8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2508(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_25A8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_A5D0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2110(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2208(var_40)
    var_56 = 0;
    pri = fun_22C8()
    pri = 0;
    return pri;
}
// fun_A648
fun_A648() {
    pri = 34672;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_A6D0
// lab_A6D0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A850
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A840
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_A790
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_A790
    pri = 0;
    OP_JUMP lab_A798
// lab_A850
    pri = 0;
    return pri;
// lab_A840
    OP_JUMP lab_A6C8
// lab_A6C8
    OP_INC_P_S -936
// lab_A790
    pri = 1;
// lab_A798
    OP_JZER lab_A810
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A808
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A810
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A808
}
// fun_A870
fun_A870() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_A8F8()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_A8F8
fun_A8F8() {
    OP_ZERO_P_S -8
    pri = var_8;
    var_16 = pri;
    var_24 = 2491457344527812609;
    pri = FlagGet(var_24)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_32 = pri;
    var_40 = -6338460143570643299;
    pri = FlagGet(var_40)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_48 = pri;
    var_56 = -9019446742694110882;
    pri = FlagGet(var_56)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_64 = pri;
    var_72 = -2229912894659633455;
    pri = FlagGet(var_72)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_80 = pri;
    var_88 = -3467343721533817634;
    pri = FlagGet(var_88)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_96 = pri;
    var_104 = -2282713863028048545;
    pri = FlagGet(var_104)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_112 = pri;
    var_120 = -3446232929749219646;
    pri = FlagGet(var_120)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_128 = pri;
    var_136 = 2483696471998715560;
    pri = FlagGet(var_136)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    return pri;
}
// fun_ABA8
fun_ABA8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_AC40
    var_8 = 1;
    var_16 = 0;
    var_24 = 35592;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_15B0()
// lab_AC40
    pri = arg_4;
    OP_JZER lab_AC78
    var_8 = 1;
    var_16 = 8;
    pri = fun_1698(var_8)
// lab_AC78
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_ACD0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_ACD0
    pri = 0;
    OP_JUMP lab_ACD8
// lab_ACD0
    pri = 1;
// lab_ACD8
    OP_JZER lab_ADA0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_ADA0
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_AD78
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14F0(var_32, var_24)
    OP_JUMP lab_ADA0
// lab_ADA0
    pri = arg_2;
    OP_JZER lab_AE78
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_AE48
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1118(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0890(var_40)
    OP_JUMP lab_AE78
// lab_AE78
    pri = arg_3;
    OP_JZER lab_AEB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1578(var_8)
// lab_AEB0
    pri = 0;
    return pri;
// lab_AE48
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1118(var_16, var_8)
// lab_AD78
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14F0(var_16, var_8)
}
// fun_AEC0
fun_AEC0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_B040
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_AF58
    var_8 = 1;
    var_16 = 0;
    var_24 = 35592;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_B040
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_AF58
    pri = arg_0;
    OP_JNZ lab_AFA0
    var_8 = 35640;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_AFC0
// lab_AFA0
    var_8 = 35816;
    pri = SoundPostEvent(var_8)
// lab_AFC0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B040
    var_24 = 36080;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_B080
fun_B080() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0430(var_8)
    var_24 = 0;
    pri = fun_0468()
    pri = arg_1;
    OP_JZER lab_B0F8
    var_32 = 36128;
    pri = SoundPostEvent(var_32)
// lab_B0F8
    var_8 = 36328;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 36592;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0308(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B178
fun_B178() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_B1C8
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_B080(var_16, var_8)
// lab_B1C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09E8(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_B268
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_B268
    pri = 1;
    OP_JUMP lab_B270
// lab_B268
    pri = 0;
// lab_B270
    OP_JZER lab_B408
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_B350
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
    pri = fun_04F8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_B3F8
// lab_B408
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
    pri = fun_0768(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_B350
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
    pri = fun_0598(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_B3F8
    OP_JUMP lab_B4C8
// lab_B4C8
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_B540
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0810(var_32, var_24, var_16)
// lab_B540
    var_8 = 36608;
    pri = SoundPostEvent(var_8)
    var_16 = 36880;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02A8(var_24, var_16)
    var_40 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B5B0
fun_B5B0() {
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_20C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2208(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_22F8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B6B0
    pri = 1;
    return pri;
// lab_B6B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = 26750;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 20000;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_08C8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_09E8(var_96)
    pri = 0;
    return pri;
}
// fun_B7C0
fun_B7C0() {
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
    pri = fun_B178(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_B860
fun_B860() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_A648(var_24)
    pri = 0;
    return pri;
}
// fun_B8C8
fun_B8C8() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_BA48(var_16)
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
    pri = fun_0768(var_80, var_72, var_64, var_56, var_48)
    var_96 = 36952;
    var_104 = 36896;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1608(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_B9D0
fun_B9D0() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_BA48(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1658(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_BA48
fun_BA48() {
    pri = arg_0;
    OP_JNZ lab_BA90
    var_8 = 37008;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_BA90
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_BAD8
    var_8 = 37160;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_BAD8
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 37312;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_BB20
fun_BB20() {
    pri = g_mode;
    switch (pri) {
// switch_BC30
        case default:
        {
// switch_BC30_case_default
            pri = CommandNOP()
            OP_JUMP lab_BC98
// lab_BC98
            pri = 0;
            return pri;
        }
        case 0xfc14a684434185fe:
        {
// switch_BC30_case_0xfc14a684434185fe
            var_8 = 0;
            pri = fun_F3C0()
            OP_JUMP lab_BC98
        }
        case 0x0:
        {
// switch_BC30_case_0x0
            var_8 = 0;
            pri = fun_BCA8()
            OP_JUMP lab_BC98
        }
        case 0x247e3a276b46d50c:
        {
// switch_BC30_case_0x247e3a276b46d50c
            var_8 = 0;
            pri = fun_F378()
            OP_JUMP lab_BC98
        }
        case 0x41c2942af524cab0:
        {
// switch_BC30_case_0x41c2942af524cab0
            var_8 = 0;
            pri = fun_F100()
            OP_JUMP lab_BC98
        }
        case 0x4f293eaacd65d551:
        {
// switch_BC30_case_0x4f293eaacd65d551
            var_8 = 0;
            pri = fun_F1F0()
            OP_JUMP lab_BC98
        }
    }
}
// fun_BCA8
fun_BCA8() {
    pri = 0;
    return pri;
}
// fun_BCC0
fun_BCC0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_ABA8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BD18
fun_BD18() {
    pri = 0;
    return pri;
}
// fun_BD30
fun_BD30() {
    pri = 0;
    return pri;
}
// fun_BD48
fun_BD48() {
    OP_CONST_S -8, 108
    var_16 = 1;
    var_24 = 0;
    var_32 = 35592;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0308(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0378()
    pri = EvCameraStart()
    var_64 = 0;
    var_72 = 8802641224559852288;
    var_80 = 16;
    pri = fun_B8C8(var_72, var_64)
    var_88 = 1;
    var_96 = -351125813381875025;
    var_104 = 16;
    pri = fun_B8C8(var_96, var_88)
    var_112 = 1;
    var_120 = 8802641224559852288;
    var_128 = 16;
    pri = fun_0850(var_120, var_112)
    var_136 = 1;
    var_144 = -351125813381875025;
    var_152 = 16;
    pri = fun_0850(var_144, var_136)
    var_160 = 1;
    var_168 = 1153097808985117706;
    var_176 = 16;
    pri = fun_0850(var_168, var_160)
    var_184 = 1;
    var_192 = 1153098908496745917;
    var_200 = 16;
    pri = fun_0850(var_192, var_184)
    var_208 = 1;
    var_216 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_224 = 48;
    pri = fun_07B8(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 1;
    var_240 = 1;
    OP_PUSH4_C -4587338432941916160, 4671226772094713856, 4671268003780755456, -351125813381875025
    var_248 = 48;
    pri = fun_07B8(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 2;
    var_264 = 2;
    var_272 = 8802641224559852288;
    var_280 = 24;
    pri = fun_1248(var_272, var_264, var_256)
    var_288 = 8;
    var_296 = 8;
    var_304 = -351125813381875025;
    var_312 = 24;
    pri = fun_1248(var_304, var_296, var_288)
    OP_CONST_S -16, 274
    var_328 = 12;
    var_336 = 0;
    var_344 = var_16;
    var_352 = var_8;
    var_360 = 32;
    pri = fun_2688(var_352, var_344, var_336, var_328)
    var_368 = 0;
    var_376 = 60;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 37320;
    pri = SoundSetRTPC(var_392, var_384, var_376)
    var_400 = 15;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 0;
    var_424 = 1;
    var_432 = -351125813381875025;
    var_440 = 24;
    pri = fun_8850(var_432, var_424, var_416)
    var_448 = 1;
    var_456 = 0;
    var_464 = 0;
    var_472 = 285;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_480 = 48;
    pri = fun_0940(var_472, var_464, var_456, var_448, var_440, var_432)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_488 = 16;
    pri = fun_29F0(var_480, var_472)
    var_496 = 0;
    var_504 = 1;
    var_512 = 220;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 4609434218613702656;
    var_536 = 32;
    pri = fun_2A58(var_528, var_520, var_512, var_504)
    var_544 = 0;
    var_552 = 4630798169346041446;
    var_560 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_568 = 4671166637055011717;
    var_576 = 1;
    pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 0;
    pri = fun_2960()
    var_592 = 0;
    var_600 = 4630798169346041446;
    var_608 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_616 = 4671174919126347940;
    var_624 = 90;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    var_640 = 60;
    var_648 = 100;
    pri = float(var_648)
    var_656 = pri;
    var_664 = 4609434218613702656;
    var_672 = 32;
    pri = fun_2A58(var_664, var_656, var_648, var_640)
    var_680 = 36080;
    var_688 = 8;
    var_696 = 16;
    pri = fun_02A8(var_688, var_680)
    var_704 = 0;
    pri = fun_0378()
    var_712 = 90;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 0;
    var_736 = 4626773077179079066;
    var_744 = 0;
    OP_PUSH5_C 4671465976346894664, 4636849881345320550, 4671241579767560929, 4671145666619490959, 4637413534986183639
    var_752 = 4671246711738083574;
    var_760 = 1;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 0;
    pri = fun_2960()
    var_776 = 0;
    var_784 = 4626773077179079066;
    var_792 = 3;
    OP_PUSH5_C 4671466102790731858, 4636849881345320550, 4671249743641397166, 4671145793063328154, 4637413534986183639
    var_800 = 4671254875611919811;
    var_808 = 180;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 0;
    var_824 = 1;
    var_832 = 1000;
    pri = float(var_832)
    var_840 = pri;
    var_848 = 4612811918334230528;
    var_856 = 32;
    pri = fun_2A58(var_848, var_840, var_832, var_824)
    var_864 = 45;
    var_872 = 8;
    pri = fun_0060(var_864)
    var_880 = 0;
    var_888 = 15;
    var_896 = 360;
    pri = float(var_896)
    var_904 = pri;
    var_912 = 4613937818241073152;
    var_920 = 32;
    pri = fun_2A58(var_912, var_904, var_896, var_888)
    var_928 = 120;
    var_936 = 8;
    pri = fun_0060(var_928)
    var_944 = 0;
    var_952 = 1;
    var_960 = 700;
    pri = float(var_960)
    var_968 = pri;
    var_976 = 4611686018427387904;
    var_984 = 32;
    pri = fun_2A58(var_976, var_968, var_960, var_952)
    var_992 = 0;
    var_1000 = 4626857519672092262;
    var_1008 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1016 = 4671083459000370463;
    var_1024 = 1;
    pri = EvCameraMove(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1032 = 0;
    pri = fun_2960()
    var_1040 = 0;
    var_1048 = 4626857519672092262;
    var_1056 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1064 = 4671072741510778716;
    var_1072 = 480;
    pri = EvCameraMove(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1080 = 8802641224559852288;
    var_1088 = 8;
    pri = fun_09E8(var_1080)
    var_1096 = 1;
    var_1104 = 1;
    OP_PUSH4_C 4640537203540230144, 4671322979362144256, 4671185540408672256, 8802641224559852288
    var_1112 = 48;
    pri = fun_07B8(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_0060(var_1120)
    var_1136 = 1;
    var_1144 = 0;
    var_1152 = 4641240890982006784;
    var_1160 = 0;
    var_1168 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1176 = 72;
    pri = fun_08C8(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1184 = 15;
    var_1192 = 8;
    pri = fun_0060(var_1184)
    var_1200 = 8802641224559852288;
    var_1208 = 8;
    pri = fun_09E8(var_1200)
    var_1216 = 15;
    var_1224 = 8;
    pri = fun_0060(var_1216)
    var_1232 = 0;
    var_1240 = 30;
    pri = float(var_1240)
    var_1248 = pri;
    var_1256 = 37456;
    pri = SoundSetRTPC(var_1256, var_1248, var_1240)
    var_1264 = 0;
    var_1272 = 0;
    var_1280 = 0;
    var_1288 = 90;
    pri = float(var_1288)
    var_1296 = pri;
    var_1304 = 8802641224559852288;
    var_1312 = 40;
    pri = fun_0998(var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1320 = 30;
    var_1328 = 8;
    pri = fun_0060(var_1320)
    var_1336 = 8802641224559852288;
    var_1344 = 8;
    pri = fun_09E8(var_1336)
    var_1352 = -351125813381875025;
    var_1360 = 8;
    pri = fun_12B0(var_1352)
    var_1368 = 15;
    var_1376 = 8;
    pri = fun_0060(var_1368)
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = -351125813381875025;
    var_1408 = 24;
    pri = fun_8850(var_1400, var_1392, var_1384)
    var_1416 = 0;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 100;
    var_1448 = -1;
    OP_PUSH2_C 5245932838815212076, -351125813381875025
    var_1456 = 56;
    pri = fun_1F48(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_2208(var_1464)
    pri = 37592;
    OP_ADDR_ALT -56
    OP_MOVS 40
    var_1520 = 0;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 100;
    var_1552 = -1;
    OP_ADDR_P_PRI -56
    var_1560 = pri;
    pri = var_8;
    OP_ADD_P_C -108
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_1568 = pri;
    var_1576 = -351125813381875025;
    var_1584 = 56;
    pri = fun_1F48(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1592 = 1;
    var_1600 = 8;
    pri = fun_2208(var_1592)
    var_1608 = 0;
    var_1616 = 3;
    var_1624 = 0;
    var_1632 = 100;
    var_1640 = -1;
    OP_PUSH2_C 5245936137350096709, -351125813381875025
    var_1648 = 56;
    pri = fun_1F48(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1656 = 1;
    var_1664 = 8;
    pri = fun_2208(var_1656)
    var_1672 = 0;
    pri = fun_22C8()
    var_1680 = 0;
    var_1688 = 1;
    var_1696 = 200;
    pri = float(var_1696)
    var_1704 = pri;
    var_1712 = 4612811918334230528;
    var_1720 = 32;
    pri = fun_2A58(var_1712, var_1704, var_1696, var_1688)
    var_1728 = 0;
    var_1736 = 4631952216750555136;
    var_1744 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_1752 = 4671031446602818519;
    var_1760 = 1;
    pri = EvCameraMove(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1768 = 0;
    pri = fun_2960()
    var_1776 = 0;
    var_1784 = 4631952216750555136;
    var_1792 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_1800 = 4671018568572878193;
    var_1808 = 240;
    pri = EvCameraMove(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1816 = 0;
    var_1824 = 60;
    pri = float(var_1824)
    var_1832 = pri;
    var_1840 = 37632;
    pri = SoundSetRTPC(var_1840, var_1832, var_1824)
    var_1848 = 37768;
    pri = SoundPostEvent(var_1848)
    var_1856 = 30;
    var_1864 = 8;
    pri = fun_0060(var_1856)
    var_1872 = 0;
    var_1880 = 120;
    var_1888 = 850;
    pri = float(var_1888)
    var_1896 = pri;
    var_1904 = 4605380978949069210;
    var_1912 = 32;
    pri = fun_2A58(var_1904, var_1896, var_1888, var_1880)
    var_1920 = 1;
    var_1928 = 0;
    var_1936 = 4641240890982006784;
    var_1944 = 0;
    var_1952 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_1960 = 72;
    pri = fun_08C8(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1968 = 0;
    var_1976 = 0;
    var_1984 = 0;
    var_1992 = 90;
    pri = float(var_1992)
    var_2000 = pri;
    var_2008 = -351125813381875025;
    var_2016 = 40;
    pri = fun_0998(var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2024 = -351125813381875025;
    var_2032 = 8;
    pri = fun_09E8(var_2024)
    var_2040 = 1;
    var_2048 = 0;
    var_2056 = 0;
    var_2064 = 60;
    OP_PUSH2_C 4607182418800017408, -351125813381875025
    var_2072 = 48;
    pri = fun_0940(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2080 = 60;
    var_2088 = 8;
    pri = fun_0060(var_2080)
    var_2096 = 0;
    var_2104 = 1;
    var_2112 = 300;
    pri = float(var_2112)
    var_2120 = pri;
    var_2128 = 4615063718147915776;
    var_2136 = 32;
    pri = fun_2A58(var_2128, var_2120, var_2112, var_2104)
    var_2144 = 0;
    var_2152 = 4628180452062632346;
    var_2160 = 0;
    OP_PUSH5_C 4671204410776983962, 4635554392765009756, 4671062241174733455, 4671291107268834099, 4634446788731653325
    var_2168 = 4671121889680540303;
    var_2176 = 1;
    pri = EvCameraMove(var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2184 = 0;
    pri = fun_2960()
    var_2192 = 0;
    var_2200 = 4628180452062632346;
    var_2208 = 3;
    OP_PUSH5_C 4671206444873495347, 4635554392765009756, 4671060528685373194, 4671269383667848315, 4634447492419095101
    var_2216 = 4671144872222339891;
    var_2224 = 150;
    pri = EvCameraMove(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2232 = 8802641224559852288;
    var_2240 = 8;
    pri = fun_09E8(var_2232)
    var_2248 = 15;
    var_2256 = 8;
    pri = fun_0060(var_2248)
    var_2264 = 0;
    var_2272 = 0;
    var_2280 = 0;
    var_2288 = 90;
    pri = float(var_2288)
    var_2296 = pri;
    var_2304 = 8802641224559852288;
    var_2312 = 40;
    pri = fun_0998(var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2320 = 30;
    var_2328 = 8;
    pri = fun_0060(var_2320)
    var_2336 = 8802641224559852288;
    var_2344 = 8;
    pri = fun_09E8(var_2336)
    var_2352 = -351125813381875025;
    var_2360 = 8;
    pri = fun_09E8(var_2352)
    var_2368 = 1;
    var_2376 = 1;
    OP_PUSH4_C 4636033603912859648, 4671240515990061056, 4671358713490046976, -351125813381875025
    var_2384 = 48;
    pri = fun_07B8(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2392 = 15;
    var_2400 = 8;
    pri = fun_0060(var_2392)
    var_2408 = 1;
    var_2416 = 0;
    var_2424 = 4641240890982006784;
    var_2432 = 0;
    var_2440 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -351125813381875025
    var_2448 = 72;
    pri = fun_08C8(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2456 = 15;
    var_2464 = 8;
    pri = fun_0060(var_2456)
    var_2472 = 0;
    var_2480 = 4628180452062632346;
    var_2488 = 0;
    OP_PUSH5_C 4671249207629478625, 4636041344474719191, 4671372394163475579, 4671339142183072563, 4637218613564811510
    var_2496 = 4671318059047609958;
    var_2504 = 1;
    pri = EvCameraMove(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2512 = 0;
    pri = fun_2960()
    var_2520 = 0;
    var_2528 = 4628180452062632346;
    var_2536 = 3;
    OP_PUSH5_C 4671246730979537060, 4636041344474719191, 4671371157212894331, 4671291082529822474, 4637217206189927956
    var_2544 = 4671275920264475443;
    var_2552 = 150;
    pri = EvCameraMove(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480)
    var_2560 = -351125813381875025;
    var_2568 = 8;
    pri = fun_09E8(var_2560)
    var_2576 = 0;
    var_2584 = 0;
    var_2592 = 0;
    var_2600 = 270;
    pri = float(var_2600)
    var_2608 = pri;
    var_2616 = -351125813381875025;
    var_2624 = 40;
    pri = fun_0998(var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2632 = -351125813381875025;
    var_2640 = 8;
    pri = fun_09E8(var_2632)
    var_2648 = 0;
    pri = fun_2960()
    var_2656 = 0;
    pri = fun_26E8()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2664 = 3;
    var_2672 = 1;
    var_2680 = 32;
    pri = fun_2AB0(var_2672, var_2664, var_2656, var_2648)
    var_2688 = 0;
    pri = fun_2778()
    var_2696 = 0;
    pri = fun_2820()
    OP_JZER lab_D638
    var_2704 = 0;
    pri = fun_2910()
// lab_D638
    var_8 = 0;
    var_16 = 0;
    var_24 = 38016;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4636033603912859648, 4671226772094713856, 4671075589245894656, 8802641224559852288
    var_48 = 48;
    pri = fun_07B8(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4671226772094713856, 4671325728141213696, -351125813381875025
    var_72 = 48;
    pri = fun_07B8(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 8802641224559852288;
    var_88 = 8;
    pri = fun_12B0(var_80)
    var_96 = -351125813381875025;
    var_104 = 8;
    pri = fun_12B0(var_96)
    var_112 = 15;
    var_120 = 8;
    pri = fun_0060(var_112)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_128 = 16;
    pri = fun_29F0(var_120, var_112)
    var_136 = 0;
    var_144 = 1;
    var_152 = 300;
    pri = float(var_152)
    var_160 = pri;
    var_168 = 4615063718147915776;
    var_176 = 32;
    pri = fun_2A58(var_168, var_160, var_152, var_144)
    var_184 = 1;
    var_192 = 0;
    var_200 = 4641240890982006784;
    var_208 = 0;
    var_216 = 0;
    var_224 = 20000;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 19850;
    pri = float(var_240)
    var_248 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_256 = 72;
    pri = fun_08C8(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = 0;
    var_296 = 0;
    var_304 = 20000;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 20150;
    pri = float(var_320)
    var_328 = pri;
    OP_PUSH2_C 4607182418800017408, -351125813381875025
    var_336 = 72;
    pri = fun_08C8(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 0;
    var_352 = 4628180452062632346;
    var_360 = 0;
    OP_PUSH5_C 4671297129843775242, 4633497514372696637, 4671201024281170412, 4671398108991670190, 4635023108746468393
    var_368 = 4671172032908325028;
    var_376 = 1;
    pri = EvCameraMove(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_384 = 0;
    pri = fun_2960()
    var_392 = 0;
    var_400 = 4628180452062632346;
    var_408 = 3;
    OP_PUSH5_C 4671290675710520197, 4633497514372696637, 4671186590442276782, 4671381957165858161, 4635021701371584840
    var_416 = 4671134583542282977;
    var_424 = 360;
    pri = EvCameraMove(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 0;
    var_440 = 30;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 38168;
    pri = SoundSetRTPC(var_456, var_448, var_440)
    var_464 = 36080;
    var_472 = 8;
    var_480 = 16;
    pri = fun_02A8(var_472, var_464)
    var_488 = 0;
    pri = fun_0378()
    var_496 = 8802641224559852288;
    var_504 = 8;
    pri = fun_09E8(var_496)
    var_512 = -351125813381875025;
    var_520 = 8;
    pri = fun_09E8(var_512)
    var_528 = 30;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 100;
    var_576 = -1;
    OP_PUSH2_C 5245935037838468498, -351125813381875025
    var_584 = 56;
    pri = fun_1F48(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_2208(var_592)
    var_608 = 0;
    var_616 = 3;
    var_624 = 0;
    var_632 = 100;
    var_640 = -1;
    OP_PUSH2_C 5245929540280327443, -351125813381875025
    var_648 = 56;
    pri = fun_1F48(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 8;
    pri = fun_2208(var_656)
    var_672 = 0;
    var_680 = 3;
    var_688 = 0;
    var_696 = 100;
    var_704 = -1;
    OP_PUSH2_C 5245928440768699232, -351125813381875025
    var_712 = 56;
    pri = fun_1F48(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 1;
    var_728 = 8;
    pri = fun_2208(var_720)
    var_736 = 0;
    var_744 = 3;
    var_752 = 0;
    var_760 = 100;
    var_768 = -1;
    OP_PUSH2_C 5245931739303583865, -351125813381875025
    var_776 = 56;
    pri = fun_1F48(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 1;
    var_792 = 8;
    pri = fun_2208(var_784)
    var_800 = 0;
    pri = fun_22C8()
    var_808 = 0;
    var_816 = 1;
    var_824 = 230;
    pri = float(var_824)
    var_832 = pri;
    var_840 = 4611686018427387904;
    var_848 = 32;
    pri = fun_2A58(var_840, var_832, var_824, var_816)
    var_856 = 0;
    var_864 = 4630164850648442470;
    var_872 = 0;
    OP_PUSH5_C 4671157876696117412, 4637353721553632625, 4671228891403376394, 4671324917251388211, 4634457344043279974
    var_880 = 4671225930968318607;
    var_888 = 1;
    pri = EvCameraMove(var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_896 = 0;
    pri = fun_2960()
    var_904 = 0;
    var_912 = 4630164850648442470;
    var_920 = 3;
    OP_PUSH5_C 4671145570412223529, 4637566938848490947, 4671229111305701949, 4671312281114005996, 4634676190837672509
    var_928 = 4671226156368202301;
    var_936 = 90;
    pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_944 = 1;
    var_952 = 0;
    var_960 = 4641240890982006784;
    var_968 = -90;
    pri = float(var_968)
    var_976 = pri;
    var_984 = 0;
    var_992 = 20000;
    pri = float(var_992)
    var_1000 = pri;
    var_1008 = 20050;
    pri = float(var_1008)
    var_1016 = pri;
    OP_PUSH2_C 4607182418800017408, -351125813381875025
    var_1024 = 72;
    pri = fun_08C8(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1032 = 1;
    var_1040 = 0;
    var_1048 = 4641240890982006784;
    var_1056 = 90;
    pri = float(var_1056)
    var_1064 = pri;
    var_1072 = 0;
    var_1080 = 20000;
    pri = float(var_1080)
    var_1088 = pri;
    var_1096 = 19950;
    pri = float(var_1096)
    var_1104 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1112 = 72;
    pri = fun_08C8(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = -351125813381875025;
    var_1128 = 8;
    pri = fun_09E8(var_1120)
    var_1136 = 8802641224559852288;
    var_1144 = 8;
    pri = fun_09E8(var_1136)
    var_1152 = 15;
    var_1160 = 8;
    pri = fun_0060(var_1152)
    var_1168 = 38304;
    pri = SoundPostEvent(var_1168)
    var_1176 = 1;
    var_1184 = -1;
    var_1192 = -1;
    var_1200 = 1;
    var_1208 = 8802641224559852288;
    var_1216 = 40;
    pri = fun_8A60(var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1224 = 1;
    var_1232 = 1;
    var_1240 = -1;
    var_1248 = -1;
    var_1256 = 0;
    var_1264 = 40;
    var_1272 = -351125813381875025;
    var_1280 = 56;
    pri = fun_47E8(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 15;
    var_1296 = 8;
    pri = fun_0060(var_1288)
    var_1304 = 0;
    var_1312 = 4626379012211684147;
    var_1320 = 0;
    OP_PUSH5_C 4671094728994555167, 4636874510405782733, 4671230012905236726, 4671261819027849216, 4636590220679304970
    var_1328 = 4671227044223841731;
    var_1336 = 1;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1344 = 3;
    var_1352 = 1;
    var_1360 = 32;
    pri = fun_2AB0(var_1352, var_1344, var_1336, var_1328)
    var_1368 = 30;
    var_1376 = 8;
    pri = fun_0060(var_1368)
    var_1384 = 1004;
    var_1392 = 38504;
    var_1400 = 16;
    pri = fun_2648(var_1392, var_1384)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1408 = 16;
    pri = fun_29F0(var_1400, var_1392)
    var_1416 = 0;
    var_1424 = 1;
    var_1432 = 250;
    pri = float(var_1432)
    var_1440 = pri;
    var_1448 = 10;
    pri = float(var_1448)
    var_1456 = pri;
    var_1464 = 32;
    pri = fun_2A58(var_1456, var_1448, var_1440, var_1432)
    pri = PlayerGetSex()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_E450
    var_1472 = 0;
    var_1480 = 4623001312491156275;
    var_1488 = 0;
    OP_PUSH5_C 4671190188594078679, 4638727319439980626, 4671175609069894369, 4671263726680523407, 4638041224184248402
    var_1496 = 4671250697467734262;
    var_1504 = 1;
    pri = EvCameraMove(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    OP_JUMP lab_E4D0
// lab_E450
    var_8 = 0;
    var_16 = 4623001312491156275;
    var_24 = 0;
    OP_PUSH5_C 4671190232574543790, 4639029553196223693, 4671175655799138550, 4671263770660988518, 4638645691696734536
    var_32 = 4671250744196978442;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
// lab_E4D0
    var_8 = 0;
    pri = fun_2960()
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 8802641224559852288;
    var_40 = 8;
    pri = fun_8F48(var_32)
    var_48 = 1;
    var_56 = 3;
    var_64 = 0;
    var_72 = 40;
    var_80 = -351125813381875025;
    var_88 = 40;
    pri = fun_6B20(var_80, var_72, var_64, var_56, var_48)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0BC0(var_96)
    var_112 = 30;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 0;
    var_136 = 1;
    var_144 = 300;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 2;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 32;
    pri = fun_2A58(var_168, var_160, var_152, var_144)
    var_184 = 0;
    var_192 = 4630361883132139930;
    var_200 = 0;
    OP_PUSH5_C 4671201997348960993, 4635899199611480310, 4671239006910351933, 4671295934124880036, 4636733069229985628
    var_208 = 4671191953310241260;
    var_216 = 1;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 0;
    pri = fun_2960()
    var_232 = 0;
    var_240 = 4630361883132139930;
    var_248 = 3;
    OP_PUSH5_C 4671202044078205174, 4635473468709205443, 4671238982171340308, 4671295978105345147, 4636308042015152538
    var_256 = 4671191928571229635;
    var_264 = 360;
    pri = EvCameraMove(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 3;
    var_280 = 0;
    var_288 = 7045452029982614416;
    var_296 = 24;
    pri = fun_20C0(var_288, var_280, var_272)
    var_304 = 1;
    var_312 = 8;
    pri = fun_2208(var_304)
    var_320 = 0;
    pri = fun_22C8()
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C 5245942734419865975, -351125813381875025
    var_368 = 56;
    pri = fun_1F48(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_2208(var_376)
    var_392 = 0;
    pri = fun_22C8()
    var_400 = 6;
    var_408 = 4;
    var_416 = 2;
    var_424 = 1;
    var_432 = 9;
    var_440 = 1;
    var_448 = 414;
    var_456 = -351125813381875025;
    var_464 = 64;
    pri = fun_9880(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_472 = 0;
    var_480 = 3;
    var_488 = 0;
    var_496 = 100;
    var_504 = -1;
    OP_PUSH2_C 5245941634908237764, -351125813381875025
    var_512 = 56;
    pri = fun_1F48(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_2208(var_520)
    var_536 = 0;
    pri = fun_22C8()
    var_544 = 8903959114158209754;
    var_552 = 38632;
    var_560 = -351125813381875025;
    var_568 = 24;
    pri = fun_9AA0(var_560, var_552, var_544)
    var_576 = 1;
    var_584 = 0;
    var_592 = 4641240890982006784;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH4_C 4671144308722630656, 4671240515990061056, 4607182418800017408, -351125813381875025
    var_616 = 72;
    pri = fun_08C8(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 60;
    var_632 = 8;
    pri = fun_0060(var_624)
    var_640 = 0;
    var_648 = 4630770021848370381;
    var_656 = 0;
    OP_PUSH5_C 4671247434666978836, 4635254621914812908, 4671236533009189437, 4671145914009607209, 4633352554759690650
    var_664 = 4671209930325355397;
    var_672 = 1;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 0;
    pri = fun_2960()
    var_688 = 0;
    var_696 = 4630770021848370381;
    var_704 = 2;
    OP_PUSH5_C 4671239892017212293, 4634787373453473219, 4671234553888259441, 4671138371359840666, 4632416650462127718
    var_712 = 4671207951204425400;
    var_720 = 240;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 0;
    var_736 = 0;
    var_744 = 0;
    var_752 = 170;
    pri = float(var_752)
    var_760 = pri;
    var_768 = 8802641224559852288;
    var_776 = 40;
    pri = fun_0998(var_768, var_760, var_752, var_744, var_736)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C 5245930639791955654, -351125813381875025
    var_824 = 56;
    pri = fun_1F48(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 1;
    var_840 = 8;
    pri = fun_2208(var_832)
    var_848 = 0;
    pri = fun_22C8()
    var_856 = -351125813381875025;
    var_864 = 8;
    pri = fun_09E8(var_856)
    var_872 = 8802641224559852288;
    var_880 = 8;
    pri = fun_09E8(var_872)
    pri = 0;
    return pri;
}
// fun_EC88
fun_EC88() {
    pri = 0;
    return pri;
}
// fun_ECA0
fun_ECA0() {
    var_8 = 1150;
    var_16 = 8;
    pri = fun_B860(var_8)
    var_24 = 50;
    var_32 = 8021964092511761817;
    pri = WorkSet(var_32, var_24)
    var_40 = 20;
    var_48 = -2203345006408775911;
    pri = WorkSet(var_48, var_40)
    var_56 = 10;
    var_64 = 8073260580274969210;
    pri = WorkSet(var_64, var_56)
    var_72 = -351125813381875025;
    pri = FlagSet(var_72)
    var_80 = 1058120175172563091;
    pri = VanishFlagSet(var_80)
    var_88 = 1058121274684191302;
    pri = VanishFlagSet(var_88)
    var_96 = -7417824923732940501;
    pri = VanishFlagReset(var_96)
    var_104 = 7856789072662591994;
    pri = VanishFlagReset(var_104)
    var_112 = -464315911094145909;
    pri = VanishFlagReset(var_112)
    var_120 = -464312612559261276;
    pri = VanishFlagReset(var_120)
    var_128 = -3467343721533817634;
    var_136 = 8;
    pri = fun_A870(var_128)
    var_144 = 1;
    var_152 = 414;
    pri = ItemAdd(var_152, var_144)
    var_160 = 38704;
    var_168 = 8;
    pri = fun_2BD0(var_160)
    var_176 = -7105280201324203902;
    pri = FlagSet(var_176)
    pri = 0;
    return pri;
}
// fun_EF18
fun_EF18() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_AEC0(var_16, var_8)
    var_32 = 0;
    var_40 = 9;
    var_48 = 16;
    pri = fun_B080(var_40, var_32)
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_B9D0(var_64, var_56)
    var_80 = 1;
    var_88 = -351125813381875025;
    var_96 = 16;
    pri = fun_B9D0(var_88, var_80)
    var_104 = 0;
    var_112 = 5704159306352809297;
    var_120 = 0;
    var_128 = 180;
    var_136 = 2100;
    var_144 = 2425;
    OP_PUSH2_C 6748990845828786157, 1600324353207277444
    var_152 = -1;
    var_160 = 72;
    pri = fun_B178(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    pri = 0;
    return pri;
}
// fun_F050
fun_F050() {
    var_8 = 1120;
    var_16 = 8;
    pri = fun_B860(var_8)
    pri = 0;
    return pri;
}
// fun_F088
fun_F088() {
    var_8 = 180;
    var_16 = 2131071359479068524;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C 6748990845828786157, 1600324353207277444
    var_40 = 9;
    var_48 = 56;
    pri = fun_B7C0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_F100
fun_F100() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_BCC0()
    var_16 = 0;
    pri = fun_BD18()
    var_24 = 0;
    pri = fun_BD30()
    var_32 = 0;
    pri = fun_BD48()
    var_40 = 0;
    pri = fun_EC88()
    var_48 = 0;
    pri = fun_ECA0()
    var_56 = 0;
    pri = fun_EF18()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_F1F0
fun_F1F0() {
    var_8 = 38776;
    var_16 = 8;
    pri = fun_23B0(var_8)
    var_24 = 0;
    pri = fun_23E8()
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = -4287187132169455684;
    var_80 = 48;
    pri = fun_9008(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C -3801774474394904819, -4287187132169455684
    var_128 = 56;
    pri = fun_1FF8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_2208(var_136)
    var_152 = 0;
    pri = fun_22C8()
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = -4287187132169455684;
    var_192 = 32;
    pri = fun_91C8(var_184, var_176, var_168, var_160)
    var_200 = 0;
    pri = fun_2488()
    pri = 0;
    return pri;
}
// fun_F378
fun_F378() {
    var_8 = 0;
    pri = fun_BD18()
    var_16 = 0;
    pri = fun_ECA0()
    pri = 0;
    return pri;
}
// fun_F3C0
fun_F3C0() {
    var_8 = 1273692378335053008;
    var_16 = 8;
    pri = fun_B5B0(var_8)
    OP_JZER lab_F430
    var_24 = 0;
    pri = fun_F050()
    var_32 = 0;
    pri = fun_F088()
// lab_F430
    pri = 0;
    return pri;
}
