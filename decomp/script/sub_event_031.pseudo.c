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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_02F0
// lab_02F0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0330
    OP_JUMP lab_03A0
// lab_0330
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0370
    OP_JUMP lab_03A0
// lab_0370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02F0
// lab_03A0
    pri = 0;
    return pri;
}
// fun_03B8
fun_03B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    OP_JZER lab_0480
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0BA8(var_24)
    OP_JNZ lab_0480
    pri = 0;
    return pri;
// lab_0480
    OP_JUMP lab_0490
// lab_0490
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04F0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0490
    pri = 0;
    return pri;
}
// fun_0530
fun_0530() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0568
fun_0568() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05A8
fun_05A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0628
    pri = 0;
    return pri;
// lab_0628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0668
// lab_0668
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    OP_JNZ lab_06F0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06E0
    pri = 0;
    return pri;
// lab_06F0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0738
    pri = 0;
    return pri;
// lab_0738
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0798
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07E0(var_8)
    pri = 0;
    return pri;
// lab_0798
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0668
    pri = 0;
    return pri;
// lab_06E0
    OP_JUMP lab_0738
}
// fun_07E0
fun_07E0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0868
    pri = 0;
    return pri;
// lab_0868
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B78(var_8)
    OP_JZER lab_0998
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08C0
    OP_ZERO_P_S 64
// lab_0998
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09D0
    OP_CONST_S 64, 1
// lab_09D0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A08
    OP_CONST_S 72, 1
// lab_0A08
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
// lab_08C0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08E8
    OP_ZERO_P_S 72
// lab_08E8
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
    OP_JUMP lab_0AA8
// lab_0AA8
    pri = 0;
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0C08
fun_0C08() {
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
// switch_1220
        case default:
        {
// switch_1220_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1268
// lab_1268
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
            OP_JNZ lab_1310
            var_88 = 0;
            pri = fun_15E0()
// lab_1310
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1220_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E08
                case default:
                {
// switch_0E08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E80
// lab_0E80
                    OP_JUMP lab_1268
                }
                case 0x0:
                {
// switch_0E08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0E80
                }
                case 0x1:
                {
// switch_0E08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0E80
                }
                case 0x2:
                {
// switch_0E08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0E80
                }
                case 0x3:
                {
// switch_0E08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E80
                }
                case 0x4:
                {
// switch_0E08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0E80
                }
                case 0x5:
                {
// switch_0E08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0E80
                }
            }
        }
        case 0x65:
        {
// switch_1220_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FC0
                case default:
                {
// switch_0FC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1038
// lab_1038
                    OP_JUMP lab_1268
                }
                case 0x0:
                {
// switch_0FC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1038
                }
                case 0x1:
                {
// switch_0FC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1038
                }
                case 0x2:
                {
// switch_0FC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1038
                }
                case 0x3:
                {
// switch_0FC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1038
                }
                case 0x4:
                {
// switch_0FC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1038
                }
                case 0x5:
                {
// switch_0FC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1038
                }
            }
        }
        case 0x66:
        {
// switch_1220_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1178
                case default:
                {
// switch_1178_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11F0
// lab_11F0
                    OP_JUMP lab_1268
                }
                case 0x0:
                {
// switch_1178_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_11F0
                }
                case 0x1:
                {
// switch_1178_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_11F0
                }
                case 0x2:
                {
// switch_1178_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_11F0
                }
                case 0x3:
                {
// switch_1178_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11F0
                }
                case 0x4:
                {
// switch_1178_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_11F0
                }
                case 0x5:
                {
// switch_1178_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_11F0
                }
            }
        }
    }
}
// fun_1328
fun_1328() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0C08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_05A8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1438
    pri = 1;
    return pri;
// lab_1438
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1480
fun_1480() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_14D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1390(var_8)
    arg_2 = pri;
