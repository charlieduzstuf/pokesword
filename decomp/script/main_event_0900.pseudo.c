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
    alt = -9223372036854775808;
    OP_XOR 
    return pri;
}
// fun_0090
fun_0090() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00D0
    pri = 0;
    return pri;
// lab_00D0
    OP_ZERO_P_S -8
    OP_JUMP lab_00F8
// lab_00F8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0150
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00F0
// lab_0150
    pri = 0;
    return pri;
// lab_00F0
    OP_INC_P_S -8
}
// fun_0168
fun_0168() {
    pri = ABKeyWait_()
    return pri;
}
// fun_0190
fun_0190() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01C0
// lab_01C0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02C0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0240
    pri = 0;
    return pri;
// lab_02C0
    pri = 0;
    return pri;
// lab_0240
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
    OP_JUMP lab_01B8
// lab_01B8
    OP_INC_P_S -8
}
// fun_02D8
fun_02D8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
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
// fun_03A8
fun_03A8() {
    OP_JUMP lab_03C0
// lab_03C0
    pri = FadeWait_()
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_03F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0460
fun_0460() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04E8
    OP_JUMP lab_0558
// lab_04E8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0528
    OP_JUMP lab_0558
// lab_0528
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
// lab_0558
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_05D8
// lab_05D8
    var_8 = 0;
    pri = fun_0720()
    OP_JNZ lab_0610
    OP_JUMP lab_0640
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
// lab_0640
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0670
// lab_0670
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_06B0
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0670
    pri = 0;
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0720
fun_0720() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1470(var_8)
    OP_JZER lab_08A8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14A0(var_24)
    OP_JNZ lab_08A8
    pri = 0;
    return pri;
// lab_08A8
    OP_JUMP lab_08B8
// lab_08B8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0918
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08B8
    pri = 0;
    return pri;
}
// fun_0958
fun_0958() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A50
    pri = 0;
    return pri;
// lab_0A50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A90
// lab_0A90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1470(var_8)
    OP_JNZ lab_0B18
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B08
    pri = 0;
    return pri;
// lab_0B18
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B60
    pri = 0;
    return pri;
// lab_0B60
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C08(var_8)
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A90
    pri = 0;
    return pri;
// lab_0B08
    OP_JUMP lab_0B60
}
// fun_0C08
fun_0C08() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C90
    pri = 0;
    return pri;
// lab_0C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1470(var_8)
    OP_JZER lab_0DC0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CE8
    OP_ZERO_P_S 64
// lab_0DC0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DF8
    OP_CONST_S 64, 1
// lab_0DF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E30
    OP_CONST_S 72, 1
// lab_0E30
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
// lab_0CE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D10
    OP_ZERO_P_S 72
// lab_0D10
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
    OP_JUMP lab_0ED0
