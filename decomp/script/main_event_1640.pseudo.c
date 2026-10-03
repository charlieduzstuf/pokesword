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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
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
// fun_0728
fun_0728() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A0(var_8)
    OP_JZER lab_0848
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10D0(var_24)
    OP_JNZ lab_0848
    pri = 0;
    return pri;
// lab_0848
    OP_JUMP lab_0858
// lab_0858
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_08B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_08B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
    pri = 0;
    return pri;
}
// fun_08F8
fun_08F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09A8
fun_09A8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09F0
    pri = 0;
    return pri;
// lab_09F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A30
// lab_0A30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A0(var_8)
    OP_JNZ lab_0AB8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AA8
    pri = 0;
    return pri;
// lab_0AB8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B00
    pri = 0;
    return pri;
// lab_0B00
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA8(var_8)
    pri = 0;
    return pri;
// lab_0B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A30
    pri = 0;
    return pri;
// lab_0AA8
    OP_JUMP lab_0B00
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C30
    pri = 0;
    return pri;
// lab_0C30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10A0(var_8)
    OP_JZER lab_0D60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C88
    OP_ZERO_P_S 64
// lab_0D60
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D98
    OP_CONST_S 64, 1
// lab_0D98
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DD0
    OP_CONST_S 72, 1
// lab_0DD0
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
// lab_0C88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB0
    OP_ZERO_P_S 72
// lab_0CB0
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
    OP_JUMP lab_0E70
