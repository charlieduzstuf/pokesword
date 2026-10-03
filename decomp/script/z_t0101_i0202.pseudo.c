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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_02C8
// lab_02C8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0308
    OP_JUMP lab_0378
// lab_0308
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0348
    OP_JUMP lab_0378
// lab_0348
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02C8
// lab_0378
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_03C0
fun_03C0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0410
fun_0410() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0938(var_8)
    OP_JZER lab_0488
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0968(var_24)
    OP_JNZ lab_0488
    pri = 0;
    return pri;
// lab_0488
    OP_JUMP lab_0498
// lab_0498
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04F8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0498
    pri = 0;
    return pri;
}
// fun_0538
fun_0538() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0630
    pri = 0;
    return pri;
// lab_0630
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0670
// lab_0670
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0938(var_8)
    OP_JNZ lab_06F8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06E8
    pri = 0;
    return pri;
// lab_06F8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0740
    pri = 0;
    return pri;
// lab_0740
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E8(var_8)
    pri = 0;
    return pri;
// lab_07A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
// lab_06E8
    OP_JUMP lab_0740
}
// fun_07E8
fun_07E8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtBGObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08F8
fun_08F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0968
fun_0968() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
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
// switch_0FE0
        case default:
        {
// switch_0FE0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1028
// lab_1028
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
            OP_JNZ lab_10D0
            var_88 = 0;
            pri = fun_1488()
// lab_10D0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0FE0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0BC8
                case default:
                {
// switch_0BC8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C40
// lab_0C40
                    OP_JUMP lab_1028
                }
                case 0x0:
                {
// switch_0BC8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0C40
                }
                case 0x1:
                {
// switch_0BC8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0C40
                }
                case 0x2:
                {
// switch_0BC8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0C40
                }
                case 0x3:
                {
// switch_0BC8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C40
                }
                case 0x4:
                {
// switch_0BC8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0C40
                }
                case 0x5:
                {
// switch_0BC8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0C40
                }
            }
        }
        case 0x65:
        {
// switch_0FE0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0D80
                case default:
                {
// switch_0D80_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0DF8
// lab_0DF8
                    OP_JUMP lab_1028
                }
                case 0x0:
                {
// switch_0D80_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0DF8
                }
                case 0x1:
                {
// switch_0D80_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0DF8
                }
                case 0x2:
                {
// switch_0D80_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0DF8
                }
                case 0x3:
                {
// switch_0D80_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0DF8
                }
                case 0x4:
                {
// switch_0D80_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0DF8
                }
                case 0x5:
                {
// switch_0D80_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0DF8
                }
            }
        }
        case 0x66:
        {
// switch_0FE0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0F38
                case default:
                {
// switch_0F38_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FB0
// lab_0FB0
                    OP_JUMP lab_1028
                }
                case 0x0:
                {
// switch_0F38_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0FB0
                }
                case 0x1:
                {
// switch_0F38_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0FB0
                }
                case 0x2:
                {
// switch_0F38_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0FB0
                }
                case 0x3:
                {
// switch_0F38_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FB0
                }
                case 0x4:
                {
// switch_0F38_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0FB0
                }
                case 0x5:
                {
// switch_0F38_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0FB0
                }
            }
        }
    }
}
// fun_10E8
fun_10E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_09C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1150
fun_1150() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05B0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_11F8
    pri = 1;
    return pri;
// lab_11F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1240
fun_1240() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1290
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1150(var_8)
    arg_2 = pri;
// lab_1290
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_09C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_10E8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_12F0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13A0
fun_13A0() {
    var_8 = 0;
    var_16 = 0;
    pri = arg_2;
    alt = 8;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = 102;
    var_48 = arg_0;
    var_56 = arg_1;
    var_64 = 56;
    pri = fun_09C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = 3;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_16 = pri;
    var_24 = 47;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_10E8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    OP_JUMP lab_14A0
// lab_14A0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14E0
    pri = 0;
    return pri;
// lab_14E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14A0
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    var_8 = 0;
    pri = fun_1488()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_15D0
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_15D0
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    OP_JUMP lab_1660
// lab_1660
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_16A8
    OP_JUMP lab_16D8
    OP_JUMP lab_16C8
// lab_16A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_16D8
    pri = 0;
    return pri;
// lab_16C8
    OP_JUMP lab_1660
}
// fun_16E8
fun_16E8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1718
fun_1718() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17B8
fun_17B8() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_1840
    pri = PokeBoxIsFull()
    OP_JZER lab_1840
    pri = 1;
    OP_JUMP lab_1848
