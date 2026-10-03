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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_04C8
fun_04C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0508
fun_0508() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
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
// fun_05B8
fun_05B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FE0(var_8)
    OP_JZER lab_06D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1010(var_24)
    OP_JNZ lab_06D8
    pri = 0;
    return pri;
// lab_06D8
    OP_JUMP lab_06E8
// lab_06E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0748
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0748
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06E8
    pri = 0;
    return pri;
}
// fun_0788
fun_0788() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0800
fun_0800() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0838
fun_0838() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0880
    pri = 0;
    return pri;
// lab_0880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_08C0
// lab_08C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FE0(var_8)
    OP_JNZ lab_0948
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0938
    pri = 0;
    return pri;
// lab_0948
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0990
    pri = 0;
    return pri;
// lab_0990
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_09F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B60(var_8)
    pri = 0;
    return pri;
// lab_09F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08C0
    pri = 0;
    return pri;
// lab_0938
    OP_JUMP lab_0990
}
// fun_0A38
fun_0A38() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A80
// lab_0A80
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B18
    pri = 0;
    return pri;
// lab_0B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B98
fun_0B98() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FE0(var_8)
    OP_JZER lab_0D18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C40
    OP_ZERO_P_S 64
// lab_0D18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D50
    OP_CONST_S 64, 1
// lab_0D50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D88
    OP_CONST_S 72, 1
// lab_0D88
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
// lab_0C40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C68
    OP_ZERO_P_S 72
// lab_0C68
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
    OP_JUMP lab_0E28
