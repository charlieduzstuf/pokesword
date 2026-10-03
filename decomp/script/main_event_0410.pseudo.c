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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0638
fun_0638() {
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
// fun_06B0
fun_06B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0700
fun_0700() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    OP_JZER lab_07D0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0EF8(var_24)
    OP_JNZ lab_07D0
    pri = 0;
    return pri;
// lab_07D0
    OP_JUMP lab_07E0
// lab_07E0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0840
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0840
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07E0
    pri = 0;
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_08F8
fun_08F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0978
    pri = 0;
    return pri;
// lab_0978
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09B8
// lab_09B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    OP_JNZ lab_0A40
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A30
    pri = 0;
    return pri;
// lab_0A40
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A88
    pri = 0;
    return pri;
// lab_0A88
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B30(var_8)
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09B8
    pri = 0;
    return pri;
// lab_0A30
    OP_JUMP lab_0A88
}
// fun_0B30
fun_0B30() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EC8(var_8)
    OP_JZER lab_0CE8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C10
    OP_ZERO_P_S 64
// lab_0CE8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D20
    OP_CONST_S 64, 1
// lab_0D20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D58
    OP_CONST_S 72, 1
// lab_0D58
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
// lab_0C10
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C38
    OP_ZERO_P_S 72
// lab_0C38
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
    OP_JUMP lab_0DF8
