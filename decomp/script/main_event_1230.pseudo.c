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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    var_8 = 0;
    pri = fun_06F0()
    OP_JNZ lab_05E0
    OP_JUMP lab_0610
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
// lab_0610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0640
// lab_0640
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0680
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07E0
fun_07E0() {
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
// fun_0858
fun_0858() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1070(var_8)
    OP_JZER lab_0978
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10A0(var_24)
    OP_JNZ lab_0978
    pri = 0;
    return pri;
// lab_0978
    OP_JUMP lab_0988
// lab_0988
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09E8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0988
    pri = 0;
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B20
    pri = 0;
    return pri;
// lab_0B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B60
// lab_0B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1070(var_8)
    OP_JNZ lab_0BE8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BD8
    pri = 0;
    return pri;
// lab_0BE8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C30
    pri = 0;
    return pri;
// lab_0C30
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CD8(var_8)
    pri = 0;
    return pri;
// lab_0C90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B60
    pri = 0;
    return pri;
// lab_0BD8
    OP_JUMP lab_0C30
}
// fun_0CD8
fun_0CD8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1070(var_8)
    OP_JZER lab_0E90
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DB8
    OP_ZERO_P_S 64
// lab_0E90
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EC8
    OP_CONST_S 64, 1
// lab_0EC8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F00
    OP_CONST_S 72, 1
// lab_0F00
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
// lab_0DB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE0
    OP_ZERO_P_S 72
// lab_0DE0
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
    OP_JUMP lab_0FA0
