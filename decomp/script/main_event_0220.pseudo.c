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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
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
// fun_0468
fun_0468() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0498
fun_0498() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
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
// fun_0548
fun_0548() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D80(var_8)
    OP_JZER lab_06C0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0DB0(var_24)
    OP_JNZ lab_06C0
    pri = 0;
    return pri;
// lab_06C0
    OP_JUMP lab_06D0
// lab_06D0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0730
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0730
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06D0
    pri = 0;
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0830
    pri = 0;
    return pri;
// lab_0830
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0870
// lab_0870
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D80(var_8)
    OP_JNZ lab_08F8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08E8
    pri = 0;
    return pri;
// lab_08F8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0940
    pri = 0;
    return pri;
// lab_0940
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09E8(var_8)
    pri = 0;
    return pri;
// lab_09A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0870
    pri = 0;
    return pri;
// lab_08E8
    OP_JUMP lab_0940
}
// fun_09E8
fun_09E8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A70
    pri = 0;
    return pri;
// lab_0A70
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D80(var_8)
    OP_JZER lab_0BA0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AC8
    OP_ZERO_P_S 64
// lab_0BA0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BD8
    OP_CONST_S 64, 1
// lab_0BD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C10
    OP_CONST_S 72, 1
// lab_0C10
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
// lab_0AC8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AF0
    OP_ZERO_P_S 72
// lab_0AF0
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
    OP_JUMP lab_0CB0
// lab_0CB0
    pri = 0;
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D40
fun_0D40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D80
fun_0D80() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0DE0
fun_0DE0() {
    OP_JUMP lab_0DF8
// lab_0DF8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0E88
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0E78
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E8(var_8)
    pri = 0;
    return pri;
// lab_0E88
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F18
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F08
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E8(var_8)
    pri = 0;
    return pri;
// lab_0F18
    pri = 0;
    return pri;
// lab_0F08
    OP_JUMP lab_0F28
// lab_0F28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DF8
    pri = 0;
    return pri;
// lab_0E78
    OP_JUMP lab_0F28
}
// fun_0F68
fun_0F68() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_07E8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0DE0(var_40)
    pri = 0;
    return pri;
}
// fun_0FF0
fun_0FF0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1050
fun_1050() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1088
fun_1088() {
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
// switch_16A0
        case default:
        {
// switch_16A0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_16E8
// lab_16E8
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
            OP_JNZ lab_1790
            var_88 = 0;
            pri = fun_1948()
// lab_1790
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_16A0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1288
                case default:
                {
// switch_1288_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1300
// lab_1300
                    OP_JUMP lab_16E8
                }
                case 0x0:
                {
// switch_1288_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1300
                }
                case 0x1:
                {
// switch_1288_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1300
                }
                case 0x2:
                {
// switch_1288_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1300
                }
                case 0x3:
                {
// switch_1288_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1300
                }
                case 0x4:
                {
// switch_1288_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1300
                }
                case 0x5:
                {
// switch_1288_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1300
                }
            }
        }
        case 0x65:
        {
// switch_16A0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1440
                case default:
                {
// switch_1440_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_14B8
// lab_14B8
                    OP_JUMP lab_16E8
                }
                case 0x0:
                {
// switch_1440_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_14B8
                }
                case 0x1:
                {
// switch_1440_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_14B8
                }
                case 0x2:
                {
// switch_1440_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_14B8
                }
                case 0x3:
                {
// switch_1440_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_14B8
                }
                case 0x4:
                {
// switch_1440_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_14B8
                }
                case 0x5:
                {
// switch_1440_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_14B8
                }
            }
        }
        case 0x66:
        {
// switch_16A0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_15F8
                case default:
                {
// switch_15F8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1670
// lab_1670
                    OP_JUMP lab_16E8
                }
                case 0x0:
                {
// switch_15F8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1670
                }
                case 0x1:
                {
// switch_15F8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1670
                }
                case 0x2:
                {
// switch_15F8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1670
                }
                case 0x3:
                {
// switch_15F8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1670
                }
                case 0x4:
                {
// switch_15F8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1670
                }
                case 0x5:
                {
// switch_15F8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1670
                }
            }
        }
    }
}
// fun_17A8
fun_17A8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_07B0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1850
    pri = 1;
    return pri;