// lab_14D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1328(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1530(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E0
fun_15E0() {
    OP_JUMP lab_15F8
// lab_15F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1638
    pri = 0;
    return pri;
// lab_1638
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15F8
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    var_8 = 0;
    pri = fun_15E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1728
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1728
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_17E0()
    return pri;
}
// fun_17E0
fun_17E0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1820
fun_1820() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1858
fun_1858() {
    OP_JUMP lab_1870
// lab_1870
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_18B8
    OP_JUMP lab_18E8
    OP_JUMP lab_18D8
// lab_18B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_18E8
    pri = 0;
    return pri;
// lab_18D8
    OP_JUMP lab_1870
}
// fun_18F8
fun_18F8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1928
fun_1928() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19C8
fun_19C8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A18
fun_1A18() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A68
fun_1A68() {
    pri = arg_6;
    OP_JNZ lab_1AA0
    var_8 = 0;
    pri = fun_0AB8()
// lab_1AA0
    pri = arg_1;
    switch (pri) {
// switch_3008
        case default:
        {
// switch_3008_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3358
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3358
            pri = 1;
            OP_JUMP lab_3360
// lab_3358
            pri = 0;
// lab_3360
            OP_JZER lab_34B8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05A8(var_24, var_16)
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
            OP_JUMP lab_3518
// lab_34B8
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
// lab_3518
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3578
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_35D8
// lab_3578
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_35D8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_35D8
            pri = arg_2;
            OP_JZER lab_3618
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3618
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3008_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x1:
        {
// switch_3008_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x2:
        {
// switch_3008_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x3:
        {
// switch_3008_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x4:
        {
// switch_3008_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x5:
        {
// switch_3008_case_0x5
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0x6:
        {
// switch_3008_case_0x6
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0x7:
        {
// switch_3008_case_0x7
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0x8:
        {
// switch_3008_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x9:
        {
// switch_3008_case_0x9
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0xa:
        {
// switch_3008_case_0xa
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0xb:
        {
// switch_3008_case_0xb
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0xc:
        {
// switch_3008_case_0xc
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0xd:
        {
// switch_3008_case_0xd
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0xe:
        {
// switch_3008_case_0xe
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0xf:
        {
// switch_3008_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x10:
        {
// switch_3008_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x11:
        {
// switch_3008_case_0x11
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0x12:
        {
// switch_3008_case_0x12
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0x13:
        {
// switch_3008_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x14:
        {
// switch_3008_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x15:
        {
// switch_3008_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x16:
        {
// switch_3008_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x17:
        {
// switch_3008_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x18:
        {
// switch_3008_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x19:
        {
// switch_3008_case_0x19
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3008_case_default
        }
        case 0x1a:
        {
// switch_3008_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0530(var_48, var_40)
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
            pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3008_case_default
        }
        case 0x1b:
        {
// switch_3008_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0530(var_48, var_40)
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
            pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3008_case_default
        }
        case 0x1c:
        {
// switch_3008_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0530(var_48, var_40)
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
            pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3008_case_default
        }
        case 0x1d:
        {
// switch_3008_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x1e:
        {
// switch_3008_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x1f:
        {
// switch_3008_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x20:
        {
// switch_3008_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x21:
        {
// switch_3008_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x22:
        {
// switch_3008_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x23:
        {
// switch_3008_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x24:
        {
// switch_3008_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x25:
        {
// switch_3008_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x26:
        {
// switch_3008_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x27:
        {
// switch_3008_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x28:
        {
// switch_3008_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
        case 0x29:
        {
// switch_3008_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3008_case_default
        }
    }
}
// fun_3648
fun_3648() {
    pri = arg_5;
    OP_JNZ lab_3680
    var_8 = 0;
    pri = fun_0AB8()
// lab_3680
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_36D0
    OP_CONST_S -8, -1
// lab_36D0
    pri = arg_1;
    switch (pri) {
// switch_5188
        case default:
        {
// switch_5188_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5630
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_05A8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5630
            pri = 1;
            OP_JUMP lab_5638
// lab_5630
            pri = 0;
// lab_5638
            OP_JZER lab_5688
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_58E0
// lab_5688
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_56F0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_56F0
            pri = 1;
            OP_JUMP lab_56F8
// lab_56F0
            pri = 0;
// lab_56F8
            OP_JZER lab_5880
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05A8(var_24, var_16)
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
            OP_JUMP lab_58E0
// lab_5880
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
// lab_58E0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5950
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5950
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5188_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x1:
        {
// switch_5188_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x2:
        {
// switch_5188_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x3:
        {
// switch_5188_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x4:
        {
// switch_5188_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x5:
        {
// switch_5188_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_5188_case_default
        }
        case 0x6:
        {
// switch_5188_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x7:
        {
// switch_5188_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x8:
        {
// switch_5188_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x9:
        {
// switch_5188_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0xa:
        {
// switch_5188_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0xb:
        {
// switch_5188_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0xc:
        {
// switch_5188_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0xd:
        {
// switch_5188_case_0xd
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0xe:
        {
// switch_5188_case_0xe
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0xf:
        {
// switch_5188_case_0xf
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x10:
        {
// switch_5188_case_0x10
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x11:
        {
// switch_5188_case_0x11
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x12:
        {
// switch_5188_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x13:
        {
// switch_5188_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x14:
        {
// switch_5188_case_0x14
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x15:
        {
// switch_5188_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x16:
        {
// switch_5188_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x17:
        {
// switch_5188_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x18:
        {
// switch_5188_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x19:
        {
// switch_5188_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x1a:
        {
// switch_5188_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x1b:
        {
// switch_5188_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x1c:
        {
// switch_5188_case_0x1c
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x1d:
        {
// switch_5188_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x1e:
        {
// switch_5188_case_0x1e
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x1f:
        {
// switch_5188_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x20:
        {
// switch_5188_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x21:
        {
// switch_5188_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x22:
        {
// switch_5188_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x23:
        {
// switch_5188_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x24:
        {
// switch_5188_case_0x24
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x25:
        {
// switch_5188_case_0x25
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x26:
        {
// switch_5188_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x27:
        {
// switch_5188_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x28:
        {
// switch_5188_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x29:
        {
// switch_5188_case_0x29
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x2a:
        {
// switch_5188_case_0x2a
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x2b:
        {
// switch_5188_case_0x2b
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x2c:
        {
// switch_5188_case_0x2c
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x2d:
        {
// switch_5188_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x2e:
        {
// switch_5188_case_0x2e
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x2f:
        {
// switch_5188_case_0x2f
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x30:
        {
// switch_5188_case_0x30
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x31:
        {
// switch_5188_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x32:
        {
// switch_5188_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x33:
        {
// switch_5188_case_0x33
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x34:
        {
// switch_5188_case_0x34
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x35:
        {
// switch_5188_case_0x35
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x36:
        {
// switch_5188_case_0x36
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x37:
        {
// switch_5188_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x38:
        {
// switch_5188_case_0x38
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
            pri = fun_0818(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5188_case_default
        }
        case 0x39:
        {
// switch_5188_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x3a:
        {
// switch_5188_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x3b:
        {
// switch_5188_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x3c:
        {
// switch_5188_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x3d:
        {
// switch_5188_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
        case 0x3e:
        {
// switch_5188_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_5188_case_default
        }
    }
}
// fun_5980
fun_5980() {
    pri = arg_4;
    OP_JNZ lab_59B8
    var_8 = 0;
    pri = fun_0AB8()
// lab_59B8
    pri = arg_1;
    switch (pri) {
// switch_6D90
        case default:
        {
// switch_6D90_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0B78(var_264)
            OP_JZER lab_7358
            pri = arg_3;
            switch (pri) {
// switch_7300
                case default:
                {
// switch_7300_case_default
                    OP_JUMP lab_7610
// lab_7610
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7680
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7680
                    var_8 = 0;
                    pri = fun_0AF8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7300_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7300_case_default
                }
                case 0x2:
                {
// switch_7300_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7300_case_default
                }
                case 0x3:
                {
// switch_7300_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7300_case_default
                }
            }
// lab_7358
            pri = arg_1;
            OP_JZER lab_73A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_73A8
            pri = 0;
            OP_JUMP lab_73B0
// lab_73A8
            pri = 1;
// lab_73B0
            OP_JZER lab_7418
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05A8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7418
            pri = 1;
            OP_JUMP lab_7420
// lab_7418
            pri = 0;
// lab_7420
            OP_JZER lab_7470
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7610
// lab_7470
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_74D8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7610
// lab_74D8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_05A8(var_24, var_16)
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
// switch_6D90_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1:
        {
// switch_6D90_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2:
        {
// switch_6D90_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x3:
        {
// switch_6D90_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x4:
        {
// switch_6D90_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x5:
        {
// switch_6D90_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_6D90_case_default
        }
        case 0x6:
        {
// switch_6D90_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x7:
        {
// switch_6D90_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x8:
        {
// switch_6D90_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x9:
        {
// switch_6D90_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0xa:
        {
// switch_6D90_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0xb:
        {
// switch_6D90_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0xc:
        {
// switch_6D90_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0xd:
        {
// switch_6D90_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0xe:
        {
// switch_6D90_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0xf:
        {
// switch_6D90_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x10:
        {
// switch_6D90_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x11:
        {
// switch_6D90_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x12:
        {
// switch_6D90_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x13:
        {
// switch_6D90_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x14:
        {
// switch_6D90_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x15:
        {
// switch_6D90_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x16:
        {
// switch_6D90_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x17:
        {
// switch_6D90_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x18:
        {
// switch_6D90_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x19:
        {
// switch_6D90_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1a:
        {
// switch_6D90_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1b:
        {
// switch_6D90_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1c:
        {
// switch_6D90_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1d:
        {
// switch_6D90_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1e:
        {
// switch_6D90_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x1f:
        {
// switch_6D90_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x20:
        {
// switch_6D90_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x21:
        {
// switch_6D90_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x22:
        {
// switch_6D90_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x23:
        {
// switch_6D90_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x24:
        {
// switch_6D90_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x25:
        {
// switch_6D90_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x26:
        {
// switch_6D90_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x27:
        {
// switch_6D90_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x28:
        {
// switch_6D90_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x29:
        {
// switch_6D90_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2a:
        {
// switch_6D90_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2b:
        {
// switch_6D90_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2c:
        {
// switch_6D90_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2d:
        {
// switch_6D90_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2e:
        {
// switch_6D90_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x2f:
        {
// switch_6D90_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x30:
        {
// switch_6D90_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x31:
        {
// switch_6D90_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x32:
        {
// switch_6D90_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x33:
        {
// switch_6D90_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x34:
        {
// switch_6D90_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x35:
        {
// switch_6D90_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x36:
        {
// switch_6D90_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x37:
        {
// switch_6D90_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x38:
        {
// switch_6D90_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x39:
        {
// switch_6D90_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x3a:
        {
// switch_6D90_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x3b:
        {
// switch_6D90_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x3c:
        {
// switch_6D90_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x3d:
        {
// switch_6D90_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
        case 0x3e:
        {
// switch_6D90_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_6D90_case_default
        }
    }
}
// fun_76B0
fun_76B0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_77B0
        case default:
        {
// switch_77B0_case_default
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
// switch_77B0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_77B0_case_default
        }
        case 0x1:
        {
// switch_77B0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_77B0_case_default
        }
        case 0x2:
        {
// switch_77B0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_77B0_case_default
        }
        case 0x3:
        {
// switch_77B0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_77B0_case_default
        }
    }
}
// fun_7870
fun_7870() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_78C0
// lab_78C0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7938
    OP_JUMP lab_7968
// lab_7938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_78C0
// lab_7968
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_79F0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5980(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BD8(var_56)
// lab_79F0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7A58
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B38(var_24, var_16)
// lab_7A58
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7B18
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05E0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_03B8(var_88, var_80, var_72, var_64, var_56)
// lab_7B18
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7B58
    pri = 0;
    return pri;
// lab_7B58
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7CA0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0530(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7C68
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7CA0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05E0(var_40)
    pri = 0;
    return pri;
// lab_7C68
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
}
// fun_7D28
fun_7D28() {
    var_8 = 1;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    var_32 = arg_2;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    pri = EasyTalkPokemon(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 0;
    var_80 = arg_0;
    pri = SoundPlayPokeVoiceFromObject(var_80, var_72, var_64)
    var_8 = pri;
    var_88 = var_8;
    var_96 = 7;
    pri = TempWorkSet(var_96, var_88)
    var_104 = 30;
    var_112 = 30304;
    var_120 = 8802641224559852288;
    pri = AddParallelWaitStandard(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_7E50
fun_7E50() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_7EE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_05E0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1A68(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7EE8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8040
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_7FA8
    var_24 = 30520;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_7FA8
    pri = 1;
    OP_JUMP lab_7FB0
// lab_8040
    pri = 0;
    return pri;
// lab_7FA8
    pri = 0;
// lab_7FB0
    OP_JZER lab_8040
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05E0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1A68(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8050
fun_8050() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_7E50(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_80D8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_80D8
fun_80D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8270(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8140
fun_8140() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_81B0
    OP_CONST_S -8, 1
// lab_81B0
    pri = arg_0;
    OP_JNZ lab_81D0
    OP_ZERO_P_S -8
// lab_81D0
    pri = var_8;
    OP_JZER lab_8258
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8258
    pri = 0;
    return pri;
}
// fun_8270
fun_8270() {
    var_8 = 30624;
    var_16 = 8;
    pri = fun_1820(var_8)
    var_24 = 0;
    pri = fun_1858()
    pri = arg_3;
    OP_JNZ lab_8390
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8358
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8400(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8380
// lab_8390
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_85A0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8358
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_84C8(var_16, var_8)
// lab_8380
    OP_JUMP lab_83D8
// lab_83D8
    var_8 = 0;
    pri = fun_18F8()
    pri = 0;
    return pri;
}
// fun_8400
fun_8400() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_85A0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_84B0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_84B0
    pri = 0;
    return pri;
}
// fun_84C8
fun_84C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1978(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1580(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1928(var_96)
    pri = 0;
    return pri;
}
// fun_85A0
fun_85A0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_85E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_88A8(var_8)
// lab_85E8
    pri = arg_4;
    OP_JNZ lab_8650
    var_8 = 0;
    var_16 = 8;
    pri = fun_1928(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1978(var_40, var_32, var_24)
// lab_8650
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_86F0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_19C8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1580(var_56, var_48, var_40)
    OP_JUMP lab_87E0
// lab_86F0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_87A8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_87A8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_87A8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1580(var_24, var_16, var_8)
// lab_87E0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8820
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_8820
    var_8 = 1;
    var_16 = 8;
    pri = fun_1678(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8AB0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8140(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_88A8
fun_88A8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8908
    var_16 = 30784;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8908
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8A48
        case default:
        {
// switch_8A48_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8A38
            var_16 = 31328;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8A38
            OP_JUMP lab_8A80
// lab_8A80
            var_8 = 31544;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8A48_case_0x1
            var_8 = 31000;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A80
        }
        case 0x2:
        {
// switch_8A48_case_0x2
            var_8 = 31128;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A80
        }
    }
}
// fun_8AB0
fun_8AB0() {
    pri = arg_2;
    OP_JNZ lab_8B98
    var_8 = 0;
    var_16 = 8;
    pri = fun_1928(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1978(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1A18(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8B98
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1580(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1678(var_40)
    var_56 = 0;
    pri = fun_1738()
    pri = 0;
    return pri;
}
// fun_8C10
fun_8C10() {
    pri = g_mode;
    switch (pri) {
// switch_8D48
        case default:
        {
// switch_8D48_case_default
            pri = CommandNOP()
            OP_JUMP lab_8DC0
// lab_8DC0
            pri = 0;
            return pri;
        }
        case 0xb9655fcefe40c50c:
        {
// switch_8D48_case_0xb9655fcefe40c50c
            var_8 = 0;
            pri = fun_AF50()
            OP_JUMP lab_8DC0
        }
        case 0xbeea3eb89011f257:
        {
// switch_8D48_case_0xbeea3eb89011f257
            var_8 = 0;
            pri = fun_8DE8()
            OP_JUMP lab_8DC0
        }
        case 0xc94bf706251af0db:
        {
// switch_8D48_case_0xc94bf706251af0db
            var_8 = 0;
            pri = fun_B530()
            OP_JUMP lab_8DC0
        }
        case 0xfe419b33136d7ac2:
        {
// switch_8D48_case_0xfe419b33136d7ac2
            var_8 = 0;
            pri = fun_BC58()
            OP_JUMP lab_8DC0
        }
        case 0x0:
        {
// switch_8D48_case_0x0
            var_8 = 0;
            pri = fun_8DD0()
            OP_JUMP lab_8DC0
        }
        case 0x1997f052110eadd0:
        {
// switch_8D48_case_0x1997f052110eadd0
            var_8 = 0;
            pri = fun_BA58()
            OP_JUMP lab_8DC0
        }
    }
}
// fun_8DD0
fun_8DD0() {
    pri = 0;
    return pri;
}
// fun_8DE8
fun_8DE8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_76B0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 2019152596824525233;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 10
    OP_JZER lab_8ED0
    var_80 = var_8;
    var_88 = 8;
    pri = fun_AEA8(var_80)
    OP_JUMP lab_9010
// lab_8ED0
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    alt = 7;
    OP_JSLESS lab_8F40
    var_16 = var_8;
    var_24 = 8;
    pri = fun_A588(var_16)
    OP_JUMP lab_9010
// lab_8F40
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    alt = 4;
    OP_JSLESS lab_8FB0
    var_16 = var_8;
    var_24 = 8;
    pri = fun_9A38(var_16)
    OP_JUMP lab_9010
// lab_8FB0
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    alt = 1;
    OP_JSLESS lab_9010
    var_16 = var_8;
    var_24 = 8;
    pri = fun_9060(var_16)
// lab_9010
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7870(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9060
fun_9060() {
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9148
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -2113587148193603723;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1678(var_80)
    var_96 = 0;
    pri = fun_1738()
    OP_JUMP lab_9A28
// lab_9148
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 3
    OP_JZER lab_93F0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -2113588247705231934;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1678(var_80)
    var_96 = 0;
    pri = fun_1738()
    var_104 = 1;
    var_112 = 3;
    var_120 = 0;
    var_128 = 0;
    var_136 = arg_0;
    var_144 = 40;
    pri = fun_5980(var_136, var_128, var_120, var_112, var_104)
    var_152 = arg_0;
    var_160 = 8;
    pri = fun_05E0(var_152)
    var_168 = 6;
    var_176 = 4;
    var_184 = 2;
    var_192 = 0;
    var_200 = 8;
    var_208 = 5;
    var_216 = 92;
    var_224 = arg_0;
    var_232 = 64;
    pri = fun_8050(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_240 = 1;
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 0;
    var_280 = 0;
    var_288 = arg_0;
    var_296 = 56;
    pri = fun_3648(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    var_344 = -2113584949170347301;
    var_352 = arg_0;
    var_360 = 56;
    pri = fun_1480(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1678(var_368)
    var_384 = 0;
    pri = fun_1738()
    var_392 = 4;
    var_400 = 2019152596824525233;
    pri = WorkSet(var_400, var_392)
    OP_JUMP lab_9A28
// lab_93F0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2113594844775001200;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = -2113591546240116567;
    var_144 = arg_0;
    var_152 = 56;
    pri = fun_1480(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1678(var_160)
    var_176 = 0;
    var_184 = 0;
    var_192 = 1;
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 48;
    pri = fun_1768(var_216, var_208, var_200, var_192, var_184, var_176)
    OP_JZER lab_9998
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = -2113589347216860145;
    var_280 = arg_0;
    var_288 = 56;
    pri = fun_1480(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_1678(var_296)
    var_312 = 0;
    pri = fun_1738()
    var_320 = 1;
    var_328 = 3;
    var_336 = 0;
    var_344 = 0;
    var_352 = arg_0;
    var_360 = 40;
    pri = fun_5980(var_352, var_344, var_336, var_328, var_320)
    var_368 = arg_0;
    var_376 = 8;
    pri = fun_05E0(var_368)
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 2;
    var_432 = arg_0;
    var_440 = 56;
    pri = fun_1A68(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 5;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 1;
    var_472 = -1;
    var_480 = -1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 21;
    var_512 = 8802641224559852288;
    var_520 = 56;
    pri = fun_1A68(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 3;
    var_536 = 0;
    var_544 = 6603419129760870327;
    var_552 = 24;
    pri = fun_1530(var_544, var_536, var_528)
    var_560 = 1;
    var_568 = 8;
    pri = fun_1678(var_560)
    var_576 = 0;
    pri = fun_1738()
    var_584 = arg_0;
    var_592 = 8;
    pri = fun_05E0(var_584)
    var_600 = 8802641224559852288;
    var_608 = 8;
    pri = fun_05E0(var_600)
    var_616 = 1;
    var_624 = 1;
    var_632 = -1;
    var_640 = -1;
    var_648 = 0;
    var_656 = 0;
    var_664 = arg_0;
    var_672 = 56;
    pri = fun_3648(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    var_720 = -2113590446728488356;
    var_728 = arg_0;
    var_736 = 56;
    pri = fun_1480(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 1;
    var_752 = 8;
    pri = fun_1678(var_744)
    var_760 = 0;
    pri = fun_1738()
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    var_808 = -2113587148193603723;
    var_816 = arg_0;
    var_824 = 56;
    pri = fun_1480(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 1;
    var_840 = 8;
    pri = fun_1678(var_832)
    var_848 = 0;
    pri = fun_1738()
    var_856 = 2;
    var_864 = 2019152596824525233;
    pri = WorkSet(var_864, var_856)
    var_872 = -4834270172384559181;
    pri = FlagReset(var_872)
    OP_JUMP lab_9A28
// lab_9998
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2113592645751744778;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_9A28
    pri = 0;
    return pri;
}
// fun_9A38
fun_9A38() {
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 5
    OP_JZER lab_9BE8
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -2114550320379727334;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1678(var_80)
    var_96 = 0;
    pri = fun_1738()
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 684;
    pri = SoundPlayPokeVoice(var_128, var_120, var_112, var_104)
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    var_176 = -3384461529096374140;
    var_184 = arg_0;
    var_192 = 56;
    pri = fun_1480(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_1678(var_200)
    var_216 = 0;
    pri = fun_1738()
    OP_JUMP lab_A578
// lab_9BE8
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9EE0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -2113588247705231934;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1678(var_80)
    var_96 = 0;
    pri = fun_1738()
    var_104 = 1;
    var_112 = 3;
    var_120 = 0;
    var_128 = 0;
    var_136 = arg_0;
    var_144 = 40;
    pri = fun_5980(var_136, var_128, var_120, var_112, var_104)
    var_152 = arg_0;
    var_160 = 8;
    pri = fun_05E0(var_152)
    var_168 = 6;
    var_176 = 4;
    var_184 = 2;
    var_192 = 0;
    var_200 = 8;
    var_208 = 2;
    var_216 = 581;
    var_224 = arg_0;
    var_232 = 64;
    pri = fun_8050(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_240 = 1;
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 0;
    var_280 = 0;
    var_288 = arg_0;
    var_296 = 56;
    pri = fun_3648(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    var_344 = -2113584949170347301;
    var_352 = arg_0;
    var_360 = 56;
    pri = fun_1480(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1678(var_368)
    var_384 = 0;
    pri = fun_1738()
    var_392 = 7;
    var_400 = 2019152596824525233;
    pri = WorkSet(var_400, var_392)
    var_408 = 2870305434263504978;
    pri = FlagSet(var_408)
    var_416 = -7289458305334070753;
    pri = FlagReset(var_416)
    OP_JUMP lab_A578
// lab_9EE0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2113586048681975512;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_1768(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JZER lab_A4E8
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = -2113589347216860145;
    var_192 = arg_0;
    var_200 = 56;
    pri = fun_1480(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1678(var_208)
    var_224 = 0;
    pri = fun_1738()
    var_232 = 1;
    var_240 = 3;
    var_248 = 0;
    var_256 = 0;
    var_264 = arg_0;
    var_272 = 40;
    pri = fun_5980(var_264, var_256, var_248, var_240, var_232)
    var_280 = arg_0;
    var_288 = 8;
    pri = fun_05E0(var_280)
    var_296 = 1;
    var_304 = -1;
    var_312 = -1;
    var_320 = 3;
    var_328 = 0;
    var_336 = 2;
    var_344 = arg_0;
    var_352 = 56;
    pri = fun_1A68(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 5;
    var_368 = 8;
    pri = fun_0060(var_360)
    var_376 = 1;
    var_384 = -1;
    var_392 = -1;
    var_400 = 3;
    var_408 = 0;
    var_416 = 21;
    var_424 = 8802641224559852288;
    var_432 = 56;
    pri = fun_1A68(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 3;
    var_448 = 0;
    var_456 = 6603419129760870327;
    var_464 = 24;
    pri = fun_1530(var_456, var_448, var_440)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1678(var_472)
    var_488 = 0;
    pri = fun_1738()
    var_496 = arg_0;
    var_504 = 8;
    pri = fun_05E0(var_496)
    var_512 = 8802641224559852288;
    var_520 = 8;
    pri = fun_05E0(var_512)
    var_528 = 1;
    var_536 = 1;
    var_544 = -1;
    var_552 = -1;
    var_560 = 0;
    var_568 = 0;
    var_576 = arg_0;
    var_584 = 56;
    pri = fun_3648(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    var_632 = -2113590446728488356;
    var_640 = arg_0;
    var_648 = 56;
    pri = fun_1480(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 8;
    pri = fun_1678(var_656)
    var_672 = 0;
    pri = fun_1738()
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    var_720 = -2114550320379727334;
    var_728 = arg_0;
    var_736 = 56;
    pri = fun_1480(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 1;
    var_752 = 8;
    pri = fun_1678(var_744)
    var_760 = 0;
    pri = fun_1738()
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    var_792 = 684;
    pri = SoundPlayPokeVoice(var_792, var_784, var_776, var_768)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    var_840 = -3384461529096374140;
    var_848 = arg_0;
    var_856 = 56;
    pri = fun_1480(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1678(var_864)
    var_880 = 0;
    pri = fun_1738()
    var_888 = 5;
    var_896 = 2019152596824525233;
    pri = WorkSet(var_896, var_888)
    var_904 = 2114447493271261331;
    pri = FlagReset(var_904)
    var_912 = 2870305434263504978;
    pri = FlagReset(var_912)
    OP_JUMP lab_A578
// lab_A4E8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2113592645751744778;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_A578
    pri = 0;
    return pri;
}
// fun_A588
fun_A588() {
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 8
    OP_JZER lab_A670
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -2114549220868099123;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1678(var_80)
    var_96 = 0;
    pri = fun_1738()
    OP_JUMP lab_AE98
// lab_A670
    var_8 = 2019152596824525233;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 9
    OP_JZER lab_A8F0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = -2113588247705231934;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1480(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1678(var_80)
    var_96 = 0;
    pri = fun_1738()
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = -2114551419891355545;
    var_152 = arg_0;
    var_160 = 56;
    pri = fun_1480(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1678(var_168)
    var_184 = 0;
    pri = fun_1738()
    var_192 = 1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 0;
    var_224 = arg_0;
    var_232 = 40;
    pri = fun_5980(var_224, var_216, var_208, var_200, var_192)
    var_240 = arg_0;
    var_248 = 8;
    pri = fun_05E0(var_240)
    var_256 = 6;
    var_264 = 4;
    var_272 = 2;
    var_280 = 0;
    var_288 = 8;
    var_296 = 1;
    var_304 = 231;
    var_312 = arg_0;
    var_320 = 64;
    pri = fun_8050(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_328 = 10;
    var_336 = 2019152596824525233;
    pri = WorkSet(var_336, var_328)
    var_344 = -341965168978892642;
    pri = FlagReset(var_344)
    OP_JUMP lab_AE98
// lab_A8F0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2113586048681975512;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_1768(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JZER lab_AE08
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = -2113589347216860145;
    var_192 = arg_0;
    var_200 = 56;
    pri = fun_1480(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1678(var_208)
    var_224 = 0;
    pri = fun_1738()
    var_232 = 1;
    var_240 = 3;
    var_248 = 0;
    var_256 = 0;
    var_264 = arg_0;
    var_272 = 40;
    pri = fun_5980(var_264, var_256, var_248, var_240, var_232)
    var_280 = arg_0;
    var_288 = 8;
    pri = fun_05E0(var_280)
    var_296 = 1;
    var_304 = -1;
    var_312 = -1;
    var_320 = 3;
    var_328 = 0;
    var_336 = 2;
    var_344 = arg_0;
    var_352 = 56;
    pri = fun_1A68(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 5;
    var_368 = 8;
    pri = fun_0060(var_360)
    var_376 = 1;
    var_384 = -1;
    var_392 = -1;
    var_400 = 3;
    var_408 = 0;
    var_416 = 21;
    var_424 = 8802641224559852288;
    var_432 = 56;
    pri = fun_1A68(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 3;
    var_448 = 0;
    var_456 = 6603419129760870327;
    var_464 = 24;
    pri = fun_1530(var_456, var_448, var_440)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1678(var_472)
    var_488 = 0;
    pri = fun_1738()
    var_496 = arg_0;
    var_504 = 8;
    pri = fun_05E0(var_496)
    var_512 = 8802641224559852288;
    var_520 = 8;
    pri = fun_05E0(var_512)
    var_528 = 1;
    var_536 = 1;
    var_544 = -1;
    var_552 = -1;
    var_560 = 0;
    var_568 = 0;
    var_576 = arg_0;
    var_584 = 56;
    pri = fun_3648(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 0;
    var_600 = 3;
    var_608 = 0;
    var_616 = 100;
    var_624 = -1;
    var_632 = -2113590446728488356;
    var_640 = arg_0;
    var_648 = 56;
    pri = fun_1480(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 1;
    var_664 = 8;
    pri = fun_1678(var_656)
    var_672 = 0;
    pri = fun_1738()
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    var_720 = -2114549220868099123;
    var_728 = arg_0;
    var_736 = 56;
    pri = fun_1480(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 1;
    var_752 = 8;
    pri = fun_1678(var_744)
    var_760 = 0;
    pri = fun_1738()
    var_768 = 8;
    var_776 = 2019152596824525233;
    pri = WorkSet(var_776, var_768)
    var_784 = -341965168978892642;
    pri = FlagReset(var_784)
    OP_JUMP lab_AE98
// lab_AE08
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2113592645751744778;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_AE98
    pri = 0;
    return pri;
}
// fun_AEA8
fun_AEA8() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -2114554718426240178;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
    pri = 0;
    return pri;
}
// fun_AF50
fun_AF50() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_76B0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 2019152596824525233;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_B450
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = -6759342205113285731;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_1480(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1678(var_144)
    var_160 = 0;
    pri = fun_1738()
    var_168 = 1;
    var_176 = 3;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 40;
    pri = fun_5980(var_200, var_192, var_184, var_176, var_168)
    var_216 = var_8;
    var_224 = 8;
    pri = fun_05E0(var_216)
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 3;
    var_264 = 0;
    var_272 = 21;
    var_280 = 8802641224559852288;
    var_288 = 56;
    pri = fun_1A68(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 5;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 1;
    var_320 = -1;
    var_328 = -1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 2;
    var_360 = var_8;
    var_368 = 56;
    pri = fun_1A68(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 3;
    var_384 = 0;
    var_392 = 6603420229272498538;
    var_400 = 24;
    pri = fun_1530(var_392, var_384, var_376)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1678(var_408)
    var_424 = 0;
    pri = fun_1738()
    var_432 = var_8;
    var_440 = 8;
    pri = fun_05E0(var_432)
    var_448 = 8802641224559852288;
    var_456 = 8;
    pri = fun_05E0(var_448)
    var_464 = 1;
    var_472 = 1;
    var_480 = -1;
    var_488 = -1;
    var_496 = 0;
    var_504 = 0;
    var_512 = var_8;
    var_520 = 56;
    pri = fun_3648(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    var_568 = -6759344404136542153;
    var_576 = var_8;
    var_584 = 56;
    pri = fun_1480(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_1678(var_592)
    var_608 = 0;
    pri = fun_1738()
    var_616 = 1;
    var_624 = 3;
    var_632 = 0;
    var_640 = 0;
    var_648 = var_8;
    var_656 = 40;
    pri = fun_5980(var_648, var_640, var_632, var_624, var_616)
    var_664 = var_8;
    var_672 = 8;
    pri = fun_05E0(var_664)
    var_680 = 6;
    var_688 = 4;
    var_696 = 2;
    var_704 = 0;
    var_712 = 8;
    var_720 = 1;
    var_728 = 1127;
    var_736 = var_8;
    var_744 = 64;
    pri = fun_8050(var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_752 = 3;
    var_760 = 2019152596824525233;
    pri = WorkSet(var_760, var_752)
    OP_JUMP lab_B4E0
// lab_B450
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -6759345503648170364;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_B4E0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7870(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_B530
fun_B530() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_76B0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 2019152596824525233;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 5
    OP_JZER lab_B978
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = 5259428085628509482;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_1480(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1678(var_144)
    var_160 = 0;
    pri = fun_1738()
    var_168 = 1;
    var_176 = 3;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 40;
    pri = fun_5980(var_200, var_192, var_184, var_176, var_168)
    var_216 = var_8;
    var_224 = 8;
    pri = fun_05E0(var_216)
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 3;
    var_264 = 0;
    var_272 = 21;
    var_280 = 8802641224559852288;
    var_288 = 56;
    pri = fun_1A68(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 5;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 1;
    var_320 = -1;
    var_328 = -1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 2;
    var_360 = var_8;
    var_368 = 56;
    pri = fun_1A68(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 3;
    var_384 = 0;
    var_392 = 6603420229272498538;
    var_400 = 24;
    pri = fun_1530(var_392, var_384, var_376)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1678(var_408)
    var_424 = 0;
    pri = fun_1738()
    var_432 = var_8;
    var_440 = 8;
    pri = fun_05E0(var_432)
    var_448 = 8802641224559852288;
    var_456 = 8;
    pri = fun_05E0(var_448)
    var_464 = 1;
    var_472 = 1;
    var_480 = -1;
    var_488 = -1;
    var_496 = 0;
    var_504 = 0;
    var_512 = var_8;
    var_520 = 56;
    pri = fun_3648(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    var_568 = 5259426986116881271;
    var_576 = var_8;
    var_584 = 56;
    pri = fun_1480(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_1678(var_592)
    var_608 = 0;
    pri = fun_1738()
    var_616 = 6;
    var_624 = 2019152596824525233;
    pri = WorkSet(var_624, var_616)
    OP_JUMP lab_BA08
// lab_B978
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 5259426986116881271;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_BA08
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7870(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BA58
fun_BA58() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = var_8;
    var_40 = 24;
    pri = fun_7D28(var_32, var_24, var_16)
    var_48 = 2019152596824525233;
    pri = WorkGet(var_48)
    alt = 6;
    OP_JSLEQ lab_BB40
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 685;
    pri = SoundPlayPokeVoice(var_80, var_72, var_64, var_56)
    OP_JUMP lab_BB78
// lab_BB40
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 684;
    pri = SoundPlayPokeVoice(var_32, var_24, var_16, var_8)
// lab_BB78
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -3384461529096374140;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = var_8;
    var_128 = 32;
    pri = fun_7870(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_BC58
fun_BC58() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_76B0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 2019152596824525233;
    pri = WorkGet(var_72)
    OP_EQ_P_C_PRI 8
    OP_JZER lab_C0F0
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = -6961744779499328865;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_1480(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1678(var_144)
    var_160 = 0;
    pri = fun_1738()
    var_168 = 1;
    var_176 = 3;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 40;
    pri = fun_5980(var_200, var_192, var_184, var_176, var_168)
    var_216 = var_8;
    var_224 = 8;
    pri = fun_05E0(var_216)
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_BE80
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 3;
    var_264 = 0;
    var_272 = 21;
    var_280 = 8802641224559852288;
    var_288 = 56;
    pri = fun_1A68(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
// lab_C0F0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -6961743679987700654;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1678(var_72)
    var_88 = 0;
    pri = fun_1738()
// lab_BE80
    var_8 = 5;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = var_8;
    var_80 = 56;
    pri = fun_1A68(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_88 = 3;
    var_96 = 0;
    var_104 = 6603420229272498538;
    var_112 = 24;
    pri = fun_1530(var_104, var_96, var_88)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1678(var_120)
    var_136 = 0;
    pri = fun_1738()
    var_144 = var_8;
    var_152 = 8;
    pri = fun_05E0(var_144)
    var_160 = 8802641224559852288;
    var_168 = 8;
    pri = fun_05E0(var_160)
    var_176 = 1;
    var_184 = 1;
    var_192 = -1;
    var_200 = -1;
    var_208 = 0;
    var_216 = 0;
    var_224 = var_8;
    var_232 = 56;
    pri = fun_3648(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    var_280 = -6961743679987700654;
    var_288 = var_8;
    var_296 = 56;
    pri = fun_1480(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = 8;
    pri = fun_1678(var_304)
    var_320 = 0;
    pri = fun_1738()
    var_328 = 9;
    var_336 = 2019152596824525233;
    pri = WorkSet(var_336, var_328)
    var_344 = -341965168978892642;
    pri = FlagSet(var_344)
    OP_JUMP lab_C180
// lab_C180
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7870(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
