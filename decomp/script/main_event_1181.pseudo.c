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
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_04C8
fun_04C8() {
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
// fun_0540
fun_0540() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E60(var_8)
    OP_JZER lab_05B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E90(var_24)
    OP_JNZ lab_05B8
    pri = 0;
    return pri;
// lab_05B8
    OP_JUMP lab_05C8
// lab_05C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0628
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05C8
    pri = 0;
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0760
    pri = 0;
    return pri;
// lab_0760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07A0
// lab_07A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E60(var_8)
    OP_JNZ lab_0828
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0818
    pri = 0;
    return pri;
// lab_0828
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0870
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
// lab_0818
    OP_JUMP lab_0870
}
// fun_0918
fun_0918() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0950
fun_0950() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09A0
    pri = 0;
    return pri;
// lab_09A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E60(var_8)
    OP_JZER lab_0AD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09F8
    OP_ZERO_P_S 64
// lab_0AD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B08
    OP_CONST_S 64, 1
// lab_0B08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B40
    OP_CONST_S 72, 1
// lab_0B40
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
// lab_09F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A20
    OP_ZERO_P_S 72
// lab_0A20
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
    OP_JUMP lab_0BE0
// lab_0BE0
    pri = 0;
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0DA0
fun_0DA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CB0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0D28(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D68(var_24)
    pri = 0;
    return pri;
}
// fun_0E60
fun_0E60() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EC0
fun_0EC0() {
    OP_JUMP lab_0ED8
// lab_0ED8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F68
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F58
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    pri = 0;
    return pri;
// lab_0F68
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FF8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FE8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    pri = 0;
    return pri;
// lab_0FF8
    pri = 0;
    return pri;
// lab_0FE8
    OP_JUMP lab_1008
// lab_1008
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0ED8
    pri = 0;
    return pri;
// lab_0F58
    OP_JUMP lab_1008
}
// fun_1048
fun_1048() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0718(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EC0(var_40)
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1130
fun_1130() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
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
// switch_1780
        case default:
        {
// switch_1780_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17C8
// lab_17C8
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
            OP_JNZ lab_1870
            var_88 = 0;
            pri = fun_1A28()
// lab_1870
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1780_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1368
                case default:
                {
// switch_1368_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13E0
// lab_13E0
                    OP_JUMP lab_17C8
                }
                case 0x0:
                {
// switch_1368_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13E0
                }
                case 0x1:
                {
// switch_1368_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13E0
                }
                case 0x2:
                {
// switch_1368_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13E0
                }
                case 0x3:
                {
// switch_1368_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13E0
                }
                case 0x4:
                {
// switch_1368_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13E0
                }
                case 0x5:
                {
// switch_1368_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13E0
                }
            }
        }
        case 0x65:
        {
// switch_1780_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1520
                case default:
                {
// switch_1520_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1598
// lab_1598
                    OP_JUMP lab_17C8
                }
                case 0x0:
                {
// switch_1520_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1598
                }
                case 0x1:
                {
// switch_1520_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1598
                }
                case 0x2:
                {
// switch_1520_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1598
                }
                case 0x3:
                {
// switch_1520_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1598
                }
                case 0x4:
                {
// switch_1520_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1598
                }
                case 0x5:
                {
// switch_1520_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1598
                }
            }
        }
        case 0x66:
        {
// switch_1780_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16D8
                case default:
                {
// switch_16D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1750
// lab_1750
                    OP_JUMP lab_17C8
                }
                case 0x0:
                {
// switch_16D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1750
                }
                case 0x1:
                {
// switch_16D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1750
                }
                case 0x2:
                {
// switch_16D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1750
                }
                case 0x3:
                {
// switch_16D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1750
                }
                case 0x4:
                {
// switch_16D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1750
                }
                case 0x5:
                {
// switch_16D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1750
                }
            }
        }
    }
}
// fun_1888
fun_1888() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_06E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1930
    pri = 1;
    return pri;
// lab_1930
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1978
fun_1978() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1888(var_8)
    arg_2 = pri;
