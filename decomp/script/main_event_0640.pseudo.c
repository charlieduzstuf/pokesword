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
    pri = fun_0F40(var_8)
    OP_JZER lab_0848
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F70(var_24)
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
    pri = fun_0F40(var_8)
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
    pri = fun_0F40(var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F40
fun_0F40() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F70
fun_0F70() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0FA0
fun_0FA0() {
    OP_JUMP lab_0FB8
// lab_0FB8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1048
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1038
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_1048
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_10C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
// lab_10D8
    pri = 0;
    return pri;
// lab_10C8
    OP_JUMP lab_10E8
// lab_10E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0FB8
    pri = 0;
    return pri;
// lab_1038
    OP_JUMP lab_10E8
}
// fun_1128
fun_1128() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09A8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0FA0(var_40)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_11E8
fun_11E8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1210
fun_1210() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1248
fun_1248() {
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
// switch_1860
        case default:
        {
// switch_1860_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_18A8
// lab_18A8
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
            OP_JNZ lab_1950
            var_88 = 0;
            pri = fun_1B08()
// lab_1950
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1860_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1448
                case default:
                {
// switch_1448_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14C0
// lab_14C0
                    OP_JUMP lab_18A8
                }
                case 0x0:
                {
// switch_1448_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_14C0
                }
                case 0x1:
                {
// switch_1448_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_14C0
                }
                case 0x2:
                {
// switch_1448_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_14C0
                }
                case 0x3:
                {
// switch_1448_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14C0
                }
                case 0x4:
                {
// switch_1448_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_14C0
                }
                case 0x5:
                {
// switch_1448_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_14C0
                }
            }
        }
        case 0x65:
        {
// switch_1860_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1600
                case default:
                {
// switch_1600_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1678
// lab_1678
                    OP_JUMP lab_18A8
                }
                case 0x0:
                {
// switch_1600_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1678
                }
                case 0x1:
                {
// switch_1600_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1678
                }
                case 0x2:
                {
// switch_1600_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1678
                }
                case 0x3:
                {
// switch_1600_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1678
                }
                case 0x4:
                {
// switch_1600_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1678
                }
                case 0x5:
                {
// switch_1600_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1678
                }
            }
        }
        case 0x66:
        {
// switch_1860_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_17B8
                case default:
                {
// switch_17B8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1830
// lab_1830
                    OP_JUMP lab_18A8
                }
                case 0x0:
                {
// switch_17B8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1830
                }
                case 0x1:
                {
// switch_17B8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1830
                }
                case 0x2:
                {
// switch_17B8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1830
                }
                case 0x3:
                {
// switch_17B8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1830
                }
                case 0x4:
                {
// switch_17B8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1830
                }
                case 0x5:
                {
// switch_17B8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1830
                }
            }
        }
    }
}
// fun_1968
fun_1968() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0970(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A10
    pri = 1;
    return pri;
// lab_1A10
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A58
fun_1A58() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1AA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1968(var_8)
    arg_2 = pri;
// lab_1AA8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1248(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    OP_JUMP lab_1B20
// lab_1B20
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B60
    pri = 0;
    return pri;
// lab_1B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B20
    pri = 0;
    return pri;
}
// fun_1BA0
fun_1BA0() {
    var_8 = 0;
    pri = fun_1B08()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C50
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C50
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C90
fun_1C90() {
    OP_JUMP lab_1CA8
// lab_1CA8
    pri = EvCameraMoveWait_()
    OP_JZER lab_1CE0
    pri = 0;
    return pri;
// lab_1CE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1CA8
    pri = 0;
    return pri;
}
// fun_1D20
fun_1D20() {
    pri = arg_6;
    OP_JNZ lab_1D58
    var_8 = 0;
    pri = fun_0E80()
// lab_1D58
    pri = arg_1;
    switch (pri) {
// switch_32C0
        case default:
        {
// switch_32C0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3610
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3610
            pri = 1;
            OP_JUMP lab_3618
// lab_3610
            pri = 0;
// lab_3618
            OP_JZER lab_3770
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
            OP_JUMP lab_37D0
// lab_3770
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
// lab_37D0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3830
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3890
// lab_3830
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3890
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3890
            pri = arg_2;
            OP_JZER lab_38D0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_38D0
            var_8 = 0;
            pri = fun_0EC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_32C0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1:
        {
// switch_32C0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x2:
        {
// switch_32C0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x3:
        {
// switch_32C0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x4:
        {
// switch_32C0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x5:
        {
// switch_32C0_case_0x5
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0x6:
        {
// switch_32C0_case_0x6
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0x7:
        {
// switch_32C0_case_0x7
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0x8:
        {
// switch_32C0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x9:
        {
// switch_32C0_case_0x9
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0xa:
        {
// switch_32C0_case_0xa
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0xb:
        {
// switch_32C0_case_0xb
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0xc:
        {
// switch_32C0_case_0xc
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0xd:
        {
// switch_32C0_case_0xd
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0xe:
        {
// switch_32C0_case_0xe
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0xf:
        {
// switch_32C0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x10:
        {
// switch_32C0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x11:
        {
// switch_32C0_case_0x11
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0x12:
        {
// switch_32C0_case_0x12
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0x13:
        {
// switch_32C0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x14:
        {
// switch_32C0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x15:
        {
// switch_32C0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x16:
        {
// switch_32C0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x17:
        {
// switch_32C0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x18:
        {
// switch_32C0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x19:
        {
// switch_32C0_case_0x19
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1a:
        {
// switch_32C0_case_0x1a
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
            pri = fun_0BE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1b:
        {
// switch_32C0_case_0x1b
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
            pri = fun_0BE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1c:
        {
// switch_32C0_case_0x1c
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
            pri = fun_0BE0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1d:
        {
// switch_32C0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1e:
        {
// switch_32C0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x1f:
        {
// switch_32C0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x20:
        {
// switch_32C0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x21:
        {
// switch_32C0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x22:
        {
// switch_32C0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x23:
        {
// switch_32C0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x24:
        {
// switch_32C0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x25:
        {
// switch_32C0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x26:
        {
// switch_32C0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x27:
        {
// switch_32C0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x28:
        {
// switch_32C0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
        case 0x29:
        {
// switch_32C0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_32C0_case_default
        }
    }
}
// fun_3900
fun_3900() {
    pri = arg_5;
    OP_JNZ lab_3938
    var_8 = 0;
    pri = fun_0E80()
// lab_3938
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3988
    OP_CONST_S -8, -1
// lab_3988
    pri = arg_1;
    switch (pri) {
// switch_5440
        case default:
        {
// switch_5440_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_58E8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0970(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_58E8
            pri = 1;
            OP_JUMP lab_58F0
// lab_58E8
            pri = 0;
// lab_58F0
            OP_JZER lab_5940
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5B98
// lab_5940
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_59A8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_59A8
            pri = 1;
            OP_JUMP lab_59B0
// lab_59A8
            pri = 0;
// lab_59B0
            OP_JZER lab_5B38
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
            OP_JUMP lab_5B98
// lab_5B38
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
// lab_5B98
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5C08
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5C08
            var_8 = 0;
            pri = fun_0EC0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5440_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1:
        {
// switch_5440_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2:
        {
// switch_5440_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3:
        {
// switch_5440_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x4:
        {
// switch_5440_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x5:
        {
// switch_5440_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BA8(var_40)
            OP_JUMP switch_5440_case_default
        }
        case 0x6:
        {
// switch_5440_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x7:
        {
// switch_5440_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x8:
        {
// switch_5440_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x9:
        {
// switch_5440_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xa:
        {
// switch_5440_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xb:
        {
// switch_5440_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xc:
        {
// switch_5440_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0xd:
        {
// switch_5440_case_0xd
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0xe:
        {
// switch_5440_case_0xe
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0xf:
        {
// switch_5440_case_0xf
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x10:
        {
// switch_5440_case_0x10
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x11:
        {
// switch_5440_case_0x11
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x12:
        {
// switch_5440_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x13:
        {
// switch_5440_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x14:
        {
// switch_5440_case_0x14
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x15:
        {
// switch_5440_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x16:
        {
// switch_5440_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x17:
        {
// switch_5440_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x18:
        {
// switch_5440_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x19:
        {
// switch_5440_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1a:
        {
// switch_5440_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1b:
        {
// switch_5440_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1c:
        {
// switch_5440_case_0x1c
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x1d:
        {
// switch_5440_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x1e:
        {
// switch_5440_case_0x1e
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x1f:
        {
// switch_5440_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x20:
        {
// switch_5440_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x21:
        {
// switch_5440_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x22:
        {
// switch_5440_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x23:
        {
// switch_5440_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x24:
        {
// switch_5440_case_0x24
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x25:
        {
// switch_5440_case_0x25
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x26:
        {
// switch_5440_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x27:
        {
// switch_5440_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x28:
        {
// switch_5440_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x29:
        {
// switch_5440_case_0x29
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x2a:
        {
// switch_5440_case_0x2a
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x2b:
        {
// switch_5440_case_0x2b
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x2c:
        {
// switch_5440_case_0x2c
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x2d:
        {
// switch_5440_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x2e:
        {
// switch_5440_case_0x2e
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x2f:
        {
// switch_5440_case_0x2f
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x30:
        {
// switch_5440_case_0x30
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x31:
        {
// switch_5440_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x32:
        {
// switch_5440_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x33:
        {
// switch_5440_case_0x33
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x34:
        {
// switch_5440_case_0x34
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x35:
        {
// switch_5440_case_0x35
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x36:
        {
// switch_5440_case_0x36
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x37:
        {
// switch_5440_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x38:
        {
// switch_5440_case_0x38
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
            pri = fun_0BE0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5440_case_default
        }
        case 0x39:
        {
// switch_5440_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3a:
        {
// switch_5440_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3b:
        {
// switch_5440_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3c:
        {
// switch_5440_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3d:
        {
// switch_5440_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
        case 0x3e:
        {
// switch_5440_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            OP_JUMP switch_5440_case_default
        }
    }
}
// fun_5C38
fun_5C38() {
    pri = arg_4;
    OP_JNZ lab_5C70
    var_8 = 0;
    pri = fun_0E80()
// lab_5C70
    pri = arg_1;
    switch (pri) {
// switch_7048
        case default:
        {
// switch_7048_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0F40(var_264)
            OP_JZER lab_7610
            pri = arg_3;
            switch (pri) {
// switch_75B8
                case default:
                {
// switch_75B8_case_default
                    OP_JUMP lab_78C8
// lab_78C8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7938
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7938
                    var_8 = 0;
                    pri = fun_0EC0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_75B8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_75B8_case_default
                }
                case 0x2:
                {
// switch_75B8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_75B8_case_default
                }
                case 0x3:
                {
// switch_75B8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_75B8_case_default
                }
            }
// lab_7610
            pri = arg_1;
            OP_JZER lab_7660
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7660
            pri = 0;
            OP_JUMP lab_7668
// lab_7660
            pri = 1;
// lab_7668
            OP_JZER lab_76D0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0970(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_76D0
            pri = 1;
            OP_JUMP lab_76D8
// lab_76D0
            pri = 0;
// lab_76D8
            OP_JZER lab_7728
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_78C8
// lab_7728
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7790
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_78C8
// lab_7790
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
// switch_7048_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1:
        {
// switch_7048_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2:
        {
// switch_7048_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x3:
        {
// switch_7048_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x4:
        {
// switch_7048_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x5:
        {
// switch_7048_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BA8(var_40)
            OP_JUMP switch_7048_case_default
        }
        case 0x6:
        {
// switch_7048_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x7:
        {
// switch_7048_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x8:
        {
// switch_7048_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x9:
        {
// switch_7048_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0xa:
        {
// switch_7048_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0xb:
        {
// switch_7048_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0xc:
        {
// switch_7048_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0xd:
        {
// switch_7048_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0xe:
        {
// switch_7048_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0xf:
        {
// switch_7048_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x10:
        {
// switch_7048_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x11:
        {
// switch_7048_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x12:
        {
// switch_7048_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x13:
        {
// switch_7048_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x14:
        {
// switch_7048_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x15:
        {
// switch_7048_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x16:
        {
// switch_7048_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x17:
        {
// switch_7048_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x18:
        {
// switch_7048_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x19:
        {
// switch_7048_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1a:
        {
// switch_7048_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1b:
        {
// switch_7048_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1c:
        {
// switch_7048_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1d:
        {
// switch_7048_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1e:
        {
// switch_7048_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x1f:
        {
// switch_7048_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x20:
        {
// switch_7048_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x21:
        {
// switch_7048_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x22:
        {
// switch_7048_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x23:
        {
// switch_7048_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x24:
        {
// switch_7048_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x25:
        {
// switch_7048_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x26:
        {
// switch_7048_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x27:
        {
// switch_7048_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x28:
        {
// switch_7048_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x29:
        {
// switch_7048_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2a:
        {
// switch_7048_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2b:
        {
// switch_7048_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2c:
        {
// switch_7048_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2d:
        {
// switch_7048_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2e:
        {
// switch_7048_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x2f:
        {
// switch_7048_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x30:
        {
// switch_7048_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x31:
        {
// switch_7048_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x32:
        {
// switch_7048_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x33:
        {
// switch_7048_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x34:
        {
// switch_7048_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x35:
        {
// switch_7048_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x36:
        {
// switch_7048_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x37:
        {
// switch_7048_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x38:
        {
// switch_7048_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x39:
        {
// switch_7048_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x3a:
        {
// switch_7048_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x3b:
        {
// switch_7048_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x3c:
        {
// switch_7048_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x3d:
        {
// switch_7048_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
        case 0x3e:
        {
// switch_7048_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0930(var_24, var_16, var_8)
            OP_JUMP switch_7048_case_default
        }
    }
}
// fun_7968
fun_7968() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7B78(var_16, var_8)
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
    OP_JZER lab_7B60
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7B60
    pri = 0;
    return pri;
}
// fun_7B78
fun_7B78() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0930(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7BC0
fun_7BC0() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7C48
// lab_7C48
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7DC8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7DB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7D08
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7D08
    pri = 0;
    OP_JUMP lab_7D10
// lab_7DC8
    pri = 0;
    return pri;
// lab_7DB8
    OP_JUMP lab_7C40
// lab_7C40
    OP_INC_P_S -936
// lab_7D08
    pri = 1;
// lab_7D10
    OP_JZER lab_7D88
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7D80
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7D88
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7D80
}
// fun_7DE8
fun_7DE8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7E80
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_11E8()
// lab_7E80
    pri = arg_4;
    OP_JZER lab_7EB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1210(var_8)
// lab_7EB8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7F10
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7F10
    pri = 0;
    OP_JUMP lab_7F18
// lab_7F10
    pri = 1;
// lab_7F18
    OP_JZER lab_7FE0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7FE0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7FB8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1128(var_32, var_24)
    OP_JUMP lab_7FE0
// lab_7FE0
    pri = arg_2;
    OP_JZER lab_80B8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8088
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0F00(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0678(var_40)
    OP_JUMP lab_80B8
// lab_80B8
    pri = arg_3;
    OP_JZER lab_80F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_11B0(var_8)
// lab_80F0
    pri = 0;
    return pri;
// lab_8088
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0F00(var_16, var_8)
// lab_7FB8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1128(var_16, var_8)
}
// fun_8100
fun_8100() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7BC0(var_24)
    pri = 0;
    return pri;
}
// fun_8168
fun_8168() {
    pri = g_mode;
    switch (pri) {
// switch_8228
        case default:
        {
// switch_8228_case_default
            pri = CommandNOP()
            OP_JUMP lab_8270
// lab_8270
            pri = 0;
            return pri;
        }
        case 0xa6281922104a9940:
        {
// switch_8228_case_0xa6281922104a9940
            var_8 = 0;
            pri = fun_ADA8()
            OP_JUMP lab_8270
        }
        case 0x0:
        {
// switch_8228_case_0x0
            var_8 = 0;
            pri = fun_8280()
            OP_JUMP lab_8270
        }
        case 0x4405071e5f89b684:
        {
// switch_8228_case_0x4405071e5f89b684
            var_8 = 0;
            pri = fun_AEB0()
            OP_JUMP lab_8270
        }
    }
}
// fun_8280
fun_8280() {
    pri = 0;
    return pri;
}
// fun_8298
fun_8298() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0638(var_16, var_8)
    var_32 = 0;
    var_40 = 3;
    var_48 = 1003091793780467894;
    var_56 = 24;
    pri = fun_7968(var_48, var_40, var_32)
    pri = EvCameraStart()
    var_64 = 0;
    var_72 = 4631952216750555136;
    var_80 = 3;
    OP_PUSH5_C 4666804014059775590, 4637810414703345664, 4663391872137507635, 4667166121721709199, 4644901824897849754
    var_88 = 4663395841374483907;
    var_96 = 60;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    pri = fun_1C90()
    pri = 0;
    return pri;
}
// fun_83C8
fun_83C8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7DE8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8420
fun_8420() {
    pri = 0;
    return pri;
}
// fun_8438
fun_8438() {
    pri = 0;
    return pri;
}
// fun_8450
fun_8450() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 31240;
    pri = SoundPostEvent(var_24)
    var_32 = 1;
    var_40 = 1;
    var_48 = -1;
    var_56 = -1;
    var_64 = 0;
    var_72 = 31;
    var_80 = 1003091793780467894;
    var_88 = 56;
    pri = fun_3900(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = 2;
    OP_PUSH2_C 7428033417069125098, 1003091793780467894
    var_136 = 56;
    pri = fun_1A58(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_1BA0(var_144)
    var_160 = 0;
    pri = fun_1C60()
    var_168 = 1;
    var_176 = 3;
    var_184 = 0;
    var_192 = 31;
    var_200 = 1003091793780467894;
    var_208 = 40;
    pri = fun_5C38(var_200, var_192, var_184, var_176, var_168)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 7;
    var_264 = 6925255011666753037;
    var_272 = 56;
    pri = fun_3900(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_0060(var_280)
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 100;
    var_328 = -1;
    OP_PUSH2_C -3971457863404223763, 6925255011666753037
    var_336 = 56;
    pri = fun_1A58(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_1BA0(var_344)
    var_360 = 0;
    pri = fun_1C60()
    var_368 = 1;
    var_376 = 3;
    var_384 = 0;
    var_392 = 7;
    var_400 = 6925255011666753037;
    var_408 = 40;
    pri = fun_5C38(var_400, var_392, var_384, var_376, var_368)
    var_416 = 1;
    var_424 = 0;
    var_432 = 4641240890982006784;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH4_C 4666962866002198528, 4664064553351380992, 4607182418800017408, 6925251713131868404
    var_456 = 72;
    pri = fun_06B0(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 1;
    var_472 = 8;
    pri = fun_0060(var_464)
    var_480 = 6925255011666753037;
    var_488 = 8;
    pri = fun_09A8(var_480)
    var_496 = 10;
    var_504 = 8;
    pri = fun_0060(var_496)
    var_512 = 1;
    var_520 = 0;
    var_528 = 4641240890982006784;
    var_536 = 0;
    var_544 = 0;
    OP_PUSH4_C 4667010145002192896, 4664017274351386624, 4607182418800017408, 6925255011666753037
    var_552 = 72;
    pri = fun_06B0(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 0;
    var_568 = 3;
    var_576 = 2;
    var_584 = 101;
    var_592 = 2;
    OP_PUSH2_C -5358696361383561102, 8896463344906650392
    var_600 = 56;
    pri = fun_1A58(var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_608 = 30;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = 1;
    var_632 = 0;
    var_640 = 50;
    pri = float(var_640)
    var_648 = pri;
    var_656 = 80;
    pri = float(var_656)
    var_664 = pri;
    var_672 = 1;
    OP_PUSH4_C 4666877104095232000, 4663529091188654080, 4611686018427387904, 8896463344906650392
    var_680 = 72;
    pri = fun_06B0(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 0;
    var_696 = 4631952216750555136;
    var_704 = 2;
    OP_PUSH5_C 4666824355024889446, 4638628099510690120, 4663534544766327849, 4667137484941363773, 4644600294829048463
    var_712 = 4663357490408907080;
    var_720 = 150;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 15;
    var_736 = 8;
    pri = fun_0060(var_728)
    var_744 = 0;
    var_752 = 0;
    var_760 = 1003091793780467894;
    var_768 = 24;
    pri = fun_7968(var_760, var_752, var_744)
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    var_800 = -60;
    pri = float(var_800)
    var_808 = pri;
    var_816 = 6577952962885434863;
    var_824 = 40;
    pri = fun_0728(var_816, var_808, var_800, var_792, var_784)
    var_832 = 15;
    var_840 = 8;
    pri = fun_0060(var_832)
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    var_872 = 0;
    OP_PUSH2_C 8896463344906650392, 1003091793780467894
    var_880 = 48;
    pri = fun_0778(var_872, var_864, var_856, var_848, var_840, var_832)
    var_888 = 6577952962885434863;
    var_896 = 8;
    pri = fun_07D0(var_888)
    var_904 = 1003091793780467894;
    var_912 = 8;
    pri = fun_07D0(var_904)
    var_920 = 0;
    pri = fun_1B08()
    var_928 = 1;
    var_936 = 8;
    pri = fun_1BA0(var_928)
    var_944 = 0;
    pri = fun_1C60()
    var_952 = 8896463344906650392;
    var_960 = 8;
    pri = fun_07D0(var_952)
    var_968 = 1;
    var_976 = 1;
    var_984 = -1;
    var_992 = -1;
    var_1000 = 0;
    var_1008 = 9;
    var_1016 = 8896463344906650392;
    var_1024 = 56;
    pri = fun_3900(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 60;
    var_1040 = 8;
    pri = fun_0060(var_1032)
    var_1048 = 1;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 9;
    var_1080 = 8896463344906650392;
    var_1088 = 40;
    pri = fun_5C38(var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1096 = 8896463344906650392;
    var_1104 = 8;
    pri = fun_09A8(var_1096)
    var_1112 = 0;
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 0;
    OP_PUSH2_C 1003091793780467894, 8896463344906650392
    var_1144 = 48;
    pri = fun_0778(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1152 = 8896463344906650392;
    var_1160 = 8;
    pri = fun_07D0(var_1152)
    var_1168 = 1;
    var_1176 = 1;
    var_1184 = -1;
    var_1192 = -1;
    var_1200 = 0;
    var_1208 = 8;
    var_1216 = 8896463344906650392;
    var_1224 = 56;
    pri = fun_3900(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 100;
    var_1264 = -1;
    OP_PUSH2_C -5358697460895189313, 8896463344906650392
    var_1272 = 56;
    pri = fun_1A58(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1280 = 1;
    var_1288 = 8;
    pri = fun_1BA0(var_1280)
    var_1296 = 0;
    pri = fun_1C60()
    var_1304 = 0;
    var_1312 = 3;
    var_1320 = 1003091793780467894;
    var_1328 = 24;
    pri = fun_7968(var_1320, var_1312, var_1304)
    var_1336 = 0;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 100;
    var_1368 = -1;
    OP_PUSH2_C 7428032317557496887, 1003091793780467894
    var_1376 = 56;
    pri = fun_1A58(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 1;
    var_1392 = 8;
    pri = fun_1BA0(var_1384)
    var_1400 = 0;
    pri = fun_1C60()
    var_1408 = 1;
    var_1416 = 0;
    var_1424 = 4641240890982006784;
    var_1432 = 0;
    var_1440 = 0;
    OP_PUSH4_C 4666846317769654272, 4663688520374681600, 4607182418800017408, 6577952962885434863
    var_1448 = 72;
    pri = fun_06B0(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1456 = 0;
    var_1464 = 3;
    var_1472 = 2;
    var_1480 = 100;
    var_1488 = -1;
    OP_PUSH2_C -8228640060113294903, 6577952962885434863
    var_1496 = 56;
    pri = fun_1A58(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 1;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 8;
    var_1536 = 8896463344906650392;
    var_1544 = 40;
    pri = fun_5C38(var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1552 = 8896463344906650392;
    var_1560 = 8;
    pri = fun_09A8(var_1552)
    var_1568 = 0;
    var_1576 = 0;
    var_1584 = 0;
    var_1592 = 0;
    OP_PUSH2_C 6577952962885434863, 8896463344906650392
    var_1600 = 48;
    pri = fun_0778(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1608 = 6577952962885434863;
    var_1616 = 8;
    pri = fun_07D0(var_1608)
    var_1624 = 8896463344906650392;
    var_1632 = 8;
    pri = fun_07D0(var_1624)
    var_1640 = 0;
    pri = fun_1B08()
    var_1648 = 1;
    var_1656 = 8;
    pri = fun_1BA0(var_1648)
    var_1664 = 0;
    pri = fun_1C60()
    var_1672 = 1;
    var_1680 = 1;
    var_1688 = -1;
    var_1696 = -1;
    var_1704 = 0;
    var_1712 = 6;
    var_1720 = 8896463344906650392;
    var_1728 = 56;
    pri = fun_3900(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1736 = 15;
    var_1744 = 8;
    pri = fun_0060(var_1736)
    var_1752 = 0;
    var_1760 = 3;
    var_1768 = 0;
    var_1776 = 100;
    var_1784 = -1;
    OP_PUSH2_C -5358698560406817524, 8896463344906650392
    var_1792 = 56;
    pri = fun_1A58(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1800 = 1;
    var_1808 = 8;
    pri = fun_1BA0(var_1800)
    var_1816 = 0;
    pri = fun_1C60()
    var_1824 = 1;
    var_1832 = 3;
    var_1840 = 0;
    var_1848 = 6;
    var_1856 = 8896463344906650392;
    var_1864 = 40;
    pri = fun_5C38(var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1872 = 1;
    var_1880 = -1;
    var_1888 = -1;
    var_1896 = 3;
    var_1904 = 0;
    var_1912 = 0;
    var_1920 = 6577952962885434863;
    var_1928 = 56;
    pri = fun_1D20(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1936 = 0;
    var_1944 = 3;
    var_1952 = 0;
    var_1960 = 100;
    var_1968 = -1;
    OP_PUSH2_C -8228643358648179536, 6577952962885434863
    var_1976 = 56;
    pri = fun_1A58(var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1984 = 6577952962885434863;
    var_1992 = 8;
    pri = fun_09A8(var_1984)
    var_2000 = 1;
    var_2008 = 8;
    pri = fun_1BA0(var_2000)
    var_2016 = 0;
    pri = fun_1C60()
    var_2024 = 8896463344906650392;
    var_2032 = 8;
    pri = fun_09A8(var_2024)
    var_2040 = 1;
    var_2048 = -1;
    var_2056 = -1;
    var_2064 = 3;
    var_2072 = 0;
    var_2080 = 0;
    var_2088 = 8896463344906650392;
    var_2096 = 56;
    pri = fun_1D20(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2104 = 0;
    var_2112 = 3;
    var_2120 = 0;
    var_2128 = 100;
    var_2136 = -1;
    OP_PUSH2_C -5358699659918445735, 8896463344906650392
    var_2144 = 56;
    pri = fun_1A58(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2152 = 1;
    var_2160 = 8;
    pri = fun_1BA0(var_2152)
    var_2168 = 0;
    pri = fun_1C60()
    var_2176 = 8896463344906650392;
    var_2184 = 8;
    pri = fun_09A8(var_2176)
    var_2192 = 1;
    var_2200 = 1;
    var_2208 = -1;
    var_2216 = -1;
    var_2224 = 0;
    var_2232 = 0;
    var_2240 = 8896463344906650392;
    var_2248 = 56;
    pri = fun_3900(var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2256 = 0;
    var_2264 = 3;
    var_2272 = 0;
    var_2280 = 100;
    var_2288 = -1;
    OP_PUSH2_C -5358700759430073946, 8896463344906650392
    var_2296 = 56;
    pri = fun_1A58(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2304 = 1;
    var_2312 = 8;
    pri = fun_1BA0(var_2304)
    var_2320 = 0;
    pri = fun_1C60()
    var_2328 = 1;
    var_2336 = 3;
    var_2344 = 0;
    var_2352 = 0;
    var_2360 = 8896463344906650392;
    var_2368 = 40;
    pri = fun_5C38(var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2376 = 1;
    var_2384 = 1;
    var_2392 = -1;
    var_2400 = -1;
    var_2408 = 0;
    var_2416 = 8;
    var_2424 = 6577952962885434863;
    var_2432 = 56;
    pri = fun_3900(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2440 = 0;
    var_2448 = 3;
    var_2456 = 0;
    var_2464 = 100;
    var_2472 = -1;
    OP_PUSH2_C -8228642259136551325, 6577952962885434863
    var_2480 = 56;
    pri = fun_1A58(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2488 = 1;
    var_2496 = 8;
    pri = fun_1BA0(var_2488)
    var_2504 = 8896463344906650392;
    var_2512 = 8;
    pri = fun_09A8(var_2504)
    var_2520 = 0;
    pri = fun_1C60()
    var_2528 = 1;
    var_2536 = 3;
    var_2544 = 0;
    var_2552 = 8;
    var_2560 = 6577952962885434863;
    var_2568 = 40;
    pri = fun_5C38(var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2576 = 6577952962885434863;
    var_2584 = 8;
    pri = fun_09A8(var_2576)
    var_2592 = 1;
    var_2600 = 0;
    var_2608 = 4641240890982006784;
    var_2616 = 0;
    var_2624 = 0;
    OP_PUSH4_C 4666966164537081856, 4664133822583930880, 4607182418800017408, 6577952962885434863
    var_2632 = 72;
    pri = fun_06B0(var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2640 = 0;
    var_2648 = 0;
    var_2656 = 0;
    var_2664 = 90;
    pri = float(var_2664)
    var_2672 = pri;
    var_2680 = 8896463344906650392;
    var_2688 = 40;
    pri = fun_0728(var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2696 = 0;
    var_2704 = 0;
    var_2712 = 1003091793780467894;
    var_2720 = 24;
    pri = fun_7968(var_2712, var_2704, var_2696)
    var_2728 = 10;
    var_2736 = 8;
    pri = fun_0060(var_2728)
    var_2744 = 0;
    var_2752 = 0;
    var_2760 = 0;
    var_2768 = 90;
    pri = float(var_2768)
    var_2776 = pri;
    var_2784 = 1003091793780467894;
    var_2792 = 40;
    pri = fun_0728(var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2800 = 8896463344906650392;
    var_2808 = 8;
    pri = fun_07D0(var_2800)
    var_2816 = 1003091793780467894;
    var_2824 = 8;
    pri = fun_07D0(var_2816)
    var_2832 = 30;
    var_2840 = 8;
    pri = fun_0060(var_2832)
    var_2848 = 1;
    var_2856 = 1;
    var_2864 = 90;
    pri = float(var_2864)
    var_2872 = pri;
    var_2880 = 10516;
    pri = float(var_2880)
    var_2888 = pri;
    OP_PUSH2_C 4662979995081742746, 8802641224559852288
    var_2896 = 48;
    pri = fun_05E0(var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
    var_2904 = 1;
    var_2912 = 8;
    pri = fun_0060(var_2904)
    var_2920 = 1;
    var_2928 = 0;
    var_2936 = 4641240890982006784;
    var_2944 = 0;
    var_2952 = 0;
    var_2960 = 10516;
    pri = float(var_2960)
    var_2968 = pri;
    OP_PUSH3_C 4663265868104964506, 4607182418800017408, 8802641224559852288
    var_2976 = 72;
    pri = fun_06B0(var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2984 = 15;
    var_2992 = 8;
    pri = fun_0060(var_2984)
    var_3000 = 0;
    var_3008 = 4631952216750555136;
    var_3016 = 3;
    OP_PUSH5_C 4666811446758379356, 4636263006018878833, 4663364340366348124, 4667166556028802171, 4644437567108137615
    var_3024 = 4663214125087761367;
    var_3032 = 60;
    pri = EvCameraMove(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960)
    var_3040 = 10;
    var_3048 = 8;
    pri = fun_0060(var_3040)
    var_3056 = 0;
    var_3064 = 0;
    var_3072 = 0;
    var_3080 = -40;
    pri = float(var_3080)
    var_3088 = pri;
    var_3096 = 8896463344906650392;
    var_3104 = 40;
    pri = fun_0728(var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3112 = 30;
    var_3120 = 8;
    pri = fun_0060(var_3112)
    var_3128 = 0;
    var_3136 = 0;
    var_3144 = 0;
    OP_PUSH2_C -4595501207266525184, 1003091793780467894
    var_3152 = 40;
    pri = fun_0728(var_3144, var_3136, var_3128, var_3120, var_3112)
    var_3160 = 8802641224559852288;
    var_3168 = 8;
    pri = fun_07D0(var_3160)
    var_3176 = 0;
    var_3184 = 0;
    var_3192 = 0;
    var_3200 = 0;
    OP_PUSH2_C 8896463344906650392, 8802641224559852288
    var_3208 = 48;
    pri = fun_0778(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160)
    var_3216 = 1003091793780467894;
    var_3224 = 8;
    pri = fun_07D0(var_3216)
    var_3232 = 0;
    var_3240 = 3;
    var_3248 = 1003091793780467894;
    var_3256 = 24;
    pri = fun_7968(var_3248, var_3240, var_3232)
    var_3264 = 8896463344906650392;
    var_3272 = 8;
    pri = fun_07D0(var_3264)
    var_3280 = 1;
    var_3288 = 0;
    var_3296 = 4641240890982006784;
    var_3304 = 0;
    var_3312 = 0;
    OP_PUSH4_C 4666954069909176320, 4663375159560765440, 4607182418800017408, 8896463344906650392
    var_3320 = 72;
    pri = fun_06B0(var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3328 = 0;
    var_3336 = 3;
    var_3344 = 0;
    var_3352 = 100;
    var_3360 = -1;
    OP_PUSH2_C -5358701858941702157, 8896463344906650392
    var_3368 = 56;
    pri = fun_1A58(var_3360, var_3352, var_3344, var_3336, var_3328, var_3320, var_3312)
    var_3376 = 1;
    var_3384 = 8;
    pri = fun_1BA0(var_3376)
    var_3392 = 8896463344906650392;
    var_3400 = 8;
    pri = fun_07D0(var_3392)
    var_3408 = 1003091793780467894;
    var_3416 = 8;
    pri = fun_07D0(var_3408)
    var_3424 = 8802641224559852288;
    var_3432 = 8;
    pri = fun_07D0(var_3424)
    var_3440 = 1;
    var_3448 = -1;
    var_3456 = -1;
    var_3464 = 3;
    var_3472 = 0;
    var_3480 = 0;
    var_3488 = 8896463344906650392;
    var_3496 = 56;
    pri = fun_1D20(var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
    var_3504 = 0;
    var_3512 = 3;
    var_3520 = 0;
    var_3528 = 100;
    var_3536 = -1;
    OP_PUSH2_C -5358702958453330368, 8896463344906650392
    var_3544 = 56;
    pri = fun_1A58(var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3552 = 8896463344906650392;
    var_3560 = 8;
    pri = fun_09A8(var_3552)
    var_3568 = 1;
    var_3576 = 8;
    pri = fun_1BA0(var_3568)
    var_3584 = 1;
    var_3592 = 1;
    var_3600 = -1;
    var_3608 = -1;
    var_3616 = 0;
    var_3624 = 1;
    var_3632 = 8896463344906650392;
    var_3640 = 56;
    pri = fun_3900(var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584)
    var_3648 = 0;
    var_3656 = 3;
    var_3664 = 0;
    var_3672 = 100;
    var_3680 = -1;
    OP_PUSH2_C -5358686465778907203, 8896463344906650392
    var_3688 = 56;
    pri = fun_1A58(var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632)
    var_3696 = 1;
    var_3704 = 8;
    pri = fun_1BA0(var_3696)
    var_3712 = 0;
    pri = fun_1C60()
    var_3720 = 1;
    var_3728 = 3;
    var_3736 = 0;
    var_3744 = 1;
    var_3752 = 8896463344906650392;
    var_3760 = 40;
    pri = fun_5C38(var_3752, var_3744, var_3736, var_3728, var_3720)
    var_3768 = 1;
    var_3776 = 1;
    var_3784 = -1;
    var_3792 = -1;
    var_3800 = 0;
    var_3808 = 32;
    var_3816 = 1003091793780467894;
    var_3824 = 56;
    pri = fun_3900(var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768)
    var_3832 = 0;
    var_3840 = 3;
    var_3848 = 0;
    var_3856 = 100;
    var_3864 = -1;
    OP_PUSH2_C 7428031218045868676, 1003091793780467894
    var_3872 = 56;
    pri = fun_1A58(var_3864, var_3856, var_3848, var_3840, var_3832, var_3824, var_3816)
    var_3880 = 1;
    var_3888 = 8;
    pri = fun_1BA0(var_3880)
    var_3896 = 0;
    pri = fun_1C60()
    var_3904 = 1;
    var_3912 = -1;
    var_3920 = -1;
    var_3928 = 3;
    var_3936 = 0;
    var_3944 = 0;
    var_3952 = 8896463344906650392;
    var_3960 = 56;
    pri = fun_1D20(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904)
    var_3968 = 8896463344906650392;
    var_3976 = 8;
    pri = fun_09A8(var_3968)
    var_3984 = 1;
    var_3992 = 3;
    var_4000 = 0;
    var_4008 = 32;
    var_4016 = 1003091793780467894;
    var_4024 = 40;
    pri = fun_5C38(var_4016, var_4008, var_4000, var_3992, var_3984)
    var_4032 = 1;
    var_4040 = 1;
    var_4048 = -1;
    var_4056 = -1;
    var_4064 = 0;
    var_4072 = 2;
    var_4080 = 8896463344906650392;
    var_4088 = 56;
    pri = fun_3900(var_4080, var_4072, var_4064, var_4056, var_4048, var_4040, var_4032)
    var_4096 = 0;
    var_4104 = 3;
    var_4112 = 0;
    var_4120 = 100;
    var_4128 = -1;
    OP_PUSH2_C -5358687565290535414, 8896463344906650392
    var_4136 = 56;
    pri = fun_1A58(var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080)
    var_4144 = 1;
    var_4152 = 8;
    pri = fun_1BA0(var_4144)
    var_4160 = 0;
    pri = fun_1C60()
    var_4168 = 1;
    var_4176 = 3;
    var_4184 = 0;
    var_4192 = 2;
    var_4200 = 8896463344906650392;
    var_4208 = 40;
    pri = fun_5C38(var_4200, var_4192, var_4184, var_4176, var_4168)
    var_4216 = 8896463344906650392;
    var_4224 = 8;
    pri = fun_09A8(var_4216)
    var_4232 = 1;
    var_4240 = 0;
    var_4248 = 4641240890982006784;
    var_4256 = 0;
    var_4264 = 0;
    OP_PUSH4_C 4666954069909176320, 4663957900723486720, 4607182418800017408, 8896463344906650392
    var_4272 = 72;
    pri = fun_06B0(var_4264, var_4256, var_4248, var_4240, var_4232, var_4224, var_4216, var_4208, var_4200)
    var_4280 = 10;
    var_4288 = 8;
    pri = fun_0060(var_4280)
    var_4296 = 0;
    var_4304 = 0;
    var_4312 = 1003091793780467894;
    var_4320 = 24;
    pri = fun_7968(var_4312, var_4304, var_4296)
    var_4328 = 10;
    var_4336 = 8;
    pri = fun_0060(var_4328)
    var_4344 = 0;
    var_4352 = 0;
    var_4360 = 0;
    var_4368 = 90;
    pri = float(var_4368)
    var_4376 = pri;
    var_4384 = 1003091793780467894;
    var_4392 = 40;
    pri = fun_0728(var_4384, var_4376, var_4368, var_4360, var_4352)
    var_4400 = 1003091793780467894;
    var_4408 = 8;
    pri = fun_07D0(var_4400)
    var_4416 = 30;
    var_4424 = 8;
    pri = fun_0060(var_4416)
    var_4432 = 0;
    var_4440 = 0;
    var_4448 = 0;
    var_4456 = 0;
    OP_PUSH2_C 8802641224559852288, 1003091793780467894
    var_4464 = 48;
    pri = fun_0778(var_4456, var_4448, var_4440, var_4432, var_4424, var_4416)
    var_4472 = 1003091793780467894;
    var_4480 = 8;
    pri = fun_07D0(var_4472)
    var_4488 = 1;
    var_4496 = 1;
    var_4504 = -1;
    var_4512 = -1;
    var_4520 = 0;
    var_4528 = 1;
    var_4536 = 1003091793780467894;
    var_4544 = 56;
    pri = fun_3900(var_4536, var_4528, var_4520, var_4512, var_4504, var_4496, var_4488)
    var_4552 = 0;
    var_4560 = 3;
    var_4568 = 0;
    var_4576 = 100;
    var_4584 = -1;
    OP_PUSH2_C 7428030118534240465, 1003091793780467894
    var_4592 = 56;
    pri = fun_1A58(var_4584, var_4576, var_4568, var_4560, var_4552, var_4544, var_4536)
    var_4600 = 1;
    var_4608 = 8;
    pri = fun_1BA0(var_4600)
    var_4616 = 0;
    pri = fun_1C60()
    var_4624 = 1;
    var_4632 = 3;
    var_4640 = 0;
    var_4648 = 1;
    var_4656 = 1003091793780467894;
    var_4664 = 40;
    pri = fun_5C38(var_4656, var_4648, var_4640, var_4632, var_4624)
    var_4672 = 1003091793780467894;
    var_4680 = 8;
    pri = fun_09A8(var_4672)
    var_4688 = 1;
    var_4696 = 0;
    var_4704 = 4641240890982006784;
    var_4712 = 0;
    var_4720 = 0;
    OP_PUSH4_C 4666954069909176320, 4663957900723486720, 4607182418800017408, 1003091793780467894
    var_4728 = 72;
    pri = fun_06B0(var_4720, var_4712, var_4704, var_4696, var_4688, var_4680, var_4672, var_4664, var_4656)
    var_4736 = 30;
    var_4744 = 8;
    pri = fun_0060(var_4736)
    var_4752 = 1;
    var_4760 = 0;
    var_4768 = 31192;
    var_4776 = 8;
    var_4784 = 32;
    pri = fun_02E0(var_4776, var_4768, var_4760, var_4752)
    var_4792 = 0;
    pri = fun_0350()
    var_4800 = 31400;
    pri = SoundPostEvent(var_4800)
    var_4808 = 0;
    var_4816 = 8802641224559852288;
    var_4824 = 16;
    pri = fun_0638(var_4816, var_4808)
    var_4832 = 6925251713131868404;
    var_4840 = 8;
    pri = fun_07D0(var_4832)
    var_4848 = 6925255011666753037;
    var_4856 = 8;
    pri = fun_07D0(var_4848)
    var_4864 = 1003091793780467894;
    var_4872 = 8;
    pri = fun_07D0(var_4864)
    var_4880 = 6577952962885434863;
    var_4888 = 8;
    pri = fun_07D0(var_4880)
    var_4896 = 8896463344906650392;
    var_4904 = 8;
    pri = fun_07D0(var_4896)
    var_4912 = 3;
    var_4920 = 0;
    pri = EvCameraEnd(var_4920, var_4912)
    pri = 0;
    return pri;
}
// fun_A978
fun_A978() {
    pri = 0;
    return pri;
}
// fun_A990
fun_A990() {
    var_8 = 8896463344906650392;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = 1003091793780467894;
    var_32 = 8;
    pri = fun_0588(var_24)
    var_40 = 6925251713131868404;
    var_48 = 8;
    pri = fun_0588(var_40)
    var_56 = 6925255011666753037;
    var_64 = 8;
    pri = fun_0588(var_56)
    var_72 = 6577952962885434863;
    var_80 = 8;
    pri = fun_0588(var_72)
    var_88 = 6925251713131868404;
    pri = VanishFlagSet(var_88)
    var_96 = 6925255011666753037;
    pri = VanishFlagSet(var_96)
    var_104 = 6577952962885434863;
    pri = VanishFlagSet(var_104)
    var_112 = 645;
    var_120 = 8;
    pri = fun_8100(var_112)
    var_128 = 4639838440238230742;
    var_136 = 8;
    pri = fun_0408(var_128)
    var_144 = -5471796947768100173;
    var_152 = 8;
    pri = fun_0408(var_144)
    var_160 = 8541340050249644631;
    pri = VanishFlagSet(var_160)
    var_168 = 7633379448393287205;
    var_176 = 8;
    pri = fun_0408(var_168)
    var_184 = 4090041247219487386;
    var_192 = 8;
    pri = fun_0408(var_184)
    var_200 = 7633376149858402572;
    var_208 = 8;
    pri = fun_0408(var_200)
    var_216 = -1690062793469606128;
    var_224 = 8;
    pri = fun_0408(var_216)
    var_232 = 7633379448393287205;
    pri = VanishFlagReset(var_232)
    var_240 = 4090041247219487386;
    pri = VanishFlagReset(var_240)
    var_248 = 7633376149858402572;
    pri = VanishFlagReset(var_248)
    var_256 = -1690062793469606128;
    pri = VanishFlagReset(var_256)
    var_264 = -6579074488859367092;
    pri = FlagSet(var_264)
    pri = 0;
    return pri;
}
// fun_ACE8
fun_ACE8() {
    OP_PUSH2_C -3681268570345977435, 3568074667865461783
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 0;
    pri = fun_0438()
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 31560;
    var_40 = 8;
    var_48 = 16;
    pri = fun_0280(var_40, var_32)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_ADA8
fun_ADA8() {
    var_8 = 0;
    pri = fun_8298()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_83C8()
    var_24 = 0;
    pri = fun_8420()
    var_32 = 0;
    pri = fun_8438()
    var_40 = 0;
    pri = fun_8450()
    var_48 = 0;
    pri = fun_A978()
    var_56 = 0;
    pri = fun_A990()
    var_64 = 0;
    pri = fun_ACE8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_AEB0
fun_AEB0() {
    var_8 = 0;
    pri = fun_8420()
    var_16 = 0;
    pri = fun_A990()
    pri = 0;
    return pri;
}
