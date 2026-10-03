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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_05B8()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0618
fun_0618() {
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
// fun_0690
fun_0690() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06E8
fun_06E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_0760
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E88(var_24)
    OP_JNZ lab_0760
    pri = 0;
    return pri;
// lab_0760
    OP_JUMP lab_0770
// lab_0770
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_07D0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_07D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0770
    pri = 0;
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0848
fun_0848() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0908
    pri = 0;
    return pri;
// lab_0908
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0948
// lab_0948
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JNZ lab_09D0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_09C0
    pri = 0;
    return pri;
// lab_09D0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A18
    pri = 0;
    return pri;
// lab_0A18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AC0(var_8)
    pri = 0;
    return pri;
// lab_0A78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0948
    pri = 0;
    return pri;
// lab_09C0
    OP_JUMP lab_0A18
}
// fun_0AC0
fun_0AC0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B48
    pri = 0;
    return pri;
// lab_0B48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E58(var_8)
    OP_JZER lab_0C78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA0
    OP_ZERO_P_S 64
// lab_0C78
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB0
    OP_CONST_S 64, 1
// lab_0CB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE8
    OP_CONST_S 72, 1
// lab_0CE8
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
// lab_0BA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC8
    OP_ZERO_P_S 72
// lab_0BC8
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
    OP_JUMP lab_0D88