// lab_1850
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1898
fun_1898() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_18E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_17A8(var_8)
    arg_2 = pri;
// lab_18E8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1088(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1948
fun_1948() {
    OP_JUMP lab_1960
// lab_1960
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19A0
    pri = 0;
    return pri;
// lab_19A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1960
    pri = 0;
    return pri;
}
// fun_19E0
fun_19E0() {
    var_8 = 0;
    pri = fun_1948()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A90
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A90
    pri = 0;
    return pri;
}
// fun_1AA0
fun_1AA0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    OP_JUMP lab_1AE8
// lab_1AE8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1B20
    pri = 0;
    return pri;
// lab_1B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AE8
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    pri = arg_5;
    OP_JNZ lab_1B98
    var_8 = 0;
    pri = fun_0CC0()
// lab_1B98
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1BE8
    OP_CONST_S -8, -1
// lab_1BE8
    pri = arg_1;
    switch (pri) {
// switch_36A0
        case default:
        {
// switch_36A0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3B48
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_07B0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3B48
            pri = 1;
            OP_JUMP lab_3B50
// lab_3B48
            pri = 0;
// lab_3B50
            OP_JZER lab_3BA0
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3DF8
// lab_3BA0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3C08
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3C08
            pri = 1;
            OP_JUMP lab_3C10
// lab_3C08
            pri = 0;
// lab_3C10
            OP_JZER lab_3D98
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07B0(var_24, var_16)
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
            OP_JUMP lab_3DF8
// lab_3D98
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
// lab_3DF8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3E68
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3E68
            var_8 = 0;
            pri = fun_0D00()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_36A0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1:
        {
// switch_36A0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2:
        {
// switch_36A0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x3:
        {
// switch_36A0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x4:
        {
// switch_36A0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x5:
        {
// switch_36A0_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0770(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09E8(var_40)
            OP_JUMP switch_36A0_case_default
        }
        case 0x6:
        {
// switch_36A0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x7:
        {
// switch_36A0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x8:
        {
// switch_36A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x9:
        {
// switch_36A0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0xa:
        {
// switch_36A0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0xb:
        {
// switch_36A0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0xc:
        {
// switch_36A0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0xd:
        {
// switch_36A0_case_0xd
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0xe:
        {
// switch_36A0_case_0xe
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0xf:
        {
// switch_36A0_case_0xf
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x10:
        {
// switch_36A0_case_0x10
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x11:
        {
// switch_36A0_case_0x11
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x12:
        {
// switch_36A0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x13:
        {
// switch_36A0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x14:
        {
// switch_36A0_case_0x14
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x15:
        {
// switch_36A0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x16:
        {
// switch_36A0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x17:
        {
// switch_36A0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x18:
        {
// switch_36A0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x19:
        {
// switch_36A0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1a:
        {
// switch_36A0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1b:
        {
// switch_36A0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1c:
        {
// switch_36A0_case_0x1c
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1d:
        {
// switch_36A0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1e:
        {
// switch_36A0_case_0x1e
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x1f:
        {
// switch_36A0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x20:
        {
// switch_36A0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x21:
        {
// switch_36A0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x22:
        {
// switch_36A0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x23:
        {
// switch_36A0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x24:
        {
// switch_36A0_case_0x24
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x25:
        {
// switch_36A0_case_0x25
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x26:
        {
// switch_36A0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x27:
        {
// switch_36A0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x28:
        {
// switch_36A0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x29:
        {
// switch_36A0_case_0x29
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2a:
        {
// switch_36A0_case_0x2a
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2b:
        {
// switch_36A0_case_0x2b
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2c:
        {
// switch_36A0_case_0x2c
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2d:
        {
// switch_36A0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2e:
        {
// switch_36A0_case_0x2e
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x2f:
        {
// switch_36A0_case_0x2f
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x30:
        {
// switch_36A0_case_0x30
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x31:
        {
// switch_36A0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x32:
        {
// switch_36A0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x33:
        {
// switch_36A0_case_0x33
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x34:
        {
// switch_36A0_case_0x34
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x35:
        {
// switch_36A0_case_0x35
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x36:
        {
// switch_36A0_case_0x36
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x37:
        {
// switch_36A0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x38:
        {
// switch_36A0_case_0x38
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
            pri = fun_0A20(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_36A0_case_default
        }
        case 0x39:
        {
// switch_36A0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x3a:
        {
// switch_36A0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x3b:
        {
// switch_36A0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x3c:
        {
// switch_36A0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x3d:
        {
// switch_36A0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
        case 0x3e:
        {
// switch_36A0_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0770(var_24, var_16, var_8)
            OP_JUMP switch_36A0_case_default
        }
    }
}
// fun_3E98
fun_3E98() {
    pri = arg_4;
    OP_JNZ lab_3ED0
    var_8 = 0;
    pri = fun_0CC0()
// lab_3ED0
    pri = arg_1;
    switch (pri) {
// switch_52A8
        case default:
        {
// switch_52A8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D80(var_264)
            OP_JZER lab_5870
            pri = arg_3;
            switch (pri) {
// switch_5818
                case default:
                {
// switch_5818_case_default
                    OP_JUMP lab_5B28
// lab_5B28
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5B98
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5B98
                    var_8 = 0;
                    pri = fun_0D00()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5818_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5818_case_default
                }
                case 0x2:
                {
// switch_5818_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5818_case_default
                }
                case 0x3:
                {
// switch_5818_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5818_case_default
                }
            }
// lab_5870
            pri = arg_1;
            OP_JZER lab_58C0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_58C0
            pri = 0;
            OP_JUMP lab_58C8
// lab_58C0
            pri = 1;
// lab_58C8
            OP_JZER lab_5930
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_07B0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5930
            pri = 1;
            OP_JUMP lab_5938
// lab_5930
            pri = 0;
// lab_5938
            OP_JZER lab_5988
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5B28
// lab_5988
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_59F0
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5B28
// lab_59F0
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_07B0(var_24, var_16)
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
// switch_52A8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1:
        {
// switch_52A8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2:
        {
// switch_52A8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x3:
        {
// switch_52A8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x4:
        {
// switch_52A8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x5:
        {
// switch_52A8_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0770(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09E8(var_40)
            OP_JUMP switch_52A8_case_default
        }
        case 0x6:
        {
// switch_52A8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x7:
        {
// switch_52A8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x8:
        {
// switch_52A8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x9:
        {
// switch_52A8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0xa:
        {
// switch_52A8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0xb:
        {
// switch_52A8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0xc:
        {
// switch_52A8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0xd:
        {
// switch_52A8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0xe:
        {
// switch_52A8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0xf:
        {
// switch_52A8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x10:
        {
// switch_52A8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x11:
        {
// switch_52A8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x12:
        {
// switch_52A8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x13:
        {
// switch_52A8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x14:
        {
// switch_52A8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x15:
        {
// switch_52A8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x16:
        {
// switch_52A8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x17:
        {
// switch_52A8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x18:
        {
// switch_52A8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x19:
        {
// switch_52A8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1a:
        {
// switch_52A8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1b:
        {
// switch_52A8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1c:
        {
// switch_52A8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1d:
        {
// switch_52A8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1e:
        {
// switch_52A8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x1f:
        {
// switch_52A8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x20:
        {
// switch_52A8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x21:
        {
// switch_52A8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x22:
        {
// switch_52A8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x23:
        {
// switch_52A8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x24:
        {
// switch_52A8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x25:
        {
// switch_52A8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x26:
        {
// switch_52A8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x27:
        {
// switch_52A8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x28:
        {
// switch_52A8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x29:
        {
// switch_52A8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2a:
        {
// switch_52A8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2b:
        {
// switch_52A8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2c:
        {
// switch_52A8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2d:
        {
// switch_52A8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2e:
        {
// switch_52A8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x2f:
        {
// switch_52A8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x30:
        {
// switch_52A8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x31:
        {
// switch_52A8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x32:
        {
// switch_52A8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x33:
        {
// switch_52A8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x34:
        {
// switch_52A8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x35:
        {
// switch_52A8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x36:
        {
// switch_52A8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x37:
        {
// switch_52A8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x38:
        {
// switch_52A8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x39:
        {
// switch_52A8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x3a:
        {
// switch_52A8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x3b:
        {
// switch_52A8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x3c:
        {
// switch_52A8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x3d:
        {
// switch_52A8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
        case 0x3e:
        {
// switch_52A8_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0770(var_24, var_16, var_8)
            OP_JUMP switch_52A8_case_default
        }
    }
}
// fun_5BC8
fun_5BC8() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5C50
// lab_5C50
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5DD0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5DC0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5D10
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5D10
    pri = 0;
    OP_JUMP lab_5D18
// lab_5DD0
    pri = 0;
    return pri;
// lab_5DC0
    OP_JUMP lab_5C48
// lab_5C48
    OP_INC_P_S -936
// lab_5D10
    pri = 1;
// lab_5D18
    OP_JZER lab_5D90
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5D88
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5D90
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5D88
}
// fun_5DF0
fun_5DF0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5E88
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_1028()
// lab_5E88
    pri = arg_4;
    OP_JZER lab_5EC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1050(var_8)
// lab_5EC0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5F18
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5F18
    pri = 0;
    OP_JUMP lab_5F20
// lab_5F18
    pri = 1;
// lab_5F20
    OP_JZER lab_5FE8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5FE8
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_5FC0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0F68(var_32, var_24)
    OP_JUMP lab_5FE8
// lab_5FE8
    pri = arg_2;
    OP_JZER lab_60C0
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_6090
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D40(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0498(var_40)
    OP_JUMP lab_60C0
// lab_60C0
    pri = arg_3;
    OP_JZER lab_60F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FF0(var_8)
// lab_60F8
    pri = 0;
    return pri;
// lab_6090
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D40(var_16, var_8)
// lab_5FC0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0F68(var_16, var_8)
}
// fun_6108
fun_6108() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5BC8(var_24)
    pri = 0;
    return pri;
}
// fun_6170
fun_6170() {
    pri = g_mode;
    switch (pri) {
// switch_6230
        case default:
        {
// switch_6230_case_default
            pri = CommandNOP()
            OP_JUMP lab_6278
// lab_6278
            pri = 0;
            return pri;
        }
        case 0x84039121fd18c36a:
        {
// switch_6230_case_0x84039121fd18c36a
            var_8 = 0;
            pri = fun_6CC0()
            OP_JUMP lab_6278
        }
        case 0x0:
        {
// switch_6230_case_0x0
            var_8 = 0;
            pri = fun_6288()
            OP_JUMP lab_6278
        }
        case 0x66a4271e7323eade:
        {
// switch_6230_case_0x66a4271e7323eade
            var_8 = 0;
            pri = fun_6DB0()
            OP_JUMP lab_6278
        }
    }
}
// fun_6288
fun_6288() {
    pri = 0;
    return pri;
}
// fun_62A0
fun_62A0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5DF0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_62F8
fun_62F8() {
    pri = 0;
    return pri;
}
// fun_6310
fun_6310() {
    pri = 0;
    return pri;
}
// fun_6328
fun_6328() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4675800827052802703, -4586309641902038712, 4672337410780162949, 4675889347359565414, -4587803570340930519
    var_32 = 4672315810874235290;
    var_40 = 90;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C -34089364971008208, 8802641224559852288
    var_96 = 48;
    pri = fun_05F0(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C 8802641224559852288, -34089364971008208
    var_136 = 48;
    pri = fun_05F0(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0648(var_144)
    var_160 = -34089364971008208;
    var_168 = 8;
    pri = fun_0648(var_160)
    var_176 = 23224;
    pri = SoundPostEvent(var_176)
    var_184 = 1;
    var_192 = 1;
    var_200 = -1;
    var_208 = -1;
    var_216 = 0;
    var_224 = 1;
    var_232 = -34089364971008208;
    var_240 = 56;
    pri = fun_1B60(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    OP_PUSH2_C 2986533594450808659, -34089364971008208
    var_288 = 56;
    pri = fun_1898(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_19E0(var_296)
    var_312 = 1;
    var_320 = 3;
    var_328 = 0;
    var_336 = 1;
    var_344 = -34089364971008208;
    var_352 = 40;
    pri = fun_3E98(var_344, var_336, var_328, var_320, var_312)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C 2986534693962436870, -34089364971008208
    var_400 = 56;
    pri = fun_1898(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_19E0(var_408)
    var_424 = 0;
    pri = fun_1AA0()
    var_432 = 0;
    var_440 = 4631952216750555136;
    var_448 = -1;
    OP_PUSH5_C 4675800827052802703, -4586309641902038712, 4672337410780162949, 4675889347359565414, -4587803570340930519
    var_456 = 4672315810874235290;
    var_464 = 1;
    pri = EvCameraMove(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_472 = 0;
    pri = fun_1AD0()
    var_480 = 0;
    var_488 = 4630952980583232307;
    var_496 = 3;
    OP_PUSH5_C 4675810692420882924, -4591218565495872553, 4672381490201320489, 4675887689845786542, -4593770136159754650
    var_504 = 4672291544652610273;
    var_512 = 90;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    var_544 = 110;
    pri = float(var_544)
    var_552 = pri;
    var_560 = -34089364971008208;
    var_568 = 40;
    pri = fun_05A0(var_560, var_552, var_544, var_536, var_528)
    var_576 = -34089364971008208;
    var_584 = 8;
    pri = fun_0648(var_576)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    OP_PUSH2_C 2986535793474065081, -34089364971008208
    var_632 = 56;
    pri = fun_1898(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 1;
    var_648 = 8;
    pri = fun_19E0(var_640)
    var_656 = 0;
    pri = fun_1AA0()
    var_664 = 0;
    pri = fun_1AD0()
    var_672 = 0;
    var_680 = 3;
    var_688 = 0;
    var_696 = 100;
    var_704 = -1;
    OP_PUSH2_C 2986536892985693292, -34089364971008208
    var_712 = 56;
    pri = fun_1898(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 1;
    var_728 = 8;
    pri = fun_19E0(var_720)
    var_736 = 0;
    pri = fun_1AA0()
    var_744 = 1;
    var_752 = 0;
    var_760 = 0;
    var_768 = 90;
    OP_PUSH2_C 4607182418800017408, -34089364971008208
    var_776 = 48;
    pri = fun_0548(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 1;
    var_792 = 0;
    var_800 = 4641240890982006784;
    var_808 = 0;
    var_816 = 0;
    OP_PUSH4_C 4675797895479925146, 4672418862601548595, 4607182418800017408, 8802641224559852288
    var_824 = 72;
    pri = fun_04D0(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 60;
    var_840 = 8;
    pri = fun_0060(var_832)
    var_848 = 23384;
    pri = SoundPostEvent(var_848)
    var_856 = 1;
    var_864 = 0;
    var_872 = 23712;
    var_880 = 8;
    var_888 = 32;
    pri = fun_0280(var_880, var_872, var_864, var_856)
    var_896 = 0;
    pri = fun_02F0()
    var_904 = 23808;
    pri = SoundPostEvent(var_904)
    var_912 = -34089364971008208;
    var_920 = 8;
    pri = fun_0648(var_912)
    var_928 = 8802641224559852288;
    var_936 = 8;
    pri = fun_0648(var_928)
    var_944 = 3;
    var_952 = 0;
    pri = EvCameraEnd(var_952, var_944)
    pri = 0;
    return pri;
}
// fun_6B78
fun_6B78() {
    pri = 0;
    return pri;
}
// fun_6B90
fun_6B90() {
    var_8 = -34089364971008208;
    var_16 = 8;
    pri = fun_0468(var_8)
    var_24 = 230;
    var_32 = 8;
    pri = fun_6108(var_24)
    var_40 = -3429033924844752434;
    pri = VanishFlagReset(var_40)
    pri = 0;
    return pri;
}
// fun_6C18
fun_6C18() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 0;
    OP_PUSH5_C 4653150800934076416, 4653731343073542144, -7349437463579910891, -2165274749821446798, -8933181085490370925
    var_48 = 80;
    pri = fun_03A8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_56 = 15;
    var_64 = 8;
    pri = fun_0060(var_56)
    pri = 0;
    return pri;
}
// fun_6CC0
fun_6CC0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_62A0()
    var_16 = 0;
    pri = fun_62F8()
    var_24 = 0;
    pri = fun_6310()
    var_32 = 0;
    pri = fun_6328()
    var_40 = 0;
    pri = fun_6B78()
    var_48 = 0;
    pri = fun_6B90()
    var_56 = 0;
    pri = fun_6C18()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6DB0
fun_6DB0() {
    var_8 = 0;
    pri = fun_62F8()
    var_16 = 0;
    pri = fun_6B90()
    pri = 0;
    return pri;
}