// lab_0DF8
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E88
fun_0E88() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F28
fun_0F28() {
    OP_JUMP lab_0F40
// lab_0F40
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FD0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0930(var_8)
    pri = 0;
    return pri;
// lab_0FD0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1060
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1050
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0930(var_8)
    pri = 0;
    return pri;
// lab_1060
    pri = 0;
    return pri;
// lab_1050
    OP_JUMP lab_1070
// lab_1070
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F40
    pri = 0;
    return pri;
// lab_0FC0
    OP_JUMP lab_1070
}
// fun_10B0
fun_10B0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0930(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F28(var_40)
    pri = 0;
    return pri;
}
// fun_1138
fun_1138() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1170
fun_1170() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_11C8
fun_11C8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1200
fun_1200() {
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
// switch_1818
        case default:
        {
// switch_1818_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1860
// lab_1860
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
            OP_JNZ lab_1908
            var_88 = 0;
            pri = fun_1BD8()
// lab_1908
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1818_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1400
                case default:
                {
// switch_1400_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1478
// lab_1478
                    OP_JUMP lab_1860
                }
                case 0x0:
                {
// switch_1400_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1478
                }
                case 0x1:
                {
// switch_1400_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1478
                }
                case 0x2:
                {
// switch_1400_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1478
                }
                case 0x3:
                {
// switch_1400_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1478
                }
                case 0x4:
                {
// switch_1400_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1478
                }
                case 0x5:
                {
// switch_1400_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1478
                }
            }
        }
        case 0x65:
        {
// switch_1818_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_15B8
                case default:
                {
// switch_15B8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1630
// lab_1630
                    OP_JUMP lab_1860
                }
                case 0x0:
                {
// switch_15B8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1630
                }
                case 0x1:
                {
// switch_15B8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1630
                }
                case 0x2:
                {
// switch_15B8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1630
                }
                case 0x3:
                {
// switch_15B8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1630
                }
                case 0x4:
                {
// switch_15B8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1630
                }
                case 0x5:
                {
// switch_15B8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1630
                }
            }
        }
        case 0x66:
        {
// switch_1818_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1770
                case default:
                {
// switch_1770_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17E8
// lab_17E8
                    OP_JUMP lab_1860
                }
                case 0x0:
                {
// switch_1770_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_17E8
                }
                case 0x1:
                {
// switch_1770_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_17E8
                }
                case 0x2:
                {
// switch_1770_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_17E8
                }
                case 0x3:
                {
// switch_1770_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_17E8
                }
                case 0x4:
                {
// switch_1770_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_17E8
                }
                case 0x5:
                {
// switch_1770_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_17E8
                }
            }
        }
    }
}
// fun_1920
fun_1920() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1200(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1988
fun_1988() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_08F8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1A30
    pri = 1;
    return pri;
// lab_1A30
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1A78
fun_1A78() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1AC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1988(var_8)
    arg_2 = pri;
// lab_1AC8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1200(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B28
fun_1B28() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1920(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1B28(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BD8
fun_1BD8() {
    OP_JUMP lab_1BF0
// lab_1BF0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C30
    pri = 0;
    return pri;
// lab_1C30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1BF0
    pri = 0;
    return pri;
}
// fun_1C70
fun_1C70() {
    var_8 = 0;
    pri = fun_1BD8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1D20
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1D20
    pri = 0;
    return pri;
}
// fun_1D30
fun_1D30() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1D60
fun_1D60() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1D98
fun_1D98() {
    OP_JUMP lab_1DB0
// lab_1DB0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1DF8
    OP_JUMP lab_1E28
    OP_JUMP lab_1E18
// lab_1DF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1E28
    pri = 0;
    return pri;
// lab_1E18
    OP_JUMP lab_1DB0
}
// fun_1E38
fun_1E38() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1E68
fun_1E68() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EB8
fun_1EB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F08
fun_1F08() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F58
fun_1F58() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FA8
fun_1FA8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    OP_JUMP lab_2010
// lab_2010
    pri = EvCameraMoveWait_()
    OP_JZER lab_2048
    pri = 0;
    return pri;
// lab_2048
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2010
    pri = 0;
    return pri;
}
// fun_2088
fun_2088() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_20C0
fun_20C0() {
    pri = arg_6;
    OP_JNZ lab_20F8
    var_8 = 0;
    pri = fun_0E08()
// lab_20F8
    pri = arg_1;
    switch (pri) {
// switch_3660
        case default:
        {
// switch_3660_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_39B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_39B0
            pri = 1;
            OP_JUMP lab_39B8
// lab_39B0
            pri = 0;
// lab_39B8
            OP_JZER lab_3B10
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08F8(var_24, var_16)
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
            OP_JUMP lab_3B70
// lab_3B10
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
// lab_3B70
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3BD0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3C30
// lab_3BD0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3C30
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3C30
            pri = arg_2;
            OP_JZER lab_3C70
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3C70
            var_8 = 0;
            pri = fun_0E48()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3660_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x1:
        {
// switch_3660_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x2:
        {
// switch_3660_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x3:
        {
// switch_3660_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x4:
        {
// switch_3660_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x5:
        {
// switch_3660_case_0x5
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0x6:
        {
// switch_3660_case_0x6
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0x7:
        {
// switch_3660_case_0x7
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0x8:
        {
// switch_3660_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x9:
        {
// switch_3660_case_0x9
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0xa:
        {
// switch_3660_case_0xa
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0xb:
        {
// switch_3660_case_0xb
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0xc:
        {
// switch_3660_case_0xc
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0xd:
        {
// switch_3660_case_0xd
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0xe:
        {
// switch_3660_case_0xe
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0xf:
        {
// switch_3660_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x10:
        {
// switch_3660_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x11:
        {
// switch_3660_case_0x11
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0x12:
        {
// switch_3660_case_0x12
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0x13:
        {
// switch_3660_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x14:
        {
// switch_3660_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x15:
        {
// switch_3660_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x16:
        {
// switch_3660_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x17:
        {
// switch_3660_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x18:
        {
// switch_3660_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x19:
        {
// switch_3660_case_0x19
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
            pri = fun_0B68(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3660_case_default
        }
        case 0x1a:
        {
// switch_3660_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08B8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0880(var_48, var_40)
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
            pri = fun_0B68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3660_case_default
        }
        case 0x1b:
        {
// switch_3660_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08B8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0880(var_48, var_40)
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
            pri = fun_0B68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3660_case_default
        }
        case 0x1c:
        {
// switch_3660_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08B8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0880(var_48, var_40)
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
            pri = fun_0B68(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3660_case_default
        }
        case 0x1d:
        {
// switch_3660_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x1e:
        {
// switch_3660_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x1f:
        {
// switch_3660_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x20:
        {
// switch_3660_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x21:
        {
// switch_3660_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x22:
        {
// switch_3660_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x23:
        {
// switch_3660_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x24:
        {
// switch_3660_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x25:
        {
// switch_3660_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x26:
        {
// switch_3660_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x27:
        {
// switch_3660_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x28:
        {
// switch_3660_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
        case 0x29:
        {
// switch_3660_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3660_case_default
        }
    }
}
// fun_3CA0
fun_3CA0() {
    pri = arg_4;
    OP_JNZ lab_3CD8
    var_8 = 0;
    pri = fun_0E08()
// lab_3CD8
    pri = arg_1;
    switch (pri) {
// switch_50B0
        case default:
        {
// switch_50B0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0EC8(var_264)
            OP_JZER lab_5678
            pri = arg_3;
            switch (pri) {
// switch_5620
                case default:
                {
// switch_5620_case_default
                    OP_JUMP lab_5930
// lab_5930
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_59A0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_59A0
                    var_8 = 0;
                    pri = fun_0E48()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5620_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5620_case_default
                }
                case 0x2:
                {
// switch_5620_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5620_case_default
                }
                case 0x3:
                {
// switch_5620_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_5620_case_default
                }
            }
// lab_5678
            pri = arg_1;
            OP_JZER lab_56C8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_56C8
            pri = 0;
            OP_JUMP lab_56D0
// lab_56C8
            pri = 1;
// lab_56D0
            OP_JZER lab_5738
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_08F8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5738
            pri = 1;
            OP_JUMP lab_5740
// lab_5738
            pri = 0;
// lab_5740
            OP_JZER lab_5790
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5930
// lab_5790
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_57F8
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5930
// lab_57F8
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_08F8(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_50B0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1:
        {
// switch_50B0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2:
        {
// switch_50B0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x3:
        {
// switch_50B0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x4:
        {
// switch_50B0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x5:
        {
// switch_50B0_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08B8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B30(var_40)
            OP_JUMP switch_50B0_case_default
        }
        case 0x6:
        {
// switch_50B0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x7:
        {
// switch_50B0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x8:
        {
// switch_50B0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x9:
        {
// switch_50B0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0xa:
        {
// switch_50B0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0xb:
        {
// switch_50B0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0xc:
        {
// switch_50B0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0xd:
        {
// switch_50B0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0xe:
        {
// switch_50B0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0xf:
        {
// switch_50B0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x10:
        {
// switch_50B0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x11:
        {
// switch_50B0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x12:
        {
// switch_50B0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x13:
        {
// switch_50B0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x14:
        {
// switch_50B0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x15:
        {
// switch_50B0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x16:
        {
// switch_50B0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x17:
        {
// switch_50B0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x18:
        {
// switch_50B0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x19:
        {
// switch_50B0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1a:
        {
// switch_50B0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1b:
        {
// switch_50B0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1c:
        {
// switch_50B0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1d:
        {
// switch_50B0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1e:
        {
// switch_50B0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x1f:
        {
// switch_50B0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x20:
        {
// switch_50B0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x21:
        {
// switch_50B0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x22:
        {
// switch_50B0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x23:
        {
// switch_50B0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x24:
        {
// switch_50B0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x25:
        {
// switch_50B0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x26:
        {
// switch_50B0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x27:
        {
// switch_50B0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x28:
        {
// switch_50B0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x29:
        {
// switch_50B0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2a:
        {
// switch_50B0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2b:
        {
// switch_50B0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2c:
        {
// switch_50B0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2d:
        {
// switch_50B0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2e:
        {
// switch_50B0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x2f:
        {
// switch_50B0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x30:
        {
// switch_50B0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x31:
        {
// switch_50B0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x32:
        {
// switch_50B0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x33:
        {
// switch_50B0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x34:
        {
// switch_50B0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x35:
        {
// switch_50B0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x36:
        {
// switch_50B0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x37:
        {
// switch_50B0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x38:
        {
// switch_50B0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x39:
        {
// switch_50B0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x3a:
        {
// switch_50B0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x3b:
        {
// switch_50B0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x3c:
        {
// switch_50B0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x3d:
        {
// switch_50B0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
        case 0x3e:
        {
// switch_50B0_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08B8(var_24, var_16, var_8)
            OP_JUMP switch_50B0_case_default
        }
    }
}
// fun_59D0
fun_59D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5BE0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 9856;
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
    var_424 = 9912;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 9928;
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
    OP_JZER lab_5BC8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_5BC8
    pri = 0;
    return pri;
}
// fun_5BE0
fun_5BE0() {
    var_8 = arg_1;
    var_16 = 9976;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08B8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5C28
fun_5C28() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5D28
        case default:
        {
// switch_5D28_case_default
            var_8 = arg_5;
            var_16 = var_8;
            var_24 = arg_4;
            var_32 = arg_2;
            var_40 = 8802641224559852288;
            var_48 = arg_0;
            pri = EasyTalkCharacter(var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5D28_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5D28_case_default
        }
        case 0x1:
        {
// switch_5D28_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5D28_case_default
        }
        case 0x2:
        {
// switch_5D28_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5D28_case_default
        }
        case 0x3:
        {
// switch_5D28_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5D28_case_default
        }
    }
}
// fun_5DE8
fun_5DE8() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1BD8()
    pri = 0;
    return pri;
}
// fun_5E80
fun_5E80() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5C28(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5DE8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_5F28
fun_5F28() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5F78
// lab_5F78
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 10080;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5FF0
    OP_JUMP lab_6020
// lab_5FF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5F78
// lab_6020
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_60A8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3CA0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1198(var_56)
// lab_60A8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6110
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E88(var_24, var_16)
// lab_6110
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E88(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_61D0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0930(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_06B0(var_88, var_80, var_72, var_64, var_56)
// lab_61D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6210
    pri = 0;
    return pri;
// lab_6210
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6358
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 10200;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0880(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6320
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6358
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0758(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0758(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0930(var_40)
    pri = 0;
    return pri;
// lab_6320
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E88(var_16, var_8)
}
// fun_63E0
fun_63E0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_5E80(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1C70(var_112)
    var_128 = 0;
    pri = fun_1D30()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_5F28(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6558
fun_6558() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_65F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0930(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_20C0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_65F0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_6748
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_66B0
    var_24 = 10336;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_66B0
    pri = 1;
    OP_JUMP lab_66B8
// lab_6748
    pri = 0;
    return pri;
// lab_66B0
    pri = 0;
// lab_66B8
    OP_JZER lab_6748
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0930(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_20C0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_6758
fun_6758() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_6AD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_67C0
fun_67C0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_6830
    OP_CONST_S -8, 1
// lab_6830
    pri = arg_0;
    OP_JNZ lab_6850
    OP_ZERO_P_S -8
// lab_6850
    pri = var_8;
    OP_JZER lab_68D8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_68D8
    pri = 0;
    return pri;
}
// fun_68F0
fun_68F0() {
    var_8 = 10440;
    var_16 = 8;
    pri = fun_1D60(var_8)
    var_24 = 0;
    pri = fun_1D98()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1E68(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_1FA8(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_6A08
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_6A08
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_6558(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_6758(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1E38()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2088(var_112)
    pri = 0;
    return pri;
}
// fun_6AD8
fun_6AD8() {
    var_8 = 10600;
    var_16 = 8;
    pri = fun_1D60(var_8)
    var_24 = 0;
    pri = fun_1D98()
    pri = arg_3;
    OP_JNZ lab_6BF8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_6BC0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_6C68(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_6BE8
// lab_6BF8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6E08(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_6BC0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6D30(var_16, var_8)
// lab_6BE8
    OP_JUMP lab_6C40
// lab_6C40
    var_8 = 0;
    pri = fun_1E38()
    pri = 0;
    return pri;
}
// fun_6C68
fun_6C68() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6E08(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_6D18
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_6D18
    pri = 0;
    return pri;
}
// fun_6D30
fun_6D30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1EB8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1B78(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1C70(var_72)
    var_88 = 0;
    pri = fun_1D30()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1E68(var_96)
    pri = 0;
    return pri;
}
// fun_6E08
fun_6E08() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6E50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_7110(var_8)
// lab_6E50
    pri = arg_4;
    OP_JNZ lab_6EB8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1E68(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1EB8(var_40, var_32, var_24)
// lab_6EB8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_6F58
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1F08(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1B78(var_56, var_48, var_40)
    OP_JUMP lab_7048
// lab_6F58
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_7010
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_7010
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_7010
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1B78(var_24, var_16, var_8)
// lab_7048
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7088
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_7088
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C70(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_7318(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_67C0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_7110
fun_7110() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_7170
    var_16 = 10760;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_7170
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_72B0
        case default:
        {
// switch_72B0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_72A0
            var_16 = 11304;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_72A0
            OP_JUMP lab_72E8
// lab_72E8
            var_8 = 11520;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_72B0_case_0x1
            var_8 = 10976;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_72E8
        }
        case 0x2:
        {
// switch_72B0_case_0x2
            var_8 = 11104;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_72E8
        }
    }
}
// fun_7318
fun_7318() {
    pri = arg_2;
    OP_JNZ lab_7400
    var_8 = 0;
    var_16 = 8;
    pri = fun_1E68(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1EB8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1F58(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_7400
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1B78(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1C70(var_40)
    var_56 = 0;
    pri = fun_1D30()
    pri = 0;
    return pri;
}
// fun_7478
fun_7478() {
    pri = 11704;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7500
// lab_7500
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7680
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7670
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_75C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_75C0
    pri = 0;
    OP_JUMP lab_75C8
// lab_7680
    pri = 0;
    return pri;
// lab_7670
    OP_JUMP lab_74F8
// lab_74F8
    OP_INC_P_S -936
// lab_75C0
    pri = 1;
// lab_75C8
    OP_JZER lab_7640
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7638
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7640
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7638
}
// fun_76A0
fun_76A0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7738
    var_8 = 1;
    var_16 = 0;
    var_24 = 12624;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1170()
// lab_7738
    pri = arg_4;
    OP_JZER lab_7770
    var_8 = 1;
    var_16 = 8;
    pri = fun_11C8(var_8)
// lab_7770
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_77C8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_77C8
    pri = 0;
    OP_JUMP lab_77D0
// lab_77C8
    pri = 1;
// lab_77D0
    OP_JZER lab_7898
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7898
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_7870
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10B0(var_32, var_24)
    OP_JUMP lab_7898
// lab_7898
    pri = arg_2;
    OP_JZER lab_7970
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_7940
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E88(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0600(var_40)
    OP_JUMP lab_7970
// lab_7970
    pri = arg_3;
    OP_JZER lab_79A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1138(var_8)
// lab_79A8
    pri = 0;
    return pri;
// lab_7940
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E88(var_16, var_8)
// lab_7870
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10B0(var_16, var_8)
}
// fun_79B8
fun_79B8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7478(var_24)
    pri = 0;
    return pri;
}
// fun_7A20
fun_7A20() {
    pri = g_mode;
    switch (pri) {
// switch_7B08
        case default:
        {
// switch_7B08_case_default
            pri = CommandNOP()
            OP_JUMP lab_7B60
// lab_7B60
            pri = 0;
            return pri;
        }
        case 0xb865ed221ae273c3:
        {
// switch_7B08_case_0xb865ed221ae273c3
            var_8 = 0;
            pri = fun_9048()
            OP_JUMP lab_7B60
        }
        case 0x0:
        {
// switch_7B08_case_0x0
            var_8 = 0;
            pri = fun_7B70()
            OP_JUMP lab_7B60
        }
        case 0x54744b1e6898401f:
        {
// switch_7B08_case_0x54744b1e6898401f
            var_8 = 0;
            pri = fun_9138()
            OP_JUMP lab_7B60
        }
        case 0x5a9d94bc4a0de995:
        {
// switch_7B08_case_0x5a9d94bc4a0de995
            var_8 = 0;
            pri = fun_91A0()
            OP_JUMP lab_7B60
        }
    }
}
// fun_7B70
fun_7B70() {
    pri = 0;
    return pri;
}
// fun_7B88
fun_7B88() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_76A0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7BE0
fun_7BE0() {
    pri = 0;
    return pri;
}
// fun_7BF8
fun_7BF8() {
    pri = 0;
    return pri;
}
// fun_7C10
fun_7C10() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4653978513287466189, 4652552666608566272, 8802641224559852288
    var_24 = 48;
    pri = fun_0570(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    var_48 = -4582834833314545664;
    var_56 = 1347;
    pri = float(var_56)
    var_64 = pri;
    OP_PUSH2_C 4651549912004034560, 6371067943318157598
    var_72 = 48;
    pri = fun_0570(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    var_96 = -4582834833314545664;
    var_104 = 1445;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH2_C 4651831386980745216, 8794804515438938986
    var_120 = 48;
    pri = fun_0570(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0060(var_128)
    var_144 = 1;
    var_152 = 0;
    var_160 = 30;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 0;
    OP_PUSH4_C 4652786642682957005, 4652552666608566272, 4607182418800017408, 8802641224559852288
    var_200 = 72;
    pri = fun_0638(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_208 = 1;
    var_216 = 0;
    var_224 = 30;
    pri = float(var_224)
    var_232 = pri;
    var_240 = -114;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 1;
    OP_PUSH4_C 4652306376003944448, 4651549912004034560, 4607182418800017408, 6371067943318157598
    var_264 = 72;
    pri = fun_0638(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 1;
    var_280 = 0;
    var_288 = 10;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 0;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 0;
    var_328 = 1161;
    pri = float(var_328)
    var_336 = pri;
    OP_PUSH3_C 4651831386980745216, 4607182418800017408, 8794804515438938986
    var_344 = 72;
    pri = fun_0638(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 5;
    var_360 = 8;
    pri = fun_0060(var_352)
    var_368 = 12672;
    var_376 = 8;
    var_384 = 16;
    pri = fun_02A8(var_376, var_368)
    var_392 = 0;
    pri = fun_0378()
    var_400 = 8802641224559852288;
    var_408 = 8;
    pri = fun_0758(var_400)
    var_416 = 6371067943318157598;
    var_424 = 8;
    pri = fun_0758(var_416)
    var_432 = 8794804515438938986;
    var_440 = 8;
    pri = fun_0758(var_432)
    var_448 = 1;
    var_456 = 1;
    var_464 = 67;
    pri = float(var_464)
    var_472 = pri;
    OP_PUSH3_C 4652451511538810880, 4651039738608746496, 8794804515438938986
    var_480 = 48;
    pri = fun_0570(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    OP_PUSH2_C 6371067943318157598, 8802641224559852288
    var_520 = 48;
    pri = fun_0700(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 0;
    var_536 = 4631952216750555136;
    var_544 = 0;
    OP_PUSH5_C 4649974091939105997, 4633538328244319683, 4650222669527913595, 4652925313089452114, 4639320879797119222
    var_552 = 4651663469564951265;
    var_560 = 1;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 0;
    pri = fun_1FF8()
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    OP_PUSH2_C 8710871587433669108, 6371067943318157598
    var_616 = 56;
    pri = fun_1A78(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_1C70(var_624)
    var_640 = 0;
    pri = fun_1D30()
    var_648 = 0;
    var_656 = 4631952216750555136;
    var_664 = 3;
    OP_PUSH5_C 4651217595609655542, 4630920610960910582, 4651687746781692559, 4653549439869842883, 4638559138141396009
    var_672 = 4652669566684831416;
    var_680 = 30;
    pri = EvCameraMove(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    OP_PUSH2_C 8802641224559852288, 6371067943318157598
    var_720 = 48;
    pri = fun_0700(var_712, var_704, var_696, var_688, var_680, var_672)
    var_728 = 6371067943318157598;
    var_736 = 8;
    pri = fun_0758(var_728)
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_0758(var_744)
    var_760 = 0;
    pri = fun_1FF8()
    var_768 = 0;
    var_776 = 1;
    var_784 = 6371067943318157598;
    var_792 = 24;
    pri = fun_59D0(var_784, var_776, var_768)
    var_800 = 1;
    var_808 = 8;
    pri = fun_0060(var_800)
    var_816 = 6371067943318157598;
    var_824 = 8;
    pri = fun_0930(var_816)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C 8710874885968553741, 6371067943318157598
    var_872 = 56;
    pri = fun_1A78(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 1;
    var_888 = 8;
    pri = fun_1C70(var_880)
    var_896 = 0;
    pri = fun_1D30()
    var_904 = 0;
    var_912 = 3;
    var_920 = 0;
    var_928 = 100;
    var_936 = -1;
    OP_PUSH2_C 8710873786456925530, 6371067943318157598
    var_944 = 56;
    pri = fun_1A78(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 1;
    var_960 = 8;
    pri = fun_1C70(var_952)
    var_968 = 0;
    pri = fun_1D30()
    var_976 = 0;
    var_984 = 0;
    var_992 = 6371067943318157598;
    var_1000 = 24;
    pri = fun_59D0(var_992, var_984, var_976)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 6371067943318157598;
    var_1032 = 8;
    pri = fun_0930(var_1024)
    var_1040 = 1;
    var_1048 = 0;
    var_1056 = 30;
    pri = float(var_1056)
    var_1064 = pri;
    var_1072 = 0;
    pri = float(var_1072)
    var_1080 = pri;
    var_1088 = 0;
    var_1096 = 1114;
    pri = float(var_1096)
    var_1104 = pri;
    var_1112 = 1011;
    pri = float(var_1112)
    var_1120 = pri;
    OP_PUSH2_C 4607182418800017408, 6371067943318157598
    var_1128 = 72;
    pri = fun_0638(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1136 = 6371067943318157598;
    var_1144 = 8;
    pri = fun_0758(var_1136)
    var_1152 = 0;
    pri = fun_1FF8()
    var_1160 = 0;
    var_1168 = 24;
    OP_PUSH2_C 7352798426930273587, 6371067943318157598
    var_1176 = 32;
    pri = fun_68F0(var_1168, var_1160, var_1152, var_1144)
    var_1184 = 12720;
    pri = CallTips(var_1184)
    var_1192 = 0;
    var_1200 = 1;
    var_1208 = 6371067943318157598;
    var_1216 = 24;
    pri = fun_59D0(var_1208, var_1200, var_1192)
    var_1224 = 1;
    var_1232 = 8;
    pri = fun_0060(var_1224)
    var_1240 = 6371067943318157598;
    var_1248 = 8;
    pri = fun_0930(var_1240)
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C 8710870487922040897, 6371067943318157598
    var_1296 = 56;
    pri = fun_1A78(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_1C70(var_1304)
    var_1320 = 0;
    pri = fun_1D30()
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = 6371067943318157598;
    var_1352 = 24;
    pri = fun_59D0(var_1344, var_1336, var_1328)
    var_1360 = 1;
    var_1368 = 8;
    pri = fun_0060(var_1360)
    var_1376 = 6371067943318157598;
    var_1384 = 8;
    pri = fun_0930(var_1376)
    var_1392 = 0;
    var_1400 = 0;
    var_1408 = 0;
    OP_PUSH2_C -4600201839377593139, 6371067943318157598
    var_1416 = 40;
    pri = fun_06B0(var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1424 = 6371067943318157598;
    var_1432 = 8;
    pri = fun_0758(var_1424)
    var_1440 = 0;
    var_1448 = 3;
    var_1456 = 6371067943318157598;
    var_1464 = 24;
    pri = fun_59D0(var_1456, var_1448, var_1440)
    var_1472 = 1;
    var_1480 = 8;
    pri = fun_0060(var_1472)
    var_1488 = 6371067943318157598;
    var_1496 = 8;
    pri = fun_0930(var_1488)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C 8710869388410412686, 6371067943318157598
    var_1544 = 56;
    pri = fun_1A78(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_1C70(var_1552)
    var_1568 = 0;
    pri = fun_1D30()
    var_1576 = 0;
    var_1584 = 0;
    var_1592 = 6371067943318157598;
    var_1600 = 24;
    pri = fun_59D0(var_1592, var_1584, var_1576)
    var_1608 = 1;
    var_1616 = 8;
    pri = fun_0060(var_1608)
    var_1624 = 6371067943318157598;
    var_1632 = 8;
    pri = fun_0930(var_1624)
    var_1640 = 1;
    var_1648 = 0;
    var_1656 = 30;
    pri = float(var_1656)
    var_1664 = pri;
    var_1672 = 0;
    pri = float(var_1672)
    var_1680 = pri;
    var_1688 = 0;
    var_1696 = 1400;
    pri = float(var_1696)
    var_1704 = pri;
    OP_PUSH3_C 4651549912004034560, 4607182418800017408, 6371067943318157598
    var_1712 = 72;
    pri = fun_0638(var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1720 = 10;
    var_1728 = 8;
    pri = fun_0060(var_1720)
    var_1736 = 1;
    var_1744 = 0;
    var_1752 = 30;
    pri = float(var_1752)
    var_1760 = pri;
    var_1768 = 0;
    pri = float(var_1768)
    var_1776 = pri;
    var_1784 = 0;
    var_1792 = 1423;
    pri = float(var_1792)
    var_1800 = pri;
    OP_PUSH3_C 4651039738608746496, 4607182418800017408, 8794804515438938986
    var_1808 = 72;
    pri = fun_0638(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1816 = 30;
    var_1824 = 8;
    pri = fun_0060(var_1816)
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = 0;
    var_1856 = 0;
    pri = float(var_1856)
    var_1864 = pri;
    var_1872 = 8802641224559852288;
    var_1880 = 40;
    pri = fun_06B0(var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1888 = 8802641224559852288;
    var_1896 = 8;
    pri = fun_0758(var_1888)
    var_1904 = 30;
    var_1912 = 8;
    pri = fun_0060(var_1904)
    var_1920 = 6371067943318157598;
    var_1928 = 8;
    pri = fun_0758(var_1920)
    var_1936 = 1;
    var_1944 = 0;
    var_1952 = 12624;
    var_1960 = 8;
    var_1968 = 32;
    pri = fun_0308(var_1960, var_1952, var_1944, var_1936)
    var_1976 = 0;
    pri = fun_0378()
    var_1984 = 3;
    var_1992 = 1;
    pri = EvCameraEnd(var_1992, var_1984)
    var_2000 = 0;
    var_2008 = 6371067943318157598;
    var_2016 = 16;
    pri = fun_05C8(var_2008, var_2000)
    var_2024 = 0;
    var_2032 = 8794804515438938986;
    var_2040 = 16;
    pri = fun_05C8(var_2032, var_2024)
    var_2048 = 30;
    var_2056 = 8;
    pri = fun_0060(var_2048)
    pri = 0;
    return pri;
}
// fun_8E88
fun_8E88() {
    pri = 0;
    return pri;
}
// fun_8EA0
fun_8EA0() {
    var_8 = 6371067943318157598;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 8794804515438938986;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 411;
    var_48 = 8;
    pri = fun_79B8(var_40)
    var_56 = -6270886897370188264;
    pri = VanishFlagReset(var_56)
    var_64 = 8333688502895045657;
    pri = VanishFlagReset(var_64)
    var_72 = 7093823562630176359;
    pri = FlagSet(var_72)
    var_80 = 3380472944985996827;
    pri = FlagSet(var_80)
    var_88 = 4668685613554153179;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_8FF0
fun_8FF0() {
    var_8 = 12672;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_9048
fun_9048() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7B88()
    var_16 = 0;
    pri = fun_7BE0()
    var_24 = 0;
    pri = fun_7BF8()
    var_32 = 0;
    pri = fun_7C10()
    var_40 = 0;
    pri = fun_8E88()
    var_48 = 0;
    pri = fun_8EA0()
    var_56 = 0;
    pri = fun_8FF0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9138
fun_9138() {
    var_8 = 0;
    pri = fun_7BE0()
    var_16 = 0;
    pri = fun_8EA0()
    var_24 = 24;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
// fun_91A0
fun_91A0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8710869388410412686;
    var_88 = 80;
    pri = fun_63E0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
