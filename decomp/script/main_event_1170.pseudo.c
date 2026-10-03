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
    OP_ZERO_P_S -8
    OP_JUMP lab_0198
// lab_0198
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0298
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0218
    pri = 0;
    return pri;
// lab_0298
    pri = 0;
    return pri;
// lab_0218
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
    OP_JUMP lab_0190
// lab_0190
    OP_INC_P_S -8
}
// fun_02B0
fun_02B0() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0310
fun_0310() {
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
// fun_0380
fun_0380() {
    OP_JUMP lab_0398
// lab_0398
    pri = FadeWait_()
    OP_JZER lab_03D0
    pri = 0;
    return pri;
// lab_03D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0398
    pri = 0;
    return pri;
}
// fun_0410
fun_0410() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0468
fun_0468() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_04A0
// lab_04A0
    var_8 = 0;
    pri = fun_05E8()
    OP_JNZ lab_04D8
    OP_JUMP lab_0508
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A0
// lab_0508
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0538
// lab_0538
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0578
    pri = 0;
    return pri;
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0538
    pri = 0;
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0610
fun_0610() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06D8
fun_06D8() {
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
// fun_0750
fun_0750() {
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    pri = GetAnglePositionToFieldObject_(var_32, var_24, var_16)
    var_8 = pri;
    var_40 = 0;
    var_48 = arg_7;
    var_56 = arg_5;
    var_64 = arg_6;
    var_72 = var_8;
    var_80 = 1;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    pri = StartForceMove_(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1700(var_8)
    OP_JZER lab_0930
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1730(var_24)
    OP_JNZ lab_0930
    pri = 0;
    return pri;
// lab_0930
    OP_JUMP lab_0940
// lab_0940
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09A0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0940
    pri = 0;
    return pri;
}
// fun_09E0
fun_09E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B18
// lab_0B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1700(var_8)
    OP_JNZ lab_0BA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B90
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_0C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B18
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BE8
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D18
    pri = 0;
    return pri;
// lab_0D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1700(var_8)
    OP_JZER lab_0E48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D70
    OP_ZERO_P_S 64
// lab_0E48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E80
    OP_CONST_S 64, 1
// lab_0E80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB8
    OP_CONST_S 72, 1
// lab_0EB8
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
// lab_0D70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D98
    OP_ZERO_P_S 72
// lab_0D98
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
    OP_JUMP lab_0F58
// lab_0F58
    pri = 0;
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
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
// fun_10A0
fun_10A0() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1460
        case default:
        {
// switch_1460_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1460_case_0x0
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x1:
        {
// switch_1460_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1040(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1460_case_default
        }
        case 0x2:
        {
// switch_1460_case_0x2
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x3:
        {
// switch_1460_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1040(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1460_case_default
        }
        case 0x4:
        {
// switch_1460_case_0x4
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
            pri = fun_1040(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1460_case_default
        }
        case 0x5:
        {
// switch_1460_case_0x5
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x6:
        {
// switch_1460_case_0x6
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x7:
        {
// switch_1460_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1040(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1460_case_default
        }
    }
}
// fun_1510
fun_1510() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_15C8
fun_15C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1550(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_15C8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1590(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1608(var_24)
    pri = 0;
    return pri;
}
// fun_1700
fun_1700() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1730
fun_1730() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1760
fun_1760() {
    OP_JUMP lab_1778
// lab_1778
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1808
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_17F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1808
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1898
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1888
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1898
    pri = 0;
    return pri;
// lab_1888
    OP_JUMP lab_18A8
// lab_18A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1778
    pri = 0;
    return pri;
// lab_17F8
    OP_JUMP lab_18A8
}
// fun_18E8
fun_18E8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1760(var_40)
    pri = 0;
    return pri;
}
// fun_1970
fun_1970() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_19A8
fun_19A8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_19D0
fun_19D0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1A08
fun_1A08() {
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
// switch_2020
        case default:
        {
// switch_2020_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2068
// lab_2068
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
            OP_JNZ lab_2110
            var_88 = 0;
            pri = fun_23F8()
// lab_2110
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2020_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1C08
                case default:
                {
// switch_1C08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C80
// lab_1C80
                    OP_JUMP lab_2068
                }
                case 0x0:
                {
// switch_1C08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1C80
                }
                case 0x1:
                {
// switch_1C08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1C80
                }
                case 0x2:
                {
// switch_1C08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1C80
                }
                case 0x3:
                {
// switch_1C08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1C80
                }
                case 0x4:
                {
// switch_1C08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1C80
                }
                case 0x5:
                {
// switch_1C08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1C80
                }
            }
        }
        case 0x65:
        {
// switch_2020_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1DC0
                case default:
                {
// switch_1DC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E38
// lab_1E38
                    OP_JUMP lab_2068
                }
                case 0x0:
                {
// switch_1DC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1E38
                }
                case 0x1:
                {
// switch_1DC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1E38
                }
                case 0x2:
                {
// switch_1DC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1E38
                }
                case 0x3:
                {
// switch_1DC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E38
                }
                case 0x4:
                {
// switch_1DC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1E38
                }
                case 0x5:
                {
// switch_1DC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1E38
                }
            }
        }
        case 0x66:
        {
// switch_2020_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1F78
                case default:
                {
// switch_1F78_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1FF0
// lab_1FF0
                    OP_JUMP lab_2068
                }
                case 0x0:
                {
// switch_1F78_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1FF0
                }
                case 0x1:
                {
// switch_1F78_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1FF0
                }
                case 0x2:
                {
// switch_1F78_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1FF0
                }
                case 0x3:
                {
// switch_1F78_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1FF0
                }
                case 0x4:
                {
// switch_1F78_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1FF0
                }
                case 0x5:
                {
// switch_1F78_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1FF0
                }
            }
        }
    }
}
// fun_2128
fun_2128() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1A08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2190
fun_2190() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2238
    pri = 1;
    return pri;
// lab_2238
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2280
fun_2280() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_22D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2190(var_8)
    arg_2 = pri;
// lab_22D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2330
fun_2330() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2380
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2190(var_8)
    arg_2 = pri;
// lab_2380
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_2280(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F8
fun_23F8() {
    OP_JUMP lab_2410
// lab_2410
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2450
    pri = 0;
    return pri;
// lab_2450
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2410
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    var_8 = 0;
    pri = fun_23F8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2540
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2540
    pri = 0;
    return pri;
}
// fun_2550
fun_2550() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2580
fun_2580() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_25B0
// lab_25B0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_25F0
    OP_JUMP lab_2620
// lab_25F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25B0
// lab_2620
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
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
// fun_26D8
fun_26D8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2710
fun_2710() {
    OP_JUMP lab_2728
// lab_2728
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2770
    OP_JUMP lab_27A0
    OP_JUMP lab_2790
// lab_2770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_27A0
    pri = 0;
    return pri;
// lab_2790
    OP_JUMP lab_2728
}
// fun_27B0
fun_27B0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_27E0
fun_27E0() {
    OP_JUMP lab_27F8
// lab_27F8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2830
    pri = 0;
    return pri;
// lab_2830
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27F8
    pri = 0;
    return pri;
}
// fun_2870
fun_2870() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 0;
    var_88 = 4607182418800017408;
    var_96 = 0;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2908
fun_2908() {
    pri = EvCameraShakeEnd()
    var_8 = arg_0;
    pri = EvCameraHandShakeEnd(var_8)
    pri = 0;
    return pri;
}
// fun_2958
fun_2958() {
    pri = arg_6;
    OP_JNZ lab_2990
    var_8 = 0;
    pri = fun_0F68()
// lab_2990
    pri = arg_1;
    switch (pri) {
// switch_3EF8
        case default:
        {
// switch_3EF8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4248
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4248
            pri = 1;
            OP_JUMP lab_4250
// lab_4248
            pri = 0;
// lab_4250
            OP_JZER lab_43A8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            OP_JUMP lab_4408
// lab_43A8
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
            pri = fun_0168(var_16, var_8, var_0)
// lab_4408
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4468
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_44C8
// lab_4468
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_44C8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_44C8
            pri = arg_2;
            OP_JZER lab_4508
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4508
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3EF8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1:
        {
// switch_3EF8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x2:
        {
// switch_3EF8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x3:
        {
// switch_3EF8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x4:
        {
// switch_3EF8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x5:
        {
// switch_3EF8_case_0x5
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x6:
        {
// switch_3EF8_case_0x6
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x7:
        {
// switch_3EF8_case_0x7
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x8:
        {
// switch_3EF8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x9:
        {
// switch_3EF8_case_0x9
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0xa:
        {
// switch_3EF8_case_0xa
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0xb:
        {
// switch_3EF8_case_0xb
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0xc:
        {
// switch_3EF8_case_0xc
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0xd:
        {
// switch_3EF8_case_0xd
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0xe:
        {
// switch_3EF8_case_0xe
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0xf:
        {
// switch_3EF8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x10:
        {
// switch_3EF8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x11:
        {
// switch_3EF8_case_0x11
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x12:
        {
// switch_3EF8_case_0x12
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x13:
        {
// switch_3EF8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x14:
        {
// switch_3EF8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x15:
        {
// switch_3EF8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x16:
        {
// switch_3EF8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x17:
        {
// switch_3EF8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x18:
        {
// switch_3EF8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x19:
        {
// switch_3EF8_case_0x19
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1a:
        {
// switch_3EF8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
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
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1b:
        {
// switch_3EF8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
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
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1c:
        {
// switch_3EF8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
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
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1d:
        {
// switch_3EF8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1e:
        {
// switch_3EF8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x1f:
        {
// switch_3EF8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x20:
        {
// switch_3EF8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x21:
        {
// switch_3EF8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x22:
        {
// switch_3EF8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x23:
        {
// switch_3EF8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x24:
        {
// switch_3EF8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x25:
        {
// switch_3EF8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x26:
        {
// switch_3EF8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x27:
        {
// switch_3EF8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x28:
        {
// switch_3EF8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
        case 0x29:
        {
// switch_3EF8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3EF8_case_default
        }
    }
}
// fun_4538
fun_4538() {
    pri = arg_5;
    OP_JNZ lab_4570
    var_8 = 0;
    pri = fun_0F68()
// lab_4570
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_45C0
    OP_CONST_S -8, -1
// lab_45C0
    pri = arg_1;
    switch (pri) {
// switch_6078
        case default:
        {
// switch_6078_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6520
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6520
            pri = 1;
            OP_JUMP lab_6528
// lab_6520
            pri = 0;
// lab_6528
            OP_JZER lab_6578
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_67D0
// lab_6578
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_65E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_65E0
            pri = 1;
            OP_JUMP lab_65E8
// lab_65E0
            pri = 0;
// lab_65E8
            OP_JZER lab_6770
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            OP_JUMP lab_67D0
// lab_6770
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
            pri = fun_0168(var_16, var_8, var_0)
// lab_67D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6840
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6840
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6078_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x1:
        {
// switch_6078_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x2:
        {
// switch_6078_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x3:
        {
// switch_6078_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x4:
        {
// switch_6078_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x5:
        {
// switch_6078_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_6078_case_default
        }
        case 0x6:
        {
// switch_6078_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x7:
        {
// switch_6078_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x8:
        {
// switch_6078_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x9:
        {
// switch_6078_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0xa:
        {
// switch_6078_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0xb:
        {
// switch_6078_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0xc:
        {
// switch_6078_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0xd:
        {
// switch_6078_case_0xd
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0xe:
        {
// switch_6078_case_0xe
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0xf:
        {
// switch_6078_case_0xf
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x10:
        {
// switch_6078_case_0x10
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x11:
        {
// switch_6078_case_0x11
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x12:
        {
// switch_6078_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x13:
        {
// switch_6078_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x14:
        {
// switch_6078_case_0x14
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x15:
        {
// switch_6078_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x16:
        {
// switch_6078_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x17:
        {
// switch_6078_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x18:
        {
// switch_6078_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x19:
        {
// switch_6078_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x1a:
        {
// switch_6078_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x1b:
        {
// switch_6078_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x1c:
        {
// switch_6078_case_0x1c
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x1d:
        {
// switch_6078_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x1e:
        {
// switch_6078_case_0x1e
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x1f:
        {
// switch_6078_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x20:
        {
// switch_6078_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x21:
        {
// switch_6078_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x22:
        {
// switch_6078_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x23:
        {
// switch_6078_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x24:
        {
// switch_6078_case_0x24
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x25:
        {
// switch_6078_case_0x25
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x26:
        {
// switch_6078_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x27:
        {
// switch_6078_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x28:
        {
// switch_6078_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x29:
        {
// switch_6078_case_0x29
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x2a:
        {
// switch_6078_case_0x2a
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x2b:
        {
// switch_6078_case_0x2b
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x2c:
        {
// switch_6078_case_0x2c
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x2d:
        {
// switch_6078_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x2e:
        {
// switch_6078_case_0x2e
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x2f:
        {
// switch_6078_case_0x2f
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x30:
        {
// switch_6078_case_0x30
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x31:
        {
// switch_6078_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x32:
        {
// switch_6078_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x33:
        {
// switch_6078_case_0x33
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x34:
        {
// switch_6078_case_0x34
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x35:
        {
// switch_6078_case_0x35
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x36:
        {
// switch_6078_case_0x36
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x37:
        {
// switch_6078_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x38:
        {
// switch_6078_case_0x38
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
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6078_case_default
        }
        case 0x39:
        {
// switch_6078_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x3a:
        {
// switch_6078_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x3b:
        {
// switch_6078_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x3c:
        {
// switch_6078_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x3d:
        {
// switch_6078_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
        case 0x3e:
        {
// switch_6078_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_6078_case_default
        }
    }
}
// fun_6870
fun_6870() {
    pri = arg_4;
    OP_JNZ lab_68A8
    var_8 = 0;
    pri = fun_0F68()
// lab_68A8
    pri = arg_1;
    switch (pri) {
// switch_7C80
        case default:
        {
// switch_7C80_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1700(var_264)
            OP_JZER lab_8248
            pri = arg_3;
            switch (pri) {
// switch_81F0
                case default:
                {
// switch_81F0_case_default
                    OP_JUMP lab_8500
// lab_8500
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8570
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8570
                    var_8 = 0;
                    pri = fun_0FA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_81F0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81F0_case_default
                }
                case 0x2:
                {
// switch_81F0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81F0_case_default
                }
                case 0x3:
                {
// switch_81F0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81F0_case_default
                }
            }
// lab_8248
            pri = arg_1;
            OP_JZER lab_8298
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8298
            pri = 0;
            OP_JUMP lab_82A0
// lab_8298
            pri = 1;
// lab_82A0
            OP_JZER lab_8308
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8308
            pri = 1;
            OP_JUMP lab_8310
// lab_8308
            pri = 0;
// lab_8310
            OP_JZER lab_8360
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8500
// lab_8360
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_83C8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8500
// lab_83C8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
// switch_7C80_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1:
        {
// switch_7C80_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2:
        {
// switch_7C80_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x3:
        {
// switch_7C80_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x4:
        {
// switch_7C80_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x5:
        {
// switch_7C80_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_7C80_case_default
        }
        case 0x6:
        {
// switch_7C80_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x7:
        {
// switch_7C80_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x8:
        {
// switch_7C80_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x9:
        {
// switch_7C80_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0xa:
        {
// switch_7C80_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0xb:
        {
// switch_7C80_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0xc:
        {
// switch_7C80_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0xd:
        {
// switch_7C80_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0xe:
        {
// switch_7C80_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0xf:
        {
// switch_7C80_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x10:
        {
// switch_7C80_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x11:
        {
// switch_7C80_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x12:
        {
// switch_7C80_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x13:
        {
// switch_7C80_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x14:
        {
// switch_7C80_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x15:
        {
// switch_7C80_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x16:
        {
// switch_7C80_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x17:
        {
// switch_7C80_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x18:
        {
// switch_7C80_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x19:
        {
// switch_7C80_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1a:
        {
// switch_7C80_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1b:
        {
// switch_7C80_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1c:
        {
// switch_7C80_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1d:
        {
// switch_7C80_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1e:
        {
// switch_7C80_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x1f:
        {
// switch_7C80_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x20:
        {
// switch_7C80_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x21:
        {
// switch_7C80_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x22:
        {
// switch_7C80_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x23:
        {
// switch_7C80_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x24:
        {
// switch_7C80_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x25:
        {
// switch_7C80_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x26:
        {
// switch_7C80_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x27:
        {
// switch_7C80_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x28:
        {
// switch_7C80_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x29:
        {
// switch_7C80_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2a:
        {
// switch_7C80_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2b:
        {
// switch_7C80_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2c:
        {
// switch_7C80_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2d:
        {
// switch_7C80_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2e:
        {
// switch_7C80_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x2f:
        {
// switch_7C80_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x30:
        {
// switch_7C80_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x31:
        {
// switch_7C80_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x32:
        {
// switch_7C80_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x33:
        {
// switch_7C80_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x34:
        {
// switch_7C80_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x35:
        {
// switch_7C80_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x36:
        {
// switch_7C80_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x37:
        {
// switch_7C80_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x38:
        {
// switch_7C80_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x39:
        {
// switch_7C80_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x3a:
        {
// switch_7C80_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x3b:
        {
// switch_7C80_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x3c:
        {
// switch_7C80_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x3d:
        {
// switch_7C80_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
        case 0x3e:
        {
// switch_7C80_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_7C80_case_default
        }
    }
}
// fun_85A0
fun_85A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_87B0(var_16, var_8)
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
    OP_JZER lab_8798
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8798
    pri = 0;
    return pri;
}
// fun_87B0
fun_87B0() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A18(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_87F8
fun_87F8() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8880
// lab_8880
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8A00
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_89F0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8940
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8940
    pri = 0;
    OP_JUMP lab_8948
// lab_8A00
    pri = 0;
    return pri;
// lab_89F0
    OP_JUMP lab_8878
// lab_8878
    OP_INC_P_S -936
// lab_8940
    pri = 1;
// lab_8948
    OP_JZER lab_89C0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_89B8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_89C0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_89B8
}
// fun_8A20
fun_8A20() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8AB8
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_19A8()
// lab_8AB8
    pri = arg_4;
    OP_JZER lab_8AF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_19D0(var_8)
// lab_8AF0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8B48
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8B48
    pri = 0;
    OP_JUMP lab_8B50
// lab_8B48
    pri = 1;
// lab_8B50
    OP_JZER lab_8C18
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8C18
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_8BF0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_18E8(var_32, var_24)
    OP_JUMP lab_8C18
// lab_8C18
    pri = arg_2;
    OP_JZER lab_8CF0
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_8CC0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1510(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06A0(var_40)
    OP_JUMP lab_8CF0
// lab_8CF0
    pri = arg_3;
    OP_JZER lab_8D28
    var_8 = 1;
    var_16 = 8;
    pri = fun_1970(var_8)
// lab_8D28
    pri = 0;
    return pri;
// lab_8CC0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1510(var_16, var_8)
// lab_8BF0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_18E8(var_16, var_8)
}
// fun_8D38
fun_8D38() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_87F8(var_24)
    pri = 0;
    return pri;
}
// fun_8DA0
fun_8DA0() {
    pri = g_mode;
    switch (pri) {
// switch_8E60
        case default:
        {
// switch_8E60_case_default
            pri = CommandNOP()
            OP_JUMP lab_8EA8
// lab_8EA8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8E60_case_0x0
            var_8 = 0;
            pri = fun_8EB8()
            OP_JUMP lab_8EA8
        }
        case 0x2488cc276b5021a7:
        {
// switch_8E60_case_0x2488cc276b5021a7
            var_8 = 0;
            pri = fun_BE58()
            OP_JUMP lab_8EA8
        }
        case 0x41cca62af52d3dcb:
        {
// switch_8E60_case_0x41cca62af52d3dcb
            var_8 = 0;
            pri = fun_BD68()
            OP_JUMP lab_8EA8
        }
    }
}
// fun_8EB8
fun_8EB8() {
    pri = 0;
    return pri;
}
// fun_8ED0
fun_8ED0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8A20(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8F28
fun_8F28() {
    var_8 = -1292278190967397311;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = 7099240262869383700;
    var_32 = 8;
    pri = fun_0438(var_24)
    pri = 0;
    return pri;
}
// fun_8F90
fun_8F90() {
    var_8 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_8FC0
fun_8FC0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 31240;
    pri = SoundPostEvent(var_24)
    var_32 = 31424;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 4628827844509066854;
    var_56 = 0;
    OP_PUSH5_C 4666421856803309486, 4637200317691325317, 4672764024040519107, 4666759951131292467, 4638620358948830577
    var_64 = 4672764084513658634;
    var_72 = 1;
    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_80 = 0;
    pri = fun_27E0()
    var_88 = 1;
    var_96 = 1;
    OP_PUSH4_C 4639154457717139046, 4666799313647566848, 4672718452032326861, 8802641224559852288
    var_104 = 48;
    pri = fun_0610(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = -1292278190967397311;
    var_128 = 16;
    pri = fun_0668(var_120, var_112)
    var_136 = 0;
    var_144 = 7099240262869383700;
    var_152 = 16;
    pri = fun_0668(var_144, var_136)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    OP_PUSH2_C 8802641224559852288, -8208209633826348795
    var_192 = 48;
    pri = fun_0860(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = -8208209633826348795;
    var_208 = 8;
    pri = fun_08B8(var_200)
    var_216 = 1;
    var_224 = 0;
    OP_PUSH5_C 4641240890982006784, -8208209633826348795, 4666721248321994752, 4672731371293953229, 4607182418800017408
    var_232 = 8802641224559852288;
    var_240 = 64;
    pri = fun_0750(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_248 = 10;
    var_256 = 8;
    pri = fun_0090(var_248)
    var_264 = 0;
    var_272 = 4628827844509066854;
    var_280 = 3;
    OP_PUSH5_C 4666422269120169902, 4635657834818950922, 4672742102527440323, 4666834008736981320, 4637386794863396127
    var_288 = 4672742171246917059;
    var_296 = 20;
    pri = EvCameraMove(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 0;
    var_312 = 2;
    var_320 = -8208209633826348795;
    var_328 = 24;
    pri = fun_85A0(var_320, var_312, var_304)
    var_336 = 1;
    var_344 = 8;
    pri = fun_0090(var_336)
    var_352 = -8208209633826348795;
    var_360 = 8;
    pri = fun_0A90(var_352)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C -6568401145710102920, -8208209633826348795
    var_408 = 56;
    pri = fun_2280(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_2490(var_416)
    var_432 = 0;
    pri = fun_2550()
    var_440 = 8802641224559852288;
    var_448 = 8;
    pri = fun_08B8(var_440)
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH2_C -8208209633826348795, 8802641224559852288
    var_488 = 48;
    pri = fun_0860(var_480, var_472, var_464, var_456, var_448, var_440)
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    var_520 = 0;
    OP_PUSH2_C 8802641224559852288, -8208209633826348795
    var_528 = 48;
    pri = fun_0860(var_520, var_512, var_504, var_496, var_488, var_480)
    var_536 = 8802641224559852288;
    var_544 = 8;
    pri = fun_08B8(var_536)
    var_552 = -8208209633826348795;
    var_560 = 8;
    pri = fun_08B8(var_552)
    var_568 = 0;
    pri = fun_27E0()
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    OP_PUSH2_C -6568397847175218287, -8208209633826348795
    var_616 = 56;
    pri = fun_2280(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_2490(var_624)
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 100;
    var_672 = -1;
    OP_PUSH2_C -6568398946686846498, -8208209633826348795
    var_680 = 56;
    pri = fun_2280(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 1;
    var_696 = 8;
    pri = fun_2490(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = -8208209633826348795;
    var_728 = 24;
    pri = fun_85A0(var_720, var_712, var_704)
    var_736 = 1;
    var_744 = 8;
    pri = fun_0090(var_736)
    var_752 = -8208209633826348795;
    var_760 = 8;
    pri = fun_0A90(var_752)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C -6568395648151961865, -8208209633826348795
    var_808 = 56;
    pri = fun_2280(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 1;
    var_824 = 8;
    pri = fun_2490(var_816)
    var_832 = 0;
    pri = fun_2550()
    var_840 = 31584;
    pri = SoundPostEvent(var_840)
    var_848 = 1;
    var_856 = -1;
    var_864 = -1;
    var_872 = 3;
    var_880 = 0;
    var_888 = 20;
    var_896 = 8802641224559852288;
    var_904 = 56;
    pri = fun_2958(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 1;
    var_928 = -1;
    var_936 = -1;
    var_944 = 0;
    var_952 = 12;
    var_960 = -8208209633826348795;
    var_968 = 56;
    pri = fun_4538(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 4;
    var_984 = 4;
    var_992 = -8208209633826348795;
    var_1000 = 24;
    pri = fun_1640(var_992, var_984, var_976)
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 4602678819172646912;
    var_1040 = 1;
    var_1048 = 10;
    var_1056 = 2;
    var_1064 = 30;
    pri = float(var_1064)
    var_1072 = pri;
    var_1080 = 3;
    var_1088 = 72;
    pri = fun_2870(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 1;
    var_1104 = 0;
    var_1112 = 30;
    pri = EvCameraShakeStartAttenuation(var_1112, var_1104, var_1096)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_0090(var_1120)
    var_1136 = 31744;
    pri = SoundPostEvent(var_1136)
    var_1144 = 1;
    var_1152 = 1;
    var_1160 = -1;
    var_1168 = -1;
    var_1176 = 0;
    var_1184 = 3;
    var_1192 = 1452434572263577644;
    var_1200 = 56;
    pri = fun_4538(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1208 = 1;
    var_1216 = -1;
    var_1224 = -1;
    var_1232 = 2;
    var_1240 = 0;
    var_1248 = 30;
    var_1256 = -2428209751887543338;
    var_1264 = 56;
    pri = fun_2958(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1272 = 3;
    var_1280 = 0;
    var_1288 = 101;
    var_1296 = 8691922921348454245;
    var_1304 = 32;
    pri = fun_2128(var_1296, var_1288, var_1280, var_1272)
    var_1312 = 30;
    var_1320 = 8;
    pri = fun_0090(var_1312)
    var_1328 = -2428209751887543338;
    var_1336 = 8;
    pri = fun_0A90(var_1328)
    var_1344 = 0;
    var_1352 = 8;
    pri = fun_2908(var_1344)
    var_1360 = 1;
    var_1368 = 8;
    pri = fun_2490(var_1360)
    var_1376 = 0;
    pri = fun_2550()
    var_1384 = 1;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 12;
    var_1416 = -8208209633826348795;
    var_1424 = 40;
    pri = fun_6870(var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1432 = -8208209633826348795;
    var_1440 = 8;
    pri = fun_0A90(var_1432)
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = 0;
    var_1472 = -170;
    pri = float(var_1472)
    var_1480 = pri;
    var_1488 = 8802641224559852288;
    var_1496 = 40;
    pri = fun_0810(var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1504 = 0;
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = -150;
    pri = float(var_1528)
    var_1536 = pri;
    var_1544 = -8208209633826348795;
    var_1552 = 40;
    pri = fun_0810(var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1560 = 8802641224559852288;
    var_1568 = 8;
    pri = fun_08B8(var_1560)
    var_1576 = -8208209633826348795;
    var_1584 = 8;
    pri = fun_08B8(var_1576)
    var_1592 = 0;
    var_1600 = 3;
    var_1608 = 0;
    var_1616 = 100;
    var_1624 = -1;
    OP_PUSH2_C -6568396747663590076, -8208209633826348795
    var_1632 = 56;
    pri = fun_2280(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = 1;
    var_1648 = 8;
    pri = fun_2490(var_1640)
    var_1656 = 0;
    pri = fun_2550()
    var_1664 = 1;
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 3;
    var_1696 = 1452434572263577644;
    var_1704 = 40;
    pri = fun_6870(var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1712 = 0;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 100;
    var_1744 = -1;
    OP_PUSH2_C -6568394548640333654, -8208209633826348795
    var_1752 = 56;
    pri = fun_2280(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1760 = 1452434572263577644;
    var_1768 = 8;
    pri = fun_0A90(var_1760)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_2490(var_1776)
    var_1792 = 0;
    pri = fun_2550()
    var_1800 = -8208209633826348795;
    var_1808 = 8;
    pri = fun_16A8(var_1800)
    var_1816 = 0;
    pri = fun_A030()
    pri = 0;
    return pri;
}
// fun_9E48
fun_9E48() {
    pri = 0;
    return pri;
}
// fun_9E60
fun_9E60() {
    var_8 = 7099240262869383700;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = 1058120175172563091;
    var_32 = 8;
    pri = fun_05B8(var_24)
    var_40 = 1058121274684191302;
    var_48 = 8;
    pri = fun_05B8(var_40)
    var_56 = -8208209633826348795;
    var_64 = 8;
    pri = fun_05B8(var_56)
    var_72 = 1181;
    var_80 = 8;
    pri = fun_8D38(var_72)
    var_88 = 7506713967005848083;
    pri = FlagReset(var_88)
    var_96 = 5501743159805903958;
    pri = FlagSet(var_96)
    pri = 0;
    return pri;
}
// fun_9F88
fun_9F88() {
    OP_PUSH2_C -1292278190967397311, -7616773497711347890
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 5;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 31888;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02B0(var_32, var_24)
    var_48 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_A030
fun_A030() {
    var_8 = 31936;
    var_16 = 8;
    pri = fun_26D8(var_8)
    var_24 = 0;
    pri = fun_2710()
    var_32 = 1;
    var_40 = -1292278190967397311;
    var_48 = 16;
    pri = fun_0668(var_40, var_32)
    var_56 = 1;
    var_64 = 7099240262869383700;
    var_72 = 16;
    pri = fun_0668(var_64, var_56)
    var_80 = 0;
    var_88 = 4632304060471443456;
    var_96 = 0;
    OP_PUSH5_C 4666584238178057585, 4644224877578860626, 4672716074338431795, 4666665569053164175, 4627319138633897738
    var_104 = 4672797405213538386;
    var_112 = 1;
    pri = EvCameraMove(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_120 = 0;
    pri = fun_27E0()
    var_128 = 0;
    var_136 = 4632304060471443456;
    var_144 = 3;
    OP_PUSH5_C 4666557168201781740, 4644224877578860626, 4672722844581279826, 4666638493579330191, 4627260028888788500
    var_152 = 4672804167210049208;
    var_160 = 100;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 1;
    var_176 = 1;
    var_184 = 30;
    var_192 = 2;
    var_200 = -8208209633826348795;
    var_208 = 40;
    pri = fun_10A0(var_200, var_192, var_184, var_176, var_168)
    var_216 = 0;
    pri = fun_27E0()
    var_224 = 0;
    var_232 = 3;
    var_240 = 0;
    var_248 = 100;
    var_256 = -1;
    OP_PUSH2_C -3272723828037337491, -8208209633826348795
    var_264 = 56;
    pri = fun_2330(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_272 = 1;
    var_280 = 8;
    pri = fun_2490(var_272)
    var_288 = 0;
    pri = fun_2550()
    var_296 = -1;
    var_304 = -8208209633826348795;
    var_312 = 16;
    pri = fun_1510(var_304, var_296)
    var_320 = 0;
    var_328 = 4628827844509066854;
    var_336 = 0;
    OP_PUSH5_C 4666421686379007181, 4637883598197290435, 4672765057581449216, 4666742413920829440, 4638969036076230902
    var_344 = 4672765109808251535;
    var_352 = 1;
    pri = EvCameraMove(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 0;
    pri = fun_27E0()
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH2_C -8208209633826348795, 8802641224559852288
    var_400 = 48;
    pri = fun_0860(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH2_C 8802641224559852288, -8208209633826348795
    var_440 = 48;
    pri = fun_0860(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 8802641224559852288;
    var_456 = 8;
    pri = fun_08B8(var_448)
    var_464 = -8208209633826348795;
    var_472 = 8;
    pri = fun_08B8(var_464)
    var_480 = 1;
    var_488 = 1;
    var_496 = -1;
    var_504 = -1;
    var_512 = 0;
    var_520 = 6;
    var_528 = -8208209633826348795;
    var_536 = 56;
    pri = fun_4538(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_544 = 0;
    var_552 = 3;
    var_560 = 0;
    var_568 = 100;
    var_576 = -1;
    OP_PUSH2_C -3272727126572222124, -8208209633826348795
    var_584 = 56;
    pri = fun_2330(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_2490(var_592)
    var_608 = 0;
    pri = fun_2550()
    var_616 = 0;
    var_624 = 4628827844509066854;
    var_632 = 3;
    OP_PUSH5_C 4666422269120169902, 4635657834818950922, 4672742102527440323, 4666834008736981320, 4637386794863396127
    var_640 = 4672742171246917059;
    var_648 = 1;
    pri = EvCameraMove(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_656 = 1;
    var_664 = 3;
    var_672 = 0;
    var_680 = 6;
    var_688 = -8208209633826348795;
    var_696 = 40;
    pri = fun_6870(var_688, var_680, var_672, var_664, var_656)
    var_704 = -8208209633826348795;
    var_712 = 8;
    pri = fun_0A90(var_704)
    var_720 = 0;
    var_728 = 4;
    var_736 = -8208209633826348795;
    var_744 = 24;
    pri = fun_85A0(var_736, var_728, var_720)
    var_752 = 1;
    var_760 = 8;
    pri = fun_0090(var_752)
    var_768 = -8208209633826348795;
    var_776 = 8;
    pri = fun_0A90(var_768)
    var_784 = 4;
    var_792 = 7;
    var_800 = -8208209633826348795;
    var_808 = 24;
    pri = fun_1640(var_800, var_792, var_784)
    var_816 = 32152;
    pri = SoundPostEvent(var_816)
    var_824 = 32280;
    pri = SoundPostEvent(var_824)
    var_832 = 0;
    var_840 = 3;
    var_848 = 0;
    var_856 = 100;
    var_864 = -1;
    OP_PUSH2_C -3272726027060593913, -8208209633826348795
    var_872 = 56;
    pri = fun_2330(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 1;
    var_888 = 8;
    pri = fun_2490(var_880)
    var_896 = 1;
    var_904 = 4190256561899469575;
    var_912 = 0;
    var_920 = 24;
    pri = fun_2580(var_912, var_904, var_896)
    var_928 = 1;
    var_936 = 4190257661411097786;
    var_944 = 1;
    var_952 = 24;
    pri = fun_2580(var_944, var_936, var_928)
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    var_992 = 1;
    var_1000 = 32;
    pri = fun_2668(var_992, var_984, var_976, var_968)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_AA38
        case default:
        {
// switch_AA38_case_default
            var_8 = 0;
            var_16 = 0;
            var_24 = -8208209633826348795;
            var_32 = 24;
            pri = fun_85A0(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = 8;
            pri = fun_0090(var_40)
            var_56 = -8208209633826348795;
            var_64 = 8;
            pri = fun_0A90(var_56)
            var_72 = 1;
            var_80 = 7099240262869383700;
            var_88 = 16;
            pri = fun_0668(var_80, var_72)
            var_96 = 1;
            var_104 = 1;
            var_112 = 140;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH3_C 4666884250920812544, 4672697643774771200, 7099240262869383700
            var_128 = 48;
            pri = fun_0610(var_120, var_112, var_104, var_96, var_88, var_80)
            var_136 = 1;
            var_144 = 0;
            OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4666720973444087808, 4672773784954994688, 4611686018427387904
            var_152 = 7099240262869383700;
            var_160 = 64;
            pri = fun_0750(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_168 = 0;
            var_176 = 4628827844509066854;
            var_184 = 3;
            OP_PUSH5_C 4666422538500518707, 4634573452471173120, 4672753281811915735, 4666972167870569513, 4636881547280200499
            var_192 = 4672753369772845957;
            var_200 = 30;
            pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_208 = 0;
            var_216 = 0;
            var_224 = 0;
            OP_PUSH2_C 4635083625866461184, 8802641224559852288
            var_232 = 40;
            pri = fun_0810(var_224, var_216, var_208, var_200, var_192)
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            OP_PUSH2_C 4620130267728707584, -8208209633826348795
            var_264 = 40;
            pri = fun_0810(var_256, var_248, var_240, var_232, var_224)
            var_272 = 0;
            var_280 = 3;
            var_288 = 0;
            var_296 = 100;
            var_304 = -1;
            OP_PUSH2_C 1251176297947144554, 7099240262869383700
            var_312 = 56;
            pri = fun_2330(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
            var_320 = 1;
            var_328 = 8;
            pri = fun_2490(var_320)
            var_336 = 0;
            pri = fun_2550()
            var_344 = 0;
            pri = fun_27E0()
            var_352 = 7099240262869383700;
            var_360 = 8;
            pri = fun_08B8(var_352)
            var_368 = 8802641224559852288;
            var_376 = 8;
            pri = fun_08B8(var_368)
            var_384 = -8208209633826348795;
            var_392 = 8;
            pri = fun_08B8(var_384)
            var_400 = 1;
            var_408 = 1;
            OP_PUSH4_C 4636047677661695181, 4666721248321994752, 4672721200811396301, 8802641224559852288
            var_416 = 48;
            pri = fun_0610(var_408, var_400, var_392, var_384, var_376, var_368)
            var_424 = 1;
            var_432 = 1;
            OP_PUSH4_C 4622325772547050701, 4666640709095260160, 4672774334710808576, -8208209633826348795
            var_440 = 48;
            pri = fun_0610(var_432, var_424, var_416, var_408, var_400, var_392)
            var_448 = 0;
            var_456 = 4629587826946185626;
            var_464 = 0;
            OP_PUSH5_C 4666537162587714355, 4632791012181152891, 4672836160249638420, 4666812227411635077, 4638826539369271132
            var_472 = 4672692165458085806;
            var_480 = 1;
            pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
            var_488 = 0;
            pri = fun_27E0()
            var_496 = 0;
            var_504 = 0;
            var_512 = 0;
            var_520 = 0;
            OP_PUSH2_C 7099240262869383700, 8802641224559852288
            var_528 = 48;
            pri = fun_0860(var_520, var_512, var_504, var_496, var_488, var_480)
            var_536 = 0;
            var_544 = 0;
            var_552 = 0;
            var_560 = 0;
            OP_PUSH2_C 7099240262869383700, -8208209633826348795
            var_568 = 48;
            pri = fun_0860(var_560, var_552, var_544, var_536, var_528, var_520)
            var_576 = 1;
            var_584 = 1;
            var_592 = -1;
            OP_PUSH2_C -8208209633826348795, 7099240262869383700
            var_600 = 40;
            pri = fun_0FE8(var_592, var_584, var_576, var_568, var_560)
            var_608 = 4;
            var_616 = 7;
            var_624 = -8208209633826348795;
            var_632 = 24;
            pri = fun_1640(var_624, var_616, var_608)
            var_640 = 0;
            var_648 = 3;
            var_656 = 0;
            var_664 = 100;
            var_672 = -1;
            OP_PUSH2_C -3272732624130363179, -8208209633826348795
            var_680 = 56;
            pri = fun_2330(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
            var_688 = 1;
            var_696 = 8;
            pri = fun_2490(var_688)
            var_704 = 0;
            pri = fun_2550()
            var_712 = 8802641224559852288;
            var_720 = 8;
            pri = fun_08B8(var_712)
            var_728 = -8208209633826348795;
            var_736 = 8;
            pri = fun_08B8(var_728)
            var_744 = 0;
            var_752 = 3;
            var_760 = 7099240262869383700;
            var_768 = 24;
            pri = fun_85A0(var_760, var_752, var_744)
            var_776 = 1;
            var_784 = 8;
            pri = fun_0090(var_776)
            var_792 = 7099240262869383700;
            var_800 = 8;
            pri = fun_0A90(var_792)
            var_808 = 0;
            var_816 = 3;
            var_824 = 0;
            var_832 = 100;
            var_840 = -1;
            OP_PUSH2_C 1251172999412259921, 7099240262869383700
            var_848 = 56;
            pri = fun_2330(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
            var_856 = 1;
            var_864 = 8;
            pri = fun_2490(var_856)
            var_872 = 0;
            pri = fun_2550()
            var_880 = -8208209633826348795;
            var_888 = 8;
            pri = fun_16A8(var_880)
            var_896 = 0;
            var_904 = 3;
            var_912 = 0;
            var_920 = 100;
            var_928 = -1;
            OP_PUSH2_C -3271768352432611357, -8208209633826348795
            var_936 = 56;
            pri = fun_2330(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
            var_944 = 1;
            var_952 = 8;
            pri = fun_2490(var_944)
            var_960 = 0;
            pri = fun_2550()
            var_968 = 0;
            var_976 = 0;
            var_984 = 7099240262869383700;
            var_992 = 24;
            pri = fun_85A0(var_984, var_976, var_968)
            var_1000 = 1;
            var_1008 = 8;
            pri = fun_0090(var_1000)
            var_1016 = 7099240262869383700;
            var_1024 = 8;
            pri = fun_0A90(var_1016)
            var_1032 = 0;
            var_1040 = 0;
            var_1048 = 0;
            var_1056 = 0;
            OP_PUSH2_C -8208209633826348795, 8802641224559852288
            var_1064 = 48;
            pri = fun_0860(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
            var_1072 = 0;
            var_1080 = 0;
            var_1088 = 0;
            var_1096 = 0;
            OP_PUSH2_C 8802641224559852288, -8208209633826348795
            var_1104 = 48;
            pri = fun_0860(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
            var_1112 = 1;
            var_1120 = 1;
            var_1128 = -1;
            OP_PUSH2_C 8802641224559852288, 7099240262869383700
            var_1136 = 40;
            pri = fun_0FE8(var_1128, var_1120, var_1112, var_1104, var_1096)
            var_1144 = -8208209633826348795;
            var_1152 = 8;
            pri = fun_08B8(var_1144)
            var_1160 = 0;
            var_1168 = 1;
            var_1176 = -8208209633826348795;
            var_1184 = 24;
            pri = fun_85A0(var_1176, var_1168, var_1160)
            var_1192 = 1;
            var_1200 = 8;
            pri = fun_0090(var_1192)
            var_1208 = -8208209633826348795;
            var_1216 = 8;
            pri = fun_0A90(var_1208)
            var_1224 = 0;
            var_1232 = 3;
            var_1240 = 0;
            var_1248 = 100;
            var_1256 = -1;
            OP_PUSH2_C -3271769451944239568, -8208209633826348795
            var_1264 = 56;
            pri = fun_2330(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
            var_1272 = 1;
            var_1280 = 8;
            pri = fun_2490(var_1272)
            var_1288 = 0;
            pri = fun_2550()
            var_1296 = 8802641224559852288;
            var_1304 = 8;
            pri = fun_08B8(var_1296)
            var_1312 = 0;
            var_1320 = 0;
            var_1328 = -8208209633826348795;
            var_1336 = 24;
            pri = fun_85A0(var_1328, var_1320, var_1312)
            var_1344 = 1;
            var_1352 = 8;
            pri = fun_0090(var_1344)
            var_1360 = -8208209633826348795;
            var_1368 = 8;
            pri = fun_0A90(var_1360)
            var_1376 = -1;
            var_1384 = 7099240262869383700;
            var_1392 = 16;
            pri = fun_1510(var_1384, var_1376)
            var_1400 = 1;
            var_1408 = 0;
            var_1416 = 30;
            pri = float(var_1416)
            var_1424 = pri;
            var_1432 = 0;
            pri = float(var_1432)
            var_1440 = pri;
            var_1448 = 0;
            OP_PUSH4_C 4666824327537098752, 4672723207420116992, 4611686018427387904, 7099240262869383700
            var_1456 = 72;
            pri = fun_06D8(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
            var_1464 = 30;
            var_1472 = 8;
            pri = fun_0090(var_1464)
            var_1480 = 1;
            var_1488 = 0;
            var_1496 = 30;
            pri = float(var_1496)
            var_1504 = pri;
            var_1512 = 0;
            pri = float(var_1512)
            var_1520 = pri;
            var_1528 = 0;
            OP_PUSH4_C 4666834772897562624, 4672721558152675328, 4611686018427387904, -8208209633826348795
            var_1536 = 72;
            pri = fun_06D8(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
            var_1544 = 30;
            var_1552 = 8;
            pri = fun_0090(var_1544)
            var_1560 = 0;
            var_1568 = 0;
            var_1576 = 0;
            var_1584 = -12;
            pri = float(var_1584)
            var_1592 = pri;
            var_1600 = 8802641224559852288;
            var_1608 = 40;
            pri = fun_0810(var_1600, var_1592, var_1584, var_1576, var_1568)
            var_1616 = 8802641224559852288;
            var_1624 = 8;
            pri = fun_08B8(var_1616)
            var_1632 = -8208209633826348795;
            var_1640 = 8;
            pri = fun_08B8(var_1632)
            var_1648 = 7099240262869383700;
            var_1656 = 8;
            pri = fun_08B8(var_1648)
            var_1664 = 1;
            var_1672 = 1;
            OP_PUSH4_C -4585494771844461363, 4665854558281400320, 4673150010346228941, -1292278190967397311
            var_1680 = 48;
            pri = fun_0610(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
            var_1688 = 1;
            var_1696 = 0;
            var_1704 = 4641240890982006784;
            var_1712 = 0;
            var_1720 = 0;
            OP_PUSH4_C 4665854558281400320, 4673100532322979021, 4607182418800017408, -1292278190967397311
            var_1728 = 72;
            pri = fun_06D8(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
            var_1736 = -1292278190967397311;
            var_1744 = 8;
            pri = fun_08B8(var_1736)
            var_1752 = 0;
            var_1760 = 0;
            var_1768 = 0;
            var_1776 = 0;
            OP_PUSH2_C 8802641224559852288, -1292278190967397311
            var_1784 = 48;
            pri = fun_0860(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
            var_1792 = 0;
            var_1800 = 3;
            var_1808 = 0;
            var_1816 = 100;
            var_1824 = -1;
            OP_PUSH2_C 7326684470760383089, -1292278190967397311
            var_1832 = 56;
            pri = fun_2330(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
            var_1840 = 1;
            var_1848 = 8;
            pri = fun_2490(var_1840)
            var_1856 = 0;
            pri = fun_2550()
            var_1864 = -1292278190967397311;
            var_1872 = 8;
            pri = fun_08B8(var_1864)
            var_1880 = 1;
            var_1888 = 1;
            var_1896 = -1;
            var_1904 = -1;
            var_1912 = 0;
            var_1920 = 7;
            var_1928 = -1292278190967397311;
            var_1936 = 56;
            pri = fun_4538(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
            var_1944 = 0;
            var_1952 = 0;
            var_1960 = 0;
            var_1968 = 0;
            OP_PUSH2_C -1292278190967397311, 8802641224559852288
            var_1976 = 48;
            pri = fun_0860(var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
            var_1984 = 8802641224559852288;
            var_1992 = 8;
            pri = fun_08B8(var_1984)
            var_2000 = 60;
            var_2008 = 8;
            pri = fun_0090(var_2000)
            var_2016 = 1;
            var_2024 = 0;
            var_2032 = 31192;
            var_2040 = 8;
            var_2048 = 32;
            pri = fun_0310(var_2040, var_2032, var_2024, var_2016)
            var_2056 = 0;
            pri = fun_0380()
            var_2064 = 1;
            var_2072 = 3;
            var_2080 = 0;
            var_2088 = 7;
            var_2096 = -1292278190967397311;
            var_2104 = 40;
            pri = fun_6870(var_2096, var_2088, var_2080, var_2072, var_2064)
            var_2112 = -1292278190967397311;
            var_2120 = 8;
            pri = fun_0A90(var_2112)
            var_2128 = 0;
            var_2136 = -8208209633826348795;
            var_2144 = 16;
            pri = fun_0668(var_2136, var_2128)
            var_2152 = 0;
            var_2160 = 7099240262869383700;
            var_2168 = 16;
            pri = fun_0668(var_2160, var_2152)
            var_2176 = 3;
            var_2184 = 1;
            pri = EvCameraEnd(var_2184, var_2176)
            var_2192 = 0;
            pri = fun_27B0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_AA38_case_0x0
            var_8 = -8208209633826348795;
            var_16 = 8;
            pri = fun_16A8(var_8)
            var_24 = 0;
            var_32 = 3;
            var_40 = 0;
            var_48 = 100;
            var_56 = -1;
            OP_PUSH2_C -3272729325595478546, -8208209633826348795
            var_64 = 56;
            pri = fun_2330(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2490(var_72)
            var_88 = 0;
            pri = fun_2550()
            OP_JUMP switch_AA38_case_default
        }
        case 0x1:
        {
// switch_AA38_case_0x1
            var_8 = -8208209633826348795;
            var_16 = 8;
            pri = fun_16A8(var_8)
            var_24 = 0;
            var_32 = 3;
            var_40 = 0;
            var_48 = 100;
            var_56 = -1;
            OP_PUSH2_C -3272728226083850335, -8208209633826348795
            var_64 = 56;
            pri = fun_2330(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2490(var_72)
            var_88 = 0;
            pri = fun_2550()
            OP_JUMP switch_AA38_case_default
        }
    }
}
// fun_BD68
fun_BD68() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8ED0()
    var_16 = 0;
    pri = fun_8F28()
    var_24 = 0;
    pri = fun_8F90()
    var_32 = 0;
    pri = fun_8FC0()
    var_40 = 0;
    pri = fun_9E48()
    var_48 = 0;
    pri = fun_9E60()
    var_56 = 0;
    pri = fun_9F88()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BE58
fun_BE58() {
    var_8 = 0;
    pri = fun_8F28()
    var_16 = 0;
    pri = fun_9E60()
    pri = 0;
    return pri;
}