// lab_1840
    pri = 0;
// lab_1848
    return pri;
}
// fun_1850
fun_1850() {
    pri = arg_4;
    OP_JNZ lab_1888
    var_8 = 0;
    pri = fun_0820()
// lab_1888
    pri = arg_1;
    switch (pri) {
// switch_2C60
        case default:
        {
// switch_2C60_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0938(var_264)
            OP_JZER lab_3228
            pri = arg_3;
            switch (pri) {
// switch_31D0
                case default:
                {
// switch_31D0_case_default
                    OP_JUMP lab_34E0
// lab_34E0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3550
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3550
                    var_8 = 0;
                    pri = fun_0860()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_31D0_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_31D0_case_default
                }
                case 0x2:
                {
// switch_31D0_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_31D0_case_default
                }
                case 0x3:
                {
// switch_31D0_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_31D0_case_default
                }
            }
// lab_3228
            pri = arg_1;
            OP_JZER lab_3278
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3278
            pri = 0;
            OP_JUMP lab_3280
// lab_3278
            pri = 1;
// lab_3280
            OP_JZER lab_32E8
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05B0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_32E8
            pri = 1;
            OP_JUMP lab_32F0
// lab_32E8
            pri = 0;
// lab_32F0
            OP_JZER lab_3340
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_34E0
// lab_3340
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_33A8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_34E0
// lab_33A8
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05B0(var_24, var_16)
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
            var_176 = 1688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1704;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_2C60_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1:
        {
// switch_2C60_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2:
        {
// switch_2C60_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x3:
        {
// switch_2C60_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x4:
        {
// switch_2C60_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x5:
        {
// switch_2C60_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0570(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E8(var_40)
            OP_JUMP switch_2C60_case_default
        }
        case 0x6:
        {
// switch_2C60_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x7:
        {
// switch_2C60_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x8:
        {
// switch_2C60_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x9:
        {
// switch_2C60_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0xa:
        {
// switch_2C60_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0xb:
        {
// switch_2C60_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0xc:
        {
// switch_2C60_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0xd:
        {
// switch_2C60_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0xe:
        {
// switch_2C60_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0xf:
        {
// switch_2C60_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x10:
        {
// switch_2C60_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x11:
        {
// switch_2C60_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x12:
        {
// switch_2C60_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x13:
        {
// switch_2C60_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x14:
        {
// switch_2C60_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x15:
        {
// switch_2C60_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x16:
        {
// switch_2C60_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x17:
        {
// switch_2C60_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x18:
        {
// switch_2C60_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x19:
        {
// switch_2C60_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1a:
        {
// switch_2C60_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1b:
        {
// switch_2C60_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1c:
        {
// switch_2C60_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1d:
        {
// switch_2C60_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1e:
        {
// switch_2C60_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x1f:
        {
// switch_2C60_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x20:
        {
// switch_2C60_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x21:
        {
// switch_2C60_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x22:
        {
// switch_2C60_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x23:
        {
// switch_2C60_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x24:
        {
// switch_2C60_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x25:
        {
// switch_2C60_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x26:
        {
// switch_2C60_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x27:
        {
// switch_2C60_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x28:
        {
// switch_2C60_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x29:
        {
// switch_2C60_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2a:
        {
// switch_2C60_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2b:
        {
// switch_2C60_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2c:
        {
// switch_2C60_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2d:
        {
// switch_2C60_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2e:
        {
// switch_2C60_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x2f:
        {
// switch_2C60_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x30:
        {
// switch_2C60_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x31:
        {
// switch_2C60_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x32:
        {
// switch_2C60_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x33:
        {
// switch_2C60_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x34:
        {
// switch_2C60_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x35:
        {
// switch_2C60_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x36:
        {
// switch_2C60_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x37:
        {
// switch_2C60_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x38:
        {
// switch_2C60_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x39:
        {
// switch_2C60_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x3a:
        {
// switch_2C60_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x3b:
        {
// switch_2C60_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x3c:
        {
// switch_2C60_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x3d:
        {
// switch_2C60_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
        case 0x3e:
        {
// switch_2C60_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0570(var_24, var_16, var_8)
            OP_JUMP switch_2C60_case_default
        }
    }
}
// fun_3580
fun_3580() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3680
        case default:
        {
// switch_3680_case_default
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
// switch_3680_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3680_case_default
        }
        case 0x1:
        {
// switch_3680_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3680_case_default
        }
        case 0x2:
        {
// switch_3680_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3680_case_default
        }
        case 0x3:
        {
// switch_3680_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3680_case_default
        }
    }
}
// fun_3740
fun_3740() {
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
    pri = fun_1240(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1488()
    pri = 0;
    return pri;
}
// fun_37D8
fun_37D8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3580(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3740(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3880
fun_3880() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_38D0
// lab_38D0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3948
    OP_JUMP lab_3978
// lab_3948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_38D0
// lab_3978
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3A00
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1850(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0998(var_56)
// lab_3A00
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3A68
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_08F8(var_24, var_16)
// lab_3A68
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_08F8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3B28
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05E8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_03C0(var_88, var_80, var_72, var_64, var_56)
// lab_3B28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3B68
    pri = 0;
    return pri;
// lab_3B68
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3CB0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0538(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3C78
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3CB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0410(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0410(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05E8(var_40)
    pri = 0;
    return pri;
// lab_3C78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_08F8(var_16, var_8)
}
// fun_3D38
fun_3D38() {
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
    pri = fun_37D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1520(var_112)
    var_128 = 0;
    pri = fun_15E0()
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
    pri = fun_3880(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3EB0
fun_3EB0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_08A0(var_48, var_40, var_32, var_24, var_16)
    var_64 = arg_2;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_72 = pri;
    var_80 = var_8;
    var_88 = arg_0;
    var_96 = 32;
    pri = fun_13A0(var_88, var_80, var_72, var_64)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1520(var_104)
    var_120 = 0;
    pri = fun_15E0()
    pri = 0;
    return pri;
}
// fun_3FC8
fun_3FC8() {
    var_8 = 2008;
    var_16 = 8;
    pri = fun_1610(var_8)
    var_24 = 0;
    pri = fun_1648()
    var_32 = 2184;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 8;
    pri = fun_1718(var_40)
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 16;
    pri = fun_1768(var_64, var_56)
    var_80 = 3;
    var_88 = 0;
    var_96 = -1785521252434788896;
    var_104 = 24;
    pri = fun_1340(var_96, var_88, var_80)
    var_112 = 0;
    var_120 = 8;
    pri = fun_0280(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1520(var_128)
    var_144 = 0;
    pri = fun_15E0()
    var_152 = arg_0;
    pri = PokePartyAddMember(var_152)
    var_160 = 0;
    pri = fun_16E8()
    pri = 0;
    return pri;
}
// fun_4148
fun_4148() {
    pri = g_mode;
    switch (pri) {
// switch_42F8
        case default:
        {
// switch_42F8_case_default
            pri = CommandNOP()
            OP_JUMP lab_43A0
// lab_43A0
            pri = 0;
            return pri;
        }
        case 0xc992daacaef5d403:
        {
// switch_42F8_case_0xc992daacaef5d403
            var_8 = 0;
            pri = fun_4520()
            OP_JUMP lab_43A0
        }
        case 0xcb2c72a46179d9b0:
        {
// switch_42F8_case_0xcb2c72a46179d9b0
            var_8 = 0;
            pri = fun_4570()
            OP_JUMP lab_43A0
        }
        case 0xccddae2f8686337c:
        {
// switch_42F8_case_0xccddae2f8686337c
            var_8 = 0;
            pri = fun_45C0()
            OP_JUMP lab_43A0
        }
        case 0x0:
        {
// switch_42F8_case_0x0
            var_8 = 0;
            pri = fun_43B0()
            OP_JUMP lab_43A0
        }
        case 0x8cd3e169437ed85:
        {
// switch_42F8_case_0x8cd3e169437ed85
            var_8 = 0;
            pri = fun_4610()
            OP_JUMP lab_43A0
        }
        case 0x210162e45ca039eb:
        {
// switch_42F8_case_0x210162e45ca039eb
            var_8 = 0;
            pri = fun_43C8()
            OP_JUMP lab_43A0
        }
        case 0x29c1153c8df80ebe:
        {
// switch_42F8_case_0x29c1153c8df80ebe
            var_8 = 0;
            pri = fun_43E0()
            OP_JUMP lab_43A0
        }
        case 0x55a8a03af31cd683:
        {
// switch_42F8_case_0x55a8a03af31cd683
            var_8 = 0;
            pri = fun_46B0()
            OP_JUMP lab_43A0
        }
        case 0x674947c0ca0c3482:
        {
// switch_42F8_case_0x674947c0ca0c3482
            var_8 = 0;
            pri = fun_4660()
            OP_JUMP lab_43A0
        }
    }
}
// fun_43B0
fun_43B0() {
    pri = 0;
    return pri;
}
// fun_43C8
fun_43C8() {
    pri = 0;
    return pri;
}
// fun_43E0
fun_43E0() {
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_44A0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 383453674783875539;
    var_96 = 80;
    pri = fun_3D38(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_4510
// lab_44A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 383454774295503750;
    var_88 = 80;
    pri = fun_3D38(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_4510
    pri = 0;
    return pri;
}
// fun_4520
fun_4520() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 900488695746535534;
    var_32 = 24;
    pri = fun_3EB0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4570
fun_4570() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 7807260465229395613;
    var_32 = 24;
    pri = fun_3EB0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_45C0
fun_45C0() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -4702373655710885729;
    var_32 = 24;
    pri = fun_3EB0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4610
fun_4610() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -1472820121879942651;
    var_32 = 24;
    pri = fun_3EB0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4660
fun_4660() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 5211111461365745050;
    var_32 = 24;
    pri = fun_3EB0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_46B0
fun_46B0() {
    var_8 = 3;
    var_16 = 0;
    var_24 = 9194458864903435767;
    var_32 = 24;
    pri = fun_12F0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1520(var_40)
    var_56 = 0;
    pri = fun_15E0()
    var_64 = 3;
    var_72 = 0;
    var_80 = 9194459964415063978;
    var_88 = 24;
    pri = fun_12F0(var_80, var_72, var_64)
    var_96 = 1;
    var_104 = 8;
    pri = fun_1520(var_96)
    var_112 = 0;
    pri = fun_15E0()
    var_120 = 0;
    var_128 = 9194461063926692189;
    var_136 = 16;
    pri = fun_1420(var_128, var_120)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1520(var_144)
    var_160 = 0;
    pri = fun_15E0()
    var_168 = 0;
    pri = fun_17B8()
    OP_JZER lab_48A8
    var_176 = 3;
    var_184 = 0;
    var_192 = 9194453367345294712;
    var_200 = 24;
    pri = fun_12F0(var_192, var_184, var_176)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1520(var_208)
    var_224 = 0;
    pri = fun_15E0()
    OP_JUMP lab_4A38
// lab_48A8
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_05E8(var_16)
    var_32 = 6;
    var_40 = 2368;
    var_48 = 8802641224559852288;
    var_56 = 24;
    pri = fun_0570(var_48, var_40, var_32)
    var_64 = 2496;
    var_72 = 8802641224559852288;
    var_80 = 16;
    pri = fun_0538(var_72, var_64)
    var_88 = 8;
    var_96 = var_8;
    var_104 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_104, var_96, var_88)
    var_112 = 8;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = var_8;
    var_136 = 8;
    pri = fun_0390(var_128)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0410(var_144)
    var_160 = 4;
    var_168 = -3494761112647443937;
    var_176 = 16;
    pri = fun_3FC8(var_168, var_160)
// lab_4A38
    pri = 0;
    return pri;
}
