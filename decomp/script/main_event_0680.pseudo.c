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
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JZER lab_06F0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E18(var_24)
    OP_JNZ lab_06F0
    pri = 0;
    return pri;
// lab_06F0
    OP_JUMP lab_0700
// lab_0700
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0760
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0700
    pri = 0;
    return pri;
}
// fun_07A0
fun_07A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0850
fun_0850() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0898
    pri = 0;
    return pri;
// lab_0898
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_08D8
// lab_08D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JNZ lab_0960
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0950
    pri = 0;
    return pri;
// lab_0960
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_09A8
    pri = 0;
    return pri;
// lab_09A8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A50(var_8)
    pri = 0;
    return pri;
// lab_0A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08D8
    pri = 0;
    return pri;
// lab_0950
    OP_JUMP lab_09A8
}
// fun_0A50
fun_0A50() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DE8(var_8)
    OP_JZER lab_0C08
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B30
    OP_ZERO_P_S 64
// lab_0C08
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C40
    OP_CONST_S 64, 1
// lab_0C40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C78
    OP_CONST_S 72, 1
// lab_0C78
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
// lab_0B30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B58
    OP_ZERO_P_S 72
// lab_0B58
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
    OP_JUMP lab_0D18
// lab_0D18
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DA8
fun_0DA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E48
fun_0E48() {
    OP_JUMP lab_0E60
// lab_0E60
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0EF0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0EE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0850(var_8)
    pri = 0;
    return pri;
// lab_0EF0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F80
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0F70
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0850(var_8)
    pri = 0;
    return pri;
// lab_0F80
    pri = 0;
    return pri;
// lab_0F70
    OP_JUMP lab_0F90
// lab_0F90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E60
    pri = 0;
    return pri;
// lab_0EE0
    OP_JUMP lab_0F90
}
// fun_0FD0
fun_0FD0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0850(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E48(var_40)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1090
fun_1090() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_10B8
fun_10B8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_10F0
fun_10F0() {
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
// switch_1708
        case default:
        {
// switch_1708_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1750
// lab_1750
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
            OP_JNZ lab_17F8
            var_88 = 0;
            pri = fun_1AC8()
// lab_17F8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1708_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_12F0
                case default:
                {
// switch_12F0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1368
// lab_1368
                    OP_JUMP lab_1750
                }
                case 0x0:
                {
// switch_12F0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1368
                }
                case 0x1:
                {
// switch_12F0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1368
                }
                case 0x2:
                {
// switch_12F0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1368
                }
                case 0x3:
                {
// switch_12F0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1368
                }
                case 0x4:
                {
// switch_12F0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1368
                }
                case 0x5:
                {
// switch_12F0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1368
                }
            }
        }
        case 0x65:
        {
// switch_1708_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_14A8
                case default:
                {
// switch_14A8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1520
// lab_1520
                    OP_JUMP lab_1750
                }
                case 0x0:
                {
// switch_14A8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1520
                }
                case 0x1:
                {
// switch_14A8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1520
                }
                case 0x2:
                {
// switch_14A8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1520
                }
                case 0x3:
                {
// switch_14A8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1520
                }
                case 0x4:
                {
// switch_14A8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1520
                }
                case 0x5:
                {
// switch_14A8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1520
                }
            }
        }
        case 0x66:
        {
// switch_1708_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1660
                case default:
                {
// switch_1660_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16D8
// lab_16D8
                    OP_JUMP lab_1750
                }
                case 0x0:
                {
// switch_1660_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_16D8
                }
                case 0x1:
                {
// switch_1660_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_16D8
                }
                case 0x2:
                {
// switch_1660_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_16D8
                }
                case 0x3:
                {
// switch_1660_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_16D8
                }
                case 0x4:
                {
// switch_1660_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_16D8
                }
                case 0x5:
                {
// switch_1660_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_16D8
                }
            }
        }
    }
}
// fun_1810
fun_1810() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_10F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0818(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1920
    pri = 1;
    return pri;
// lab_1920
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1968
fun_1968() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_19B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1878(var_8)
    arg_2 = pri;
// lab_19B8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_10F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A18
fun_1A18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1810(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A68
fun_1A68() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1A18(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AC8
fun_1AC8() {
    OP_JUMP lab_1AE0
// lab_1AE0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B20
    pri = 0;
    return pri;
// lab_1B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AE0
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    var_8 = 0;
    pri = fun_1AC8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1C10
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1C10
    pri = 0;
    return pri;
}
// fun_1C20
fun_1C20() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1C50
fun_1C50() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
    OP_JUMP lab_1CA0
// lab_1CA0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1CE8
    OP_JUMP lab_1D18
    OP_JUMP lab_1D08
// lab_1CE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1D18
    pri = 0;
    return pri;
// lab_1D08
    OP_JUMP lab_1CA0
}
// fun_1D28
fun_1D28() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1D58
fun_1D58() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EE8
fun_1EE8() {
    OP_JUMP lab_1F00
// lab_1F00
    pri = EvCameraMoveWait_()
    OP_JZER lab_1F38
    pri = 0;
    return pri;
// lab_1F38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F00
    pri = 0;
    return pri;
}
// fun_1F78
fun_1F78() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_1FB0
fun_1FB0() {
    pri = arg_6;
    OP_JNZ lab_1FE8
    var_8 = 0;
    pri = fun_0D28()
// lab_1FE8
    pri = arg_1;
    switch (pri) {
// switch_3550
        case default:
        {
// switch_3550_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_38A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_38A0
            pri = 1;
            OP_JUMP lab_38A8
// lab_38A0
            pri = 0;
// lab_38A8
            OP_JZER lab_3A00
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0818(var_24, var_16)
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
            OP_JUMP lab_3A60
// lab_3A00
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
// lab_3A60
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3AC0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3B20
// lab_3AC0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3B20
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3B20
            pri = arg_2;
            OP_JZER lab_3B60
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3B60
            var_8 = 0;
            pri = fun_0D68()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3550_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x1:
        {
// switch_3550_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x2:
        {
// switch_3550_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x3:
        {
// switch_3550_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x4:
        {
// switch_3550_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x5:
        {
// switch_3550_case_0x5
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0x6:
        {
// switch_3550_case_0x6
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0x7:
        {
// switch_3550_case_0x7
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0x8:
        {
// switch_3550_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x9:
        {
// switch_3550_case_0x9
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0xa:
        {
// switch_3550_case_0xa
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0xb:
        {
// switch_3550_case_0xb
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0xc:
        {
// switch_3550_case_0xc
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0xd:
        {
// switch_3550_case_0xd
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0xe:
        {
// switch_3550_case_0xe
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0xf:
        {
// switch_3550_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x10:
        {
// switch_3550_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x11:
        {
// switch_3550_case_0x11
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0x12:
        {
// switch_3550_case_0x12
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0x13:
        {
// switch_3550_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x14:
        {
// switch_3550_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x15:
        {
// switch_3550_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x16:
        {
// switch_3550_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x17:
        {
// switch_3550_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x18:
        {
// switch_3550_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x19:
        {
// switch_3550_case_0x19
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
            pri = fun_0A88(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3550_case_default
        }
        case 0x1a:
        {
// switch_3550_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07D8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07A0(var_48, var_40)
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
            pri = fun_0A88(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3550_case_default
        }
        case 0x1b:
        {
// switch_3550_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07D8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07A0(var_48, var_40)
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
            pri = fun_0A88(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3550_case_default
        }
        case 0x1c:
        {
// switch_3550_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_07D8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07A0(var_48, var_40)
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
            pri = fun_0A88(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3550_case_default
        }
        case 0x1d:
        {
// switch_3550_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x1e:
        {
// switch_3550_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x1f:
        {
// switch_3550_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x20:
        {
// switch_3550_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x21:
        {
// switch_3550_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x22:
        {
// switch_3550_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x23:
        {
// switch_3550_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x24:
        {
// switch_3550_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x25:
        {
// switch_3550_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x26:
        {
// switch_3550_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x27:
        {
// switch_3550_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x28:
        {
// switch_3550_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
        case 0x29:
        {
// switch_3550_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3550_case_default
        }
    }
}
// fun_3B90
fun_3B90() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_3C28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0850(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1FB0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_3C28
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_3D80
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_3CE8
    var_24 = 8440;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_3CE8
    pri = 1;
    OP_JUMP lab_3CF0
// lab_3D80
    pri = 0;
    return pri;
// lab_3CE8
    pri = 0;
// lab_3CF0
    OP_JZER lab_3D80
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0850(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1FB0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_3D90
fun_3D90() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_4110(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3DF8
fun_3DF8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_3E68
    OP_CONST_S -8, 1
// lab_3E68
    pri = arg_0;
    OP_JNZ lab_3E88
    OP_ZERO_P_S -8
// lab_3E88
    pri = var_8;
    OP_JZER lab_3F10
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_3F10
    pri = 0;
    return pri;
}
// fun_3F28
fun_3F28() {
    var_8 = 8544;
    var_16 = 8;
    pri = fun_1C50(var_8)
    var_24 = 0;
    pri = fun_1C88()
    var_32 = 0;
    var_40 = 8;
    pri = fun_1D58(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_1E98(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_4040
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_4040
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3B90(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_3D90(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_1D28()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_1F78(var_112)
    pri = 0;
    return pri;
}
// fun_4110
fun_4110() {
    var_8 = 8704;
    var_16 = 8;
    pri = fun_1C50(var_8)
    var_24 = 0;
    pri = fun_1C88()
    pri = arg_3;
    OP_JNZ lab_4230
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_41F8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_42A0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_4220
// lab_4230
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4440(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_41F8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4368(var_16, var_8)
// lab_4220
    OP_JUMP lab_4278
// lab_4278
    var_8 = 0;
    pri = fun_1D28()
    pri = 0;
    return pri;
}
// fun_42A0
fun_42A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_4440(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_4350
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_4350
    pri = 0;
    return pri;
}
// fun_4368
fun_4368() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1DA8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1A68(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1B60(var_72)
    var_88 = 0;
    pri = fun_1C20()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1D58(var_96)
    pri = 0;
    return pri;
}
// fun_4440
fun_4440() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4488
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_4748(var_8)
// lab_4488
    pri = arg_4;
    OP_JNZ lab_44F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1DA8(var_40, var_32, var_24)
// lab_44F0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_4590
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1DF8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1A68(var_56, var_48, var_40)
    OP_JUMP lab_4680
// lab_4590
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4648
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_4648
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_4648
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1A68(var_24, var_16, var_8)
// lab_4680
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_46C0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_46C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B60(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_4950(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_3DF8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_4748
fun_4748() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_47A8
    var_16 = 8864;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_47A8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_48E8
        case default:
        {
// switch_48E8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_48D8
            var_16 = 9408;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_48D8
            OP_JUMP lab_4920
// lab_4920
            var_8 = 9624;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_48E8_case_0x1
            var_8 = 9080;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4920
        }
        case 0x2:
        {
// switch_48E8_case_0x2
            var_8 = 9208;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_4920
        }
    }
}
// fun_4950
fun_4950() {
    pri = arg_2;
    OP_JNZ lab_4A38
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D58(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1DA8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1E48(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_4A38
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1A68(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1B60(var_40)
    var_56 = 0;
    pri = fun_1C20()
    pri = 0;
    return pri;
}
// fun_4AB0
fun_4AB0() {
    pri = 9808;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4B38
// lab_4B38
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4CB8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4CA8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4BF8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4BF8
    pri = 0;
    OP_JUMP lab_4C00
// lab_4CB8
    pri = 0;
    return pri;
// lab_4CA8
    OP_JUMP lab_4B30
// lab_4B30
    OP_INC_P_S -936
// lab_4BF8
    pri = 1;
// lab_4C00
    OP_JZER lab_4C78
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4C70
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4C78
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4C70
}
// fun_4CD8
fun_4CD8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4D70
    var_8 = 1;
    var_16 = 0;
    var_24 = 10728;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1090()
// lab_4D70
    pri = arg_4;
    OP_JZER lab_4DA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_10B8(var_8)
// lab_4DA8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_4E00
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_4E00
    pri = 0;
    OP_JUMP lab_4E08
// lab_4E00
    pri = 1;
// lab_4E08
    OP_JZER lab_4ED0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_4ED0
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_4EA8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0FD0(var_32, var_24)
    OP_JUMP lab_4ED0
// lab_4ED0
    pri = arg_2;
    OP_JZER lab_4FA8
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_4F78
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DA8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05C8(var_40)
    OP_JUMP lab_4FA8
// lab_4FA8
    pri = arg_3;
    OP_JZER lab_4FE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1058(var_8)
// lab_4FE0
    pri = 0;
    return pri;
// lab_4F78
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DA8(var_16, var_8)
// lab_4EA8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0FD0(var_16, var_8)
}
// fun_4FF0
fun_4FF0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4AB0(var_24)
    pri = 0;
    return pri;
}
// fun_5058
fun_5058() {
    pri = g_mode;
    switch (pri) {
// switch_5118
        case default:
        {
// switch_5118_case_default
            pri = CommandNOP()
            OP_JUMP lab_5160
// lab_5160
            pri = 0;
            return pri;
        }
        case 0xa6512122106dabec:
        {
// switch_5118_case_0xa6512122106dabec
            var_8 = 0;
            pri = fun_5810()
            OP_JUMP lab_5160
        }
        case 0x0:
        {
// switch_5118_case_0x0
            var_8 = 0;
            pri = fun_5170()
            OP_JUMP lab_5160
        }
        case 0x44127f1e5f950cc8:
        {
// switch_5118_case_0x44127f1e5f950cc8
            var_8 = 0;
            pri = fun_5900()
            OP_JUMP lab_5160
        }
    }
}
// fun_5170
fun_5170() {
    pri = 0;
    return pri;
}
// fun_5188
fun_5188() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_4CD8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_51E0
fun_51E0() {
    pri = 0;
    return pri;
}
// fun_51F8
fun_51F8() {
    pri = 0;
    return pri;
}
// fun_5210
fun_5210() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4662263553305083904, 4666780896827801600, 1003091793780467894
    var_24 = 48;
    pri = fun_0570(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 1;
    var_56 = 0;
    var_64 = 4641240890982006784;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH4_C 4661886420816756736, 4666781336632452710, 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_0600(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 0;
    OP_PUSH5_C 4661958394847910953, -4582926664525697516, 4666762694412803768, 4662488502389010596, 4610695226509366395
    var_120 = 4666932552466620744;
    var_128 = 1;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_1EE8()
    var_144 = 0;
    var_152 = 4631952216750555136;
    var_160 = 2;
    OP_PUSH5_C 4661989324110000292, -4582926664525697516, 4666738554635015946, 4662519442646216212, 4610695226509366395
    var_168 = 4666908407191274783;
    var_176 = 180;
    pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 10776;
    var_192 = 8;
    var_200 = 16;
    pri = fun_02A8(var_192, var_184)
    var_208 = 0;
    pri = fun_0378()
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_0678(var_216)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C -6416771001840365276, 1003091793780467894
    var_272 = 56;
    pri = fun_1968(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1B60(var_280)
    var_296 = 0;
    pri = fun_1C20()
    var_304 = 0;
    var_312 = 26;
    OP_PUSH2_C -695157726003846144, 1003091793780467894
    var_320 = 32;
    pri = fun_3F28(var_312, var_304, var_296, var_288)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    OP_PUSH2_C -6416767703305480643, 1003091793780467894
    var_368 = 56;
    pri = fun_1968(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_1B60(var_376)
    var_392 = 0;
    pri = fun_1C20()
    var_400 = 1;
    var_408 = 0;
    var_416 = 4641240890982006784;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH4_C 4662505445863194624, 4666780896827801600, 4607182418800017408, 1003091793780467894
    var_440 = 72;
    pri = fun_0600(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 1003091793780467894;
    var_456 = 8;
    pri = fun_0678(var_448)
    var_464 = 3;
    var_472 = 60;
    pri = EvCameraEnd(var_472, var_464)
    pri = 0;
    return pri;
}
// fun_56C0
fun_56C0() {
    pri = 0;
    return pri;
}
// fun_56D8
fun_56D8() {
    var_8 = 1003091793780467894;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 4639838440238230742;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 690;
    var_48 = 8;
    pri = fun_4FF0(var_40)
    var_56 = 8939762938985858608;
    pri = VanishFlagReset(var_56)
    var_64 = -9092457264898983630;
    pri = VanishFlagReset(var_64)
    var_72 = 3755852098630684190;
    pri = VanishFlagReset(var_72)
    pri = 0;
    return pri;
}
// fun_57D8
fun_57D8() {
    var_8 = 30;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_5810
fun_5810() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_5188()
    var_16 = 0;
    pri = fun_51E0()
    var_24 = 0;
    pri = fun_51F8()
    var_32 = 0;
    pri = fun_5210()
    var_40 = 0;
    pri = fun_56C0()
    var_48 = 0;
    pri = fun_56D8()
    var_56 = 0;
    pri = fun_57D8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_5900
fun_5900() {
    var_8 = 0;
    pri = fun_51E0()
    var_16 = 0;
    pri = fun_56D8()
    var_24 = 26;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
