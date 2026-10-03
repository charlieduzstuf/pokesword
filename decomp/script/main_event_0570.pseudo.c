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
// fun_0348
fun_0348() {
    OP_JUMP lab_0360
// lab_0360
    pri = FadeWait_()
    OP_JZER lab_0398
    pri = 0;
    return pri;
// lab_0398
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0360
    pri = 0;
    return pri;
}
// fun_03D8
fun_03D8() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0400
fun_0400() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0448
// lab_0448
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0488
    OP_JUMP lab_04F8
// lab_0488
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04C8
    OP_JUMP lab_04F8
// lab_04C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0448
// lab_04F8
    pri = 0;
    return pri;
}
// fun_0510
fun_0510() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0578
// lab_0578
    var_8 = 0;
    pri = fun_06C0()
    OP_JNZ lab_05B0
    OP_JUMP lab_05E0
// lab_05B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0578
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0610
// lab_0610
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0650
    pri = 0;
    return pri;
// lab_0650
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0610
    pri = 0;
    return pri;
}
// fun_0690
fun_0690() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06C0
fun_06C0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06E8
fun_06E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0778
fun_0778() {
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
// fun_07F0
fun_07F0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1688(var_8)
    OP_JZER lab_0910
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_16B8(var_24)
    OP_JNZ lab_0910
    pri = 0;
    return pri;
// lab_0910
    OP_JUMP lab_0920
// lab_0920
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0980
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0920
    pri = 0;
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AB8
    pri = 0;
    return pri;
// lab_0AB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AF8
// lab_0AF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1688(var_8)
    OP_JNZ lab_0B80
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B70
    pri = 0;
    return pri;
// lab_0B80
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BC8
    pri = 0;
    return pri;
// lab_0BC8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C70(var_8)
    pri = 0;
    return pri;
// lab_0C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AF8
    pri = 0;
    return pri;
// lab_0B70
    OP_JUMP lab_0BC8
}
// fun_0C70
fun_0C70() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CF8
    pri = 0;
    return pri;
// lab_0CF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1688(var_8)
    OP_JZER lab_0E28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D50
    OP_ZERO_P_S 64
// lab_0E28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E60
    OP_CONST_S 64, 1
// lab_0E60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E98
    OP_CONST_S 72, 1
// lab_0E98
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
// lab_0D50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D78
    OP_ZERO_P_S 72
// lab_0D78
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
    OP_JUMP lab_0F38
