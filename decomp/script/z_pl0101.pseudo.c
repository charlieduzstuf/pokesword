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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_02D0
fun_02D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0328
fun_0328() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B68(var_8)
    OP_JZER lab_03A0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B98(var_24)
    OP_JNZ lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    OP_JUMP lab_03B0
// lab_03B0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0410
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03B0
    pri = 0;
    return pri;
}
// fun_0450
fun_0450() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0488
fun_0488() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_04C8
fun_04C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0500
fun_0500() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0588
// lab_0588
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B68(var_8)
    OP_JNZ lab_0610
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0600
    pri = 0;
    return pri;
// lab_0610
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_06B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0700(var_8)
    pri = 0;
    return pri;
// lab_06B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0588
    pri = 0;
    return pri;
// lab_0600
    OP_JUMP lab_0658
}
// fun_0700
fun_0700() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B68(var_8)
    OP_JZER lab_08B8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_07E0
    OP_ZERO_P_S 64
// lab_08B8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_08F0
    OP_CONST_S 64, 1
// lab_08F0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0928
    OP_CONST_S 72, 1
// lab_0928
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
// lab_07E0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0808
    OP_ZERO_P_S 72
// lab_0808
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
    OP_JUMP lab_09C8
// lab_09C8
    pri = 0;
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AF0
fun_0AF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B30
fun_0B30() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0B98
fun_0B98() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0BF8
fun_0BF8() {
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
// switch_1210
        case default:
        {
// switch_1210_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1258
// lab_1258
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
            OP_JNZ lab_1300
            var_88 = 0;
            pri = fun_1580()
// lab_1300
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1210_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0DF8
                case default:
                {
// switch_0DF8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E70
// lab_0E70
                    OP_JUMP lab_1258
                }
                case 0x0:
                {
// switch_0DF8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0E70
                }
                case 0x1:
                {
// switch_0DF8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0E70
                }
                case 0x2:
                {
// switch_0DF8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0E70
                }
                case 0x3:
                {
// switch_0DF8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E70
                }
                case 0x4:
                {
// switch_0DF8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0E70
                }
                case 0x5:
                {
// switch_0DF8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0E70
                }
            }
        }
        case 0x65:
        {
// switch_1210_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FB0
                case default:
                {
// switch_0FB0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1028
// lab_1028
                    OP_JUMP lab_1258
                }
                case 0x0:
                {
// switch_0FB0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1028
                }
                case 0x1:
                {
// switch_0FB0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1028
                }
                case 0x2:
                {
// switch_0FB0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1028
                }
                case 0x3:
                {
// switch_0FB0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1028
                }
                case 0x4:
                {
// switch_0FB0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1028
                }
                case 0x5:
                {
// switch_0FB0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1028
                }
            }
        }
        case 0x66:
        {
// switch_1210_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1168
                case default:
                {
// switch_1168_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11E0
// lab_11E0
                    OP_JUMP lab_1258
                }
                case 0x0:
                {
// switch_1168_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_11E0
                }
                case 0x1:
                {
// switch_1168_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_11E0
                }
                case 0x2:
                {
// switch_1168_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_11E0
                }
                case 0x3:
                {
// switch_1168_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11E0
                }
                case 0x4:
                {
// switch_1168_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_11E0
                }
                case 0x5:
                {
// switch_1168_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_11E0
                }
            }
        }
    }
}
// fun_1318
fun_1318() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_04C8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_13C0
    pri = 1;
    return pri;
// lab_13C0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1408
fun_1408() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1458
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1318(var_8)
    arg_2 = pri;
// lab_1458
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0BF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1508
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1318(var_8)
    arg_2 = pri;
// lab_1508
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
    pri = fun_1408(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    OP_JUMP lab_1598
// lab_1598
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15D8
    pri = 0;
    return pri;
// lab_15D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1598
    pri = 0;
    return pri;
}
// fun_1618
fun_1618() {
    var_8 = 0;
    pri = fun_1580()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_16C8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_16C8
    pri = 0;
    return pri;
}
// fun_16D8
fun_16D8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1708
fun_1708() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1738
// lab_1738
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1778
    OP_JUMP lab_17A8
