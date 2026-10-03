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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0400
fun_0400() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0478
fun_0478() {
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
// fun_04F0
fun_04F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0598
fun_0598() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    OP_JZER lab_0610
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E70(var_24)
    OP_JNZ lab_0610
    pri = 0;
    return pri;
// lab_0610
    OP_JUMP lab_0620
// lab_0620
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0680
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0620
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07B8
    pri = 0;
    return pri;
// lab_07B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07F8
// lab_07F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    OP_JNZ lab_0880
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0880
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08C8
    pri = 0;
    return pri;
// lab_08C8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0928
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
// lab_0928
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07F8
    pri = 0;
    return pri;
// lab_0870
    OP_JUMP lab_08C8
}
// fun_0970
fun_0970() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09A8
fun_09A8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09F8
    pri = 0;
    return pri;
// lab_09F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    OP_JZER lab_0B28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A50
    OP_ZERO_P_S 64
// lab_0B28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B60
    OP_CONST_S 64, 1
// lab_0B60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B98
    OP_CONST_S 72, 1
// lab_0B98
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
// lab_0A50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A78
    OP_ZERO_P_S 72
// lab_0A78
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
    OP_JUMP lab_0C38
// lab_0C38
    pri = 0;
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D88
fun_0D88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DC8
fun_0DC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0E40
fun_0E40() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EA0
fun_0EA0() {
    OP_JUMP lab_0EB8
// lab_0EB8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F48
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F38
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    pri = 0;
    return pri;
// lab_0F48
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FD8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    pri = 0;
    return pri;
// lab_0FD8
    pri = 0;
    return pri;
// lab_0FC8
    OP_JUMP lab_0FE8
// lab_0FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EB8
    pri = 0;
    return pri;
// lab_0F38
    OP_JUMP lab_0FE8
}
// fun_1028
fun_1028() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EA0(var_40)
    pri = 0;
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1110
fun_1110() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
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
// switch_1790
        case default:
        {
// switch_1790_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17D8
// lab_17D8
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
            OP_JNZ lab_1880
            var_88 = 0;
            pri = fun_1A38()
// lab_1880
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1790_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1378
                case default:
                {
// switch_1378_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13F0
// lab_13F0
                    OP_JUMP lab_17D8
                }
                case 0x0:
                {
// switch_1378_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13F0
                }
                case 0x1:
                {
// switch_1378_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13F0
                }
                case 0x2:
                {
// switch_1378_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13F0
                }
                case 0x3:
                {
// switch_1378_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13F0
                }
                case 0x4:
                {
// switch_1378_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13F0
                }
                case 0x5:
                {
// switch_1378_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13F0
                }
            }
        }
        case 0x65:
        {
// switch_1790_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1530
                case default:
                {
// switch_1530_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15A8
// lab_15A8
                    OP_JUMP lab_17D8
                }
                case 0x0:
                {
// switch_1530_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15A8
                }
                case 0x1:
                {
// switch_1530_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15A8
                }
                case 0x2:
                {
// switch_1530_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15A8
                }
                case 0x3:
                {
// switch_1530_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15A8
                }
                case 0x4:
                {
// switch_1530_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15A8
                }
                case 0x5:
                {
// switch_1530_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15A8
                }
            }
        }
        case 0x66:
        {
// switch_1790_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16E8
                case default:
                {
// switch_16E8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1760
// lab_1760
                    OP_JUMP lab_17D8
                }
                case 0x0:
                {
// switch_16E8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1760
                }
                case 0x1:
                {
// switch_16E8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1760
                }
                case 0x2:
                {
// switch_16E8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1760
                }
                case 0x3:
                {
// switch_16E8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1760
                }
                case 0x4:
                {
// switch_16E8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1760
                }
                case 0x5:
                {
// switch_16E8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1760
                }
            }
        }
    }
}
// fun_1898
fun_1898() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0738(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1940
    pri = 1;
    return pri;
// lab_1940
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1988
fun_1988() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1898(var_8)
    arg_2 = pri;
// lab_19D8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1178(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A38
fun_1A38() {
    OP_JUMP lab_1A50
// lab_1A50
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A90
    pri = 0;
    return pri;
// lab_1A90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A50
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    var_8 = 0;
    pri = fun_1A38()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1B80
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1B80
    pri = 0;
    return pri;
}
// fun_1B90
fun_1B90() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    OP_JUMP lab_1BD8
// lab_1BD8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1C10
    pri = 0;
    return pri;
// lab_1C10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BD8
    pri = 0;
    return pri;
}
// fun_1C50
fun_1C50() {
    pri = arg_6;
    OP_JNZ lab_1C88
    var_8 = 0;
    pri = fun_0C48()
// lab_1C88
    pri = arg_1;
    switch (pri) {
// switch_31F0
        case default:
        {
// switch_31F0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3540
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3540
            pri = 1;
            OP_JUMP lab_3548
// lab_3540
            pri = 0;
// lab_3548
            OP_JZER lab_36A0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
            OP_JUMP lab_3700
// lab_36A0
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
// lab_3700
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3760
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_37C0
// lab_3760
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_37C0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_37C0
            pri = arg_2;
            OP_JZER lab_3800
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3800
            var_8 = 0;
            pri = fun_0C88()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_31F0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1:
        {
// switch_31F0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x2:
        {
// switch_31F0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x3:
        {
// switch_31F0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x4:
        {
// switch_31F0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x5:
        {
// switch_31F0_case_0x5
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0x6:
        {
// switch_31F0_case_0x6
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0x7:
        {
// switch_31F0_case_0x7
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0x8:
        {
// switch_31F0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x9:
        {
// switch_31F0_case_0x9
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0xa:
        {
// switch_31F0_case_0xa
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0xb:
        {
// switch_31F0_case_0xb
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0xc:
        {
// switch_31F0_case_0xc
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0xd:
        {
// switch_31F0_case_0xd
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0xe:
        {
// switch_31F0_case_0xe
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0xf:
        {
// switch_31F0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x10:
        {
// switch_31F0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x11:
        {
// switch_31F0_case_0x11
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0x12:
        {
// switch_31F0_case_0x12
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0x13:
        {
// switch_31F0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x14:
        {
// switch_31F0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x15:
        {
// switch_31F0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x16:
        {
// switch_31F0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x17:
        {
// switch_31F0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x18:
        {
// switch_31F0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x19:
        {
// switch_31F0_case_0x19
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1a:
        {
// switch_31F0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06C0(var_48, var_40)
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
            pri = fun_09A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1b:
        {
// switch_31F0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06C0(var_48, var_40)
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
            pri = fun_09A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1c:
        {
// switch_31F0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06C0(var_48, var_40)
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
            pri = fun_09A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1d:
        {
// switch_31F0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1e:
        {
// switch_31F0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x1f:
        {
// switch_31F0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x20:
        {
// switch_31F0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x21:
        {
// switch_31F0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x22:
        {
// switch_31F0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x23:
        {
// switch_31F0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x24:
        {
// switch_31F0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x25:
        {
// switch_31F0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x26:
        {
// switch_31F0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x27:
        {
// switch_31F0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x28:
        {
// switch_31F0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
        case 0x29:
        {
// switch_31F0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F0_case_default
        }
    }
}
// fun_3830
fun_3830() {
    pri = arg_5;
    OP_JNZ lab_3868
    var_8 = 0;
    pri = fun_0C48()
// lab_3868
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_38B8
    OP_CONST_S -8, -1
// lab_38B8
    pri = arg_1;
    switch (pri) {
// switch_5370
        case default:
        {
// switch_5370_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5818
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0738(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5818
            pri = 1;
            OP_JUMP lab_5820
// lab_5818
            pri = 0;
// lab_5820
            OP_JZER lab_5870
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5AC8
// lab_5870
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_58D8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_58D8
            pri = 1;
            OP_JUMP lab_58E0
// lab_58D8
            pri = 0;
// lab_58E0
            OP_JZER lab_5A68
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
            OP_JUMP lab_5AC8
// lab_5A68
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
// lab_5AC8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5B38
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5B38
            var_8 = 0;
            pri = fun_0C88()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5370_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x1:
        {
// switch_5370_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x2:
        {
// switch_5370_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x3:
        {
// switch_5370_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x4:
        {
// switch_5370_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x5:
        {
// switch_5370_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0970(var_40)
            OP_JUMP switch_5370_case_default
        }
        case 0x6:
        {
// switch_5370_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x7:
        {
// switch_5370_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x8:
        {
// switch_5370_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x9:
        {
// switch_5370_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0xa:
        {
// switch_5370_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0xb:
        {
// switch_5370_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0xc:
        {
// switch_5370_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0xd:
        {
// switch_5370_case_0xd
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0xe:
        {
// switch_5370_case_0xe
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0xf:
        {
// switch_5370_case_0xf
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x10:
        {
// switch_5370_case_0x10
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x11:
        {
// switch_5370_case_0x11
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x12:
        {
// switch_5370_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x13:
        {
// switch_5370_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x14:
        {
// switch_5370_case_0x14
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x15:
        {
// switch_5370_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x16:
        {
// switch_5370_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x17:
        {
// switch_5370_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x18:
        {
// switch_5370_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x19:
        {
// switch_5370_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x1a:
        {
// switch_5370_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x1b:
        {
// switch_5370_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x1c:
        {
// switch_5370_case_0x1c
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x1d:
        {
// switch_5370_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x1e:
        {
// switch_5370_case_0x1e
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x1f:
        {
// switch_5370_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x20:
        {
// switch_5370_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x21:
        {
// switch_5370_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x22:
        {
// switch_5370_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x23:
        {
// switch_5370_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x24:
        {
// switch_5370_case_0x24
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x25:
        {
// switch_5370_case_0x25
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x26:
        {
// switch_5370_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x27:
        {
// switch_5370_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x28:
        {
// switch_5370_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x29:
        {
// switch_5370_case_0x29
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x2a:
        {
// switch_5370_case_0x2a
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x2b:
        {
// switch_5370_case_0x2b
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x2c:
        {
// switch_5370_case_0x2c
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x2d:
        {
// switch_5370_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x2e:
        {
// switch_5370_case_0x2e
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x2f:
        {
// switch_5370_case_0x2f
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x30:
        {
// switch_5370_case_0x30
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x31:
        {
// switch_5370_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x32:
        {
// switch_5370_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x33:
        {
// switch_5370_case_0x33
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x34:
        {
// switch_5370_case_0x34
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x35:
        {
// switch_5370_case_0x35
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x36:
        {
// switch_5370_case_0x36
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x37:
        {
// switch_5370_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x38:
        {
// switch_5370_case_0x38
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5370_case_default
        }
        case 0x39:
        {
// switch_5370_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x3a:
        {
// switch_5370_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x3b:
        {
// switch_5370_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x3c:
        {
// switch_5370_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x3d:
        {
// switch_5370_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
        case 0x3e:
        {
// switch_5370_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            OP_JUMP switch_5370_case_default
        }
    }
}
// fun_5B68
fun_5B68() {
    pri = arg_4;
    OP_JNZ lab_5BA0
    var_8 = 0;
    pri = fun_0C48()
// lab_5BA0
    pri = arg_1;
    switch (pri) {
// switch_6F78
        case default:
        {
// switch_6F78_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E40(var_264)
            OP_JZER lab_7540
            pri = arg_3;
            switch (pri) {
// switch_74E8
                case default:
                {
// switch_74E8_case_default
                    OP_JUMP lab_77F8
// lab_77F8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7868
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7868
                    var_8 = 0;
                    pri = fun_0C88()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_74E8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74E8_case_default
                }
                case 0x2:
                {
// switch_74E8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74E8_case_default
                }
                case 0x3:
                {
// switch_74E8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_74E8_case_default
                }
            }
// lab_7540
            pri = arg_1;
            OP_JZER lab_7590
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7590
            pri = 0;
            OP_JUMP lab_7598
// lab_7590
            pri = 1;
// lab_7598
            OP_JZER lab_7600
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0738(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7600
            pri = 1;
            OP_JUMP lab_7608
// lab_7600
            pri = 0;
// lab_7608
            OP_JZER lab_7658
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_77F8
// lab_7658
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_76C0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_77F8
// lab_76C0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
// switch_6F78_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1:
        {
// switch_6F78_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2:
        {
// switch_6F78_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x3:
        {
// switch_6F78_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x4:
        {
// switch_6F78_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x5:
        {
// switch_6F78_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0970(var_40)
            OP_JUMP switch_6F78_case_default
        }
        case 0x6:
        {
// switch_6F78_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x7:
        {
// switch_6F78_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x8:
        {
// switch_6F78_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x9:
        {
// switch_6F78_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0xa:
        {
// switch_6F78_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0xb:
        {
// switch_6F78_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0xc:
        {
// switch_6F78_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0xd:
        {
// switch_6F78_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0xe:
        {
// switch_6F78_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0xf:
        {
// switch_6F78_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x10:
        {
// switch_6F78_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x11:
        {
// switch_6F78_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x12:
        {
// switch_6F78_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x13:
        {
// switch_6F78_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x14:
        {
// switch_6F78_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x15:
        {
// switch_6F78_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x16:
        {
// switch_6F78_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x17:
        {
// switch_6F78_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x18:
        {
// switch_6F78_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x19:
        {
// switch_6F78_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1a:
        {
// switch_6F78_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1b:
        {
// switch_6F78_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1c:
        {
// switch_6F78_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1d:
        {
// switch_6F78_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1e:
        {
// switch_6F78_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x1f:
        {
// switch_6F78_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x20:
        {
// switch_6F78_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x21:
        {
// switch_6F78_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x22:
        {
// switch_6F78_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x23:
        {
// switch_6F78_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x24:
        {
// switch_6F78_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x25:
        {
// switch_6F78_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x26:
        {
// switch_6F78_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x27:
        {
// switch_6F78_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x28:
        {
// switch_6F78_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x29:
        {
// switch_6F78_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2a:
        {
// switch_6F78_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2b:
        {
// switch_6F78_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2c:
        {
// switch_6F78_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2d:
        {
// switch_6F78_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2e:
        {
// switch_6F78_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x2f:
        {
// switch_6F78_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x30:
        {
// switch_6F78_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x31:
        {
// switch_6F78_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x32:
        {
// switch_6F78_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x33:
        {
// switch_6F78_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x34:
        {
// switch_6F78_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x35:
        {
// switch_6F78_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x36:
        {
// switch_6F78_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x37:
        {
// switch_6F78_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x38:
        {
// switch_6F78_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x39:
        {
// switch_6F78_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x3a:
        {
// switch_6F78_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x3b:
        {
// switch_6F78_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x3c:
        {
// switch_6F78_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x3d:
        {
// switch_6F78_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
        case 0x3e:
        {
// switch_6F78_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            OP_JUMP switch_6F78_case_default
        }
    }
}
// fun_7898
fun_7898() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7998
        case default:
        {
// switch_7998_case_default
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
// switch_7998_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7998_case_default
        }
        case 0x1:
        {
// switch_7998_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7998_case_default
        }
        case 0x2:
        {
// switch_7998_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7998_case_default
        }
        case 0x3:
        {
// switch_7998_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7998_case_default
        }
    }
}
// fun_7A58
fun_7A58() {
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
    pri = fun_1988(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1A38()
    pri = 0;
    return pri;
}
// fun_7AF0
fun_7AF0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7898(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7A58(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7B98
fun_7B98() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7BE8
// lab_7BE8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7C60
    OP_JUMP lab_7C90
// lab_7C60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7BE8
// lab_7C90
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7D18
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5B68(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1110(var_56)
// lab_7D18
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7D80
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D88(var_24, var_16)
// lab_7D80
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D88(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7E40
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0770(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_04F0(var_88, var_80, var_72, var_64, var_56)
// lab_7E40
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7E80
    pri = 0;
    return pri;
// lab_7E80
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7FC8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_06C0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7F90
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7FC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0598(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0598(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    pri = 0;
    return pri;
// lab_7F90
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D88(var_16, var_8)
}
// fun_8050
fun_8050() {
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
    pri = fun_7AF0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1AD0(var_112)
    var_128 = 0;
    pri = fun_1B90()
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
    pri = fun_7B98(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_81C8
fun_81C8() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8250
// lab_8250
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_83D0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_83C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8310
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8310
    pri = 0;
    OP_JUMP lab_8318
// lab_83D0
    pri = 0;
    return pri;
// lab_83C0
    OP_JUMP lab_8248
// lab_8248
    OP_INC_P_S -936
// lab_8310
    pri = 1;
// lab_8318
    OP_JZER lab_8390
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8388
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8390
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8388
}
// fun_83F0
fun_83F0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8488
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_10E8()
// lab_8488
    pri = arg_4;
    OP_JZER lab_84C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1140(var_8)
// lab_84C0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8518
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8518
    pri = 0;
    OP_JUMP lab_8520
// lab_8518
    pri = 1;
// lab_8520
    OP_JZER lab_85E8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_85E8
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_85C0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1028(var_32, var_24)
    OP_JUMP lab_85E8
// lab_85E8
    pri = arg_2;
    OP_JZER lab_86C0
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_8690
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D88(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0440(var_40)
    OP_JUMP lab_86C0
// lab_86C0
    pri = arg_3;
    OP_JZER lab_86F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_10B0(var_8)
// lab_86F8
    pri = 0;
    return pri;
// lab_8690
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D88(var_16, var_8)
// lab_85C0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1028(var_16, var_8)
}
// fun_8708
fun_8708() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_81C8(var_24)
    pri = 0;
    return pri;
}
// fun_8770
fun_8770() {
    pri = g_mode;
    switch (pri) {
// switch_8858
        case default:
        {
// switch_8858_case_default
            pri = CommandNOP()
            OP_JUMP lab_88B0
// lab_88B0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8858_case_0x0
            var_8 = 0;
            pri = fun_88C0()
            OP_JUMP lab_88B0
        }
        case 0x38caed2aeffa5ff0:
        {
// switch_8858_case_0x38caed2aeffa5ff0
            var_8 = 0;
            pri = fun_9AD8()
            OP_JUMP lab_88B0
        }
        case 0x602f6b278cd1fe54:
        {
// switch_8858_case_0x602f6b278cd1fe54
            var_8 = 0;
            pri = fun_9BC8()
            OP_JUMP lab_88B0
        }
        case 0x7a057dd668b0e982:
        {
// switch_8858_case_0x7a057dd668b0e982
            var_8 = 0;
            pri = fun_9C10()
            OP_JUMP lab_88B0
        }
    }
}
// fun_88C0
fun_88C0() {
    pri = 0;
    return pri;
}
// fun_88D8
fun_88D8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_83F0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8930
fun_8930() {
    pri = 0;
    return pri;
}
// fun_8948
fun_8948() {
    pri = 0;
    return pri;
}
// fun_8960
fun_8960() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 2;
    OP_PUSH5_C 4661655666311435387, 4637198910316441764, 4673109375145245409, 4662324411273681306, 4642203535402357228
    var_48 = 4673013371287466148;
    var_56 = 35;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C 8802641224559852288, -8861403721397965071
    var_96 = 48;
    pri = fun_0540(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C -8861403721397965071, 8802641224559852288
    var_136 = 48;
    pri = fun_0540(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_0598(var_144)
    var_160 = -8861403721397965071;
    var_168 = 8;
    pri = fun_0598(var_160)
    var_176 = 1;
    var_184 = 1;
    var_192 = -1;
    var_200 = -1;
    var_208 = 0;
    var_216 = 7;
    var_224 = -8861403721397965071;
    var_232 = 56;
    pri = fun_3830(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 0;
    pri = fun_1BC0()
    var_248 = 0;
    var_256 = 3;
    var_264 = 0;
    var_272 = 101;
    var_280 = -1;
    OP_PUSH2_C -8438093086575146607, -8861403721397965071
    var_288 = 56;
    pri = fun_1988(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_1AD0(var_296)
    var_312 = 0;
    pri = fun_1B90()
    var_320 = 1;
    var_328 = 3;
    var_336 = 0;
    var_344 = 7;
    var_352 = -8861403721397965071;
    var_360 = 40;
    pri = fun_5B68(var_352, var_344, var_336, var_328, var_320)
    var_368 = -8861403721397965071;
    var_376 = 8;
    pri = fun_0770(var_368)
    var_384 = 0;
    var_392 = 4631952216750555136;
    var_400 = 2;
    OP_PUSH5_C 4661772698329095864, 4648978198287131607, 4673099957828153508, 4662036702066041160, 4648330629918836654
    var_408 = 4673061755296646431;
    var_416 = 75;
    pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 1;
    var_432 = 0;
    var_440 = 4641240890982006784;
    var_448 = 0;
    var_456 = 0;
    var_464 = 3485;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 27449;
    pri = float(var_480)
    var_488 = pri;
    OP_PUSH2_C 4611686018427387904, -8861403721397965071
    var_496 = 72;
    pri = fun_0478(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 0;
    pri = fun_1BC0()
    var_512 = 1;
    var_520 = 1;
    var_528 = 150;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 3956;
    pri = float(var_544)
    var_552 = pri;
    var_560 = 27188;
    pri = float(var_560)
    var_568 = pri;
    var_576 = 8802641224559852288;
    var_584 = 48;
    pri = fun_03A8(var_576, var_568, var_560, var_552, var_544, var_536)
    var_592 = 0;
    var_600 = 4631952216750555136;
    var_608 = 0;
    OP_PUSH5_C 4659955194613265859, 4630314032386099118, 4673106736317338747, 4659755523301661737, 4649926856919576740
    var_616 = 4673302353179815444;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_1BC0()
    var_640 = -8861403721397965071;
    var_648 = 8;
    pri = fun_0598(var_640)
    var_656 = 1;
    var_664 = 1;
    var_672 = -1;
    var_680 = 3114;
    pri = float(var_680)
    var_688 = pri;
    var_696 = 700;
    pri = float(var_696)
    var_704 = pri;
    var_712 = 27663;
    pri = float(var_712)
    var_720 = pri;
    var_728 = -8861403721397965071;
    var_736 = 56;
    pri = fun_0CC8(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 10;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 6;
    var_768 = -8861403721397965071;
    var_776 = 16;
    pri = fun_0DC8(var_768, var_760)
    var_784 = 30;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = -8861403721397965071;
    var_808 = 8;
    pri = fun_0E08(var_800)
    var_816 = 1;
    var_824 = -4322019425242510876;
    var_832 = 16;
    pri = fun_0400(var_824, var_816)
    var_840 = 0;
    var_848 = 4631952216750555136;
    var_856 = 0;
    OP_PUSH5_C 4662222343609274860, 4649923426443298079, 4673207421345873265, 4666406001845636956, 4647729768804489626
    var_864 = 4673083888465713562;
    var_872 = 1;
    pri = EvCameraMove(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_880 = 0;
    pri = fun_1BC0()
    var_888 = 0;
    var_896 = 4631952216750555136;
    var_904 = 2;
    OP_PUSH5_C 4661997757364185334, 4649923426443298079, 4673054833870949581, 4665972222518246769, 4640961175223900570
    var_912 = 4672454725922067579;
    var_920 = 1500;
    pri = EvCameraMove(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 100;
    var_960 = -1;
    OP_PUSH2_C -8438096385110031240, -8861403721397965071
    var_968 = 56;
    pri = fun_1988(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_1AD0(var_976)
    var_992 = 0;
    pri = fun_1B90()
    var_1000 = 1;
    var_1008 = 1;
    var_1016 = 0;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = 3132;
    pri = float(var_1032)
    var_1040 = pri;
    var_1048 = 27310;
    pri = float(var_1048)
    var_1056 = pri;
    var_1064 = -8861403721397965071;
    var_1072 = 48;
    pri = fun_03A8(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1080 = 1;
    var_1088 = 1;
    var_1096 = 150;
    pri = float(var_1096)
    var_1104 = pri;
    var_1112 = 3956;
    pri = float(var_1112)
    var_1120 = pri;
    var_1128 = 27188;
    pri = float(var_1128)
    var_1136 = pri;
    var_1144 = 8802641224559852288;
    var_1152 = 48;
    pri = fun_03A8(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    var_1176 = 1;
    var_1184 = 0;
    var_1192 = 4641240890982006784;
    var_1200 = 0;
    var_1208 = 0;
    var_1216 = 3726;
    pri = float(var_1216)
    var_1224 = pri;
    var_1232 = 27320;
    pri = float(var_1232)
    var_1240 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_1248 = 72;
    pri = fun_0478(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1256 = 15;
    var_1264 = 8;
    pri = fun_0060(var_1256)
    var_1272 = 1;
    var_1280 = 8802641224559852288;
    var_1288 = 16;
    pri = fun_0400(var_1280, var_1272)
    var_1296 = 1;
    var_1304 = -8861403721397965071;
    var_1312 = 16;
    pri = fun_0400(var_1304, var_1296)
    var_1320 = 1;
    var_1328 = 6862441333535257183;
    var_1336 = 16;
    pri = fun_0400(var_1328, var_1320)
    var_1344 = 1;
    var_1352 = 6862442433046885394;
    var_1360 = 16;
    pri = fun_0400(var_1352, var_1344)
    var_1368 = 1;
    var_1376 = -7412997828454362149;
    var_1384 = 16;
    pri = fun_0400(var_1376, var_1368)
    var_1392 = 1;
    var_1400 = -4026805738107167684;
    var_1408 = 16;
    pri = fun_0400(var_1400, var_1392)
    var_1416 = 1;
    var_1424 = 1200969391715372989;
    var_1432 = 16;
    pri = fun_0400(var_1424, var_1416)
    var_1440 = 1;
    var_1448 = 1630847891595543982;
    var_1456 = 16;
    pri = fun_0400(var_1448, var_1440)
    var_1464 = 0;
    var_1472 = -4322019425242510876;
    var_1480 = 16;
    pri = fun_0400(var_1472, var_1464)
    var_1488 = 0;
    var_1496 = 4631952216750555136;
    var_1504 = 0;
    OP_PUSH5_C 4660998982991746171, 4650240525596748677, 4673174463484830679, 4661428034419136922, 4650820364048772628
    var_1512 = 4673126717192394506;
    var_1520 = 1;
    pri = EvCameraMove(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1528 = 8802641224559852288;
    var_1536 = 8;
    pri = fun_0598(var_1528)
    var_1544 = 1;
    var_1552 = 1;
    var_1560 = -1;
    OP_PUSH2_C -8861403721397965071, 8802641224559852288
    var_1568 = 40;
    pri = fun_0D30(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = 1;
    var_1584 = -1;
    var_1592 = -1;
    var_1600 = 3;
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = -8861403721397965071;
    var_1632 = 56;
    pri = fun_1C50(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = 0;
    var_1648 = 3;
    var_1656 = 0;
    var_1664 = 100;
    var_1672 = -1;
    OP_PUSH2_C -8438095285598403029, -8861403721397965071
    var_1680 = 56;
    pri = fun_1988(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_1AD0(var_1688)
    var_1704 = 0;
    pri = fun_1B90()
    var_1712 = -8861403721397965071;
    var_1720 = 8;
    pri = fun_0770(var_1712)
    var_1728 = -1;
    var_1736 = 8802641224559852288;
    var_1744 = 16;
    pri = fun_0D88(var_1736, var_1728)
    var_1752 = 0;
    var_1760 = 8802641224559852288;
    var_1768 = 16;
    pri = fun_0400(var_1760, var_1752)
    var_1776 = 0;
    var_1784 = -8861403721397965071;
    var_1792 = 16;
    pri = fun_0400(var_1784, var_1776)
    var_1800 = 0;
    var_1808 = 6862441333535257183;
    var_1816 = 16;
    pri = fun_0400(var_1808, var_1800)
    var_1824 = 0;
    var_1832 = 6862442433046885394;
    var_1840 = 16;
    pri = fun_0400(var_1832, var_1824)
    var_1848 = 0;
    var_1856 = -7412997828454362149;
    var_1864 = 16;
    pri = fun_0400(var_1856, var_1848)
    var_1872 = 0;
    var_1880 = -4026805738107167684;
    var_1888 = 16;
    pri = fun_0400(var_1880, var_1872)
    var_1896 = 0;
    var_1904 = 1200969391715372989;
    var_1912 = 16;
    pri = fun_0400(var_1904, var_1896)
    var_1920 = 0;
    var_1928 = 1630847891595543982;
    var_1936 = 16;
    pri = fun_0400(var_1928, var_1920)
    var_1944 = 3;
    var_1952 = 30;
    pri = EvCameraEnd(var_1952, var_1944)
    pri = 0;
    return pri;
}
// fun_9A48
fun_9A48() {
    pri = 0;
    return pri;
}
// fun_9A60
fun_9A60() {
    var_8 = 1675;
    var_16 = 8;
    pri = fun_8708(var_8)
    var_24 = 5901625555322344598;
    pri = VanishFlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_9AC0
fun_9AC0() {
    pri = 0;
    return pri;
}
// fun_9AD8
fun_9AD8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_88D8()
    var_16 = 0;
    pri = fun_8930()
    var_24 = 0;
    pri = fun_8948()
    var_32 = 0;
    pri = fun_8960()
    var_40 = 0;
    pri = fun_9A48()
    var_48 = 0;
    pri = fun_9A60()
    var_56 = 0;
    pri = fun_9AC0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9BC8
fun_9BC8() {
    var_8 = 0;
    pri = fun_8930()
    var_16 = 0;
    pri = fun_9A60()
    pri = 0;
    return pri;
}
// fun_9C10
fun_9C10() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -8438095285598403029;
    var_88 = 80;
    pri = fun_8050(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