// lab_0D88
    pri = 0;
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0EB8
fun_0EB8() {
    OP_JUMP lab_0ED0
// lab_0ED0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0F60
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0F50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    pri = 0;
    return pri;
// lab_0F60
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    pri = 0;
    return pri;
// lab_0FF0
    pri = 0;
    return pri;
// lab_0FE0
    OP_JUMP lab_1000
// lab_1000
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0ED0
    pri = 0;
    return pri;
// lab_0F50
    OP_JUMP lab_1000
}
// fun_1040
fun_1040() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08C0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0EB8(var_40)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1100
fun_1100() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
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
// switch_1778
        case default:
        {
// switch_1778_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_17C0
// lab_17C0
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
            OP_JNZ lab_1868
            var_88 = 0;
            pri = fun_1A20()
// lab_1868
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1778_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1360
                case default:
                {
// switch_1360_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13D8
// lab_13D8
                    OP_JUMP lab_17C0
                }
                case 0x0:
                {
// switch_1360_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_13D8
                }
                case 0x1:
                {
// switch_1360_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_13D8
                }
                case 0x2:
                {
// switch_1360_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_13D8
                }
                case 0x3:
                {
// switch_1360_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_13D8
                }
                case 0x4:
                {
// switch_1360_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_13D8
                }
                case 0x5:
                {
// switch_1360_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_13D8
                }
            }
        }
        case 0x65:
        {
// switch_1778_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1518
                case default:
                {
// switch_1518_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1590
// lab_1590
                    OP_JUMP lab_17C0
                }
                case 0x0:
                {
// switch_1518_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1590
                }
                case 0x1:
                {
// switch_1518_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1590
                }
                case 0x2:
                {
// switch_1518_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1590
                }
                case 0x3:
                {
// switch_1518_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1590
                }
                case 0x4:
                {
// switch_1518_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1590
                }
                case 0x5:
                {
// switch_1518_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1590
                }
            }
        }
        case 0x66:
        {
// switch_1778_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_16D0
                case default:
                {
// switch_16D0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1748
// lab_1748
                    OP_JUMP lab_17C0
                }
                case 0x0:
                {
// switch_16D0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1748
                }
                case 0x1:
                {
// switch_16D0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1748
                }
                case 0x2:
                {
// switch_16D0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1748
                }
                case 0x3:
                {
// switch_16D0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1748
                }
                case 0x4:
                {
// switch_16D0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1748
                }
                case 0x5:
                {
// switch_16D0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1748
                }
            }
        }
    }
}
// fun_1880
fun_1880() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0888(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1928
    pri = 1;
    return pri;
// lab_1928
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1970
fun_1970() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1880(var_8)
    arg_2 = pri;
// lab_19C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1160(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A20
fun_1A20() {
    OP_JUMP lab_1A38
// lab_1A38
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A78
    pri = 0;
    return pri;
// lab_1A78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A38
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = 0;
    pri = fun_1A20()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1B68
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1B68
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    pri = arg_6;
    OP_JNZ lab_1BE0
    var_8 = 0;
    pri = fun_0D98()
// lab_1BE0
    pri = arg_1;
    switch (pri) {
// switch_3148
        case default:
        {
// switch_3148_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3498
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3498
            pri = 1;
            OP_JUMP lab_34A0
// lab_3498
            pri = 0;
// lab_34A0
            OP_JZER lab_35F8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0888(var_24, var_16)
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
            OP_JUMP lab_3658
// lab_35F8
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
// lab_3658
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_36B8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3718
// lab_36B8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3718
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3718
            pri = arg_2;
            OP_JZER lab_3758
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3758
            var_8 = 0;
            pri = fun_0DD8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3148_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x1:
        {
// switch_3148_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x2:
        {
// switch_3148_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x3:
        {
// switch_3148_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x4:
        {
// switch_3148_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x5:
        {
// switch_3148_case_0x5
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0x6:
        {
// switch_3148_case_0x6
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0x7:
        {
// switch_3148_case_0x7
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0x8:
        {
// switch_3148_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x9:
        {
// switch_3148_case_0x9
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0xa:
        {
// switch_3148_case_0xa
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0xb:
        {
// switch_3148_case_0xb
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0xc:
        {
// switch_3148_case_0xc
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0xd:
        {
// switch_3148_case_0xd
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0xe:
        {
// switch_3148_case_0xe
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0xf:
        {
// switch_3148_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x10:
        {
// switch_3148_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x11:
        {
// switch_3148_case_0x11
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0x12:
        {
// switch_3148_case_0x12
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0x13:
        {
// switch_3148_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x14:
        {
// switch_3148_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x15:
        {
// switch_3148_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x16:
        {
// switch_3148_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x17:
        {
// switch_3148_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x18:
        {
// switch_3148_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x19:
        {
// switch_3148_case_0x19
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
            pri = fun_0AF8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3148_case_default
        }
        case 0x1a:
        {
// switch_3148_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0848(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0810(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3148_case_default
        }
        case 0x1b:
        {
// switch_3148_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0848(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0810(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3148_case_default
        }
        case 0x1c:
        {
// switch_3148_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0848(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0810(var_48, var_40)
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
            pri = fun_0AF8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3148_case_default
        }
        case 0x1d:
        {
// switch_3148_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x1e:
        {
// switch_3148_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x1f:
        {
// switch_3148_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x20:
        {
// switch_3148_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x21:
        {
// switch_3148_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x22:
        {
// switch_3148_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x23:
        {
// switch_3148_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x24:
        {
// switch_3148_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x25:
        {
// switch_3148_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x26:
        {
// switch_3148_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x27:
        {
// switch_3148_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x28:
        {
// switch_3148_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
        case 0x29:
        {
// switch_3148_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3148_case_default
        }
    }
}
// fun_3788
fun_3788() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3998(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8440;
    OP_ADDR_ALT -256
    OP_MOVS 56
    pri = 0;
    OP_ADDR_ALT -384
    OP_FILL 128
    OP_PUSH_P_ADR -384
    pri = arg_1;
    OP_ADD_P_C 1
    var_416 = pri;
    pri = NumericToString(var_416, var_408)
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -384
    var_424 = 8496;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8512;
    OP_PUSH_P_ADR -384
    pri = ConcatString(var_432, var_424, var_416)
    OP_PUSH_P_ADR -256
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -256
    pri = ConcatString(var_432, var_424, var_416)
    var_440 = 0;
    OP_PUSH_P_ADR -256
    var_448 = arg_0;
    pri = AddParallelCommandMonitorState_(var_448, var_440, var_432)
    pri = arg_2;
    OP_JZER lab_3980
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3980
    pri = 0;
    return pri;
}
// fun_3998
fun_3998() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0848(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_39E0
fun_39E0() {
    pri = 8664;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_3A68
// lab_3A68
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_3BE8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_3BD8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_3B28
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_3B28
    pri = 0;
    OP_JUMP lab_3B30
// lab_3BE8
    pri = 0;
    return pri;
// lab_3BD8
    OP_JUMP lab_3A60
// lab_3A60
    OP_INC_P_S -936
// lab_3B28
    pri = 1;
// lab_3B30
    OP_JZER lab_3BA8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_3BA0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_3BA8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_3BA0
}
// fun_3C08
fun_3C08() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_3CA0
    var_8 = 1;
    var_16 = 0;
    var_24 = 9584;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1100()
// lab_3CA0
    pri = arg_4;
    OP_JZER lab_3CD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1128(var_8)
// lab_3CD8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_3D30
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_3D30
    pri = 0;
    OP_JUMP lab_3D38
// lab_3D30
    pri = 1;
// lab_3D38
    OP_JZER lab_3E00
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_3E00
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_3DD8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1040(var_32, var_24)
    OP_JUMP lab_3E00
// lab_3E00
    pri = arg_2;
    OP_JZER lab_3ED8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_3EA8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E18(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05E0(var_40)
    OP_JUMP lab_3ED8
// lab_3ED8
    pri = arg_3;
    OP_JZER lab_3F10
    var_8 = 1;
    var_16 = 8;
    pri = fun_10C8(var_8)
// lab_3F10
    pri = 0;
    return pri;
// lab_3EA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E18(var_16, var_8)
// lab_3DD8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
}
// fun_3F20
fun_3F20() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_39E0(var_24)
    pri = 0;
    return pri;
}
// fun_3F88
fun_3F88() {
    pri = g_mode;
    switch (pri) {
// switch_4048
        case default:
        {
// switch_4048_case_default
            pri = CommandNOP()
            OP_JUMP lab_4090
// lab_4090
            pri = 0;
            return pri;
        }
        case 0x946bc922062119f3:
        {
// switch_4048_case_0x946bc922062119f3
            var_8 = 0;
            pri = fun_4930()
            OP_JUMP lab_4090
        }
        case 0x0:
        {
// switch_4048_case_0x0
            var_8 = 0;
            pri = fun_40A0()
            OP_JUMP lab_4090
        }
        case 0x76baef1e7be72bef:
        {
// switch_4048_case_0x76baef1e7be72bef
            var_8 = 0;
            pri = fun_4A20()
            OP_JUMP lab_4090
        }
    }
}
// fun_40A0
fun_40A0() {
    pri = 0;
    return pri;
}
// fun_40B8
fun_40B8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_3C08(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4110
fun_4110() {
    pri = 0;
    return pri;
}
// fun_4128
fun_4128() {
    pri = 0;
    return pri;
}
// fun_4140
fun_4140() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_56 = 48;
    pri = fun_0690(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C 8802641224559852288, -1655053127185566619
    var_96 = 48;
    pri = fun_0690(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = -1655053127185566619;
    var_112 = 8;
    pri = fun_06E8(var_104)
    var_120 = 8802641224559852288;
    var_128 = 8;
    pri = fun_06E8(var_120)
    var_136 = 60;
    var_144 = 3;
    OP_PUSH2_C 4607182418800017408, -1655053127185566619
    var_152 = 45;
    pri = EvCameraMoveOffsetChr(var_152, var_144, var_136, var_128, var_120)
    var_160 = 9632;
    pri = SoundPostEvent(var_160)
    var_168 = 0;
    var_176 = 3;
    var_184 = -1655053127185566619;
    var_192 = 24;
    pri = fun_3788(var_184, var_176, var_168)
    var_200 = 15;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    OP_PUSH2_C -5629408619266630304, -1655053127185566619
    var_256 = 56;
    pri = fun_1970(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1AB8(var_264)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    OP_PUSH2_C -5629405320731745671, -1655053127185566619
    var_320 = 56;
    pri = fun_1970(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_1AB8(var_328)
    var_344 = 0;
    var_352 = 0;
    var_360 = -1655053127185566619;
    var_368 = 24;
    pri = fun_3788(var_360, var_352, var_344)
    var_376 = 0;
    var_384 = 3;
    var_392 = 0;
    var_400 = 100;
    var_408 = -1;
    OP_PUSH2_C -5629406420243373882, -1655053127185566619
    var_416 = 56;
    pri = fun_1970(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1AB8(var_424)
    var_440 = 1;
    var_448 = -1;
    var_456 = -1;
    var_464 = 3;
    var_472 = 0;
    var_480 = 1;
    var_488 = -1655053127185566619;
    var_496 = 56;
    pri = fun_1BA8(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    OP_PUSH2_C -5629403121708489249, -1655053127185566619
    var_544 = 56;
    pri = fun_1970(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = -1655053127185566619;
    var_560 = 8;
    pri = fun_08C0(var_552)
    var_568 = 1;
    var_576 = 8;
    pri = fun_1AB8(var_568)
    var_584 = 0;
    pri = fun_1B78()
    var_592 = 1;
    var_600 = 0;
    var_608 = 4632233691727265792;
    var_616 = 0;
    var_624 = 0;
    var_632 = 49396;
    pri = float(var_632)
    var_640 = pri;
    var_648 = 22825;
    pri = float(var_648)
    var_656 = pri;
    OP_PUSH2_C 4611686018427387904, -1655053127185566619
    var_664 = 72;
    pri = fun_0618(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = 45;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 1;
    var_696 = 0;
    var_704 = 9584;
    var_712 = 8;
    var_720 = 32;
    pri = fun_02E0(var_712, var_704, var_696, var_688)
    var_728 = 0;
    pri = fun_0350()
    var_736 = -1655053127185566619;
    var_744 = 8;
    pri = fun_06E8(var_736)
    var_752 = 9792;
    pri = SoundPostEvent(var_752)
    var_760 = 3;
    var_768 = 0;
    pri = EvCameraEnd(var_768, var_760)
    pri = 0;
    return pri;
}
// fun_4780
fun_4780() {
    pri = 0;
    return pri;
}
// fun_4798
fun_4798() {
    var_8 = -1655053127185566619;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = -970134989010580305;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 60;
    var_48 = 8;
    pri = fun_3F20(var_40)
    var_56 = 10;
    var_64 = 1035182135066420537;
    pri = WorkSet(var_64, var_56)
    var_72 = -8040610231773951744;
    pri = VanishFlagReset(var_72)
    var_80 = 1838443220896465507;
    pri = VanishFlagReset(var_80)
    pri = 0;
    return pri;
}
// fun_48A0
fun_48A0() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9952;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0280(var_40, var_32)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_4930
fun_4930() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_40B8()
    var_16 = 0;
    pri = fun_4110()
    var_24 = 0;
    pri = fun_4128()
    var_32 = 0;
    pri = fun_4140()
    var_40 = 0;
    pri = fun_4780()
    var_48 = 0;
    pri = fun_4798()
    var_56 = 0;
    pri = fun_48A0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_4A20
fun_4A20() {
    var_8 = 0;
    pri = fun_4110()
    var_16 = 0;
    pri = fun_4798()
    pri = 0;
    return pri;
}
