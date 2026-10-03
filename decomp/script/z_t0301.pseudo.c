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
    pri = fun_0C48(var_8)
    OP_JZER lab_03A0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C78(var_24)
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
    pri = fun_0C48(var_8)
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
    pri = fun_0C48(var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0B10
fun_0B10() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0B88
fun_0B88() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0A98(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0B10(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B50(var_24)
    pri = 0;
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0CA8
fun_0CA8() {
    OP_JUMP lab_0CC0
// lab_0CC0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0D50
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0D40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0500(var_8)
    pri = 0;
    return pri;
// lab_0D50
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DE0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0DD0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0500(var_8)
    pri = 0;
    return pri;
// lab_0DE0
    pri = 0;
    return pri;
// lab_0DD0
    OP_JUMP lab_0DF0
// lab_0DF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CC0
    pri = 0;
    return pri;
// lab_0D40
    OP_JUMP lab_0DF0
}
// fun_0E30
fun_0E30() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0500(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0CA8(var_40)
    pri = 0;
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0EE8
fun_0EE8() {
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
// switch_1500
        case default:
        {
// switch_1500_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1548
// lab_1548
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
            OP_JNZ lab_15F0
            var_88 = 0;
            pri = fun_17A8()
// lab_15F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1500_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_10E8
                case default:
                {
// switch_10E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1160
// lab_1160
                    OP_JUMP lab_1548
                }
                case 0x0:
                {
// switch_10E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1160
                }
                case 0x1:
                {
// switch_10E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1160
                }
                case 0x2:
                {
// switch_10E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1160
                }
                case 0x3:
                {
// switch_10E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1160
                }
                case 0x4:
                {
// switch_10E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1160
                }
                case 0x5:
                {
// switch_10E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1160
                }
            }
        }
        case 0x65:
        {
// switch_1500_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_12A0
                case default:
                {
// switch_12A0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1318
// lab_1318
                    OP_JUMP lab_1548
                }
                case 0x0:
                {
// switch_12A0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1318
                }
                case 0x1:
                {
// switch_12A0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1318
                }
                case 0x2:
                {
// switch_12A0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1318
                }
                case 0x3:
                {
// switch_12A0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1318
                }
                case 0x4:
                {
// switch_12A0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1318
                }
                case 0x5:
                {
// switch_12A0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1318
                }
            }
        }
        case 0x66:
        {
// switch_1500_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1458
                case default:
                {
// switch_1458_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14D0
// lab_14D0
                    OP_JUMP lab_1548
                }
                case 0x0:
                {
// switch_1458_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_14D0
                }
                case 0x1:
                {
// switch_1458_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_14D0
                }
                case 0x2:
                {
// switch_1458_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_14D0
                }
                case 0x3:
                {
// switch_1458_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_14D0
                }
                case 0x4:
                {
// switch_1458_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_14D0
                }
                case 0x5:
                {
// switch_1458_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_14D0
                }
            }
        }
    }
}
// fun_1608
fun_1608() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_04C8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_16B0
    pri = 1;
    return pri;
// lab_16B0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_16F8
fun_16F8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1748
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1608(var_8)
    arg_2 = pri;
// lab_1748
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0EE8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17A8
fun_17A8() {
    OP_JUMP lab_17C0
// lab_17C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1800
    pri = 0;
    return pri;
// lab_1800
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17C0
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
    var_8 = 0;
    pri = fun_17A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_18F0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_18F0
    pri = 0;
    return pri;
}
// fun_1900
fun_1900() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1968
fun_1968() {
    OP_JUMP lab_1980
// lab_1980
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_19C8
    OP_JUMP lab_19F8
    OP_JUMP lab_19E8
// lab_19C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_19F8
    pri = 0;
    return pri;
// lab_19E8
    OP_JUMP lab_1980
}
// fun_1A08
fun_1A08() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    pri = arg_5;
    OP_JNZ lab_1A70
    var_8 = 0;
    pri = fun_09D8()
// lab_1A70
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1AC0
    OP_CONST_S -8, -1
