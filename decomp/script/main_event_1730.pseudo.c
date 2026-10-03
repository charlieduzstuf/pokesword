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
    pri = fun_12F0(var_8)
    OP_JZER lab_0958
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1320(var_24)
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
    pri = fun_12F0(var_8)
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
    pri = fun_0DA8(var_8)
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
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0CC8
// lab_0CC8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D20
    pri = 0;
    return pri;
// lab_0D20
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CC8
    pri = 0;
    return pri;
}
// fun_0DA8
fun_0DA8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E30
    pri = 0;
    return pri;
// lab_0E30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12F0(var_8)
    OP_JZER lab_0F60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E88
    OP_ZERO_P_S 64
// lab_0F60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F98
    OP_CONST_S 64, 1
// lab_0F98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FD0
    OP_CONST_S 72, 1
// lab_0FD0
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
// lab_0E88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB0
    OP_ZERO_P_S 72
// lab_0EB0
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
    OP_JUMP lab_1070
// lab_1070
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F8
fun_11F8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1140(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_11B8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1298
fun_1298() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1180(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11F8(var_24)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1350
fun_1350() {
    OP_JUMP lab_1368
// lab_1368
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_13F8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_13E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A80(var_8)
    pri = 0;
    return pri;
// lab_13F8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1488
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1478
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A80(var_8)
    pri = 0;
    return pri;
// lab_1488
    pri = 0;
    return pri;
// lab_1478
    OP_JUMP lab_1498
// lab_1498
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1368
    pri = 0;
    return pri;
// lab_13E8
    OP_JUMP lab_1498
}
// fun_14D8
fun_14D8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A80(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1350(var_40)
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_15C0
fun_15C0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1688
fun_1688() {
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
// switch_1CA0
        case default:
        {
// switch_1CA0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1CE8
// lab_1CE8
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
            OP_JNZ lab_1D90
            var_88 = 0;
            pri = fun_1F48()
// lab_1D90
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1CA0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1888
                case default:
                {
// switch_1888_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1900
// lab_1900
                    OP_JUMP lab_1CE8
                }
                case 0x0:
                {
// switch_1888_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1900
                }
                case 0x1:
                {
// switch_1888_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1900
                }
                case 0x2:
                {
// switch_1888_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1900
                }
                case 0x3:
                {
// switch_1888_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1900
                }
                case 0x4:
                {
// switch_1888_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1900
                }
                case 0x5:
                {
// switch_1888_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1900
                }
            }
        }
        case 0x65:
        {
// switch_1CA0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A40
                case default:
                {
// switch_1A40_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1AB8
// lab_1AB8
                    OP_JUMP lab_1CE8
                }
                case 0x0:
                {
// switch_1A40_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1AB8
                }
                case 0x1:
                {
// switch_1A40_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1AB8
                }
                case 0x2:
                {
// switch_1A40_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1AB8
                }
                case 0x3:
                {
// switch_1A40_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1AB8
                }
                case 0x4:
                {
// switch_1A40_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1AB8
                }
                case 0x5:
                {
// switch_1A40_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1AB8
                }
            }
        }
        case 0x66:
        {
// switch_1CA0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1BF8
                case default:
                {
// switch_1BF8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C70
// lab_1C70
                    OP_JUMP lab_1CE8
                }
                case 0x0:
                {
// switch_1BF8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C70
                }
                case 0x1:
                {
// switch_1BF8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C70
                }
                case 0x2:
                {
// switch_1BF8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C70
                }
                case 0x3:
                {
// switch_1BF8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C70
                }
                case 0x4:
                {
// switch_1BF8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C70
                }
                case 0x5:
                {
// switch_1BF8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C70
                }
            }
        }
    }
}
// fun_1DA8
fun_1DA8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A48(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E50
    pri = 1;
    return pri;
// lab_1E50
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1E98
fun_1E98() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1EE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DA8(var_8)
    arg_2 = pri;
// lab_1EE8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1688(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F48
fun_1F48() {
    OP_JUMP lab_1F60
// lab_1F60
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1FA0
    pri = 0;
    return pri;
// lab_1FA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F60
    pri = 0;
    return pri;
}
// fun_1FE0
fun_1FE0() {
    var_8 = 0;
    pri = fun_1F48()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2090
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2090
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_20D0
fun_20D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2120
fun_2120() {
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
// fun_2180
fun_2180() {
    OP_JUMP lab_2198
// lab_2198
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_21D0
    pri = 0;
    return pri;
// lab_21D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2198
    pri = 0;
    return pri;
}
// fun_2210
fun_2210() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2240
fun_2240() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_22B8
fun_22B8() {
    var_8 = 0;
    pri = fun_2240()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2338
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2338
    pri = 1;
    return pri;
// lab_2338
    var_8 = 0;
    pri = fun_2240()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2378
    pri = 1;
    return pri;
// lab_2378
    var_8 = 0;
    pri = fun_2240()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_23A8
fun_23A8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_23F8
fun_23F8() {
    OP_JUMP lab_2410
// lab_2410
    pri = EvCameraMoveWait_()
    OP_JZER lab_2448
    pri = 0;
    return pri;
// lab_2448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2410
    pri = 0;
    return pri;
}
// fun_2488
fun_2488() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_24F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_25C8()
    pri = 0;
    return pri;
}
// fun_24F0
fun_24F0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_24F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_25C8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_25C8
fun_25C8() {
    OP_JUMP lab_25E0
// lab_25E0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2648
// lab_2638
    pri = 0;
    return pri;
// lab_2648
    OP_JUMP lab_25E0
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    pri = arg_5;
    OP_JNZ lab_26A0
    var_8 = 0;
    pri = fun_1080()
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
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A48(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4650
            pri = 1;
            OP_JUMP lab_4658
// lab_4650
            pri = 0;
// lab_4658
            OP_JZER lab_46A8
            var_8 = 64;
            var_16 = 20488;
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
            var_16 = 20664;
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
            OP_JUMP lab_4900
// lab_48A0
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
            pri = fun_10C0()
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
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DA8(var_40)
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
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            var_24 = 19968;
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
            var_24 = 20144;
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
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            OP_JUMP switch_41A8_case_default
        }
    }
}
// fun_49A0
fun_49A0() {
    pri = arg_4;
    OP_JNZ lab_49D8
    var_8 = 0;
    pri = fun_1080()
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
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_12F0(var_264)
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
                    pri = fun_10C0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6320_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6320_case_default
                }
                case 0x2:
                {
// switch_6320_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6320_case_default
                }
                case 0x3:
                {
// switch_6320_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
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
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A48(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6438
            pri = 1;
            OP_JUMP lab_6440
// lab_6438
            pri = 0;
// lab_6440
            OP_JZER lab_6490
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6630
// lab_6490
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_64F8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6630
// lab_64F8
            var_16 = 22088;
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
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DA8(var_40)
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
            var_24 = 20936;
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
            var_24 = 21112;
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
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A08(var_24, var_16, var_8)
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
    pri = 22256;
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
    var_424 = 22312;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22328;
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
    var_16 = 22376;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A08(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6928
fun_6928() {
    pri = 22480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_69B0
// lab_69B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6B30
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6B20
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6A70
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6A70
    pri = 0;
    OP_JUMP lab_6A78
// lab_6B30
    pri = 0;
    return pri;
// lab_6B20
    OP_JUMP lab_69A8
// lab_69A8
    OP_INC_P_S -936
// lab_6A70
    pri = 1;
// lab_6A78
    OP_JZER lab_6AF0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6AE8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6AF0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6AE8
}
// fun_6B50
fun_6B50() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_6B98
    pri = arg_0;
    return pri;
// lab_6B98
    pri = arg_1;
    return pri;
}
// fun_6BA8
fun_6BA8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6C40
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1598()
// lab_6C40
    pri = arg_4;
    OP_JZER lab_6C78
    var_8 = 1;
    var_16 = 8;
    pri = fun_1650(var_8)
// lab_6C78
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6CD0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6CD0
    pri = 0;
    OP_JUMP lab_6CD8
// lab_6CD0
    pri = 1;
// lab_6CD8
    OP_JZER lab_6DA0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6DA0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6D78
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_14D8(var_32, var_24)
    OP_JUMP lab_6DA0
// lab_6DA0
    pri = arg_2;
    OP_JZER lab_6E78
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6E48
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1100(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0788(var_40)
    OP_JUMP lab_6E78
// lab_6E78
    pri = arg_3;
    OP_JZER lab_6EB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1560(var_8)
// lab_6EB0
    pri = 0;
    return pri;
// lab_6E48
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1100(var_16, var_8)
// lab_6D78
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_14D8(var_16, var_8)
}
// fun_6EC0
fun_6EC0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_7040
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6F58
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_7040
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6F58
    pri = arg_0;
    OP_JNZ lab_6FA0
    var_8 = 23448;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6FC0
// lab_6FA0
    var_8 = 23624;
    pri = SoundPostEvent(var_8)
// lab_6FC0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0590(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7040
    var_24 = 23888;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_7080
fun_7080() {
    var_16 = 136;
    var_24 = 135;
    var_32 = 16;
    pri = fun_6B50(var_24, var_16)
    var_8 = pri;
    var_48 = 78;
    var_56 = 77;
    var_64 = 16;
    pri = fun_6B50(var_56, var_48)
    var_16 = pri;
    pri = 23936;
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
    pri = 24000;
    OP_ADDR_ALT -144
    OP_MOVS 64
    var_208 = 52;
    var_216 = 51;
    var_224 = 16;
    pri = fun_6B50(var_216, var_208)
    var_152 = pri;
    var_240 = 49;
    var_248 = 48;
    var_256 = 16;
    pri = fun_6B50(var_248, var_240)
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
// fun_72C8
fun_72C8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6928(var_24)
    pri = 0;
    return pri;
}
// fun_7330
fun_7330() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_74B0(var_16)
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
    var_96 = 24120;
    var_104 = 24064;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_15C0(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_7438
fun_7438() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_74B0(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1610(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_74B0
fun_74B0() {
    pri = arg_0;
    OP_JNZ lab_74F8
    var_8 = 24176;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_74F8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7540
    var_8 = 24328;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_7540
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 24480;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_7588
fun_7588() {
    pri = g_mode;
    switch (pri) {
// switch_7648
        case default:
        {
// switch_7648_case_default
            pri = CommandNOP()
            OP_JUMP lab_7690
// lab_7690
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7648_case_0x0
            var_8 = 0;
            pri = fun_76A0()
            OP_JUMP lab_7690
        }
        case 0x300d502aeb017e75:
        {
// switch_7648_case_0x300d502aeb017e75
            var_8 = 0;
            pri = fun_9FB8()
            OP_JUMP lab_7690
        }
        case 0x57203e278793d101:
        {
// switch_7648_case_0x57203e278793d101
            var_8 = 0;
            pri = fun_A0A8()
            OP_JUMP lab_7690
        }
    }
}
// fun_76A0
fun_76A0() {
    pri = 0;
    return pri;
}
// fun_76B8
fun_76B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6BA8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7710
fun_7710() {
    pri = 0;
    return pri;
}
// fun_7728
fun_7728() {
    pri = 0;
    return pri;
}
// fun_7740
fun_7740() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 23400;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_7330(var_64, var_56)
    var_80 = 1;
    var_88 = -8446806533310799730;
    var_96 = 16;
    pri = fun_7330(var_88, var_80)
    pri = EvCameraStart()
    OP_CONST_S -8, 274
    var_112 = 27;
    var_120 = 0;
    var_128 = var_8;
    var_136 = 213;
    var_144 = 32;
    pri = fun_2120(var_136, var_128, var_120, var_112)
    var_152 = 1;
    var_160 = 8802641224559852288;
    var_168 = 16;
    pri = fun_0748(var_160, var_152)
    var_176 = 1;
    var_184 = -8446806533310799730;
    var_192 = 16;
    pri = fun_0748(var_184, var_176)
    var_200 = 1;
    var_208 = 3458049540832089695;
    var_216 = 16;
    pri = fun_0748(var_208, var_200)
    var_224 = 1;
    var_232 = 3458048441320461484;
    var_240 = 16;
    pri = fun_0748(var_232, var_224)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_264 = 48;
    pri = fun_06F0(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    var_288 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, -8446806533310799730
    var_296 = 48;
    pri = fun_06F0(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 2;
    var_312 = 2;
    var_320 = 8802641224559852288;
    var_328 = 24;
    pri = fun_1230(var_320, var_312, var_304)
    var_336 = 1;
    var_344 = 1;
    var_352 = -8446806533310799730;
    var_360 = 24;
    pri = fun_1230(var_352, var_344, var_336)
    var_368 = 0;
    var_376 = 60;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 24488;
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
    pri = fun_23F8()
    var_464 = 0;
    var_472 = 4631952216750555136;
    var_480 = 2;
    OP_PUSH5_C 4671339496775572521, 4654420956766483251, 4671219735220296090, 4671487458055322337, 4654693019923660145
    var_488 = 4670935629662015980;
    var_496 = 1200;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 23888;
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
    var_576 = -1385185865557171436;
    var_584 = -1;
    var_592 = 56;
    pri = fun_1E98(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_1FE0(var_600)
    var_616 = 1;
    var_624 = 0;
    var_632 = 0;
    var_640 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_648 = 48;
    pri = fun_0838(var_640, var_632, var_624, var_616, var_608, var_600)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_656 = 16;
    pri = fun_2488(var_648, var_640)
    var_664 = 0;
    var_672 = 1;
    var_680 = 220;
    pri = float(var_680)
    var_688 = pri;
    var_696 = 4609434218613702656;
    var_704 = 32;
    pri = fun_24F0(var_696, var_688, var_680, var_672)
    var_712 = 0;
    var_720 = 4630798169346041446;
    var_728 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_736 = 4671166637055011717;
    var_744 = 1;
    pri = EvCameraMove(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_752 = 0;
    pri = fun_23F8()
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
    pri = fun_24F0(var_832, var_824, var_816, var_808)
    var_848 = 15;
    var_856 = 8;
    pri = fun_0060(var_848)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 101;
    var_896 = 0;
    var_904 = -1385182567022286803;
    var_912 = -1;
    var_920 = 56;
    pri = fun_1E98(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_928 = 8802641224559852288;
    var_936 = 8;
    pri = fun_08E0(var_928)
    var_944 = 1;
    var_952 = 8;
    pri = fun_1FE0(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 0;
    var_984 = 75;
    OP_PUSH2_C 4607182418800017408, -8446806533310799730
    var_992 = 48;
    pri = fun_0838(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 0;
    var_1008 = 1;
    var_1016 = 220;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = 4609434218613702656;
    var_1040 = 32;
    pri = fun_24F0(var_1032, var_1024, var_1016, var_1008)
    var_1048 = 0;
    var_1056 = 4630798169346041446;
    var_1064 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_1072 = 4671252805781280522;
    var_1080 = 1;
    pri = EvCameraMove(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1088 = 0;
    pri = fun_23F8()
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
    var_1176 = -1385183666533915014;
    var_1184 = -1;
    var_1192 = 56;
    pri = fun_1E98(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = -8446806533310799730;
    var_1208 = 8;
    pri = fun_08E0(var_1200)
    var_1216 = 1;
    var_1224 = 8;
    pri = fun_0060(var_1216)
    var_1232 = 1;
    var_1240 = 8;
    pri = fun_1FE0(var_1232)
    var_1248 = 0;
    pri = fun_20A0()
    var_1256 = 1;
    var_1264 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_1272 = 48;
    pri = fun_06F0(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1280 = 1;
    var_1288 = 1;
    var_1296 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, -8446806533310799730
    var_1304 = 48;
    pri = fun_06F0(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
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
    pri = fun_07C0(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 1;
    var_1384 = 0;
    var_1392 = 4641240890982006784;
    var_1400 = 0;
    var_1408 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, -8446806533310799730
    var_1416 = 72;
    pri = fun_07C0(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
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
    pri = fun_24F0(var_1472, var_1464, var_1456, var_1448)
    var_1488 = 0;
    var_1496 = 4626857519672092262;
    var_1504 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1512 = 4671083459000370463;
    var_1520 = 1;
    pri = EvCameraMove(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1528 = 0;
    pri = fun_23F8()
    var_1536 = 0;
    var_1544 = 4626857519672092262;
    var_1552 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1560 = 4671072741510778716;
    var_1568 = 480;
    pri = EvCameraMove(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1576 = 8802641224559852288;
    var_1584 = 8;
    pri = fun_08E0(var_1576)
    var_1592 = -8446806533310799730;
    var_1600 = 8;
    pri = fun_08E0(var_1592)
    var_1608 = 15;
    var_1616 = 8;
    pri = fun_0060(var_1608)
    var_1624 = 0;
    var_1632 = 30;
    pri = float(var_1632)
    var_1640 = pri;
    var_1648 = 24624;
    pri = SoundSetRTPC(var_1648, var_1640, var_1632)
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 0;
    var_1680 = 90;
    pri = float(var_1680)
    var_1688 = pri;
    var_1696 = 8802641224559852288;
    var_1704 = 40;
    pri = fun_0890(var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 0;
    var_1736 = 270;
    pri = float(var_1736)
    var_1744 = pri;
    var_1752 = -8446806533310799730;
    var_1760 = 40;
    pri = fun_0890(var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1768 = 30;
    var_1776 = 8;
    pri = fun_0060(var_1768)
    var_1784 = 8802641224559852288;
    var_1792 = 8;
    pri = fun_08E0(var_1784)
    var_1800 = -8446806533310799730;
    var_1808 = 8;
    pri = fun_08E0(var_1800)
    var_1816 = 0;
    var_1824 = 1;
    var_1832 = -8446806533310799730;
    var_1840 = 24;
    pri = fun_66D0(var_1832, var_1824, var_1816)
    var_1848 = 2;
    var_1856 = 6;
    var_1864 = -8446806533310799730;
    var_1872 = 24;
    pri = fun_1230(var_1864, var_1856, var_1848)
    var_1880 = 0;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 100;
    var_1912 = -1;
    OP_PUSH2_C 5362968320687182229, -8446806533310799730
    var_1920 = 56;
    pri = fun_1E98(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1928 = 1;
    var_1936 = 8;
    pri = fun_1FE0(var_1928)
    var_1944 = 0;
    var_1952 = 0;
    var_1960 = -8446806533310799730;
    var_1968 = 24;
    pri = fun_66D0(var_1960, var_1952, var_1944)
    var_1976 = 2;
    var_1984 = -8446806533310799730;
    var_1992 = 16;
    pri = fun_1140(var_1984, var_1976)
    var_2000 = 0;
    var_2008 = 3;
    var_2016 = 0;
    var_2024 = 100;
    var_2032 = -1;
    OP_PUSH2_C 5362965022152297596, -8446806533310799730
    var_2040 = 56;
    pri = fun_1E98(var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
    var_2048 = 1;
    var_2056 = 8;
    pri = fun_1FE0(var_2048)
    var_2064 = 1;
    var_2072 = 1;
    var_2080 = -1;
    var_2088 = -1;
    var_2096 = 0;
    var_2104 = 8;
    var_2112 = -8446806533310799730;
    var_2120 = 56;
    pri = fun_2668(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064)
    var_2128 = 0;
    var_2136 = 3;
    var_2144 = 0;
    var_2152 = 100;
    var_2160 = -1;
    OP_PUSH2_C 5362966121663925807, -8446806533310799730
    var_2168 = 56;
    pri = fun_1E98(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2176 = 1;
    var_2184 = 8;
    pri = fun_1FE0(var_2176)
    var_2192 = 0;
    pri = fun_20A0()
    var_2200 = 24760;
    var_2208 = -8446806533310799730;
    var_2216 = 16;
    pri = fun_0C80(var_2208, var_2200)
    var_2224 = 1;
    var_2232 = 3;
    var_2240 = 0;
    var_2248 = 8;
    var_2256 = -8446806533310799730;
    var_2264 = 40;
    pri = fun_49A0(var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2272 = -8446806533310799730;
    var_2280 = 8;
    pri = fun_0A80(var_2272)
    var_2288 = 0;
    var_2296 = 1;
    var_2304 = 200;
    pri = float(var_2304)
    var_2312 = pri;
    var_2320 = 4612811918334230528;
    var_2328 = 32;
    pri = fun_24F0(var_2320, var_2312, var_2304, var_2296)
    var_2336 = 0;
    var_2344 = 4631952216750555136;
    var_2352 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_2360 = 4671031446602818519;
    var_2368 = 1;
    pri = EvCameraMove(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2376 = 0;
    pri = fun_23F8()
    var_2384 = 0;
    var_2392 = 4631952216750555136;
    var_2400 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_2408 = 4671018568572878193;
    var_2416 = 240;
    pri = EvCameraMove(var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2424 = 0;
    var_2432 = 60;
    pri = float(var_2432)
    var_2440 = pri;
    var_2448 = 24936;
    pri = SoundSetRTPC(var_2448, var_2440, var_2432)
    var_2456 = 25072;
    pri = SoundPostEvent(var_2456)
    var_2464 = 30;
    var_2472 = 8;
    pri = fun_0060(var_2464)
    var_2480 = 0;
    var_2488 = 120;
    var_2496 = 850;
    pri = float(var_2496)
    var_2504 = pri;
    var_2512 = 4605380978949069210;
    var_2520 = 32;
    pri = fun_24F0(var_2512, var_2504, var_2496, var_2488)
    var_2528 = 1;
    var_2536 = 0;
    var_2544 = 4641240890982006784;
    var_2552 = 0;
    var_2560 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2568 = 72;
    pri = fun_07C0(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2576 = 1;
    var_2584 = 0;
    var_2592 = 4641240890982006784;
    var_2600 = 0;
    var_2608 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -8446806533310799730
    var_2616 = 72;
    pri = fun_07C0(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2624 = 8802641224559852288;
    var_2632 = 8;
    pri = fun_08E0(var_2624)
    var_2640 = -8446806533310799730;
    var_2648 = 8;
    pri = fun_08E0(var_2640)
    var_2656 = 15;
    var_2664 = 8;
    pri = fun_0060(var_2656)
    var_2672 = 0;
    var_2680 = 0;
    var_2688 = 0;
    var_2696 = 90;
    pri = float(var_2696)
    var_2704 = pri;
    var_2712 = 8802641224559852288;
    var_2720 = 40;
    pri = fun_0890(var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2728 = 0;
    var_2736 = 0;
    var_2744 = 0;
    var_2752 = 270;
    pri = float(var_2752)
    var_2760 = pri;
    var_2768 = -8446806533310799730;
    var_2776 = 40;
    pri = fun_0890(var_2768, var_2760, var_2752, var_2744, var_2736)
    var_2784 = 30;
    var_2792 = 8;
    pri = fun_0060(var_2784)
    var_2800 = 8802641224559852288;
    var_2808 = 8;
    pri = fun_08E0(var_2800)
    var_2816 = -8446806533310799730;
    var_2824 = 8;
    pri = fun_08E0(var_2816)
    var_2832 = 0;
    pri = fun_2180()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2840 = 3;
    var_2848 = 1;
    var_2856 = 32;
    pri = fun_2548(var_2848, var_2840, var_2832, var_2824)
    var_2864 = 0;
    pri = fun_2210()
    var_2872 = 0;
    pri = fun_22B8()
    OP_JZER lab_9060
    var_2880 = 0;
    pri = fun_23A8()
// lab_9060
    var_8 = 0;
    var_16 = 0;
    var_24 = 25320;
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
    var_128 = -8446806533310799730;
    var_136 = 48;
    pri = fun_06F0(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_1298(var_144)
    var_160 = 2;
    var_168 = 2;
    var_176 = -8446806533310799730;
    var_184 = 24;
    pri = fun_1230(var_176, var_168, var_160)
    var_192 = 15;
    var_200 = 8;
    pri = fun_0060(var_192)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_208 = 16;
    pri = fun_2488(var_200, var_192)
    var_216 = 0;
    var_224 = 1;
    var_232 = 250;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 4609434218613702656;
    var_256 = 32;
    pri = fun_24F0(var_248, var_240, var_232, var_224)
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
    pri = fun_07C0(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
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
    OP_PUSH2_C 4607182418800017408, -8446806533310799730
    var_416 = 72;
    pri = fun_07C0(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    var_432 = 4631952216750555136;
    var_440 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_448 = 4671115501517982925;
    var_456 = 1;
    pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 0;
    pri = fun_23F8()
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
    var_536 = 25472;
    pri = SoundSetRTPC(var_536, var_528, var_520)
    var_544 = 23888;
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
    var_616 = -1385189164092056069;
    var_624 = -1;
    var_632 = 56;
    pri = fun_1E98(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 8802641224559852288;
    var_648 = 8;
    pri = fun_08E0(var_640)
    var_656 = -8446806533310799730;
    var_664 = 8;
    pri = fun_08E0(var_656)
    var_672 = 15;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 1;
    var_696 = 8;
    pri = fun_1FE0(var_688)
    var_704 = 0;
    pri = fun_20A0()
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
    pri = fun_24F0(var_760, var_752, var_744, var_736)
    var_776 = 0;
    var_784 = 4629587826946185626;
    var_792 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_800 = 4671148720513037107;
    var_808 = 1;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 0;
    pri = fun_23F8()
    var_824 = 0;
    var_832 = 4629587826946185626;
    var_840 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_848 = 4671146447272746680;
    var_856 = 240;
    pri = EvCameraMove(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 100;
    var_896 = -1;
    OP_PUSH2_C 5362963922640669385, -8446806533310799730
    var_904 = 56;
    pri = fun_1E98(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 8;
    pri = fun_1FE0(var_912)
    var_928 = 1;
    var_936 = 1;
    var_944 = -1;
    var_952 = -1;
    var_960 = 0;
    var_968 = 8;
    var_976 = -8446806533310799730;
    var_984 = 56;
    pri = fun_2668(var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_992 = 0;
    var_1000 = 3;
    var_1008 = 0;
    var_1016 = 100;
    var_1024 = -1;
    OP_PUSH2_C 5362960624105784752, -8446806533310799730
    var_1032 = 56;
    pri = fun_1E98(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 1;
    var_1048 = 8;
    pri = fun_1FE0(var_1040)
    var_1056 = 1;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 8;
    var_1088 = -8446806533310799730;
    var_1096 = 40;
    pri = fun_49A0(var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1104 = -8446806533310799730;
    var_1112 = 8;
    pri = fun_0A80(var_1104)
    var_1120 = 0;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 100;
    var_1152 = -1;
    OP_PUSH2_C 5362961723617412963, -8446806533310799730
    var_1160 = 56;
    pri = fun_1E98(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 1;
    var_1176 = 8;
    pri = fun_1FE0(var_1168)
    var_1184 = 0;
    pri = fun_20A0()
    var_1192 = 1;
    var_1200 = 8;
    pri = fun_20D0(var_1192)
    var_1208 = 0;
    var_1216 = 3;
    var_1224 = 0;
    var_1232 = 101;
    var_1240 = 0;
    var_1248 = -1385190263603684280;
    var_1256 = -1;
    var_1264 = 56;
    pri = fun_1E98(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 1;
    var_1280 = 8;
    pri = fun_1FE0(var_1272)
    var_1288 = 0;
    pri = fun_20A0()
    var_1296 = 3;
    var_1304 = 9027797789697785470;
    pri = WorkSet(var_1304, var_1296)
    var_1312 = 0;
    var_1320 = 9027796690186157259;
    pri = WorkSet(var_1320, var_1312)
    var_1328 = 1;
    var_1336 = 9027795590674529048;
    pri = WorkSet(var_1336, var_1328)
    var_1344 = 0;
    var_1352 = 9027803287255926525;
    pri = WorkSet(var_1352, var_1344)
    var_1360 = 1;
    var_1368 = 9027802187744298314;
    pri = WorkSet(var_1368, var_1360)
    var_1376 = 0;
    var_1384 = 9027801088232670103;
    pri = WorkSet(var_1384, var_1376)
    var_1392 = 0;
    var_1400 = 9027799988721041892;
    pri = WorkSet(var_1400, var_1392)
    var_1408 = 2;
    var_1416 = 9027790093116387993;
    pri = WorkSet(var_1416, var_1408)
    var_1424 = 3;
    var_1432 = 8;
    pri = fun_7080(var_1424)
    var_1440 = 12;
    var_1448 = 8;
    pri = fun_0408(var_1440)
    var_1456 = 0;
    pri = fun_0440()
    var_1464 = 25608;
    pri = SoundPostEvent(var_1464)
    var_1472 = 1;
    var_1480 = 0;
    var_1488 = 25872;
    var_1496 = 8;
    var_1504 = 32;
    pri = fun_02E0(var_1496, var_1488, var_1480, var_1472)
    var_1512 = 0;
    pri = fun_0350()
    var_1520 = 0;
    var_1528 = 8802641224559852288;
    var_1536 = 16;
    pri = fun_7438(var_1528, var_1520)
    var_1544 = 1;
    var_1552 = -8446806533310799730;
    var_1560 = 16;
    pri = fun_7438(var_1552, var_1544)
    var_1568 = 3;
    var_1576 = 1;
    pri = EvCameraEnd(var_1576, var_1568)
    pri = 0;
    return pri;
}
// fun_9E28
fun_9E28() {
    pri = 0;
    return pri;
}
// fun_9E40
fun_9E40() {
    var_8 = 1780;
    var_16 = 8;
    pri = fun_72C8(var_8)
    var_24 = -8397937223901467836;
    pri = VanishFlagReset(var_24)
    var_32 = -8446806533310799730;
    pri = VanishFlagSet(var_32)
    pri = 0;
    return pri;
}
// fun_9EC8
fun_9EC8() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_6EC0(var_16, var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 2275;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 1719;
    pri = float(var_88)
    var_96 = pri;
    OP_PUSH3_C 9117463143071301695, -3308731028398755628, 3455745439220685718
    var_104 = 80;
    pri = fun_04D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_9FB8
fun_9FB8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_76B8()
    var_16 = 0;
    pri = fun_7710()
    var_24 = 0;
    pri = fun_7728()
    var_32 = 0;
    pri = fun_7740()
    var_40 = 0;
    pri = fun_9E28()
    var_48 = 0;
    pri = fun_9E40()
    var_56 = 0;
    pri = fun_9EC8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A0A8
fun_A0A8() {
    var_8 = 0;
    pri = fun_7710()
    var_16 = 0;
    pri = fun_9E40()
    pri = 0;
    return pri;
}