// lab_0E28
    pri = 0;
    return pri;
}
// fun_0E38
fun_0E38() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0EF8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0F38(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0FE0
fun_0FE0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1010
fun_1010() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1040
fun_1040() {
    OP_JUMP lab_1058
// lab_1058
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_10E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_10D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0838(var_8)
    pri = 0;
    return pri;
// lab_10E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1178
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1168
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0838(var_8)
    pri = 0;
    return pri;
// lab_1178
    pri = 0;
    return pri;
// lab_1168
    OP_JUMP lab_1188
// lab_1188
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1058
    pri = 0;
    return pri;
// lab_10D8
    OP_JUMP lab_1188
}
// fun_11C8
fun_11C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0838(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1040(var_40)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1288
fun_1288() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_12B0
fun_12B0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_12E8
fun_12E8() {
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
// switch_1900
        case default:
        {
// switch_1900_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1948
// lab_1948
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
            OP_JNZ lab_19F0
            var_88 = 0;
            pri = fun_1BA8()
// lab_19F0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1900_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_14E8
                case default:
                {
// switch_14E8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1560
// lab_1560
                    OP_JUMP lab_1948
                }
                case 0x0:
                {
// switch_14E8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1560
                }
                case 0x1:
                {
// switch_14E8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1560
                }
                case 0x2:
                {
// switch_14E8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1560
                }
                case 0x3:
                {
// switch_14E8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1560
                }
                case 0x4:
                {
// switch_14E8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1560
                }
                case 0x5:
                {
// switch_14E8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1560
                }
            }
        }
        case 0x65:
        {
// switch_1900_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_16A0
                case default:
                {
// switch_16A0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1718
// lab_1718
                    OP_JUMP lab_1948
                }
                case 0x0:
                {
// switch_16A0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1718
                }
                case 0x1:
                {
// switch_16A0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1718
                }
                case 0x2:
                {
// switch_16A0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1718
                }
                case 0x3:
                {
// switch_16A0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1718
                }
                case 0x4:
                {
// switch_16A0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1718
                }
                case 0x5:
                {
// switch_16A0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1718
                }
            }
        }
        case 0x66:
        {
// switch_1900_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1858
                case default:
                {
// switch_1858_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_18D0
// lab_18D0
                    OP_JUMP lab_1948
                }
                case 0x0:
                {
// switch_1858_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_18D0
                }
                case 0x1:
                {
// switch_1858_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_18D0
                }
                case 0x2:
                {
// switch_1858_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_18D0
                }
                case 0x3:
                {
// switch_1858_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_18D0
                }
                case 0x4:
                {
// switch_1858_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_18D0
                }
                case 0x5:
                {
// switch_1858_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_18D0
                }
            }
        }
    }
}
// fun_1A08
fun_1A08() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0800(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1AB0
    pri = 1;
    return pri;
// lab_1AB0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1AF8
fun_1AF8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1A08(var_8)
    arg_2 = pri;
// lab_1B48
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BA8
fun_1BA8() {
    OP_JUMP lab_1BC0
// lab_1BC0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C00
    pri = 0;
    return pri;
// lab_1C00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BC0
    pri = 0;
    return pri;
}
// fun_1C40
fun_1C40() {
    var_8 = 0;
    pri = fun_1BA8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1CF0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1CF0
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D30
fun_1D30() {
    OP_JUMP lab_1D48
// lab_1D48
    pri = EvCameraMoveWait_()
    OP_JZER lab_1D80
    pri = 0;
    return pri;
// lab_1D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D48
    pri = 0;
    return pri;
}
// fun_1DC0
fun_1DC0() {
    pri = arg_6;
    OP_JNZ lab_1DF8
    var_8 = 0;
    pri = fun_0E38()
// lab_1DF8
    pri = arg_1;
    switch (pri) {
// switch_3360
        case default:
        {
// switch_3360_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_36B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_36B0
            pri = 1;
            OP_JUMP lab_36B8
// lab_36B0
            pri = 0;
// lab_36B8
            OP_JZER lab_3810
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0800(var_24, var_16)
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
            OP_JUMP lab_3870
// lab_3810
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
// lab_3870
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_38D0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3930
// lab_38D0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3930
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3930
            pri = arg_2;
            OP_JZER lab_3970
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3970
            var_8 = 0;
            pri = fun_0E78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3360_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x1:
        {
// switch_3360_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x2:
        {
// switch_3360_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x3:
        {
// switch_3360_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x4:
        {
// switch_3360_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x5:
        {
// switch_3360_case_0x5
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0x6:
        {
// switch_3360_case_0x6
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0x7:
        {
// switch_3360_case_0x7
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0x8:
        {
// switch_3360_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x9:
        {
// switch_3360_case_0x9
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0xa:
        {
// switch_3360_case_0xa
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0xb:
        {
// switch_3360_case_0xb
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0xc:
        {
// switch_3360_case_0xc
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0xd:
        {
// switch_3360_case_0xd
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0xe:
        {
// switch_3360_case_0xe
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0xf:
        {
// switch_3360_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x10:
        {
// switch_3360_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x11:
        {
// switch_3360_case_0x11
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0x12:
        {
// switch_3360_case_0x12
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0x13:
        {
// switch_3360_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x14:
        {
// switch_3360_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x15:
        {
// switch_3360_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x16:
        {
// switch_3360_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x17:
        {
// switch_3360_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x18:
        {
// switch_3360_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x19:
        {
// switch_3360_case_0x19
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3360_case_default
        }
        case 0x1a:
        {
// switch_3360_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0788(var_48, var_40)
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
            pri = fun_0B98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3360_case_default
        }
        case 0x1b:
        {
// switch_3360_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0788(var_48, var_40)
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
            pri = fun_0B98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3360_case_default
        }
        case 0x1c:
        {
// switch_3360_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0788(var_48, var_40)
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
            pri = fun_0B98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3360_case_default
        }
        case 0x1d:
        {
// switch_3360_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x1e:
        {
// switch_3360_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x1f:
        {
// switch_3360_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x20:
        {
// switch_3360_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x21:
        {
// switch_3360_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x22:
        {
// switch_3360_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x23:
        {
// switch_3360_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x24:
        {
// switch_3360_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x25:
        {
// switch_3360_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x26:
        {
// switch_3360_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x27:
        {
// switch_3360_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x28:
        {
// switch_3360_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
        case 0x29:
        {
// switch_3360_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3360_case_default
        }
    }
}
// fun_39A0
fun_39A0() {
    pri = arg_5;
    OP_JNZ lab_39D8
    var_8 = 0;
    pri = fun_0E38()
// lab_39D8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3A28
    OP_CONST_S -8, -1
// lab_3A28
    pri = arg_1;
    switch (pri) {
// switch_54E0
        case default:
        {
// switch_54E0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5988
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0800(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5988
            pri = 1;
            OP_JUMP lab_5990
// lab_5988
            pri = 0;
// lab_5990
            OP_JZER lab_59E0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5C38
// lab_59E0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5A48
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5A48
            pri = 1;
            OP_JUMP lab_5A50
// lab_5A48
            pri = 0;
// lab_5A50
            OP_JZER lab_5BD8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0800(var_24, var_16)
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
            OP_JUMP lab_5C38
// lab_5BD8
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
// lab_5C38
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5CA8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5CA8
            var_8 = 0;
            pri = fun_0E78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_54E0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1:
        {
// switch_54E0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2:
        {
// switch_54E0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x3:
        {
// switch_54E0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x4:
        {
// switch_54E0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x5:
        {
// switch_54E0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B60(var_40)
            OP_JUMP switch_54E0_case_default
        }
        case 0x6:
        {
// switch_54E0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x7:
        {
// switch_54E0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x8:
        {
// switch_54E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x9:
        {
// switch_54E0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0xa:
        {
// switch_54E0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0xb:
        {
// switch_54E0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0xc:
        {
// switch_54E0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0xd:
        {
// switch_54E0_case_0xd
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0xe:
        {
// switch_54E0_case_0xe
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0xf:
        {
// switch_54E0_case_0xf
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x10:
        {
// switch_54E0_case_0x10
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x11:
        {
// switch_54E0_case_0x11
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x12:
        {
// switch_54E0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x13:
        {
// switch_54E0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x14:
        {
// switch_54E0_case_0x14
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x15:
        {
// switch_54E0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x16:
        {
// switch_54E0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x17:
        {
// switch_54E0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x18:
        {
// switch_54E0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x19:
        {
// switch_54E0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1a:
        {
// switch_54E0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1b:
        {
// switch_54E0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1c:
        {
// switch_54E0_case_0x1c
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1d:
        {
// switch_54E0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1e:
        {
// switch_54E0_case_0x1e
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x1f:
        {
// switch_54E0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x20:
        {
// switch_54E0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x21:
        {
// switch_54E0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x22:
        {
// switch_54E0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x23:
        {
// switch_54E0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x24:
        {
// switch_54E0_case_0x24
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x25:
        {
// switch_54E0_case_0x25
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x26:
        {
// switch_54E0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x27:
        {
// switch_54E0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x28:
        {
// switch_54E0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x29:
        {
// switch_54E0_case_0x29
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2a:
        {
// switch_54E0_case_0x2a
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2b:
        {
// switch_54E0_case_0x2b
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2c:
        {
// switch_54E0_case_0x2c
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2d:
        {
// switch_54E0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2e:
        {
// switch_54E0_case_0x2e
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x2f:
        {
// switch_54E0_case_0x2f
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x30:
        {
// switch_54E0_case_0x30
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x31:
        {
// switch_54E0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x32:
        {
// switch_54E0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x33:
        {
// switch_54E0_case_0x33
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x34:
        {
// switch_54E0_case_0x34
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x35:
        {
// switch_54E0_case_0x35
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x36:
        {
// switch_54E0_case_0x36
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x37:
        {
// switch_54E0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x38:
        {
// switch_54E0_case_0x38
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
            pri = fun_0B98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_54E0_case_default
        }
        case 0x39:
        {
// switch_54E0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x3a:
        {
// switch_54E0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x3b:
        {
// switch_54E0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x3c:
        {
// switch_54E0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x3d:
        {
// switch_54E0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
        case 0x3e:
        {
// switch_54E0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            OP_JUMP switch_54E0_case_default
        }
    }
}
// fun_5CD8
fun_5CD8() {
    pri = arg_4;
    OP_JNZ lab_5D10
    var_8 = 0;
    pri = fun_0E38()
// lab_5D10
    pri = arg_1;
    switch (pri) {
// switch_70E8
        case default:
        {
// switch_70E8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0FE0(var_264)
            OP_JZER lab_76B0
            pri = arg_3;
            switch (pri) {
// switch_7658
                case default:
                {
// switch_7658_case_default
                    OP_JUMP lab_7968
// lab_7968
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_79D8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_79D8
                    var_8 = 0;
                    pri = fun_0E78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7658_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7658_case_default
                }
                case 0x2:
                {
// switch_7658_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7658_case_default
                }
                case 0x3:
                {
// switch_7658_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7658_case_default
                }
            }
// lab_76B0
            pri = arg_1;
            OP_JZER lab_7700
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7700
            pri = 0;
            OP_JUMP lab_7708
// lab_7700
            pri = 1;
// lab_7708
            OP_JZER lab_7770
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0800(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7770
            pri = 1;
            OP_JUMP lab_7778
// lab_7770
            pri = 0;
// lab_7778
            OP_JZER lab_77C8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7968
// lab_77C8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7830
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7968
// lab_7830
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0800(var_24, var_16)
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
// switch_70E8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1:
        {
// switch_70E8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2:
        {
// switch_70E8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x3:
        {
// switch_70E8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x4:
        {
// switch_70E8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x5:
        {
// switch_70E8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B60(var_40)
            OP_JUMP switch_70E8_case_default
        }
        case 0x6:
        {
// switch_70E8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x7:
        {
// switch_70E8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x8:
        {
// switch_70E8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x9:
        {
// switch_70E8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0xa:
        {
// switch_70E8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0xb:
        {
// switch_70E8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0xc:
        {
// switch_70E8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0xd:
        {
// switch_70E8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0xe:
        {
// switch_70E8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0xf:
        {
// switch_70E8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x10:
        {
// switch_70E8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x11:
        {
// switch_70E8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x12:
        {
// switch_70E8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x13:
        {
// switch_70E8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x14:
        {
// switch_70E8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x15:
        {
// switch_70E8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x16:
        {
// switch_70E8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x17:
        {
// switch_70E8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x18:
        {
// switch_70E8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x19:
        {
// switch_70E8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1a:
        {
// switch_70E8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1b:
        {
// switch_70E8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1c:
        {
// switch_70E8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1d:
        {
// switch_70E8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1e:
        {
// switch_70E8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x1f:
        {
// switch_70E8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x20:
        {
// switch_70E8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x21:
        {
// switch_70E8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x22:
        {
// switch_70E8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x23:
        {
// switch_70E8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x24:
        {
// switch_70E8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x25:
        {
// switch_70E8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x26:
        {
// switch_70E8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x27:
        {
// switch_70E8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x28:
        {
// switch_70E8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x29:
        {
// switch_70E8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2a:
        {
// switch_70E8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2b:
        {
// switch_70E8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2c:
        {
// switch_70E8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2d:
        {
// switch_70E8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2e:
        {
// switch_70E8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x2f:
        {
// switch_70E8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x30:
        {
// switch_70E8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x31:
        {
// switch_70E8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x32:
        {
// switch_70E8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x33:
        {
// switch_70E8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x34:
        {
// switch_70E8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x35:
        {
// switch_70E8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x36:
        {
// switch_70E8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x37:
        {
// switch_70E8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x38:
        {
// switch_70E8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x39:
        {
// switch_70E8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x3a:
        {
// switch_70E8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x3b:
        {
// switch_70E8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x3c:
        {
// switch_70E8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x3d:
        {
// switch_70E8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
        case 0x3e:
        {
// switch_70E8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07C0(var_24, var_16, var_8)
            OP_JUMP switch_70E8_case_default
        }
    }
}
// fun_7A08
fun_7A08() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7C18(var_16, var_8)
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
    OP_JZER lab_7C00
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7C00
    pri = 0;
    return pri;
}
// fun_7C18
fun_7C18() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_07C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7C60
fun_7C60() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7CE8
// lab_7CE8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7E68
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7E58
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7DA8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7DA8
    pri = 0;
    OP_JUMP lab_7DB0
// lab_7E68
    pri = 0;
    return pri;
// lab_7E58
    OP_JUMP lab_7CE0
// lab_7CE0
    OP_INC_P_S -936
// lab_7DA8
    pri = 1;
// lab_7DB0
    OP_JZER lab_7E28
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7E20
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7E28
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7E20
}
// fun_7E88
fun_7E88() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7F20
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1288()
// lab_7F20
    pri = arg_4;
    OP_JZER lab_7F58
    var_8 = 1;
    var_16 = 8;
    pri = fun_12B0(var_8)
// lab_7F58
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7FB0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7FB0
    pri = 0;
    OP_JUMP lab_7FB8
// lab_7FB0
    pri = 1;
// lab_7FB8
    OP_JZER lab_8080
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8080
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8058
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_11C8(var_32, var_24)
    OP_JUMP lab_8080
// lab_8080
    pri = arg_2;
    OP_JZER lab_8158
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8128
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EB8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0508(var_40)
    OP_JUMP lab_8158
// lab_8158
    pri = arg_3;
    OP_JZER lab_8190
    var_8 = 1;
    var_16 = 8;
    pri = fun_1250(var_8)
// lab_8190
    pri = 0;
    return pri;
// lab_8128
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EB8(var_16, var_8)
// lab_8058
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_11C8(var_16, var_8)
}
// fun_81A0
fun_81A0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7C60(var_24)
    pri = 0;
    return pri;
}
// fun_8208
fun_8208() {
    pri = g_mode;
    switch (pri) {
// switch_82C8
        case default:
        {
// switch_82C8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8310
// lab_8310
            pri = 0;
            return pri;
        }
        case 0xbd35421ea4282307:
        {
// switch_82C8_case_0xbd35421ea4282307
            var_8 = 0;
            pri = fun_A398()
            OP_JUMP lab_8310
        }
        case 0x0:
        {
// switch_82C8_case_0x0
            var_8 = 0;
            pri = fun_8320()
            OP_JUMP lab_8310
        }
        case 0x4f901421df4067cb:
        {
// switch_82C8_case_0x4f901421df4067cb
            var_8 = 0;
            pri = fun_A2A8()
            OP_JUMP lab_8310
        }
    }
}
// fun_8320
fun_8320() {
    pri = 0;
    return pri;
}
// fun_8338
fun_8338() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7E88(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8390
fun_8390() {
    var_8 = 0;
    pri = ChangeWideRoadOtherPlayerVisibility(var_8)
    pri = 0;
    return pri;
}
// fun_83C8
fun_83C8() {
    pri = 0;
    return pri;
}
// fun_83E0
fun_83E0() {
    var_8 = 0;
    var_16 = -6352432447319980419;
    var_24 = 16;
    pri = fun_0490(var_16, var_8)
    pri = EvCameraStart()
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4616752568008179712, 4680642714797080576, 4675442849431420928, 8802641224559852288
    var_48 = 48;
    pri = fun_0438(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4616752568008179712, 4680642714797080576, 4675448621867466752, -7408722731584171860
    var_72 = 48;
    pri = fun_0438(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4632698125438838374, 4680742083160440832, 4675421408954679296, -6352432447319980419
    var_96 = 48;
    pri = fun_0438(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 1;
    var_128 = 0;
    var_136 = 4641240890982006784;
    var_144 = 30;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 0;
    OP_PUSH4_C 4680721542908844442, 4675465733017174016, 4611686018427387904, -7408722731584171860
    var_168 = 72;
    pri = fun_0540(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 5;
    var_184 = 8;
    pri = fun_0060(var_176)
    var_192 = 1;
    var_200 = 0;
    var_208 = 4641240890982006784;
    var_216 = 0;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 0;
    OP_PUSH4_C 4680713014821781504, 4675442849431420928, 4607182418800017408, 8802641224559852288
    var_240 = 72;
    pri = fun_0540(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    var_256 = 4634513639038622106;
    var_264 = 0;
    OP_PUSH5_C 4680645807173533696, 4656777430087132774, 4675470047225923502, 4680631254449945313, 4656838936767590564
    var_272 = 4675463421293976617;
    var_280 = 1;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 0;
    pri = fun_1D30()
    var_296 = 0;
    var_304 = 4634513639038622106;
    var_312 = 0;
    OP_PUSH5_C 4680650596921062195, 4656777430087132774, 4675427918063515730, 4680636043510279045, 4656838936767590564
    var_320 = 4675421290757179310;
    var_328 = 300;
    pri = EvCameraMove(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 20;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 31240;
    var_360 = 8;
    var_368 = 16;
    pri = fun_0280(var_360, var_352)
    var_376 = 0;
    pri = fun_0350()
    var_384 = -7408722731584171860;
    var_392 = 8;
    pri = fun_0660(var_384)
    var_400 = 30;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 1;
    var_424 = 1;
    var_432 = -1;
    var_440 = -1;
    var_448 = 0;
    var_456 = 8;
    var_464 = -7408722731584171860;
    var_472 = 56;
    pri = fun_39A0(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C -2387952188899612462, -7408722731584171860
    var_520 = 56;
    pri = fun_1AF8(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_1C40(var_528)
    var_544 = 0;
    pri = fun_1D00()
    var_552 = 20;
    var_560 = 8;
    pri = fun_0060(var_552)
    var_568 = 8802641224559852288;
    var_576 = 8;
    pri = fun_0660(var_568)
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH2_C -7408722731584171860, 8802641224559852288
    var_616 = 48;
    pri = fun_0608(var_608, var_600, var_592, var_584, var_576, var_568)
    var_624 = 0;
    var_632 = 4631952216750555136;
    var_640 = 0;
    OP_PUSH5_C 4680719134291184845, 4656594251449945293, 4675419284148458619, 4680719412605065626, 4656608369179245937
    var_648 = 4675416617832761262;
    var_656 = 1;
    pri = EvCameraMove(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_664 = 0;
    pri = fun_1D30()
    var_672 = 1;
    var_680 = 3;
    var_688 = 0;
    var_696 = 8;
    var_704 = -7408722731584171860;
    var_712 = 40;
    pri = fun_5CD8(var_704, var_696, var_688, var_680, var_672)
    var_720 = -7408722731584171860;
    var_728 = 8;
    pri = fun_0838(var_720)
    var_736 = 8802641224559852288;
    var_744 = 8;
    pri = fun_0660(var_736)
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    var_776 = -137;
    pri = float(var_776)
    var_784 = pri;
    var_792 = -7408722731584171860;
    var_800 = 40;
    pri = fun_05B8(var_792, var_784, var_776, var_768, var_760)
    var_808 = -7408722731584171860;
    var_816 = 8;
    pri = fun_0660(var_808)
    var_824 = 0;
    var_832 = 3;
    var_840 = 0;
    var_848 = 100;
    var_856 = -1;
    OP_PUSH2_C -2387953288411240673, -7408722731584171860
    var_864 = 56;
    pri = fun_1AF8(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 1;
    var_880 = 8;
    pri = fun_1C40(var_872)
    var_888 = 0;
    pri = fun_1D00()
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    var_920 = 100;
    pri = float(var_920)
    var_928 = pri;
    var_936 = 8802641224559852288;
    var_944 = 40;
    pri = fun_05B8(var_936, var_928, var_920, var_912, var_904)
    var_952 = 0;
    var_960 = 0;
    var_968 = 0;
    var_976 = 102;
    pri = float(var_976)
    var_984 = pri;
    var_992 = -7408722731584171860;
    var_1000 = 40;
    pri = fun_05B8(var_992, var_984, var_976, var_968, var_960)
    var_1008 = -7408722731584171860;
    var_1016 = 8;
    pri = fun_0660(var_1008)
    var_1024 = 8802641224559852288;
    var_1032 = 8;
    pri = fun_0660(var_1024)
    var_1040 = 0;
    var_1048 = 4631952216750555136;
    var_1056 = 0;
    OP_PUSH5_C 4680806249284648305, 4657256927108005888, 4675392084979566510, 4680807321308485386, 4657263150343819100
    var_1064 = 4675390408224334152;
    var_1072 = 1;
    pri = EvCameraMove(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1080 = 0;
    pri = fun_1D30()
    var_1088 = 0;
    var_1096 = 4631952216750555136;
    var_1104 = 3;
    OP_PUSH5_C 4680626624131602842, 4653309570413127270, 4676535035562976870, 4680627696155439923, 4653322016884753695
    var_1112 = 4676533358807744512;
    var_1120 = 250;
    pri = EvCameraMove(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1128 = 80;
    var_1136 = 8;
    pri = fun_0060(var_1128)
    var_1144 = 0;
    var_1152 = 3;
    var_1160 = 0;
    var_1168 = 100;
    var_1176 = -1;
    OP_PUSH2_C -2387956586946125306, -7408722731584171860
    var_1184 = 56;
    pri = fun_1AF8(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1192 = 1;
    var_1200 = 8;
    pri = fun_1C40(var_1192)
    var_1208 = 0;
    pri = fun_1D00()
    var_1216 = 0;
    var_1224 = 3;
    var_1232 = 0;
    var_1240 = 100;
    var_1248 = -1;
    OP_PUSH2_C -2387957686457753517, -7408722731584171860
    var_1256 = 56;
    pri = fun_1AF8(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1264 = 1;
    var_1272 = 8;
    pri = fun_1C40(var_1264)
    var_1280 = 0;
    pri = fun_1D00()
    var_1288 = 0;
    pri = fun_1D30()
    var_1296 = 1;
    var_1304 = -7408722731584171860;
    var_1312 = 16;
    pri = fun_04C8(var_1304, var_1296)
    var_1320 = 30;
    var_1328 = 8;
    pri = fun_0060(var_1320)
    var_1336 = 0;
    var_1344 = 4631952216750555136;
    var_1352 = 0;
    OP_PUSH5_C 4680719134291184845, 4656594251449945293, 4675419284148458619, 4680719412605065626, 4656608369179245937
    var_1360 = 4675416617832761262;
    var_1368 = 1;
    pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 0;
    pri = fun_1D30()
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = 0;
    var_1408 = 0;
    OP_PUSH2_C -7408722731584171860, 8802641224559852288
    var_1416 = 48;
    pri = fun_0608(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    OP_PUSH2_C 8802641224559852288, -7408722731584171860
    var_1456 = 48;
    pri = fun_0608(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1464 = 8802641224559852288;
    var_1472 = 8;
    pri = fun_0660(var_1464)
    var_1480 = -7408722731584171860;
    var_1488 = 8;
    pri = fun_0660(var_1480)
    var_1496 = 0;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 100;
    var_1528 = -1;
    OP_PUSH2_C -2387958785969381728, -7408722731584171860
    var_1536 = 56;
    pri = fun_1AF8(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 1;
    var_1552 = 8;
    pri = fun_1C40(var_1544)
    var_1560 = 0;
    pri = fun_1D00()
    var_1568 = 1;
    var_1576 = -6352432447319980419;
    var_1584 = 16;
    pri = fun_0490(var_1576, var_1568)
    var_1592 = 1;
    var_1600 = 0;
    var_1608 = 30;
    pri = float(var_1608)
    var_1616 = pri;
    var_1624 = 0;
    pri = float(var_1624)
    var_1632 = pri;
    var_1640 = 0;
    OP_PUSH4_C 4680731094916110746, 4675431785595666432, 4607182418800017408, -6352432447319980419
    var_1648 = 72;
    pri = fun_0540(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1656 = 0;
    var_1664 = 4631952216750555136;
    var_1672 = 3;
    OP_PUSH5_C 4680728634758843597, 4656558275429484462, 4675398492383577375, 4680728913072724378, 4656572393158785106
    var_1680 = 4675395826067880018;
    var_1688 = 30;
    pri = EvCameraMove(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1696 = 0;
    var_1704 = 3;
    var_1712 = 0;
    var_1720 = 100;
    var_1728 = -1;
    OP_PUSH2_C 3005484814985930558, -6352432447319980419
    var_1736 = 56;
    pri = fun_1AF8(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1744 = 1;
    var_1752 = 8;
    pri = fun_1C40(var_1744)
    var_1760 = 0;
    pri = fun_1D00()
    var_1768 = -6352432447319980419;
    var_1776 = 8;
    pri = fun_0660(var_1768)
    var_1784 = 0;
    var_1792 = 0;
    var_1800 = 0;
    var_1808 = 0;
    OP_PUSH2_C -6352432447319980419, 8802641224559852288
    var_1816 = 48;
    pri = fun_0608(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1824 = 0;
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = 0;
    OP_PUSH2_C -6352432447319980419, -7408722731584171860
    var_1856 = 48;
    pri = fun_0608(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1864 = 8802641224559852288;
    var_1872 = 8;
    pri = fun_0660(var_1864)
    var_1880 = -7408722731584171860;
    var_1888 = 8;
    pri = fun_0660(var_1880)
    var_1896 = 0;
    pri = fun_1D30()
    var_1904 = 0;
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 100;
    var_1936 = -1;
    OP_PUSH2_C 3005483715474302347, -6352432447319980419
    var_1944 = 56;
    pri = fun_1AF8(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1952 = 1;
    var_1960 = 8;
    pri = fun_1C40(var_1952)
    var_1968 = 0;
    pri = fun_1D00()
    var_1976 = 0;
    var_1984 = 0;
    var_1992 = 0;
    var_2000 = 0;
    OP_PUSH2_C -7408722731584171860, -6352432447319980419
    var_2008 = 48;
    pri = fun_0608(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2016 = -6352432447319980419;
    var_2024 = 8;
    pri = fun_0660(var_2016)
    var_2032 = 0;
    var_2040 = 1;
    var_2048 = -6352432447319980419;
    var_2056 = 24;
    pri = fun_7A08(var_2048, var_2040, var_2032)
    var_2064 = 1;
    var_2072 = 8;
    pri = fun_0060(var_2064)
    var_2080 = -6352432447319980419;
    var_2088 = 8;
    pri = fun_0838(var_2080)
    var_2096 = 0;
    var_2104 = 3;
    var_2112 = 0;
    var_2120 = 100;
    var_2128 = -1;
    OP_PUSH2_C 3005482615962674136, -6352432447319980419
    var_2136 = 56;
    pri = fun_1AF8(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2144 = 1;
    var_2152 = 8;
    pri = fun_1C40(var_2144)
    var_2160 = 0;
    pri = fun_1D00()
    var_2168 = 1;
    var_2176 = 1;
    var_2184 = -1;
    var_2192 = -1;
    var_2200 = 0;
    var_2208 = 23;
    var_2216 = -7408722731584171860;
    var_2224 = 56;
    pri = fun_39A0(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2232 = 0;
    var_2240 = 3;
    var_2248 = 0;
    var_2256 = 100;
    var_2264 = -1;
    OP_PUSH2_C -2387954387922868884, -7408722731584171860
    var_2272 = 56;
    pri = fun_1AF8(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2280 = 1;
    var_2288 = 8;
    pri = fun_1C40(var_2280)
    var_2296 = 0;
    pri = fun_1D00()
    var_2304 = 1;
    var_2312 = -1;
    var_2320 = -1;
    var_2328 = 3;
    var_2336 = 0;
    var_2344 = 10;
    var_2352 = -6352432447319980419;
    var_2360 = 56;
    pri = fun_1DC0(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2368 = 0;
    var_2376 = 3;
    var_2384 = 0;
    var_2392 = 100;
    var_2400 = -1;
    OP_PUSH2_C 3005490312544071613, -6352432447319980419
    var_2408 = 56;
    pri = fun_1AF8(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352)
    var_2416 = 1;
    var_2424 = 8;
    pri = fun_1C40(var_2416)
    var_2432 = 0;
    pri = fun_1D00()
    var_2440 = 31288;
    var_2448 = -7408722731584171860;
    var_2456 = 16;
    pri = fun_0A38(var_2448, var_2440)
    var_2464 = 1;
    var_2472 = 3;
    var_2480 = 0;
    var_2488 = 23;
    var_2496 = -7408722731584171860;
    var_2504 = 40;
    pri = fun_5CD8(var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2512 = -7408722731584171860;
    var_2520 = 8;
    pri = fun_0838(var_2512)
    var_2528 = 0;
    var_2536 = 3;
    var_2544 = 0;
    var_2552 = 100;
    var_2560 = -1;
    OP_PUSH2_C -2387955487434497095, -7408722731584171860
    var_2568 = 56;
    pri = fun_1AF8(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512)
    var_2576 = 1;
    var_2584 = 8;
    pri = fun_1C40(var_2576)
    var_2592 = 0;
    pri = fun_1D00()
    var_2600 = 0;
    var_2608 = 3;
    var_2616 = 0;
    var_2624 = 100;
    var_2632 = -1;
    OP_PUSH2_C 3005489213032443402, -6352432447319980419
    var_2640 = 56;
    pri = fun_1AF8(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2648 = 1;
    var_2656 = 8;
    pri = fun_1C40(var_2648)
    var_2664 = 0;
    pri = fun_1D00()
    var_2672 = -6352432447319980419;
    var_2680 = 8;
    pri = fun_0838(var_2672)
    var_2688 = 1;
    var_2696 = 0;
    var_2704 = 30;
    pri = float(var_2704)
    var_2712 = pri;
    var_2720 = 0;
    pri = float(var_2720)
    var_2728 = pri;
    var_2736 = 0;
    OP_PUSH4_C 4680744289055644058, 4675403060854390784, 4607182418800017408, -6352432447319980419
    var_2744 = 72;
    pri = fun_0540(var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672)
    var_2752 = 50;
    var_2760 = 8;
    pri = fun_0060(var_2752)
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = 0;
    var_2792 = 0;
    OP_PUSH2_C -7408722731584171860, 8802641224559852288
    var_2800 = 48;
    pri = fun_0608(var_2792, var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2808 = 6;
    var_2816 = 6;
    var_2824 = -7408722731584171860;
    var_2832 = 24;
    pri = fun_0F78(var_2824, var_2816, var_2808)
    var_2840 = 1;
    var_2848 = 0;
    var_2856 = 30;
    pri = float(var_2856)
    var_2864 = pri;
    var_2872 = 0;
    pri = float(var_2872)
    var_2880 = pri;
    var_2888 = 0;
    OP_PUSH4_C 4680744289055644058, 4675403060854390784, 4611686018427387904, -7408722731584171860
    var_2896 = 72;
    pri = fun_0540(var_2888, var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824)
    var_2904 = 0;
    var_2912 = 3;
    var_2920 = 0;
    var_2928 = 100;
    var_2936 = -1;
    OP_PUSH2_C -2387942293294958563, -7408722731584171860
    var_2944 = 56;
    pri = fun_1AF8(var_2936, var_2928, var_2920, var_2912, var_2904, var_2896, var_2888)
    var_2952 = -7408722731584171860;
    var_2960 = 8;
    pri = fun_0660(var_2952)
    var_2968 = 1;
    var_2976 = 8;
    pri = fun_1C40(var_2968)
    var_2984 = 0;
    pri = fun_1D00()
    var_2992 = 8802641224559852288;
    var_3000 = 8;
    pri = fun_0660(var_2992)
    var_3008 = 30;
    var_3016 = 8;
    pri = fun_0060(var_3008)
    var_3024 = 1;
    var_3032 = 0;
    var_3040 = 4641240890982006784;
    var_3048 = 0;
    var_3056 = 0;
    OP_PUSH4_C 4680716120942129971, 4675532624555828838, 4607182418800017408, 8802641224559852288
    var_3064 = 72;
    pri = fun_0540(var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3072 = 50;
    var_3080 = 8;
    pri = fun_0060(var_3072)
    var_3088 = 1;
    var_3096 = 0;
    var_3104 = 31192;
    var_3112 = 8;
    var_3120 = 32;
    pri = fun_02E0(var_3112, var_3104, var_3096, var_3088)
    var_3128 = 0;
    pri = fun_0350()
    var_3136 = 3;
    var_3144 = 1;
    pri = EvCameraEnd(var_3144, var_3136)
    var_3152 = 8802641224559852288;
    var_3160 = 8;
    pri = fun_0660(var_3152)
    var_3168 = -6352432447319980419;
    var_3176 = 8;
    pri = fun_0660(var_3168)
    var_3184 = -7408722731584171860;
    var_3192 = 8;
    pri = fun_0660(var_3184)
    var_3200 = 0;
    var_3208 = -7408722731584171860;
    var_3216 = 16;
    pri = fun_04C8(var_3208, var_3200)
    pri = 0;
    return pri;
}
// fun_9FA8
fun_9FA8() {
    pri = 0;
    return pri;
}
// fun_9FC0
fun_9FC0() {
    var_8 = -7408722731584171860;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = -6352432447319980419;
    var_32 = 8;
    pri = fun_0408(var_24)
    var_40 = 835;
    var_48 = 8;
    pri = fun_81A0(var_40)
    var_56 = 875198469300229184;
    pri = VanishFlagSet(var_56)
    var_64 = -7097984863355835431;
    pri = VanishFlagSet(var_64)
    var_72 = -8784670931408278673;
    pri = VanishFlagSet(var_72)
    var_80 = -4346193151434674169;
    pri = VanishFlagSet(var_80)
    var_88 = -8563725204570389190;
    pri = VanishFlagSet(var_88)
    var_96 = 1;
    pri = ChangeWideRoadOtherPlayerVisibility(var_96)
    pri = 0;
    return pri;
}
// fun_A130
fun_A130() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 100;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 86734;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 39566;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_0438(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 20;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 4643633428284047360;
    pri = WideRoadCameraSetYaw(var_104)
    var_112 = -4600427019358961664;
    pri = WideRoadCameraSetPitch(var_112)
    var_120 = 31240;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A2A8
fun_A2A8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8338()
    var_16 = 0;
    pri = fun_8390()
    var_24 = 0;
    pri = fun_83C8()
    var_32 = 0;
    pri = fun_83E0()
    var_40 = 0;
    pri = fun_9FA8()
    var_48 = 0;
    pri = fun_9FC0()
    var_56 = 0;
    pri = fun_A130()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A398
fun_A398() {
    var_8 = 0;
    pri = fun_8390()
    var_16 = 0;
    pri = fun_9FC0()
    pri = 0;
    return pri;
}