// lab_0F38
    pri = 0;
    return pri;
}
// fun_0F48
fun_0F48() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
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
// fun_1028
fun_1028() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_13E8
        case default:
        {
// switch_13E8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_13E8_case_0x0
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
            pri = fun_0FC8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13E8_case_default
        }
        case 0x1:
        {
// switch_13E8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FC8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_13E8_case_default
        }
        case 0x2:
        {
// switch_13E8_case_0x2
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
            pri = fun_0FC8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13E8_case_default
        }
        case 0x3:
        {
// switch_13E8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FC8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_13E8_case_default
        }
        case 0x4:
        {
// switch_13E8_case_0x4
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
            pri = fun_0FC8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_13E8_case_default
        }
        case 0x5:
        {
// switch_13E8_case_0x5
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
            pri = fun_0FC8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13E8_case_default
        }
        case 0x6:
        {
// switch_13E8_case_0x6
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
            pri = fun_0FC8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13E8_case_default
        }
        case 0x7:
        {
// switch_13E8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FC8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_13E8_case_default
        }
    }
}
// fun_1498
fun_1498() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14D8
fun_14D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1518
fun_1518() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_15C8
fun_15C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14D8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1550(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1630
fun_1630() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1518(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1590(var_24)
    pri = 0;
    return pri;
}
// fun_1688
fun_1688() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_16B8
fun_16B8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_16E8
fun_16E8() {
    OP_JUMP lab_1700
// lab_1700
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1790
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1780
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A70(var_8)
    pri = 0;
    return pri;
// lab_1790
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1820
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1810
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A70(var_8)
    pri = 0;
    return pri;
// lab_1820
    pri = 0;
    return pri;
// lab_1810
    OP_JUMP lab_1830
// lab_1830
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1700
    pri = 0;
    return pri;
// lab_1780
    OP_JUMP lab_1830
}
// fun_1870
fun_1870() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A70(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_16E8(var_40)
    pri = 0;
    return pri;
}
// fun_18F8
fun_18F8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1958
fun_1958() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1990
fun_1990() {
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
// switch_1FA8
        case default:
        {
// switch_1FA8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1FF0
// lab_1FF0
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
            OP_JNZ lab_2098
            var_88 = 0;
            pri = fun_2368()
// lab_2098
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1FA8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1B90
                case default:
                {
// switch_1B90_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C08
// lab_1C08
                    OP_JUMP lab_1FF0
                }
                case 0x0:
                {
// switch_1B90_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1C08
                }
                case 0x1:
                {
// switch_1B90_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1C08
                }
                case 0x2:
                {
// switch_1B90_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1C08
                }
                case 0x3:
                {
// switch_1B90_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C08
                }
                case 0x4:
                {
// switch_1B90_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1C08
                }
                case 0x5:
                {
// switch_1B90_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1C08
                }
            }
        }
        case 0x65:
        {
// switch_1FA8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1D48
                case default:
                {
// switch_1D48_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1DC0
// lab_1DC0
                    OP_JUMP lab_1FF0
                }
                case 0x0:
                {
// switch_1D48_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1DC0
                }
                case 0x1:
                {
// switch_1D48_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1DC0
                }
                case 0x2:
                {
// switch_1D48_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1DC0
                }
                case 0x3:
                {
// switch_1D48_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1DC0
                }
                case 0x4:
                {
// switch_1D48_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1DC0
                }
                case 0x5:
                {
// switch_1D48_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1DC0
                }
            }
        }
        case 0x66:
        {
// switch_1FA8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1F00
                case default:
                {
// switch_1F00_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F78
// lab_1F78
                    OP_JUMP lab_1FF0
                }
                case 0x0:
                {
// switch_1F00_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1F78
                }
                case 0x1:
                {
// switch_1F00_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1F78
                }
                case 0x2:
                {
// switch_1F00_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1F78
                }
                case 0x3:
                {
// switch_1F00_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F78
                }
                case 0x4:
                {
// switch_1F00_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1F78
                }
                case 0x5:
                {
// switch_1F00_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1F78
                }
            }
        }
    }
}
// fun_20B0
fun_20B0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1990(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2118
fun_2118() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A38(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_21C0
    pri = 1;
    return pri;
// lab_21C0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2208
fun_2208() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2258
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2118(var_8)
    arg_2 = pri;
// lab_2258
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1990(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22B8
fun_22B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_20B0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2308
fun_2308() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_22B8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2368
fun_2368() {
    OP_JUMP lab_2380
// lab_2380
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_23C0
    pri = 0;
    return pri;
// lab_23C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2380
    pri = 0;
    return pri;
}
// fun_2400
fun_2400() {
    var_8 = 0;
    pri = fun_2368()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_24B0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_24B0
    pri = 0;
    return pri;
}
// fun_24C0
fun_24C0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_24F0
fun_24F0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2520
// lab_2520
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2560
    OP_JUMP lab_2590
// lab_2560
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2520
// lab_2590
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25D8
fun_25D8() {
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
// fun_2648
fun_2648() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2680
fun_2680() {
    OP_JUMP lab_2698
// lab_2698
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_26E0
    OP_JUMP lab_2710
    OP_JUMP lab_2700
// lab_26E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2710
    pri = 0;
    return pri;
// lab_2700
    OP_JUMP lab_2698
}
// fun_2720
fun_2720() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2750
fun_2750() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27F0
fun_27F0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2840
fun_2840() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2890
fun_2890() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28E0
fun_28E0() {
    OP_JUMP lab_28F8
// lab_28F8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2930
    pri = 0;
    return pri;
// lab_2930
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_28F8
    pri = 0;
    return pri;
}
// fun_2970
fun_2970() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_29A8
fun_29A8() {
    pri = arg_6;
    OP_JNZ lab_29E0
    var_8 = 0;
    pri = fun_0F48()
// lab_29E0
    pri = arg_1;
    switch (pri) {
// switch_3F48
        case default:
        {
// switch_3F48_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4298
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4298
            pri = 1;
            OP_JUMP lab_42A0
// lab_4298
            pri = 0;
// lab_42A0
            OP_JZER lab_43F8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A38(var_24, var_16)
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
            OP_JUMP lab_4458
// lab_43F8
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
// lab_4458
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_44B8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4518
// lab_44B8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4518
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4518
            pri = arg_2;
            OP_JZER lab_4558
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4558
            var_8 = 0;
            pri = fun_0F88()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F48_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1:
        {
// switch_3F48_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x2:
        {
// switch_3F48_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x3:
        {
// switch_3F48_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x4:
        {
// switch_3F48_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x5:
        {
// switch_3F48_case_0x5
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x6:
        {
// switch_3F48_case_0x6
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x7:
        {
// switch_3F48_case_0x7
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x8:
        {
// switch_3F48_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x9:
        {
// switch_3F48_case_0x9
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xa:
        {
// switch_3F48_case_0xa
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xb:
        {
// switch_3F48_case_0xb
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xc:
        {
// switch_3F48_case_0xc
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xd:
        {
// switch_3F48_case_0xd
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xe:
        {
// switch_3F48_case_0xe
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0xf:
        {
// switch_3F48_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x10:
        {
// switch_3F48_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x11:
        {
// switch_3F48_case_0x11
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x12:
        {
// switch_3F48_case_0x12
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x13:
        {
// switch_3F48_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x14:
        {
// switch_3F48_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x15:
        {
// switch_3F48_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x16:
        {
// switch_3F48_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x17:
        {
// switch_3F48_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x18:
        {
// switch_3F48_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x19:
        {
// switch_3F48_case_0x19
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
            pri = fun_0CA8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1a:
        {
// switch_3F48_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09F8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09C0(var_48, var_40)
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
            pri = fun_0CA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1b:
        {
// switch_3F48_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09F8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09C0(var_48, var_40)
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
            pri = fun_0CA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1c:
        {
// switch_3F48_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09F8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09C0(var_48, var_40)
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
            pri = fun_0CA8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1d:
        {
// switch_3F48_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1e:
        {
// switch_3F48_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x1f:
        {
// switch_3F48_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x20:
        {
// switch_3F48_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x21:
        {
// switch_3F48_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x22:
        {
// switch_3F48_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x23:
        {
// switch_3F48_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x24:
        {
// switch_3F48_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x25:
        {
// switch_3F48_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x26:
        {
// switch_3F48_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x27:
        {
// switch_3F48_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x28:
        {
// switch_3F48_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
        case 0x29:
        {
// switch_3F48_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F48_case_default
        }
    }
}
// fun_4588
fun_4588() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4798(var_16, var_8)
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
    OP_JZER lab_4780
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_4780
    pri = 0;
    return pri;
}
// fun_4798
fun_4798() {
    var_8 = arg_1;
    var_16 = 8560;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_09F8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_47E0
fun_47E0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_4878
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A70(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_29A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_4878
    var_8 = 8;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_49D0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_4938
    var_24 = 8664;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_4938
    pri = 1;
    OP_JUMP lab_4940
// lab_49D0
    pri = 0;
    return pri;
// lab_4938
    pri = 0;
// lab_4940
    OP_JZER lab_49D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A70(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_29A8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_49E0
fun_49E0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_47E0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_4A68(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_4A68
fun_4A68() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_4E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4AD0
fun_4AD0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_4E50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4B38
fun_4B38() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_4BA8
    OP_CONST_S -8, 1
// lab_4BA8
    pri = arg_0;
    OP_JNZ lab_4BC8
    OP_ZERO_P_S -8
// lab_4BC8
    pri = var_8;
    OP_JZER lab_4C50
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 0;
    pri = fun_0168()
    pri = ItemCloseDescWindow()
// lab_4C50
    pri = 0;
    return pri;
}
// fun_4C68
fun_4C68() {
    var_8 = 8768;
    var_16 = 8;
    pri = fun_2648(var_8)
    var_24 = 0;
    pri = fun_2680()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2750(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2890(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_4D80
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_4D80
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_47E0(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_4AD0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2720()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2970(var_112)
    pri = 0;
    return pri;
}
// fun_4E50
fun_4E50() {
    var_8 = 8928;
    var_16 = 8;
    pri = fun_2648(var_8)
    var_24 = 0;
    pri = fun_2680()
    pri = arg_3;
    OP_JNZ lab_4F70
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_4F38
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_4FE0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_4F60
// lab_4F70
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5180(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_4F38
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_50A8(var_16, var_8)
// lab_4F60
    OP_JUMP lab_4FB8
// lab_4FB8
    var_8 = 0;
    pri = fun_2720()
    pri = 0;
    return pri;
}
// fun_4FE0
fun_4FE0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5180(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_5090
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_5090
    pri = 0;
    return pri;
}
// fun_50A8
fun_50A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_27A0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2308(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2400(var_72)
    var_88 = 0;
    pri = fun_24C0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2750(var_96)
    pri = 0;
    return pri;
}
// fun_5180
fun_5180() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_51C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_5488(var_8)
// lab_51C8
    pri = arg_4;
    OP_JNZ lab_5230
    var_8 = 0;
    var_16 = 8;
    pri = fun_2750(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_27A0(var_40, var_32, var_24)
// lab_5230
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_52D0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_27F0(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2308(var_56, var_48, var_40)
    OP_JUMP lab_53C0
// lab_52D0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_5388
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_5388
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_5388
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2308(var_24, var_16, var_8)
// lab_53C0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_5400
    var_8 = 0;
    var_16 = 8;
    pri = fun_0400(var_8)
// lab_5400
    var_8 = 1;
    var_16 = 8;
    pri = fun_2400(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_5690(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_4B38(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_5488
fun_5488() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_54E8
    var_16 = 9088;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_54E8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_5628
        case default:
        {
// switch_5628_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_5618
            var_16 = 9632;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_5618
            OP_JUMP lab_5660
// lab_5660
            var_8 = 9848;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_5628_case_0x1
            var_8 = 9304;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_5660
        }
        case 0x2:
        {
// switch_5628_case_0x2
            var_8 = 9432;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_5660
        }
    }
}
// fun_5690
fun_5690() {
    pri = arg_2;
    OP_JNZ lab_5778
    var_8 = 0;
    var_16 = 8;
    pri = fun_2750(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_27A0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2840(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_5778
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2308(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2400(var_40)
    var_56 = 0;
    pri = fun_24C0()
    pri = 0;
    return pri;
}
// fun_57F0
fun_57F0() {
    pri = 10032;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_5878
// lab_5878
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_59F8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_59E8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5938
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5938
    pri = 0;
    OP_JUMP lab_5940
// lab_59F8
    pri = 0;
    return pri;
// lab_59E8
    OP_JUMP lab_5870
// lab_5870
    OP_INC_P_S -936
// lab_5938
    pri = 1;
// lab_5940
    OP_JZER lab_59B8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_59B0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_59B8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_59B0
}
// fun_5A18
fun_5A18() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5AB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 10952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02D8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0348()
    var_56 = 0;
    pri = fun_1930()
// lab_5AB0
    pri = arg_4;
    OP_JZER lab_5AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1958(var_8)
// lab_5AE8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5B40
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5B40
    pri = 0;
    OP_JUMP lab_5B48
// lab_5B40
    pri = 1;
// lab_5B48
    OP_JZER lab_5C10
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5C10
    var_16 = 0;
    pri = fun_03D8()
    OP_JZER lab_5BE8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1870(var_32, var_24)
    OP_JUMP lab_5C10
// lab_5C10
    pri = arg_2;
    OP_JZER lab_5CE8
    var_8 = 0;
    pri = fun_03D8()
    OP_JZER lab_5CB8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1498(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0740(var_40)
    OP_JUMP lab_5CE8
// lab_5CE8
    pri = arg_3;
    OP_JZER lab_5D20
    var_8 = 1;
    var_16 = 8;
    pri = fun_18F8(var_8)
// lab_5D20
    pri = 0;
    return pri;
// lab_5CB8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1498(var_16, var_8)
// lab_5BE8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1870(var_16, var_8)
}
// fun_5D30
fun_5D30() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_57F0(var_24)
    pri = 0;
    return pri;
}
// fun_5D98
fun_5D98() {
    pri = g_mode;
    switch (pri) {
// switch_5E58
        case default:
        {
// switch_5E58_case_default
            pri = CommandNOP()
            OP_JUMP lab_5EA0
// lab_5EA0
            pri = 0;
            return pri;
        }
        case 0xbfbb30221ea9134a:
        {
// switch_5E58_case_0xbfbb30221ea9134a
            var_8 = 0;
            pri = fun_8598()
            OP_JUMP lab_5EA0
        }
        case 0x0:
        {
// switch_5E58_case_0x0
            var_8 = 0;
            pri = fun_5EB0()
            OP_JUMP lab_5EA0
        }
        case 0x5d97fe1e6de7fa2e:
        {
// switch_5E58_case_0x5d97fe1e6de7fa2e
            var_8 = 0;
            pri = fun_86A0()
            OP_JUMP lab_5EA0
        }
    }
}
// fun_5EB0
fun_5EB0() {
    pri = 0;
    return pri;
}
// fun_5EC8
fun_5EC8() {
    pri = 0;
    return pri;
}
// fun_5EE0
fun_5EE0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5A18(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5F38
fun_5F38() {
    pri = 0;
    return pri;
}
// fun_5F50
fun_5F50() {
    pri = 0;
    return pri;
}
// fun_5F68
fun_5F68() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    OP_PUSH2_C 4090159915399653913, -7459836055509795977
    var_56 = 48;
    pri = fun_0840(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C -7459836055509795977, 4090159915399653913
    var_96 = 48;
    pri = fun_0840(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 3;
    OP_PUSH5_C 4664229842934384558, 4647361388428719555, 4661617117433765560, 4664788592753387766, 4648816877941104312
    var_128 = 4662121705309984522;
    var_136 = 50;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 0;
    pri = fun_28E0()
    var_152 = 2;
    pri = SetCascadeShadowMapLevel(var_152)
    var_160 = 30;
    var_168 = 8;
    pri = fun_0090(var_160)
    var_176 = 0;
    var_184 = 4631952216750555136;
    var_192 = 0;
    OP_PUSH5_C 4664287314407168410, 4648098676945841029, 4661816755760020849, 4664292009321819013, 4648111343319793009
    var_200 = 4661838185241646203;
    var_208 = 1;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    pri = fun_28E0()
    var_224 = 11000;
    pri = SoundPostEvent(var_224)
    var_232 = 1;
    var_240 = 1;
    OP_PUSH4_C -4586275864904833434, 4664624974428058419, 4661968884188839936, 8802641224559852288
    var_248 = 48;
    pri = fun_06E8(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = -7459836055509795977;
    var_264 = 8;
    pri = fun_0898(var_256)
    var_272 = 10;
    var_280 = 8;
    pri = fun_0090(var_272)
    var_288 = 5;
    var_296 = 5;
    var_304 = -7459836055509795977;
    var_312 = 24;
    pri = fun_15C8(var_304, var_296, var_288)
    var_320 = 1;
    var_328 = 1;
    var_336 = 60;
    var_344 = 3;
    var_352 = -7459836055509795977;
    var_360 = 40;
    pri = fun_1028(var_352, var_344, var_336, var_328, var_320)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C 3792221430845265486, -7459836055509795977
    var_408 = 56;
    pri = fun_2208(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_2400(var_416)
    var_432 = 0;
    pri = fun_24C0()
    var_440 = 4090159915399653913;
    var_448 = 8;
    pri = fun_0898(var_440)
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 835;
    pri = SoundPlayPokeVoice(var_480, var_472, var_464, var_456)
    var_488 = 1;
    var_496 = -1;
    var_504 = -1;
    var_512 = 3;
    var_520 = 0;
    var_528 = 30;
    var_536 = 4090159915399653913;
    var_544 = 56;
    pri = fun_29A8(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C 995126975563368978, 4090159915399653913
    var_592 = 56;
    pri = fun_2208(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 4090159915399653913;
    var_608 = 8;
    pri = fun_0A70(var_600)
    var_616 = 1;
    var_624 = 8;
    pri = fun_2400(var_616)
    var_632 = 0;
    pri = fun_24C0()
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH2_C 8802641224559852288, -7459836055509795977
    var_672 = 48;
    pri = fun_0840(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 0;
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    OP_PUSH2_C 8802641224559852288, 4090159915399653913
    var_712 = 48;
    pri = fun_0840(var_704, var_696, var_688, var_680, var_672, var_664)
    var_720 = 1;
    var_728 = 0;
    var_736 = 4641240890982006784;
    var_744 = 0;
    var_752 = 0;
    OP_PUSH4_C 4664466864655984230, 4661818251095834624, 4607182418800017408, 8802641224559852288
    var_760 = 72;
    pri = fun_0778(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 0;
    var_776 = 4631952216750555136;
    var_784 = 3;
    OP_PUSH5_C 4664386534336458916, 4648098676945841029, 4661795040405372273, 4664437353763894723, 4648236423762568806
    var_792 = 4662027202285577175;
    var_800 = 40;
    pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 0;
    pri = fun_28E0()
    var_816 = -7459836055509795977;
    var_824 = 8;
    pri = fun_0898(var_816)
    var_832 = 4090159915399653913;
    var_840 = 8;
    pri = fun_0898(var_832)
    var_848 = -1;
    var_856 = -7459836055509795977;
    var_864 = 16;
    pri = fun_1498(var_856, var_848)
    var_872 = 0;
    var_880 = 1;
    var_888 = -7459836055509795977;
    var_896 = 24;
    pri = fun_4588(var_888, var_880, var_872)
    var_904 = 1;
    var_912 = 8;
    pri = fun_0090(var_904)
    var_920 = -7459836055509795977;
    var_928 = 8;
    pri = fun_0A70(var_920)
    var_936 = -7459836055509795977;
    var_944 = 8;
    pri = fun_1630(var_936)
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 100;
    var_984 = -1;
    OP_PUSH2_C 3792220331333637275, -7459836055509795977
    var_992 = 56;
    pri = fun_2208(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 8;
    pri = fun_2400(var_1000)
    var_1016 = 0;
    pri = fun_24C0()
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = -7459836055509795977;
    var_1048 = 24;
    pri = fun_4588(var_1040, var_1032, var_1024)
    var_1056 = 1;
    var_1064 = 8;
    pri = fun_0090(var_1056)
    var_1072 = -7459836055509795977;
    var_1080 = 8;
    pri = fun_0A70(var_1072)
    var_1088 = 1;
    var_1096 = 0;
    var_1104 = 4641240890982006784;
    var_1112 = 0;
    var_1120 = 0;
    OP_PUSH4_C 4664035966049058816, 4661065085630808064, 4607182418800017408, -7459836055509795977
    var_1128 = 72;
    pri = fun_0778(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1136 = 1;
    var_1144 = 0;
    var_1152 = 4641240890982006784;
    var_1160 = 0;
    var_1168 = 0;
    OP_PUSH4_C 4664172305490903040, 4661093672933130240, 4607182418800017408, 4090159915399653913
    var_1176 = 72;
    pri = fun_0778(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1184 = 30;
    var_1192 = 8;
    pri = fun_0090(var_1184)
    var_1200 = 0;
    pri = fun_28E0()
    var_1208 = 8802641224559852288;
    var_1216 = 8;
    pri = fun_0898(var_1208)
    var_1224 = 1;
    var_1232 = 0;
    var_1240 = 4641240890982006784;
    var_1248 = 0;
    var_1256 = 0;
    OP_PUSH4_C 4664305236446701158, 4661075860844760269, 4607182418800017408, 8802641224559852288
    var_1264 = 72;
    pri = fun_0778(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1272 = 40;
    var_1280 = 8;
    pri = fun_0090(var_1272)
    var_1288 = 0;
    var_1296 = 4631952216750555136;
    var_1304 = 0;
    OP_PUSH5_C 4664144234959045919, 4649158606155017093, 4660431591011348644, 4664153580807882015, 4649166874482457969
    var_1312 = 4660471371342041580;
    var_1320 = 1;
    pri = EvCameraMove(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1328 = 0;
    pri = fun_28E0()
    var_1336 = 0;
    var_1344 = 4631952216750555136;
    var_1352 = 0;
    OP_PUSH5_C 4663852325616987668, 4649423632437776220, 4659188615106380431, 4663861671465823764, 4649431812804286874
    var_1360 = 4659228395437073367;
    var_1368 = 1000;
    pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1376 = 40;
    var_1384 = 8;
    pri = fun_0090(var_1376)
    var_1392 = 0;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 100;
    var_1424 = -1;
    OP_PUSH2_C 3792219231822009064, -7459836055509795977
    var_1432 = 56;
    pri = fun_2208(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_2400(var_1440)
    var_1456 = 0;
    var_1464 = 1834065060544345830;
    var_1472 = 0;
    var_1480 = 24;
    pri = fun_24F0(var_1472, var_1464, var_1456)
    var_1488 = 0;
    var_1496 = 1834063961032717619;
    var_1504 = 1;
    var_1512 = 24;
    pri = fun_24F0(var_1504, var_1496, var_1488)
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 1;
    var_1560 = 32;
    pri = fun_25D8(var_1552, var_1544, var_1536, var_1528)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7560
        case default:
        {
// switch_7560_case_default
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = -112;
            pri = float(var_32)
            var_40 = pri;
            var_48 = 8802641224559852288;
            var_56 = 40;
            pri = fun_07F0(var_48, var_40, var_32, var_24, var_16)
            var_64 = 0;
            var_72 = 0;
            var_80 = 0;
            var_88 = -115;
            pri = float(var_88)
            var_96 = pri;
            var_104 = -7459836055509795977;
            var_112 = 40;
            pri = fun_07F0(var_104, var_96, var_88, var_80, var_72)
            var_120 = 8802641224559852288;
            var_128 = 8;
            pri = fun_0898(var_120)
            var_136 = -7459836055509795977;
            var_144 = 8;
            pri = fun_0898(var_136)
            var_152 = 0;
            var_160 = 4631952216750555136;
            var_168 = 0;
            OP_PUSH5_C 4664315901709490586, 4650873580411556987, 4658653240904583741, 4664326413040652124, 4650890644832020070
            var_176 = 4658691635850625679;
            var_184 = 1;
            pri = EvCameraMove(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_192 = 0;
            pri = fun_28E0()
            var_200 = 0;
            var_208 = 4631952216750555136;
            var_216 = 0;
            OP_PUSH5_C 4663374334927044608, 4650873580411556987, 4659684296938414408, 4663384846258206147, 4650890644832020070
            var_224 = 4659722691884456346;
            var_232 = 500;
            pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_240 = 30;
            var_248 = 8;
            pri = fun_0090(var_240)
            var_256 = 0;
            var_264 = 3;
            var_272 = 0;
            var_280 = 100;
            var_288 = -1;
            OP_PUSH2_C 3792224729380150119, -7459836055509795977
            var_296 = 56;
            pri = fun_2208(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
            var_304 = 1;
            var_312 = 8;
            pri = fun_2400(var_304)
            var_320 = 0;
            pri = fun_24C0()
            var_328 = 0;
            var_336 = 4628349337048658739;
            var_344 = 0;
            OP_PUSH5_C 4663928862621397156, 4648892876184816189, 4660095822150458409, 4663926454690932326, 4648941606540159222
            var_352 = 4660053886776975032;
            var_360 = 1;
            pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
            var_368 = 0;
            pri = fun_28E0()
            var_376 = 7;
            var_384 = 4;
            var_392 = -7459836055509795977;
            var_400 = 24;
            pri = fun_15C8(var_392, var_384, var_376)
            var_408 = 0;
            var_416 = 2;
            var_424 = -7459836055509795977;
            var_432 = 24;
            pri = fun_4588(var_424, var_416, var_408)
            var_440 = 1;
            var_448 = 8;
            pri = fun_0090(var_440)
            var_456 = -7459836055509795977;
            var_464 = 8;
            pri = fun_0A70(var_456)
            var_472 = 10;
            var_480 = 8;
            pri = fun_0090(var_472)
            var_488 = 0;
            var_496 = 3;
            var_504 = 0;
            var_512 = 100;
            var_520 = -1;
            OP_PUSH2_C 3792223629868521908, -7459836055509795977
            var_528 = 56;
            pri = fun_2208(var_520, var_512, var_504, var_496, var_488, var_480, var_472)
            var_536 = 1;
            var_544 = 8;
            pri = fun_2400(var_536)
            var_552 = 0;
            pri = fun_24C0()
            var_560 = -7459836055509795977;
            var_568 = 8;
            pri = fun_1630(var_560)
            var_576 = 0;
            var_584 = 0;
            var_592 = -7459836055509795977;
            var_600 = 24;
            pri = fun_4588(var_592, var_584, var_576)
            var_608 = 1;
            var_616 = 8;
            pri = fun_0090(var_608)
            var_624 = -7459836055509795977;
            var_632 = 8;
            pri = fun_0A70(var_624)
            var_640 = 0;
            var_648 = 4631952216750555136;
            var_656 = 0;
            OP_PUSH5_C 4664128445972071055, 4648235104348615475, 4660521201209012388, 4664235747311825715, 4648438294097428480
            var_664 = 4660759619310379336;
            var_672 = 1;
            pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
            var_680 = 0;
            pri = fun_28E0()
            var_688 = 0;
            var_696 = 0;
            var_704 = 0;
            var_712 = 0;
            OP_PUSH2_C -7459836055509795977, 8802641224559852288
            var_720 = 48;
            pri = fun_0840(var_712, var_704, var_696, var_688, var_680, var_672)
            var_728 = 0;
            var_736 = 0;
            var_744 = 0;
            var_752 = 0;
            OP_PUSH2_C 8802641224559852288, -7459836055509795977
            var_760 = 48;
            pri = fun_0840(var_752, var_744, var_736, var_728, var_720, var_712)
            var_768 = 0;
            var_776 = 0;
            var_784 = 0;
            var_792 = 0;
            OP_PUSH2_C -7459836055509795977, 4090159915399653913
            var_800 = 48;
            pri = fun_0840(var_792, var_784, var_776, var_768, var_760, var_752)
            var_808 = 5;
            var_816 = -7459836055509795977;
            var_824 = 16;
            pri = fun_14D8(var_816, var_808)
            var_832 = 0;
            var_840 = 3;
            var_848 = 0;
            var_856 = 100;
            var_864 = -1;
            OP_PUSH2_C 3792213734263868009, -7459836055509795977
            var_872 = 56;
            pri = fun_2208(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
            var_880 = 4090159915399653913;
            var_888 = 8;
            pri = fun_0898(var_880)
            var_896 = 1;
            var_904 = 8;
            pri = fun_2400(var_896)
            var_912 = 0;
            pri = fun_24C0()
            var_920 = 8802641224559852288;
            var_928 = 8;
            pri = fun_0898(var_920)
            var_936 = -7459836055509795977;
            var_944 = 8;
            pri = fun_0898(var_936)
            var_952 = 0;
            var_960 = 4;
            OP_PUSH2_C 2554447132918045699, -7459836055509795977
            var_968 = 32;
            pri = fun_4C68(var_960, var_952, var_944, var_936)
            var_976 = 4;
            var_984 = 6;
            var_992 = -7459836055509795977;
            var_1000 = 24;
            pri = fun_15C8(var_992, var_984, var_976)
            var_1008 = 0;
            var_1016 = 1;
            var_1024 = -7459836055509795977;
            var_1032 = 24;
            pri = fun_4588(var_1024, var_1016, var_1008)
            var_1040 = 1;
            var_1048 = 8;
            pri = fun_0090(var_1040)
            var_1056 = 0;
            var_1064 = 0;
            var_1072 = 0;
            var_1080 = 0;
            OP_PUSH2_C 8802641224559852288, 4090159915399653913
            var_1088 = 48;
            pri = fun_0840(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
            var_1096 = 0;
            var_1104 = 3;
            var_1112 = 0;
            var_1120 = 100;
            var_1128 = -1;
            OP_PUSH2_C 3792212634752239798, -7459836055509795977
            var_1136 = 56;
            pri = fun_2208(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
            var_1144 = -7459836055509795977;
            var_1152 = 8;
            pri = fun_0A70(var_1144)
            var_1160 = 4090159915399653913;
            var_1168 = 8;
            pri = fun_0898(var_1160)
            var_1176 = 1;
            var_1184 = 8;
            pri = fun_2400(var_1176)
            var_1192 = 0;
            pri = fun_24C0()
            var_1200 = -7459836055509795977;
            var_1208 = 8;
            pri = fun_1630(var_1200)
            var_1216 = 0;
            var_1224 = 0;
            var_1232 = 0;
            var_1240 = 0;
            OP_PUSH2_C -7459836055509795977, 4090159915399653913
            var_1248 = 48;
            pri = fun_0840(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
            var_1256 = 6;
            var_1264 = 4;
            var_1272 = 2;
            var_1280 = 1;
            var_1288 = 9;
            var_1296 = 2;
            var_1304 = 28;
            var_1312 = -7459836055509795977;
            var_1320 = 64;
            pri = fun_49E0(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
            var_1328 = 4090159915399653913;
            var_1336 = 8;
            pri = fun_0898(var_1328)
            var_1344 = 0;
            var_1352 = 0;
            var_1360 = -7459836055509795977;
            var_1368 = 24;
            pri = fun_4588(var_1360, var_1352, var_1344)
            var_1376 = 1;
            var_1384 = 8;
            pri = fun_0090(var_1376)
            var_1392 = 0;
            var_1400 = 0;
            var_1408 = 0;
            var_1416 = 0;
            OP_PUSH2_C 8802641224559852288, 4090159915399653913
            var_1424 = 48;
            pri = fun_0840(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
            var_1432 = 0;
            var_1440 = 3;
            var_1448 = 0;
            var_1456 = 100;
            var_1464 = -1;
            OP_PUSH2_C 3791230770868436600, -7459836055509795977
            var_1472 = 56;
            pri = fun_2208(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
            var_1480 = 4090159915399653913;
            var_1488 = 8;
            pri = fun_0898(var_1480)
            var_1496 = -7459836055509795977;
            var_1504 = 8;
            pri = fun_0A70(var_1496)
            var_1512 = 1;
            var_1520 = 8;
            pri = fun_2400(var_1512)
            var_1528 = 0;
            pri = fun_24C0()
            var_1536 = 0;
            var_1544 = 1;
            var_1552 = 0;
            var_1560 = 835;
            pri = SoundPlayPokeVoice(var_1560, var_1552, var_1544, var_1536)
            var_1568 = 1;
            var_1576 = -1;
            var_1584 = -1;
            var_1592 = 3;
            var_1600 = 0;
            var_1608 = 30;
            var_1616 = 4090159915399653913;
            var_1624 = 56;
            pri = fun_29A8(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
            var_1632 = 1;
            pri = SetCascadeShadowMapLevel(var_1632)
            var_1640 = 4090159915399653913;
            var_1648 = 8;
            pri = fun_0A70(var_1640)
            var_1656 = 11160;
            pri = SoundPostEvent(var_1656)
            var_1664 = 3;
            var_1672 = 40;
            pri = EvCameraEnd(var_1672, var_1664)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_7560_case_0x0
            var_8 = 0;
            pri = fun_24C0()
            var_16 = 15;
            var_24 = 8;
            pri = fun_0090(var_16)
            var_32 = 8802641224559852288;
            var_40 = 8;
            pri = fun_0898(var_32)
            var_48 = 4090159915399653913;
            var_56 = 8;
            pri = fun_0898(var_48)
            var_64 = -7459836055509795977;
            var_72 = 8;
            pri = fun_0898(var_64)
            var_80 = 1;
            var_88 = 1;
            OP_PUSH4_C -4584453314430631936, 4664151304818812518, 4660425609668093542, 8802641224559852288
            var_96 = 48;
            pri = fun_06E8(var_88, var_80, var_72, var_64, var_56, var_48)
            var_104 = 1;
            var_112 = 1;
            OP_PUSH4_C -4587662129165133414, 4663951303653720064, 4660343806002987008, -7459836055509795977
            var_120 = 48;
            pri = fun_06E8(var_112, var_104, var_96, var_88, var_80, var_72)
            var_128 = 1;
            var_136 = 1;
            OP_PUSH4_C -4586318086151340032, 4664035966049058816, 4660367995258798080, 4090159915399653913
            var_144 = 48;
            pri = fun_06E8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_152 = 5;
            var_160 = 8;
            pri = fun_0090(var_152)
            var_168 = 0;
            var_176 = 4631952216750555136;
            var_184 = 0;
            OP_PUSH5_C 4664128445972071055, 4648235104348615475, 4660521201209012388, 4664235747311825715, 4648438294097428480
            var_192 = 4660759619310379336;
            var_200 = 1;
            pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_208 = 0;
            pri = fun_28E0()
            var_216 = 0;
            var_224 = 0;
            var_232 = 0;
            var_240 = 0;
            OP_PUSH2_C -7459836055509795977, 8802641224559852288
            var_248 = 48;
            pri = fun_0840(var_240, var_232, var_224, var_216, var_208, var_200)
            var_256 = 0;
            var_264 = 0;
            var_272 = 0;
            var_280 = 0;
            OP_PUSH2_C 8802641224559852288, -7459836055509795977
            var_288 = 48;
            pri = fun_0840(var_280, var_272, var_264, var_256, var_248, var_240)
            var_296 = 8802641224559852288;
            var_304 = 8;
            pri = fun_0898(var_296)
            var_312 = -7459836055509795977;
            var_320 = 8;
            pri = fun_0898(var_312)
            var_328 = 5;
            var_336 = 5;
            var_344 = -7459836055509795977;
            var_352 = 24;
            pri = fun_15C8(var_344, var_336, var_328)
            var_360 = 0;
            var_368 = 3;
            var_376 = 0;
            var_384 = 100;
            var_392 = -1;
            OP_PUSH2_C 3792226928403406541, -7459836055509795977
            var_400 = 56;
            pri = fun_2208(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
            var_408 = 1;
            var_416 = 8;
            pri = fun_2400(var_408)
            var_424 = 0;
            pri = fun_24C0()
            OP_JUMP switch_7560_case_default
        }
        case 0x1:
        {
// switch_7560_case_0x1
            var_8 = 0;
            pri = fun_24C0()
            var_16 = 15;
            var_24 = 8;
            pri = fun_0090(var_16)
            var_32 = 8802641224559852288;
            var_40 = 8;
            pri = fun_0898(var_32)
            var_48 = 4090159915399653913;
            var_56 = 8;
            pri = fun_0898(var_48)
            var_64 = -7459836055509795977;
            var_72 = 8;
            pri = fun_0898(var_64)
            var_80 = 1;
            var_88 = 1;
            OP_PUSH4_C -4584453314430631936, 4664151304818812518, 4660425609668093542, 8802641224559852288
            var_96 = 48;
            pri = fun_06E8(var_88, var_80, var_72, var_64, var_56, var_48)
            var_104 = 1;
            var_112 = 1;
            OP_PUSH4_C -4587662129165133414, 4663951303653720064, 4660343806002987008, -7459836055509795977
            var_120 = 48;
            pri = fun_06E8(var_112, var_104, var_96, var_88, var_80, var_72)
            var_128 = 1;
            var_136 = 1;
            OP_PUSH4_C -4586318086151340032, 4664035966049058816, 4660367995258798080, 4090159915399653913
            var_144 = 48;
            pri = fun_06E8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_152 = 5;
            var_160 = 8;
            pri = fun_0090(var_152)
            var_168 = 0;
            var_176 = 4631952216750555136;
            var_184 = 0;
            OP_PUSH5_C 4664128445972071055, 4648235104348615475, 4660521201209012388, 4664235747311825715, 4648438294097428480
            var_192 = 4660759619310379336;
            var_200 = 1;
            pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_208 = 0;
            pri = fun_28E0()
            var_216 = 0;
            var_224 = 0;
            var_232 = 0;
            var_240 = 0;
            OP_PUSH2_C -7459836055509795977, 8802641224559852288
            var_248 = 48;
            pri = fun_0840(var_240, var_232, var_224, var_216, var_208, var_200)
            var_256 = 0;
            var_264 = 0;
            var_272 = 0;
            var_280 = 0;
            OP_PUSH2_C 8802641224559852288, -7459836055509795977
            var_288 = 48;
            pri = fun_0840(var_280, var_272, var_264, var_256, var_248, var_240)
            var_296 = 8802641224559852288;
            var_304 = 8;
            pri = fun_0898(var_296)
            var_312 = -7459836055509795977;
            var_320 = 8;
            pri = fun_0898(var_312)
            var_328 = 7;
            var_336 = 7;
            var_344 = -7459836055509795977;
            var_352 = 24;
            pri = fun_15C8(var_344, var_336, var_328)
            var_360 = 0;
            var_368 = 3;
            var_376 = 0;
            var_384 = 100;
            var_392 = -1;
            OP_PUSH2_C 3792225828891778330, -7459836055509795977
            var_400 = 56;
            pri = fun_2208(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
            var_408 = 1;
            var_416 = 8;
            pri = fun_2400(var_408)
            var_424 = 0;
            pri = fun_24C0()
            OP_JUMP switch_7560_case_default
        }
    }
}
// fun_83A8
fun_83A8() {
    pri = 0;
    return pri;
}
// fun_83C0
fun_83C0() {
    var_8 = -3179587887033667580;
    var_16 = 8;
    pri = fun_0690(var_8)
    var_24 = -250553440047947672;
    var_32 = 8;
    pri = fun_0690(var_24)
    var_40 = -6122690397587844693;
    var_48 = 8;
    pri = fun_0510(var_40)
    var_56 = -8841775824226766142;
    var_64 = 8;
    pri = fun_0510(var_56)
    var_72 = 6881706800470684488;
    var_80 = 8;
    pri = fun_0510(var_72)
    var_88 = 2644627691611413877;
    var_96 = 8;
    pri = fun_0510(var_88)
    var_104 = 580;
    var_112 = 8;
    pri = fun_5D30(var_104)
    var_120 = 2;
    var_128 = 28;
    pri = ItemAdd(var_128, var_120)
    var_136 = -6545106538387740112;
    pri = FlagSet(var_136)
    pri = 0;
    return pri;
}
// fun_8538
fun_8538() {
    var_8 = 0;
    pri = fun_0540()
    OP_PUSH2_C 7983844220748856187, -2911056041347937427
    pri = SetBamiriInfoToChara(var_8, var_0)
    pri = 0;
    return pri;
}
// fun_8598
fun_8598() {
    var_8 = 0;
    pri = fun_5EC8()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_5EE0()
    var_24 = 0;
    pri = fun_5F38()
    var_32 = 0;
    pri = fun_5F50()
    var_40 = 0;
    pri = fun_5F68()
    var_48 = 0;
    pri = fun_83A8()
    var_56 = 0;
    pri = fun_83C0()
    var_64 = 0;
    pri = fun_8538()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_86A0
fun_86A0() {
    var_8 = 0;
    pri = fun_5F38()
    var_16 = 0;
    pri = fun_83C0()
    var_24 = 4;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
