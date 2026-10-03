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
            pri = fun_16A0()
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
    pri = arg_2;
    var_8 = pri;
    pri = PlayerGetSex()
    OP_JNZ lab_1588
    pri = arg_1;
    var_8 = pri;
// lab_1588
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = var_8;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15F0
fun_15F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1328(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_15F0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16A0
fun_16A0() {
    OP_JUMP lab_16B8
// lab_16B8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16F8
    pri = 0;
    return pri;
// lab_16F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_16B8
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    var_8 = 0;
    pri = fun_16A0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_17E8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_17E8
    pri = 0;
    return pri;
}
// fun_17F8
fun_17F8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1828
fun_1828() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_18A0()
    return pri;
}
// fun_18A0
fun_18A0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_18E0
fun_18E0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1918
fun_1918() {
    OP_JUMP lab_1930
// lab_1930
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1978
    OP_JUMP lab_19A8
    OP_JUMP lab_1998
// lab_1978
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_19A8
    pri = 0;
    return pri;
// lab_1998
    OP_JUMP lab_1930
}
// fun_19B8
fun_19B8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_19E8
fun_19E8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A88
fun_1A88() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AD8
fun_1AD8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
    pri = arg_6;
    OP_JNZ lab_1B60
    var_8 = 0;
    pri = fun_0AB8()
