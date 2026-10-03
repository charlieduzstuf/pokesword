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
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
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
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0478
// lab_0478
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04B8
    OP_JUMP lab_0528
// lab_04B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04F8
    OP_JUMP lab_0528
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
// lab_0528
    pri = 0;
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0640
fun_0640() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0678
fun_0678() {
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
// fun_06F0
fun_06F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F08(var_8)
    OP_JZER lab_0810
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F38(var_24)
    OP_JNZ lab_0810
    pri = 0;
    return pri;
// lab_0810
    OP_JUMP lab_0820
// lab_0820
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0880
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0820
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08F8
fun_08F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09B8
    pri = 0;
    return pri;
// lab_09B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09F8
// lab_09F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F08(var_8)
    OP_JNZ lab_0A80
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A70
    pri = 0;
    return pri;
// lab_0A80
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AC8
    pri = 0;
    return pri;
// lab_0AC8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B70(var_8)
    pri = 0;
    return pri;
// lab_0B28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09F8
    pri = 0;
    return pri;
// lab_0A70
    OP_JUMP lab_0AC8
}
// fun_0B70
fun_0B70() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BF8
    pri = 0;
    return pri;
// lab_0BF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F08(var_8)
    OP_JZER lab_0D28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C50
    OP_ZERO_P_S 64
// lab_0D28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D60
    OP_CONST_S 64, 1
// lab_0D60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D98
    OP_CONST_S 72, 1
// lab_0D98
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
// lab_0C50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C78
    OP_ZERO_P_S 72
// lab_0C78
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
    OP_JUMP lab_0E38