// lab_19C8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1168(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A28
fun_1A28() {
    OP_JUMP lab_1A40
// lab_1A40
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A80
    pri = 0;
    return pri;
// lab_1A80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A40
    pri = 0;
    return pri;
}
// fun_1AC0
fun_1AC0() {
    var_8 = 0;
    pri = fun_1A28()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1B70
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1B70
    pri = 0;
    return pri;
}
// fun_1B80
fun_1B80() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BB0
fun_1BB0() {
    OP_JUMP lab_1BC8
// lab_1BC8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C00
    pri = 0;
    return pri;
// lab_1C00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BC8
    pri = 0;
    return pri;
}
// fun_1C40
fun_1C40() {
    pri = arg_6;
    OP_JNZ lab_1C78
    var_8 = 0;
    pri = fun_0BF0()
// lab_1C78
    pri = arg_1;
    switch (pri) {
// switch_31E0
        case default:
        {
// switch_31E0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3530
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3530
            pri = 1;
            OP_JUMP lab_3538
// lab_3530
            pri = 0;
// lab_3538
            OP_JZER lab_3690
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
            OP_JUMP lab_36F0
// lab_3690
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
// lab_36F0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3750
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_37B0
// lab_3750
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_37B0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_37B0
            pri = arg_2;
            OP_JZER lab_37F0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_37F0
            var_8 = 0;
            pri = fun_0C30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_31E0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1:
        {
// switch_31E0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x2:
        {
// switch_31E0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x3:
        {
// switch_31E0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x4:
        {
// switch_31E0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x5:
        {
// switch_31E0_case_0x5
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0x6:
        {
// switch_31E0_case_0x6
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0x7:
        {
// switch_31E0_case_0x7
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0x8:
        {
// switch_31E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x9:
        {
// switch_31E0_case_0x9
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0xa:
        {
// switch_31E0_case_0xa
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0xb:
        {
// switch_31E0_case_0xb
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0xc:
        {
// switch_31E0_case_0xc
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0xd:
        {
// switch_31E0_case_0xd
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0xe:
        {
// switch_31E0_case_0xe
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0xf:
        {
// switch_31E0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x10:
        {
// switch_31E0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x11:
        {
// switch_31E0_case_0x11
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0x12:
        {
// switch_31E0_case_0x12
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0x13:
        {
// switch_31E0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x14:
        {
// switch_31E0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x15:
        {
// switch_31E0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x16:
        {
// switch_31E0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x17:
        {
// switch_31E0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x18:
        {
// switch_31E0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x19:
        {
// switch_31E0_case_0x19
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1a:
        {
// switch_31E0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
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
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1b:
        {
// switch_31E0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
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
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1c:
        {
// switch_31E0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0668(var_48, var_40)
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
            pri = fun_0950(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1d:
        {
// switch_31E0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1e:
        {
// switch_31E0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x1f:
        {
// switch_31E0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x20:
        {
// switch_31E0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x21:
        {
// switch_31E0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x22:
        {
// switch_31E0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x23:
        {
// switch_31E0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x24:
        {
// switch_31E0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x25:
        {
// switch_31E0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x26:
        {
// switch_31E0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x27:
        {
// switch_31E0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x28:
        {
// switch_31E0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
        case 0x29:
        {
// switch_31E0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31E0_case_default
        }
    }
}
// fun_3820
fun_3820() {
    pri = arg_5;
    OP_JNZ lab_3858
    var_8 = 0;
    pri = fun_0BF0()
// lab_3858
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_38A8
    OP_CONST_S -8, -1
// lab_38A8
    pri = arg_1;
    switch (pri) {
// switch_5360
        case default:
        {
// switch_5360_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5808
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_06E0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5808
            pri = 1;
            OP_JUMP lab_5810
// lab_5808
            pri = 0;
// lab_5810
            OP_JZER lab_5860
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5AB8
// lab_5860
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_58C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_58C8
            pri = 1;
            OP_JUMP lab_58D0
// lab_58C8
            pri = 0;
// lab_58D0
            OP_JZER lab_5A58
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
            OP_JUMP lab_5AB8
// lab_5A58
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
            pri = fun_0138(var_16, var_8, var_0)
// lab_5AB8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5B28
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5B28
            var_8 = 0;
            pri = fun_0C30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5360_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x1:
        {
// switch_5360_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x2:
        {
// switch_5360_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x3:
        {
// switch_5360_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x4:
        {
// switch_5360_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x5:
        {
// switch_5360_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0918(var_40)
            OP_JUMP switch_5360_case_default
        }
        case 0x6:
        {
// switch_5360_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x7:
        {
// switch_5360_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x8:
        {
// switch_5360_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x9:
        {
// switch_5360_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0xa:
        {
// switch_5360_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0xb:
        {
// switch_5360_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0xc:
        {
// switch_5360_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0xd:
        {
// switch_5360_case_0xd
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0xe:
        {
// switch_5360_case_0xe
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0xf:
        {
// switch_5360_case_0xf
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x10:
        {
// switch_5360_case_0x10
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x11:
        {
// switch_5360_case_0x11
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x12:
        {
// switch_5360_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x13:
        {
// switch_5360_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x14:
        {
// switch_5360_case_0x14
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x15:
        {
// switch_5360_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x16:
        {
// switch_5360_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x17:
        {
// switch_5360_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x18:
        {
// switch_5360_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x19:
        {
// switch_5360_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x1a:
        {
// switch_5360_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x1b:
        {
// switch_5360_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x1c:
        {
// switch_5360_case_0x1c
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x1d:
        {
// switch_5360_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x1e:
        {
// switch_5360_case_0x1e
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x1f:
        {
// switch_5360_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x20:
        {
// switch_5360_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x21:
        {
// switch_5360_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x22:
        {
// switch_5360_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x23:
        {
// switch_5360_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x24:
        {
// switch_5360_case_0x24
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x25:
        {
// switch_5360_case_0x25
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x26:
        {
// switch_5360_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x27:
        {
// switch_5360_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x28:
        {
// switch_5360_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x29:
        {
// switch_5360_case_0x29
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x2a:
        {
// switch_5360_case_0x2a
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x2b:
        {
// switch_5360_case_0x2b
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x2c:
        {
// switch_5360_case_0x2c
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x2d:
        {
// switch_5360_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x2e:
        {
// switch_5360_case_0x2e
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x2f:
        {
// switch_5360_case_0x2f
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x30:
        {
// switch_5360_case_0x30
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x31:
        {
// switch_5360_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x32:
        {
// switch_5360_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x33:
        {
// switch_5360_case_0x33
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x34:
        {
// switch_5360_case_0x34
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x35:
        {
// switch_5360_case_0x35
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x36:
        {
// switch_5360_case_0x36
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x37:
        {
// switch_5360_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x38:
        {
// switch_5360_case_0x38
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
            pri = fun_0950(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5360_case_default
        }
        case 0x39:
        {
// switch_5360_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x3a:
        {
// switch_5360_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x3b:
        {
// switch_5360_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x3c:
        {
// switch_5360_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x3d:
        {
// switch_5360_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
        case 0x3e:
        {
// switch_5360_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            OP_JUMP switch_5360_case_default
        }
    }
}
// fun_5B58
fun_5B58() {
    pri = arg_4;
    OP_JNZ lab_5B90
    var_8 = 0;
    pri = fun_0BF0()
// lab_5B90
    pri = arg_1;
    switch (pri) {
// switch_6F68
        case default:
        {
// switch_6F68_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E60(var_264)
            OP_JZER lab_7530
            pri = arg_3;
            switch (pri) {
// switch_74D8
                case default:
                {
// switch_74D8_case_default
                    OP_JUMP lab_77E8
// lab_77E8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7858
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7858
                    var_8 = 0;
                    pri = fun_0C30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_74D8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74D8_case_default
                }
                case 0x2:
                {
// switch_74D8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74D8_case_default
                }
                case 0x3:
                {
// switch_74D8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74D8_case_default
                }
            }
// lab_7530
            pri = arg_1;
            OP_JZER lab_7580
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7580
            pri = 0;
            OP_JUMP lab_7588
// lab_7580
            pri = 1;
// lab_7588
            OP_JZER lab_75F0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_06E0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_75F0
            pri = 1;
            OP_JUMP lab_75F8
// lab_75F0
            pri = 0;
// lab_75F8
            OP_JZER lab_7648
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_77E8
// lab_7648
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_76B0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_77E8
// lab_76B0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_06E0(var_24, var_16)
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
// switch_6F68_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1:
        {
// switch_6F68_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2:
        {
// switch_6F68_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x3:
        {
// switch_6F68_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x4:
        {
// switch_6F68_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x5:
        {
// switch_6F68_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0918(var_40)
            OP_JUMP switch_6F68_case_default
        }
        case 0x6:
        {
// switch_6F68_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x7:
        {
// switch_6F68_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x8:
        {
// switch_6F68_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x9:
        {
// switch_6F68_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0xa:
        {
// switch_6F68_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0xb:
        {
// switch_6F68_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0xc:
        {
// switch_6F68_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0xd:
        {
// switch_6F68_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0xe:
        {
// switch_6F68_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0xf:
        {
// switch_6F68_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x10:
        {
// switch_6F68_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x11:
        {
// switch_6F68_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x12:
        {
// switch_6F68_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x13:
        {
// switch_6F68_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x14:
        {
// switch_6F68_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x15:
        {
// switch_6F68_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x16:
        {
// switch_6F68_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x17:
        {
// switch_6F68_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x18:
        {
// switch_6F68_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x19:
        {
// switch_6F68_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1a:
        {
// switch_6F68_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1b:
        {
// switch_6F68_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1c:
        {
// switch_6F68_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1d:
        {
// switch_6F68_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1e:
        {
// switch_6F68_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x1f:
        {
// switch_6F68_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x20:
        {
// switch_6F68_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x21:
        {
// switch_6F68_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x22:
        {
// switch_6F68_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x23:
        {
// switch_6F68_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x24:
        {
// switch_6F68_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x25:
        {
// switch_6F68_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x26:
        {
// switch_6F68_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x27:
        {
// switch_6F68_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x28:
        {
// switch_6F68_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x29:
        {
// switch_6F68_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2a:
        {
// switch_6F68_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2b:
        {
// switch_6F68_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2c:
        {
// switch_6F68_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2d:
        {
// switch_6F68_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2e:
        {
// switch_6F68_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x2f:
        {
// switch_6F68_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x30:
        {
// switch_6F68_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x31:
        {
// switch_6F68_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x32:
        {
// switch_6F68_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x33:
        {
// switch_6F68_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x34:
        {
// switch_6F68_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x35:
        {
// switch_6F68_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x36:
        {
// switch_6F68_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x37:
        {
// switch_6F68_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x38:
        {
// switch_6F68_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x39:
        {
// switch_6F68_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x3a:
        {
// switch_6F68_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x3b:
        {
// switch_6F68_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x3c:
        {
// switch_6F68_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x3d:
        {
// switch_6F68_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
        case 0x3e:
        {
// switch_6F68_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06A0(var_24, var_16, var_8)
            OP_JUMP switch_6F68_case_default
        }
    }
}
// fun_7888
fun_7888() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7910
// lab_7910
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7A90
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7A80
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_79D0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_79D0
    pri = 0;
    OP_JUMP lab_79D8
// lab_7A90
    pri = 0;
    return pri;
// lab_7A80
    OP_JUMP lab_7908
// lab_7908
    OP_INC_P_S -936
// lab_79D0
    pri = 1;
// lab_79D8
    OP_JZER lab_7A50
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7A48
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7A50
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7A48
}
// fun_7AB0
fun_7AB0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7B48
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1108()
// lab_7B48
    pri = arg_4;
    OP_JZER lab_7B80
    var_8 = 1;
    var_16 = 8;
    pri = fun_1130(var_8)
// lab_7B80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7BD8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7BD8
    pri = 0;
    OP_JUMP lab_7BE0
// lab_7BD8
    pri = 1;
// lab_7BE0
    OP_JZER lab_7CA8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7CA8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7C80
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1048(var_32, var_24)
    OP_JUMP lab_7CA8
// lab_7CA8
    pri = arg_2;
    OP_JZER lab_7D80
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7D50
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0C70(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0490(var_40)
    OP_JUMP lab_7D80
// lab_7D80
    pri = arg_3;
    OP_JZER lab_7DB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_10D0(var_8)
// lab_7DB8
    pri = 0;
    return pri;
// lab_7D50
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0C70(var_16, var_8)
// lab_7C80
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1048(var_16, var_8)
}
// fun_7DC8
fun_7DC8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7888(var_24)
    pri = 0;
    return pri;
}
// fun_7E30
fun_7E30() {
    pri = g_mode;
    switch (pri) {
// switch_7EF0
        case default:
        {
// switch_7EF0_case_default
            pri = CommandNOP()
            OP_JUMP lab_7F38
// lab_7F38
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7EF0_case_0x0
            var_8 = 0;
            pri = fun_7F48()
            OP_JUMP lab_7F38
        }
        case 0x2455b3276b249d93:
        {
// switch_7EF0_case_0x2455b3276b249d93
            var_8 = 0;
            pri = fun_8B20()
            OP_JUMP lab_7F38
        }
        case 0x41eb9d2af547df0f:
        {
// switch_7EF0_case_0x41eb9d2af547df0f
            var_8 = 0;
            pri = fun_89C8()
            OP_JUMP lab_7F38
        }
    }
}
// fun_7F48
fun_7F48() {
    pri = 0;
    return pri;
}
// fun_7F60
fun_7F60() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_7AB0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7FB8
fun_7FB8() {
    pri = 0;
    return pri;
}
// fun_7FD0
fun_7FD0() {
    pri = 0;
    return pri;
}
// fun_7FE8
fun_7FE8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1;
    var_32 = 1;
    var_40 = 115;
    pri = float(var_40)
    var_48 = pri;
    OP_PUSH3_C 4666292933567394611, 4672945748573578854, 8802641224559852288
    var_56 = 48;
    pri = fun_0438(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    OP_PUSH4_C -4589238389034713088, 4666269623920885760, 4672990306282294477, -1292278190967397311
    var_80 = 48;
    pri = fun_0438(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 4629390794462488166;
    var_104 = 0;
    OP_PUSH5_C 4665979666211966812, 4643421618364072591, 4673104617008676209, 4666463412845281280, 4640674070747655700
    var_112 = 4672870654678180823;
    var_120 = 1;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    pri = fun_1BB0()
    var_136 = 0;
    var_144 = 4629390794462488166;
    var_152 = 3;
    OP_PUSH5_C 4665951441748481802, -4588981543118464614, 4673097247531991040, 4666465842765978665, 4639380693229670236
    var_160 = 4672887078633120727;
    var_168 = 100;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 31016;
    var_184 = 8;
    var_192 = 16;
    pri = fun_0280(var_184, var_176)
    var_200 = 0;
    pri = fun_0350()
    var_208 = 15;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 7;
    var_232 = 7;
    var_240 = -1292278190967397311;
    var_248 = 24;
    pri = fun_0DA0(var_240, var_232, var_224)
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 0;
    var_296 = 9;
    var_304 = -1292278190967397311;
    var_312 = 56;
    pri = fun_3820(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    var_344 = 100;
    var_352 = -1;
    OP_PUSH2_C 7326681172225498456, -1292278190967397311
    var_360 = 56;
    pri = fun_1978(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 8;
    pri = fun_1AC0(var_368)
    var_384 = 0;
    pri = fun_1B80()
    var_392 = 1;
    var_400 = 3;
    var_408 = 0;
    var_416 = 9;
    var_424 = -1292278190967397311;
    var_432 = 40;
    pri = fun_5B58(var_424, var_416, var_408, var_400, var_392)
    var_440 = -1292278190967397311;
    var_448 = 8;
    pri = fun_0718(var_440)
    var_456 = -1292278190967397311;
    var_464 = 8;
    pri = fun_0E08(var_456)
    var_472 = 0;
    var_480 = 4629390794462488166;
    var_488 = 0;
    OP_PUSH5_C 4665812177605707694, -4588992098430091264, 4673172775734482043, 4666326672081692918, 4639381748760832901
    var_496 = 4672962653564855910;
    var_504 = 1;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    pri = fun_1BB0()
    var_520 = 0;
    var_528 = 4629390794462488166;
    var_536 = 3;
    OP_PUSH5_C 4665805349638499205, -4589070911423570248, 4673175562996458455, 4666319844114484429, 4639421155257572393
    var_544 = 4672965440826832323;
    var_552 = 50;
    pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 1;
    var_568 = -1;
    var_576 = -1;
    var_584 = 3;
    var_592 = 0;
    var_600 = 1;
    var_608 = -1292278190967397311;
    var_616 = 56;
    pri = fun_1C40(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C 7326682271737126667, -1292278190967397311
    var_664 = 56;
    pri = fun_1978(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = -1292278190967397311;
    var_680 = 8;
    pri = fun_0718(var_672)
    var_688 = 1;
    var_696 = 8;
    pri = fun_1AC0(var_688)
    var_704 = 0;
    pri = fun_1B80()
    var_712 = 0;
    var_720 = 4628433779541671936;
    var_728 = 0;
    OP_PUSH5_C 4666041497248354796, -4588918211248704717, 4672965822907122975, 4666687361373626696, 4643729657541710316
    var_736 = 4672957483111426294;
    var_744 = 1;
    pri = EvCameraMove(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_752 = 0;
    pri = fun_1BB0()
    var_760 = 0;
    var_768 = 4628433779541671936;
    var_776 = 3;
    OP_PUSH5_C 4666139084402878054, 4604210043045952881, 4672966790477355418, 4666784948528149955, 4644929796473660375
    var_784 = 4672958450681658737;
    var_792 = 100;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 1;
    var_808 = 0;
    var_816 = 30;
    pri = float(var_816)
    var_824 = pri;
    var_832 = 0;
    pri = float(var_832)
    var_840 = pri;
    var_848 = 0;
    OP_PUSH4_C 4666269623920885760, 4673427637032242381, 4611686018427387904, -1292278190967397311
    var_856 = 72;
    pri = fun_04C8(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_864 = -1292278190967397311;
    var_872 = 8;
    pri = fun_0540(var_864)
    var_880 = 0;
    pri = fun_1BB0()
    var_888 = 3;
    var_896 = 1;
    pri = EvCameraEnd(var_896, var_888)
    pri = 1;
    return pri;
}
// fun_8878
fun_8878() {
    pri = 0;
    return pri;
}
// fun_8890
fun_8890() {
    pri = 0;
    return pri;
}
// fun_88A8
fun_88A8() {
    var_8 = -1292278190967397311;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 1190;
    var_32 = 8;
    pri = fun_7DC8(var_24)
    var_40 = 7927692416553760981;
    pri = VanishFlagReset(var_40)
    var_48 = 3349610369349441153;
    pri = FlagSet(var_48)
    var_56 = 6671622452888176879;
    pri = FlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_8980
fun_8980() {
    pri = 0;
    return pri;
}
// fun_8998
fun_8998() {
    pri = 0;
    return pri;
}
// fun_89B0
fun_89B0() {
    pri = 0;
    return pri;
}
// fun_89C8
fun_89C8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7F60()
    var_16 = 0;
    pri = fun_7FB8()
    var_24 = 0;
    pri = fun_7FD0()
    var_32 = 0;
    pri = fun_7FE8()
    OP_JZER lab_8AB0
    var_40 = 0;
    pri = fun_8878()
    var_48 = 0;
    pri = fun_88A8()
    var_56 = 0;
    pri = fun_8998()
    OP_JUMP lab_8AF8
// lab_8AB0
    var_8 = 0;
    pri = fun_8890()
    var_16 = 0;
    pri = fun_8980()
    var_24 = 0;
    pri = fun_89B0()
// lab_8AF8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8B20
fun_8B20() {
    var_8 = 0;
    pri = fun_7FB8()
    var_16 = 0;
    pri = fun_88A8()
    pri = 0;
    return pri;
}