// lab_0FA0
    pri = 0;
    return pri;
}
// fun_0FB0
fun_0FB0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF0
fun_0FF0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1030
fun_1030() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1070
fun_1070() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10D0
fun_10D0() {
    OP_JUMP lab_10E8
// lab_10E8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1178
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1168
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    pri = 0;
    return pri;
// lab_1178
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1208
    pri = IsPlayerRideBicycle()
    OP_JZER lab_11F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    pri = 0;
    return pri;
// lab_1208
    pri = 0;
    return pri;
// lab_11F8
    OP_JUMP lab_1218
// lab_1218
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10E8
    pri = 0;
    return pri;
// lab_1168
    OP_JUMP lab_1218
}
// fun_1258
fun_1258() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10D0(var_40)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1378
fun_1378() {
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
// switch_1990
        case default:
        {
// switch_1990_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_19D8
// lab_19D8
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
            OP_JNZ lab_1A80
            var_88 = 0;
            pri = fun_1D50()
// lab_1A80
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1990_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1578
                case default:
                {
// switch_1578_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15F0
// lab_15F0
                    OP_JUMP lab_19D8
                }
                case 0x0:
                {
// switch_1578_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_15F0
                }
                case 0x1:
                {
// switch_1578_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_15F0
                }
                case 0x2:
                {
// switch_1578_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_15F0
                }
                case 0x3:
                {
// switch_1578_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_15F0
                }
                case 0x4:
                {
// switch_1578_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_15F0
                }
                case 0x5:
                {
// switch_1578_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_15F0
                }
            }
        }
        case 0x65:
        {
// switch_1990_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1730
                case default:
                {
// switch_1730_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17A8
// lab_17A8
                    OP_JUMP lab_19D8
                }
                case 0x0:
                {
// switch_1730_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17A8
                }
                case 0x1:
                {
// switch_1730_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17A8
                }
                case 0x2:
                {
// switch_1730_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17A8
                }
                case 0x3:
                {
// switch_1730_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17A8
                }
                case 0x4:
                {
// switch_1730_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17A8
                }
                case 0x5:
                {
// switch_1730_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17A8
                }
            }
        }
        case 0x66:
        {
// switch_1990_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_18E8
                case default:
                {
// switch_18E8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1960
// lab_1960
                    OP_JUMP lab_19D8
                }
                case 0x0:
                {
// switch_18E8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1960
                }
                case 0x1:
                {
// switch_18E8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1960
                }
                case 0x2:
                {
// switch_18E8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1960
                }
                case 0x3:
                {
// switch_18E8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1960
                }
                case 0x4:
                {
// switch_18E8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1960
                }
                case 0x5:
                {
// switch_18E8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1960
                }
            }
        }
    }
}
// fun_1A98
fun_1A98() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1378(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B00
fun_1B00() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AA0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1BA8
    pri = 1;
    return pri;
// lab_1BA8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1BF0
fun_1BF0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B00(var_8)
    arg_2 = pri;
// lab_1C40
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1378(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CA0
fun_1CA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1A98(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CF0
fun_1CF0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1CA0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    OP_JUMP lab_1D68
// lab_1D68
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1DA8
    pri = 0;
    return pri;
// lab_1DA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1D68
    pri = 0;
    return pri;
}
// fun_1DE8
fun_1DE8() {
    var_8 = 0;
    pri = fun_1D50()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1E98
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1E98
    pri = 0;
    return pri;
}
// fun_1EA8
fun_1EA8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1ED8
fun_1ED8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F10
fun_1F10() {
    OP_JUMP lab_1F28
// lab_1F28
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1F70
    OP_JUMP lab_1FA0
    OP_JUMP lab_1F90
// lab_1F70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1FA0
    pri = 0;
    return pri;
// lab_1F90
    OP_JUMP lab_1F28
}
// fun_1FB0
fun_1FB0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1FE0
fun_1FE0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2080
fun_2080() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20D0
fun_20D0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2120
fun_2120() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2170
fun_2170() {
    OP_JUMP lab_2188
// lab_2188
    pri = EvCameraMoveWait_()
    OP_JZER lab_21C0
    pri = 0;
    return pri;
// lab_21C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2188
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    pri = arg_6;
    OP_JNZ lab_2270
    var_8 = 0;
    pri = fun_0FB0()
// lab_2270
    pri = arg_1;
    switch (pri) {
// switch_37D8
        case default:
        {
// switch_37D8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B28
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B28
            pri = 1;
            OP_JUMP lab_3B30
// lab_3B28
            pri = 0;
// lab_3B30
            OP_JZER lab_3C88
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA0(var_24, var_16)
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
            OP_JUMP lab_3CE8
// lab_3C88
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
// lab_3CE8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D48
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3DA8
// lab_3D48
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3DA8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3DA8
            pri = arg_2;
            OP_JZER lab_3DE8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DE8
            var_8 = 0;
            pri = fun_0FF0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37D8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1:
        {
// switch_37D8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x2:
        {
// switch_37D8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x3:
        {
// switch_37D8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x4:
        {
// switch_37D8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x5:
        {
// switch_37D8_case_0x5
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x6:
        {
// switch_37D8_case_0x6
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x7:
        {
// switch_37D8_case_0x7
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x8:
        {
// switch_37D8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x9:
        {
// switch_37D8_case_0x9
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xa:
        {
// switch_37D8_case_0xa
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xb:
        {
// switch_37D8_case_0xb
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xc:
        {
// switch_37D8_case_0xc
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xd:
        {
// switch_37D8_case_0xd
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xe:
        {
// switch_37D8_case_0xe
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0xf:
        {
// switch_37D8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x10:
        {
// switch_37D8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x11:
        {
// switch_37D8_case_0x11
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x12:
        {
// switch_37D8_case_0x12
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x13:
        {
// switch_37D8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x14:
        {
// switch_37D8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x15:
        {
// switch_37D8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x16:
        {
// switch_37D8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x17:
        {
// switch_37D8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x18:
        {
// switch_37D8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x19:
        {
// switch_37D8_case_0x19
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1a:
        {
// switch_37D8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0D10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1b:
        {
// switch_37D8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0D10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1c:
        {
// switch_37D8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A28(var_48, var_40)
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
            pri = fun_0D10(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1d:
        {
// switch_37D8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1e:
        {
// switch_37D8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x1f:
        {
// switch_37D8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x20:
        {
// switch_37D8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x21:
        {
// switch_37D8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x22:
        {
// switch_37D8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x23:
        {
// switch_37D8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x24:
        {
// switch_37D8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x25:
        {
// switch_37D8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x26:
        {
// switch_37D8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x27:
        {
// switch_37D8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x28:
        {
// switch_37D8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
        case 0x29:
        {
// switch_37D8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37D8_case_default
        }
    }
}
// fun_3E18
fun_3E18() {
    pri = arg_5;
    OP_JNZ lab_3E50
    var_8 = 0;
    pri = fun_0FB0()
// lab_3E50
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3EA0
    OP_CONST_S -8, -1
// lab_3EA0
    pri = arg_1;
    switch (pri) {
// switch_5958
        case default:
        {
// switch_5958_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5E00
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AA0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E00
            pri = 1;
            OP_JUMP lab_5E08
// lab_5E00
            pri = 0;
// lab_5E08
            OP_JZER lab_5E58
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_60B0
// lab_5E58
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5EC0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5EC0
            pri = 1;
            OP_JUMP lab_5EC8
// lab_5EC0
            pri = 0;
// lab_5EC8
            OP_JZER lab_6050
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA0(var_24, var_16)
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
            OP_JUMP lab_60B0
// lab_6050
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_60B0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6120
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6120
            var_8 = 0;
            pri = fun_0FF0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5958_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x1:
        {
// switch_5958_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x2:
        {
// switch_5958_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x3:
        {
// switch_5958_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x4:
        {
// switch_5958_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x5:
        {
// switch_5958_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD8(var_40)
            OP_JUMP switch_5958_case_default
        }
        case 0x6:
        {
// switch_5958_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x7:
        {
// switch_5958_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x8:
        {
// switch_5958_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x9:
        {
// switch_5958_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0xa:
        {
// switch_5958_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0xb:
        {
// switch_5958_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0xc:
        {
// switch_5958_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0xd:
        {
// switch_5958_case_0xd
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0xe:
        {
// switch_5958_case_0xe
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0xf:
        {
// switch_5958_case_0xf
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x10:
        {
// switch_5958_case_0x10
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x11:
        {
// switch_5958_case_0x11
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x12:
        {
// switch_5958_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x13:
        {
// switch_5958_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x14:
        {
// switch_5958_case_0x14
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x15:
        {
// switch_5958_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x16:
        {
// switch_5958_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x17:
        {
// switch_5958_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x18:
        {
// switch_5958_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x19:
        {
// switch_5958_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x1a:
        {
// switch_5958_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x1b:
        {
// switch_5958_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x1c:
        {
// switch_5958_case_0x1c
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x1d:
        {
// switch_5958_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x1e:
        {
// switch_5958_case_0x1e
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x1f:
        {
// switch_5958_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x20:
        {
// switch_5958_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x21:
        {
// switch_5958_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x22:
        {
// switch_5958_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x23:
        {
// switch_5958_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x24:
        {
// switch_5958_case_0x24
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x25:
        {
// switch_5958_case_0x25
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x26:
        {
// switch_5958_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x27:
        {
// switch_5958_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x28:
        {
// switch_5958_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x29:
        {
// switch_5958_case_0x29
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x2a:
        {
// switch_5958_case_0x2a
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x2b:
        {
// switch_5958_case_0x2b
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x2c:
        {
// switch_5958_case_0x2c
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x2d:
        {
// switch_5958_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x2e:
        {
// switch_5958_case_0x2e
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x2f:
        {
// switch_5958_case_0x2f
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x30:
        {
// switch_5958_case_0x30
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x31:
        {
// switch_5958_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x32:
        {
// switch_5958_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x33:
        {
// switch_5958_case_0x33
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x34:
        {
// switch_5958_case_0x34
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x35:
        {
// switch_5958_case_0x35
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x36:
        {
// switch_5958_case_0x36
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x37:
        {
// switch_5958_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x38:
        {
// switch_5958_case_0x38
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
            pri = fun_0D10(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5958_case_default
        }
        case 0x39:
        {
// switch_5958_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x3a:
        {
// switch_5958_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x3b:
        {
// switch_5958_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x3c:
        {
// switch_5958_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x3d:
        {
// switch_5958_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
        case 0x3e:
        {
// switch_5958_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            OP_JUMP switch_5958_case_default
        }
    }
}
// fun_6150
fun_6150() {
    pri = arg_4;
    OP_JNZ lab_6188
    var_8 = 0;
    pri = fun_0FB0()
// lab_6188
    pri = arg_1;
    switch (pri) {
// switch_7560
        case default:
        {
// switch_7560_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1070(var_264)
            OP_JZER lab_7B28
            pri = arg_3;
            switch (pri) {
// switch_7AD0
                case default:
                {
// switch_7AD0_case_default
                    OP_JUMP lab_7DE0
// lab_7DE0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7E50
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7E50
                    var_8 = 0;
                    pri = fun_0FF0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7AD0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7AD0_case_default
                }
                case 0x2:
                {
// switch_7AD0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7AD0_case_default
                }
                case 0x3:
                {
// switch_7AD0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7AD0_case_default
                }
            }
// lab_7B28
            pri = arg_1;
            OP_JZER lab_7B78
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7B78
            pri = 0;
            OP_JUMP lab_7B80
// lab_7B78
            pri = 1;
// lab_7B80
            OP_JZER lab_7BE8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AA0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7BE8
            pri = 1;
            OP_JUMP lab_7BF0
// lab_7BE8
            pri = 0;
// lab_7BF0
            OP_JZER lab_7C40
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7DE0
// lab_7C40
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7CA8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7DE0
// lab_7CA8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AA0(var_24, var_16)
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
// switch_7560_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1:
        {
// switch_7560_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2:
        {
// switch_7560_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x3:
        {
// switch_7560_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x4:
        {
// switch_7560_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x5:
        {
// switch_7560_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0CD8(var_40)
            OP_JUMP switch_7560_case_default
        }
        case 0x6:
        {
// switch_7560_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x7:
        {
// switch_7560_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x8:
        {
// switch_7560_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x9:
        {
// switch_7560_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0xa:
        {
// switch_7560_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0xb:
        {
// switch_7560_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0xc:
        {
// switch_7560_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0xd:
        {
// switch_7560_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0xe:
        {
// switch_7560_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0xf:
        {
// switch_7560_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x10:
        {
// switch_7560_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x11:
        {
// switch_7560_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x12:
        {
// switch_7560_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x13:
        {
// switch_7560_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x14:
        {
// switch_7560_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x15:
        {
// switch_7560_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x16:
        {
// switch_7560_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x17:
        {
// switch_7560_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x18:
        {
// switch_7560_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x19:
        {
// switch_7560_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1a:
        {
// switch_7560_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1b:
        {
// switch_7560_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1c:
        {
// switch_7560_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1d:
        {
// switch_7560_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1e:
        {
// switch_7560_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x1f:
        {
// switch_7560_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x20:
        {
// switch_7560_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x21:
        {
// switch_7560_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x22:
        {
// switch_7560_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x23:
        {
// switch_7560_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x24:
        {
// switch_7560_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x25:
        {
// switch_7560_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x26:
        {
// switch_7560_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x27:
        {
// switch_7560_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x28:
        {
// switch_7560_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x29:
        {
// switch_7560_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2a:
        {
// switch_7560_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2b:
        {
// switch_7560_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2c:
        {
// switch_7560_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2d:
        {
// switch_7560_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2e:
        {
// switch_7560_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x2f:
        {
// switch_7560_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x30:
        {
// switch_7560_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x31:
        {
// switch_7560_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x32:
        {
// switch_7560_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x33:
        {
// switch_7560_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x34:
        {
// switch_7560_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x35:
        {
// switch_7560_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x36:
        {
// switch_7560_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x37:
        {
// switch_7560_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x38:
        {
// switch_7560_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x39:
        {
// switch_7560_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x3a:
        {
// switch_7560_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x3b:
        {
// switch_7560_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x3c:
        {
// switch_7560_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x3d:
        {
// switch_7560_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
        case 0x3e:
        {
// switch_7560_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A60(var_24, var_16, var_8)
            OP_JUMP switch_7560_case_default
        }
    }
}
// fun_7E80
fun_7E80() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8090(var_16, var_8)
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
    OP_JZER lab_8078
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8078
    pri = 0;
    return pri;
}
// fun_8090
fun_8090() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A60(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_80D8
fun_80D8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8170
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2238(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8170
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_82C8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8230
    var_24 = 30272;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8230
    pri = 1;
    OP_JUMP lab_8238
// lab_82C8
    pri = 0;
    return pri;
// lab_8230
    pri = 0;
// lab_8238
    OP_JZER lab_82C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2238(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_82D8
fun_82D8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8658(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8340
fun_8340() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_83B0
    OP_CONST_S -8, 1
// lab_83B0
    pri = arg_0;
    OP_JNZ lab_83D0
    OP_ZERO_P_S -8
// lab_83D0
    pri = var_8;
    OP_JZER lab_8458
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8458
    pri = 0;
    return pri;
}
// fun_8470
fun_8470() {
    var_8 = 30376;
    var_16 = 8;
    pri = fun_1ED8(var_8)
    var_24 = 0;
    pri = fun_1F10()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1FE0(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2120(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_8588
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_8588
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_80D8(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_82D8(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1FB0()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2200(var_112)
    pri = 0;
    return pri;
}
// fun_8658
fun_8658() {
    var_8 = 30536;
    var_16 = 8;
    pri = fun_1ED8(var_8)
    var_24 = 0;
    pri = fun_1F10()
    pri = arg_3;
    OP_JNZ lab_8778
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8740
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_87E8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8768
// lab_8778
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8988(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8740
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_88B0(var_16, var_8)
// lab_8768
    OP_JUMP lab_87C0
// lab_87C0
    var_8 = 0;
    pri = fun_1FB0()
    pri = 0;
    return pri;
}
// fun_87E8
fun_87E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8988(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8898
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8898
    pri = 0;
    return pri;
}
// fun_88B0
fun_88B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2030(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1CF0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1DE8(var_72)
    var_88 = 0;
    pri = fun_1EA8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1FE0(var_96)
    pri = 0;
    return pri;
}
// fun_8988
fun_8988() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_89D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8C90(var_8)
// lab_89D0
    pri = arg_4;
    OP_JNZ lab_8A38
    var_8 = 0;
    var_16 = 8;
    pri = fun_1FE0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2030(var_40, var_32, var_24)
// lab_8A38
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8AD8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2080(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1CF0(var_56, var_48, var_40)
    OP_JUMP lab_8BC8
// lab_8AD8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8B90
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8B90
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8B90
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1CF0(var_24, var_16, var_8)
// lab_8BC8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8C08
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8C08
    var_8 = 1;
    var_16 = 8;
    pri = fun_1DE8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8E98(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8340(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8C90
fun_8C90() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8CF0
    var_16 = 30696;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8CF0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8E30
        case default:
        {
// switch_8E30_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8E20
            var_16 = 31240;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8E20
            OP_JUMP lab_8E68
// lab_8E68
            var_8 = 31456;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8E30_case_0x1
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8E68
        }
        case 0x2:
        {
// switch_8E30_case_0x2
            var_8 = 31040;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8E68
        }
    }
}
// fun_8E98
fun_8E98() {
    pri = arg_2;
    OP_JNZ lab_8F80
    var_8 = 0;
    var_16 = 8;
    pri = fun_1FE0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2030(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_20D0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8F80
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1CF0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1DE8(var_40)
    var_56 = 0;
    pri = fun_1EA8()
    pri = 0;
    return pri;
}
// fun_8FF8
fun_8FF8() {
    pri = 31640;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9080
// lab_9080
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9200
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_91F0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9140
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9140
    pri = 0;
    OP_JUMP lab_9148
// lab_9200
    pri = 0;
    return pri;
// lab_91F0
    OP_JUMP lab_9078
// lab_9078
    OP_INC_P_S -936
// lab_9140
    pri = 1;
// lab_9148
    OP_JZER lab_91C0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_91B8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_91C0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_91B8
}
// fun_9220
fun_9220() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9268
    pri = arg_0;
    return pri;
// lab_9268
    pri = arg_1;
    return pri;
}
// fun_9278
fun_9278() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9310
    var_8 = 1;
    var_16 = 0;
    var_24 = 32560;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1318()
// lab_9310
    pri = arg_4;
    OP_JZER lab_9348
    var_8 = 1;
    var_16 = 8;
    pri = fun_1340(var_8)
// lab_9348
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_93A0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_93A0
    pri = 0;
    OP_JUMP lab_93A8
// lab_93A0
    pri = 1;
// lab_93A8
    OP_JZER lab_9470
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9470
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9448
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1258(var_32, var_24)
    OP_JUMP lab_9470
// lab_9470
    pri = arg_2;
    OP_JZER lab_9548
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9518
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1030(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07A8(var_40)
    OP_JUMP lab_9548
// lab_9548
    pri = arg_3;
    OP_JZER lab_9580
    var_8 = 1;
    var_16 = 8;
    pri = fun_12E0(var_8)
// lab_9580
    pri = 0;
    return pri;
// lab_9518
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1030(var_16, var_8)
// lab_9448
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1258(var_16, var_8)
}
// fun_9590
fun_9590() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8FF8(var_24)
    pri = 0;
    return pri;
}
// fun_95F8
fun_95F8() {
    pri = g_mode;
    switch (pri) {
// switch_96B8
        case default:
        {
// switch_96B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9700
// lab_9700
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_96B8_case_0x0
            var_8 = 0;
            pri = fun_9710()
            OP_JUMP lab_9700
        }
        case 0x3d973927793dca12:
        {
// switch_96B8_case_0x3d973927793dca12
            var_8 = 0;
            pri = fun_A648()
            OP_JUMP lab_9700
        }
        case 0x5b63232b038e9afe:
        {
// switch_96B8_case_0x5b63232b038e9afe
            var_8 = 0;
            pri = fun_A558()
            OP_JUMP lab_9700
        }
    }
}
// fun_9710
fun_9710() {
    pri = 0;
    return pri;
}
// fun_9728
fun_9728() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9278(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9780
fun_9780() {
    OP_PUSH2_C 8855976090230375108, -1388330654265746967
    var_16 = 16;
    pri = fun_9220(var_8, var_0)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0540(var_24)
    pri = 0;
    return pri;
}
// fun_9800
fun_9800() {
    var_8 = 0;
    pri = fun_0570()
    pri = 0;
    return pri;
}
// fun_9830
fun_9830() {
    OP_PUSH2_C 8855976090230375108, -1388330654265746967
    var_16 = 16;
    pri = fun_9220(var_8, var_0)
    var_8 = pri;
    pri = EvCameraStart()
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C 4639949624526346650, 4659393827956588544, 4657522459166113792, 8802641224559852288
    var_40 = 48;
    pri = fun_0718(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = 0;
    OP_PUSH2_C 4658186564189290496, 4657658798607958016
    var_72 = var_8;
    var_80 = 48;
    pri = fun_0718(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 0;
    var_112 = 4630094481904264806;
    var_120 = 0;
    OP_PUSH5_C 4659176498488242340, 4636753476165797151, 4657829486793053962, 4659217422311028163, 4636728847105334968
    var_128 = 4657845583643284603;
    var_136 = 1;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_2170()
    var_152 = 1;
    var_160 = 0;
    var_168 = 4641240890982006784;
    var_176 = 0;
    var_184 = 0;
    OP_PUSH3_C 4659057377398489088, 4657658798607958016, 4607182418800017408
    var_192 = var_8;
    var_200 = 72;
    pri = fun_07E0(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 32608;
    var_216 = 8;
    var_224 = 16;
    pri = fun_02A8(var_216, var_208)
    var_232 = 0;
    pri = fun_0378()
    var_240 = 0;
    var_248 = 4630094481904264806;
    var_256 = 3;
    OP_PUSH5_C 4659272002068230963, 4636753476165797151, 4657586626664710799, 4659778041299798589, 4636449483190949642
    var_264 = 4657785638269338255;
    var_272 = 30;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    pri = fun_2170()
    var_288 = var_8;
    var_296 = 8;
    pri = fun_0900(var_288)
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 8802641224559852288;
    var_344 = var_8;
    var_352 = 48;
    pri = fun_08A8(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = var_8;
    var_368 = 8;
    pri = fun_0900(var_360)
    var_376 = 15;
    var_384 = 8;
    pri = fun_0060(var_376)
    var_392 = 1;
    var_400 = 1;
    var_408 = -1;
    var_416 = -1;
    var_424 = 0;
    var_432 = 9;
    var_440 = var_8;
    var_448 = 56;
    pri = fun_3E18(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 0;
    var_464 = 3;
    var_472 = 0;
    var_480 = 100;
    var_488 = -1;
    var_496 = -8745274511121815497;
    var_504 = var_8;
    var_512 = 56;
    pri = fun_1BF0(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_1DE8(var_520)
    var_536 = 0;
    pri = fun_1EA8()
    var_544 = 1;
    var_552 = 3;
    var_560 = 0;
    var_568 = 9;
    var_576 = var_8;
    var_584 = 40;
    pri = fun_6150(var_576, var_568, var_560, var_552, var_544)
    var_592 = var_8;
    var_600 = 8;
    pri = fun_0AD8(var_592)
    var_608 = 0;
    var_616 = 1;
    var_624 = var_8;
    var_632 = 24;
    pri = fun_7E80(var_624, var_616, var_608)
    var_640 = 1;
    var_648 = 8;
    pri = fun_0060(var_640)
    var_656 = var_8;
    var_664 = 8;
    pri = fun_0AD8(var_656)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9E60
    var_672 = 0;
    var_680 = 3;
    var_688 = 0;
    var_696 = 100;
    var_704 = -1;
    var_712 = -8745273411610187286;
    var_720 = var_8;
    var_728 = 56;
    pri = fun_1BF0(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_1DE8(var_736)
    var_752 = 0;
    pri = fun_1EA8()
    OP_JUMP lab_9EF0
// lab_9E60
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -8745272312098559075;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1BF0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1DE8(var_72)
    var_88 = 0;
    pri = fun_1EA8()
// lab_9EF0
    OP_PUSH2_C -2825168353378055098, 5527469329213382437
    var_16 = 16;
    pri = fun_9220(var_8, var_0)
    var_16 = pri;
    var_32 = 18;
    var_40 = 16;
    var_48 = 16;
    pri = fun_9220(var_40, var_32)
    var_24 = pri;
    var_56 = 0;
    var_64 = var_24;
    var_72 = var_16;
    var_80 = var_8;
    var_88 = 32;
    pri = fun_8470(var_80, var_72, var_64, var_56)
    var_96 = 0;
    var_104 = 0;
    var_112 = var_8;
    var_120 = 24;
    pri = fun_7E80(var_112, var_104, var_96)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = var_8;
    var_152 = 8;
    pri = fun_0AD8(var_144)
    var_160 = 1;
    var_168 = 1;
    var_176 = -1;
    var_184 = -1;
    var_192 = 0;
    var_200 = 8;
    var_208 = var_8;
    var_216 = 56;
    pri = fun_3E18(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 0;
    var_232 = 3;
    var_240 = 0;
    var_248 = 100;
    var_256 = -1;
    var_264 = -8745280008679956552;
    var_272 = var_8;
    var_280 = 56;
    pri = fun_1BF0(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1DE8(var_288)
    var_304 = 0;
    pri = fun_1EA8()
    var_312 = 1;
    var_320 = 3;
    var_328 = 0;
    var_336 = 8;
    var_344 = var_8;
    var_352 = 40;
    pri = fun_6150(var_344, var_336, var_328, var_320, var_312)
    var_360 = var_8;
    var_368 = 8;
    pri = fun_0AD8(var_360)
    var_376 = 1;
    var_384 = 0;
    var_392 = 4641240890982006784;
    var_400 = 0;
    var_408 = 0;
    OP_PUSH3_C 4659607133212377088, 4657766550747480064, 4607182418800017408
    var_416 = var_8;
    var_424 = 72;
    pri = fun_07E0(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 30;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 75;
    pri = float(var_472)
    var_480 = pri;
    var_488 = 8802641224559852288;
    var_496 = 40;
    pri = fun_0858(var_488, var_480, var_472, var_464, var_456)
    var_504 = 8802641224559852288;
    var_512 = 8;
    pri = fun_0900(var_504)
    var_520 = 5;
    var_528 = 8;
    pri = fun_0060(var_520)
    var_536 = 1;
    var_544 = 0;
    var_552 = 32560;
    var_560 = 8;
    var_568 = 32;
    pri = fun_0308(var_560, var_552, var_544, var_536)
    var_576 = 0;
    pri = fun_0378()
    var_584 = var_8;
    var_592 = 8;
    pri = fun_0900(var_584)
    var_600 = 0;
    var_608 = var_8;
    var_616 = 16;
    pri = fun_0770(var_608, var_600)
    var_624 = 3;
    var_632 = 1;
    pri = EvCameraEnd(var_632, var_624)
    var_640 = 30;
    var_648 = 8;
    pri = fun_0060(var_640)
    var_656 = 1;
    var_664 = 1;
    var_672 = 180;
    pri = float(var_672)
    var_680 = pri;
    OP_PUSH3_C 4659247768831954780, 4657525185954950676, 8802641224559852288
    var_688 = 48;
    pri = fun_0718(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 32608;
    var_704 = 8;
    var_712 = 16;
    pri = fun_02A8(var_704, var_696)
    var_720 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_A438
fun_A438() {
    pri = 0;
    return pri;
}
// fun_A450
fun_A450() {
    OP_PUSH2_C 8855976090230375108, -1388330654265746967
    var_16 = 16;
    pri = fun_9220(var_8, var_0)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_06C0(var_24)
    var_40 = 1240;
    var_48 = 8;
    pri = fun_9590(var_40)
    var_56 = 7506713967005848083;
    pri = FlagSet(var_56)
    var_64 = 5501743159805903958;
    pri = FlagReset(var_64)
    pri = 0;
    return pri;
}
// fun_A540
fun_A540() {
    pri = 0;
    return pri;
}
// fun_A558
fun_A558() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9728()
    var_16 = 0;
    pri = fun_9780()
    var_24 = 0;
    pri = fun_9800()
    var_32 = 0;
    pri = fun_9830()
    var_40 = 0;
    pri = fun_A438()
    var_48 = 0;
    pri = fun_A450()
    var_56 = 0;
    pri = fun_A540()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A648
fun_A648() {
    var_8 = 0;
    pri = fun_9780()
    var_16 = 0;
    pri = fun_A450()
    var_24 = 18;
    var_32 = 16;
    var_40 = 16;
    pri = fun_9220(var_32, var_24)
    var_48 = pri;
    pri = SetNpcLicenseCardFlag(var_48)
    pri = 0;
    return pri;
}
