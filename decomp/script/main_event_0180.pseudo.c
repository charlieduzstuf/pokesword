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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0670
fun_0670() {
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
// fun_06E8
fun_06E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EB0(var_8)
    OP_JZER lab_07B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EE0(var_24)
    OP_JNZ lab_07B8
    pri = 0;
    return pri;
// lab_07B8
    OP_JUMP lab_07C8
// lab_07C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0828
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0828
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C8
    pri = 0;
    return pri;
}
// fun_0868
fun_0868() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0918
fun_0918() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0960
    pri = 0;
    return pri;
// lab_0960
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09A0
// lab_09A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EB0(var_8)
    OP_JNZ lab_0A28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A18
    pri = 0;
    return pri;
// lab_0A28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A70
    pri = 0;
    return pri;
// lab_0A70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_0AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09A0
    pri = 0;
    return pri;
// lab_0A18
    OP_JUMP lab_0A70
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BA0
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EB0(var_8)
    OP_JZER lab_0CD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BF8
    OP_ZERO_P_S 64
// lab_0CD0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D08
    OP_CONST_S 64, 1
// lab_0D08
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_CONST_S 72, 1
// lab_0D40
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
// lab_0BF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C20
    OP_ZERO_P_S 72
// lab_0C20
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
    OP_JUMP lab_0DE0
// lab_0DE0
    pri = 0;
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E70
fun_0E70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB0
fun_0EB0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F10
fun_0F10() {
    OP_JUMP lab_0F28
// lab_0F28
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FB8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FA8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_0FB8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1048
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1038
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0918(var_8)
    pri = 0;
    return pri;
// lab_1048
    pri = 0;
    return pri;
// lab_1038
    OP_JUMP lab_1058
// lab_1058
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F28
    pri = 0;
    return pri;
// lab_0FA8
    OP_JUMP lab_1058
}
// fun_1098
fun_1098() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0918(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F10(var_40)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
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
// switch_17D0
        case default:
        {
// switch_17D0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1818
// lab_1818
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
            OP_JNZ lab_18C0
            var_88 = 0;
            pri = fun_1A78()
// lab_18C0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_17D0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_13B8
                case default:
                {
// switch_13B8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1430
// lab_1430
                    OP_JUMP lab_1818
                }
                case 0x0:
                {
// switch_13B8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1430
                }
                case 0x1:
                {
// switch_13B8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1430
                }
                case 0x2:
                {
// switch_13B8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1430
                }
                case 0x3:
                {
// switch_13B8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1430
                }
                case 0x4:
                {
// switch_13B8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1430
                }
                case 0x5:
                {
// switch_13B8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1430
                }
            }
        }
        case 0x65:
        {
// switch_17D0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1570
                case default:
                {
// switch_1570_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15E8
// lab_15E8
                    OP_JUMP lab_1818
                }
                case 0x0:
                {
// switch_1570_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_15E8
                }
                case 0x1:
                {
// switch_1570_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_15E8
                }
                case 0x2:
                {
// switch_1570_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_15E8
                }
                case 0x3:
                {
// switch_1570_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_15E8
                }
                case 0x4:
                {
// switch_1570_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_15E8
                }
                case 0x5:
                {
// switch_1570_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_15E8
                }
            }
        }
        case 0x66:
        {
// switch_17D0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1728
                case default:
                {
// switch_1728_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17A0
// lab_17A0
                    OP_JUMP lab_1818
                }
                case 0x0:
                {
// switch_1728_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17A0
                }
                case 0x1:
                {
// switch_1728_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17A0
                }
                case 0x2:
                {
// switch_1728_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17A0
                }
                case 0x3:
                {
// switch_1728_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17A0
                }
                case 0x4:
                {
// switch_1728_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17A0
                }
                case 0x5:
                {
// switch_1728_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17A0
                }
            }
        }
    }
}
// fun_18D8
fun_18D8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_08E0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1980
    pri = 1;
    return pri;
// lab_1980
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_19C8
fun_19C8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1A18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18D8(var_8)
    arg_2 = pri;