// lab_0ED0
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F20
fun_0F20() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FC0
fun_0FC0() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1380
        case default:
        {
// switch_1380_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1380_case_0x0
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0F60(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1380_case_default
        }
        case 0x1:
        {
// switch_1380_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0F60(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1380_case_default
        }
        case 0x2:
        {
// switch_1380_case_0x2
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = 0;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0F60(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1380_case_default
        }
        case 0x3:
        {
// switch_1380_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0F60(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1380_case_default
        }
        case 0x4:
        {
// switch_1380_case_0x4
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = 8;
            pri = fun_0060(var_56)
            var_72 = pri;
            var_80 = arg_0;
            var_88 = 48;
            pri = fun_0F60(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1380_case_default
        }
        case 0x5:
        {
// switch_1380_case_0x5
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0F60(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1380_case_default
        }
        case 0x6:
        {
// switch_1380_case_0x6
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_0F60(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1380_case_default
        }
        case 0x7:
        {
// switch_1380_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0F60(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1380_case_default
        }
    }
}
// fun_1430
fun_1430() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_14A0
fun_14A0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_14D0
fun_14D0() {
    OP_JUMP lab_14E8
// lab_14E8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1578
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1568
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_1578
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1608
    pri = IsPlayerRideBicycle()
    OP_JZER lab_15F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    pri = 0;
    return pri;
// lab_1608
    pri = 0;
    return pri;
// lab_15F8
    OP_JUMP lab_1618
// lab_1618
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14E8
    pri = 0;
    return pri;
// lab_1568
    OP_JUMP lab_1618
}
// fun_1658
fun_1658() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_14D0(var_40)
    pri = 0;
    return pri;
}
// fun_16E0
fun_16E0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1718
fun_1718() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1740
fun_1740() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
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
// switch_1D90
        case default:
        {
// switch_1D90_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DD8
// lab_1DD8
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
            OP_JNZ lab_1E80
            var_88 = 0;
            pri = fun_2150()
// lab_1E80
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D90_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1978
                case default:
                {
// switch_1978_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19F0
// lab_19F0
                    OP_JUMP lab_1DD8
                }
                case 0x0:
                {
// switch_1978_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19F0
                }
                case 0x1:
                {
// switch_1978_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19F0
                }
                case 0x2:
                {
// switch_1978_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19F0
                }
                case 0x3:
                {
// switch_1978_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19F0
                }
                case 0x4:
                {
// switch_1978_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19F0
                }
                case 0x5:
                {
// switch_1978_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19F0
                }
            }
        }
        case 0x65:
        {
// switch_1D90_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B30
                case default:
                {
// switch_1B30_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA8
// lab_1BA8
                    OP_JUMP lab_1DD8
                }
                case 0x0:
                {
// switch_1B30_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BA8
                }
                case 0x1:
                {
// switch_1B30_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BA8
                }
                case 0x2:
                {
// switch_1B30_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BA8
                }
                case 0x3:
                {
// switch_1B30_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA8
                }
                case 0x4:
                {
// switch_1B30_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BA8
                }
                case 0x5:
                {
// switch_1B30_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BA8
                }
            }
        }
        case 0x66:
        {
// switch_1D90_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CE8
                case default:
                {
// switch_1CE8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D60
// lab_1D60
                    OP_JUMP lab_1DD8
                }
                case 0x0:
                {
// switch_1CE8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D60
                }
                case 0x1:
                {
// switch_1CE8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D60
                }
                case 0x2:
                {
// switch_1CE8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D60
                }
                case 0x3:
                {
// switch_1CE8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D60
                }
                case 0x4:
                {
// switch_1CE8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D60
                }
                case 0x5:
                {
// switch_1CE8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D60
                }
            }
        }
    }
}
// fun_1E98
fun_1E98() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1778(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F00
fun_1F00() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09D0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1FA8
    pri = 1;
    return pri;
// lab_1FA8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FF0
fun_1FF0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2040
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F00(var_8)
    arg_2 = pri;
// lab_2040
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1778(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1E98(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20F0
fun_20F0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_20A0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2150
fun_2150() {
    OP_JUMP lab_2168
// lab_2168
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21A8
    pri = 0;
    return pri;
// lab_21A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2168
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    var_8 = 0;
    pri = fun_2150()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2298
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2298
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_22D8
fun_22D8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2308
// lab_2308
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2348
    OP_JUMP lab_2378
// lab_2348
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2308
// lab_2378
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
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
// fun_2430
fun_2430() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2468
fun_2468() {
    OP_JUMP lab_2480
// lab_2480
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_24C8
    OP_JUMP lab_24F8
    OP_JUMP lab_24E8
// lab_24C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_24F8
    pri = 0;
    return pri;
// lab_24E8
    OP_JUMP lab_2480
}
// fun_2508
fun_2508() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2538
fun_2538() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2588
fun_2588() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25D8
fun_25D8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2628
fun_2628() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2678
fun_2678() {
    OP_JUMP lab_2690
// lab_2690
    pri = EvCameraMoveWait_()
    OP_JZER lab_26C8
    pri = 0;
    return pri;
// lab_26C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2690
    pri = 0;
    return pri;
}
// fun_2708
fun_2708() {
    pri = arg_6;
    OP_JNZ lab_2740
    var_8 = 0;
    pri = fun_0EE0()
// lab_2740
    pri = arg_1;
    switch (pri) {
// switch_3CA8
        case default:
        {
// switch_3CA8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3FF8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3FF8
            pri = 1;
            OP_JUMP lab_4000
// lab_3FF8
            pri = 0;
// lab_4000
            OP_JZER lab_4158
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D0(var_24, var_16)
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
            OP_JUMP lab_41B8
// lab_4158
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_41B8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4218
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4278
// lab_4218
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4278
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4278
            pri = arg_2;
            OP_JZER lab_42B8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_42B8
            var_8 = 0;
            pri = fun_0F20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3CA8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1:
        {
// switch_3CA8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x2:
        {
// switch_3CA8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x3:
        {
// switch_3CA8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x4:
        {
// switch_3CA8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x5:
        {
// switch_3CA8_case_0x5
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x6:
        {
// switch_3CA8_case_0x6
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x7:
        {
// switch_3CA8_case_0x7
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x8:
        {
// switch_3CA8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x9:
        {
// switch_3CA8_case_0x9
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0xa:
        {
// switch_3CA8_case_0xa
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0xb:
        {
// switch_3CA8_case_0xb
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0xc:
        {
// switch_3CA8_case_0xc
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0xd:
        {
// switch_3CA8_case_0xd
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0xe:
        {
// switch_3CA8_case_0xe
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0xf:
        {
// switch_3CA8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x10:
        {
// switch_3CA8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x11:
        {
// switch_3CA8_case_0x11
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x12:
        {
// switch_3CA8_case_0x12
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x13:
        {
// switch_3CA8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x14:
        {
// switch_3CA8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x15:
        {
// switch_3CA8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x16:
        {
// switch_3CA8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x17:
        {
// switch_3CA8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x18:
        {
// switch_3CA8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x19:
        {
// switch_3CA8_case_0x19
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1a:
        {
// switch_3CA8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0958(var_48, var_40)
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
            pri = fun_0C40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1b:
        {
// switch_3CA8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0958(var_48, var_40)
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
            pri = fun_0C40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1c:
        {
// switch_3CA8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0958(var_48, var_40)
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
            pri = fun_0C40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1d:
        {
// switch_3CA8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1e:
        {
// switch_3CA8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x1f:
        {
// switch_3CA8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x20:
        {
// switch_3CA8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x21:
        {
// switch_3CA8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x22:
        {
// switch_3CA8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x23:
        {
// switch_3CA8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x24:
        {
// switch_3CA8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x25:
        {
// switch_3CA8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x26:
        {
// switch_3CA8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x27:
        {
// switch_3CA8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x28:
        {
// switch_3CA8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
        case 0x29:
        {
// switch_3CA8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3CA8_case_default
        }
    }
}
// fun_42E8
fun_42E8() {
    pri = arg_5;
    OP_JNZ lab_4320
    var_8 = 0;
    pri = fun_0EE0()
// lab_4320
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4370
    OP_CONST_S -8, -1
// lab_4370
    pri = arg_1;
    switch (pri) {
// switch_5E28
        case default:
        {
// switch_5E28_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_62D0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09D0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_62D0
            pri = 1;
            OP_JUMP lab_62D8
// lab_62D0
            pri = 0;
// lab_62D8
            OP_JZER lab_6328
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_6580
// lab_6328
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6390
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6390
            pri = 1;
            OP_JUMP lab_6398
// lab_6390
            pri = 0;
// lab_6398
            OP_JZER lab_6520
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D0(var_24, var_16)
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
            OP_JUMP lab_6580
// lab_6520
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
            pri = fun_0190(var_16, var_8, var_0)
// lab_6580
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_65F0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_65F0
            var_8 = 0;
            pri = fun_0F20()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5E28_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1:
        {
// switch_5E28_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2:
        {
// switch_5E28_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x3:
        {
// switch_5E28_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x4:
        {
// switch_5E28_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x5:
        {
// switch_5E28_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C08(var_40)
            OP_JUMP switch_5E28_case_default
        }
        case 0x6:
        {
// switch_5E28_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x7:
        {
// switch_5E28_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x8:
        {
// switch_5E28_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x9:
        {
// switch_5E28_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0xa:
        {
// switch_5E28_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0xb:
        {
// switch_5E28_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0xc:
        {
// switch_5E28_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0xd:
        {
// switch_5E28_case_0xd
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0xe:
        {
// switch_5E28_case_0xe
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0xf:
        {
// switch_5E28_case_0xf
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x10:
        {
// switch_5E28_case_0x10
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x11:
        {
// switch_5E28_case_0x11
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x12:
        {
// switch_5E28_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x13:
        {
// switch_5E28_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x14:
        {
// switch_5E28_case_0x14
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x15:
        {
// switch_5E28_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x16:
        {
// switch_5E28_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x17:
        {
// switch_5E28_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x18:
        {
// switch_5E28_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x19:
        {
// switch_5E28_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1a:
        {
// switch_5E28_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1b:
        {
// switch_5E28_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1c:
        {
// switch_5E28_case_0x1c
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1d:
        {
// switch_5E28_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1e:
        {
// switch_5E28_case_0x1e
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x1f:
        {
// switch_5E28_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x20:
        {
// switch_5E28_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x21:
        {
// switch_5E28_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x22:
        {
// switch_5E28_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x23:
        {
// switch_5E28_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x24:
        {
// switch_5E28_case_0x24
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x25:
        {
// switch_5E28_case_0x25
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x26:
        {
// switch_5E28_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x27:
        {
// switch_5E28_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x28:
        {
// switch_5E28_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x29:
        {
// switch_5E28_case_0x29
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2a:
        {
// switch_5E28_case_0x2a
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2b:
        {
// switch_5E28_case_0x2b
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2c:
        {
// switch_5E28_case_0x2c
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2d:
        {
// switch_5E28_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2e:
        {
// switch_5E28_case_0x2e
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x2f:
        {
// switch_5E28_case_0x2f
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x30:
        {
// switch_5E28_case_0x30
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x31:
        {
// switch_5E28_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x32:
        {
// switch_5E28_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x33:
        {
// switch_5E28_case_0x33
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x34:
        {
// switch_5E28_case_0x34
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x35:
        {
// switch_5E28_case_0x35
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x36:
        {
// switch_5E28_case_0x36
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x37:
        {
// switch_5E28_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x38:
        {
// switch_5E28_case_0x38
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
            pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E28_case_default
        }
        case 0x39:
        {
// switch_5E28_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x3a:
        {
// switch_5E28_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x3b:
        {
// switch_5E28_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x3c:
        {
// switch_5E28_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x3d:
        {
// switch_5E28_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
        case 0x3e:
        {
// switch_5E28_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            OP_JUMP switch_5E28_case_default
        }
    }
}
// fun_6620
fun_6620() {
    pri = arg_4;
    OP_JNZ lab_6658
    var_8 = 0;
    pri = fun_0EE0()
// lab_6658
    pri = arg_1;
    switch (pri) {
// switch_7A30
        case default:
        {
// switch_7A30_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1470(var_264)
            OP_JZER lab_7FF8
            pri = arg_3;
            switch (pri) {
// switch_7FA0
                case default:
                {
// switch_7FA0_case_default
                    OP_JUMP lab_82B0
// lab_82B0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8320
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8320
                    var_8 = 0;
                    pri = fun_0F20()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7FA0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_7FA0_case_default
                }
                case 0x2:
                {
// switch_7FA0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_7FA0_case_default
                }
                case 0x3:
                {
// switch_7FA0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0190(var_16, var_8, var_0)
                    OP_JUMP switch_7FA0_case_default
                }
            }
// lab_7FF8
            pri = arg_1;
            OP_JZER lab_8048
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8048
            pri = 0;
            OP_JUMP lab_8050
// lab_8048
            pri = 1;
// lab_8050
            OP_JZER lab_80B8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09D0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_80B8
            pri = 1;
            OP_JUMP lab_80C0
// lab_80B8
            pri = 0;
// lab_80C0
            OP_JZER lab_8110
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_82B0
// lab_8110
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8178
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0190(var_16, var_8, var_0)
            OP_JUMP lab_82B0
// lab_8178
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09D0(var_24, var_16)
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
// switch_7A30_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1:
        {
// switch_7A30_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2:
        {
// switch_7A30_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x3:
        {
// switch_7A30_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x4:
        {
// switch_7A30_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x5:
        {
// switch_7A30_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C08(var_40)
            OP_JUMP switch_7A30_case_default
        }
        case 0x6:
        {
// switch_7A30_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x7:
        {
// switch_7A30_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x8:
        {
// switch_7A30_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x9:
        {
// switch_7A30_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0xa:
        {
// switch_7A30_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0xb:
        {
// switch_7A30_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0xc:
        {
// switch_7A30_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0xd:
        {
// switch_7A30_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0xe:
        {
// switch_7A30_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0xf:
        {
// switch_7A30_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x10:
        {
// switch_7A30_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x11:
        {
// switch_7A30_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x12:
        {
// switch_7A30_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x13:
        {
// switch_7A30_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x14:
        {
// switch_7A30_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x15:
        {
// switch_7A30_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x16:
        {
// switch_7A30_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x17:
        {
// switch_7A30_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x18:
        {
// switch_7A30_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x19:
        {
// switch_7A30_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1a:
        {
// switch_7A30_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1b:
        {
// switch_7A30_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1c:
        {
// switch_7A30_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1d:
        {
// switch_7A30_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1e:
        {
// switch_7A30_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x1f:
        {
// switch_7A30_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x20:
        {
// switch_7A30_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x21:
        {
// switch_7A30_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x22:
        {
// switch_7A30_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x23:
        {
// switch_7A30_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x24:
        {
// switch_7A30_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x25:
        {
// switch_7A30_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x26:
        {
// switch_7A30_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x27:
        {
// switch_7A30_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x28:
        {
// switch_7A30_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x29:
        {
// switch_7A30_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2a:
        {
// switch_7A30_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2b:
        {
// switch_7A30_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2c:
        {
// switch_7A30_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2d:
        {
// switch_7A30_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2e:
        {
// switch_7A30_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x2f:
        {
// switch_7A30_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x30:
        {
// switch_7A30_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x31:
        {
// switch_7A30_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x32:
        {
// switch_7A30_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x33:
        {
// switch_7A30_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x34:
        {
// switch_7A30_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x35:
        {
// switch_7A30_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x36:
        {
// switch_7A30_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x37:
        {
// switch_7A30_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x38:
        {
// switch_7A30_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x39:
        {
// switch_7A30_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x3a:
        {
// switch_7A30_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x3b:
        {
// switch_7A30_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x3c:
        {
// switch_7A30_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x3d:
        {
// switch_7A30_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
        case 0x3e:
        {
// switch_7A30_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0990(var_24, var_16, var_8)
            OP_JUMP switch_7A30_case_default
        }
    }
}
// fun_8350
fun_8350() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8560(var_16, var_8)
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
    OP_JZER lab_8548
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8548
    pri = 0;
    return pri;
}
// fun_8560
fun_8560() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0990(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_85A8
fun_85A8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8640
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2708(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8640
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8798
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8700
    var_24 = 30272;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8700
    pri = 1;
    OP_JUMP lab_8708
// lab_8798
    pri = 0;
    return pri;
// lab_8700
    pri = 0;
// lab_8708
    OP_JZER lab_8798
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2708(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_87A8
fun_87A8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_85A8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8830(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8830
fun_8830() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_89C8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8898
fun_8898() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8908
    OP_CONST_S -8, 1
// lab_8908
    pri = arg_0;
    OP_JNZ lab_8928
    OP_ZERO_P_S -8
// lab_8928
    pri = var_8;
    OP_JZER lab_89B0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_89B0
    pri = 0;
    return pri;
}
// fun_89C8
fun_89C8() {
    var_8 = 30376;
    var_16 = 8;
    pri = fun_2430(var_8)
    var_24 = 0;
    pri = fun_2468()
    pri = arg_3;
    OP_JNZ lab_8AE8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8AB0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8B58(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8AD8
// lab_8AE8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8CF8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8AB0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8C20(var_16, var_8)
// lab_8AD8
    OP_JUMP lab_8B30
// lab_8B30
    var_8 = 0;
    pri = fun_2508()
    pri = 0;
    return pri;
}
// fun_8B58
fun_8B58() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8CF8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8C08
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8C08
    pri = 0;
    return pri;
}
// fun_8C20
fun_8C20() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2588(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_20F0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_21E8(var_72)
    var_88 = 0;
    pri = fun_22A8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2538(var_96)
    pri = 0;
    return pri;
}
// fun_8CF8
fun_8CF8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8D40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9000(var_8)
// lab_8D40
    pri = arg_4;
    OP_JNZ lab_8DA8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2538(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2588(var_40, var_32, var_24)
// lab_8DA8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8E48
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_25D8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_20F0(var_56, var_48, var_40)
    OP_JUMP lab_8F38
// lab_8E48
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8F00
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8F00
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8F00
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_20F0(var_24, var_16, var_8)
// lab_8F38
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8F78
    var_8 = 0;
    var_16 = 8;
    pri = fun_0460(var_8)
// lab_8F78
    var_8 = 1;
    var_16 = 8;
    pri = fun_21E8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9208(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8898(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9000
fun_9000() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9060
    var_16 = 30536;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9060
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_91A0
        case default:
        {
// switch_91A0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9190
            var_16 = 31080;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9190
            OP_JUMP lab_91D8
// lab_91D8
            var_8 = 31296;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_91A0_case_0x1
            var_8 = 30752;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_91D8
        }
        case 0x2:
        {
// switch_91A0_case_0x2
            var_8 = 30880;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_91D8
        }
    }
}
// fun_9208
fun_9208() {
    pri = arg_2;
    OP_JNZ lab_92F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2538(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2588(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2628(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_92F0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_20F0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_21E8(var_40)
    var_56 = 0;
    pri = fun_22A8()
    pri = 0;
    return pri;
}
// fun_9368
fun_9368() {
    pri = 31480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_93F0
// lab_93F0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9570
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9560
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_94B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_94B0
    pri = 0;
    OP_JUMP lab_94B8
// lab_9570
    pri = 0;
    return pri;
// lab_9560
    OP_JUMP lab_93E8
// lab_93E8
    OP_INC_P_S -936
// lab_94B0
    pri = 1;
// lab_94B8
    OP_JZER lab_9530
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9528
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9530
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9528
}
// fun_9590
fun_9590() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9628
    var_8 = 1;
    var_16 = 0;
    var_24 = 32400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0338(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03A8()
    var_56 = 0;
    pri = fun_1718()
// lab_9628
    pri = arg_4;
    OP_JZER lab_9660
    var_8 = 1;
    var_16 = 8;
    pri = fun_1740(var_8)
// lab_9660
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_96B8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_96B8
    pri = 0;
    OP_JUMP lab_96C0
// lab_96B8
    pri = 1;
// lab_96C0
    OP_JZER lab_9788
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9788
    var_16 = 0;
    pri = fun_0438()
    OP_JZER lab_9760
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1658(var_32, var_24)
    OP_JUMP lab_9788
// lab_9788
    pri = arg_2;
    OP_JZER lab_9860
    var_8 = 0;
    pri = fun_0438()
    OP_JZER lab_9830
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1430(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A0(var_40)
    OP_JUMP lab_9860
// lab_9860
    pri = arg_3;
    OP_JZER lab_9898
    var_8 = 1;
    var_16 = 8;
    pri = fun_16E0(var_8)
// lab_9898
    pri = 0;
    return pri;
// lab_9830
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1430(var_16, var_8)
// lab_9760
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1658(var_16, var_8)
}
// fun_98A8
fun_98A8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9368(var_24)
    pri = 0;
    return pri;
}
// fun_9910
fun_9910() {
    pri = g_mode;
    switch (pri) {
// switch_99D0
        case default:
        {
// switch_99D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9A18
// lab_9A18
            pri = 0;
            return pri;
        }
        case 0xc49f641ea800e685:
        {
// switch_99D0_case_0xc49f641ea800e685
            var_8 = 0;
            pri = fun_B690()
            OP_JUMP lab_9A18
        }
        case 0x0:
        {
// switch_99D0_case_0x0
            var_8 = 0;
            pri = fun_9A28()
            OP_JUMP lab_9A18
        }
        case 0x58ad3e21e48acd61:
        {
// switch_99D0_case_0x58ad3e21e48acd61
            var_8 = 0;
            pri = fun_B5A0()
            OP_JUMP lab_9A18
        }
    }
}
// fun_9A28
fun_9A28() {
    pri = 0;
    return pri;
}
// fun_9A40
fun_9A40() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9590(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9A98
fun_9A98() {
    pri = 0;
    return pri;
}
// fun_9AB0
fun_9AB0() {
    pri = 0;
    return pri;
}
// fun_9AC8
fun_9AC8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 32448;
    pri = SoundPostEvent(var_24)
    var_32 = -2219091719801836476;
    var_40 = 8;
    pri = fun_06F0(var_32)
    var_48 = 0;
    var_56 = 4630995201829738906;
    var_64 = 0;
    OP_PUSH5_C 4653546625120075776, 4637151763257842729, 4652366937104402350, 4653631419456809861, 4637177096005746688
    var_72 = 4652343715418823721;
    var_80 = 1;
    pri = EvCameraMove(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 0;
    pri = fun_2678()
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4640392947614665933, 4654121009994425958, 4652790161120165888, 8802641224559852288
    var_112 = 48;
    pri = fun_0748(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 30;
    var_128 = 8;
    pri = fun_0090(var_120)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 5306116557915082582, 8802641224559852288
    var_168 = 48;
    pri = fun_07D8(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 0;
    var_184 = 4630995201829738906;
    var_192 = 6;
    OP_PUSH5_C 4653867022808409702, 4637216502502486180, 4652675372106226074, 4654651634305990656, 4637448015670830694
    var_200 = 4652460571514623754;
    var_208 = 20;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 1;
    var_224 = 3;
    var_232 = 0;
    var_240 = 6;
    var_248 = 5306116557915082582;
    var_256 = 40;
    pri = fun_6620(var_248, var_240, var_232, var_224, var_216)
    var_264 = 5306116557915082582;
    var_272 = 8;
    pri = fun_0A08(var_264)
    var_280 = 8802641224559852288;
    var_288 = 8;
    pri = fun_0830(var_280)
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    OP_PUSH2_C 8802641224559852288, 5306116557915082582
    var_328 = 48;
    pri = fun_07D8(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 30;
    var_344 = 8;
    pri = fun_0090(var_336)
    var_352 = 5306116557915082582;
    var_360 = 8;
    pri = fun_0830(var_352)
    var_368 = 0;
    pri = fun_2678()
    var_376 = 0;
    var_384 = 3;
    var_392 = 0;
    var_400 = 100;
    var_408 = -1;
    OP_PUSH2_C 5093684717733314966, 5306116557915082582
    var_416 = 56;
    pri = fun_1FF0(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_21E8(var_424)
    var_440 = 0;
    pri = fun_22A8()
    var_448 = 0;
    var_456 = 1;
    var_464 = 5306116557915082582;
    var_472 = 24;
    pri = fun_8350(var_464, var_456, var_448)
    var_480 = 1;
    var_488 = 8;
    pri = fun_0090(var_480)
    var_496 = 5306116557915082582;
    var_504 = 8;
    pri = fun_0A08(var_496)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C 5093683618221686755, 5306116557915082582
    var_552 = 56;
    pri = fun_1FF0(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_21E8(var_560)
    var_576 = 0;
    pri = fun_22A8()
    var_584 = 0;
    var_592 = 4623395377458551194;
    var_600 = 0;
    OP_PUSH5_C 4652785279288538563, 4647872617355170284, 4650774096599475814, 4658965920021290680, 4648918648737371259
    var_608 = 4655516334230538813;
    var_616 = 1;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    pri = fun_2678()
    var_632 = 30;
    var_640 = 8;
    pri = fun_0090(var_632)
    var_648 = 0;
    var_656 = 3;
    var_664 = 0;
    var_672 = 100;
    var_680 = -1;
    OP_PUSH2_C 5093682518710058544, 5306116557915082582
    var_688 = 56;
    pri = fun_1FF0(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 1;
    var_704 = 8;
    pri = fun_21E8(var_696)
    var_712 = 0;
    pri = fun_22A8()
    var_720 = 0;
    var_728 = 4623395377458551194;
    var_736 = 3;
    OP_PUSH5_C 4651985318608633856, 4647872617355170284, 4652928435702474998, 4658624213797610455, 4648918648737371259
    var_744 = 4656835242408521236;
    var_752 = 25;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 0;
    pri = fun_2678()
    var_768 = 30;
    var_776 = 8;
    pri = fun_0090(var_768)
    var_784 = 0;
    var_792 = 3;
    var_800 = 0;
    var_808 = 100;
    var_816 = -1;
    OP_PUSH2_C 5093690215291456021, 5306116557915082582
    var_824 = 56;
    pri = fun_1FF0(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 1;
    var_840 = 8;
    pri = fun_21E8(var_832)
    var_848 = 0;
    pri = fun_22A8()
    var_856 = 0;
    var_864 = 4623395377458551194;
    var_872 = 3;
    OP_PUSH5_C 4651123653336178360, 4647872617355170284, 4652770062047610143, 4658747535021781811, 4648972920631318282
    var_880 = 4643964161381682381;
    var_888 = 25;
    pri = EvCameraMove(var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_896 = 0;
    pri = fun_2678()
    var_904 = 30;
    var_912 = 8;
    pri = fun_0090(var_904)
    var_920 = 0;
    var_928 = 3;
    var_936 = 0;
    var_944 = 100;
    var_952 = -1;
    OP_PUSH2_C 5093689115779827810, 5306116557915082582
    var_960 = 56;
    pri = fun_1FF0(var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_968 = 1;
    var_976 = 8;
    pri = fun_21E8(var_968)
    var_984 = 0;
    pri = fun_22A8()
    var_992 = 0;
    var_1000 = 4623395377458551194;
    var_1008 = 3;
    OP_PUSH5_C 4652227914854186353, 4647872617355170284, 4654124924255820841, 4659025975346399805, 4648972920631318282
    var_1016 = 4648549212830438523;
    var_1024 = 25;
    pri = EvCameraMove(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1032 = 0;
    pri = fun_2678()
    var_1040 = 1;
    var_1048 = 1;
    OP_PUSH4_C 4639048904600872550, 4653426998254973747, 4652730787492265984, 8802641224559852288
    var_1056 = 48;
    pri = fun_0748(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1064 = 1;
    var_1072 = 1;
    OP_PUSH4_C 4639833516098453504, 4653039970161996595, 4652057446571415962, 5306116557915082582
    var_1080 = 48;
    pri = fun_0748(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1088 = 30;
    var_1096 = 8;
    pri = fun_0090(var_1088)
    var_1104 = 0;
    var_1112 = 3;
    var_1120 = 0;
    var_1128 = 100;
    var_1136 = -1;
    OP_PUSH2_C 5093688016268199599, 5306116557915082582
    var_1144 = 56;
    pri = fun_1FF0(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_21E8(var_1152)
    var_1168 = 0;
    pri = fun_22A8()
    var_1176 = 15;
    var_1184 = 8;
    pri = fun_0090(var_1176)
    var_1192 = 0;
    var_1200 = 4631093718071587635;
    var_1208 = 0;
    OP_PUSH5_C 4653316475346149704, 4640982285847153869, 4652539912273684070, 4654501836841822454, 4638304403287472865
    var_1216 = 4652496987339735695;
    var_1224 = 1;
    pri = EvCameraMove(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1232 = 0;
    pri = fun_2678()
    var_1240 = 0;
    var_1248 = 4631093718071587635;
    var_1256 = 0;
    OP_PUSH5_C 4653316475346149704, 4640982285847153869, 4652539912273684070, 4655630991303083295, 4632969748791364157
    var_1264 = 4652456129487647539;
    var_1272 = 300;
    pri = EvCameraMove(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1280 = 60;
    var_1288 = 8;
    pri = fun_0090(var_1280)
    var_1296 = 0;
    var_1304 = 3;
    var_1312 = 0;
    var_1320 = 100;
    var_1328 = -1;
    OP_PUSH2_C 5093686916756571388, 5306116557915082582
    var_1336 = 56;
    pri = fun_1FF0(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 1;
    var_1352 = 8;
    pri = fun_21E8(var_1344)
    var_1360 = 0;
    pri = fun_22A8()
    var_1368 = 0;
    var_1376 = 0;
    var_1384 = 0;
    var_1392 = 0;
    OP_PUSH2_C 8802641224559852288, 5306116557915082582
    var_1400 = 48;
    pri = fun_07D8(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1408 = 10;
    var_1416 = 8;
    pri = fun_0090(var_1408)
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    OP_PUSH2_C 5306116557915082582, 8802641224559852288
    var_1456 = 48;
    pri = fun_07D8(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1464 = 8802641224559852288;
    var_1472 = 8;
    pri = fun_0830(var_1464)
    var_1480 = 5306116557915082582;
    var_1488 = 8;
    pri = fun_0830(var_1480)
    var_1496 = 0;
    var_1504 = 1;
    var_1512 = 5306116557915082582;
    var_1520 = 24;
    pri = fun_8350(var_1512, var_1504, var_1496)
    var_1528 = 1;
    var_1536 = 8;
    pri = fun_0090(var_1528)
    var_1544 = 5306116557915082582;
    var_1552 = 8;
    pri = fun_0A08(var_1544)
    var_1560 = 0;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 100;
    var_1592 = -1;
    OP_PUSH2_C 5093694613337968865, 5306116557915082582
    var_1600 = 56;
    pri = fun_1FF0(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1608 = 1;
    var_1616 = 8;
    pri = fun_21E8(var_1608)
    var_1624 = 0;
    var_1632 = 482979548598732398;
    var_1640 = 0;
    var_1648 = 24;
    pri = fun_22D8(var_1640, var_1632, var_1624)
    var_1656 = 0;
    var_1664 = 482978449087104187;
    var_1672 = 1;
    var_1680 = 24;
    pri = fun_22D8(var_1672, var_1664, var_1656)
    var_1696 = 0;
    var_1704 = 0;
    var_1712 = 0;
    var_1720 = 1;
    var_1728 = 32;
    pri = fun_23C0(var_1720, var_1712, var_1704, var_1696)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_AD00
        case default:
        {
// switch_AD00_case_default
            var_8 = 0;
            var_16 = 4631093718071587635;
            var_24 = 0;
            OP_PUSH5_C 4653158585476401070, 4638592211451159511, 4652239613657905889, 4653488570906129203, 4638772707279975219
            var_32 = 4652395436445794304;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            var_48 = 0;
            pri = fun_2678()
            var_56 = 0;
            var_64 = 4631093718071587635;
            var_72 = 0;
            OP_PUSH5_C 4652997748915489997, 4639184716277135442, 4652108903715595878, 4653327734345218130, 4639307509735725466
            var_80 = 4652319482182547538;
            var_88 = 200;
            pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_96 = 1;
            var_104 = 1;
            var_112 = -1;
            var_120 = -1;
            var_128 = 0;
            var_136 = 6;
            var_144 = 5306116557915082582;
            var_152 = 56;
            pri = fun_42E8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = 20;
            var_168 = 8;
            pri = fun_0090(var_160)
            var_176 = 1;
            var_184 = 1;
            var_192 = -1;
            var_200 = 1;
            var_208 = 5306116557915082582;
            var_216 = 40;
            pri = fun_0FC0(var_208, var_200, var_192, var_184, var_176)
            var_224 = 20;
            var_232 = 8;
            pri = fun_0090(var_224)
            var_240 = 0;
            var_248 = 3;
            var_256 = 0;
            var_264 = 100;
            var_272 = -1;
            OP_PUSH2_C 5092697356291370713, 5306116557915082582
            var_280 = 56;
            pri = fun_1FF0(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
            var_288 = 1;
            var_296 = 8;
            pri = fun_21E8(var_288)
            var_304 = 0;
            pri = fun_22A8()
            var_312 = 30;
            var_320 = 8;
            pri = fun_0090(var_312)
            var_328 = 0;
            var_336 = 4629995965662416077;
            var_344 = 0;
            OP_PUSH5_C 4653002322883861545, 4637831525326598963, 4652332984185336627, 4653929694971192934, 4638674542881847378
            var_352 = 4653017496144324854;
            var_360 = 1;
            pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
            var_368 = 0;
            pri = fun_2678()
            var_376 = -1;
            var_384 = 5306116557915082582;
            var_392 = 16;
            pri = fun_1430(var_384, var_376)
            var_400 = 1;
            var_408 = 3;
            var_416 = 0;
            var_424 = 6;
            var_432 = 5306116557915082582;
            var_440 = 40;
            pri = fun_6620(var_432, var_424, var_416, var_408, var_400)
            var_448 = 5306116557915082582;
            var_456 = 8;
            pri = fun_0A08(var_448)
            var_464 = 0;
            var_472 = 0;
            var_480 = 0;
            var_488 = 0;
            OP_PUSH2_C 5306116557915082582, 8802641224559852288
            var_496 = 48;
            pri = fun_07D8(var_488, var_480, var_472, var_464, var_456, var_448)
            var_504 = 8802641224559852288;
            var_512 = 8;
            pri = fun_0830(var_504)
            var_520 = 0;
            var_528 = 3;
            var_536 = 0;
            var_544 = 100;
            var_552 = -1;
            OP_PUSH2_C 5093693513826340654, 5306116557915082582
            var_560 = 56;
            pri = fun_1FF0(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
            var_568 = 1;
            var_576 = 8;
            pri = fun_21E8(var_568)
            var_584 = 0;
            pri = fun_22A8()
            var_592 = 6;
            var_600 = 4;
            var_608 = 2;
            var_616 = 1;
            var_624 = 9;
            var_632 = 2;
            var_640 = 28;
            var_648 = 5306116557915082582;
            var_656 = 64;
            pri = fun_87A8(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
            var_664 = 32616;
            pri = SoundPostEvent(var_664)
            var_672 = 1;
            var_680 = 0;
            var_688 = 32400;
            var_696 = 8;
            var_704 = 32;
            pri = fun_0338(var_696, var_688, var_680, var_672)
            var_712 = 0;
            pri = fun_03A8()
            var_720 = 3;
            var_728 = 1;
            pri = EvCameraEnd(var_728, var_720)
            var_736 = 15;
            var_744 = 8;
            pri = fun_0090(var_736)
            var_752 = -2219091719801836476;
            var_760 = 8;
            pri = fun_0570(var_752)
            var_768 = 0;
            pri = fun_05A0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_AD00_case_0x0
            var_8 = 0;
            pri = fun_22A8()
            var_16 = 0;
            var_24 = 0;
            var_32 = 5306116557915082582;
            var_40 = 24;
            pri = fun_8350(var_32, var_24, var_16)
            var_48 = 1;
            var_56 = 8;
            pri = fun_0090(var_48)
            var_64 = 5306116557915082582;
            var_72 = 8;
            pri = fun_0A08(var_64)
            var_80 = 0;
            var_88 = 3;
            var_96 = 0;
            var_104 = 100;
            var_112 = -1;
            OP_PUSH2_C 5092695157268114291, 5306116557915082582
            var_120 = 56;
            pri = fun_1FF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_128 = 1;
            var_136 = 8;
            pri = fun_21E8(var_128)
            var_144 = 0;
            pri = fun_22A8()
            OP_JUMP switch_AD00_case_default
        }
        case 0x1:
        {
// switch_AD00_case_0x1
            var_8 = 0;
            pri = fun_22A8()
            var_16 = 0;
            var_24 = 0;
            var_32 = 5306116557915082582;
            var_40 = 24;
            pri = fun_8350(var_32, var_24, var_16)
            var_48 = 1;
            var_56 = 8;
            pri = fun_0090(var_48)
            var_64 = 5306116557915082582;
            var_72 = 8;
            pri = fun_0A08(var_64)
            var_80 = 0;
            var_88 = 3;
            var_96 = 0;
            var_104 = 100;
            var_112 = -1;
            OP_PUSH2_C 5092696256779742502, 5306116557915082582
            var_120 = 56;
            pri = fun_1FF0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_128 = 1;
            var_136 = 8;
            pri = fun_21E8(var_128)
            var_144 = 0;
            pri = fun_22A8()
            OP_JUMP switch_AD00_case_default
        }
    }
}
// fun_B390
fun_B390() {
    pri = 0;
    return pri;
}
// fun_B3A8
fun_B3A8() {
    var_8 = 905;
    var_16 = 8;
    pri = fun_98A8(var_8)
    var_24 = -1822231575082135099;
    pri = VanishFlagReset(var_24)
    var_32 = -1822226077523994044;
    pri = VanishFlagReset(var_32)
    var_40 = 6905620846586353737;
    pri = VanishFlagReset(var_40)
    var_48 = 1151696524443736482;
    pri = VanishFlagReset(var_48)
    var_56 = -8918209179425425563;
    pri = VanishFlagSet(var_56)
    var_64 = -3512005172569892056;
    pri = VanishFlagSet(var_64)
    var_72 = 8003305528381221656;
    pri = VanishFlagSet(var_72)
    var_80 = 5238682974890618049;
    pri = VanishFlagSet(var_80)
    var_88 = 2;
    var_96 = 28;
    pri = ItemAdd(var_96, var_88)
    pri = 0;
    return pri;
}
// fun_B548
fun_B548() {
    var_8 = 32784;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02D8(var_16, var_8)
    var_32 = 0;
    pri = fun_03A8()
    pri = 0;
    return pri;
}
// fun_B5A0
fun_B5A0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9A40()
    var_16 = 0;
    pri = fun_9A98()
    var_24 = 0;
    pri = fun_9AB0()
    var_32 = 0;
    pri = fun_9AC8()
    var_40 = 0;
    pri = fun_B390()
    var_48 = 0;
    pri = fun_B3A8()
    var_56 = 0;
    pri = fun_B548()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B690
fun_B690() {
    var_8 = 0;
    pri = fun_9A98()
    var_16 = 0;
    pri = fun_B3A8()
    pri = 0;
    return pri;
}
