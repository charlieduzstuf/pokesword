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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
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
    pri = fun_10C0(var_8)
    OP_JZER lab_0848
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10F0(var_24)
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
    pri = fun_10C0(var_8)
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
    pri = fun_0CD0(var_8)
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
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BF0
// lab_0BF0
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C48
    pri = 0;
    return pri;
// lab_0C48
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C88
    pri = 0;
    return pri;
// lab_0C88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BF0
    pri = 0;
    return pri;
}
// fun_0CD0
fun_0CD0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D58
    pri = 0;
    return pri;
// lab_0D58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10C0(var_8)
    OP_JZER lab_0E88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB0
    OP_ZERO_P_S 64
// lab_0E88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC0
    OP_CONST_S 64, 1
// lab_0EC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF8
    OP_CONST_S 72, 1
// lab_0EF8
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
// lab_0DB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DD8
    OP_ZERO_P_S 72
// lab_0DD8
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
    OP_JUMP lab_0F98
// lab_0F98
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1028
fun_1028() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C0
fun_10C0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10F0
fun_10F0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1120
fun_1120() {
    OP_JUMP lab_1138
// lab_1138
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_11C8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_11B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_11C8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1258
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1248
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_1258
    pri = 0;
    return pri;
// lab_1248
    OP_JUMP lab_1268
// lab_1268
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1138
    pri = 0;
    return pri;
// lab_11B8
    OP_JUMP lab_1268
}
// fun_12A8
fun_12A8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1120(var_40)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1390
fun_1390() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
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
// switch_19E0
        case default:
        {
// switch_19E0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A28
// lab_1A28
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
            OP_JNZ lab_1AD0
            var_88 = 0;
            pri = fun_1C88()
// lab_1AD0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19E0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15C8
                case default:
                {
// switch_15C8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1640
// lab_1640
                    OP_JUMP lab_1A28
                }
                case 0x0:
                {
// switch_15C8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1640
                }
                case 0x1:
                {
// switch_15C8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1640
                }
                case 0x2:
                {
// switch_15C8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1640
                }
                case 0x3:
                {
// switch_15C8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1640
                }
                case 0x4:
                {
// switch_15C8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1640
                }
                case 0x5:
                {
// switch_15C8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1640
                }
            }
        }
        case 0x65:
        {
// switch_19E0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1780
                case default:
                {
// switch_1780_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17F8
// lab_17F8
                    OP_JUMP lab_1A28
                }
                case 0x0:
                {
// switch_1780_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17F8
                }
                case 0x1:
                {
// switch_1780_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17F8
                }
                case 0x2:
                {
// switch_1780_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17F8
                }
                case 0x3:
                {
// switch_1780_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17F8
                }
                case 0x4:
                {
// switch_1780_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17F8
                }
                case 0x5:
                {
// switch_1780_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17F8
                }
            }
        }
        case 0x66:
        {
// switch_19E0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1938
                case default:
                {
// switch_1938_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19B0
// lab_19B0
                    OP_JUMP lab_1A28
                }
                case 0x0:
                {
// switch_1938_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19B0
                }
                case 0x1:
                {
// switch_1938_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19B0
                }
                case 0x2:
                {
// switch_1938_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19B0
                }
                case 0x3:
                {
// switch_1938_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19B0
                }
                case 0x4:
                {
// switch_1938_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19B0
                }
                case 0x5:
                {
// switch_1938_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19B0
                }
            }
        }
    }
}
// fun_1AE8
fun_1AE8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0970(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1B90
    pri = 1;
    return pri;
// lab_1B90
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1BD8
fun_1BD8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AE8(var_8)
    arg_2 = pri;
// lab_1C28
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
    OP_JUMP lab_1CA0
// lab_1CA0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CE0
    pri = 0;
    return pri;
// lab_1CE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CA0
    pri = 0;
    return pri;
}
// fun_1D20
fun_1D20() {
    var_8 = 0;
    pri = fun_1C88()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1DD0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1DD0
    pri = 0;
    return pri;
}
// fun_1DE0
fun_1DE0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1E10
fun_1E10() {
    OP_JUMP lab_1E28
// lab_1E28
    pri = EvCameraMoveWait_()
    OP_JZER lab_1E60
    pri = 0;
    return pri;
// lab_1E60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E28
    pri = 0;
    return pri;
}
// fun_1EA0
fun_1EA0() {
    pri = arg_6;
    OP_JNZ lab_1ED8
    var_8 = 0;
    pri = fun_0FA8()
// lab_1ED8
    pri = arg_1;
    switch (pri) {
// switch_3440
        case default:
        {
// switch_3440_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3790
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3790
            pri = 1;
            OP_JUMP lab_3798
// lab_3790
            pri = 0;
// lab_3798
            OP_JZER lab_38F0
            var_16 = 8320;
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
            OP_JUMP lab_3950
// lab_38F0
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
// lab_3950
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_39B0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3A10
// lab_39B0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3A10
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3A10
            pri = arg_2;
            OP_JZER lab_3A50
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A50
            var_8 = 0;
            pri = fun_0FE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3440_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1:
        {
// switch_3440_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x2:
        {
// switch_3440_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x3:
        {
// switch_3440_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x4:
        {
// switch_3440_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x5:
        {
// switch_3440_case_0x5
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0x6:
        {
// switch_3440_case_0x6
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0x7:
        {
// switch_3440_case_0x7
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0x8:
        {
// switch_3440_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x9:
        {
// switch_3440_case_0x9
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0xa:
        {
// switch_3440_case_0xa
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0xb:
        {
// switch_3440_case_0xb
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0xc:
        {
// switch_3440_case_0xc
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0xd:
        {
// switch_3440_case_0xd
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0xe:
        {
// switch_3440_case_0xe
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0xf:
        {
// switch_3440_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x10:
        {
// switch_3440_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x11:
        {
// switch_3440_case_0x11
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0x12:
        {
// switch_3440_case_0x12
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0x13:
        {
// switch_3440_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x14:
        {
// switch_3440_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x15:
        {
// switch_3440_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x16:
        {
// switch_3440_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x17:
        {
// switch_3440_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x18:
        {
// switch_3440_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x19:
        {
// switch_3440_case_0x19
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3440_case_default
        }
        case 0x1a:
        {
// switch_3440_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F8(var_48, var_40)
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
            pri = fun_0D08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3440_case_default
        }
        case 0x1b:
        {
// switch_3440_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F8(var_48, var_40)
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
            pri = fun_0D08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3440_case_default
        }
        case 0x1c:
        {
// switch_3440_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08F8(var_48, var_40)
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
            pri = fun_0D08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3440_case_default
        }
        case 0x1d:
        {
// switch_3440_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1e:
        {
// switch_3440_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x1f:
        {
// switch_3440_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x20:
        {
// switch_3440_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x21:
        {
// switch_3440_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x22:
        {
// switch_3440_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x23:
        {
// switch_3440_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x24:
        {
// switch_3440_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x25:
        {
// switch_3440_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x26:
        {
// switch_3440_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x27:
        {
// switch_3440_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x28:
        {
// switch_3440_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
        case 0x29:
        {
// switch_3440_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3440_case_default
        }
    }
}
// fun_3A80
fun_3A80() {
    pri = arg_5;
    OP_JNZ lab_3AB8
    var_8 = 0;
    pri = fun_0FA8()
// lab_3AB8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3B08
    OP_CONST_S -8, -1
// lab_3B08
    pri = arg_1;
    switch (pri) {
// switch_55C0
        case default:
        {
// switch_55C0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5A68
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0970(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A68
            pri = 1;
            OP_JUMP lab_5A70
// lab_5A68
            pri = 0;
// lab_5A70
            OP_JZER lab_5AC0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5D18
// lab_5AC0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5B28
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5B28
            pri = 1;
            OP_JUMP lab_5B30
// lab_5B28
            pri = 0;
// lab_5B30
            OP_JZER lab_5CB8
            var_16 = 28456;
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
            OP_JUMP lab_5D18
// lab_5CB8
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
// lab_5D18
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5D88
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5D88
            var_8 = 0;
            pri = fun_0FE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_55C0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1:
        {
// switch_55C0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2:
        {
// switch_55C0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x3:
        {
// switch_55C0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x4:
        {
// switch_55C0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x5:
        {
// switch_55C0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD0(var_40)
            OP_JUMP switch_55C0_case_default
        }
        case 0x6:
        {
// switch_55C0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x7:
        {
// switch_55C0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x8:
        {
// switch_55C0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x9:
        {
// switch_55C0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0xa:
        {
// switch_55C0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0xb:
        {
// switch_55C0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0xc:
        {
// switch_55C0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0xd:
        {
// switch_55C0_case_0xd
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0xe:
        {
// switch_55C0_case_0xe
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0xf:
        {
// switch_55C0_case_0xf
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x10:
        {
// switch_55C0_case_0x10
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x11:
        {
// switch_55C0_case_0x11
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x12:
        {
// switch_55C0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x13:
        {
// switch_55C0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x14:
        {
// switch_55C0_case_0x14
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x15:
        {
// switch_55C0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x16:
        {
// switch_55C0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x17:
        {
// switch_55C0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x18:
        {
// switch_55C0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x19:
        {
// switch_55C0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1a:
        {
// switch_55C0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1b:
        {
// switch_55C0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1c:
        {
// switch_55C0_case_0x1c
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1d:
        {
// switch_55C0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1e:
        {
// switch_55C0_case_0x1e
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x1f:
        {
// switch_55C0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x20:
        {
// switch_55C0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x21:
        {
// switch_55C0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x22:
        {
// switch_55C0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x23:
        {
// switch_55C0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x24:
        {
// switch_55C0_case_0x24
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x25:
        {
// switch_55C0_case_0x25
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x26:
        {
// switch_55C0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x27:
        {
// switch_55C0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x28:
        {
// switch_55C0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x29:
        {
// switch_55C0_case_0x29
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2a:
        {
// switch_55C0_case_0x2a
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2b:
        {
// switch_55C0_case_0x2b
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2c:
        {
// switch_55C0_case_0x2c
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2d:
        {
// switch_55C0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2e:
        {
// switch_55C0_case_0x2e
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x2f:
        {
// switch_55C0_case_0x2f
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x30:
        {
// switch_55C0_case_0x30
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x31:
        {
// switch_55C0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x32:
        {
// switch_55C0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x33:
        {
// switch_55C0_case_0x33
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x34:
        {
// switch_55C0_case_0x34
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x35:
        {
// switch_55C0_case_0x35
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x36:
        {
// switch_55C0_case_0x36
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x37:
        {
// switch_55C0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x38:
        {
// switch_55C0_case_0x38
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
            pri = fun_0D08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_55C0_case_default
        }
        case 0x39:
        {
// switch_55C0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x3a:
        {
// switch_55C0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x3b:
        {
// switch_55C0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x3c:
        {
// switch_55C0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x3d:
        {
// switch_55C0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
        case 0x3e:
        {
// switch_55C0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            OP_JUMP switch_55C0_case_default
        }
    }
}
// fun_5DB8
fun_5DB8() {
    pri = arg_4;
    OP_JNZ lab_5DF0
    var_8 = 0;
    pri = fun_0FA8()
// lab_5DF0
    pri = arg_1;
    switch (pri) {
// switch_71C8
        case default:
        {
// switch_71C8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_10C0(var_264)
            OP_JZER lab_7790
            pri = arg_3;
            switch (pri) {
// switch_7738
                case default:
                {
// switch_7738_case_default
                    OP_JUMP lab_7A48
// lab_7A48
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7AB8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7AB8
                    var_8 = 0;
                    pri = fun_0FE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7738_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7738_case_default
                }
                case 0x2:
                {
// switch_7738_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7738_case_default
                }
                case 0x3:
                {
// switch_7738_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7738_case_default
                }
            }
// lab_7790
            pri = arg_1;
            OP_JZER lab_77E0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_77E0
            pri = 0;
            OP_JUMP lab_77E8
// lab_77E0
            pri = 1;
// lab_77E8
            OP_JZER lab_7850
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0970(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7850
            pri = 1;
            OP_JUMP lab_7858
// lab_7850
            pri = 0;
// lab_7858
            OP_JZER lab_78A8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7A48
// lab_78A8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7910
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7A48
// lab_7910
            var_16 = 29880;
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
// switch_71C8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1:
        {
// switch_71C8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2:
        {
// switch_71C8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x3:
        {
// switch_71C8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x4:
        {
// switch_71C8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x5:
        {
// switch_71C8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD0(var_40)
            OP_JUMP switch_71C8_case_default
        }
        case 0x6:
        {
// switch_71C8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x7:
        {
// switch_71C8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x8:
        {
// switch_71C8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x9:
        {
// switch_71C8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0xa:
        {
// switch_71C8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0xb:
        {
// switch_71C8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0xc:
        {
// switch_71C8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0xd:
        {
// switch_71C8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0xe:
        {
// switch_71C8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0xf:
        {
// switch_71C8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x10:
        {
// switch_71C8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x11:
        {
// switch_71C8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x12:
        {
// switch_71C8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x13:
        {
// switch_71C8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x14:
        {
// switch_71C8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x15:
        {
// switch_71C8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x16:
        {
// switch_71C8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x17:
        {
// switch_71C8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x18:
        {
// switch_71C8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x19:
        {
// switch_71C8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1a:
        {
// switch_71C8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1b:
        {
// switch_71C8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1c:
        {
// switch_71C8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1d:
        {
// switch_71C8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1e:
        {
// switch_71C8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x1f:
        {
// switch_71C8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x20:
        {
// switch_71C8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x21:
        {
// switch_71C8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x22:
        {
// switch_71C8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x23:
        {
// switch_71C8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x24:
        {
// switch_71C8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x25:
        {
// switch_71C8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x26:
        {
// switch_71C8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x27:
        {
// switch_71C8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x28:
        {
// switch_71C8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x29:
        {
// switch_71C8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2a:
        {
// switch_71C8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2b:
        {
// switch_71C8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2c:
        {
// switch_71C8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2d:
        {
// switch_71C8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2e:
        {
// switch_71C8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x2f:
        {
// switch_71C8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x30:
        {
// switch_71C8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x31:
        {
// switch_71C8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x32:
        {
// switch_71C8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x33:
        {
// switch_71C8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x34:
        {
// switch_71C8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x35:
        {
// switch_71C8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x36:
        {
// switch_71C8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x37:
        {
// switch_71C8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x38:
        {
// switch_71C8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x39:
        {
// switch_71C8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x3a:
        {
// switch_71C8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x3b:
        {
// switch_71C8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x3c:
        {
// switch_71C8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x3d:
        {
// switch_71C8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
        case 0x3e:
        {
// switch_71C8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            OP_JUMP switch_71C8_case_default
        }
    }
}
// fun_7AE8
fun_7AE8() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7B70
// lab_7B70
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7CF0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7CE0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7C30
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7C30
    pri = 0;
    OP_JUMP lab_7C38
// lab_7CF0
    pri = 0;
    return pri;
// lab_7CE0
    OP_JUMP lab_7B68
// lab_7B68
    OP_INC_P_S -936
// lab_7C30
    pri = 1;
// lab_7C38
    OP_JZER lab_7CB0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7CA8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7CB0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7CA8
}
// fun_7D10
fun_7D10() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7DA8
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1368()
// lab_7DA8
    pri = arg_4;
    OP_JZER lab_7DE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1390(var_8)
// lab_7DE0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7E38
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7E38
    pri = 0;
    OP_JUMP lab_7E40
// lab_7E38
    pri = 1;
// lab_7E40
    OP_JZER lab_7F08
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7F08
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7EE0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_12A8(var_32, var_24)
    OP_JUMP lab_7F08
// lab_7F08
    pri = arg_2;
    OP_JZER lab_7FE0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7FB0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1080(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0678(var_40)
    OP_JUMP lab_7FE0
// lab_7FE0
    pri = arg_3;
    OP_JZER lab_8018
    var_8 = 1;
    var_16 = 8;
    pri = fun_1330(var_8)
// lab_8018
    pri = 0;
    return pri;
// lab_7FB0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1080(var_16, var_8)
// lab_7EE0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_12A8(var_16, var_8)
}
// fun_8028
fun_8028() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7AE8(var_24)
    pri = 0;
    return pri;
}
// fun_8090
fun_8090() {
    pri = g_mode;
    switch (pri) {
// switch_8150
        case default:
        {
// switch_8150_case_default
            pri = CommandNOP()
            OP_JUMP lab_8198
// lab_8198
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8150_case_0x0
            var_8 = 0;
            pri = fun_81A8()
            OP_JUMP lab_8198
        }
        case 0x2701272ae5c58dc5:
        {
// switch_8150_case_0x2701272ae5c58dc5
            var_8 = 0;
            pri = fun_8E80()
            OP_JUMP lab_8198
        }
        case 0x4fac052783b291e9:
        {
// switch_8150_case_0x4fac052783b291e9
            var_8 = 0;
            pri = fun_8F70()
            OP_JUMP lab_8198
        }
    }
}
// fun_81A8
fun_81A8() {
    pri = 0;
    return pri;
}
// fun_81C0
fun_81C0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7D10(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8218
fun_8218() {
    pri = 0;
    return pri;
}
// fun_8230
fun_8230() {
    pri = 0;
    return pri;
}
// fun_8248
fun_8248() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = -2581757342254071700;
    var_24 = 16;
    pri = fun_0638(var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    var_48 = 102;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 24496;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 15308;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 1854599915766895833;
    var_104 = 48;
    pri = fun_05E0(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 1;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 0;
    var_136 = 4627983419578934886;
    var_144 = 0;
    OP_PUSH5_C 4672401300652073943, -4566562874862065418, 4669435117897252864, 4672433807713349140, -4566649010602985390
    var_152 = 4669359823340982764;
    var_160 = 1;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_1E10()
    OP_PUSH2_C 4616527388026811187, 4628799697011395789
    var_176 = 3;
    OP_PUSH5_C 4672673858589483336, -4567223263535940239, 4669584338117816484, 4672719809929187164, -4567400856654058619
    var_184 = 4669546938229797683;
    var_192 = 120;
    pri = EvCameraMove(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_200 = 1;
    var_208 = 0;
    var_216 = 4641240890982006784;
    var_224 = 0;
    var_232 = 0;
    OP_PUSH4_C 4672418642699223040, 4669575305629794304, 4607182418800017408, 8802641224559852288
    var_240 = 72;
    pri = fun_06B0(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 10;
    var_256 = 8;
    pri = fun_0060(var_248)
    var_264 = 31016;
    var_272 = 8;
    var_280 = 16;
    pri = fun_0280(var_272, var_264)
    var_288 = 0;
    pri = fun_0350()
    var_296 = 8802641224559852288;
    var_304 = 8;
    pri = fun_07D0(var_296)
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 100;
    pri = float(var_336)
    var_344 = pri;
    var_352 = 8802641224559852288;
    var_360 = 40;
    pri = fun_0728(var_352, var_344, var_336, var_328, var_320)
    var_368 = 8802641224559852288;
    var_376 = 8;
    pri = fun_07D0(var_368)
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 3701692096900071546, 1854599915766895833
    var_424 = 56;
    pri = fun_1BD8(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_1D20(var_432)
    var_448 = 0;
    pri = fun_1DE0()
    var_456 = 1;
    var_464 = 1;
    var_472 = -1;
    var_480 = -1;
    var_488 = 0;
    var_496 = 22;
    var_504 = 1854599915766895833;
    var_512 = 56;
    pri = fun_3A80(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 0;
    var_528 = 3;
    var_536 = 0;
    var_544 = 100;
    var_552 = -1;
    OP_PUSH2_C 3701690997388443335, 1854599915766895833
    var_560 = 56;
    pri = fun_1BD8(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 8;
    pri = fun_1D20(var_568)
    var_584 = 0;
    pri = fun_1DE0()
    var_592 = 31064;
    var_600 = 1854599915766895833;
    var_608 = 16;
    pri = fun_0BA8(var_600, var_592)
    var_616 = 1;
    var_624 = 3;
    var_632 = 0;
    var_640 = 22;
    var_648 = 1854599915766895833;
    var_656 = 40;
    pri = fun_5DB8(var_648, var_640, var_632, var_624, var_616)
    var_664 = 1854599915766895833;
    var_672 = 8;
    pri = fun_09A8(var_664)
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    OP_PUSH2_C 8802641224559852288, 1854599915766895833
    var_712 = 48;
    pri = fun_0778(var_704, var_696, var_688, var_680, var_672, var_664)
    var_720 = 1854599915766895833;
    var_728 = 8;
    pri = fun_07D0(var_720)
    var_736 = 1;
    var_744 = 1;
    var_752 = 70;
    OP_PUSH2_C 1854599915766895833, 8802641224559852288
    var_760 = 40;
    pri = fun_1028(var_752, var_744, var_736, var_728, var_720)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C 3701689897876815124, 1854599915766895833
    var_808 = 56;
    pri = fun_1BD8(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 1;
    var_824 = 8;
    pri = fun_1D20(var_816)
    var_832 = 0;
    pri = fun_1DE0()
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 3;
    var_872 = 0;
    var_880 = 0;
    var_888 = 1854599915766895833;
    var_896 = 56;
    pri = fun_1EA0(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 0;
    var_912 = 3;
    var_920 = 0;
    var_928 = 100;
    var_936 = -1;
    OP_PUSH2_C 3701688798365186913, 1854599915766895833
    var_944 = 56;
    pri = fun_1BD8(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 1854599915766895833;
    var_960 = 8;
    pri = fun_09A8(var_952)
    var_968 = 1;
    var_976 = 8;
    pri = fun_1D20(var_968)
    var_984 = 0;
    pri = fun_1DE0()
    var_992 = 60;
    var_1000 = 8802641224559852288;
    var_1008 = 16;
    pri = fun_1080(var_1000, var_992)
    var_1016 = 0;
    var_1024 = 4628799697011395789;
    var_1032 = 3;
    OP_PUSH5_C 4672548965063684260, -4566541192492765676, 4669474172550271468, 4672594916403388088, -4566628405755080868
    var_1040 = 4669436772662252667;
    var_1048 = 60;
    pri = EvCameraMove(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 1;
    var_1064 = 0;
    var_1072 = 30;
    pri = float(var_1072)
    var_1080 = pri;
    var_1088 = 0;
    pri = float(var_1088)
    var_1096 = pri;
    var_1104 = 0;
    OP_PUSH4_C 4672355145902718976, 4669992570292535296, 4611686018427387904, 1854599915766895833
    var_1112 = 72;
    pri = fun_06B0(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
    var_1120 = 0;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 100;
    var_1152 = -1;
    OP_PUSH2_C 3701687698853558702, 1854599915766895833
    var_1160 = 56;
    pri = fun_1BD8(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = 1;
    var_1176 = 8;
    pri = fun_1D20(var_1168)
    var_1184 = 0;
    pri = fun_1DE0()
    var_1192 = 1854599915766895833;
    var_1200 = 8;
    pri = fun_07D0(var_1192)
    var_1208 = 1;
    var_1216 = 0;
    var_1224 = 30968;
    var_1232 = 8;
    var_1240 = 32;
    pri = fun_02E0(var_1232, var_1224, var_1216, var_1208)
    var_1248 = 0;
    pri = fun_0350()
    var_1256 = 0;
    var_1264 = -2581757342254071700;
    var_1272 = 16;
    pri = fun_0638(var_1264, var_1256)
    var_1280 = 3;
    var_1288 = 1;
    pri = EvCameraEnd(var_1288, var_1280)
    var_1296 = 1854599915766895833;
    var_1304 = 8;
    pri = fun_07D0(var_1296)
    pri = 0;
    return pri;
}
// fun_8D70
fun_8D70() {
    pri = 0;
    return pri;
}
// fun_8D88
fun_8D88() {
    var_8 = 1854599915766895833;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = -2117705809819912762;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 1480;
    var_48 = 8;
    pri = fun_8028(var_40)
    pri = 0;
    return pri;
}
// fun_8E10
fun_8E10() {
    var_8 = 0;
    pri = fun_0438()
    var_16 = 31016;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8E80
fun_8E80() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_81C0()
    var_16 = 0;
    pri = fun_8218()
    var_24 = 0;
    pri = fun_8230()
    var_32 = 0;
    pri = fun_8248()
    var_40 = 0;
    pri = fun_8D70()
    var_48 = 0;
    pri = fun_8D88()
    var_56 = 0;
    pri = fun_8E10()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8F70
fun_8F70() {
    var_8 = 0;
    pri = fun_8218()
    var_16 = 0;
    pri = fun_8D88()
    pri = 0;
    return pri;
}
