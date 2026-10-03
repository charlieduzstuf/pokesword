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
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0190
fun_0190() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_01D8
// lab_01D8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0218
    OP_JUMP lab_0288
// lab_0218
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0258
    OP_JUMP lab_0288
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_01D8
// lab_0288
    pri = 0;
    return pri;
}
// fun_02A0
fun_02A0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_02D0
fun_02D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06A8(var_8)
    OP_JZER lab_0348
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_06D8(var_24)
    OP_JNZ lab_0348
    pri = 0;
    return pri;
// lab_0348
    OP_JUMP lab_0358
// lab_0358
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_03B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_03B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0358
    pri = 0;
    return pri;
}
// fun_03F8
fun_03F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0430
fun_0430() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0470
fun_0470() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_04B8
    pri = 0;
    return pri;
// lab_04B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_04F8
// lab_04F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06A8(var_8)
    OP_JNZ lab_0580
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0570
    pri = 0;
    return pri;
// lab_0580
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_05C8
    pri = 0;
    return pri;
// lab_05C8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0628
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0670(var_8)
    pri = 0;
    return pri;
// lab_0628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04F8
    pri = 0;
    return pri;
// lab_0570
    OP_JUMP lab_05C8
}
// fun_0670
fun_0670() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0708
fun_0708() {
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
// switch_0D20
        case default:
        {
// switch_0D20_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0D68
// lab_0D68
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
            OP_JNZ lab_0E10
            var_88 = 0;
            pri = fun_0EE0()
// lab_0E10
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0D20_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0908
                case default:
                {
// switch_0908_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0980
// lab_0980
                    OP_JUMP lab_0D68
                }
                case 0x0:
                {
// switch_0908_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0980
                }
                case 0x1:
                {
// switch_0908_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0980
                }
                case 0x2:
                {
// switch_0908_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0980
                }
                case 0x3:
                {
// switch_0908_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0980
                }
                case 0x4:
                {
// switch_0908_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0980
                }
                case 0x5:
                {
// switch_0908_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0980
                }
            }
        }
        case 0x65:
        {
// switch_0D20_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0AC0
                case default:
                {
// switch_0AC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0B38
// lab_0B38
                    OP_JUMP lab_0D68
                }
                case 0x0:
                {
// switch_0AC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0B38
                }
                case 0x1:
                {
// switch_0AC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0B38
                }
                case 0x2:
                {
// switch_0AC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0B38
                }
                case 0x3:
                {
// switch_0AC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0B38
                }
                case 0x4:
                {
// switch_0AC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0B38
                }
                case 0x5:
                {
// switch_0AC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0B38
                }
            }
        }
        case 0x66:
        {
// switch_0D20_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0C78
                case default:
                {
// switch_0C78_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0CF0
// lab_0CF0
                    OP_JUMP lab_0D68
                }
                case 0x0:
                {
// switch_0C78_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0CF0
                }
                case 0x1:
                {
// switch_0C78_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0CF0
                }
                case 0x2:
                {
// switch_0C78_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0CF0
                }
                case 0x3:
                {
// switch_0C78_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0CF0
                }
                case 0x4:
                {
// switch_0C78_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0CF0
                }
                case 0x5:
                {
// switch_0C78_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0CF0
                }
            }
        }
    }
}
// fun_0E28
fun_0E28() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0708(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0E28(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    OP_JUMP lab_0EF8
// lab_0EF8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F38
    pri = 0;
    return pri;
// lab_0F38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EF8
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 0;
    pri = fun_0EE0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1028
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_1028
    pri = 0;
    return pri;
}
// fun_1038
fun_1038() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1068
fun_1068() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_1218
    OP_CONST_S -8, 1
// lab_1218
    pri = arg_0;
    OP_JNZ lab_1238
    OP_ZERO_P_S -8
// lab_1238
    pri = var_8;
    OP_JZER lab_12C0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_12C0
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    pri = g_mode;
    switch (pri) {
// switch_1370
        case default:
        {
// switch_1370_case_default
            pri = CommandNOP()
            OP_JUMP lab_13A8
// lab_13A8
            pri = 0;
            return pri;
        }
        case 0xe50eab89579be4ca:
        {
// switch_1370_case_0xe50eab89579be4ca
            var_8 = 0;
            pri = fun_13D0()
            OP_JUMP lab_13A8
        }
        case 0x0:
        {
// switch_1370_case_0x0
            var_8 = 0;
            pri = fun_13B8()
            OP_JUMP lab_13A8
        }
    }
}
// fun_13B8
fun_13B8() {
    pri = 0;
    return pri;
}
// fun_13D0
fun_13D0() {
    var_16 = 0;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_32 = 1;
    pri = TempWorkGet(var_32)
    var_16 = pri;
    var_48 = 2;
    pri = TempWorkGet(var_48)
    var_24 = pri;
    OP_CONST_S -32, 1
    pri = var_32;
    OP_JZER lab_1C40
    var_72 = var_8;
    pri = ItemGetNum(var_72)
    var_40 = pri;
    pri = var_16;
    var_48 = pri;
    OP_LOAD_S_BOTH -40, -16
    OP_ADD 
    alt = 999;
    OP_JSLEQ lab_1540
    pri = var_40;
    alt = 999;
    OP_SUB_ALT 
    var_48 = pri;
// lab_1C40
    var_8 = var_16;
    var_16 = var_8;
    var_24 = 0;
    var_32 = 24;
    pri = fun_10B8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_0E90(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_0F78(var_72)
    var_88 = 0;
    pri = fun_1038()
// lab_1540
    var_16 = var_8;
    pri = ItemIsWazaMachine(var_16)
    var_56 = pri;
    pri = IsPlayerRideBicycle()
    var_64 = pri;
    pri = var_64;
    OP_JZER lab_15F8
    pri = GetTargetFieldObjectID()
    var_32 = pri;
    var_40 = 8;
    pri = fun_02A0(var_32)
    OP_JUMP lab_17B8
// lab_15F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0470(var_8)
    pri = var_56;
    OP_JZER lab_1680
    var_24 = 7;
    var_32 = 208;
    var_40 = 8802641224559852288;
    var_48 = 24;
    pri = fun_0430(var_40, var_32, var_24)
    OP_JUMP lab_16B8
// lab_1680
    var_8 = 6;
    var_16 = 336;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0430(var_24, var_16, var_8)
// lab_16B8
    var_8 = 464;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_03F8(var_16, var_8)
    var_32 = 8;
    pri = GetTargetFieldObjectID()
    var_40 = pri;
    var_48 = 8802641224559852288;
    pri = StartRotationToTargetObject_(var_48, var_40, var_32)
    var_56 = 8;
    var_64 = 8;
    pri = fun_0060(var_56)
    pri = GetTargetFieldObjectID()
    var_72 = pri;
    var_80 = 8;
    pri = fun_02A0(var_72)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_02D0(var_88)
// lab_17B8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1068(var_8)
    var_24 = 1;
    var_32 = var_8;
    var_40 = 1;
    var_48 = 24;
    pri = fun_10B8(var_40, var_32, var_24)
    pri = var_56;
    OP_JZER lab_18B0
    var_56 = 600;
    pri = SoundPostEvent(var_56)
    var_64 = var_8;
    var_72 = 2;
    var_80 = 16;
    pri = fun_1108(var_72, var_64)
    var_88 = 3;
    var_96 = 0;
    var_104 = -5083110083263305048;
    var_112 = 24;
    pri = fun_0E90(var_104, var_96, var_88)
    OP_JUMP lab_1998
// lab_18B0
    var_8 = 728;
    pri = SoundPostEvent(var_8)
    OP_CONST_S -72, -5083108983751676837
    pri = var_48;
    alt = 1;
    OP_JSLEQ lab_1960
    var_24 = 0;
    var_32 = 0;
    var_40 = var_48;
    var_48 = 2;
    pri = WordSetNumber(var_48, var_40, var_32, var_24)
    OP_CONST_S -72, -5083102386681907571
// lab_1960
    var_8 = 3;
    var_16 = 0;
    var_24 = var_72;
    var_32 = 24;
    pri = fun_0E90(var_24, var_16, var_8)
// lab_1998
    pri = var_56;
    OP_JZER lab_1A00
    var_8 = 0;
    var_16 = 8;
    pri = fun_0190(var_8)
    var_24 = 1;
    var_32 = 8;
    pri = fun_0F78(var_24)
    OP_JUMP lab_1A20
// lab_1A00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F78(var_8)
// lab_1A20
    pri = var_56;
    OP_JZER lab_1B40
    var_8 = 0;
    var_16 = 8;
    pri = fun_1068(var_8)
    var_24 = var_16;
    var_32 = var_8;
    var_40 = 1;
    var_48 = 24;
    pri = fun_10B8(var_40, var_32, var_24)
    var_64 = var_8;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_72 = pri;
    var_72 = var_72;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1158(var_80, var_72)
    var_96 = 3;
    var_104 = 0;
    var_112 = -1840022397907466531;
    var_120 = 24;
    pri = fun_0E90(var_112, var_104, var_96)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0F78(var_128)
// lab_1B40
    var_8 = 0;
    pri = fun_1038()
    pri = var_56;
    OP_JNZ lab_1BA0
    var_16 = 0;
    var_24 = 1;
    var_32 = 912;
    pri = PokeMemoryCheckParty(var_32, var_24, var_16)
// lab_1BA0
    var_8 = 9;
    var_16 = var_8;
    var_24 = 16;
    pri = fun_11A8(var_16, var_8)
    var_32 = var_48;
    var_40 = var_8;
    pri = ItemAdd(var_40, var_32)
    pri = var_24;
    OP_JZER lab_1C28
    var_48 = 36;
    var_56 = 8;
    pri = fun_0160(var_48)
// lab_1C28
    OP_JUMP lab_1CE0
// lab_1CE0
    pri = var_32;
    return pri;
}