// lab_1B60
    pri = arg_1;
    switch (pri) {
// switch_30C8
        case default:
        {
// switch_30C8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3418
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3418
            pri = 1;
            OP_JUMP lab_3420
// lab_3418
            pri = 0;
// lab_3420
            OP_JZER lab_3578
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
            OP_JUMP lab_35D8
// lab_3578
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
// lab_35D8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3638
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3698
// lab_3638
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3698
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3698
            pri = arg_2;
            OP_JZER lab_36D8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_36D8
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_30C8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x1:
        {
// switch_30C8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x2:
        {
// switch_30C8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x3:
        {
// switch_30C8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x4:
        {
// switch_30C8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x5:
        {
// switch_30C8_case_0x5
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x6:
        {
// switch_30C8_case_0x6
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x7:
        {
// switch_30C8_case_0x7
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x8:
        {
// switch_30C8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x9:
        {
// switch_30C8_case_0x9
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
            OP_JUMP switch_30C8_case_default
        }
        case 0xa:
        {
// switch_30C8_case_0xa
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
            OP_JUMP switch_30C8_case_default
        }
        case 0xb:
        {
// switch_30C8_case_0xb
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
            OP_JUMP switch_30C8_case_default
        }
        case 0xc:
        {
// switch_30C8_case_0xc
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
            OP_JUMP switch_30C8_case_default
        }
        case 0xd:
        {
// switch_30C8_case_0xd
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
            OP_JUMP switch_30C8_case_default
        }
        case 0xe:
        {
// switch_30C8_case_0xe
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
            OP_JUMP switch_30C8_case_default
        }
        case 0xf:
        {
// switch_30C8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x10:
        {
// switch_30C8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x11:
        {
// switch_30C8_case_0x11
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x12:
        {
// switch_30C8_case_0x12
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x13:
        {
// switch_30C8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x14:
        {
// switch_30C8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x15:
        {
// switch_30C8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x16:
        {
// switch_30C8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x17:
        {
// switch_30C8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x18:
        {
// switch_30C8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x19:
        {
// switch_30C8_case_0x19
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x1a:
        {
// switch_30C8_case_0x1a
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x1b:
        {
// switch_30C8_case_0x1b
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x1c:
        {
// switch_30C8_case_0x1c
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
            OP_JUMP switch_30C8_case_default
        }
        case 0x1d:
        {
// switch_30C8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x1e:
        {
// switch_30C8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x1f:
        {
// switch_30C8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x20:
        {
// switch_30C8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x21:
        {
// switch_30C8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x22:
        {
// switch_30C8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x23:
        {
// switch_30C8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x24:
        {
// switch_30C8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x25:
        {
// switch_30C8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x26:
        {
// switch_30C8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x27:
        {
// switch_30C8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x28:
        {
// switch_30C8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
        case 0x29:
        {
// switch_30C8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30C8_case_default
        }
    }
}
// fun_3708
fun_3708() {
    pri = arg_5;
    OP_JNZ lab_3740
    var_8 = 0;
    pri = fun_0AB8()
// lab_3740
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3790
    OP_CONST_S -8, -1
// lab_3790
    pri = arg_1;
    switch (pri) {
// switch_5248
        case default:
        {
// switch_5248_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_56F0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_05A8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_56F0
            pri = 1;
            OP_JUMP lab_56F8
// lab_56F0
            pri = 0;
// lab_56F8
            OP_JZER lab_5748
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_59A0
// lab_5748
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_57B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_57B0
            pri = 1;
            OP_JUMP lab_57B8
// lab_57B0
            pri = 0;
// lab_57B8
            OP_JZER lab_5940
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
            OP_JUMP lab_59A0
// lab_5940
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
// lab_59A0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5A10
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5A10
            var_8 = 0;
            pri = fun_0AF8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5248_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x1:
        {
// switch_5248_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x2:
        {
// switch_5248_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x3:
        {
// switch_5248_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x4:
        {
// switch_5248_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x5:
        {
// switch_5248_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_5248_case_default
        }
        case 0x6:
        {
// switch_5248_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x7:
        {
// switch_5248_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x8:
        {
// switch_5248_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x9:
        {
// switch_5248_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0xa:
        {
// switch_5248_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0xb:
        {
// switch_5248_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0xc:
        {
// switch_5248_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0xd:
        {
// switch_5248_case_0xd
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
            OP_JUMP switch_5248_case_default
        }
        case 0xe:
        {
// switch_5248_case_0xe
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
            OP_JUMP switch_5248_case_default
        }
        case 0xf:
        {
// switch_5248_case_0xf
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
            OP_JUMP switch_5248_case_default
        }
        case 0x10:
        {
// switch_5248_case_0x10
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
            OP_JUMP switch_5248_case_default
        }
        case 0x11:
        {
// switch_5248_case_0x11
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
            OP_JUMP switch_5248_case_default
        }
        case 0x12:
        {
// switch_5248_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x13:
        {
// switch_5248_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x14:
        {
// switch_5248_case_0x14
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
            OP_JUMP switch_5248_case_default
        }
        case 0x15:
        {
// switch_5248_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x16:
        {
// switch_5248_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x17:
        {
// switch_5248_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x18:
        {
// switch_5248_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x19:
        {
// switch_5248_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x1a:
        {
// switch_5248_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x1b:
        {
// switch_5248_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x1c:
        {
// switch_5248_case_0x1c
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
            OP_JUMP switch_5248_case_default
        }
        case 0x1d:
        {
// switch_5248_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x1e:
        {
// switch_5248_case_0x1e
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
            OP_JUMP switch_5248_case_default
        }
        case 0x1f:
        {
// switch_5248_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x20:
        {
// switch_5248_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x21:
        {
// switch_5248_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x22:
        {
// switch_5248_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x23:
        {
// switch_5248_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x24:
        {
// switch_5248_case_0x24
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
            OP_JUMP switch_5248_case_default
        }
        case 0x25:
        {
// switch_5248_case_0x25
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
            OP_JUMP switch_5248_case_default
        }
        case 0x26:
        {
// switch_5248_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x27:
        {
// switch_5248_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x28:
        {
// switch_5248_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x29:
        {
// switch_5248_case_0x29
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
            OP_JUMP switch_5248_case_default
        }
        case 0x2a:
        {
// switch_5248_case_0x2a
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
            OP_JUMP switch_5248_case_default
        }
        case 0x2b:
        {
// switch_5248_case_0x2b
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
            OP_JUMP switch_5248_case_default
        }
        case 0x2c:
        {
// switch_5248_case_0x2c
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
            OP_JUMP switch_5248_case_default
        }
        case 0x2d:
        {
// switch_5248_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x2e:
        {
// switch_5248_case_0x2e
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
            OP_JUMP switch_5248_case_default
        }
        case 0x2f:
        {
// switch_5248_case_0x2f
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
            OP_JUMP switch_5248_case_default
        }
        case 0x30:
        {
// switch_5248_case_0x30
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
            OP_JUMP switch_5248_case_default
        }
        case 0x31:
        {
// switch_5248_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x32:
        {
// switch_5248_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x33:
        {
// switch_5248_case_0x33
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
            OP_JUMP switch_5248_case_default
        }
        case 0x34:
        {
// switch_5248_case_0x34
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
            OP_JUMP switch_5248_case_default
        }
        case 0x35:
        {
// switch_5248_case_0x35
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
            OP_JUMP switch_5248_case_default
        }
        case 0x36:
        {
// switch_5248_case_0x36
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
            OP_JUMP switch_5248_case_default
        }
        case 0x37:
        {
// switch_5248_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x38:
        {
// switch_5248_case_0x38
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
            OP_JUMP switch_5248_case_default
        }
        case 0x39:
        {
// switch_5248_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x3a:
        {
// switch_5248_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x3b:
        {
// switch_5248_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x3c:
        {
// switch_5248_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x3d:
        {
// switch_5248_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
        case 0x3e:
        {
// switch_5248_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_5248_case_default
        }
    }
}
// fun_5A40
fun_5A40() {
    pri = arg_4;
    OP_JNZ lab_5A78
    var_8 = 0;
    pri = fun_0AB8()
// lab_5A78
    pri = arg_1;
    switch (pri) {
// switch_6E50
        case default:
        {
// switch_6E50_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0B78(var_264)
            OP_JZER lab_7418
            pri = arg_3;
            switch (pri) {
// switch_73C0
                case default:
                {
// switch_73C0_case_default
                    OP_JUMP lab_76D0
// lab_76D0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7740
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7740
                    var_8 = 0;
                    pri = fun_0AF8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_73C0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73C0_case_default
                }
                case 0x2:
                {
// switch_73C0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73C0_case_default
                }
                case 0x3:
                {
// switch_73C0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73C0_case_default
                }
            }
// lab_7418
            pri = arg_1;
            OP_JZER lab_7468
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7468
            pri = 0;
            OP_JUMP lab_7470
// lab_7468
            pri = 1;
// lab_7470
            OP_JZER lab_74D8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_05A8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_74D8
            pri = 1;
            OP_JUMP lab_74E0
// lab_74D8
            pri = 0;
// lab_74E0
            OP_JZER lab_7530
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_76D0
// lab_7530
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7598
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_76D0
// lab_7598
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
// switch_6E50_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1:
        {
// switch_6E50_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2:
        {
// switch_6E50_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x3:
        {
// switch_6E50_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x4:
        {
// switch_6E50_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x5:
        {
// switch_6E50_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07E0(var_40)
            OP_JUMP switch_6E50_case_default
        }
        case 0x6:
        {
// switch_6E50_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x7:
        {
// switch_6E50_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x8:
        {
// switch_6E50_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x9:
        {
// switch_6E50_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0xa:
        {
// switch_6E50_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0xb:
        {
// switch_6E50_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0xc:
        {
// switch_6E50_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0xd:
        {
// switch_6E50_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0xe:
        {
// switch_6E50_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0xf:
        {
// switch_6E50_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x10:
        {
// switch_6E50_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x11:
        {
// switch_6E50_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x12:
        {
// switch_6E50_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x13:
        {
// switch_6E50_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x14:
        {
// switch_6E50_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x15:
        {
// switch_6E50_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x16:
        {
// switch_6E50_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x17:
        {
// switch_6E50_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x18:
        {
// switch_6E50_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x19:
        {
// switch_6E50_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1a:
        {
// switch_6E50_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1b:
        {
// switch_6E50_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1c:
        {
// switch_6E50_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1d:
        {
// switch_6E50_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1e:
        {
// switch_6E50_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x1f:
        {
// switch_6E50_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x20:
        {
// switch_6E50_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x21:
        {
// switch_6E50_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x22:
        {
// switch_6E50_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x23:
        {
// switch_6E50_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x24:
        {
// switch_6E50_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x25:
        {
// switch_6E50_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x26:
        {
// switch_6E50_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x27:
        {
// switch_6E50_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x28:
        {
// switch_6E50_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x29:
        {
// switch_6E50_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2a:
        {
// switch_6E50_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2b:
        {
// switch_6E50_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2c:
        {
// switch_6E50_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2d:
        {
// switch_6E50_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2e:
        {
// switch_6E50_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x2f:
        {
// switch_6E50_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x30:
        {
// switch_6E50_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x31:
        {
// switch_6E50_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x32:
        {
// switch_6E50_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x33:
        {
// switch_6E50_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x34:
        {
// switch_6E50_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x35:
        {
// switch_6E50_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x36:
        {
// switch_6E50_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x37:
        {
// switch_6E50_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x38:
        {
// switch_6E50_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x39:
        {
// switch_6E50_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x3a:
        {
// switch_6E50_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x3b:
        {
// switch_6E50_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x3c:
        {
// switch_6E50_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x3d:
        {
// switch_6E50_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
        case 0x3e:
        {
// switch_6E50_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0568(var_24, var_16, var_8)
            OP_JUMP switch_6E50_case_default
        }
    }
}
// fun_7770
fun_7770() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7870
        case default:
        {
// switch_7870_case_default
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
// switch_7870_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7870_case_default
        }
        case 0x1:
        {
// switch_7870_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7870_case_default
        }
        case 0x2:
        {
// switch_7870_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7870_case_default
        }
        case 0x3:
        {
// switch_7870_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7870_case_default
        }
    }
}
// fun_7930
fun_7930() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7980
// lab_7980
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_79F8
    OP_JUMP lab_7A28
// lab_79F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7980
// lab_7A28
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7AB0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5A40(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BD8(var_56)
// lab_7AB0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7B18
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0B38(var_24, var_16)
// lab_7B18
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7BD8
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
// lab_7BD8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7C18
    pri = 0;
    return pri;
// lab_7C18
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7D60
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
    OP_JSLESS lab_7D28
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7D60
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
// lab_7D28
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0B38(var_16, var_8)
}
// fun_7DE8
fun_7DE8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_7E80
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
    pri = fun_1B28(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7E80
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_7FD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_7F40
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_7F40
    pri = 1;
    OP_JUMP lab_7F48
// lab_7FD8
    pri = 0;
    return pri;
// lab_7F40
    pri = 0;
// lab_7F48
    OP_JZER lab_7FD8
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
    pri = fun_1B28(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_7FE8
fun_7FE8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_7DE8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8070(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8070
fun_8070() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8208(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_80D8
fun_80D8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8148
    OP_CONST_S -8, 1
// lab_8148
    pri = arg_0;
    OP_JNZ lab_8168
    OP_ZERO_P_S -8
// lab_8168
    pri = var_8;
    OP_JZER lab_81F0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_81F0
    pri = 0;
    return pri;
}
// fun_8208
fun_8208() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_18E0(var_8)
    var_24 = 0;
    pri = fun_1918()
    pri = arg_3;
    OP_JNZ lab_8328
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_82F0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8398(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8318
// lab_8328
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8538(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_82F0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8460(var_16, var_8)
// lab_8318
    OP_JUMP lab_8370
// lab_8370
    var_8 = 0;
    pri = fun_19B8()
    pri = 0;
    return pri;
}
// fun_8398
fun_8398() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8538(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8448
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8448
    pri = 0;
    return pri;
}
// fun_8460
fun_8460() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1A38(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1640(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1738(var_72)
    var_88 = 0;
    pri = fun_17F8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_19E8(var_96)
    pri = 0;
    return pri;
}
// fun_8538
fun_8538() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8580
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8840(var_8)
// lab_8580
    pri = arg_4;
    OP_JNZ lab_85E8
    var_8 = 0;
    var_16 = 8;
    pri = fun_19E8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A38(var_40, var_32, var_24)
// lab_85E8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8688
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1A88(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1640(var_56, var_48, var_40)
    OP_JUMP lab_8778
// lab_8688
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8740
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8740
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8740
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1640(var_24, var_16, var_8)
// lab_8778
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_87B8
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_87B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1738(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8A48(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_80D8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8840
fun_8840() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_88A0
    var_16 = 30568;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_88A0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_89E0
        case default:
        {
// switch_89E0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_89D0
            var_16 = 31112;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_89D0
            OP_JUMP lab_8A18
// lab_8A18
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_89E0_case_0x1
            var_8 = 30784;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A18
        }
        case 0x2:
        {
// switch_89E0_case_0x2
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A18
        }
    }
}
// fun_8A48
fun_8A48() {
    pri = arg_2;
    OP_JNZ lab_8B30
    var_8 = 0;
    var_16 = 8;
    pri = fun_19E8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A38(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1AD8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8B30
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1640(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1738(var_40)
    var_56 = 0;
    pri = fun_17F8()
    pri = 0;
    return pri;
}
// fun_8BA8
fun_8BA8() {
    pri = g_mode;
    switch (pri) {
// switch_8C40
        case default:
        {
// switch_8C40_case_default
            pri = CommandNOP()
            OP_JUMP lab_8C78
// lab_8C78
            pri = 0;
            return pri;
        }
        case 0xbef131b89017faee:
        {
// switch_8C40_case_0xbef131b89017faee
            var_8 = 0;
            pri = fun_8CA0()
            OP_JUMP lab_8C78
        }
        case 0x0:
        {
// switch_8C40_case_0x0
            var_8 = 0;
            pri = fun_8C88()
            OP_JUMP lab_8C78
        }
    }
}
// fun_8C88
fun_8C88() {
    pri = 0;
    return pri;
}
// fun_8CA0
fun_8CA0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 3515972435901418330;
    pri = FlagGet(var_16)
    OP_JZER lab_8D38
    var_24 = var_8;
    var_32 = 8;
    pri = fun_A6B8(var_24)
    OP_JUMP lab_8FA0
// lab_8D38
    var_8 = -4572748922741139178;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 3
    OP_JZER lab_8DD8
    var_16 = var_8;
    var_24 = 8;
    pri = fun_8FB8(var_16)
    OP_JZER lab_8DC8
    var_32 = var_8;
    var_40 = 8;
    pri = fun_A038(var_32)
// lab_8DD8
    var_8 = -4572748922741139178;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8E78
    var_16 = var_8;
    var_24 = 8;
    pri = fun_8FB8(var_16)
    OP_JZER lab_8E68
    var_32 = var_8;
    var_40 = 8;
    pri = fun_9BD8(var_32)
// lab_8E78
    var_8 = -4572748922741139178;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F18
    var_16 = var_8;
    var_24 = 8;
    pri = fun_8FB8(var_16)
    OP_JZER lab_8F08
    var_32 = var_8;
    var_40 = 8;
    pri = fun_9778(var_32)
// lab_8F18
    var_8 = -4572748922741139178;
    pri = WorkGet(var_8)
    OP_JNZ lab_8FA0
    var_16 = var_8;
    var_24 = 8;
    pri = fun_8FB8(var_16)
    OP_JZER lab_8FA0
    var_32 = var_8;
    var_40 = 8;
    pri = fun_92A0(var_32)
// lab_8FA0
    pri = 0;
    return pri;
// lab_8F08
    OP_JUMP lab_8FA0
// lab_8E68
    OP_JUMP lab_8FA0
// lab_8DC8
    OP_JUMP lab_8FA0
}
// fun_8FB8
fun_8FB8() {
    OP_ZERO_P_S -8
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = arg_0;
    var_64 = 48;
    pri = fun_7770(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -4174823926558438332, -4174820628023553699
    var_112 = arg_0;
    var_120 = 64;
    pri = fun_1530(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_128 = 15;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1738(var_144)
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 48;
    pri = fun_1828(var_200, var_192, var_184, var_176, var_168, var_160)
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_91C0
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    var_256 = -4174822827046810121;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_1480(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1738(var_280)
    var_296 = 0;
    pri = fun_17F8()
    OP_JUMP lab_9288
// lab_91C0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4174830523628207598;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1738(var_72)
    var_88 = 0;
    pri = fun_17F8()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_7930(var_120, var_112, var_104, var_96)
// lab_9288
    pri = var_8;
    return pri;
}
// fun_92A0
fun_92A0() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4219746673143361584;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1738(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = -4219743374608476951;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1480(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1738(var_152)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = -4219744474120105162;
    var_216 = arg_0;
    var_224 = 56;
    pri = fun_1480(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1738(var_232)
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    var_288 = -4219741175585220529;
    var_296 = arg_0;
    var_304 = 56;
    pri = fun_1480(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1738(var_312)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -4219742275096848740;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1480(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1738(var_392)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    var_448 = -4219738976561964107;
    var_456 = arg_0;
    var_464 = 56;
    pri = fun_1480(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_1738(var_472)
    var_488 = 0;
    pri = fun_17F8()
    var_496 = 0;
    var_504 = 3;
    var_512 = 0;
    var_520 = 100;
    var_528 = -1;
    var_536 = -4174825026070066543;
    var_544 = arg_0;
    var_552 = 56;
    pri = fun_1480(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_1738(var_560)
    var_576 = 0;
    pri = fun_17F8()
    var_584 = 1;
    var_592 = 3;
    var_600 = 0;
    var_608 = 0;
    var_616 = arg_0;
    var_624 = 40;
    pri = fun_5A40(var_616, var_608, var_600, var_592, var_584)
    var_632 = arg_0;
    var_640 = 8;
    pri = fun_05E0(var_632)
    var_648 = 6;
    var_656 = 4;
    var_664 = 2;
    var_672 = 0;
    var_680 = 9;
    var_688 = 1;
    var_696 = 284;
    var_704 = arg_0;
    var_712 = 64;
    pri = fun_7FE8(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_720 = 3515972435901418330;
    pri = FlagSet(var_720)
    var_728 = 1;
    var_736 = -4572748922741139178;
    pri = WorkSet(var_736, var_728)
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = arg_0;
    var_776 = 32;
    pri = fun_7930(var_768, var_760, var_752, var_744)
    pri = 0;
    return pri;
}
// fun_9778
fun_9778() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4222684568213373701;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1738(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = -4222683468701745490;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1480(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1738(var_152)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = -4222682369190117279;
    var_216 = arg_0;
    var_224 = 56;
    pri = fun_1480(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1738(var_232)
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    var_288 = -4222681269678489068;
    var_296 = arg_0;
    var_304 = 56;
    pri = fun_1480(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1738(var_312)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -4222680170166860857;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1480(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1738(var_392)
    var_408 = 0;
    pri = fun_17F8()
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    var_456 = -4174825026070066543;
    var_464 = arg_0;
    var_472 = 56;
    pri = fun_1480(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1738(var_480)
    var_496 = 0;
    pri = fun_17F8()
    var_504 = 1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 0;
    var_536 = arg_0;
    var_544 = 40;
    pri = fun_5A40(var_536, var_528, var_520, var_512, var_504)
    var_552 = arg_0;
    var_560 = 8;
    pri = fun_05E0(var_552)
    var_568 = 6;
    var_576 = 4;
    var_584 = 2;
    var_592 = 0;
    var_600 = 9;
    var_608 = 1;
    var_616 = 285;
    var_624 = arg_0;
    var_632 = 64;
    pri = fun_7FE8(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_640 = 3515972435901418330;
    pri = FlagSet(var_640)
    var_648 = 2;
    var_656 = -4572748922741139178;
    pri = WorkSet(var_656, var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = arg_0;
    var_696 = 32;
    pri = fun_7930(var_688, var_680, var_672, var_664)
    pri = 0;
    return pri;
}
// fun_9BD8
fun_9BD8() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4221695007748173026;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1738(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = -4221696107259801237;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1480(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1738(var_152)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = -4221697206771429448;
    var_216 = arg_0;
    var_224 = 56;
    pri = fun_1480(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1738(var_232)
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    var_288 = -4221689510190031971;
    var_296 = arg_0;
    var_304 = 56;
    pri = fun_1480(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1738(var_312)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -4221690609701660182;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1480(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1738(var_392)
    var_408 = 0;
    pri = fun_17F8()
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    var_456 = -4174825026070066543;
    var_464 = arg_0;
    var_472 = 56;
    pri = fun_1480(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1738(var_480)
    var_496 = 0;
    pri = fun_17F8()
    var_504 = 1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 0;
    var_536 = arg_0;
    var_544 = 40;
    pri = fun_5A40(var_536, var_528, var_520, var_512, var_504)
    var_552 = arg_0;
    var_560 = 8;
    pri = fun_05E0(var_552)
    var_568 = 6;
    var_576 = 4;
    var_584 = 2;
    var_592 = 0;
    var_600 = 9;
    var_608 = 1;
    var_616 = 282;
    var_624 = arg_0;
    var_632 = 64;
    pri = fun_7FE8(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_640 = 3515972435901418330;
    pri = FlagSet(var_640)
    var_648 = 3;
    var_656 = -4572748922741139178;
    pri = WorkSet(var_656, var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 0;
    var_688 = arg_0;
    var_696 = 32;
    pri = fun_7930(var_688, var_680, var_672, var_664)
    pri = 0;
    return pri;
}
// fun_A038
fun_A038() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4216909933143144879;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1480(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1738(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = -4216913231678029512;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1480(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1738(var_152)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = -4216912132166401301;
    var_216 = arg_0;
    var_224 = 56;
    pri = fun_1480(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1738(var_232)
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 100;
    var_280 = -1;
    var_288 = -4216906634608260246;
    var_296 = arg_0;
    var_304 = 56;
    pri = fun_1480(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_1738(var_312)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -4216905535096632035;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1480(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1738(var_392)
    var_408 = 0;
    pri = fun_17F8()
    var_416 = 0;
    var_424 = 3;
    var_432 = 0;
    var_440 = 100;
    var_448 = -1;
    var_456 = -4174825026070066543;
    var_464 = arg_0;
    var_472 = 56;
    pri = fun_1480(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 1;
    var_488 = 8;
    pri = fun_1738(var_480)
    var_496 = 0;
    pri = fun_17F8()
    var_504 = 1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 0;
    var_536 = arg_0;
    var_544 = 40;
    pri = fun_5A40(var_536, var_528, var_520, var_512, var_504)
    var_552 = arg_0;
    var_560 = 8;
    pri = fun_05E0(var_552)
    var_568 = 6;
    var_576 = 4;
    var_584 = 2;
    var_592 = 0;
    var_600 = 9;
    var_608 = 1;
    var_616 = 283;
    var_624 = arg_0;
    var_632 = 64;
    pri = fun_7FE8(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_640 = 3515972435901418330;
    pri = FlagSet(var_640)
    var_648 = 0;
    var_656 = -4572748922741139178;
    pri = WorkSet(var_656, var_648)
    var_664 = -8403273949013642467;
    pri = FlagGet(var_664)
    OP_JNZ lab_A670
    var_672 = 1;
    var_680 = 1;
    var_688 = -1;
    var_696 = -1;
    var_704 = 0;
    var_712 = 0;
    var_720 = arg_0;
    var_728 = 56;
    pri = fun_3708(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 0;
    var_744 = 3;
    var_752 = 0;
    var_760 = 100;
    var_768 = -1;
    var_776 = -4174827225093322965;
    var_784 = arg_0;
    var_792 = 56;
    pri = fun_1480(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_1738(var_800)
    var_816 = 0;
    pri = fun_17F8()
    var_824 = 1;
    var_832 = 3;
    var_840 = 0;
    var_848 = 0;
    var_856 = arg_0;
    var_864 = 40;
    pri = fun_5A40(var_856, var_848, var_840, var_832, var_824)
    var_872 = 6;
    var_880 = 4;
    var_888 = 2;
    var_896 = 0;
    var_904 = 8;
    var_912 = 1;
    var_920 = 1123;
    var_928 = arg_0;
    var_936 = 64;
    pri = fun_7FE8(var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_944 = -8403273949013642467;
    pri = FlagSet(var_944)
    var_952 = 0;
    var_960 = 0;
    var_968 = 0;
    var_976 = arg_0;
    var_984 = 32;
    pri = fun_7930(var_976, var_968, var_960, var_952)
    OP_JUMP lab_A6A8
// lab_A670
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_7930(var_32, var_24, var_16, var_8)
// lab_A6A8
    pri = 0;
    return pri;
}
// fun_A6B8
fun_A6B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7770(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -4174828324604951176;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1480(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1738(var_128)
    var_144 = 0;
    pri = fun_17F8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7930(var_176, var_168, var_160, var_152)
    pri = 0;
    return pri;
}
