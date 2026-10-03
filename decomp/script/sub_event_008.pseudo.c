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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = floatcmp(var_16, var_8)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    return pri;
}
// fun_00B8
fun_00B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = floatcmp(var_16, var_8)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGEQ 
    return pri;
}
// fun_0110
fun_0110() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_0150
    pri = 0;
    return pri;
// lab_0150
    OP_ZERO_P_S -8
    OP_JUMP lab_0178
// lab_0178
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_01D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0170
// lab_01D0
    pri = 0;
    return pri;
// lab_0170
    OP_INC_P_S -8
}
// fun_01E8
fun_01E8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0218
// lab_0218
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0318
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0298
    pri = 0;
    return pri;
// lab_0318
    pri = 0;
    return pri;
// lab_0298
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
    OP_JUMP lab_0210
// lab_0210
    OP_INC_P_S -8
}
// fun_0330
fun_0330() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
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
// fun_0400
fun_0400() {
    OP_JUMP lab_0418
// lab_0418
    pri = FadeWait_()
    OP_JZER lab_0450
    pri = 0;
    return pri;
// lab_0450
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0418
    pri = 0;
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_04C0
fun_04C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_04F8
fun_04F8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
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
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D30(var_8)
    OP_JZER lab_0618
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D60(var_24)
    OP_JNZ lab_0618
    pri = 0;
    return pri;
// lab_0618
    OP_JUMP lab_0628
// lab_0628
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0688
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0628
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0110(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07C8
// lab_07C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D30(var_8)
    OP_JNZ lab_0850
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0840
    pri = 0;
    return pri;
// lab_0850
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0940(var_8)
    pri = 0;
    return pri;
// lab_08F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C8
    pri = 0;
    return pri;
// lab_0840
    OP_JUMP lab_0898
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09C8
    pri = 0;
    return pri;
// lab_09C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D30(var_8)
    OP_JZER lab_0AF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A20
    OP_ZERO_P_S 64
// lab_0AF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B30
    OP_CONST_S 64, 1
// lab_0B30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B68
    OP_CONST_S 72, 1
// lab_0B68
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
// lab_0A20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A48
    OP_ZERO_P_S 72
// lab_0A48
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
    OP_JUMP lab_0C08
// lab_0C08
    pri = 0;
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D90
fun_0D90() {
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
// switch_13A8
        case default:
        {
// switch_13A8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13F0
// lab_13F0
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
            OP_JNZ lab_1498
            var_88 = 0;
            pri = fun_1650()
// lab_1498
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_13A8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F90
                case default:
                {
// switch_0F90_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1008
// lab_1008
                    OP_JUMP lab_13F0
                }
                case 0x0:
                {
// switch_0F90_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1008
                }
                case 0x1:
                {
// switch_0F90_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1008
                }
                case 0x2:
                {
// switch_0F90_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1008
                }
                case 0x3:
                {
// switch_0F90_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1008
                }
                case 0x4:
                {
// switch_0F90_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1008
                }
                case 0x5:
                {
// switch_0F90_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1008
                }
            }
        }
        case 0x65:
        {
// switch_13A8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1148
                case default:
                {
// switch_1148_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_11C0
// lab_11C0
                    OP_JUMP lab_13F0
                }
                case 0x0:
                {
// switch_1148_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_11C0
                }
                case 0x1:
                {
// switch_1148_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_11C0
                }
                case 0x2:
                {
// switch_1148_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_11C0
                }
                case 0x3:
                {
// switch_1148_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_11C0
                }
                case 0x4:
                {
// switch_1148_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_11C0
                }
                case 0x5:
                {
// switch_1148_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_11C0
                }
            }
        }
        case 0x66:
        {
// switch_13A8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1300
                case default:
                {
// switch_1300_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1378
// lab_1378
                    OP_JUMP lab_13F0
                }
                case 0x0:
                {
// switch_1300_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1378
                }
                case 0x1:
                {
// switch_1300_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1378
                }
                case 0x2:
                {
// switch_1300_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1378
                }
                case 0x3:
                {
// switch_1300_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1378
                }
                case 0x4:
                {
// switch_1300_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1378
                }
                case 0x5:
                {
// switch_1300_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1378
                }
            }
        }
    }
}
// fun_14B0
fun_14B0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0708(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1558
    pri = 1;
    return pri;
// lab_1558
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_15A0
fun_15A0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_15F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14B0(var_8)
    arg_2 = pri;
// lab_15F0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D90(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    OP_JUMP lab_1668
// lab_1668
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16A8
    pri = 0;
    return pri;
// lab_16A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1668
    pri = 0;
    return pri;
}
// fun_16E8
fun_16E8() {
    var_8 = 0;
    pri = fun_1650()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1798
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1798
    pri = 0;
    return pri;
}
// fun_17A8
fun_17A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_17D8
fun_17D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1850()
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1890
fun_1890() {
    pri = arg_5;
    OP_JNZ lab_18C8
    var_8 = 0;
    pri = fun_0C18()
// lab_18C8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_1918
    OP_CONST_S -8, -1
// lab_1918
    pri = arg_1;
    switch (pri) {
// switch_33D0
        case default:
        {
// switch_33D0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3878
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0708(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3878
            pri = 1;
            OP_JUMP lab_3880
// lab_3878
            pri = 0;
// lab_3880
            OP_JZER lab_38D0
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01E8(var_16, var_8, var_0)
            OP_JUMP lab_3B28
// lab_38D0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3938
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3938
            pri = 1;
            OP_JUMP lab_3940
// lab_3938
            pri = 0;
// lab_3940
            OP_JZER lab_3AC8
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0708(var_24, var_16)
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
            OP_JUMP lab_3B28
// lab_3AC8
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
            pri = fun_01E8(var_16, var_8, var_0)
// lab_3B28
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3B98
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3B98
            var_8 = 0;
            pri = fun_0C58()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_33D0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1:
        {
// switch_33D0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2:
        {
// switch_33D0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x3:
        {
// switch_33D0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x4:
        {
// switch_33D0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x5:
        {
// switch_33D0_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0940(var_40)
            OP_JUMP switch_33D0_case_default
        }
        case 0x6:
        {
// switch_33D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x7:
        {
// switch_33D0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x8:
        {
// switch_33D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x9:
        {
// switch_33D0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0xa:
        {
// switch_33D0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0xb:
        {
// switch_33D0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0xc:
        {
// switch_33D0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0xd:
        {
// switch_33D0_case_0xd
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0xe:
        {
// switch_33D0_case_0xe
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0xf:
        {
// switch_33D0_case_0xf
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x10:
        {
// switch_33D0_case_0x10
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x11:
        {
// switch_33D0_case_0x11
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x12:
        {
// switch_33D0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x13:
        {
// switch_33D0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x14:
        {
// switch_33D0_case_0x14
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x15:
        {
// switch_33D0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x16:
        {
// switch_33D0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x17:
        {
// switch_33D0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x18:
        {
// switch_33D0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x19:
        {
// switch_33D0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1a:
        {
// switch_33D0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1b:
        {
// switch_33D0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1c:
        {
// switch_33D0_case_0x1c
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1d:
        {
// switch_33D0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1e:
        {
// switch_33D0_case_0x1e
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x1f:
        {
// switch_33D0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x20:
        {
// switch_33D0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x21:
        {
// switch_33D0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x22:
        {
// switch_33D0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x23:
        {
// switch_33D0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x24:
        {
// switch_33D0_case_0x24
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x25:
        {
// switch_33D0_case_0x25
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x26:
        {
// switch_33D0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x27:
        {
// switch_33D0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x28:
        {
// switch_33D0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x29:
        {
// switch_33D0_case_0x29
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2a:
        {
// switch_33D0_case_0x2a
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2b:
        {
// switch_33D0_case_0x2b
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2c:
        {
// switch_33D0_case_0x2c
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2d:
        {
// switch_33D0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2e:
        {
// switch_33D0_case_0x2e
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x2f:
        {
// switch_33D0_case_0x2f
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x30:
        {
// switch_33D0_case_0x30
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x31:
        {
// switch_33D0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x32:
        {
// switch_33D0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x33:
        {
// switch_33D0_case_0x33
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x34:
        {
// switch_33D0_case_0x34
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x35:
        {
// switch_33D0_case_0x35
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x36:
        {
// switch_33D0_case_0x36
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x37:
        {
// switch_33D0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x38:
        {
// switch_33D0_case_0x38
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
            pri = fun_0978(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_33D0_case_default
        }
        case 0x39:
        {
// switch_33D0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x3a:
        {
// switch_33D0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x3b:
        {
// switch_33D0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x3c:
        {
// switch_33D0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x3d:
        {
// switch_33D0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
        case 0x3e:
        {
// switch_33D0_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            OP_JUMP switch_33D0_case_default
        }
    }
}
// fun_3BC8
fun_3BC8() {
    pri = arg_4;
    OP_JNZ lab_3C00
    var_8 = 0;
    pri = fun_0C18()
// lab_3C00
    pri = arg_1;
    switch (pri) {
// switch_4FD8
        case default:
        {
// switch_4FD8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D30(var_264)
            OP_JZER lab_55A0
            pri = arg_3;
            switch (pri) {
// switch_5548
                case default:
                {
// switch_5548_case_default
                    OP_JUMP lab_5858
// lab_5858
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_58C8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_58C8
                    var_8 = 0;
                    pri = fun_0C58()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5548_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E8(var_16, var_8, var_0)
                    OP_JUMP switch_5548_case_default
                }
                case 0x2:
                {
// switch_5548_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E8(var_16, var_8, var_0)
                    OP_JUMP switch_5548_case_default
                }
                case 0x3:
                {
// switch_5548_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E8(var_16, var_8, var_0)
                    OP_JUMP switch_5548_case_default
                }
            }
// lab_55A0
            pri = arg_1;
            OP_JZER lab_55F0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_55F0
            pri = 0;
            OP_JUMP lab_55F8
// lab_55F0
            pri = 1;
// lab_55F8
            OP_JZER lab_5660
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0708(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5660
            pri = 1;
            OP_JUMP lab_5668
// lab_5660
            pri = 0;
// lab_5668
            OP_JZER lab_56B8
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E8(var_16, var_8, var_0)
            OP_JUMP lab_5858
// lab_56B8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5720
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E8(var_16, var_8, var_0)
            OP_JUMP lab_5858
// lab_5720
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0708(var_24, var_16)
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
// switch_4FD8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1:
        {
// switch_4FD8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2:
        {
// switch_4FD8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x3:
        {
// switch_4FD8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x4:
        {
// switch_4FD8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x5:
        {
// switch_4FD8_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0940(var_40)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x6:
        {
// switch_4FD8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x7:
        {
// switch_4FD8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x8:
        {
// switch_4FD8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x9:
        {
// switch_4FD8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0xa:
        {
// switch_4FD8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0xb:
        {
// switch_4FD8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0xc:
        {
// switch_4FD8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0xd:
        {
// switch_4FD8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0xe:
        {
// switch_4FD8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0xf:
        {
// switch_4FD8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x10:
        {
// switch_4FD8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x11:
        {
// switch_4FD8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x12:
        {
// switch_4FD8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x13:
        {
// switch_4FD8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x14:
        {
// switch_4FD8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x15:
        {
// switch_4FD8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x16:
        {
// switch_4FD8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x17:
        {
// switch_4FD8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x18:
        {
// switch_4FD8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x19:
        {
// switch_4FD8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1a:
        {
// switch_4FD8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1b:
        {
// switch_4FD8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1c:
        {
// switch_4FD8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1d:
        {
// switch_4FD8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1e:
        {
// switch_4FD8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x1f:
        {
// switch_4FD8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x20:
        {
// switch_4FD8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x21:
        {
// switch_4FD8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x22:
        {
// switch_4FD8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x23:
        {
// switch_4FD8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x24:
        {
// switch_4FD8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x25:
        {
// switch_4FD8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x26:
        {
// switch_4FD8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x27:
        {
// switch_4FD8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x28:
        {
// switch_4FD8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x29:
        {
// switch_4FD8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2a:
        {
// switch_4FD8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2b:
        {
// switch_4FD8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2c:
        {
// switch_4FD8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2d:
        {
// switch_4FD8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2e:
        {
// switch_4FD8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x2f:
        {
// switch_4FD8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x30:
        {
// switch_4FD8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x31:
        {
// switch_4FD8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x32:
        {
// switch_4FD8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x33:
        {
// switch_4FD8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x34:
        {
// switch_4FD8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x35:
        {
// switch_4FD8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x36:
        {
// switch_4FD8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x37:
        {
// switch_4FD8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x38:
        {
// switch_4FD8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x39:
        {
// switch_4FD8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x3a:
        {
// switch_4FD8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x3b:
        {
// switch_4FD8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x3c:
        {
// switch_4FD8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x3d:
        {
// switch_4FD8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
        case 0x3e:
        {
// switch_4FD8_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06C8(var_24, var_16, var_8)
            OP_JUMP switch_4FD8_case_default
        }
    }
}
// fun_58F8
fun_58F8() {
    pri = g_mode;
    switch (pri) {
// switch_5990
        case default:
        {
// switch_5990_case_default
            pri = CommandNOP()
            OP_JUMP lab_59C8
// lab_59C8
            pri = 0;
            return pri;
        }
        case 0xbef4b7b8901b1477:
        {
// switch_5990_case_0xbef4b7b8901b1477
            var_8 = 0;
            pri = fun_59F0()
            OP_JUMP lab_59C8
        }
        case 0x0:
        {
// switch_5990_case_0x0
            var_8 = 0;
            pri = fun_59D8()
            OP_JUMP lab_59C8
        }
    }
}
// fun_59D8
fun_59D8() {
    pri = 0;
    return pri;
}
// fun_59F0
fun_59F0() {
    var_16 = 0;
    pri = fun_5B18()
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_5A50
    pri = 0;
    return pri;
// lab_5A50
    var_8 = 0;
    pri = fun_68C0()
    pri = 0;
    return pri;
}
// fun_5A80
fun_5A80() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = arg_0;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_15A0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_5B18
fun_5B18() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_CONST_S -16, 1
    var_24 = 1;
    var_32 = 1;
    var_40 = -1;
    var_48 = var_8;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0C98(var_56, var_48, var_40, var_32, var_24)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = var_8;
    var_112 = 8802641224559852288;
    var_120 = 48;
    pri = fun_0548(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = -3017938149938350954;
    var_136 = 8;
    pri = fun_5A80(var_128)
    var_144 = 1;
    var_152 = 8;
    pri = fun_16E8(var_144)
    var_160 = 0;
    pri = fun_17A8()
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 8802641224559852288;
    var_208 = var_8;
    var_216 = 48;
    pri = fun_0548(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = -1;
    var_248 = 8802641224559852288;
    var_256 = var_8;
    var_264 = 40;
    pri = fun_0C98(var_256, var_248, var_240, var_232, var_224)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_05A0(var_272)
    var_288 = var_8;
    var_296 = 8;
    pri = fun_05A0(var_288)
    var_304 = 1;
    var_312 = 1;
    var_320 = -1;
    var_328 = -1;
    var_336 = 0;
    var_344 = 0;
    var_352 = var_8;
    var_360 = 56;
    pri = fun_1890(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = -3017939249449979165;
    var_376 = 8;
    pri = fun_5A80(var_368)
    var_384 = 1;
    var_392 = 3;
    var_400 = 0;
    var_408 = 0;
    var_416 = var_8;
    var_424 = 40;
    pri = fun_3BC8(var_416, var_408, var_400, var_392, var_384)
    var_432 = 0;
    var_440 = 0;
    var_448 = 1;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 48;
    pri = fun_17D8(var_472, var_464, var_456, var_448, var_440, var_432)
    var_16 = pri;
    var_488 = 0;
    pri = fun_17A8()
    pri = var_16;
    OP_JNZ lab_5FF8
    var_496 = 1;
    var_504 = 1;
    var_512 = -1;
    var_520 = -1;
    var_528 = 0;
    var_536 = 0;
    var_544 = var_8;
    var_552 = 56;
    pri = fun_1890(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = -3017932652380209899;
    var_568 = 8;
    pri = fun_5A80(var_560)
    var_576 = 1;
    var_584 = 8;
    pri = fun_16E8(var_576)
    var_592 = 0;
    pri = fun_17A8()
    var_600 = -1;
    var_608 = var_8;
    var_616 = 16;
    pri = fun_0CF0(var_608, var_600)
    var_624 = -1;
    var_632 = 8802641224559852288;
    var_640 = 16;
    pri = fun_0CF0(var_632, var_624)
    var_648 = 1;
    var_656 = 3;
    var_664 = 0;
    var_672 = 0;
    var_680 = var_8;
    var_688 = 40;
    pri = fun_3BC8(var_680, var_672, var_664, var_656, var_648)
    var_696 = var_8;
    var_704 = 8;
    pri = fun_0740(var_696)
    pri = 0;
    return pri;
// lab_5FF8
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 0;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = -3017940348961607376;
    var_80 = 8;
    pri = fun_5A80(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_16E8(var_88)
    var_104 = 0;
    pri = fun_17A8()
    OP_JUMP lab_60B8
// lab_60B8
    var_8 = 0;
    var_16 = 5333733620988804432;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = -8175682152137194732;
    pri = WorkSet(var_32, var_24)
    var_40 = 1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = 40;
    pri = fun_3BC8(var_72, var_64, var_56, var_48, var_40)
    pri = CallInputBirthMonth()
    var_88 = 1;
    var_96 = 1;
    var_104 = -1;
    var_112 = -1;
    var_120 = 0;
    var_128 = 0;
    var_136 = var_8;
    var_144 = 56;
    pri = fun_1890(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 5333733620988804432;
    pri = WorkGet(var_152)
    OP_JNZ lab_6388
    var_160 = -3247260720959781569;
    var_168 = 8;
    pri = fun_5A80(var_160)
    var_176 = 1;
    var_184 = 8;
    pri = fun_16E8(var_176)
    var_192 = 0;
    pri = fun_17A8()
    var_200 = 0;
    var_208 = 5333733620988804432;
    pri = WorkSet(var_208, var_200)
    var_216 = 0;
    var_224 = -8175682152137194732;
    pri = WorkSet(var_224, var_216)
    var_232 = -1;
    var_240 = var_8;
    var_248 = 16;
    pri = fun_0CF0(var_240, var_232)
    var_256 = -1;
    var_264 = 8802641224559852288;
    var_272 = 16;
    pri = fun_0CF0(var_264, var_256)
    var_280 = 1;
    var_288 = 3;
    var_296 = 0;
    var_304 = 0;
    var_312 = var_8;
    var_320 = 40;
    pri = fun_3BC8(var_312, var_304, var_296, var_288, var_280)
    var_328 = var_8;
    var_336 = 8;
    pri = fun_0740(var_328)
    pri = 0;
    return pri;
// lab_6388
    var_8 = -3018922212845410574;
    var_16 = 8;
    pri = fun_5A80(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_16E8(var_24)
    var_40 = 0;
    pri = fun_17A8()
    var_48 = 1;
    var_56 = 3;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 40;
    pri = fun_3BC8(var_80, var_72, var_64, var_56, var_48)
    pri = CallInputBirthDay()
    var_96 = 1;
    var_104 = 1;
    var_112 = -1;
    var_120 = -1;
    var_128 = 0;
    var_136 = 0;
    var_144 = var_8;
    var_152 = 56;
    pri = fun_1890(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = -8175682152137194732;
    pri = WorkGet(var_160)
    OP_JNZ lab_6658
    var_168 = -3247260720959781569;
    var_176 = 8;
    pri = fun_5A80(var_168)
    var_184 = 1;
    var_192 = 8;
    pri = fun_16E8(var_184)
    var_200 = 0;
    pri = fun_17A8()
    var_208 = 0;
    var_216 = 5333733620988804432;
    pri = WorkSet(var_216, var_208)
    var_224 = 0;
    var_232 = -8175682152137194732;
    pri = WorkSet(var_232, var_224)
    var_240 = -1;
    var_248 = var_8;
    var_256 = 16;
    pri = fun_0CF0(var_248, var_240)
    var_264 = -1;
    var_272 = 8802641224559852288;
    var_280 = 16;
    pri = fun_0CF0(var_272, var_264)
    var_288 = 1;
    var_296 = 3;
    var_304 = 0;
    var_312 = 0;
    var_320 = var_8;
    var_328 = 40;
    pri = fun_3BC8(var_320, var_312, var_304, var_296, var_288)
    var_336 = var_8;
    var_344 = 8;
    pri = fun_0740(var_336)
    pri = 0;
    return pri;
// lab_6658
    var_8 = -3017933751891838110;
    var_16 = 8;
    pri = fun_5A80(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_16E8(var_24)
    var_40 = 0;
    pri = fun_17A8()
    var_48 = 2;
    var_56 = 2;
    var_64 = 5333733620988804432;
    pri = WorkGet(var_64)
    var_72 = pri;
    var_80 = 1;
    pri = WordSetNumber(var_80, var_72, var_64, var_56)
    var_88 = 2;
    var_96 = 2;
    var_104 = -8175682152137194732;
    pri = WorkGet(var_104)
    var_112 = pri;
    var_120 = 2;
    pri = WordSetNumber(var_120, var_112, var_104, var_96)
    var_128 = -3017934851403466321;
    var_136 = 8;
    pri = fun_5A80(var_128)
    var_144 = 0;
    var_152 = 0;
    var_160 = 1;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 48;
    pri = fun_17D8(var_184, var_176, var_168, var_160, var_152, var_144)
    var_16 = pri;
    var_200 = 0;
    pri = fun_17A8()
    pri = var_16;
    OP_JZER lab_6838
    pri = 1;
    return pri;
// lab_6838
    var_8 = -3017935950915094532;
    var_16 = 8;
    pri = fun_5A80(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_16E8(var_24)
    var_40 = 0;
    pri = fun_17A8()
    OP_JUMP lab_60B8
    pri = 0;
    return pri;
}
// fun_68C0
fun_68C0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -3017928254333697055;
    var_24 = 8;
    pri = fun_5A80(var_16)
    var_32 = 1;
    var_40 = 8;
    pri = fun_16E8(var_32)
    var_48 = 0;
    pri = fun_17A8()
    var_56 = 1;
    var_64 = 3;
    var_72 = 0;
    var_80 = 0;
    var_88 = var_8;
    var_96 = 40;
    pri = fun_3BC8(var_88, var_80, var_72, var_64, var_56)
    var_104 = var_8;
    var_112 = 8;
    pri = fun_0740(var_104)
    var_128 = var_8;
    pri = GetFieldObjectAngle_(var_128)
    var_16 = pri;
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    pri = var_16;
    alt = 4640537203540230144;
    var_160 = pri;
    var_168 = alt;
    pri = floatadd(var_168, var_160)
    var_176 = pri;
    var_184 = var_8;
    var_192 = 40;
    pri = fun_04F8(var_184, var_176, var_168, var_160, var_152)
    var_200 = -3017929353845325266;
    var_208 = 8;
    pri = fun_5A80(var_200)
    var_216 = 1;
    var_224 = 8;
    pri = fun_16E8(var_216)
    var_232 = 0;
    pri = fun_17A8()
    var_240 = -3018928809915179840;
    var_248 = 8;
    pri = fun_5A80(var_240)
    var_256 = 1;
    var_264 = 8;
    pri = fun_16E8(var_256)
    var_272 = 0;
    pri = fun_17A8()
    var_280 = -3018927710403551629;
    var_288 = 8;
    pri = fun_5A80(var_280)
    var_296 = 1;
    var_304 = 8;
    pri = fun_16E8(var_296)
    var_312 = 0;
    pri = fun_17A8()
    var_320 = var_8;
    var_328 = 8;
    pri = fun_05A0(var_320)
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    var_360 = var_16;
    var_368 = var_8;
    var_376 = 40;
    pri = fun_04F8(var_368, var_360, var_352, var_344, var_336)
    var_384 = -3018926610891923418;
    var_392 = 8;
    pri = fun_5A80(var_384)
    var_400 = 1;
    var_408 = 8;
    pri = fun_16E8(var_400)
    var_416 = 0;
    pri = fun_17A8()
    var_424 = var_8;
    var_432 = 8;
    pri = fun_05A0(var_424)
    var_440 = 1;
    var_448 = 1;
    var_456 = -1;
    var_464 = -1;
    var_472 = 0;
    var_480 = 0;
    var_488 = var_8;
    var_496 = 56;
    pri = fun_1890(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_504 = -3018925511380295207;
    var_512 = 8;
    pri = fun_5A80(var_504)
    var_520 = 1;
    var_528 = 8;
    pri = fun_16E8(var_520)
    var_536 = 0;
    pri = fun_17A8()
    var_544 = -3018924411868666996;
    var_552 = 8;
    pri = fun_5A80(var_544)
    var_560 = 1;
    var_568 = 8;
    pri = fun_16E8(var_560)
    var_576 = 0;
    pri = fun_17A8()
    var_584 = -3018923312357038785;
    var_592 = 8;
    pri = fun_5A80(var_584)
    var_600 = 1;
    var_608 = 8;
    pri = fun_16E8(var_600)
    var_616 = 0;
    pri = fun_17A8()
    var_624 = -1;
    var_632 = var_8;
    var_640 = 16;
    pri = fun_0CF0(var_632, var_624)
    var_648 = 1;
    var_656 = 3;
    var_664 = 0;
    var_672 = 0;
    var_680 = var_8;
    var_688 = 40;
    pri = fun_3BC8(var_680, var_672, var_664, var_656, var_648)
    var_696 = var_8;
    var_704 = 8;
    pri = fun_0740(var_696)
    var_720 = 8802641224559852288;
    var_728 = var_8;
    pri = GetFieldObjectBetweenAngle_(var_728, var_720)
    var_24 = pri;
    pri = 4640537203540230144;
    OP_LOAD_P_S_ALT -24
    var_736 = pri;
    var_744 = pri;
    var_752 = alt;
    var_760 = 16;
    pri = fun_00B8(var_752, var_744)
    OP_POP_ALT 
    OP_JZER lab_6F40
    pri = 4645040803167600640;
    OP_LOAD_P_S_ALT -24
    var_768 = pri;
    var_776 = alt;
    pri = floatsub(var_776, var_768)
    var_24 = pri;
// lab_6F40
    pri = -4591842032569286656;
    OP_LOAD_P_S_ALT -24
    var_8 = pri;
    var_16 = pri;
    var_24 = alt;
    var_32 = 16;
    pri = fun_0060(var_24, var_16)
    OP_POP_ALT 
    OP_JZER lab_6FF8
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 4643457506423603200;
    var_72 = var_8;
    var_80 = 40;
    pri = fun_04F8(var_72, var_64, var_56, var_48, var_40)
    OP_JUMP lab_7038
// lab_6FF8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = var_8;
    var_48 = 40;
    pri = fun_04F8(var_40, var_32, var_24, var_16, var_8)
// lab_7038
    var_8 = 1;
    var_16 = 0;
    var_24 = 22256;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0390(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0400()
    var_56 = 0;
    var_64 = var_8;
    var_72 = 16;
    pri = fun_04C0(var_64, var_56)
    var_80 = -1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_0CF0(var_88, var_80)
    var_104 = 16;
    var_112 = 8;
    pri = fun_0110(var_104)
    var_120 = 22304;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0330(var_128, var_120)
    var_144 = 0;
    pri = fun_0400()
    var_144 = var_8;
    var_152 = 8;
    pri = fun_0490(var_144)
    pri = 0;
    return pri;
}