// lab_0E38
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F68
fun_0F68() {
    OP_JUMP lab_0F80
// lab_0F80
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1010
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1000
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
// lab_1010
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1090
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
// lab_10A0
    pri = 0;
    return pri;
// lab_1090
    OP_JUMP lab_10B0
// lab_10B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F80
    pri = 0;
    return pri;
// lab_1000
    OP_JUMP lab_10B0
}
// fun_10F0
fun_10F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0970(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F68(var_40)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_11B0
fun_11B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
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
// switch_1828
        case default:
        {
// switch_1828_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1870
// lab_1870
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
            OP_JNZ lab_1918
            var_88 = 0;
            pri = fun_1BE8()
// lab_1918
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1828_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1410
                case default:
                {
// switch_1410_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1488
// lab_1488
                    OP_JUMP lab_1870
                }
                case 0x0:
                {
// switch_1410_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1488
                }
                case 0x1:
                {
// switch_1410_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1488
                }
                case 0x2:
                {
// switch_1410_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1488
                }
                case 0x3:
                {
// switch_1410_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1488
                }
                case 0x4:
                {
// switch_1410_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1488
                }
                case 0x5:
                {
// switch_1410_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1488
                }
            }
        }
        case 0x65:
        {
// switch_1828_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15C8
                case default:
                {
// switch_15C8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1640
// lab_1640
                    OP_JUMP lab_1870
                }
                case 0x0:
                {
// switch_15C8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1640
                }
                case 0x1:
                {
// switch_15C8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1640
                }
                case 0x2:
                {
// switch_15C8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1640
                }
                case 0x3:
                {
// switch_15C8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1640
                }
                case 0x4:
                {
// switch_15C8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1640
                }
                case 0x5:
                {
// switch_15C8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1640
                }
            }
        }
        case 0x66:
        {
// switch_1828_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1780
                case default:
                {
// switch_1780_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17F8
// lab_17F8
                    OP_JUMP lab_1870
                }
                case 0x0:
                {
// switch_1780_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17F8
                }
                case 0x1:
                {
// switch_1780_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17F8
                }
                case 0x2:
                {
// switch_1780_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17F8
                }
                case 0x3:
                {
// switch_1780_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17F8
                }
                case 0x4:
                {
// switch_1780_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17F8
                }
                case 0x5:
                {
// switch_1780_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17F8
                }
            }
        }
    }
}
// fun_1930
fun_1930() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1210(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1998
fun_1998() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0938(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A40
    pri = 1;
    return pri;
// lab_1A40
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A88
fun_1A88() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1AD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1998(var_8)
    arg_2 = pri;
// lab_1AD8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1210(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B38
fun_1B38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1930(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B88
fun_1B88() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1B38(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BE8
fun_1BE8() {
    OP_JUMP lab_1C00
// lab_1C00
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C40
    pri = 0;
    return pri;
// lab_1C40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C00
    pri = 0;
    return pri;
}
// fun_1C80
fun_1C80() {
    var_8 = 0;
    pri = fun_1BE8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D30
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D30
    pri = 0;
    return pri;
}
// fun_1D40
fun_1D40() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D70
fun_1D70() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1DA0
// lab_1DA0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DE0
    OP_JUMP lab_1E10
// lab_1DE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DA0
// lab_1E10
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E58
fun_1E58() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    pri = ListMenuStart_Seq(var_40, var_32, var_24, var_16, var_8)
    var_48 = 12;
    pri = TempWorkGet(var_48)
    return pri;
}
// fun_1EC8
fun_1EC8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
    OP_JUMP lab_1F18
// lab_1F18
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1F60
    OP_JUMP lab_1F90
    OP_JUMP lab_1F80
// lab_1F60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1F90
    pri = 0;
    return pri;
// lab_1F80
    OP_JUMP lab_1F18
}
// fun_1FA0
fun_1FA0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1FD0
fun_1FD0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2020
fun_2020() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2070
fun_2070() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2110
fun_2110() {
    OP_JUMP lab_2128
// lab_2128
    pri = EvCameraMoveWait_()
    OP_JZER lab_2160
    pri = 0;
    return pri;
// lab_2160
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2128
    pri = 0;
    return pri;
}
// fun_21A0
fun_21A0() {
    pri = arg_6;
    OP_JNZ lab_21D8
    var_8 = 0;
    pri = fun_0E48()
// lab_21D8
    pri = arg_1;
    switch (pri) {
// switch_3740
        case default:
        {
// switch_3740_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3A90
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3A90
            pri = 1;
            OP_JUMP lab_3A98
// lab_3A90
            pri = 0;
// lab_3A98
            OP_JZER lab_3BF0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0938(var_24, var_16)
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
            OP_JUMP lab_3C50
// lab_3BF0
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_3C50
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3CB0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D10
// lab_3CB0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D10
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D10
            pri = arg_2;
            OP_JZER lab_3D50
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3D50
            var_8 = 0;
            pri = fun_0E88()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3740_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x1:
        {
// switch_3740_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x2:
        {
// switch_3740_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x3:
        {
// switch_3740_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x4:
        {
// switch_3740_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x5:
        {
// switch_3740_case_0x5
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0x6:
        {
// switch_3740_case_0x6
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0x7:
        {
// switch_3740_case_0x7
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0x8:
        {
// switch_3740_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x9:
        {
// switch_3740_case_0x9
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0xa:
        {
// switch_3740_case_0xa
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0xb:
        {
// switch_3740_case_0xb
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0xc:
        {
// switch_3740_case_0xc
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0xd:
        {
// switch_3740_case_0xd
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0xe:
        {
// switch_3740_case_0xe
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0xf:
        {
// switch_3740_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x10:
        {
// switch_3740_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x11:
        {
// switch_3740_case_0x11
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0x12:
        {
// switch_3740_case_0x12
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0x13:
        {
// switch_3740_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x14:
        {
// switch_3740_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x15:
        {
// switch_3740_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x16:
        {
// switch_3740_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x17:
        {
// switch_3740_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x18:
        {
// switch_3740_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x19:
        {
// switch_3740_case_0x19
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
            pri = fun_0BA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3740_case_default
        }
        case 0x1a:
        {
// switch_3740_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08F8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08C0(var_48, var_40)
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
            pri = fun_0BA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3740_case_default
        }
        case 0x1b:
        {
// switch_3740_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08F8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08C0(var_48, var_40)
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
            pri = fun_0BA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3740_case_default
        }
        case 0x1c:
        {
// switch_3740_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08F8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08C0(var_48, var_40)
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
            pri = fun_0BA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3740_case_default
        }
        case 0x1d:
        {
// switch_3740_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x1e:
        {
// switch_3740_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x1f:
        {
// switch_3740_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x20:
        {
// switch_3740_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x21:
        {
// switch_3740_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x22:
        {
// switch_3740_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x23:
        {
// switch_3740_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x24:
        {
// switch_3740_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x25:
        {
// switch_3740_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x26:
        {
// switch_3740_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x27:
        {
// switch_3740_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x28:
        {
// switch_3740_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
        case 0x29:
        {
// switch_3740_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3740_case_default
        }
    }
}
// fun_3D80
fun_3D80() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_3F90(var_16, var_8)
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
    OP_JZER lab_3F78
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_3F78
    pri = 0;
    return pri;
}
// fun_3F90
fun_3F90() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08F8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3FD8
fun_3FD8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_4070
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0970(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_21A0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_4070
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_41C8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_4130
    var_24 = 8664;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_4130
    pri = 1;
    OP_JUMP lab_4138
// lab_41C8
    pri = 0;
    return pri;
// lab_4130
    pri = 0;
// lab_4138
    OP_JZER lab_41C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0970(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_21A0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_41D8
fun_41D8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3FD8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_4260(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_4260
fun_4260() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_43F8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_42C8
fun_42C8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_4338
    OP_CONST_S -8, 1
// lab_4338
    pri = arg_0;
    OP_JNZ lab_4358
    OP_ZERO_P_S -8
// lab_4358
    pri = var_8;
    OP_JZER lab_43E0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_43E0
    pri = 0;
    return pri;
}
// fun_43F8
fun_43F8() {
    var_8 = 8768;
    var_16 = 8;
    pri = fun_1EC8(var_8)
    var_24 = 0;
    pri = fun_1F00()
    pri = arg_3;
    OP_JNZ lab_4518
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_44E0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4588(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_4508
// lab_4518
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4728(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_44E0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4650(var_16, var_8)
// lab_4508
    OP_JUMP lab_4560
// lab_4560
    var_8 = 0;
    pri = fun_1FA0()
    pri = 0;
    return pri;
}
// fun_4588
fun_4588() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4728(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_4638
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_4638
    pri = 0;
    return pri;
}
// fun_4650
fun_4650() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2020(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1B88(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1C80(var_72)
    var_88 = 0;
    pri = fun_1D40()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1FD0(var_96)
    pri = 0;
    return pri;
}
// fun_4728
fun_4728() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4770
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4A30(var_8)
// lab_4770
    pri = arg_4;
    OP_JNZ lab_47D8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2020(var_40, var_32, var_24)
// lab_47D8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4878
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2070(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1B88(var_56, var_48, var_40)
    OP_JUMP lab_4968
// lab_4878
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4930
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_4930
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_4930
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1B88(var_24, var_16, var_8)
// lab_4968
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_49A8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_49A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C80(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4C38(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_42C8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4A30
fun_4A30() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_4A90
    var_16 = 8928;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_4A90
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_4BD0
        case default:
        {
// switch_4BD0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_4BC0
            var_16 = 9472;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_4BC0
            OP_JUMP lab_4C08
// lab_4C08
            var_8 = 9688;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_4BD0_case_0x1
            var_8 = 9144;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4C08
        }
        case 0x2:
        {
// switch_4BD0_case_0x2
            var_8 = 9272;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4C08
        }
    }
}
// fun_4C38
fun_4C38() {
    pri = arg_2;
    OP_JNZ lab_4D20
    var_8 = 0;
    var_16 = 8;
    pri = fun_1FD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2020(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_20C0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_4D20
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1B88(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1C80(var_40)
    var_56 = 0;
    pri = fun_1D40()
    pri = 0;
    return pri;
}
// fun_4D98
fun_4D98() {
    pri = 9872;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4E20
// lab_4E20
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4FA0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4F90
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4EE0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4EE0
    pri = 0;
    OP_JUMP lab_4EE8
// lab_4FA0
    pri = 0;
    return pri;
// lab_4F90
    OP_JUMP lab_4E18
// lab_4E18
    OP_INC_P_S -936
// lab_4EE0
    pri = 1;
// lab_4EE8
    OP_JZER lab_4F60
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4F58
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4F60
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4F58
}
// fun_4FC0
fun_4FC0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5058
    var_8 = 1;
    var_16 = 0;
    var_24 = 10792;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_11B0()
// lab_5058
    pri = arg_4;
    OP_JZER lab_5090
    var_8 = 1;
    var_16 = 8;
    pri = fun_11D8(var_8)
// lab_5090
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_50E8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_50E8
    pri = 0;
    OP_JUMP lab_50F0
// lab_50E8
    pri = 1;
// lab_50F0
    OP_JZER lab_51B8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_51B8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_5190
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10F0(var_32, var_24)
    OP_JUMP lab_51B8
// lab_51B8
    pri = arg_2;
    OP_JZER lab_5290
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_5260
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0EC8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0640(var_40)
    OP_JUMP lab_5290
// lab_5290
    pri = arg_3;
    OP_JZER lab_52C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1178(var_8)
// lab_52C8
    pri = 0;
    return pri;
// lab_5260
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0EC8(var_16, var_8)
// lab_5190
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10F0(var_16, var_8)
}
// fun_52D8
fun_52D8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_5458
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5370
    var_8 = 1;
    var_16 = 0;
    var_24 = 10792;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_5458
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_5370
    pri = arg_0;
    OP_JNZ lab_53B8
    var_8 = 10840;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_53D8
// lab_53B8
    var_8 = 11016;
    pri = SoundPostEvent(var_8)
// lab_53D8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5458
    var_24 = 11280;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_5498
fun_5498() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4D98(var_24)
    pri = 0;
    return pri;
}
// fun_5500
fun_5500() {
    pri = g_mode;
    switch (pri) {
// switch_55C0
        case default:
        {
// switch_55C0_case_default
            pri = CommandNOP()
            OP_JUMP lab_5608
// lab_5608
            pri = 0;
            return pri;
        }
        case 0xbfc928221eb5430e:
        {
// switch_55C0_case_0xbfc928221eb5430e
            var_8 = 0;
            pri = fun_6F70()
            OP_JUMP lab_5608
        }
        case 0x0:
        {
// switch_55C0_case_0x0
            var_8 = 0;
            pri = fun_5618()
            OP_JUMP lab_5608
        }
        case 0x5d8a861e6ddca3ea:
        {
// switch_55C0_case_0x5d8a861e6ddca3ea
            var_8 = 0;
            pri = fun_7060()
            OP_JUMP lab_5608
        }
    }
}
// fun_5618
fun_5618() {
    pri = 0;
    return pri;
}
// fun_5630
fun_5630() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4FC0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5688
fun_5688() {
    pri = 0;
    return pri;
}
// fun_56A0
fun_56A0() {
    pri = 0;
    return pri;
}
// fun_56B8
fun_56B8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1;
    var_32 = -2609511271441633747;
    var_40 = 16;
    pri = fun_0600(var_32, var_24)
    var_48 = 11328;
    pri = SoundPostEvent(var_48)
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4663393631356112077, 4656892460993630700, 4666989798539520901, 4664022475041386004, 4657091384637327933
    var_80 = 4666993113567078646;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_2110()
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C -4584917748142204518, 4664022661958362726, 4667189310421938995, 8802641224559852288
    var_120 = 48;
    pri = fun_0570(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 15;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 1;
    var_152 = 0;
    var_160 = 4641240890982006784;
    var_168 = 0;
    var_176 = 0;
    OP_PUSH4_C 4663940198586279526, 4667081558282416947, 4607182418800017408, 8802641224559852288
    var_184 = 72;
    pri = fun_0678(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    OP_PUSH2_C 8802641224559852288, -2609511271441633747
    var_224 = 48;
    pri = fun_0740(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = -2609511271441633747;
    var_240 = 8;
    pri = fun_0798(var_232)
    var_248 = 0;
    var_256 = 4631952216750555136;
    var_264 = 3;
    OP_PUSH5_C 4663398084378204570, 4656822532054104146, 4667041420610444984, 4664233471322756219, 4657087052561514496
    var_272 = 4667045818656956088;
    var_280 = 30;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C 3329501570489371855, -2609511271441633747
    var_328 = 56;
    pri = fun_1A88(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_1C80(var_336)
    var_352 = 0;
    pri = fun_1D40()
    var_360 = 8802641224559852288;
    var_368 = 8;
    pri = fun_0798(var_360)
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    OP_PUSH2_C -2609511271441633747, 8802641224559852288
    var_408 = 48;
    pri = fun_0740(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 8802641224559852288;
    var_424 = 8;
    pri = fun_0798(var_416)
    var_432 = 0;
    var_440 = 2;
    var_448 = -2609511271441633747;
    var_456 = 24;
    pri = fun_3D80(var_448, var_440, var_432)
    var_464 = 1;
    var_472 = 8;
    pri = fun_0060(var_464)
    var_480 = -2609511271441633747;
    var_488 = 8;
    pri = fun_0970(var_480)
    var_496 = 0;
    var_504 = 3;
    var_512 = 0;
    var_520 = 100;
    var_528 = -1;
    OP_PUSH2_C 3329502670001000066, -2609511271441633747
    var_536 = 56;
    pri = fun_1A88(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_544 = 1;
    var_552 = 8;
    pri = fun_1C80(var_544)
    var_560 = 0;
    var_568 = 195986908476119661;
    var_576 = 0;
    var_584 = 24;
    pri = fun_1D70(var_576, var_568, var_560)
    var_592 = 0;
    var_600 = 195983609941235028;
    var_608 = 1;
    var_616 = 24;
    pri = fun_1D70(var_608, var_600, var_592)
    var_632 = 0;
    var_640 = 0;
    var_648 = 0;
    var_656 = 1;
    var_664 = 32;
    pri = fun_1E58(var_656, var_648, var_640, var_632)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_5EF0
        case default:
        {
// switch_5EF0_case_default
            var_8 = 0;
            var_16 = 0;
            var_24 = -2609511271441633747;
            var_32 = 24;
            pri = fun_3D80(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = -2609511271441633747;
            var_64 = 8;
            pri = fun_0970(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 3329497172442859011, -2609511271441633747
            var_112 = 56;
            pri = fun_1A88(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1C80(var_120)
            var_136 = 0;
            pri = fun_1D40()
            var_144 = 0;
            var_152 = 0;
            var_160 = 0;
            var_168 = 151;
            pri = float(var_168)
            var_176 = pri;
            var_184 = -2609511271441633747;
            var_192 = 40;
            pri = fun_06F0(var_184, var_176, var_168, var_160, var_152)
            var_200 = -2609511271441633747;
            var_208 = 8;
            pri = fun_0798(var_200)
            var_216 = 0;
            var_224 = 0;
            var_232 = 0;
            var_240 = -161;
            pri = float(var_240)
            var_248 = pri;
            var_256 = 8802641224559852288;
            var_264 = 40;
            pri = fun_06F0(var_256, var_248, var_240, var_232, var_224)
            var_272 = 8802641224559852288;
            var_280 = 8;
            pri = fun_0798(var_272)
            var_288 = 0;
            var_296 = 3;
            var_304 = 0;
            var_312 = 100;
            var_320 = -1;
            OP_PUSH2_C 3329498271954487222, -2609511271441633747
            var_328 = 56;
            pri = fun_1A88(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
            var_336 = 1;
            var_344 = 8;
            pri = fun_1C80(var_336)
            var_352 = 0;
            pri = fun_1D40()
            var_360 = 0;
            var_368 = 4631952216750555136;
            var_376 = 0;
            OP_PUSH5_C 4662566182885512970, 4657952126320016097, 4666943591563363615, 4663435951558665175, 4658213788097194230
            var_384 = 4666948154536618885;
            var_392 = 1;
            pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
            var_400 = 0;
            pri = fun_2110()
            var_408 = 0;
            var_416 = 4631952216750555136;
            var_424 = 0;
            OP_PUSH5_C 4661875194803037143, 4657744230661436211, 4666939974170108232, 4662744952481073070, 4658005914428846899
            var_432 = 4666944537143363502;
            var_440 = 800;
            pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
            var_448 = 50;
            var_456 = 8;
            pri = fun_0060(var_448)
            var_464 = 0;
            var_472 = 3;
            var_480 = 0;
            var_488 = 100;
            var_496 = -1;
            OP_PUSH2_C 3329499371466115433, -2609511271441633747
            var_504 = 56;
            pri = fun_1A88(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
            var_512 = 1;
            var_520 = 8;
            pri = fun_1C80(var_512)
            var_528 = 0;
            pri = fun_1D40()
            var_536 = 30;
            var_544 = 8;
            pri = fun_0060(var_536)
            var_552 = 0;
            var_560 = 3;
            var_568 = 0;
            var_576 = 100;
            var_584 = -1;
            OP_PUSH2_C 3329509267070769332, -2609511271441633747
            var_592 = 56;
            pri = fun_1A88(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
            var_600 = 1;
            var_608 = 8;
            pri = fun_1C80(var_600)
            var_616 = 0;
            pri = fun_1D40()
            var_624 = 40;
            var_632 = 8;
            pri = fun_0060(var_624)
            var_640 = 0;
            var_648 = 2;
            var_656 = -2609511271441633747;
            var_664 = 24;
            pri = fun_3D80(var_656, var_648, var_640)
            var_672 = 1;
            var_680 = 8;
            pri = fun_0060(var_672)
            var_688 = -2609511271441633747;
            var_696 = 8;
            pri = fun_0970(var_688)
            var_704 = 0;
            var_712 = 4631952216750555136;
            var_720 = 0;
            OP_PUSH5_C 4663844365152802570, 4656986975013154324, 4667041090756956652, 4664245884809033810, 4657187174090339779
            var_728 = 4667041090756956652;
            var_736 = 1;
            pri = EvCameraMove(var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664)
            var_744 = 0;
            pri = fun_2110()
            var_752 = 0;
            var_760 = 3;
            var_768 = 0;
            var_776 = 100;
            var_784 = -1;
            OP_PUSH2_C 3329510366582397543, -2609511271441633747
            var_792 = 56;
            pri = fun_1A88(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
            var_800 = 1;
            var_808 = 8;
            pri = fun_1C80(var_800)
            var_816 = 0;
            pri = fun_1D40()
            var_824 = 0;
            var_832 = 0;
            var_840 = -2609511271441633747;
            var_848 = 24;
            pri = fun_3D80(var_840, var_832, var_824)
            var_856 = 1;
            var_864 = 8;
            pri = fun_0060(var_856)
            var_872 = -2609511271441633747;
            var_880 = 8;
            pri = fun_0970(var_872)
            var_888 = 0;
            var_896 = 0;
            var_904 = 0;
            var_912 = 0;
            OP_PUSH2_C -2609511271441633747, 8802641224559852288
            var_920 = 48;
            pri = fun_0740(var_912, var_904, var_896, var_888, var_880, var_872)
            var_928 = 0;
            var_936 = 0;
            var_944 = 0;
            var_952 = 0;
            OP_PUSH2_C 8802641224559852288, -2609511271441633747
            var_960 = 48;
            pri = fun_0740(var_952, var_944, var_936, var_928, var_920, var_912)
            var_968 = 8802641224559852288;
            var_976 = 8;
            pri = fun_0798(var_968)
            var_984 = -2609511271441633747;
            var_992 = 8;
            pri = fun_0798(var_984)
            var_1000 = 0;
            pri = fun_2110()
            var_1008 = 0;
            var_1016 = 3;
            var_1024 = 0;
            var_1032 = 100;
            var_1040 = -1;
            OP_PUSH2_C 3330350393466161522, -2609511271441633747
            var_1048 = 56;
            pri = fun_1A88(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
            var_1056 = 1;
            var_1064 = 8;
            pri = fun_1C80(var_1056)
            var_1072 = 0;
            pri = fun_1D40()
            var_1080 = 1;
            var_1088 = 0;
            var_1096 = 4641240890982006784;
            var_1104 = 0;
            var_1112 = 0;
            OP_PUSH4_C 4663885332956053504, 4667036533281259520, 4607182418800017408, -2609511271441633747
            var_1120 = 72;
            pri = fun_0678(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
            var_1128 = -2609511271441633747;
            var_1136 = 8;
            pri = fun_0798(var_1128)
            var_1144 = 6;
            var_1152 = 4;
            var_1160 = 2;
            var_1168 = 1;
            var_1176 = 9;
            var_1184 = 1;
            var_1192 = 78;
            var_1200 = -2609511271441633747;
            var_1208 = 64;
            pri = fun_41D8(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
            var_1216 = 0;
            var_1224 = 3;
            var_1232 = 0;
            var_1240 = 100;
            var_1248 = -1;
            OP_PUSH2_C 3330349293954533311, -2609511271441633747
            var_1256 = 56;
            pri = fun_1A88(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
            var_1264 = 1;
            var_1272 = 8;
            pri = fun_1C80(var_1264)
            var_1280 = 0;
            pri = fun_1D40()
            var_1288 = 1;
            var_1296 = 1;
            var_1304 = 16;
            pri = fun_52D8(var_1296, var_1288)
            var_1312 = 0;
            var_1320 = 3;
            var_1328 = 0;
            var_1336 = 100;
            var_1344 = -1;
            OP_PUSH2_C 3330351492977789733, -2609511271441633747
            var_1352 = 56;
            pri = fun_1A88(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
            var_1360 = 1;
            var_1368 = 8;
            pri = fun_1C80(var_1360)
            var_1376 = 0;
            pri = fun_1D40()
            var_1384 = 1;
            var_1392 = 0;
            var_1400 = 4641240890982006784;
            var_1408 = 0;
            var_1416 = 0;
            OP_PUSH4_C 4664074448956030976, 4666712727106879488, 4607182418800017408, -2609511271441633747
            var_1424 = 72;
            pri = fun_0678(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
            var_1432 = 30;
            var_1440 = 8;
            pri = fun_0060(var_1432)
            var_1448 = 0;
            var_1456 = 0;
            var_1464 = 0;
            var_1472 = -90;
            pri = float(var_1472)
            var_1480 = pri;
            var_1488 = 8802641224559852288;
            var_1496 = 40;
            pri = fun_06F0(var_1488, var_1480, var_1472, var_1464, var_1456)
            var_1504 = 8802641224559852288;
            var_1512 = 8;
            pri = fun_0798(var_1504)
            var_1520 = -2609511271441633747;
            var_1528 = 8;
            pri = fun_0798(var_1520)
            var_1536 = 11488;
            pri = SoundPostEvent(var_1536)
            var_1544 = 3;
            var_1552 = 30;
            pri = EvCameraEnd(var_1552, var_1544)
            var_1560 = 0;
            var_1568 = -2609511271441633747;
            var_1576 = 16;
            pri = fun_0600(var_1568, var_1560)
            var_1584 = 0;
            var_1592 = -2609511271441633747;
            var_1600 = 16;
            pri = fun_05C8(var_1592, var_1584)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5EF0_case_0x0
            var_8 = 0;
            var_16 = 1;
            var_24 = -2609511271441633747;
            var_32 = 24;
            pri = fun_3D80(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = -2609511271441633747;
            var_64 = 8;
            pri = fun_0970(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 3329503769512628277, -2609511271441633747
            var_112 = 56;
            pri = fun_1A88(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1C80(var_120)
            var_136 = 0;
            pri = fun_1D40()
            OP_JUMP switch_5EF0_case_default
        }
        case 0x1:
        {
// switch_5EF0_case_0x1
            var_8 = 0;
            var_16 = 1;
            var_24 = -2609511271441633747;
            var_32 = 24;
            pri = fun_3D80(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = -2609511271441633747;
            var_64 = 8;
            pri = fun_0970(var_56)
            var_72 = 0;
            var_80 = 3;
            var_88 = 0;
            var_96 = 100;
            var_104 = -1;
            OP_PUSH2_C 3329496072931230800, -2609511271441633747
            var_112 = 56;
            pri = fun_1A88(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 1;
            var_128 = 8;
            pri = fun_1C80(var_120)
            var_136 = 0;
            pri = fun_1D40()
            OP_JUMP switch_5EF0_case_default
        }
    }
}
// fun_6C88
fun_6C88() {
    pri = 0;
    return pri;
}
// fun_6CA0
fun_6CA0() {
    var_8 = -2609511271441633747;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 540;
    var_32 = 8;
    pri = fun_5498(var_24)
    var_40 = 7578286301365252433;
    pri = VanishFlagReset(var_40)
    var_48 = -7901463040989336122;
    pri = VanishFlagSet(var_48)
    var_56 = 875198469300229184;
    pri = VanishFlagSet(var_56)
    var_64 = -7097984863355835431;
    pri = VanishFlagSet(var_64)
    var_72 = -8784670931408278673;
    pri = VanishFlagSet(var_72)
    var_80 = 6630629473051589266;
    pri = VanishFlagSet(var_80)
    var_88 = -7055281923037152848;
    pri = VanishFlagSet(var_88)
    var_96 = -306157450485645404;
    pri = VanishFlagSet(var_96)
    var_104 = 201901857388939299;
    pri = VanishFlagSet(var_104)
    var_112 = 3889324658118487074;
    pri = VanishFlagSet(var_112)
    var_120 = -4346193151434674169;
    pri = VanishFlagSet(var_120)
    var_128 = -8563725204570389190;
    pri = VanishFlagSet(var_128)
    var_136 = 7506713967005848083;
    pri = FlagSet(var_136)
    var_144 = 5501743159805903958;
    pri = FlagReset(var_144)
    var_152 = 1;
    var_160 = 78;
    pri = ItemAdd(var_160, var_152)
    pri = 0;
    return pri;
}
// fun_6F58
fun_6F58() {
    pri = 0;
    return pri;
}
// fun_6F70
fun_6F70() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_5630()
    var_16 = 0;
    pri = fun_5688()
    var_24 = 0;
    pri = fun_56A0()
    var_32 = 0;
    pri = fun_56B8()
    var_40 = 0;
    pri = fun_6C88()
    var_48 = 0;
    pri = fun_6CA0()
    var_56 = 0;
    pri = fun_6F58()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7060
fun_7060() {
    var_8 = 0;
    pri = fun_5688()
    var_16 = 0;
    pri = fun_6CA0()
    pri = 0;
    return pri;
}