// lab_1AC0
    pri = arg_1;
    switch (pri) {
// switch_3578
        case default:
        {
// switch_3578_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3A20
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_04C8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3A20
            pri = 1;
            OP_JUMP lab_3A28
// lab_3A20
            pri = 0;
// lab_3A28
            OP_JZER lab_3A78
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3CD0
// lab_3A78
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3AE0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3AE0
            pri = 1;
            OP_JUMP lab_3AE8
// lab_3AE0
            pri = 0;
// lab_3AE8
            OP_JZER lab_3C70
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_04C8(var_24, var_16)
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
            OP_JUMP lab_3CD0
// lab_3C70
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
// lab_3CD0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3D40
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3D40
            var_8 = 0;
            pri = fun_0A18()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3578_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x1:
        {
// switch_3578_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x2:
        {
// switch_3578_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x3:
        {
// switch_3578_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x4:
        {
// switch_3578_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x5:
        {
// switch_3578_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0700(var_40)
            OP_JUMP switch_3578_case_default
        }
        case 0x6:
        {
// switch_3578_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x7:
        {
// switch_3578_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x8:
        {
// switch_3578_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x9:
        {
// switch_3578_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0xa:
        {
// switch_3578_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0xb:
        {
// switch_3578_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0xc:
        {
// switch_3578_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0xd:
        {
// switch_3578_case_0xd
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0xe:
        {
// switch_3578_case_0xe
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0xf:
        {
// switch_3578_case_0xf
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x10:
        {
// switch_3578_case_0x10
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x11:
        {
// switch_3578_case_0x11
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x12:
        {
// switch_3578_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x13:
        {
// switch_3578_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x14:
        {
// switch_3578_case_0x14
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x15:
        {
// switch_3578_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x16:
        {
// switch_3578_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x17:
        {
// switch_3578_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x18:
        {
// switch_3578_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x19:
        {
// switch_3578_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x1a:
        {
// switch_3578_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x1b:
        {
// switch_3578_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x1c:
        {
// switch_3578_case_0x1c
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x1d:
        {
// switch_3578_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x1e:
        {
// switch_3578_case_0x1e
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x1f:
        {
// switch_3578_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x20:
        {
// switch_3578_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x21:
        {
// switch_3578_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x22:
        {
// switch_3578_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x23:
        {
// switch_3578_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x24:
        {
// switch_3578_case_0x24
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x25:
        {
// switch_3578_case_0x25
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x26:
        {
// switch_3578_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x27:
        {
// switch_3578_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x28:
        {
// switch_3578_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x29:
        {
// switch_3578_case_0x29
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x2a:
        {
// switch_3578_case_0x2a
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x2b:
        {
// switch_3578_case_0x2b
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x2c:
        {
// switch_3578_case_0x2c
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x2d:
        {
// switch_3578_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x2e:
        {
// switch_3578_case_0x2e
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x2f:
        {
// switch_3578_case_0x2f
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x30:
        {
// switch_3578_case_0x30
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x31:
        {
// switch_3578_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x32:
        {
// switch_3578_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x33:
        {
// switch_3578_case_0x33
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x34:
        {
// switch_3578_case_0x34
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x35:
        {
// switch_3578_case_0x35
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x36:
        {
// switch_3578_case_0x36
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x37:
        {
// switch_3578_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x38:
        {
// switch_3578_case_0x38
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
            pri = fun_0738(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3578_case_default
        }
        case 0x39:
        {
// switch_3578_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x3a:
        {
// switch_3578_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x3b:
        {
// switch_3578_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x3c:
        {
// switch_3578_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x3d:
        {
// switch_3578_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
        case 0x3e:
        {
// switch_3578_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            OP_JUMP switch_3578_case_default
        }
    }
}
// fun_3D70
fun_3D70() {
    pri = arg_4;
    OP_JNZ lab_3DA8
    var_8 = 0;
    pri = fun_09D8()
// lab_3DA8
    pri = arg_1;
    switch (pri) {
// switch_5180
        case default:
        {
// switch_5180_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0C48(var_264)
            OP_JZER lab_5748
            pri = arg_3;
            switch (pri) {
// switch_56F0
                case default:
                {
// switch_56F0_case_default
                    OP_JUMP lab_5A00
// lab_5A00
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5A70
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5A70
                    var_8 = 0;
                    pri = fun_0A18()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_56F0_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_56F0_case_default
                }
                case 0x2:
                {
// switch_56F0_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_56F0_case_default
                }
                case 0x3:
                {
// switch_56F0_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_56F0_case_default
                }
            }
// lab_5748
            pri = arg_1;
            OP_JZER lab_5798
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5798
            pri = 0;
            OP_JUMP lab_57A0
// lab_5798
            pri = 1;
// lab_57A0
            OP_JZER lab_5808
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_04C8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5808
            pri = 1;
            OP_JUMP lab_5810
// lab_5808
            pri = 0;
// lab_5810
            OP_JZER lab_5860
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A00
// lab_5860
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_58C8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A00
// lab_58C8
            var_16 = 22088;
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
// switch_5180_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1:
        {
// switch_5180_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2:
        {
// switch_5180_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x3:
        {
// switch_5180_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x4:
        {
// switch_5180_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x5:
        {
// switch_5180_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0700(var_40)
            OP_JUMP switch_5180_case_default
        }
        case 0x6:
        {
// switch_5180_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x7:
        {
// switch_5180_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x8:
        {
// switch_5180_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x9:
        {
// switch_5180_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0xa:
        {
// switch_5180_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0xb:
        {
// switch_5180_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0xc:
        {
// switch_5180_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0xd:
        {
// switch_5180_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0xe:
        {
// switch_5180_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0xf:
        {
// switch_5180_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x10:
        {
// switch_5180_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x11:
        {
// switch_5180_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x12:
        {
// switch_5180_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x13:
        {
// switch_5180_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x14:
        {
// switch_5180_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x15:
        {
// switch_5180_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x16:
        {
// switch_5180_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x17:
        {
// switch_5180_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x18:
        {
// switch_5180_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x19:
        {
// switch_5180_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1a:
        {
// switch_5180_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1b:
        {
// switch_5180_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1c:
        {
// switch_5180_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1d:
        {
// switch_5180_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1e:
        {
// switch_5180_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x1f:
        {
// switch_5180_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x20:
        {
// switch_5180_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x21:
        {
// switch_5180_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x22:
        {
// switch_5180_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x23:
        {
// switch_5180_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x24:
        {
// switch_5180_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x25:
        {
// switch_5180_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x26:
        {
// switch_5180_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x27:
        {
// switch_5180_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x28:
        {
// switch_5180_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x29:
        {
// switch_5180_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2a:
        {
// switch_5180_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2b:
        {
// switch_5180_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2c:
        {
// switch_5180_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2d:
        {
// switch_5180_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2e:
        {
// switch_5180_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x2f:
        {
// switch_5180_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x30:
        {
// switch_5180_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x31:
        {
// switch_5180_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x32:
        {
// switch_5180_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x33:
        {
// switch_5180_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x34:
        {
// switch_5180_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x35:
        {
// switch_5180_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x36:
        {
// switch_5180_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x37:
        {
// switch_5180_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x38:
        {
// switch_5180_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x39:
        {
// switch_5180_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x3a:
        {
// switch_5180_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x3b:
        {
// switch_5180_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x3c:
        {
// switch_5180_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x3d:
        {
// switch_5180_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
        case 0x3e:
        {
// switch_5180_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0488(var_24, var_16, var_8)
            OP_JUMP switch_5180_case_default
        }
    }
}
// fun_5AA0
fun_5AA0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5BA0
        case default:
        {
// switch_5BA0_case_default
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
// switch_5BA0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5BA0_case_default
        }
        case 0x1:
        {
// switch_5BA0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5BA0_case_default
        }
        case 0x2:
        {
// switch_5BA0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5BA0_case_default
        }
        case 0x3:
        {
// switch_5BA0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5BA0_case_default
        }
    }
}
// fun_5C60
fun_5C60() {
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
    pri = fun_16F8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_17A8()
    pri = 0;
    return pri;
}
// fun_5CF8
fun_5CF8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5AA0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5C60(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_5DA0
fun_5DA0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5DF0
// lab_5DF0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22256;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5E68
    OP_JUMP lab_5E98
// lab_5E68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5DF0
// lab_5E98
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_5F20
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3D70(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0EB8(var_56)
// lab_5F20
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5F88
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0A58(var_24, var_16)
// lab_5F88
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0A58(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6048
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
// lab_6048
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6088
    pri = 0;
    return pri;
// lab_6088
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_61D0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22376;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0450(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6198
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_61D0
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
// lab_6198
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0A58(var_16, var_8)
}
// fun_6258
fun_6258() {
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
    pri = fun_5CF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1840(var_112)
    var_128 = 0;
    pri = fun_1900()
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
    pri = fun_5DA0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_63D0
fun_63D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1930(var_8)
    var_24 = 0;
    pri = fun_1968()
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
    pri = fun_6258(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_1A08()
    pri = 0;
    return pri;
}
// fun_64C0
fun_64C0() {
    pri = g_mode;
    switch (pri) {
// switch_65A8
        case default:
        {
// switch_65A8_case_default
            pri = CommandNOP()
            OP_JUMP lab_6600
// lab_6600
            pri = 0;
            return pri;
        }
        case 0xa99efccc1788e293:
        {
// switch_65A8_case_0xa99efccc1788e293
            var_8 = 0;
            pri = fun_6668()
            OP_JUMP lab_6600
        }
        case 0x0:
        {
// switch_65A8_case_0x0
            var_8 = 0;
            pri = fun_6610()
            OP_JUMP lab_6600
        }
        case 0x6846bffc625e01d5:
        {
// switch_65A8_case_0x6846bffc625e01d5
            var_8 = 0;
            pri = fun_6650()
            OP_JUMP lab_6600
        }
        case 0x6e728e8d071ccb0c:
        {
// switch_65A8_case_0x6e728e8d071ccb0c
            var_8 = 0;
            pri = fun_69B8()
            OP_JUMP lab_6600
        }
    }
}
// fun_6610
fun_6610() {
    pri = 0;
    return pri;
}
// public fun_63F02D54
public fun_63F02D54() {
    alt = 22512;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_6650
fun_6650() {
    pri = 0;
    return pri;
}
// fun_6668
fun_6668() {
    pri = IsPlayerRideBicycle()
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_66D8
    var_16 = 0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_0E30(var_24, var_16)
// lab_66D8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 8802641224559852288, -3045622007385116363
    var_40 = 48;
    pri = fun_02D0(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 60;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 8802641224559852288;
    var_96 = 40;
    pri = fun_0280(var_88, var_80, var_72, var_64, var_56)
    var_104 = 8802641224559852288;
    var_112 = 8;
    pri = fun_0328(var_104)
    var_120 = 5;
    var_128 = 8802641224559852288;
    var_136 = 16;
    pri = fun_0A98(var_128, var_120)
    var_144 = 5;
    var_152 = 5;
    var_160 = -3045622007385116363;
    var_168 = 24;
    pri = fun_0B88(var_160, var_152, var_144)
    var_176 = -3045622007385116363;
    var_184 = 8;
    pri = fun_0328(var_176)
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 0;
    var_232 = 4;
    var_240 = -3045622007385116363;
    var_248 = 56;
    pri = fun_1A38(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 30;
    var_264 = 8;
    pri = fun_0060(var_256)
    var_272 = 1;
    var_280 = 3;
    var_288 = 0;
    var_296 = 4;
    var_304 = -3045622007385116363;
    var_312 = 40;
    pri = fun_3D70(var_304, var_296, var_288, var_280, var_272)
    var_320 = -3045622007385116363;
    var_328 = 8;
    pri = fun_0328(var_320)
    var_336 = 8802641224559852288;
    var_344 = 8;
    pri = fun_0BF0(var_336)
    var_352 = 15;
    var_360 = 8;
    pri = fun_0060(var_352)
    var_368 = -3045622007385116363;
    var_376 = 8;
    pri = fun_0BF0(var_368)
    pri = 0;
    return pri;
}
// fun_69B8
fun_69B8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3791230770868436600;
    var_88 = 22552;
    var_96 = 88;
    pri = fun_63D0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