// lab_1A18
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A78
fun_1A78() {
    OP_JUMP lab_1A90
// lab_1A90
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AD0
    pri = 0;
    return pri;
// lab_1AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A90
    pri = 0;
    return pri;
}
// fun_1B10
fun_1B10() {
    var_8 = 0;
    pri = fun_1A78()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1BC0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1BC0
    pri = 0;
    return pri;
}
// fun_1BD0
fun_1BD0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C00
fun_1C00() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C50
fun_1C50() {
    var_8 = arg_0;
    pri = AddPocketMoney_(var_8)
    return pri;
}
// fun_1C80
fun_1C80() {
    pri = arg_6;
    OP_JNZ lab_1CB8
    var_8 = 0;
    pri = fun_0DF0()
// lab_1CB8
    pri = arg_1;
    switch (pri) {
// switch_3220
        case default:
        {
// switch_3220_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3570
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3570
            pri = 1;
            OP_JUMP lab_3578
// lab_3570
            pri = 0;
// lab_3578
            OP_JZER lab_36D0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08E0(var_24, var_16)
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
            OP_JUMP lab_3730
// lab_36D0
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
// lab_3730
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3790
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_37F0
// lab_3790
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_37F0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_37F0
            pri = arg_2;
            OP_JZER lab_3830
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3830
            var_8 = 0;
            pri = fun_0E30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3220_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x1:
        {
// switch_3220_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x2:
        {
// switch_3220_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x3:
        {
// switch_3220_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x4:
        {
// switch_3220_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x5:
        {
// switch_3220_case_0x5
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0x6:
        {
// switch_3220_case_0x6
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0x7:
        {
// switch_3220_case_0x7
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0x8:
        {
// switch_3220_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x9:
        {
// switch_3220_case_0x9
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0xa:
        {
// switch_3220_case_0xa
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0xb:
        {
// switch_3220_case_0xb
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0xc:
        {
// switch_3220_case_0xc
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0xd:
        {
// switch_3220_case_0xd
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0xe:
        {
// switch_3220_case_0xe
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0xf:
        {
// switch_3220_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x10:
        {
// switch_3220_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x11:
        {
// switch_3220_case_0x11
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0x12:
        {
// switch_3220_case_0x12
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0x13:
        {
// switch_3220_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x14:
        {
// switch_3220_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x15:
        {
// switch_3220_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x16:
        {
// switch_3220_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x17:
        {
// switch_3220_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x18:
        {
// switch_3220_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x19:
        {
// switch_3220_case_0x19
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3220_case_default
        }
        case 0x1a:
        {
// switch_3220_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0868(var_48, var_40)
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
            pri = fun_0B50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3220_case_default
        }
        case 0x1b:
        {
// switch_3220_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0868(var_48, var_40)
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
            pri = fun_0B50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3220_case_default
        }
        case 0x1c:
        {
// switch_3220_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0868(var_48, var_40)
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
            pri = fun_0B50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3220_case_default
        }
        case 0x1d:
        {
// switch_3220_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x1e:
        {
// switch_3220_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x1f:
        {
// switch_3220_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x20:
        {
// switch_3220_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x21:
        {
// switch_3220_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x22:
        {
// switch_3220_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x23:
        {
// switch_3220_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x24:
        {
// switch_3220_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x25:
        {
// switch_3220_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x26:
        {
// switch_3220_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x27:
        {
// switch_3220_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x28:
        {
// switch_3220_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
        case 0x29:
        {
// switch_3220_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3220_case_default
        }
    }
}
// fun_3860
fun_3860() {
    pri = arg_5;
    OP_JNZ lab_3898
    var_8 = 0;
    pri = fun_0DF0()
// lab_3898
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_38E8
    OP_CONST_S -8, -1
// lab_38E8
    pri = arg_1;
    switch (pri) {
// switch_53A0
        case default:
        {
// switch_53A0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5848
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_08E0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5848
            pri = 1;
            OP_JUMP lab_5850
// lab_5848
            pri = 0;
// lab_5850
            OP_JZER lab_58A0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5AF8
// lab_58A0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5908
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5908
            pri = 1;
            OP_JUMP lab_5910
// lab_5908
            pri = 0;
// lab_5910
            OP_JZER lab_5A98
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08E0(var_24, var_16)
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
            OP_JUMP lab_5AF8
// lab_5A98
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
// lab_5AF8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5B68
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5B68
            var_8 = 0;
            pri = fun_0E30()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_53A0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1:
        {
// switch_53A0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2:
        {
// switch_53A0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3:
        {
// switch_53A0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x4:
        {
// switch_53A0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x5:
        {
// switch_53A0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B18(var_40)
            OP_JUMP switch_53A0_case_default
        }
        case 0x6:
        {
// switch_53A0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x7:
        {
// switch_53A0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x8:
        {
// switch_53A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x9:
        {
// switch_53A0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xa:
        {
// switch_53A0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xb:
        {
// switch_53A0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xc:
        {
// switch_53A0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0xd:
        {
// switch_53A0_case_0xd
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0xe:
        {
// switch_53A0_case_0xe
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0xf:
        {
// switch_53A0_case_0xf
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x10:
        {
// switch_53A0_case_0x10
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x11:
        {
// switch_53A0_case_0x11
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x12:
        {
// switch_53A0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x13:
        {
// switch_53A0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x14:
        {
// switch_53A0_case_0x14
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x15:
        {
// switch_53A0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x16:
        {
// switch_53A0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x17:
        {
// switch_53A0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x18:
        {
// switch_53A0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x19:
        {
// switch_53A0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1a:
        {
// switch_53A0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1b:
        {
// switch_53A0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1c:
        {
// switch_53A0_case_0x1c
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1d:
        {
// switch_53A0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1e:
        {
// switch_53A0_case_0x1e
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x1f:
        {
// switch_53A0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x20:
        {
// switch_53A0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x21:
        {
// switch_53A0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x22:
        {
// switch_53A0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x23:
        {
// switch_53A0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x24:
        {
// switch_53A0_case_0x24
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x25:
        {
// switch_53A0_case_0x25
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x26:
        {
// switch_53A0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x27:
        {
// switch_53A0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x28:
        {
// switch_53A0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x29:
        {
// switch_53A0_case_0x29
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2a:
        {
// switch_53A0_case_0x2a
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2b:
        {
// switch_53A0_case_0x2b
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2c:
        {
// switch_53A0_case_0x2c
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2d:
        {
// switch_53A0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2e:
        {
// switch_53A0_case_0x2e
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x2f:
        {
// switch_53A0_case_0x2f
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x30:
        {
// switch_53A0_case_0x30
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x31:
        {
// switch_53A0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x32:
        {
// switch_53A0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x33:
        {
// switch_53A0_case_0x33
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x34:
        {
// switch_53A0_case_0x34
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x35:
        {
// switch_53A0_case_0x35
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x36:
        {
// switch_53A0_case_0x36
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x37:
        {
// switch_53A0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x38:
        {
// switch_53A0_case_0x38
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
            pri = fun_0B50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_53A0_case_default
        }
        case 0x39:
        {
// switch_53A0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3a:
        {
// switch_53A0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3b:
        {
// switch_53A0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3c:
        {
// switch_53A0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3d:
        {
// switch_53A0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
        case 0x3e:
        {
// switch_53A0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            OP_JUMP switch_53A0_case_default
        }
    }
}
// fun_5B98
fun_5B98() {
    pri = arg_4;
    OP_JNZ lab_5BD0
    var_8 = 0;
    pri = fun_0DF0()
// lab_5BD0
    pri = arg_1;
    switch (pri) {
// switch_6FA8
        case default:
        {
// switch_6FA8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0EB0(var_264)
            OP_JZER lab_7570
            pri = arg_3;
            switch (pri) {
// switch_7518
                case default:
                {
// switch_7518_case_default
                    OP_JUMP lab_7828
// lab_7828
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7898
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7898
                    var_8 = 0;
                    pri = fun_0E30()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7518_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7518_case_default
                }
                case 0x2:
                {
// switch_7518_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7518_case_default
                }
                case 0x3:
                {
// switch_7518_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7518_case_default
                }
            }
// lab_7570
            pri = arg_1;
            OP_JZER lab_75C0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_75C0
            pri = 0;
            OP_JUMP lab_75C8
// lab_75C0
            pri = 1;
// lab_75C8
            OP_JZER lab_7630
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_08E0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7630
            pri = 1;
            OP_JUMP lab_7638
// lab_7630
            pri = 0;
// lab_7638
            OP_JZER lab_7688
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7828
// lab_7688
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_76F0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7828
// lab_76F0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08E0(var_24, var_16)
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
// switch_6FA8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1:
        {
// switch_6FA8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2:
        {
// switch_6FA8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x3:
        {
// switch_6FA8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x4:
        {
// switch_6FA8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x5:
        {
// switch_6FA8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B18(var_40)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x6:
        {
// switch_6FA8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x7:
        {
// switch_6FA8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x8:
        {
// switch_6FA8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x9:
        {
// switch_6FA8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0xa:
        {
// switch_6FA8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0xb:
        {
// switch_6FA8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0xc:
        {
// switch_6FA8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0xd:
        {
// switch_6FA8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0xe:
        {
// switch_6FA8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0xf:
        {
// switch_6FA8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x10:
        {
// switch_6FA8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x11:
        {
// switch_6FA8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x12:
        {
// switch_6FA8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x13:
        {
// switch_6FA8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x14:
        {
// switch_6FA8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x15:
        {
// switch_6FA8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x16:
        {
// switch_6FA8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x17:
        {
// switch_6FA8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x18:
        {
// switch_6FA8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x19:
        {
// switch_6FA8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1a:
        {
// switch_6FA8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1b:
        {
// switch_6FA8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1c:
        {
// switch_6FA8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1d:
        {
// switch_6FA8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1e:
        {
// switch_6FA8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x1f:
        {
// switch_6FA8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x20:
        {
// switch_6FA8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x21:
        {
// switch_6FA8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x22:
        {
// switch_6FA8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x23:
        {
// switch_6FA8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x24:
        {
// switch_6FA8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x25:
        {
// switch_6FA8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x26:
        {
// switch_6FA8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x27:
        {
// switch_6FA8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x28:
        {
// switch_6FA8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x29:
        {
// switch_6FA8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2a:
        {
// switch_6FA8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2b:
        {
// switch_6FA8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2c:
        {
// switch_6FA8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2d:
        {
// switch_6FA8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2e:
        {
// switch_6FA8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x2f:
        {
// switch_6FA8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x30:
        {
// switch_6FA8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x31:
        {
// switch_6FA8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x32:
        {
// switch_6FA8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x33:
        {
// switch_6FA8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x34:
        {
// switch_6FA8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x35:
        {
// switch_6FA8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x36:
        {
// switch_6FA8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x37:
        {
// switch_6FA8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x38:
        {
// switch_6FA8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x39:
        {
// switch_6FA8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x3a:
        {
// switch_6FA8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x3b:
        {
// switch_6FA8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x3c:
        {
// switch_6FA8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x3d:
        {
// switch_6FA8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
        case 0x3e:
        {
// switch_6FA8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08A0(var_24, var_16, var_8)
            OP_JUMP switch_6FA8_case_default
        }
    }
}
// fun_78C8
fun_78C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7AD8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_7AC0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7AC0
    pri = 0;
    return pri;
}
// fun_7AD8
fun_7AD8() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08A0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7B20
fun_7B20() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7BA8
// lab_7BA8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7D28
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7D18
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7C68
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7C68
    pri = 0;
    OP_JUMP lab_7C70
// lab_7D28
    pri = 0;
    return pri;
// lab_7D18
    OP_JUMP lab_7BA0
// lab_7BA0
    OP_INC_P_S -936
// lab_7C68
    pri = 1;
// lab_7C70
    OP_JZER lab_7CE8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7CE0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7CE8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7CE0
}
// fun_7D48
fun_7D48() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_7D80
fun_7D80() {
    var_8 = 0;
    pri = fun_7D48()
    switch (pri) {
// switch_7E30
        case default:
        {
// switch_7E30_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_7E78
// lab_7E78
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_7E30_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_7E78
        }
        case 0x1:
        {
// switch_7E30_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_7E78
        }
        case 0x2:
        {
// switch_7E30_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_7E78
        }
    }
}
// fun_7E88
fun_7E88() {
    var_16 = 816;
    var_24 = 813;
    var_32 = 810;
    var_40 = 24;
    pri = fun_7D80(var_32, var_24, var_16)
    var_8 = pri;
    var_48 = 0;
    var_56 = arg_0;
    var_64 = 0;
    var_72 = var_8;
    pri = SoundPlayPokeVoice(var_72, var_64, var_56, var_48)
    pri = 0;
    return pri;
}
// fun_7F20
fun_7F20() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7FB8
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1158()
// lab_7FB8
    pri = arg_4;
    OP_JZER lab_7FF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1180(var_8)
// lab_7FF0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8048
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8048
    pri = 0;
    OP_JUMP lab_8050
// lab_8048
    pri = 1;
// lab_8050
    OP_JZER lab_8118
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8118
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_80F0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1098(var_32, var_24)
    OP_JUMP lab_8118
// lab_8118
    pri = arg_2;
    OP_JZER lab_81F0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_81C0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E70(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0638(var_40)
    OP_JUMP lab_81F0
// lab_81F0
    pri = arg_3;
    OP_JZER lab_8228
    var_8 = 1;
    var_16 = 8;
    pri = fun_1120(var_8)
// lab_8228
    pri = 0;
    return pri;
// lab_81C0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E70(var_16, var_8)
// lab_80F0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1098(var_16, var_8)
}
// fun_8238
fun_8238() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7B20(var_24)
    pri = 0;
    return pri;
}
// fun_82A0
fun_82A0() {
    pri = g_mode;
    switch (pri) {
// switch_8360
        case default:
        {
// switch_8360_case_default
            pri = CommandNOP()
            OP_JUMP lab_83A8
// lab_83A8
            pri = 0;
            return pri;
        }
        case 0x9d3b06220b297e81:
        {
// switch_8360_case_0x9d3b06220b297e81
            var_8 = 0;
            pri = fun_97A0()
            OP_JUMP lab_83A8
        }
        case 0x0:
        {
// switch_8360_case_0x0
            var_8 = 0;
            pri = fun_83B8()
            OP_JUMP lab_83A8
        }
        case 0x7fdb9c1e8134a5f5:
        {
// switch_8360_case_0x7fdb9c1e8134a5f5
            var_8 = 0;
            pri = fun_98A8()
            OP_JUMP lab_83A8
        }
    }
}
// fun_83B8
fun_83B8() {
    pri = 0;
    return pri;
}
// fun_83D0
fun_83D0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8438
fun_8438() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7F20(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8490
fun_8490() {
    OP_PUSH3_C 2478588589520194700, -8669601815973682975, 6943973363734289279
    var_16 = 24;
    pri = fun_7D80(var_8, var_0, var_-8)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0408(var_24)
    pri = 0;
    return pri;
}
// fun_8518
fun_8518() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_8548
fun_8548() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 4636033603912859648;
    var_32 = 1000;
    pri = float(var_32)
    var_40 = pri;
    OP_PUSH2_C 4654751689864118272, 8802641224559852288
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4584594051918987264, 4652007308841189376, 4655631299166339072, -965260324886180608
    var_72 = 48;
    pri = fun_05E0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 0;
    var_88 = 0;
    var_96 = -965260324886180608;
    var_104 = 24;
    pri = fun_78C8(var_96, var_88, var_80)
    var_112 = -965260324886180608;
    var_120 = 8;
    pri = fun_0918(var_112)
    var_136 = 816;
    var_144 = 813;
    var_152 = 810;
    var_160 = 24;
    pri = fun_7D80(var_152, var_144, var_136)
    var_8 = pri;
    var_168 = 10;
    var_176 = 8;
    pri = fun_0060(var_168)
    OP_PUSH3_C 2478588589520194700, -8669601815973682975, 6943973363734289279
    var_192 = 24;
    pri = fun_7D80(var_184, var_176, var_168)
    var_16 = pri;
    var_200 = 1;
    var_208 = 1;
    OP_PUSH3_C 4630122629401935872, 4650951777678524416, 4654927611724562432
    var_216 = var_16;
    var_224 = 48;
    pri = fun_05E0(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 1;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 0;
    var_256 = 4631952216750555136;
    var_264 = 0;
    OP_PUSH5_C 4652356293831845478, 4636033603912859648, 4655151604233372959, 4653778841975862067, 4641058987778307523
    var_272 = 4655152307920814735;
    var_280 = 1;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 31240;
    var_296 = 8;
    var_304 = 16;
    pri = fun_0280(var_296, var_288)
    var_312 = 0;
    pri = fun_0350()
    var_328 = 816;
    var_336 = 813;
    var_344 = 810;
    var_352 = 24;
    pri = fun_7D80(var_344, var_336, var_328)
    var_24 = pri;
    OP_PUSH3_C 6072186611073203837, 5750390245914111370, 2899809664512130792
    var_368 = 24;
    pri = fun_7D80(var_360, var_352, var_344)
    var_32 = pri;
    var_376 = 0;
    var_384 = 8;
    pri = fun_7E88(var_376)
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 30;
    var_440 = var_16;
    var_448 = 56;
    pri = fun_1C80(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 0;
    var_464 = 3;
    var_472 = 0;
    var_480 = 100;
    var_488 = -1;
    var_496 = var_32;
    var_504 = var_16;
    var_512 = 56;
    pri = fun_19C8(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_1B10(var_520)
    var_536 = 0;
    pri = fun_1BD0()
    var_544 = 1;
    var_552 = 1;
    var_560 = -1;
    var_568 = -1;
    var_576 = 0;
    var_584 = 4;
    var_592 = -965260324886180608;
    var_600 = 56;
    pri = fun_3860(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = var_8;
    var_616 = 1;
    var_624 = 16;
    pri = fun_1C00(var_616, var_608)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C -622120550909348502, -965260324886180608
    var_672 = 56;
    pri = fun_19C8(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 1;
    var_688 = 8;
    pri = fun_1B10(var_680)
    var_696 = 1;
    var_704 = 3;
    var_712 = 0;
    var_720 = 4;
    var_728 = -965260324886180608;
    var_736 = 40;
    pri = fun_5B98(var_728, var_720, var_712, var_704, var_696)
    var_744 = -965260324886180608;
    var_752 = 8;
    pri = fun_0918(var_744)
    var_760 = 1;
    var_768 = 0;
    var_776 = 4641240890982006784;
    var_784 = 0;
    var_792 = 0;
    OP_PUSH4_C 4652007308841189376, 4655235474980339712, 4607182418800017408, -965260324886180608
    var_800 = 72;
    pri = fun_0670(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = -965260324886180608;
    var_816 = 8;
    pri = fun_0740(var_808)
    var_824 = 1;
    var_832 = -1;
    var_840 = -1;
    var_848 = 3;
    var_856 = 0;
    var_864 = 2;
    var_872 = -965260324886180608;
    var_880 = 56;
    pri = fun_1C80(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 1;
    var_896 = -1;
    var_904 = -1;
    var_912 = 3;
    var_920 = 0;
    var_928 = 22;
    var_936 = 8802641224559852288;
    var_944 = 56;
    pri = fun_1C80(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 100;
    var_984 = -1;
    OP_PUSH2_C -622121650420976713, -965260324886180608
    var_992 = 56;
    pri = fun_19C8(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 8;
    pri = fun_1B10(var_1000)
    var_1016 = 30000;
    var_1024 = 8;
    pri = fun_1C50(var_1016)
    var_1032 = -965260324886180608;
    var_1040 = 8;
    pri = fun_0918(var_1032)
    var_1048 = 1;
    var_1056 = -1;
    var_1064 = -1;
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = -965260324886180608;
    var_1104 = 56;
    pri = fun_1C80(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = var_24;
    var_1120 = 1;
    var_1128 = 16;
    pri = fun_1C00(var_1120, var_1112)
    var_1136 = 0;
    var_1144 = 3;
    var_1152 = 0;
    var_1160 = 100;
    var_1168 = -1;
    OP_PUSH2_C -622124948955861346, -965260324886180608
    var_1176 = 56;
    pri = fun_19C8(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1184 = 1;
    var_1192 = 8;
    pri = fun_1B10(var_1184)
    var_1200 = 0;
    pri = fun_1BD0()
    var_1208 = 0;
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = var_16;
    var_1248 = -965260324886180608;
    var_1256 = 48;
    pri = fun_06E8(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    OP_PUSH3_C 6072183312538319204, 5750389146402483159, 2899812963047015425
    var_1272 = 24;
    pri = fun_7D80(var_1264, var_1256, var_1248)
    var_40 = pri;
    var_1280 = 0;
    var_1288 = 8;
    pri = fun_7E88(var_1280)
    var_1296 = 1;
    var_1304 = -1;
    var_1312 = -1;
    var_1320 = 3;
    var_1328 = 0;
    var_1336 = 30;
    var_1344 = var_16;
    var_1352 = 56;
    pri = fun_1C80(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1360 = 0;
    var_1368 = 3;
    var_1376 = 0;
    var_1384 = 100;
    var_1392 = -1;
    var_1400 = var_40;
    var_1408 = var_16;
    var_1416 = 56;
    pri = fun_19C8(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = -965260324886180608;
    var_1432 = 8;
    pri = fun_0740(var_1424)
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_1B10(var_1440)
    var_1456 = 0;
    pri = fun_1BD0()
    var_1464 = 0;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 100;
    var_1496 = -1;
    OP_PUSH2_C -622126048467489557, -965260324886180608
    var_1504 = 56;
    pri = fun_19C8(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_1B10(var_1512)
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 0;
    OP_PUSH2_C 8802641224559852288, -965260324886180608
    var_1560 = 48;
    pri = fun_06E8(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1568 = -965260324886180608;
    var_1576 = 8;
    pri = fun_0740(var_1568)
    var_1584 = 0;
    var_1592 = 2;
    var_1600 = -965260324886180608;
    var_1608 = 24;
    pri = fun_78C8(var_1600, var_1592, var_1584)
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 100;
    var_1648 = -1;
    OP_PUSH2_C -622127147979117768, -965260324886180608
    var_1656 = 56;
    pri = fun_19C8(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_1B10(var_1664)
    var_1680 = 0;
    pri = fun_1BD0()
    var_1688 = 1;
    var_1696 = 0;
    var_1704 = 31192;
    var_1712 = 8;
    var_1720 = 32;
    pri = fun_02E0(var_1712, var_1704, var_1696, var_1688)
    var_1728 = 0;
    pri = fun_0350()
    var_1736 = -965260324886180608;
    var_1744 = 8;
    pri = fun_0740(var_1736)
    OP_PUSH2_C -965260324886180608, 1226766018928183474
    pri = SetBamiriInfoToChara(var_1744, var_1736)
    var_1752 = 3;
    var_1760 = 0;
    pri = EvCameraEnd(var_1760, var_1752)
    pri = 0;
    return pri;
}
// fun_92C0
fun_92C0() {
    pri = 0;
    return pri;
}
// fun_92D8
fun_92D8() {
    OP_PUSH3_C 2478588589520194700, -8669601815973682975, 6943973363734289279
    var_16 = 24;
    pri = fun_7D80(var_8, var_0, var_-8)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = 190;
    var_48 = 8;
    pri = fun_8238(var_40)
    var_56 = 20;
    var_64 = -7486538135553164029;
    pri = WorkSet(var_64, var_56)
    var_72 = 10;
    var_80 = 285943187824898012;
    pri = WorkSet(var_80, var_72)
    var_88 = 3761483749247810063;
    pri = VanishFlagReset(var_88)
    var_96 = -8303296711058148032;
    pri = VanishFlagReset(var_96)
    var_104 = -8303295611546519821;
    pri = VanishFlagReset(var_104)
    var_112 = -8303294512034891610;
    pri = VanishFlagReset(var_112)
    var_120 = -970134989010580305;
    pri = VanishFlagReset(var_120)
    var_128 = -1655053127185566619;
    pri = VanishFlagSet(var_128)
    var_136 = 2658386530751210263;
    pri = VanishFlagReset(var_136)
    var_144 = -5005481396565922172;
    pri = VanishFlagReset(var_144)
    var_152 = 9204040631772691403;
    pri = VanishFlagReset(var_152)
    var_160 = -9016284007180476738;
    pri = VanishFlagReset(var_160)
    var_168 = 2206622293127986236;
    pri = VanishFlagReset(var_168)
    var_176 = 9204042830795947825;
    pri = VanishFlagSet(var_176)
    var_184 = -8654322880212382842;
    pri = VanishFlagSet(var_184)
    var_192 = 59409724177917345;
    pri = VanishFlagSet(var_192)
    var_200 = -484546589220304156;
    pri = VanishFlagSet(var_200)
    var_208 = -484552086778445211;
    pri = VanishFlagSet(var_208)
    var_216 = -3674024162174587963;
    pri = VanishFlagSet(var_216)
    var_224 = 5;
    var_232 = 4;
    pri = ItemAdd(var_232, var_224)
    var_240 = 3447853788456145154;
    pri = FlagSet(var_240)
    var_248 = -5769160658289007030;
    pri = FlagSet(var_248)
    var_256 = 292601305930245919;
    pri = FlagSet(var_256)
    pri = 0;
    return pri;
}
// fun_9728
fun_9728() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 31240;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_97A0
fun_97A0() {
    var_8 = 0;
    pri = fun_83D0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8438()
    var_24 = 0;
    pri = fun_8490()
    var_32 = 0;
    pri = fun_8518()
    var_40 = 0;
    pri = fun_8548()
    var_48 = 0;
    pri = fun_92C0()
    var_56 = 0;
    pri = fun_92D8()
    var_64 = 0;
    pri = fun_9728()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_98A8
fun_98A8() {
    var_8 = 0;
    pri = fun_8490()
    var_16 = 0;
    pri = fun_92D8()
    pri = 0;
    return pri;
}
