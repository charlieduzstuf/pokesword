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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0600
fun_0600() {
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
// fun_0678
fun_0678() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F60(var_8)
    OP_JZER lab_0740
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F90(var_24)
    OP_JNZ lab_0740
    pri = 0;
    return pri;
// lab_0740
    OP_JUMP lab_0750
// lab_0750
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_07B0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_07B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0750
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0828
fun_0828() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0868
fun_0868() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_08E8
    pri = 0;
    return pri;
// lab_08E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0928
// lab_0928
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F60(var_8)
    OP_JNZ lab_09B0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_09A0
    pri = 0;
    return pri;
// lab_09B0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_09F8
    pri = 0;
    return pri;
// lab_09F8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0AA0(var_8)
    pri = 0;
    return pri;
// lab_0A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0928
    pri = 0;
    return pri;
// lab_09A0
    OP_JUMP lab_09F8
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B28
    pri = 0;
    return pri;
// lab_0B28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F60(var_8)
    OP_JZER lab_0C58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B80
    OP_ZERO_P_S 64
// lab_0C58
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C90
    OP_CONST_S 64, 1
// lab_0C90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CC8
    OP_CONST_S 72, 1
// lab_0CC8
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
// lab_0B80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BA8
    OP_ZERO_P_S 72
// lab_0BA8
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
    OP_JUMP lab_0D68
// lab_0D68
    pri = 0;
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DB8
fun_0DB8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DF8
fun_0DF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E38
fun_0E38() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E78(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0EB8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0F60
fun_0F60() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0FC0
fun_0FC0() {
    OP_JUMP lab_0FD8
// lab_0FD8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1068
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1058
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A0(var_8)
    pri = 0;
    return pri;
// lab_1068
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_10E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A0(var_8)
    pri = 0;
    return pri;
// lab_10F8
    pri = 0;
    return pri;
// lab_10E8
    OP_JUMP lab_1108
// lab_1108
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0FD8
    pri = 0;
    return pri;
// lab_1058
    OP_JUMP lab_1108
}
// fun_1148
fun_1148() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0FC0(var_40)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
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
// switch_1880
        case default:
        {
// switch_1880_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_18C8
// lab_18C8
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
            OP_JNZ lab_1970
            var_88 = 0;
            pri = fun_1C40()
// lab_1970
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1880_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1468
                case default:
                {
// switch_1468_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14E0
// lab_14E0
                    OP_JUMP lab_18C8
                }
                case 0x0:
                {
// switch_1468_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_14E0
                }
                case 0x1:
                {
// switch_1468_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_14E0
                }
                case 0x2:
                {
// switch_1468_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_14E0
                }
                case 0x3:
                {
// switch_1468_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_14E0
                }
                case 0x4:
                {
// switch_1468_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_14E0
                }
                case 0x5:
                {
// switch_1468_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_14E0
                }
            }
        }
        case 0x65:
        {
// switch_1880_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1620
                case default:
                {
// switch_1620_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1698
// lab_1698
                    OP_JUMP lab_18C8
                }
                case 0x0:
                {
// switch_1620_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1698
                }
                case 0x1:
                {
// switch_1620_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1698
                }
                case 0x2:
                {
// switch_1620_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1698
                }
                case 0x3:
                {
// switch_1620_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1698
                }
                case 0x4:
                {
// switch_1620_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1698
                }
                case 0x5:
                {
// switch_1620_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1698
                }
            }
        }
        case 0x66:
        {
// switch_1880_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_17D8
                case default:
                {
// switch_17D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1850
// lab_1850
                    OP_JUMP lab_18C8
                }
                case 0x0:
                {
// switch_17D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1850
                }
                case 0x1:
                {
// switch_17D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1850
                }
                case 0x2:
                {
// switch_17D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1850
                }
                case 0x3:
                {
// switch_17D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1850
                }
                case 0x4:
                {
// switch_17D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1850
                }
                case 0x5:
                {
// switch_17D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1850
                }
            }
        }
    }
}
// fun_1988
fun_1988() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1268(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0868(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A98
    pri = 1;
    return pri;
// lab_1A98
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1AE0
fun_1AE0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1B30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_19F0(var_8)
    arg_2 = pri;
// lab_1B30
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1268(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B90
fun_1B90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1988(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BE0
fun_1BE0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1B90(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C40
fun_1C40() {
    OP_JUMP lab_1C58
// lab_1C58
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C98
    pri = 0;
    return pri;
// lab_1C98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1C58
    pri = 0;
    return pri;
}
// fun_1CD8
fun_1CD8() {
    var_8 = 0;
    pri = fun_1C40()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D88
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_1D88
    pri = 0;
    return pri;
}
// fun_1D98
fun_1D98() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1DF8
// lab_1DF8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E38
    OP_JUMP lab_1E68
// lab_1E38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DF8
// lab_1E68
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EB0
fun_1EB0() {
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
// fun_1F20
fun_1F20() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1F58
fun_1F58() {
    OP_JUMP lab_1F70
// lab_1F70
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1FB8
    OP_JUMP lab_1FE8
    OP_JUMP lab_1FD8
// lab_1FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1FE8
    pri = 0;
    return pri;
// lab_1FD8
    OP_JUMP lab_1F70
}
// fun_1FF8
fun_1FF8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2028
fun_2028() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2078
fun_2078() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20C8
fun_20C8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2118
fun_2118() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    OP_JUMP lab_21D0
// lab_21D0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2208
    pri = 0;
    return pri;
// lab_2208
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21D0
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2280
fun_2280() {
    pri = arg_6;
    OP_JNZ lab_22B8
    var_8 = 0;
    pri = fun_0D78()
// lab_22B8
    pri = arg_1;
    switch (pri) {
// switch_3820
        case default:
        {
// switch_3820_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3B70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3B70
            pri = 1;
            OP_JUMP lab_3B78
// lab_3B70
            pri = 0;
// lab_3B78
            OP_JZER lab_3CD0
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0868(var_24, var_16)
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
            var_64 = 8472;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3D30
// lab_3CD0
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_3D30
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D90
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3DF0
// lab_3D90
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3DF0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3DF0
            pri = arg_2;
            OP_JZER lab_3E30
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3E30
            var_8 = 0;
            pri = fun_0DB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3820_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x1:
        {
// switch_3820_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x2:
        {
// switch_3820_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x3:
        {
// switch_3820_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x4:
        {
// switch_3820_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x5:
        {
// switch_3820_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0x6:
        {
// switch_3820_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0x7:
        {
// switch_3820_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0x8:
        {
// switch_3820_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x9:
        {
// switch_3820_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0xa:
        {
// switch_3820_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0xb:
        {
// switch_3820_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0xc:
        {
// switch_3820_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0xd:
        {
// switch_3820_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0xe:
        {
// switch_3820_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0xf:
        {
// switch_3820_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x10:
        {
// switch_3820_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x11:
        {
// switch_3820_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0x12:
        {
// switch_3820_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0x13:
        {
// switch_3820_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x14:
        {
// switch_3820_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x15:
        {
// switch_3820_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x16:
        {
// switch_3820_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x17:
        {
// switch_3820_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x18:
        {
// switch_3820_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x19:
        {
// switch_3820_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3820_case_default
        }
        case 0x1a:
        {
// switch_3820_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6144;
            var_88 = 6136;
            var_96 = 6128;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0AD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3820_case_default
        }
        case 0x1b:
        {
// switch_3820_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6368;
            var_88 = 6360;
            var_96 = 6352;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0AD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3820_case_default
        }
        case 0x1c:
        {
// switch_3820_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07F0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6592;
            var_88 = 6584;
            var_96 = 6576;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0AD8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3820_case_default
        }
        case 0x1d:
        {
// switch_3820_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x1e:
        {
// switch_3820_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x1f:
        {
// switch_3820_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x20:
        {
// switch_3820_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x21:
        {
// switch_3820_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x22:
        {
// switch_3820_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x23:
        {
// switch_3820_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x24:
        {
// switch_3820_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x25:
        {
// switch_3820_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x26:
        {
// switch_3820_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x27:
        {
// switch_3820_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x28:
        {
// switch_3820_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
        case 0x29:
        {
// switch_3820_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3820_case_default
        }
    }
}
// fun_3E60
fun_3E60() {
    pri = arg_5;
    OP_JNZ lab_3E98
    var_8 = 0;
    pri = fun_0D78()
// lab_3E98
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3EE8
    OP_CONST_S -8, -1
// lab_3EE8
    pri = arg_1;
    switch (pri) {
// switch_59A0
        case default:
        {
// switch_59A0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5E48
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0868(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5E48
            pri = 1;
            OP_JUMP lab_5E50
// lab_5E48
            pri = 0;
// lab_5E50
            OP_JZER lab_5EA0
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_60F8
// lab_5EA0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5F08
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5F08
            pri = 1;
            OP_JUMP lab_5F10
// lab_5F08
            pri = 0;
// lab_5F10
            OP_JZER lab_6098
            var_16 = 28504;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0868(var_24, var_16)
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
            var_176 = 28608;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28624;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_60F8
// lab_6098
            var_8 = 64;
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_60F8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6168
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6168
            var_8 = 0;
            pri = fun_0DB8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_59A0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1:
        {
// switch_59A0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2:
        {
// switch_59A0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x3:
        {
// switch_59A0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x4:
        {
// switch_59A0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x5:
        {
// switch_59A0_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AA0(var_40)
            OP_JUMP switch_59A0_case_default
        }
        case 0x6:
        {
// switch_59A0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x7:
        {
// switch_59A0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x8:
        {
// switch_59A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x9:
        {
// switch_59A0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0xa:
        {
// switch_59A0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0xb:
        {
// switch_59A0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0xc:
        {
// switch_59A0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0xd:
        {
// switch_59A0_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19136;
            var_72 = 18960;
            var_80 = 18776;
            var_88 = 18584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0xe:
        {
// switch_59A0_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19792;
            var_72 = 19584;
            var_80 = 19368;
            var_88 = 19144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0xf:
        {
// switch_59A0_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20184;
            var_72 = 20064;
            var_80 = 19936;
            var_88 = 19800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x10:
        {
// switch_59A0_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20528;
            var_72 = 20424;
            var_80 = 20312;
            var_88 = 20192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x11:
        {
// switch_59A0_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20872;
            var_72 = 20768;
            var_80 = 20656;
            var_88 = 20536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x12:
        {
// switch_59A0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x13:
        {
// switch_59A0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x14:
        {
// switch_59A0_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21432;
            var_72 = 21256;
            var_80 = 21072;
            var_88 = 20880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x15:
        {
// switch_59A0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x16:
        {
// switch_59A0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x17:
        {
// switch_59A0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x18:
        {
// switch_59A0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x19:
        {
// switch_59A0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1a:
        {
// switch_59A0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1b:
        {
// switch_59A0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1c:
        {
// switch_59A0_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21824;
            var_72 = 21704;
            var_80 = 21576;
            var_88 = 21440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1d:
        {
// switch_59A0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1e:
        {
// switch_59A0_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22288;
            var_72 = 22144;
            var_80 = 21992;
            var_88 = 21832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x1f:
        {
// switch_59A0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x20:
        {
// switch_59A0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x21:
        {
// switch_59A0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x22:
        {
// switch_59A0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x23:
        {
// switch_59A0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x24:
        {
// switch_59A0_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22656;
            var_72 = 22544;
            var_80 = 22424;
            var_88 = 22296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x25:
        {
// switch_59A0_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23024;
            var_72 = 22912;
            var_80 = 22792;
            var_88 = 22664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x26:
        {
// switch_59A0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x27:
        {
// switch_59A0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x28:
        {
// switch_59A0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x29:
        {
// switch_59A0_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23464;
            var_72 = 23328;
            var_80 = 23184;
            var_88 = 23032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2a:
        {
// switch_59A0_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23856;
            var_72 = 23736;
            var_80 = 23608;
            var_88 = 23472;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2b:
        {
// switch_59A0_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24272;
            var_72 = 24144;
            var_80 = 24008;
            var_88 = 23864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2c:
        {
// switch_59A0_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24712;
            var_72 = 24576;
            var_80 = 24432;
            var_88 = 24280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2d:
        {
// switch_59A0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2e:
        {
// switch_59A0_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25032;
            var_72 = 24936;
            var_80 = 24832;
            var_88 = 24720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x2f:
        {
// switch_59A0_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25424;
            var_72 = 25304;
            var_80 = 25176;
            var_88 = 25040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x30:
        {
// switch_59A0_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25816;
            var_72 = 25696;
            var_80 = 25568;
            var_88 = 25432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x31:
        {
// switch_59A0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x32:
        {
// switch_59A0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x33:
        {
// switch_59A0_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26208;
            var_72 = 26088;
            var_80 = 25960;
            var_88 = 25824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x34:
        {
// switch_59A0_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26464;
            var_80 = 26344;
            var_88 = 26216;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x35:
        {
// switch_59A0_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27064;
            var_72 = 26912;
            var_80 = 26752;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x36:
        {
// switch_59A0_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27320;
            var_80 = 27200;
            var_88 = 27072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x37:
        {
// switch_59A0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x38:
        {
// switch_59A0_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27800;
            var_72 = 27688;
            var_80 = 27568;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0AD8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_59A0_case_default
        }
        case 0x39:
        {
// switch_59A0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x3a:
        {
// switch_59A0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x3b:
        {
// switch_59A0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x3c:
        {
// switch_59A0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x3d:
        {
// switch_59A0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
        case 0x3e:
        {
// switch_59A0_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            OP_JUMP switch_59A0_case_default
        }
    }
}
// fun_6198
fun_6198() {
    pri = arg_4;
    OP_JNZ lab_61D0
    var_8 = 0;
    pri = fun_0D78()
// lab_61D0
    pri = arg_1;
    switch (pri) {
// switch_75A8
        case default:
        {
// switch_75A8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29200;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0F60(var_264)
            OP_JZER lab_7B70
            pri = arg_3;
            switch (pri) {
// switch_7B18
                case default:
                {
// switch_7B18_case_default
                    OP_JUMP lab_7E28
// lab_7E28
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7E98
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7E98
                    var_8 = 0;
                    pri = fun_0DB8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7B18_case_0x1
                    var_8 = 32;
                    var_16 = 29352;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7B18_case_default
                }
                case 0x2:
                {
// switch_7B18_case_0x2
                    var_8 = 32;
                    var_16 = 29456;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7B18_case_default
                }
                case 0x3:
                {
// switch_7B18_case_0x3
                    var_8 = 32;
                    var_16 = 29256;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7B18_case_default
                }
            }
// lab_7B70
            pri = arg_1;
            OP_JZER lab_7BC0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7BC0
            pri = 0;
            OP_JUMP lab_7BC8
// lab_7BC0
            pri = 1;
// lab_7BC8
            OP_JZER lab_7C30
            var_8 = 29552;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0868(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7C30
            pri = 1;
            OP_JUMP lab_7C38
// lab_7C30
            pri = 0;
// lab_7C38
            OP_JZER lab_7C88
            var_8 = 32;
            var_16 = 29648;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7E28
// lab_7C88
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7CF0
            var_8 = 32;
            var_16 = 29808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7E28
// lab_7CF0
            var_16 = 29928;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0868(var_24, var_16)
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
            var_176 = 30032;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30048;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_75A8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1:
        {
// switch_75A8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2:
        {
// switch_75A8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x3:
        {
// switch_75A8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x4:
        {
// switch_75A8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x5:
        {
// switch_75A8_case_0x5
            var_8 = 1;
            var_16 = 28680;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0AA0(var_40)
            OP_JUMP switch_75A8_case_default
        }
        case 0x6:
        {
// switch_75A8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x7:
        {
// switch_75A8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x8:
        {
// switch_75A8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x9:
        {
// switch_75A8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0xa:
        {
// switch_75A8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0xb:
        {
// switch_75A8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0xc:
        {
// switch_75A8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0xd:
        {
// switch_75A8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0xe:
        {
// switch_75A8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0xf:
        {
// switch_75A8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x10:
        {
// switch_75A8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x11:
        {
// switch_75A8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x12:
        {
// switch_75A8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x13:
        {
// switch_75A8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x14:
        {
// switch_75A8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x15:
        {
// switch_75A8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x16:
        {
// switch_75A8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x17:
        {
// switch_75A8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x18:
        {
// switch_75A8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x19:
        {
// switch_75A8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1a:
        {
// switch_75A8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1b:
        {
// switch_75A8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1c:
        {
// switch_75A8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1d:
        {
// switch_75A8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1e:
        {
// switch_75A8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x1f:
        {
// switch_75A8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x20:
        {
// switch_75A8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x21:
        {
// switch_75A8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x22:
        {
// switch_75A8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x23:
        {
// switch_75A8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x24:
        {
// switch_75A8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x25:
        {
// switch_75A8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x26:
        {
// switch_75A8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x27:
        {
// switch_75A8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x28:
        {
// switch_75A8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x29:
        {
// switch_75A8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2a:
        {
// switch_75A8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2b:
        {
// switch_75A8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2c:
        {
// switch_75A8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2d:
        {
// switch_75A8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2e:
        {
// switch_75A8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x2f:
        {
// switch_75A8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x30:
        {
// switch_75A8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x31:
        {
// switch_75A8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x32:
        {
// switch_75A8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x33:
        {
// switch_75A8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x34:
        {
// switch_75A8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x35:
        {
// switch_75A8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x36:
        {
// switch_75A8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x37:
        {
// switch_75A8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x38:
        {
// switch_75A8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x39:
        {
// switch_75A8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x3a:
        {
// switch_75A8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x3b:
        {
// switch_75A8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x3c:
        {
// switch_75A8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28776;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x3d:
        {
// switch_75A8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28952;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
        case 0x3e:
        {
// switch_75A8_case_0x3e
            var_8 = 3;
            var_16 = 29096;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0828(var_24, var_16, var_8)
            OP_JUMP switch_75A8_case_default
        }
    }
}
// fun_7EC8
fun_7EC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_80D8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30096;
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
    var_424 = 30152;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30168;
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
    OP_JZER lab_80C0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_80C0
    pri = 0;
    return pri;
}
// fun_80D8
fun_80D8() {
    var_8 = arg_1;
    var_16 = 30216;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0828(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8120
fun_8120() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_81B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08A0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2280(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_81B8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8310
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8278
    var_24 = 30320;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8278
    pri = 1;
    OP_JUMP lab_8280
// lab_8310
    pri = 0;
    return pri;
// lab_8278
    pri = 0;
// lab_8280
    OP_JZER lab_8310
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08A0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2280(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8320
fun_8320() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_86A0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8388
fun_8388() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_83F8
    OP_CONST_S -8, 1
// lab_83F8
    pri = arg_0;
    OP_JNZ lab_8418
    OP_ZERO_P_S -8
// lab_8418
    pri = var_8;
    OP_JZER lab_84A0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_84A0
    pri = 0;
    return pri;
}
// fun_84B8
fun_84B8() {
    var_8 = 30424;
    var_16 = 8;
    pri = fun_1F20(var_8)
    var_24 = 0;
    pri = fun_1F58()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2028(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2168(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_85D0
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_85D0
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8120(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_8320(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1FF8()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2248(var_112)
    pri = 0;
    return pri;
}
// fun_86A0
fun_86A0() {
    var_8 = 30584;
    var_16 = 8;
    pri = fun_1F20(var_8)
    var_24 = 0;
    pri = fun_1F58()
    pri = arg_3;
    OP_JNZ lab_87C0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8788
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8830(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_87B0
// lab_87C0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_89D0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8788
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_88F8(var_16, var_8)
// lab_87B0
    OP_JUMP lab_8808
// lab_8808
    var_8 = 0;
    pri = fun_1FF8()
    pri = 0;
    return pri;
}
// fun_8830
fun_8830() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_89D0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_88E0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_88E0
    pri = 0;
    return pri;
}
// fun_88F8
fun_88F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2078(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1BE0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1CD8(var_72)
    var_88 = 0;
    pri = fun_1D98()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2028(var_96)
    pri = 0;
    return pri;
}
// fun_89D0
fun_89D0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8A18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8CD8(var_8)
// lab_8A18
    pri = arg_4;
    OP_JNZ lab_8A80
    var_8 = 0;
    var_16 = 8;
    pri = fun_2028(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2078(var_40, var_32, var_24)
// lab_8A80
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8B20
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_20C8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1BE0(var_56, var_48, var_40)
    OP_JUMP lab_8C10
// lab_8B20
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8BD8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8BD8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8BD8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1BE0(var_24, var_16, var_8)
// lab_8C10
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8C50
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_8C50
    var_8 = 1;
    var_16 = 8;
    pri = fun_1CD8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8EE0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8388(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8CD8
fun_8CD8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8D38
    var_16 = 30744;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8D38
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8E78
        case default:
        {
// switch_8E78_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8E68
            var_16 = 31288;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8E68
            OP_JUMP lab_8EB0
// lab_8EB0
            var_8 = 31504;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8E78_case_0x1
            var_8 = 30960;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8EB0
        }
        case 0x2:
        {
// switch_8E78_case_0x2
            var_8 = 31088;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8EB0
        }
    }
}
// fun_8EE0
fun_8EE0() {
    pri = arg_2;
    OP_JNZ lab_8FC8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2028(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2078(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2118(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8FC8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1BE0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1CD8(var_40)
    var_56 = 0;
    pri = fun_1D98()
    pri = 0;
    return pri;
}
// fun_9040
fun_9040() {
    pri = 31688;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_90C8
// lab_90C8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9248
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9238
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9188
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9188
    pri = 0;
    OP_JUMP lab_9190
// lab_9248
    pri = 0;
    return pri;
// lab_9238
    OP_JUMP lab_90C0
// lab_90C0
    OP_INC_P_S -936
// lab_9188
    pri = 1;
// lab_9190
    OP_JZER lab_9208
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9200
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9208
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9200
}
// fun_9268
fun_9268() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9300
    var_8 = 1;
    var_16 = 0;
    var_24 = 32608;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1208()
// lab_9300
    pri = arg_4;
    OP_JZER lab_9338
    var_8 = 1;
    var_16 = 8;
    pri = fun_1230(var_8)
// lab_9338
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9390
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9390
    pri = 0;
    OP_JUMP lab_9398
// lab_9390
    pri = 1;
// lab_9398
    OP_JZER lab_9460
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9460
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9438
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1148(var_32, var_24)
    OP_JUMP lab_9460
// lab_9460
    pri = arg_2;
    OP_JZER lab_9538
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9508
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DF8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05C8(var_40)
    OP_JUMP lab_9538
// lab_9538
    pri = arg_3;
    OP_JZER lab_9570
    var_8 = 1;
    var_16 = 8;
    pri = fun_11D0(var_8)
// lab_9570
    pri = 0;
    return pri;
// lab_9508
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DF8(var_16, var_8)
// lab_9438
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1148(var_16, var_8)
}
// fun_9580
fun_9580() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9040(var_24)
    pri = 0;
    return pri;
}
// fun_95E8
fun_95E8() {
    pri = g_mode;
    switch (pri) {
// switch_96A8
        case default:
        {
// switch_96A8_case_default
            pri = CommandNOP()
            OP_JUMP lab_96F0
// lab_96F0
            pri = 0;
            return pri;
        }
        case 0xa6281e22104aa1bf:
        {
// switch_96A8_case_0xa6281e22104aa1bf
            var_8 = 0;
            pri = fun_A5C8()
            OP_JUMP lab_96F0
        }
        case 0x0:
        {
// switch_96A8_case_0x0
            var_8 = 0;
            pri = fun_9700()
            OP_JUMP lab_96F0
        }
        case 0x4405041e5f89b16b:
        {
// switch_96A8_case_0x4405041e5f89b16b
            var_8 = 0;
            pri = fun_A6D0()
            OP_JUMP lab_96F0
        }
    }
}
// fun_9700
fun_9700() {
    pri = 0;
    return pri;
}
// fun_9718
fun_9718() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 1;
    OP_PUSH5_C 4664531603900627681, -4578445406974603428, 4669699292058500465, 4665841979868378563, -4581883799736984535
    var_32 = 4669290306718316626;
    var_40 = 45;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 20;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 1;
    var_72 = 0;
    var_80 = 32608;
    var_88 = 8;
    var_96 = 32;
    pri = fun_0308(var_88, var_80, var_72, var_64)
    var_104 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_9838
fun_9838() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9268(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9890
fun_9890() {
    pri = 0;
    return pri;
}
// fun_98A8
fun_98A8() {
    pri = 0;
    return pri;
}
// fun_98C0
fun_98C0() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4636033603912859648, 4665485782081444250, 4669341384530984960, 8802641224559852288
    var_24 = 48;
    pri = fun_0570(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 2;
    var_56 = 2;
    var_64 = -5471796947768100173;
    var_72 = 24;
    pri = fun_0EF8(var_64, var_56, var_48)
    var_80 = 1;
    var_88 = 0;
    var_96 = 4641240890982006784;
    var_104 = 0;
    var_112 = 0;
    OP_PUSH4_C 4665485782081444250, 4669429345461207040, 4607182418800017408, 8802641224559852288
    var_120 = 72;
    pri = fun_0600(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    var_136 = 4629700416936869888;
    var_144 = 0;
    OP_PUSH5_C 4665294697955653059, -4580364186706467881, 4669604937468162867, 4665609125295848161, -4579981732581862277
    var_152 = 4669373831119120630;
    var_160 = 1;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_21B8()
    var_176 = 32656;
    var_184 = 8;
    var_192 = 16;
    pri = fun_02A8(var_184, var_176)
    var_200 = 0;
    pri = fun_0378()
    var_208 = 30;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 0;
    var_232 = 3;
    var_240 = 0;
    var_248 = 100;
    var_256 = -1;
    OP_PUSH2_C -8205333195356110393, -5471796947768100173
    var_264 = 56;
    pri = fun_1AE0(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_06C8(var_272)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1CD8(var_288)
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = -90;
    pri = float(var_328)
    var_336 = pri;
    var_344 = -5471796947768100173;
    var_352 = 40;
    pri = fun_0678(var_344, var_336, var_328, var_320, var_312)
    var_360 = -5471796947768100173;
    var_368 = 8;
    pri = fun_06C8(var_360)
    var_376 = 0;
    var_384 = 4149307772735721056;
    var_392 = 0;
    var_400 = 24;
    pri = fun_1DC8(var_392, var_384, var_376)
    var_408 = 0;
    var_416 = 4149311071270605689;
    var_424 = 1;
    var_432 = 24;
    pri = fun_1DC8(var_424, var_416, var_408)
    var_440 = 0;
    var_448 = 0;
    var_456 = 0;
    var_464 = 1;
    var_472 = 32;
    pri = fun_1EB0(var_464, var_456, var_448, var_440)
    var_480 = 5;
    var_488 = 5;
    var_496 = -5471796947768100173;
    var_504 = 24;
    pri = fun_0EF8(var_496, var_488, var_480)
    var_512 = 0;
    var_520 = 1;
    var_528 = -5471796947768100173;
    var_536 = 24;
    pri = fun_7EC8(var_528, var_520, var_512)
    var_544 = 1;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = -5471796947768100173;
    var_568 = 8;
    pri = fun_08A0(var_560)
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    OP_PUSH2_C -8205332095844482182, -5471796947768100173
    var_616 = 56;
    pri = fun_1AE0(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_1CD8(var_624)
    var_640 = 1;
    var_648 = 1;
    var_656 = -1;
    var_664 = -1;
    var_672 = 0;
    var_680 = 1;
    var_688 = -5471796947768100173;
    var_696 = 56;
    pri = fun_3E60(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 1;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 5;
    var_728 = 1;
    var_736 = -5471796947768100173;
    var_744 = 24;
    pri = fun_0EF8(var_736, var_728, var_720)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C -8205330996332853971, -5471796947768100173
    var_792 = 56;
    pri = fun_1AE0(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_1CD8(var_800)
    var_816 = 0;
    var_824 = 3;
    var_832 = 0;
    var_840 = 100;
    var_848 = -1;
    OP_PUSH2_C -8205337593402623237, -5471796947768100173
    var_856 = 56;
    pri = fun_1AE0(var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_864 = 1;
    var_872 = 8;
    pri = fun_1CD8(var_864)
    var_880 = 0;
    pri = fun_1D98()
    var_888 = 1;
    var_896 = 3;
    var_904 = 0;
    var_912 = 1;
    var_920 = -5471796947768100173;
    var_928 = 40;
    pri = fun_6198(var_920, var_912, var_904, var_896, var_888)
    var_936 = 0;
    var_944 = 6;
    OP_PUSH2_C 5849261296325962060, -5471796947768100173
    var_952 = 32;
    pri = fun_84B8(var_944, var_936, var_928, var_920)
    var_960 = 1;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = -5471796947768100173;
    var_984 = 8;
    pri = fun_08A0(var_976)
    var_992 = -5471796947768100173;
    var_1000 = 8;
    pri = fun_0E38(var_992)
    var_1008 = 5;
    var_1016 = 2;
    var_1024 = -5471796947768100173;
    var_1032 = 24;
    pri = fun_0EF8(var_1024, var_1016, var_1008)
    var_1040 = 0;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 100;
    var_1072 = -1;
    OP_PUSH2_C -8205338692914251448, -5471796947768100173
    var_1080 = 56;
    pri = fun_1AE0(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1088 = 1;
    var_1096 = 8;
    pri = fun_1CD8(var_1088)
    var_1104 = 0;
    pri = fun_1D98()
    var_1112 = 0;
    var_1120 = 0;
    var_1128 = -5471796947768100173;
    var_1136 = 24;
    pri = fun_7EC8(var_1128, var_1120, var_1112)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_0060(var_1144)
    var_1160 = -5471796947768100173;
    var_1168 = 8;
    pri = fun_08A0(var_1160)
    var_1176 = 1;
    var_1184 = 0;
    var_1192 = 4641240890982006784;
    var_1200 = 0;
    var_1208 = 0;
    OP_PUSH4_C 4665650049118633984, 4669449961304227840, 4607182418800017408, -5471796947768100173
    var_1216 = 72;
    pri = fun_0600(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 35;
    var_1232 = 8;
    pri = fun_0060(var_1224)
    var_1240 = 1;
    var_1248 = 0;
    var_1256 = 32608;
    var_1264 = 8;
    var_1272 = 32;
    pri = fun_0308(var_1264, var_1256, var_1248, var_1240)
    var_1280 = 0;
    pri = fun_0378()
    var_1288 = -5471796947768100173;
    var_1296 = 8;
    pri = fun_06C8(var_1288)
    var_1304 = 3;
    var_1312 = 0;
    pri = EvCameraEnd(var_1312, var_1304)
    pri = 0;
    return pri;
}
// fun_A318
fun_A318() {
    pri = 0;
    return pri;
}
// fun_A330
fun_A330() {
    var_8 = -5471796947768100173;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 650;
    var_32 = 8;
    pri = fun_9580(var_24)
    var_40 = -4504382268511091935;
    pri = VanishFlagReset(var_40)
    var_48 = -3149351691952044084;
    pri = VanishFlagReset(var_48)
    var_56 = -3149339597324133763;
    pri = VanishFlagReset(var_56)
    var_64 = -8539039257394276789;
    pri = VanishFlagReset(var_64)
    var_72 = -2747090564907400189;
    pri = VanishFlagReset(var_72)
    var_80 = -6477629637938931612;
    pri = VanishFlagReset(var_80)
    var_88 = -2592008544789079578;
    pri = VanishFlagReset(var_88)
    var_96 = 1751443779179290009;
    pri = VanishFlagReset(var_96)
    var_104 = 7720660484484750577;
    pri = VanishFlagReset(var_104)
    var_112 = 4514459545519325051;
    pri = VanishFlagReset(var_112)
    pri = 0;
    return pri;
}
// fun_A520
fun_A520() {
    OP_PUSH2_C -3681268570345977435, 3568075767377089994
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 32656;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_A5C8
fun_A5C8() {
    var_8 = 0;
    pri = fun_9718()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_9838()
    var_24 = 0;
    pri = fun_9890()
    var_32 = 0;
    pri = fun_98A8()
    var_40 = 0;
    pri = fun_98C0()
    var_48 = 0;
    pri = fun_A318()
    var_56 = 0;
    pri = fun_A330()
    var_64 = 0;
    pri = fun_A520()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_A6D0
fun_A6D0() {
    var_8 = 0;
    pri = fun_9890()
    var_16 = 0;
    pri = fun_A330()
    var_24 = 6;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
