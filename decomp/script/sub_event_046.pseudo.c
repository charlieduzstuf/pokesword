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
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_17A0
fun_17A0() {
    OP_JUMP lab_17B8
// lab_17B8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1800
    OP_JUMP lab_1830
    OP_JUMP lab_1820
// lab_1800
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1830
    pri = 0;
    return pri;
// lab_1820
    OP_JUMP lab_17B8
}
// fun_1840
fun_1840() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1870
fun_1870() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18C0
fun_18C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1910
fun_1910() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1960
fun_1960() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19B0
fun_19B0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A00
fun_1A00() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    pri = arg_6;
    OP_JNZ lab_1A70
    var_8 = 0;
    pri = fun_0AB8()
// lab_1A70
    pri = arg_1;
    switch (pri) {
// switch_2FD8
        case default:
        {
// switch_2FD8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3328
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3328
            pri = 1;
            OP_JUMP lab_3330
// lab_3328
            pri = 0;
// lab_3330
            OP_JZER lab_3488
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
            OP_JUMP lab_34E8
// lab_3488
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
// lab_34E8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3548
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_35A8
// lab_3548
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_35A8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_35A8
            pri = arg_2;
            OP_JZER lab_35E8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_35E8
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2FD8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1:
        {
// switch_2FD8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x2:
        {
// switch_2FD8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x3:
        {
// switch_2FD8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x4:
        {
// switch_2FD8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x5:
        {
// switch_2FD8_case_0x5
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x6:
        {
// switch_2FD8_case_0x6
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x7:
        {
// switch_2FD8_case_0x7
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x8:
        {
// switch_2FD8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x9:
        {
// switch_2FD8_case_0x9
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0xa:
        {
// switch_2FD8_case_0xa
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0xb:
        {
// switch_2FD8_case_0xb
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0xc:
        {
// switch_2FD8_case_0xc
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0xd:
        {
// switch_2FD8_case_0xd
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0xe:
        {
// switch_2FD8_case_0xe
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0xf:
        {
// switch_2FD8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x10:
        {
// switch_2FD8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x11:
        {
// switch_2FD8_case_0x11
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x12:
        {
// switch_2FD8_case_0x12
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x13:
        {
// switch_2FD8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x14:
        {
// switch_2FD8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x15:
        {
// switch_2FD8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x16:
        {
// switch_2FD8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x17:
        {
// switch_2FD8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x18:
        {
// switch_2FD8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x19:
        {
// switch_2FD8_case_0x19
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1a:
        {
// switch_2FD8_case_0x1a
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1b:
        {
// switch_2FD8_case_0x1b
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1c:
        {
// switch_2FD8_case_0x1c
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
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1d:
        {
// switch_2FD8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1e:
        {
// switch_2FD8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x1f:
        {
// switch_2FD8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x20:
        {
// switch_2FD8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x21:
        {
// switch_2FD8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x22:
        {
// switch_2FD8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x23:
        {
// switch_2FD8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x24:
        {
// switch_2FD8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x25:
        {
// switch_2FD8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x26:
        {
// switch_2FD8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x27:
        {
// switch_2FD8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x28:
        {
// switch_2FD8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
        case 0x29:
        {
// switch_2FD8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FD8_case_default
        }
    }
}
// fun_3618
fun_3618() {
    pri = arg_5;
    OP_JNZ lab_3650
    var_8 = 0;
    pri = fun_0AB8()
// lab_3650
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_36A0
    OP_CONST_S -8, -1
// lab_36A0
    pri = arg_1;
    switch (pri) {
// switch_5158
        case default:
        {
// switch_5158_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5600
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_05A8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5600
            pri = 1;
            OP_JUMP lab_5608
// lab_5600
            pri = 0;
// lab_5608
            OP_JZER lab_5658
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_58B0
// lab_5658
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_56C0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_56C0
            pri = 1;
            OP_JUMP lab_56C8
// lab_56C0
            pri = 0;
// lab_56C8
            OP_JZER lab_5850
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
            OP_JUMP lab_58B0
// lab_5850
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
// lab_58B0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5920
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5920
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5158_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x1:
        {
// switch_5158_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x2:
        {
// switch_5158_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x3:
        {
// switch_5158_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x4:
        {
// switch_5158_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x5:
        {
// switch_5158_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_5158_case_default
        }
        case 0x6:
        {
// switch_5158_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x7:
        {
// switch_5158_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x8:
        {
// switch_5158_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x9:
        {
// switch_5158_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0xa:
        {
// switch_5158_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0xb:
        {
// switch_5158_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0xc:
        {
// switch_5158_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0xd:
        {
// switch_5158_case_0xd
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
            OP_JUMP switch_5158_case_default
        }
        case 0xe:
        {
// switch_5158_case_0xe
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
            OP_JUMP switch_5158_case_default
        }
        case 0xf:
        {
// switch_5158_case_0xf
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
            OP_JUMP switch_5158_case_default
        }
        case 0x10:
        {
// switch_5158_case_0x10
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
            OP_JUMP switch_5158_case_default
        }
        case 0x11:
        {
// switch_5158_case_0x11
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
            OP_JUMP switch_5158_case_default
        }
        case 0x12:
        {
// switch_5158_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x13:
        {
// switch_5158_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x14:
        {
// switch_5158_case_0x14
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
            OP_JUMP switch_5158_case_default
        }
        case 0x15:
        {
// switch_5158_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x16:
        {
// switch_5158_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x17:
        {
// switch_5158_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x18:
        {
// switch_5158_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x19:
        {
// switch_5158_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x1a:
        {
// switch_5158_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x1b:
        {
// switch_5158_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x1c:
        {
// switch_5158_case_0x1c
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
            OP_JUMP switch_5158_case_default
        }
        case 0x1d:
        {
// switch_5158_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x1e:
        {
// switch_5158_case_0x1e
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
            OP_JUMP switch_5158_case_default
        }
        case 0x1f:
        {
// switch_5158_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x20:
        {
// switch_5158_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x21:
        {
// switch_5158_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x22:
        {
// switch_5158_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x23:
        {
// switch_5158_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x24:
        {
// switch_5158_case_0x24
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
            OP_JUMP switch_5158_case_default
        }
        case 0x25:
        {
// switch_5158_case_0x25
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
            OP_JUMP switch_5158_case_default
        }
        case 0x26:
        {
// switch_5158_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x27:
        {
// switch_5158_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x28:
        {
// switch_5158_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x29:
        {
// switch_5158_case_0x29
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
            OP_JUMP switch_5158_case_default
        }
        case 0x2a:
        {
// switch_5158_case_0x2a
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
            OP_JUMP switch_5158_case_default
        }
        case 0x2b:
        {
// switch_5158_case_0x2b
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
            OP_JUMP switch_5158_case_default
        }
        case 0x2c:
        {
// switch_5158_case_0x2c
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
            OP_JUMP switch_5158_case_default
        }
        case 0x2d:
        {
// switch_5158_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x2e:
        {
// switch_5158_case_0x2e
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
            OP_JUMP switch_5158_case_default
        }
        case 0x2f:
        {
// switch_5158_case_0x2f
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
            OP_JUMP switch_5158_case_default
        }
        case 0x30:
        {
// switch_5158_case_0x30
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
            OP_JUMP switch_5158_case_default
        }
        case 0x31:
        {
// switch_5158_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x32:
        {
// switch_5158_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x33:
        {
// switch_5158_case_0x33
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
            OP_JUMP switch_5158_case_default
        }
        case 0x34:
        {
// switch_5158_case_0x34
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
            OP_JUMP switch_5158_case_default
        }
        case 0x35:
        {
// switch_5158_case_0x35
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
            OP_JUMP switch_5158_case_default
        }
        case 0x36:
        {
// switch_5158_case_0x36
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
            OP_JUMP switch_5158_case_default
        }
        case 0x37:
        {
// switch_5158_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x38:
        {
// switch_5158_case_0x38
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
            OP_JUMP switch_5158_case_default
        }
        case 0x39:
        {
// switch_5158_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x3a:
        {
// switch_5158_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x3b:
        {
// switch_5158_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x3c:
        {
// switch_5158_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x3d:
        {
// switch_5158_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
        case 0x3e:
        {
// switch_5158_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_5158_case_default
        }
    }
}
// fun_5950
fun_5950() {
    pri = arg_4;
    OP_JNZ lab_5988
    var_8 = 0;
    pri = fun_0AB8()
// lab_5988
    pri = arg_1;
    switch (pri) {
// switch_6D60
        case default:
        {
// switch_6D60_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0B78(var_264)
            OP_JZER lab_7328
            pri = arg_3;
            switch (pri) {
// switch_72D0
                case default:
                {
// switch_72D0_case_default
                    OP_JUMP lab_75E0
// lab_75E0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7650
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7650
                    var_8 = 0;
                    pri = fun_0AF8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_72D0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_72D0_case_default
                }
                case 0x2:
                {
// switch_72D0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_72D0_case_default
                }
                case 0x3:
                {
// switch_72D0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_72D0_case_default
                }
            }
// lab_7328
            pri = arg_1;
            OP_JZER lab_7378
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7378
            pri = 0;
            OP_JUMP lab_7380
// lab_7378
            pri = 1;
// lab_7380
            OP_JZER lab_73E8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05A8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_73E8
            pri = 1;
            OP_JUMP lab_73F0
// lab_73E8
            pri = 0;
// lab_73F0
            OP_JZER lab_7440
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_75E0
// lab_7440
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_74A8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_75E0
// lab_74A8
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
// switch_6D60_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1:
        {
// switch_6D60_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2:
        {
// switch_6D60_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x3:
        {
// switch_6D60_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x4:
        {
// switch_6D60_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x5:
        {
// switch_6D60_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_6D60_case_default
        }
        case 0x6:
        {
// switch_6D60_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x7:
        {
// switch_6D60_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x8:
        {
// switch_6D60_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x9:
        {
// switch_6D60_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0xa:
        {
// switch_6D60_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0xb:
        {
// switch_6D60_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0xc:
        {
// switch_6D60_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0xd:
        {
// switch_6D60_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0xe:
        {
// switch_6D60_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0xf:
        {
// switch_6D60_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x10:
        {
// switch_6D60_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x11:
        {
// switch_6D60_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x12:
        {
// switch_6D60_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x13:
        {
// switch_6D60_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x14:
        {
// switch_6D60_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x15:
        {
// switch_6D60_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x16:
        {
// switch_6D60_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x17:
        {
// switch_6D60_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x18:
        {
// switch_6D60_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x19:
        {
// switch_6D60_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1a:
        {
// switch_6D60_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1b:
        {
// switch_6D60_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1c:
        {
// switch_6D60_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1d:
        {
// switch_6D60_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1e:
        {
// switch_6D60_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x1f:
        {
// switch_6D60_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x20:
        {
// switch_6D60_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x21:
        {
// switch_6D60_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x22:
        {
// switch_6D60_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x23:
        {
// switch_6D60_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x24:
        {
// switch_6D60_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x25:
        {
// switch_6D60_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x26:
        {
// switch_6D60_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x27:
        {
// switch_6D60_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x28:
        {
// switch_6D60_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x29:
        {
// switch_6D60_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2a:
        {
// switch_6D60_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2b:
        {
// switch_6D60_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2c:
        {
// switch_6D60_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2d:
        {
// switch_6D60_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2e:
        {
// switch_6D60_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x2f:
        {
// switch_6D60_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x30:
        {
// switch_6D60_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x31:
        {
// switch_6D60_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x32:
        {
// switch_6D60_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x33:
        {
// switch_6D60_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x34:
        {
// switch_6D60_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x35:
        {
// switch_6D60_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x36:
        {
// switch_6D60_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x37:
        {
// switch_6D60_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x38:
        {
// switch_6D60_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x39:
        {
// switch_6D60_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x3a:
        {
// switch_6D60_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x3b:
        {
// switch_6D60_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x3c:
        {
// switch_6D60_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x3d:
        {
// switch_6D60_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
        case 0x3e:
        {
// switch_6D60_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_6D60_case_default
        }
    }
}
// fun_7680
fun_7680() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7780
        case default:
        {
// switch_7780_case_default
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
// switch_7780_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7780_case_default
        }
        case 0x1:
        {
// switch_7780_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7780_case_default
        }
        case 0x2:
        {
// switch_7780_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7780_case_default
        }
        case 0x3:
        {
// switch_7780_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7780_case_default
        }
    }
}
// fun_7840
fun_7840() {
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
// fun_78D8
fun_78D8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7680(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7840(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7980
fun_7980() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_79D0
// lab_79D0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7A48
    OP_JUMP lab_7A78
// lab_7A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_79D0
// lab_7A78
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7B00
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5950(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BD8(var_56)
// lab_7B00
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7B68
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B38(var_24, var_16)
// lab_7B68
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7C28
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
// lab_7C28
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7C68
    pri = 0;
    return pri;
// lab_7C68
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7DB0
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
    OP_JSLESS lab_7D78
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7DB0
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
// lab_7D78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
}
// fun_7E38
fun_7E38() {
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
    pri = fun_78D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
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
    pri = fun_7980(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_7FB0
fun_7FB0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8048
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
    pri = fun_1A38(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8048
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_81A0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8108
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8108
    pri = 1;
    OP_JUMP lab_8110
// lab_81A0
    pri = 0;
    return pri;
// lab_8108
    pri = 0;
// lab_8110
    OP_JZER lab_81A0
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
    pri = fun_1A38(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_81B0
fun_81B0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8530(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8218
fun_8218() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8288
    OP_CONST_S -8, 1
// lab_8288
    pri = arg_0;
    OP_JNZ lab_82A8
    OP_ZERO_P_S -8
// lab_82A8
    pri = var_8;
    OP_JZER lab_8330
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8330
    pri = 0;
    return pri;
}
// fun_8348
fun_8348() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_1768(var_8)
    var_24 = 0;
    pri = fun_17A0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1870(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_19B0(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8460
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8460
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_7FB0(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_81B0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1840()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_1A00(var_112)
    pri = 0;
    return pri;
}
// fun_8530
fun_8530() {
    var_8 = 30568;
    var_16 = 8;
    pri = fun_1768(var_8)
    var_24 = 0;
    pri = fun_17A0()
    pri = arg_3;
    OP_JNZ lab_8650
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8618
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_86C0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8640
// lab_8650
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8860(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8618
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8788(var_16, var_8)
// lab_8640
    OP_JUMP lab_8698
// lab_8698
    var_8 = 0;
    pri = fun_1840()
    pri = 0;
    return pri;
}
// fun_86C0
fun_86C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8860(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8770
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8770
    pri = 0;
    return pri;
}
// fun_8788
fun_8788() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_18C0(var_24, var_16, var_8)
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
    pri = fun_1870(var_96)
    pri = 0;
    return pri;
}
// fun_8860
fun_8860() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_88A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8B68(var_8)
// lab_88A8
    pri = arg_4;
    OP_JNZ lab_8910
    var_8 = 0;
    var_16 = 8;
    pri = fun_1870(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_18C0(var_40, var_32, var_24)
// lab_8910
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_89B0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1910(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1580(var_56, var_48, var_40)
    OP_JUMP lab_8AA0
// lab_89B0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8A68
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8A68
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8A68
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1580(var_24, var_16, var_8)
// lab_8AA0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8AE0
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_8AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1678(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8D70(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8218(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8B68
fun_8B68() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8BC8
    var_16 = 30728;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8BC8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8D08
        case default:
        {
// switch_8D08_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8CF8
            var_16 = 31272;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8CF8
            OP_JUMP lab_8D40
// lab_8D40
            var_8 = 31488;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8D08_case_0x1
            var_8 = 30944;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8D40
        }
        case 0x2:
        {
// switch_8D08_case_0x2
            var_8 = 31072;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8D40
        }
    }
}
// fun_8D70
fun_8D70() {
    pri = arg_2;
    OP_JNZ lab_8E58
    var_8 = 0;
    var_16 = 8;
    pri = fun_1870(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_18C0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1960(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8E58
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
// fun_8ED0
fun_8ED0() {
    pri = g_mode;
    switch (pri) {
// switch_8F68
        case default:
        {
// switch_8F68_case_default
            pri = CommandNOP()
            OP_JUMP lab_8FA0
// lab_8FA0
            pri = 0;
            return pri;
        }
        case 0xbee73db8900fbacd:
        {
// switch_8F68_case_0xbee73db8900fbacd
            var_8 = 0;
            pri = fun_8FC8()
            OP_JUMP lab_8FA0
        }
        case 0x0:
        {
// switch_8F68_case_0x0
            var_8 = 0;
            pri = fun_8FB0()
            OP_JUMP lab_8FA0
        }
    }
}
// fun_8FB0
fun_8FB0() {
    pri = 0;
    return pri;
}
// fun_8FC8
fun_8FC8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -3449302454024706318;
    pri = FlagGet(var_16)
    OP_JZER lab_9060
    var_24 = var_8;
    var_32 = 8;
    pri = fun_94E8(var_24)
    OP_JUMP lab_9080
// lab_9060
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9098(var_8)
// lab_9080
    pri = 0;
    return pri;
}
// fun_9098
fun_9098() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7680(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = 3818180116532688899;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1480(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1678(var_128)
    var_144 = 0;
    pri = fun_1738()
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    var_192 = 3818181216044317110;
    var_200 = arg_0;
    var_208 = 56;
    pri = fun_1480(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1678(var_216)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = 3818182315555945321;
    var_280 = arg_0;
    var_288 = 56;
    pri = fun_1480(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_1678(var_296)
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 100;
    var_344 = -1;
    var_352 = 3818183415067573532;
    var_360 = arg_0;
    var_368 = 56;
    pri = fun_1480(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_1678(var_376)
    var_392 = 0;
    pri = fun_1738()
    var_400 = 1;
    var_408 = 3;
    var_416 = 0;
    var_424 = 0;
    var_432 = arg_0;
    var_440 = 40;
    pri = fun_5950(var_432, var_424, var_416, var_408, var_400)
    var_448 = arg_0;
    var_456 = 8;
    pri = fun_05E0(var_448)
    var_464 = 1;
    var_472 = 27;
    var_480 = -695157726003846144;
    var_488 = arg_0;
    var_496 = 32;
    pri = fun_8348(var_488, var_480, var_472, var_464)
    var_504 = 1;
    var_512 = 1;
    var_520 = -1;
    var_528 = -1;
    var_536 = 0;
    var_544 = 0;
    var_552 = arg_0;
    var_560 = 56;
    pri = fun_3618(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 100;
    var_600 = -1;
    var_608 = 3818184514579201743;
    var_616 = arg_0;
    var_624 = 56;
    pri = fun_1480(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 1;
    var_640 = 8;
    pri = fun_1678(var_632)
    var_648 = 0;
    pri = fun_1738()
    var_656 = -3449302454024706318;
    pri = FlagSet(var_656)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = arg_0;
    var_696 = 32;
    pri = fun_7980(var_688, var_680, var_672, var_664)
    pri = 0;
    return pri;
}
// fun_94E8
fun_94E8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3818184514579201743;
    var_88 = 80;
    pri = fun_7E38(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
