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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    pri = arg_6;
    OP_JNZ lab_1AF0
    var_8 = 0;
    pri = fun_0AB8()
// lab_1AF0
    pri = arg_1;
    switch (pri) {
// switch_3058
        case default:
        {
// switch_3058_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_33A8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_33A8
            pri = 1;
            OP_JUMP lab_33B0
// lab_33A8
            pri = 0;
// lab_33B0
            OP_JZER lab_3508
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
            OP_JUMP lab_3568
// lab_3508
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
// lab_3568
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_35C8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3628
// lab_35C8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3628
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3628
            pri = arg_2;
            OP_JZER lab_3668
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3668
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3058_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x1:
        {
// switch_3058_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x2:
        {
// switch_3058_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x3:
        {
// switch_3058_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x4:
        {
// switch_3058_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x5:
        {
// switch_3058_case_0x5
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
            OP_JUMP switch_3058_case_default
        }
        case 0x6:
        {
// switch_3058_case_0x6
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
            OP_JUMP switch_3058_case_default
        }
        case 0x7:
        {
// switch_3058_case_0x7
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
            OP_JUMP switch_3058_case_default
        }
        case 0x8:
        {
// switch_3058_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x9:
        {
// switch_3058_case_0x9
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
            OP_JUMP switch_3058_case_default
        }
        case 0xa:
        {
// switch_3058_case_0xa
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
            OP_JUMP switch_3058_case_default
        }
        case 0xb:
        {
// switch_3058_case_0xb
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
            OP_JUMP switch_3058_case_default
        }
        case 0xc:
        {
// switch_3058_case_0xc
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
            OP_JUMP switch_3058_case_default
        }
        case 0xd:
        {
// switch_3058_case_0xd
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
            OP_JUMP switch_3058_case_default
        }
        case 0xe:
        {
// switch_3058_case_0xe
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
            OP_JUMP switch_3058_case_default
        }
        case 0xf:
        {
// switch_3058_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x10:
        {
// switch_3058_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x11:
        {
// switch_3058_case_0x11
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
            OP_JUMP switch_3058_case_default
        }
        case 0x12:
        {
// switch_3058_case_0x12
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
            OP_JUMP switch_3058_case_default
        }
        case 0x13:
        {
// switch_3058_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x14:
        {
// switch_3058_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x15:
        {
// switch_3058_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x16:
        {
// switch_3058_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x17:
        {
// switch_3058_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x18:
        {
// switch_3058_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x19:
        {
// switch_3058_case_0x19
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
            OP_JUMP switch_3058_case_default
        }
        case 0x1a:
        {
// switch_3058_case_0x1a
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
            OP_JUMP switch_3058_case_default
        }
        case 0x1b:
        {
// switch_3058_case_0x1b
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
            OP_JUMP switch_3058_case_default
        }
        case 0x1c:
        {
// switch_3058_case_0x1c
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
            OP_JUMP switch_3058_case_default
        }
        case 0x1d:
        {
// switch_3058_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x1e:
        {
// switch_3058_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x1f:
        {
// switch_3058_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x20:
        {
// switch_3058_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x21:
        {
// switch_3058_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x22:
        {
// switch_3058_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x23:
        {
// switch_3058_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x24:
        {
// switch_3058_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x25:
        {
// switch_3058_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x26:
        {
// switch_3058_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x27:
        {
// switch_3058_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x28:
        {
// switch_3058_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
        case 0x29:
        {
// switch_3058_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3058_case_default
        }
    }
}
// fun_3698
fun_3698() {
    pri = arg_5;
    OP_JNZ lab_36D0
    var_8 = 0;
    pri = fun_0AB8()
// lab_36D0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3720
    OP_CONST_S -8, -1
// lab_3720
    pri = arg_1;
    switch (pri) {
// switch_51D8
        case default:
        {
// switch_51D8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5680
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_05A8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5680
            pri = 1;
            OP_JUMP lab_5688
// lab_5680
            pri = 0;
// lab_5688
            OP_JZER lab_56D8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5930
// lab_56D8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5740
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5740
            pri = 1;
            OP_JUMP lab_5748
// lab_5740
            pri = 0;
// lab_5748
            OP_JZER lab_58D0
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
            OP_JUMP lab_5930
// lab_58D0
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
// lab_5930
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_59A0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_59A0
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_51D8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x1:
        {
// switch_51D8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x2:
        {
// switch_51D8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x3:
        {
// switch_51D8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x4:
        {
// switch_51D8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x5:
        {
// switch_51D8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_51D8_case_default
        }
        case 0x6:
        {
// switch_51D8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x7:
        {
// switch_51D8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x8:
        {
// switch_51D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x9:
        {
// switch_51D8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0xa:
        {
// switch_51D8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0xb:
        {
// switch_51D8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0xc:
        {
// switch_51D8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0xd:
        {
// switch_51D8_case_0xd
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
            OP_JUMP switch_51D8_case_default
        }
        case 0xe:
        {
// switch_51D8_case_0xe
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
            OP_JUMP switch_51D8_case_default
        }
        case 0xf:
        {
// switch_51D8_case_0xf
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x10:
        {
// switch_51D8_case_0x10
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x11:
        {
// switch_51D8_case_0x11
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x12:
        {
// switch_51D8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x13:
        {
// switch_51D8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x14:
        {
// switch_51D8_case_0x14
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x15:
        {
// switch_51D8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x16:
        {
// switch_51D8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x17:
        {
// switch_51D8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x18:
        {
// switch_51D8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x19:
        {
// switch_51D8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x1a:
        {
// switch_51D8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x1b:
        {
// switch_51D8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x1c:
        {
// switch_51D8_case_0x1c
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x1d:
        {
// switch_51D8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x1e:
        {
// switch_51D8_case_0x1e
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x1f:
        {
// switch_51D8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x20:
        {
// switch_51D8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x21:
        {
// switch_51D8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x22:
        {
// switch_51D8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x23:
        {
// switch_51D8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x24:
        {
// switch_51D8_case_0x24
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x25:
        {
// switch_51D8_case_0x25
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x26:
        {
// switch_51D8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x27:
        {
// switch_51D8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x28:
        {
// switch_51D8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x29:
        {
// switch_51D8_case_0x29
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x2a:
        {
// switch_51D8_case_0x2a
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x2b:
        {
// switch_51D8_case_0x2b
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x2c:
        {
// switch_51D8_case_0x2c
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x2d:
        {
// switch_51D8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x2e:
        {
// switch_51D8_case_0x2e
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x2f:
        {
// switch_51D8_case_0x2f
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x30:
        {
// switch_51D8_case_0x30
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x31:
        {
// switch_51D8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x32:
        {
// switch_51D8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x33:
        {
// switch_51D8_case_0x33
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x34:
        {
// switch_51D8_case_0x34
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x35:
        {
// switch_51D8_case_0x35
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x36:
        {
// switch_51D8_case_0x36
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x37:
        {
// switch_51D8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x38:
        {
// switch_51D8_case_0x38
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
            OP_JUMP switch_51D8_case_default
        }
        case 0x39:
        {
// switch_51D8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x3a:
        {
// switch_51D8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x3b:
        {
// switch_51D8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x3c:
        {
// switch_51D8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x3d:
        {
// switch_51D8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
        case 0x3e:
        {
// switch_51D8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_51D8_case_default
        }
    }
}
// fun_59D0
fun_59D0() {
    pri = arg_4;
    OP_JNZ lab_5A08
    var_8 = 0;
    pri = fun_0AB8()
// lab_5A08
    pri = arg_1;
    switch (pri) {
// switch_6DE0
        case default:
        {
// switch_6DE0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0B78(var_264)
            OP_JZER lab_73A8
            pri = arg_3;
            switch (pri) {
// switch_7350
                case default:
                {
// switch_7350_case_default
                    OP_JUMP lab_7660
// lab_7660
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_76D0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_76D0
                    var_8 = 0;
                    pri = fun_0AF8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7350_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7350_case_default
                }
                case 0x2:
                {
// switch_7350_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7350_case_default
                }
                case 0x3:
                {
// switch_7350_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7350_case_default
                }
            }
// lab_73A8
            pri = arg_1;
            OP_JZER lab_73F8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_73F8
            pri = 0;
            OP_JUMP lab_7400
// lab_73F8
            pri = 1;
// lab_7400
            OP_JZER lab_7468
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05A8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7468
            pri = 1;
            OP_JUMP lab_7470
// lab_7468
            pri = 0;
// lab_7470
            OP_JZER lab_74C0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7660
// lab_74C0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7528
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7660
// lab_7528
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
// switch_6DE0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1:
        {
// switch_6DE0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2:
        {
// switch_6DE0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x3:
        {
// switch_6DE0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x4:
        {
// switch_6DE0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x5:
        {
// switch_6DE0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x6:
        {
// switch_6DE0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x7:
        {
// switch_6DE0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x8:
        {
// switch_6DE0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x9:
        {
// switch_6DE0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0xa:
        {
// switch_6DE0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0xb:
        {
// switch_6DE0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0xc:
        {
// switch_6DE0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0xd:
        {
// switch_6DE0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0xe:
        {
// switch_6DE0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0xf:
        {
// switch_6DE0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x10:
        {
// switch_6DE0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x11:
        {
// switch_6DE0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x12:
        {
// switch_6DE0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x13:
        {
// switch_6DE0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x14:
        {
// switch_6DE0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x15:
        {
// switch_6DE0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x16:
        {
// switch_6DE0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x17:
        {
// switch_6DE0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x18:
        {
// switch_6DE0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x19:
        {
// switch_6DE0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1a:
        {
// switch_6DE0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1b:
        {
// switch_6DE0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1c:
        {
// switch_6DE0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1d:
        {
// switch_6DE0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1e:
        {
// switch_6DE0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x1f:
        {
// switch_6DE0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x20:
        {
// switch_6DE0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x21:
        {
// switch_6DE0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x22:
        {
// switch_6DE0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x23:
        {
// switch_6DE0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x24:
        {
// switch_6DE0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x25:
        {
// switch_6DE0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x26:
        {
// switch_6DE0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x27:
        {
// switch_6DE0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x28:
        {
// switch_6DE0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x29:
        {
// switch_6DE0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2a:
        {
// switch_6DE0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2b:
        {
// switch_6DE0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2c:
        {
// switch_6DE0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2d:
        {
// switch_6DE0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2e:
        {
// switch_6DE0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x2f:
        {
// switch_6DE0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x30:
        {
// switch_6DE0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x31:
        {
// switch_6DE0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x32:
        {
// switch_6DE0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x33:
        {
// switch_6DE0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x34:
        {
// switch_6DE0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x35:
        {
// switch_6DE0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x36:
        {
// switch_6DE0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x37:
        {
// switch_6DE0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x38:
        {
// switch_6DE0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x39:
        {
// switch_6DE0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x3a:
        {
// switch_6DE0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x3b:
        {
// switch_6DE0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x3c:
        {
// switch_6DE0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x3d:
        {
// switch_6DE0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
        case 0x3e:
        {
// switch_6DE0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_6DE0_case_default
        }
    }
}
// fun_7700
fun_7700() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7800
        case default:
        {
// switch_7800_case_default
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
// switch_7800_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7800_case_default
        }
        case 0x1:
        {
// switch_7800_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7800_case_default
        }
        case 0x2:
        {
// switch_7800_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7800_case_default
        }
        case 0x3:
        {
// switch_7800_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7800_case_default
        }
    }
}
// fun_78C0
fun_78C0() {
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
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_15E0()
    pri = 0;
    return pri;
}
// fun_7958
fun_7958() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7700(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_78C0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7A00
fun_7A00() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7A50
// lab_7A50
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7AC8
    OP_JUMP lab_7AF8
// lab_7AC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7A50
// lab_7AF8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7B80
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_59D0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BD8(var_56)
// lab_7B80
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7BE8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B38(var_24, var_16)
// lab_7BE8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7CA8
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
// lab_7CA8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7CE8
    pri = 0;
    return pri;
// lab_7CE8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7E30
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
    OP_JSLESS lab_7DF8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7E30
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
// lab_7DF8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
}
// fun_7EB8
fun_7EB8() {
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
    pri = fun_7958(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1678(var_112)
    var_128 = 0;
    pri = fun_1738()
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
    pri = fun_7A00(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8030
fun_8030() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 3;
    var_40 = arg_6;
    var_48 = 100;
    var_56 = -1;
    var_64 = arg_5;
    var_72 = arg_4;
    var_80 = 1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_7958(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1678(var_112)
    var_128 = 0;
    pri = fun_1738()
    var_136 = 1;
    var_144 = 3;
    var_152 = 0;
    var_160 = arg_5;
    var_168 = var_8;
    var_176 = 40;
    pri = fun_59D0(var_168, var_160, var_152, var_144, var_136)
    var_184 = arg_11;
    var_192 = arg_10;
    var_200 = arg_9;
    var_208 = arg_8;
    var_216 = arg_7;
    var_224 = arg_3;
    var_232 = arg_2;
    var_240 = var_8;
    var_248 = 64;
    pri = fun_8678(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    pri = arg_1;
    OP_JZER lab_82D0
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 0;
    var_296 = arg_5;
    var_304 = var_8;
    var_312 = 56;
    pri = fun_3698(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 0;
    var_328 = 3;
    var_336 = arg_6;
    var_344 = 100;
    var_352 = -1;
    var_360 = arg_1;
    var_368 = var_8;
    var_376 = 56;
    pri = fun_1480(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_384 = 1;
    var_392 = 8;
    pri = fun_1678(var_384)
    var_400 = 0;
    pri = fun_1738()
    var_408 = 1;
    var_416 = 3;
    var_424 = 0;
    var_432 = arg_5;
    var_440 = var_8;
    var_448 = 40;
    pri = fun_59D0(var_440, var_432, var_424, var_416, var_408)
// lab_82D0
    var_8 = -1;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7A00(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8320
fun_8320() {
    var_8 = arg_0;
    pri = FlagGet(var_8)
    OP_JNZ lab_8400
    var_16 = arg_13;
    var_24 = arg_12;
    var_32 = arg_11;
    var_40 = arg_10;
    var_48 = arg_9;
    var_56 = arg_8;
    var_64 = arg_7;
    var_72 = arg_6;
    var_80 = arg_5;
    var_88 = arg_4;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = 96;
    pri = fun_8030(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_120 = arg_0;
    pri = FlagSet(var_120)
    OP_JUMP lab_8468
// lab_8400
    var_8 = 1;
    var_16 = 3;
    var_24 = arg_8;
    var_32 = 100;
    var_40 = -1;
    var_48 = arg_7;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = arg_3;
    var_88 = 80;
    pri = fun_7EB8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8468
    pri = 0;
    return pri;
}
// fun_8478
fun_8478() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8510
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
    pri = fun_1AB8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8510
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8668
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_85D0
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_85D0
    pri = 1;
    OP_JUMP lab_85D8
// lab_8668
    pri = 0;
    return pri;
// lab_85D0
    pri = 0;
// lab_85D8
    OP_JZER lab_8668
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
    pri = fun_1AB8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8678
fun_8678() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8478(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8700(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8700
fun_8700() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8898(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8768
fun_8768() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_87D8
    OP_CONST_S -8, 1
// lab_87D8
    pri = arg_0;
    OP_JNZ lab_87F8
    OP_ZERO_P_S -8
// lab_87F8
    pri = var_8;
    OP_JZER lab_8880
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8880
    pri = 0;
    return pri;
}
// fun_8898
fun_8898() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_1820(var_8)
    var_24 = 0;
    pri = fun_1858()
    pri = arg_3;
    OP_JNZ lab_89B8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8980
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8A28(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_89A8
// lab_89B8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8BC8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8980
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8AF0(var_16, var_8)
// lab_89A8
    OP_JUMP lab_8A00
// lab_8A00
    var_8 = 0;
    pri = fun_18F8()
    pri = 0;
    return pri;
}
// fun_8A28
fun_8A28() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8BC8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8AD8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8AD8
    pri = 0;
    return pri;
}
// fun_8AF0
fun_8AF0() {
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
// fun_8BC8
fun_8BC8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8C10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8ED0(var_8)
// lab_8C10
    pri = arg_4;
    OP_JNZ lab_8C78
    var_8 = 0;
    var_16 = 8;
    pri = fun_1928(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1978(var_40, var_32, var_24)
// lab_8C78
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8D18
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_19C8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1580(var_56, var_48, var_40)
    OP_JUMP lab_8E08
// lab_8D18
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8DD0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8DD0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8DD0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1580(var_24, var_16, var_8)
// lab_8E08
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8E48
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_8E48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1678(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_90D8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8768(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8ED0
fun_8ED0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8F30
    var_16 = 30568;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8F30
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9070
        case default:
        {
// switch_9070_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9060
            var_16 = 31112;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9060
            OP_JUMP lab_90A8
// lab_90A8
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9070_case_0x1
            var_8 = 30784;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_90A8
        }
        case 0x2:
        {
// switch_9070_case_0x2
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_90A8
        }
    }
}
// fun_90D8
fun_90D8() {
    pri = arg_2;
    OP_JNZ lab_91C0
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
// lab_91C0
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
// fun_9238
fun_9238() {
    pri = g_mode;
    switch (pri) {
// switch_9320
        case default:
        {
// switch_9320_case_default
            pri = CommandNOP()
            OP_JUMP lab_9378
// lab_9378
            pri = 0;
            return pri;
        }
        case 0xa0fbe9807bd49c22:
        {
// switch_9320_case_0xa0fbe9807bd49c22
            var_8 = 0;
            pri = fun_9930()
            OP_JUMP lab_9378
        }
        case 0x0:
        {
// switch_9320_case_0x0
            var_8 = 0;
            pri = fun_9388()
            OP_JUMP lab_9378
        }
        case 0xb2508be97013638:
        {
// switch_9320_case_0xb2508be97013638
            var_8 = 0;
            pri = fun_9428()
            OP_JUMP lab_9378
        }
        case 0x75d569ee8d71f88f:
        {
// switch_9320_case_0x75d569ee8d71f88f
            var_8 = 0;
            pri = fun_93A0()
            OP_JUMP lab_9378
        }
    }
}
// fun_9388
fun_9388() {
    pri = 0;
    return pri;
}
// fun_93A0
fun_93A0() {
    var_8 = 31512;
    pri = SoundPostEvent(var_8)
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_24 = var_8;
    pri = PokeCampToVisit(var_24)
    pri = 0;
    return pri;
}
// fun_9428
fun_9428() {
    var_8 = 31672;
    var_16 = 8;
    pri = fun_1820(var_8)
    var_24 = 0;
    pri = fun_1858()
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = 0;
    OP_ADDR_ALT -96
    OP_FILL 88
    pri = 31896;
    OP_ADDR_ALT -96
    OP_MOVS 80
    OP_CONST_S -104, -2432866260121548181
    pri = var_8;
    switch (pri) {
// switch_9738
        case default:
        {
// switch_9738_case_default
            OP_JUMP lab_97D0
// lab_97D0
            var_8 = 1;
            var_16 = var_104;
            var_24 = 0;
            var_32 = 24;
            pri = fun_1A68(var_24, var_16, var_8)
            var_40 = 3;
            var_48 = 0;
            var_56 = -1560501166841623483;
            var_64 = 24;
            pri = fun_1530(var_56, var_48, var_40)
            var_80 = 0;
            var_88 = 0;
            var_96 = 1;
            var_104 = 0;
            var_112 = 0;
            var_120 = 0;
            var_128 = 48;
            pri = fun_1768(var_120, var_112, var_104, var_96, var_88, var_80)
            var_112 = pri;
            var_136 = 0;
            pri = fun_1738()
            pri = var_112;
            OP_JZER lab_9900
            var_144 = 32680;
            pri = SoundPostEvent(var_144)
            OP_PUSH_P_ADR -96
            pri = NpcPokeCampToVisit(var_144)
// lab_9900
            var_8 = 0;
            pri = fun_18F8()
            pri = 0;
            return pri;
        }
        case 0xb332920807f9d2d7:
        {
// switch_9738_case_0xb332920807f9d2d7
            OP_ADDR_P_ALT -96
            pri = 32592;
            OP_MOVS_P 88
            OP_CONST_S -104, -1932883671155458192
            OP_JUMP lab_97D0
        }
        case 0xdbcf5cff0180b073:
        {
// switch_9738_case_0xdbcf5cff0180b073
            OP_ADDR_P_ALT -96
            pri = 32064;
            OP_MOVS_P 88
            OP_CONST_S -104, 8605464958165809852
            OP_JUMP lab_97D0
        }
        case 0xe4e595ff06c510d8:
        {
// switch_9738_case_0xe4e595ff06c510d8
            OP_ADDR_P_ALT -96
            pri = 32152;
            OP_MOVS_P 88
            OP_CONST_S -104, 9024404059781429413
            OP_JUMP lab_97D0
        }
        case 0xedfc32ff0c0a1b29:
        {
// switch_9738_case_0xedfc32ff0c0a1b29
            OP_ADDR_P_ALT -96
            pri = 32240;
            OP_MOVS_P 88
            OP_CONST_S -104, -1735024305839312570
            OP_JUMP lab_97D0
        }
        case 0xf55f6bff0fdce70e:
        {
// switch_9738_case_0xf55f6bff0fdce70e
            OP_ADDR_P_ALT -96
            pri = 32328;
            OP_MOVS_P 88
            OP_CONST_S -104, 8317901694149609231
            OP_JUMP lab_97D0
        }
        case 0x194b97ff2492111a:
        {
// switch_9738_case_0x194b97ff2492111a
            OP_ADDR_P_ALT -96
            pri = 31976;
            OP_MOVS_P 88
            OP_CONST_S -104, -2432866260121548181
            OP_JUMP lab_97D0
        }
        case 0x449ae0ff3d19d777:
        {
// switch_9738_case_0x449ae0ff3d19d777
            OP_ADDR_P_ALT -96
            pri = 32416;
            OP_MOVS_P 88
            OP_CONST_S -104, -3290195392599046640
            OP_JUMP lab_97D0
        }
        case 0x4bfdf6ff40ec67e3:
        {
// switch_9738_case_0x4bfdf6ff40ec67e3
            OP_ADDR_P_ALT -96
            pri = 32504;
            OP_MOVS_P 88
            OP_CONST_S -104, -4575423345328603156
            OP_JUMP lab_97D0
        }
    }
}
// fun_9930
fun_9930() {
    var_8 = 32840;
    var_16 = 8;
    pri = fun_1820(var_8)
    var_24 = 0;
    pri = fun_1858()
    var_32 = 6;
    var_40 = 4;
    var_48 = 2;
    var_56 = 0;
    var_64 = 9;
    var_72 = 1;
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = 149;
    OP_PUSH4_C -6102256331385949556, -6102256331385949556, -6102253032851064923, 2778608153618920762
    var_112 = 112;
    pri = fun_8320(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_120 = 0;
    pri = fun_18F8()
    pri = 0;
    return pri;
}