// lab_0E70
    pri = 0;
    return pri;
}
// fun_0E80
fun_0E80() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EC0
fun_0EC0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F00
fun_0F00() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FD8
fun_0FD8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1048
fun_1048() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FD8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1010(var_24)
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1100
fun_1100() {
    OP_JUMP lab_1118
// lab_1118
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_11A8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1198
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_11A8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1238
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1228
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_1238
    pri = 0;
    return pri;
// lab_1228
    OP_JUMP lab_1248
// lab_1248
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1118
    pri = 0;
    return pri;
// lab_1198
    OP_JUMP lab_1248
}
// fun_1288
fun_1288() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1100(var_40)
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
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
// switch_19C0
        case default:
        {
// switch_19C0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A08
// lab_1A08
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
            OP_JNZ lab_1AB0
            var_88 = 0;
            pri = fun_1C68()
// lab_1AB0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19C0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15A8
                case default:
                {
// switch_15A8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1620
// lab_1620
                    OP_JUMP lab_1A08
                }
                case 0x0:
                {
// switch_15A8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1620
                }
                case 0x1:
                {
// switch_15A8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1620
                }
                case 0x2:
                {
// switch_15A8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1620
                }
                case 0x3:
                {
// switch_15A8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1620
                }
                case 0x4:
                {
// switch_15A8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1620
                }
                case 0x5:
                {
// switch_15A8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1620
                }
            }
        }
        case 0x65:
        {
// switch_19C0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1760
                case default:
                {
// switch_1760_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17D8
// lab_17D8
                    OP_JUMP lab_1A08
                }
                case 0x0:
                {
// switch_1760_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17D8
                }
                case 0x1:
                {
// switch_1760_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17D8
                }
                case 0x2:
                {
// switch_1760_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17D8
                }
                case 0x3:
                {
// switch_1760_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17D8
                }
                case 0x4:
                {
// switch_1760_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17D8
                }
                case 0x5:
                {
// switch_1760_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17D8
                }
            }
        }
        case 0x66:
        {
// switch_19C0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1918
                case default:
                {
// switch_1918_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1990
// lab_1990
                    OP_JUMP lab_1A08
                }
                case 0x0:
                {
// switch_1918_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1990
                }
                case 0x1:
                {
// switch_1918_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1990
                }
                case 0x2:
                {
// switch_1918_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1990
                }
                case 0x3:
                {
// switch_1918_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1990
                }
                case 0x4:
                {
// switch_1918_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1990
                }
                case 0x5:
                {
// switch_1918_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1990
                }
            }
        }
    }
}
// fun_1AC8
fun_1AC8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0970(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B70
    pri = 1;
    return pri;
// lab_1B70
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1BB8
fun_1BB8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AC8(var_8)
    arg_2 = pri;
// lab_1C08
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13A8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C68
fun_1C68() {
    OP_JUMP lab_1C80
// lab_1C80
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CC0
    pri = 0;
    return pri;
// lab_1CC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C80
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    var_8 = 0;
    pri = fun_1C68()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1DB0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1DB0
    pri = 0;
    return pri;
}
// fun_1DC0
fun_1DC0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DF0
fun_1DF0() {
    pri = arg_1;
    OP_JNZ lab_1E38
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_1E38
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1E90
fun_1E90() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_1F08
fun_1F08() {
    var_8 = 0;
    pri = fun_1E90()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1F88
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_1F88
    pri = 1;
    return pri;
// lab_1F88
    var_8 = 0;
    pri = fun_1E90()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_1FC8
    pri = 1;
    return pri;
// lab_1FC8
    var_8 = 0;
    pri = fun_1E90()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1FF8
fun_1FF8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    OP_JUMP lab_2060
// lab_2060
    pri = EvCameraMoveWait_()
    OP_JZER lab_2098
    pri = 0;
    return pri;
// lab_2098
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2060
    pri = 0;
    return pri;
}
// fun_20D8
fun_20D8() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2140(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2218()
    pri = 0;
    return pri;
}
// fun_2140
fun_2140() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2140(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2218()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
    OP_JUMP lab_2230
// lab_2230
    pri = IsEasingRunningDof_()
    OP_JZER lab_2288
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2298
// lab_2288
    pri = 0;
    return pri;
// lab_2298
    OP_JUMP lab_2230
    pri = 0;
    return pri;
}
// fun_22B8
fun_22B8() {
    pri = arg_6;
    OP_JNZ lab_22F0
    var_8 = 0;
    pri = fun_0E80()
// lab_22F0
    pri = arg_1;
    switch (pri) {
// switch_3858
        case default:
        {
// switch_3858_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3BA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3BA8
            pri = 1;
            OP_JUMP lab_3BB0
// lab_3BA8
            pri = 0;
// lab_3BB0
            OP_JZER lab_3D08
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0970(var_24, var_16)
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
            var_64 = 8432;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3D68
// lab_3D08
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3D68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3DC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3E28
// lab_3DC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3E28
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3E28
            pri = arg_2;
            OP_JZER lab_3E68
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3E68
            var_8 = 0;
            pri = fun_0EC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3858_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x1:
        {
// switch_3858_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x2:
        {
// switch_3858_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x3:
        {
// switch_3858_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x4:
        {
// switch_3858_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x5:
        {
// switch_3858_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0x6:
        {
// switch_3858_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5640;
            var_72 = 5632;
            var_80 = 5624;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0x7:
        {
// switch_3858_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0x8:
        {
// switch_3858_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x9:
        {
// switch_3858_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0xa:
        {
// switch_3858_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0xb:
        {
// switch_3858_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0xc:
        {
// switch_3858_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0xd:
        {
// switch_3858_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0xe:
        {
// switch_3858_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0xf:
        {
// switch_3858_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x10:
        {
// switch_3858_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x11:
        {
// switch_3858_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0x12:
        {
// switch_3858_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0x13:
        {
// switch_3858_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x14:
        {
// switch_3858_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x15:
        {
// switch_3858_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x16:
        {
// switch_3858_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x17:
        {
// switch_3858_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x18:
        {
// switch_3858_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x19:
        {
// switch_3858_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3858_case_default
        }
        case 0x1a:
        {
// switch_3858_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6104;
            var_88 = 6096;
            var_96 = 6088;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0BE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3858_case_default
        }
        case 0x1b:
        {
// switch_3858_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6328;
            var_88 = 6320;
            var_96 = 6312;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0BE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3858_case_default
        }
        case 0x1c:
        {
// switch_3858_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6552;
            var_88 = 6544;
            var_96 = 6536;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0BE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3858_case_default
        }
        case 0x1d:
        {
// switch_3858_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x1e:
        {
// switch_3858_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x1f:
        {
// switch_3858_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x20:
        {
// switch_3858_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x21:
        {
// switch_3858_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x22:
        {
// switch_3858_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x23:
        {
// switch_3858_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x24:
        {
// switch_3858_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x25:
        {
// switch_3858_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x26:
        {
// switch_3858_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x27:
        {
// switch_3858_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x28:
        {
// switch_3858_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
        case 0x29:
        {
// switch_3858_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3858_case_default
        }
    }
}
// fun_3E98
fun_3E98() {
    pri = arg_5;
    OP_JNZ lab_3ED0
    var_8 = 0;
    pri = fun_0E80()
// lab_3ED0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3F20
    OP_CONST_S -8, -1
// lab_3F20
    pri = arg_1;
    switch (pri) {
// switch_59D8
        case default:
        {
// switch_59D8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5E80
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0970(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E80
            pri = 1;
            OP_JUMP lab_5E88
// lab_5E80
            pri = 0;
// lab_5E88
            OP_JZER lab_5ED8
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6130
// lab_5ED8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5F40
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5F40
            pri = 1;
            OP_JUMP lab_5F48
// lab_5F40
            pri = 0;
// lab_5F48
            OP_JZER lab_60D0
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0970(var_24, var_16)
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6130
// lab_60D0
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6130
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_61A0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_61A0
            var_8 = 0;
            pri = fun_0EC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_59D8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1:
        {
// switch_59D8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2:
        {
// switch_59D8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x3:
        {
// switch_59D8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x4:
        {
// switch_59D8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x5:
        {
// switch_59D8_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BA8(var_40)
            OP_JUMP switch_59D8_case_default
        }
        case 0x6:
        {
// switch_59D8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x7:
        {
// switch_59D8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x8:
        {
// switch_59D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x9:
        {
// switch_59D8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0xa:
        {
// switch_59D8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0xb:
        {
// switch_59D8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0xc:
        {
// switch_59D8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0xd:
        {
// switch_59D8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0xe:
        {
// switch_59D8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0xf:
        {
// switch_59D8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x10:
        {
// switch_59D8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x11:
        {
// switch_59D8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x12:
        {
// switch_59D8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x13:
        {
// switch_59D8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x14:
        {
// switch_59D8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x15:
        {
// switch_59D8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x16:
        {
// switch_59D8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x17:
        {
// switch_59D8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x18:
        {
// switch_59D8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x19:
        {
// switch_59D8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1a:
        {
// switch_59D8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1b:
        {
// switch_59D8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1c:
        {
// switch_59D8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1d:
        {
// switch_59D8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1e:
        {
// switch_59D8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x1f:
        {
// switch_59D8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x20:
        {
// switch_59D8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x21:
        {
// switch_59D8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x22:
        {
// switch_59D8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x23:
        {
// switch_59D8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x24:
        {
// switch_59D8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x25:
        {
// switch_59D8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x26:
        {
// switch_59D8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x27:
        {
// switch_59D8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x28:
        {
// switch_59D8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x29:
        {
// switch_59D8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2a:
        {
// switch_59D8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2b:
        {
// switch_59D8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2c:
        {
// switch_59D8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2d:
        {
// switch_59D8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2e:
        {
// switch_59D8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x2f:
        {
// switch_59D8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x30:
        {
// switch_59D8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x31:
        {
// switch_59D8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x32:
        {
// switch_59D8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x33:
        {
// switch_59D8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x34:
        {
// switch_59D8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x35:
        {
// switch_59D8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x36:
        {
// switch_59D8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x37:
        {
// switch_59D8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x38:
        {
// switch_59D8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59D8_case_default
        }
        case 0x39:
        {
// switch_59D8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x3a:
        {
// switch_59D8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x3b:
        {
// switch_59D8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x3c:
        {
// switch_59D8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x3d:
        {
// switch_59D8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
        case 0x3e:
        {
// switch_59D8_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            OP_JUMP switch_59D8_case_default
        }
    }
}
// fun_61D0
fun_61D0() {
    pri = arg_4;
    OP_JNZ lab_6208
    var_8 = 0;
    pri = fun_0E80()
// lab_6208
    pri = arg_1;
    switch (pri) {
// switch_75E0
        case default:
        {
// switch_75E0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_10A0(var_264)
            OP_JZER lab_7BA8
            pri = arg_3;
            switch (pri) {
// switch_7B50
                case default:
                {
// switch_7B50_case_default
                    OP_JUMP lab_7E60
// lab_7E60
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7ED0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7ED0
                    var_8 = 0;
                    pri = fun_0EC0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7B50_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B50_case_default
                }
                case 0x2:
                {
// switch_7B50_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B50_case_default
                }
                case 0x3:
                {
// switch_7B50_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7B50_case_default
                }
            }
// lab_7BA8
            pri = arg_1;
            OP_JZER lab_7BF8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7BF8
            pri = 0;
            OP_JUMP lab_7C00
// lab_7BF8
            pri = 1;
// lab_7C00
            OP_JZER lab_7C68
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0970(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7C68
            pri = 1;
            OP_JUMP lab_7C70
// lab_7C68
            pri = 0;
// lab_7C70
            OP_JZER lab_7CC0
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7E60
// lab_7CC0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7D28
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7E60
// lab_7D28
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0970(var_24, var_16)
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_75E0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1:
        {
// switch_75E0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2:
        {
// switch_75E0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x3:
        {
// switch_75E0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x4:
        {
// switch_75E0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x5:
        {
// switch_75E0_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BA8(var_40)
            OP_JUMP switch_75E0_case_default
        }
        case 0x6:
        {
// switch_75E0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x7:
        {
// switch_75E0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x8:
        {
// switch_75E0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x9:
        {
// switch_75E0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0xa:
        {
// switch_75E0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0xb:
        {
// switch_75E0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0xc:
        {
// switch_75E0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0xd:
        {
// switch_75E0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0xe:
        {
// switch_75E0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0xf:
        {
// switch_75E0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x10:
        {
// switch_75E0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x11:
        {
// switch_75E0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x12:
        {
// switch_75E0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x13:
        {
// switch_75E0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x14:
        {
// switch_75E0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x15:
        {
// switch_75E0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x16:
        {
// switch_75E0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x17:
        {
// switch_75E0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x18:
        {
// switch_75E0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x19:
        {
// switch_75E0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1a:
        {
// switch_75E0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1b:
        {
// switch_75E0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1c:
        {
// switch_75E0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1d:
        {
// switch_75E0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1e:
        {
// switch_75E0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x1f:
        {
// switch_75E0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x20:
        {
// switch_75E0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x21:
        {
// switch_75E0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x22:
        {
// switch_75E0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x23:
        {
// switch_75E0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x24:
        {
// switch_75E0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x25:
        {
// switch_75E0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x26:
        {
// switch_75E0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x27:
        {
// switch_75E0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x28:
        {
// switch_75E0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x29:
        {
// switch_75E0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2a:
        {
// switch_75E0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2b:
        {
// switch_75E0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2c:
        {
// switch_75E0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2d:
        {
// switch_75E0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2e:
        {
// switch_75E0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x2f:
        {
// switch_75E0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x30:
        {
// switch_75E0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x31:
        {
// switch_75E0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x32:
        {
// switch_75E0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x33:
        {
// switch_75E0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x34:
        {
// switch_75E0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x35:
        {
// switch_75E0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x36:
        {
// switch_75E0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x37:
        {
// switch_75E0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x38:
        {
// switch_75E0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x39:
        {
// switch_75E0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x3a:
        {
// switch_75E0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x3b:
        {
// switch_75E0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x3c:
        {
// switch_75E0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x3d:
        {
// switch_75E0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
        case 0x3e:
        {
// switch_75E0_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            OP_JUMP switch_75E0_case_default
        }
    }
}
// fun_7F00
fun_7F00() {
    pri = 30056;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7F88
// lab_7F88
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8108
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_80F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8048
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8048
    pri = 0;
    OP_JUMP lab_8050
// lab_8108
    pri = 0;
    return pri;
// lab_80F8
    OP_JUMP lab_7F80
// lab_7F80
    OP_INC_P_S -936
// lab_8048
    pri = 1;
// lab_8050
    OP_JZER lab_80C8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_80C0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_80C8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_80C0
}
// fun_8128
fun_8128() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_81C0
    var_8 = 1;
    var_16 = 0;
    var_24 = 30976;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1348()
// lab_81C0
    pri = arg_4;
    OP_JZER lab_81F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1370(var_8)
// lab_81F8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8250
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8250
    pri = 0;
    OP_JUMP lab_8258
// lab_8250
    pri = 1;
// lab_8258
    OP_JZER lab_8320
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8320
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_82F8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1288(var_32, var_24)
    OP_JUMP lab_8320
// lab_8320
    pri = arg_2;
    OP_JZER lab_83F8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_83C8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F58(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0678(var_40)
    OP_JUMP lab_83F8
// lab_83F8
    pri = arg_3;
    OP_JZER lab_8430
    var_8 = 1;
    var_16 = 8;
    pri = fun_1310(var_8)
// lab_8430
    pri = 0;
    return pri;
// lab_83C8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F58(var_16, var_8)
// lab_82F8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1288(var_16, var_8)
}
// fun_8440
fun_8440() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7F00(var_24)
    pri = 0;
    return pri;
}
// fun_84A8
fun_84A8() {
    pri = g_mode;
    switch (pri) {
// switch_8590
        case default:
        {
// switch_8590_case_default
            pri = CommandNOP()
            OP_JUMP lab_85E8
// lab_85E8
            pri = 0;
            return pri;
        }
        case 0xc227760c1f150b10:
        {
// switch_8590_case_0xc227760c1f150b10
            var_8 = 0;
            pri = fun_A110()
            OP_JUMP lab_85E8
        }
        case 0x0:
        {
// switch_8590_case_0x0
            var_8 = 0;
            pri = fun_85F8()
            OP_JUMP lab_85E8
        }
        case 0x38c7892aeff7802d:
        {
// switch_8590_case_0x38c7892aeff7802d
            var_8 = 0;
            pri = fun_9FC0()
            OP_JUMP lab_85E8
        }
        case 0x602be7278ccee831:
        {
// switch_8590_case_0x602be7278ccee831
            var_8 = 0;
            pri = fun_A0C8()
            OP_JUMP lab_85E8
        }
    }
}
// fun_85F8
fun_85F8() {
    pri = 0;
    return pri;
}
// fun_8610
fun_8610() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 30976;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8678
fun_8678() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8128(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_86D0
fun_86D0() {
    pri = 0;
    return pri;
}
// fun_86E8
fun_86E8() {
    pri = 0;
    return pri;
}
// fun_8700
fun_8700() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4640537203540230144, 4671015940740087808, 4671170147245883392, 8802641224559852288
    var_24 = 48;
    pri = fun_05E0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4640537203540230144, 4671015940740087808, 4671265255001686016, 8594007528122057589
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 6;
    var_80 = 8802641224559852288;
    var_88 = 16;
    pri = fun_0F98(var_80, var_72)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 0;
    OP_PUSH5_C 4670914084731669709, 4636469890126761165, 4671217761596924232, 4671150402765827604, 4639304694985958359
    var_120 = 4671217156865528955;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 31024;
    var_144 = 8;
    var_152 = 16;
    pri = fun_0280(var_144, var_136)
    var_160 = 0;
    pri = fun_0350()
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    OP_PUSH2_C -5101395563453443988, -7856618442502275419
    var_208 = 56;
    pri = fun_1BB8(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1D00(var_216)
    var_232 = 0;
    pri = fun_1DC0()
    var_240 = 0;
    var_248 = 4631952216750555136;
    var_256 = 0;
    OP_PUSH5_C 4670831596620574884, 4637124319447613440, 4671221288280470323, 4670902278725566464, 4632803678555104870
    var_264 = 4671216629099947622;
    var_272 = 1;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    pri = fun_2048()
    var_288 = 0;
    var_296 = 4631952216750555136;
    var_304 = 2;
    OP_PUSH5_C 4670831596620574884, 4637124319447613440, 4671221288280470323, 4670881420989987553, 4634572045096289567
    var_312 = 4671218006238261412;
    var_320 = 150;
    pri = EvCameraMove(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C -5101394463941815777, -7856618442502275419
    var_368 = 56;
    pri = fun_1BB8(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_1D00(var_376)
    var_392 = 0;
    pri = fun_1DC0()
    var_400 = 15;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    pri = float(var_440)
    var_448 = pri;
    var_456 = -7856618442502275419;
    var_464 = 40;
    pri = fun_0728(var_456, var_448, var_440, var_432, var_424)
    var_472 = -7856618442502275419;
    var_480 = 8;
    pri = fun_07D0(var_472)
    var_488 = 1;
    var_496 = 1;
    var_504 = -1;
    var_512 = -1;
    var_520 = 0;
    var_528 = 1;
    var_536 = -7856618442502275419;
    var_544 = 56;
    pri = fun_3E98(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C -5101397762476700410, -7856618442502275419
    var_592 = 56;
    pri = fun_1BB8(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_1D00(var_600)
    var_616 = 0;
    pri = fun_1DC0()
    var_624 = 1;
    var_632 = 3;
    var_640 = 0;
    var_648 = 1;
    var_656 = -7856618442502275419;
    var_664 = 40;
    pri = fun_61D0(var_656, var_648, var_640, var_632, var_624)
    var_672 = 30;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C -5101396662965072199, -7856618442502275419
    var_728 = 56;
    pri = fun_1BB8(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_1D00(var_736)
    var_752 = 0;
    pri = fun_1DC0()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_760 = 16;
    pri = fun_20D8(var_752, var_744)
    var_768 = 3;
    var_776 = 10;
    OP_PUSH2_C 4634743674463338889, 4611686018427387904
    var_784 = 32;
    pri = fun_2140(var_776, var_768, var_760, var_752)
    var_792 = 31072;
    pri = SoundPostEvent(var_792)
    OP_PUSH2_C -4592728678745925222, 4631952216750555136
    var_800 = 2;
    OP_PUSH5_C 4670831780788772536, 4638663283882778952, 4671223786920644444, 4670855681422781317, 4639687500954284851
    var_808 = 4671221159087854060;
    var_816 = 10;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 1;
    var_832 = 1;
    var_840 = -1;
    var_848 = -1;
    var_856 = 0;
    var_864 = 11;
    var_872 = -7856618442502275419;
    var_880 = 56;
    pri = fun_3E98(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 6;
    var_896 = -7856618442502275419;
    var_904 = 16;
    pri = fun_0F98(var_896, var_888)
    var_912 = 7;
    var_920 = 8;
    pri = fun_0060(var_912)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 101;
    var_960 = -1;
    OP_PUSH2_C -5101399961499956832, -7856618442502275419
    var_968 = 56;
    pri = fun_1BB8(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_1D00(var_976)
    var_992 = 0;
    pri = fun_1DC0()
    var_1000 = 0;
    pri = fun_2048()
    var_1008 = 3;
    var_1016 = 10;
    OP_PUSH2_C 4634291555281997398, 4611686018427387904
    var_1024 = 32;
    pri = fun_2140(var_1016, var_1008, var_1000, var_992)
    var_1032 = 31200;
    pri = SoundPostEvent(var_1032)
    var_1040 = 1;
    var_1048 = 1;
    var_1056 = -1;
    OP_PUSH2_C 8802641224559852288, -7856618442502275419
    var_1064 = 40;
    pri = fun_0F00(var_1056, var_1048, var_1040, var_1032, var_1024)
    OP_PUSH2_C 4625196817309499392, 4631952216750555136
    var_1072 = 2;
    OP_PUSH5_C 4670832127134935286, 4639533393404535767, 4671221469699888906, 4670843204714585129, 4639103088533889352
    var_1080 = 4671213979276924682;
    var_1088 = 10;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 7;
    var_1104 = 8;
    pri = fun_0060(var_1096)
    var_1112 = 0;
    var_1120 = 3;
    var_1128 = 0;
    var_1136 = 101;
    var_1144 = -1;
    OP_PUSH2_C -5101398861988328621, -7856618442502275419
    var_1152 = 56;
    pri = fun_1BB8(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_1D00(var_1160)
    var_1176 = 0;
    pri = fun_1DC0()
    var_1184 = 0;
    pri = fun_2048()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1192 = 3;
    var_1200 = 1;
    var_1208 = 32;
    pri = fun_2198(var_1200, var_1192, var_1184, var_1176)
    var_1216 = -7856618442502275419;
    pri = FlagSet(var_1216)
    var_1224 = 8594007528122057589;
    pri = FlagSet(var_1224)
    var_1232 = 22;
    var_1240 = 0;
    var_1248 = 2;
    var_1256 = 0;
    var_1264 = 143;
    var_1272 = 40;
    pri = fun_1DF0(var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1280 = 0;
    pri = fun_1F08()
    OP_JZER lab_9348
    var_1288 = -7856618442502275419;
    pri = FlagReset(var_1288)
    var_1296 = 8594007528122057589;
    pri = FlagReset(var_1296)
    var_1304 = 0;
    pri = fun_1FF8()
// lab_9348
    var_8 = -7856618442502275419;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 8594007528122057589;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 0;
    pri = fun_0438()
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4640537203540230144, 4671015940740087808, 4671265255001686016, 8594007528122057589
    var_64 = 48;
    pri = fun_05E0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -1;
    var_80 = -7856618442502275419;
    var_88 = 16;
    pri = fun_0F58(var_80, var_72)
    var_96 = -7856618442502275419;
    var_104 = 8;
    pri = fun_1048(var_96)
    var_112 = 1;
    var_120 = 3;
    var_128 = 0;
    var_136 = 11;
    var_144 = -7856618442502275419;
    var_152 = 40;
    pri = fun_61D0(var_144, var_136, var_128, var_120, var_112)
    var_160 = -7856618442502275419;
    var_168 = 8;
    pri = fun_09A8(var_160)
    var_176 = 1;
    var_184 = 0;
    pri = float(var_184)
    var_192 = pri;
    var_200 = -7856618442502275419;
    var_208 = 24;
    pri = fun_0638(var_200, var_192, var_184)
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 0;
    OP_PUSH5_C 4670984203336952054, 4635440395399441940, 4671212049634017935, 4671095410691764388, 4643297417530599014
    var_240 = 4671209578481634509;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 1;
    var_264 = -1;
    var_272 = -1;
    var_280 = 3;
    var_288 = 0;
    var_296 = 1;
    var_304 = -7856618442502275419;
    var_312 = 56;
    pri = fun_22B8(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_320 = 6;
    var_328 = 8802641224559852288;
    var_336 = 16;
    pri = fun_0F98(var_328, var_320)
    var_344 = 31024;
    var_352 = 8;
    var_360 = 16;
    pri = fun_0280(var_352, var_344)
    var_368 = 0;
    pri = fun_0350()
    var_376 = 0;
    var_384 = 3;
    var_392 = 0;
    var_400 = 100;
    var_408 = -1;
    OP_PUSH2_C -5101384568337161878, -7856618442502275419
    var_416 = 56;
    pri = fun_1BB8(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_1D00(var_424)
    var_440 = 0;
    pri = fun_1DC0()
    var_448 = 0;
    var_456 = 3;
    var_464 = 0;
    var_472 = 100;
    var_480 = -1;
    OP_PUSH2_C -5101383468825533667, -7856618442502275419
    var_488 = 56;
    pri = fun_1BB8(var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_496 = 1;
    var_504 = 8;
    pri = fun_1D00(var_496)
    var_512 = 0;
    pri = fun_1DC0()
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    var_544 = 0;
    OP_PUSH2_C 8802641224559852288, 8594007528122057589
    var_552 = 48;
    pri = fun_0778(var_544, var_536, var_528, var_520, var_512, var_504)
    var_560 = 4;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    OP_PUSH2_C 8594007528122057589, 8802641224559852288
    var_608 = 48;
    pri = fun_0778(var_600, var_592, var_584, var_576, var_568, var_560)
    var_616 = 8594007528122057589;
    var_624 = 8;
    pri = fun_07D0(var_616)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C -3157825944338763198, 8594007528122057589
    var_672 = 56;
    pri = fun_1BB8(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 1;
    var_688 = 8;
    pri = fun_1D00(var_680)
    var_696 = 0;
    pri = fun_1DC0()
    var_704 = 8802641224559852288;
    var_712 = 8;
    pri = fun_07D0(var_704)
    var_720 = 20;
    var_728 = 8;
    pri = fun_0060(var_720)
    var_736 = 0;
    var_744 = 4631952216750555136;
    var_752 = 0;
    OP_PUSH5_C 4670809293027205448, 4633562253617340088, 4671228127242795090, 4670655262443270308, 4642954018059012014
    var_760 = 4671228201459829965;
    var_768 = 1;
    pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 1;
    var_784 = 0;
    var_792 = 4641240890982006784;
    var_800 = 0;
    var_808 = 0;
    OP_PUSH4_C 4670531330990145536, 4671170147245883392, 4611686018427387904, 8802641224559852288
    var_816 = 72;
    pri = fun_06B0(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 1;
    var_832 = 0;
    var_840 = 4641240890982006784;
    var_848 = 0;
    var_856 = 0;
    OP_PUSH4_C 4670531330990145536, 4671264705245872128, 4611686018427387904, 8594007528122057589
    var_864 = 72;
    pri = fun_06B0(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = 70;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 4631952216750555136;
    var_904 = 0;
    OP_PUSH5_C 4670801948289531904, 4639184012589693665, 4671232066243201597, 4670798935627671798, 4639592854993365893
    var_912 = 4671195174879310643;
    var_920 = 1;
    pri = EvCameraMove(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_928 = 1;
    var_936 = 8;
    pri = fun_0060(var_928)
    var_944 = 0;
    var_952 = 4631952216750555136;
    var_960 = 3;
    OP_PUSH5_C 4670821024816273818, 4639184012589693665, 4671230504936690156, 4670818012154413711, 4639592854993365893
    var_968 = 4671193613572799201;
    var_976 = 30;
    pri = EvCameraMove(var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_984 = 0;
    var_992 = 0;
    var_1000 = 0;
    var_1008 = 180;
    pri = float(var_1008)
    var_1016 = pri;
    var_1024 = -7856618442502275419;
    var_1032 = 40;
    pri = fun_0728(var_1024, var_1016, var_1008, var_1000, var_992)
    var_1040 = -7856618442502275419;
    var_1048 = 8;
    pri = fun_07D0(var_1040)
    var_1056 = 1;
    var_1064 = -1;
    var_1072 = -1;
    var_1080 = 3;
    var_1088 = 0;
    var_1096 = 1;
    var_1104 = -7856618442502275419;
    var_1112 = 56;
    pri = fun_22B8(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1120 = 0;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 100;
    var_1152 = -1;
    OP_PUSH2_C -5100401604941730469, -7856618442502275419
    var_1160 = 56;
    pri = fun_1BB8(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 1;
    var_1176 = 8;
    pri = fun_1D00(var_1168)
    var_1184 = 0;
    pri = fun_1DC0()
    var_1192 = 8802641224559852288;
    var_1200 = 8;
    pri = fun_07D0(var_1192)
    var_1208 = 8594007528122057589;
    var_1216 = 8;
    pri = fun_07D0(var_1208)
    var_1224 = 1;
    var_1232 = 0;
    var_1240 = 30976;
    var_1248 = 8;
    var_1256 = 32;
    pri = fun_02E0(var_1248, var_1240, var_1232, var_1224)
    var_1264 = 0;
    pri = fun_0350()
    var_1272 = 8802641224559852288;
    var_1280 = 8;
    pri = fun_1048(var_1272)
    var_1288 = 3;
    var_1296 = 0;
    pri = EvCameraEnd(var_1296, var_1288)
    pri = 0;
    return pri;
}
// fun_9E60
fun_9E60() {
    pri = 0;
    return pri;
}
// fun_9E78
fun_9E78() {
    var_8 = -7856618442502275419;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 1520678507684672495;
    pri = VanishFlagSet(var_24)
    var_32 = 5330537022675391310;
    pri = VanishFlagSet(var_32)
    var_40 = 1660;
    var_48 = 8;
    pri = fun_8440(var_40)
    var_56 = -6558260026864450221;
    pri = FlagSet(var_56)
    pri = 0;
    return pri;
}
// fun_9F50
fun_9F50() {
    OP_PUSH2_C 8594007528122057589, 7206095007283712967
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 4093337938601802975;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_9FC0
fun_9FC0() {
    var_8 = 0;
    pri = fun_8610()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8678()
    var_24 = 0;
    pri = fun_86D0()
    var_32 = 0;
    pri = fun_86E8()
    var_40 = 0;
    pri = fun_8700()
    var_48 = 0;
    pri = fun_9E60()
    var_56 = 0;
    pri = fun_9E78()
    var_64 = 0;
    pri = fun_9F50()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A0C8
fun_A0C8() {
    var_8 = 0;
    pri = fun_86D0()
    var_16 = 0;
    pri = fun_9E78()
    pri = 0;
    return pri;
}
// fun_A110
fun_A110() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8128(var_40, var_32, var_24, var_16, var_8)
    pri = EvCameraStart()
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4640537203540230144, 4671015940740087808, 4671170147245883392, 8802641224559852288
    var_72 = 48;
    pri = fun_05E0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4640537203540230144, 4671111873129611264, 4671264705245872128, 8594007528122057589
    var_96 = 48;
    pri = fun_05E0(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 1;
    var_128 = 0;
    var_136 = 4641240890982006784;
    var_144 = 0;
    var_152 = 0;
    OP_PUSH4_C 4671015940740087808, 4671265255001686016, 4607182418800017408, 8594007528122057589
    var_160 = 72;
    pri = fun_06B0(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    var_176 = 4631952216750555136;
    var_184 = 0;
    OP_PUSH5_C 4671009744992065290, 4639812757318921093, 4671164347322046874, 4670946847429398364, 4626871593420927795
    var_192 = 4671187695451462697;
    var_200 = 1;
    pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 0;
    pri = fun_2048()
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 3;
    OP_PUSH5_C 4671012804383169577, 4635607873010584781, 4671197538829310362, 4670976220882534400, 4638184072734929060
    var_240 = 4671145949743735112;
    var_248 = 90;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 31024;
    var_264 = 8;
    var_272 = 16;
    pri = fun_0280(var_264, var_256)
    var_280 = 0;
    pri = fun_0350()
    var_288 = 0;
    pri = fun_2048()
    var_296 = 30;
    var_304 = 8;
    pri = fun_0060(var_296)
    var_312 = 1;
    var_320 = 0;
    var_328 = 30976;
    var_336 = 8;
    var_344 = 32;
    pri = fun_02E0(var_336, var_328, var_320, var_312)
    var_352 = 0;
    pri = fun_0350()
    var_360 = 8802641224559852288;
    var_368 = 8;
    pri = fun_0FD8(var_360)
    var_376 = 8594007528122057589;
    var_384 = 8;
    pri = fun_07D0(var_376)
    var_392 = 3;
    var_400 = 0;
    pri = EvCameraEnd(var_400, var_392)
    var_408 = 31328;
    pri = SoundPostEvent(var_408)
    var_416 = 31024;
    var_424 = 8;
    var_432 = 16;
    pri = fun_0280(var_424, var_416)
    var_440 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
