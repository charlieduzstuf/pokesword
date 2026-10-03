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
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0480
fun_0480() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_04B8
fun_04B8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0500
    pri = 0;
    return pri;
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0540
// lab_0540
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A50(var_8)
    OP_JNZ lab_05C8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_05B8
    pri = 0;
    return pri;
// lab_05C8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0610
    pri = 0;
    return pri;
// lab_0610
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0670
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06B8(var_8)
    pri = 0;
    return pri;
// lab_0670
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0540
    pri = 0;
    return pri;
// lab_05B8
    OP_JUMP lab_0610
}
// fun_06B8
fun_06B8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0740
    pri = 0;
    return pri;
// lab_0740
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A50(var_8)
    OP_JZER lab_0870
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0798
    OP_ZERO_P_S 64
// lab_0870
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08A8
    OP_CONST_S 64, 1
// lab_08A8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08E0
    OP_CONST_S 72, 1
// lab_08E0
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
// lab_0798
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_07C0
    OP_ZERO_P_S 72
// lab_07C0
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
    OP_JUMP lab_0980
// lab_0980
    pri = 0;
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0A80
fun_0A80() {
    OP_JUMP lab_0A98
// lab_0A98
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0B28
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0B18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_04B8(var_8)
    pri = 0;
    return pri;
// lab_0B28
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BB8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0BA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_04B8(var_8)
    pri = 0;
    return pri;
// lab_0BB8
    pri = 0;
    return pri;
// lab_0BA8
    OP_JUMP lab_0BC8
// lab_0BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A98
    pri = 0;
    return pri;
// lab_0B18
    OP_JUMP lab_0BC8
}
// fun_0C08
fun_0C08() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_04B8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A80(var_40)
    pri = 0;
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
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
// switch_1340
        case default:
        {
// switch_1340_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1388
// lab_1388
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
            OP_JNZ lab_1430
            var_88 = 0;
            pri = fun_15E8()
// lab_1430
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1340_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F28
                case default:
                {
// switch_0F28_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FA0
// lab_0FA0
                    OP_JUMP lab_1388
                }
                case 0x0:
                {
// switch_0F28_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0FA0
                }
                case 0x1:
                {
// switch_0F28_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0FA0
                }
                case 0x2:
                {
// switch_0F28_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0FA0
                }
                case 0x3:
                {
// switch_0F28_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0FA0
                }
                case 0x4:
                {
// switch_0F28_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0FA0
                }
                case 0x5:
                {
// switch_0F28_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0FA0
                }
            }
        }
        case 0x65:
        {
// switch_1340_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_10E0
                case default:
                {
// switch_10E0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1158
// lab_1158
                    OP_JUMP lab_1388
                }
                case 0x0:
                {
// switch_10E0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1158
                }
                case 0x1:
                {
// switch_10E0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1158
                }
                case 0x2:
                {
// switch_10E0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1158
                }
                case 0x3:
                {
// switch_10E0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1158
                }
                case 0x4:
                {
// switch_10E0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1158
                }
                case 0x5:
                {
// switch_10E0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1158
                }
            }
        }
        case 0x66:
        {
// switch_1340_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1298
                case default:
                {
// switch_1298_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1310
// lab_1310
                    OP_JUMP lab_1388
                }
                case 0x0:
                {
// switch_1298_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1310
                }
                case 0x1:
                {
// switch_1298_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1310
                }
                case 0x2:
                {
// switch_1298_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1310
                }
                case 0x3:
                {
// switch_1298_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1310
                }
                case 0x4:
                {
// switch_1298_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1310
                }
                case 0x5:
                {
// switch_1298_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1310
                }
            }
        }
    }
}
// fun_1448
fun_1448() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0480(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_14F0
    pri = 1;
    return pri;
// lab_14F0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1538
fun_1538() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1588
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1448(var_8)
    arg_2 = pri;
// lab_1588
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D28(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E8
fun_15E8() {
    OP_JUMP lab_1600
// lab_1600
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1640
    pri = 0;
    return pri;
// lab_1640
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1600
    pri = 0;
    return pri;
}
// fun_1680
fun_1680() {
    var_8 = 0;
    pri = fun_15E8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1730
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1730
    pri = 0;
    return pri;
}
// fun_1740
fun_1740() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    OP_JUMP lab_1788
// lab_1788
    pri = EvCameraMoveWait_()
    OP_JZER lab_17C0
    pri = 0;
    return pri;
// lab_17C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1788
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    pri = arg_5;
    OP_JNZ lab_1838
    var_8 = 0;
    pri = fun_0990()
// lab_1838
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1888
    OP_CONST_S -8, -1
// lab_1888
    pri = arg_1;
    switch (pri) {
// switch_3340
        case default:
        {
// switch_3340_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_37E8
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0480(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_37E8
            pri = 1;
            OP_JUMP lab_37F0
// lab_37E8
            pri = 0;
// lab_37F0
            OP_JZER lab_3840
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3A98
// lab_3840
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_38A8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_38A8
            pri = 1;
            OP_JUMP lab_38B0
// lab_38A8
            pri = 0;
// lab_38B0
            OP_JZER lab_3A38
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0480(var_24, var_16)
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
            OP_JUMP lab_3A98
// lab_3A38
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
// lab_3A98
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3B08
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3B08
            var_8 = 0;
            pri = fun_09D0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3340_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x1:
        {
// switch_3340_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x2:
        {
// switch_3340_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x3:
        {
// switch_3340_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x4:
        {
// switch_3340_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x5:
        {
// switch_3340_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0440(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06B8(var_40)
            OP_JUMP switch_3340_case_default
        }
        case 0x6:
        {
// switch_3340_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x7:
        {
// switch_3340_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x8:
        {
// switch_3340_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x9:
        {
// switch_3340_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0xa:
        {
// switch_3340_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0xb:
        {
// switch_3340_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0xc:
        {
// switch_3340_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0xd:
        {
// switch_3340_case_0xd
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0xe:
        {
// switch_3340_case_0xe
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0xf:
        {
// switch_3340_case_0xf
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x10:
        {
// switch_3340_case_0x10
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x11:
        {
// switch_3340_case_0x11
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x12:
        {
// switch_3340_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x13:
        {
// switch_3340_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x14:
        {
// switch_3340_case_0x14
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x15:
        {
// switch_3340_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x16:
        {
// switch_3340_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x17:
        {
// switch_3340_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x18:
        {
// switch_3340_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x19:
        {
// switch_3340_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x1a:
        {
// switch_3340_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x1b:
        {
// switch_3340_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x1c:
        {
// switch_3340_case_0x1c
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x1d:
        {
// switch_3340_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x1e:
        {
// switch_3340_case_0x1e
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x1f:
        {
// switch_3340_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x20:
        {
// switch_3340_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x21:
        {
// switch_3340_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x22:
        {
// switch_3340_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x23:
        {
// switch_3340_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x24:
        {
// switch_3340_case_0x24
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x25:
        {
// switch_3340_case_0x25
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x26:
        {
// switch_3340_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x27:
        {
// switch_3340_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x28:
        {
// switch_3340_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x29:
        {
// switch_3340_case_0x29
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x2a:
        {
// switch_3340_case_0x2a
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x2b:
        {
// switch_3340_case_0x2b
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x2c:
        {
// switch_3340_case_0x2c
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x2d:
        {
// switch_3340_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x2e:
        {
// switch_3340_case_0x2e
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x2f:
        {
// switch_3340_case_0x2f
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x30:
        {
// switch_3340_case_0x30
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x31:
        {
// switch_3340_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x32:
        {
// switch_3340_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x33:
        {
// switch_3340_case_0x33
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x34:
        {
// switch_3340_case_0x34
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x35:
        {
// switch_3340_case_0x35
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x36:
        {
// switch_3340_case_0x36
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x37:
        {
// switch_3340_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x38:
        {
// switch_3340_case_0x38
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
            pri = fun_06F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3340_case_default
        }
        case 0x39:
        {
// switch_3340_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x3a:
        {
// switch_3340_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x3b:
        {
// switch_3340_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x3c:
        {
// switch_3340_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x3d:
        {
// switch_3340_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
        case 0x3e:
        {
// switch_3340_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0440(var_24, var_16, var_8)
            OP_JUMP switch_3340_case_default
        }
    }
}
// fun_3B38
fun_3B38() {
    pri = arg_4;
    OP_JNZ lab_3B70
    var_8 = 0;
    pri = fun_0990()
// lab_3B70
    pri = arg_1;
    switch (pri) {
// switch_4F48
        case default:
        {
// switch_4F48_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0A50(var_264)
            OP_JZER lab_5510
            pri = arg_3;
            switch (pri) {
// switch_54B8
                case default:
                {
// switch_54B8_case_default
                    OP_JUMP lab_57C8
// lab_57C8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5838
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5838
                    var_8 = 0;
                    pri = fun_09D0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_54B8_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_54B8_case_default
                }
                case 0x2:
                {
// switch_54B8_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_54B8_case_default
                }
                case 0x3:
                {
// switch_54B8_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_54B8_case_default
                }
            }
// lab_5510
            pri = arg_1;
            OP_JZER lab_5560
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5560
            pri = 0;
            OP_JUMP lab_5568
// lab_5560
            pri = 1;
// lab_5568
            OP_JZER lab_55D0
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0480(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_55D0
            pri = 1;
            OP_JUMP lab_55D8
// lab_55D0
            pri = 0;
// lab_55D8
            OP_JZER lab_5628
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_57C8
// lab_5628
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5690
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_57C8
// lab_5690
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0480(var_24, var_16)
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
// switch_4F48_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1:
        {
// switch_4F48_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2:
        {
// switch_4F48_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x3:
        {
// switch_4F48_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x4:
        {
// switch_4F48_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x5:
        {
// switch_4F48_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0440(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06B8(var_40)
            OP_JUMP switch_4F48_case_default
        }
        case 0x6:
        {
// switch_4F48_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x7:
        {
// switch_4F48_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x8:
        {
// switch_4F48_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x9:
        {
// switch_4F48_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0xa:
        {
// switch_4F48_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0xb:
        {
// switch_4F48_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0xc:
        {
// switch_4F48_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0xd:
        {
// switch_4F48_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0xe:
        {
// switch_4F48_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0xf:
        {
// switch_4F48_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x10:
        {
// switch_4F48_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x11:
        {
// switch_4F48_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x12:
        {
// switch_4F48_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x13:
        {
// switch_4F48_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x14:
        {
// switch_4F48_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x15:
        {
// switch_4F48_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x16:
        {
// switch_4F48_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x17:
        {
// switch_4F48_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x18:
        {
// switch_4F48_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x19:
        {
// switch_4F48_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1a:
        {
// switch_4F48_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1b:
        {
// switch_4F48_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1c:
        {
// switch_4F48_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1d:
        {
// switch_4F48_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1e:
        {
// switch_4F48_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x1f:
        {
// switch_4F48_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x20:
        {
// switch_4F48_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x21:
        {
// switch_4F48_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x22:
        {
// switch_4F48_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x23:
        {
// switch_4F48_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x24:
        {
// switch_4F48_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x25:
        {
// switch_4F48_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x26:
        {
// switch_4F48_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x27:
        {
// switch_4F48_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x28:
        {
// switch_4F48_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x29:
        {
// switch_4F48_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2a:
        {
// switch_4F48_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2b:
        {
// switch_4F48_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2c:
        {
// switch_4F48_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2d:
        {
// switch_4F48_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2e:
        {
// switch_4F48_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x2f:
        {
// switch_4F48_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x30:
        {
// switch_4F48_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x31:
        {
// switch_4F48_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x32:
        {
// switch_4F48_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x33:
        {
// switch_4F48_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x34:
        {
// switch_4F48_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x35:
        {
// switch_4F48_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x36:
        {
// switch_4F48_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x37:
        {
// switch_4F48_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x38:
        {
// switch_4F48_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x39:
        {
// switch_4F48_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x3a:
        {
// switch_4F48_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x3b:
        {
// switch_4F48_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x3c:
        {
// switch_4F48_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x3d:
        {
// switch_4F48_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
        case 0x3e:
        {
// switch_4F48_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0440(var_24, var_16, var_8)
            OP_JUMP switch_4F48_case_default
        }
    }
}
// fun_5868
fun_5868() {
    pri = 22256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_58F0
// lab_58F0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5A70
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5A60
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_59B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_59B0
    pri = 0;
    OP_JUMP lab_59B8
// lab_5A70
    pri = 0;
    return pri;
// lab_5A60
    OP_JUMP lab_58E8
// lab_58E8
    OP_INC_P_S -936
// lab_59B0
    pri = 1;
// lab_59B8
    OP_JZER lab_5A30
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_5A28
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_5A30
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_5A28
}
// fun_5A90
fun_5A90() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5B28
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_0CC8()
// lab_5B28
    pri = arg_4;
    OP_JZER lab_5B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0CF0(var_8)
// lab_5B60
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5BB8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5BB8
    pri = 0;
    OP_JUMP lab_5BC0
// lab_5BB8
    pri = 1;
// lab_5BC0
    OP_JZER lab_5C88
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5C88
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_5C60
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0C08(var_32, var_24)
    OP_JUMP lab_5C88
// lab_5C88
    pri = arg_2;
    OP_JZER lab_5D60
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_5D30
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A10(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0408(var_40)
    OP_JUMP lab_5D60
// lab_5D60
    pri = arg_3;
    OP_JZER lab_5D98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0C90(var_8)
// lab_5D98
    pri = 0;
    return pri;
// lab_5D30
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A10(var_16, var_8)
// lab_5C60
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0C08(var_16, var_8)
}
// fun_5DA8
fun_5DA8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5868(var_24)
    pri = 0;
    return pri;
}
// fun_5E10
fun_5E10() {
    pri = g_mode;
    switch (pri) {
// switch_5ED0
        case default:
        {
// switch_5ED0_case_default
            pri = CommandNOP()
            OP_JUMP lab_5F18
// lab_5F18
            pri = 0;
            return pri;
        }
        case 0x83e4fb21fcfec6f9:
        {
// switch_5ED0_case_0x83e4fb21fcfec6f9
            var_8 = 0;
            pri = fun_6728()
            OP_JUMP lab_5F18
        }
        case 0x0:
        {
// switch_5ED0_case_0x0
            var_8 = 0;
            pri = fun_5F28()
            OP_JUMP lab_5F18
        }
        case 0x6685b11e730a24cd:
        {
// switch_5ED0_case_0x6685b11e730a24cd
            var_8 = 0;
            pri = fun_6818()
            OP_JUMP lab_5F18
        }
    }
}
// fun_5F28
fun_5F28() {
    pri = 0;
    return pri;
}
// fun_5F40
fun_5F40() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5A90(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5F98
fun_5F98() {
    pri = 0;
    return pri;
}
// fun_5FB0
fun_5FB0() {
    pri = 0;
    return pri;
}
// fun_5FC8
fun_5FC8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 0;
    OP_PUSH5_C 4673329255480568054, -4567226166246637568, 4675364320936575631, 4673478822047294423, -4567990810613058109
    var_48 = 4675315986405418598;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1770()
    var_72 = 23224;
    var_80 = 8;
    var_88 = 16;
    pri = fun_0280(var_80, var_72)
    var_96 = 0;
    pri = fun_0350()
    var_104 = 25388350855151377;
    pri = FlagGet(var_104)
    OP_JZER lab_6348
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    var_136 = -1;
    var_144 = 0;
    var_152 = 9;
    var_160 = 702631533266588014;
    var_168 = 56;
    pri = fun_1800(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = -6214903781314033103;
    pri = FlagGet(var_176)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6238
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    OP_PUSH2_C 2512441069430278110, 702631533266588014
    var_224 = 56;
    pri = fun_1538(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1680(var_232)
    var_248 = 0;
    pri = fun_1740()
    OP_JUMP lab_62C8
// lab_6348
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 8;
    var_56 = 702631533266588014;
    var_64 = 56;
    pri = fun_1800(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = -6214903781314033103;
    pri = FlagGet(var_72)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6480
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    OP_PUSH2_C 2512438870407021688, 702631533266588014
    var_120 = 56;
    pri = fun_1538(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1680(var_128)
    var_144 = 0;
    pri = fun_1740()
    OP_JUMP lab_6510
// lab_6480
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 2512446566988419165, 702631533266588014
    var_48 = 56;
    pri = fun_1538(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1680(var_56)
    var_72 = 0;
    pri = fun_1740()
// lab_6510
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 8;
    var_40 = 702631533266588014;
    var_48 = 40;
    pri = fun_3B38(var_40, var_32, var_24, var_16, var_8)
    var_56 = 702631533266588014;
    var_64 = 8;
    pri = fun_04B8(var_56)
// lab_6238
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 2512439969918649899, 702631533266588014
    var_48 = 56;
    pri = fun_1538(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1680(var_56)
    var_72 = 0;
    pri = fun_1740()
// lab_62C8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 9;
    var_40 = 702631533266588014;
    var_48 = 40;
    pri = fun_3B38(var_40, var_32, var_24, var_16, var_8)
    var_56 = 702631533266588014;
    var_64 = 8;
    pri = fun_04B8(var_56)
    OP_JUMP lab_6580
// lab_6580
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 2512445467476790954, 702631533266588014
    var_48 = 56;
    pri = fun_1538(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1680(var_56)
    var_72 = 0;
    pri = fun_1740()
    pri = 0;
    return pri;
}
// fun_6620
fun_6620() {
    pri = 0;
    return pri;
}
// fun_6638
fun_6638() {
    var_8 = 300;
    var_16 = 8;
    pri = fun_5DA8(var_8)
    pri = 0;
    return pri;
}
// fun_6670
fun_6670() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 23176;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 3;
    var_64 = 1;
    pri = EvCameraEnd(var_64, var_56)
    var_72 = -8281239959363938493;
    pri = ReserveScript(var_72)
    pri = 0;
    return pri;
}
// fun_6728
fun_6728() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_5F40()
    var_16 = 0;
    pri = fun_5F98()
    var_24 = 0;
    pri = fun_5FB0()
    var_32 = 0;
    pri = fun_5FC8()
    var_40 = 0;
    pri = fun_6620()
    var_48 = 0;
    pri = fun_6638()
    var_56 = 0;
    pri = fun_6670()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_6818
fun_6818() {
    var_8 = 0;
    pri = fun_5F98()
    var_16 = 0;
    pri = fun_6638()
    pri = 0;
    return pri;
}