// lab_1778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1738
// lab_17A8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17F0
fun_17F0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    pri = ListMenuStart_Seq(var_40, var_32, var_24, var_16, var_8)
    var_48 = 12;
    pri = TempWorkGet(var_48)
    return pri;
}
// fun_1860
fun_1860() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1898
fun_1898() {
    OP_JUMP lab_18B0
// lab_18B0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_18F8
    OP_JUMP lab_1928
    OP_JUMP lab_1918
// lab_18F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1928
    pri = 0;
    return pri;
// lab_1918
    OP_JUMP lab_18B0
}
// fun_1938
fun_1938() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1968
fun_1968() {
    pri = arg_6;
    OP_JNZ lab_19A0
    var_8 = 0;
    pri = fun_09D8()
// lab_19A0
    pri = arg_1;
    switch (pri) {
// switch_2F08
        case default:
        {
// switch_2F08_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3258
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3258
            pri = 1;
            OP_JUMP lab_3260
// lab_3258
            pri = 0;
// lab_3260
            OP_JZER lab_33B8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_04C8(var_24, var_16)
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
            OP_JUMP lab_3418
// lab_33B8
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_3418
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3478
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_34D8
// lab_3478
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_34D8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_34D8
            pri = arg_2;
            OP_JZER lab_3518
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3518
            var_8 = 0;
            pri = fun_0A18()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2F08_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1:
        {
// switch_2F08_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x2:
        {
// switch_2F08_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x3:
        {
// switch_2F08_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x4:
        {
// switch_2F08_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x5:
        {
// switch_2F08_case_0x5
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0x6:
        {
// switch_2F08_case_0x6
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0x7:
        {
// switch_2F08_case_0x7
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0x8:
        {
// switch_2F08_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x9:
        {
// switch_2F08_case_0x9
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0xa:
        {
// switch_2F08_case_0xa
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0xb:
        {
// switch_2F08_case_0xb
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0xc:
        {
// switch_2F08_case_0xc
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0xd:
        {
// switch_2F08_case_0xd
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0xe:
        {
// switch_2F08_case_0xe
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0xf:
        {
// switch_2F08_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x10:
        {
// switch_2F08_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x11:
        {
// switch_2F08_case_0x11
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0x12:
        {
// switch_2F08_case_0x12
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0x13:
        {
// switch_2F08_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x14:
        {
// switch_2F08_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x15:
        {
// switch_2F08_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x16:
        {
// switch_2F08_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x17:
        {
// switch_2F08_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x18:
        {
// switch_2F08_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x19:
        {
// switch_2F08_case_0x19
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1a:
        {
// switch_2F08_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0450(var_48, var_40)
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
            pri = fun_0738(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1b:
        {
// switch_2F08_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0450(var_48, var_40)
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
            pri = fun_0738(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1c:
        {
// switch_2F08_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0450(var_48, var_40)
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
            pri = fun_0738(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1d:
        {
// switch_2F08_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1e:
        {
// switch_2F08_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x1f:
        {
// switch_2F08_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x20:
        {
// switch_2F08_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x21:
        {
// switch_2F08_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x22:
        {
// switch_2F08_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x23:
        {
// switch_2F08_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x24:
        {
// switch_2F08_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x25:
        {
// switch_2F08_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x26:
        {
// switch_2F08_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x27:
        {
// switch_2F08_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x28:
        {
// switch_2F08_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
        case 0x29:
        {
// switch_2F08_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2F08_case_default
        }
    }
}
// fun_3548
fun_3548() {
    pri = arg_4;
    OP_JNZ lab_3580
    var_8 = 0;
    pri = fun_09D8()
// lab_3580
    pri = arg_1;
    switch (pri) {
// switch_4958
        case default:
        {
// switch_4958_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0B68(var_264)
            OP_JZER lab_4F20
            pri = arg_3;
            switch (pri) {
// switch_4EC8
                case default:
                {
// switch_4EC8_case_default
                    OP_JUMP lab_51D8
// lab_51D8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5248
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5248
                    var_8 = 0;
                    pri = fun_0A18()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_4EC8_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4EC8_case_default
                }
                case 0x2:
                {
// switch_4EC8_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4EC8_case_default
                }
                case 0x3:
                {
// switch_4EC8_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4EC8_case_default
                }
            }
// lab_4F20
            pri = arg_1;
            OP_JZER lab_4F70
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_4F70
            pri = 0;
            OP_JUMP lab_4F78
// lab_4F70
            pri = 1;
// lab_4F78
            OP_JZER lab_4FE0
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_04C8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4FE0
            pri = 1;
            OP_JUMP lab_4FE8
// lab_4FE0
            pri = 0;
// lab_4FE8
            OP_JZER lab_5038
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_51D8
// lab_5038
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_50A0
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_51D8
// lab_50A0
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_04C8(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_4958_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1:
        {
// switch_4958_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2:
        {
// switch_4958_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x3:
        {
// switch_4958_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x4:
        {
// switch_4958_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x5:
        {
// switch_4958_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0700(var_40)
            OP_JUMP switch_4958_case_default
        }
        case 0x6:
        {
// switch_4958_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x7:
        {
// switch_4958_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x8:
        {
// switch_4958_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x9:
        {
// switch_4958_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0xa:
        {
// switch_4958_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0xb:
        {
// switch_4958_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0xc:
        {
// switch_4958_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0xd:
        {
// switch_4958_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0xe:
        {
// switch_4958_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0xf:
        {
// switch_4958_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x10:
        {
// switch_4958_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x11:
        {
// switch_4958_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x12:
        {
// switch_4958_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x13:
        {
// switch_4958_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x14:
        {
// switch_4958_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x15:
        {
// switch_4958_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x16:
        {
// switch_4958_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x17:
        {
// switch_4958_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x18:
        {
// switch_4958_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x19:
        {
// switch_4958_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1a:
        {
// switch_4958_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1b:
        {
// switch_4958_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1c:
        {
// switch_4958_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1d:
        {
// switch_4958_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1e:
        {
// switch_4958_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x1f:
        {
// switch_4958_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x20:
        {
// switch_4958_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x21:
        {
// switch_4958_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x22:
        {
// switch_4958_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x23:
        {
// switch_4958_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x24:
        {
// switch_4958_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x25:
        {
// switch_4958_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x26:
        {
// switch_4958_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x27:
        {
// switch_4958_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x28:
        {
// switch_4958_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x29:
        {
// switch_4958_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2a:
        {
// switch_4958_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2b:
        {
// switch_4958_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2c:
        {
// switch_4958_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2d:
        {
// switch_4958_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2e:
        {
// switch_4958_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x2f:
        {
// switch_4958_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x30:
        {
// switch_4958_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x31:
        {
// switch_4958_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x32:
        {
// switch_4958_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x33:
        {
// switch_4958_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x34:
        {
// switch_4958_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x35:
        {
// switch_4958_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x36:
        {
// switch_4958_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x37:
        {
// switch_4958_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x38:
        {
// switch_4958_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x39:
        {
// switch_4958_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x3a:
        {
// switch_4958_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x3b:
        {
// switch_4958_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x3c:
        {
// switch_4958_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x3d:
        {
// switch_4958_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
        case 0x3e:
        {
// switch_4958_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            OP_JUMP switch_4958_case_default
        }
    }
}
// fun_5278
fun_5278() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5378
        case default:
        {
// switch_5378_case_default
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
// switch_5378_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5378_case_default
        }
        case 0x1:
        {
// switch_5378_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5378_case_default
        }
        case 0x2:
        {
// switch_5378_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5378_case_default
        }
        case 0x3:
        {
// switch_5378_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5378_case_default
        }
    }
}
// fun_5438
fun_5438() {
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
    pri = fun_1408(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1580()
    pri = 0;
    return pri;
}
// fun_54D0
fun_54D0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5278(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5438(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_5578
fun_5578() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_55C8
// lab_55C8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9856;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5640
    OP_JUMP lab_5670
// lab_5640
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_55C8
// lab_5670
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_56F8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3548(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0BC8(var_56)
// lab_56F8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5760
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0AB0(var_24, var_16)
// lab_5760
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0AB0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_5820
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0500(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0280(var_88, var_80, var_72, var_64, var_56)
// lab_5820
    pri = IsPlayerRideBicycle()
    OP_JZER lab_5860
    pri = 0;
    return pri;
// lab_5860
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_59A8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9976;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0450(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_5970
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_59A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0328(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0328(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0500(var_40)
    pri = 0;
    return pri;
// lab_5970
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0AB0(var_16, var_8)
}
// fun_5A30
fun_5A30() {
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
    pri = fun_54D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1618(var_112)
    var_128 = 0;
    pri = fun_16D8()
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
    pri = fun_5578(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_5BA8
fun_5BA8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    var_24 = 0;
    pri = fun_1898()
    pri = arg_8;
    alt = 1;
    pri |= alt;
    arg_8 = pri;
    var_32 = arg_10;
    var_40 = arg_9;
    var_48 = arg_8;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = arg_4;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = 80;
    pri = fun_5A30(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_1938()
    pri = 0;
    return pri;
}
// fun_5C98
fun_5C98() {
    var_8 = arg_0;
    pri = FlagGet(var_8)
    OP_JZER lab_5CE0
    pri = arg_2;
    return pri;
// lab_5CE0
    pri = arg_1;
    return pri;
}
// fun_5CF0
fun_5CF0() {
    pri = g_mode;
    switch (pri) {
// switch_5EF0
        case default:
        {
// switch_5EF0_case_default
            pri = CommandNOP()
            OP_JUMP lab_5FB8
// lab_5FB8
            pri = 0;
            return pri;
        }
        case 0x838bc1de89aec8eb:
        {
// switch_5EF0_case_0x838bc1de89aec8eb
            var_8 = 0;
            pri = fun_5FF8()
            OP_JUMP lab_5FB8
        }
        case 0x9010c60b58b7e7d3:
        {
// switch_5EF0_case_0x9010c60b58b7e7d3
            var_8 = 0;
            pri = fun_6198()
            OP_JUMP lab_5FB8
        }
        case 0x9ef83a6fe0dcb56c:
        {
// switch_5EF0_case_0x9ef83a6fe0dcb56c
            var_8 = 0;
            pri = fun_70A0()
            OP_JUMP lab_5FB8
        }
        case 0xb4d3b2c64b924e4d:
        {
// switch_5EF0_case_0xb4d3b2c64b924e4d
            var_8 = 0;
            pri = fun_5FE0()
            OP_JUMP lab_5FB8
        }
        case 0xbfd0027e1af87596:
        {
// switch_5EF0_case_0xbfd0027e1af87596
            var_8 = 0;
            pri = fun_60C8()
            OP_JUMP lab_5FB8
        }
        case 0xc36f6ac24b5c5833:
        {
// switch_5EF0_case_0xc36f6ac24b5c5833
            var_8 = 0;
            pri = fun_6C60()
            OP_JUMP lab_5FB8
        }
        case 0xd23fc16f795d300e:
        {
// switch_5EF0_case_0xd23fc16f795d300e
            var_8 = 0;
            pri = fun_7550()
            OP_JUMP lab_5FB8
        }
        case 0xd78f232e1428b132:
        {
// switch_5EF0_case_0xd78f232e1428b132
            var_8 = 0;
            pri = fun_6B40()
            OP_JUMP lab_5FB8
        }
        case 0x0:
        {
// switch_5EF0_case_0x0
            var_8 = 0;
            pri = fun_5FC8()
            OP_JUMP lab_5FB8
        }
        case 0x1b86a5e036da57c1:
        {
// switch_5EF0_case_0x1b86a5e036da57c1
            var_8 = 0;
            pri = fun_6BD0()
            OP_JUMP lab_5FB8
        }
        case 0x67f3b11921eb927b:
        {
// switch_5EF0_case_0x67f3b11921eb927b
            var_8 = 0;
            pri = fun_6458()
            OP_JUMP lab_5FB8
        }
    }
}
// fun_5FC8
fun_5FC8() {
    pri = 0;
    return pri;
}
// fun_5FE0
fun_5FE0() {
    pri = 0;
    return pri;
}
// fun_5FF8
fun_5FF8() {
    OP_PUSH3_C -8849181998403105888, -8849178699868221255, 9010327285021969031
    var_16 = 24;
    pri = fun_5C98(var_8, var_0, var_-8)
    var_8 = pri;
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 1;
    var_96 = var_8;
    var_104 = 80;
    pri = fun_5A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_60C8
fun_60C8() {
    OP_PUSH3_C -5879170242832716803, -5879173541367601436, 9010327285021969031
    var_16 = 24;
    pri = fun_5C98(var_8, var_0, var_-8)
    var_8 = pri;
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 1;
    var_96 = var_8;
    var_104 = 80;
    pri = fun_5A30(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_6198
fun_6198() {
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_6258
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -5998454082442945036;
    var_96 = 80;
    pri = fun_5A30(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_6448
// lab_6258
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 2010;
    OP_JSLESS lab_6318
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -5998455181954573247;
    var_96 = 80;
    pri = fun_5A30(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_6448
// lab_6318
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1700;
    OP_JSLESS lab_63D8
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -5998456281466201458;
    var_96 = 80;
    pri = fun_5A30(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_6448
// lab_63D8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -5998457380977829669;
    var_88 = 80;
    pri = fun_5A30(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_6448
    pri = 0;
    return pri;
}
// fun_6458
fun_6458() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0A58(var_48, var_40, var_32, var_24, var_16)
    var_64 = 1;
    var_72 = 1;
    var_80 = -1;
    var_88 = 8802641224559852288;
    var_96 = var_8;
    var_104 = 40;
    pri = fun_0A58(var_96, var_88, var_80, var_72, var_64)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = var_8;
    var_152 = 8802641224559852288;
    var_160 = 48;
    pri = fun_02D0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 8802641224559852288;
    var_208 = var_8;
    var_216 = 48;
    pri = fun_02D0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 0;
    var_232 = 3;
    var_240 = 0;
    var_248 = 100;
    var_256 = -1;
    var_264 = -2936585826935089978;
    var_272 = var_8;
    var_280 = 56;
    pri = fun_1408(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1618(var_288)
    var_304 = 0;
    var_312 = 4523638385763172238;
    var_320 = 0;
    var_328 = 24;
    pri = fun_1708(var_320, var_312, var_304)
    var_336 = 0;
    var_344 = 4523637286251544027;
    var_352 = 1;
    var_360 = 24;
    pri = fun_1708(var_352, var_344, var_336)
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 1;
    var_408 = 32;
    pri = fun_17F0(var_400, var_392, var_384, var_376)
    var_16 = pri;
    var_416 = 0;
    pri = fun_16D8()
    var_424 = 5;
    var_432 = var_8;
    var_440 = 16;
    pri = fun_0AF0(var_432, var_424)
    var_448 = 8802641224559852288;
    var_456 = 8;
    pri = fun_0328(var_448)
    var_464 = var_8;
    var_472 = 8;
    pri = fun_0328(var_464)
    var_480 = 1;
    var_488 = -1;
    var_496 = -1;
    var_504 = 3;
    var_512 = 0;
    var_520 = 21;
    var_528 = 8802641224559852288;
    var_536 = 56;
    pri = fun_1968(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_544 = 5;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 1;
    var_568 = -1;
    var_576 = -1;
    var_584 = 3;
    var_592 = 0;
    var_600 = 3;
    var_608 = var_8;
    var_616 = 56;
    pri = fun_1968(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 8802641224559852288;
    var_632 = 8;
    pri = fun_0500(var_624)
    var_640 = var_8;
    var_648 = 8;
    pri = fun_0500(var_640)
    pri = var_16;
    switch (pri) {
// switch_6A78
        case default:
        {
// switch_6A78_case_default
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -2936586926446718189;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1408(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1618(var_72)
            var_88 = 0;
            pri = fun_16D8()
            OP_JUMP lab_6AB0
// lab_6AB0
            var_8 = var_8;
            var_16 = 8;
            pri = fun_0B30(var_8)
            var_24 = -1;
            var_32 = 8802641224559852288;
            var_40 = 16;
            pri = fun_0AB0(var_32, var_24)
            var_48 = -1;
            var_56 = var_8;
            var_64 = 16;
            pri = fun_0AB0(var_56, var_48)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6A78_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -2936586926446718189;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1408(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1618(var_72)
            var_88 = 0;
            pri = fun_16D8()
            OP_JUMP lab_6AB0
        }
        case 0x1:
        {
// switch_6A78_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -2936588025958346400;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1408(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1618(var_72)
            var_88 = 0;
            pri = fun_16D8()
            OP_JUMP lab_6AB0
        }
    }
}
// fun_6B40
fun_6B40() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 2254794367607104933;
    var_88 = 10112;
    var_96 = 88;
    pri = fun_5BA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6BD0
fun_6BD0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4869060574405670065;
    var_88 = 10328;
    var_96 = 88;
    pri = fun_5BA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6C60
fun_6C60() {
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_8 = pri;
    var_24 = 9010327285021969031;
    pri = FlagGet(var_24)
    OP_JZER lab_6D30
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = -902856965434571205;
    pri = GlobalCall(var_64, var_56, var_48, var_40, var_32)
    OP_JUMP lab_7088
// lab_6D30
    pri = var_8;
    OP_EQ_P_C_PRI 2030
    OP_JZER lab_6DA8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 2807997468346514821;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_7088
// lab_6DA8
    pri = var_8;
    alt = 1800;
    OP_JSLESS lab_6E48
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -1340508699934713842;
    var_88 = 80;
    pri = fun_5A30(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_7088
// lab_6E48
    pri = var_8;
    alt = 1705;
    OP_JSLESS lab_6EF0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -152106980818496819;
    var_88 = 10544;
    var_96 = 88;
    pri = fun_5BA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_7088
// lab_6EF0
    pri = var_8;
    OP_EQ_P_C_PRI 1675
    OP_JZER lab_6F68
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 4092351676671486933;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_7088
// lab_6F68
    pri = var_8;
    alt = 1490;
    OP_JSLEQ lab_7010
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -152106980818496819;
    var_88 = 10760;
    var_96 = 88;
    pri = fun_5BA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_7088
// lab_7010
    pri = var_8;
    OP_EQ_P_C_PRI 1490
    OP_JZER lab_7088
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 2800013197000938658;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_7088
// lab_7088
    pri = 0;
    return pri;
}
// fun_70A0
fun_70A0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    OP_EQ_P_C_PRI 1490
    OP_JZER lab_72F8
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 1;
    var_56 = 1;
    var_64 = var_8;
    var_72 = 48;
    pri = fun_5278(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 10976;
    var_88 = 8;
    pri = fun_1860(var_80)
    var_96 = 0;
    pri = fun_1898()
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    var_144 = -8906353436967565509;
    var_152 = var_8;
    var_160 = 56;
    pri = fun_14B8(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1618(var_168)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = -8906352337455937298;
    var_232 = var_8;
    var_240 = 56;
    pri = fun_14B8(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1618(var_248)
    var_264 = 0;
    pri = fun_16D8()
    var_272 = 0;
    pri = fun_1938()
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    var_304 = var_8;
    var_312 = 32;
    pri = fun_5578(var_304, var_296, var_288, var_280)
    OP_JUMP lab_7538
// lab_72F8
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1675
    OP_JZER lab_7538
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_5278(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 11192;
    var_80 = 8;
    pri = fun_1860(var_72)
    var_88 = 0;
    pri = fun_1898()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = -8438093086575146607;
    var_144 = var_8;
    var_152 = 56;
    pri = fun_14B8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_1618(var_160)
    var_176 = 0;
    pri = fun_16D8()
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = -8438096385110031240;
    var_232 = var_8;
    var_240 = 56;
    pri = fun_14B8(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_1618(var_248)
    var_264 = 0;
    pri = fun_16D8()
    var_272 = 0;
    pri = fun_1938()
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    var_304 = var_8;
    var_312 = 32;
    pri = fun_5578(var_304, var_296, var_288, var_280)
    OP_JUMP lab_7538
// lab_7538
    pri = 0;
    return pri;
}
// fun_7550
fun_7550() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -5686758417246807295;
    var_88 = 11408;
    var_96 = 88;
    pri = fun_5BA8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
