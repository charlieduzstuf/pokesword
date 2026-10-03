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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06B8
fun_06B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0730
fun_0730() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
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
// fun_07E0
fun_07E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1608(var_8)
    OP_JZER lab_0900
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1638(var_24)
    OP_JNZ lab_0900
    pri = 0;
    return pri;
// lab_0900
    OP_JUMP lab_0910
// lab_0910
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0970
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0970
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0910
    pri = 0;
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AA8
    pri = 0;
    return pri;
// lab_0AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0AE8
// lab_0AE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1608(var_8)
    OP_JNZ lab_0B70
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B60
    pri = 0;
    return pri;
// lab_0B70
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C60(var_8)
    pri = 0;
    return pri;
// lab_0C18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AE8
    pri = 0;
    return pri;
// lab_0B60
    OP_JUMP lab_0BB8
}
// fun_0C60
fun_0C60() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C98
fun_0C98() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0CE8
    pri = 0;
    return pri;
// lab_0CE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1608(var_8)
    OP_JZER lab_0E18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D40
    OP_ZERO_P_S 64
// lab_0E18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E50
    OP_CONST_S 64, 1
// lab_0E50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E88
    OP_CONST_S 72, 1
// lab_0E88
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
// lab_0D40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_ZERO_P_S 72
// lab_0D68
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
    OP_JUMP lab_0F28
// lab_0F28
    pri = 0;
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F78
fun_0F78() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1010
fun_1010() {
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
// fun_1070
fun_1070() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1430
        case default:
        {
// switch_1430_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1430_case_0x0
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
            pri = fun_1010(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1430_case_default
        }
        case 0x1:
        {
// switch_1430_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1010(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1430_case_default
        }
        case 0x2:
        {
// switch_1430_case_0x2
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
            pri = fun_1010(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1430_case_default
        }
        case 0x3:
        {
// switch_1430_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1010(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1430_case_default
        }
        case 0x4:
        {
// switch_1430_case_0x4
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
            pri = fun_1010(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1430_case_default
        }
        case 0x5:
        {
// switch_1430_case_0x5
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
            pri = fun_1010(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1430_case_default
        }
        case 0x6:
        {
// switch_1430_case_0x6
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
            pri = fun_1010(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1430_case_default
        }
        case 0x7:
        {
// switch_1430_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1010(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1430_case_default
        }
    }
}
// fun_14E0
fun_14E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1520(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1560(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1638
fun_1638() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1668
fun_1668() {
    OP_JUMP lab_1680
// lab_1680
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1710
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1700
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1710
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17A0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1790
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_17A0
    pri = 0;
    return pri;
// lab_1790
    OP_JUMP lab_17B0
// lab_17B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1680
    pri = 0;
    return pri;
// lab_1700
    OP_JUMP lab_17B0
}
// fun_17F0
fun_17F0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1668(var_40)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_18B0
fun_18B0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_18D8
fun_18D8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1908
fun_1908() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
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
// switch_1F58
        case default:
        {
// switch_1F58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1FA0
// lab_1FA0
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
            OP_JNZ lab_2048
            var_88 = 0;
            pri = fun_2200()
// lab_2048
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1F58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1B40
                case default:
                {
// switch_1B40_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1BB8
// lab_1BB8
                    OP_JUMP lab_1FA0
                }
                case 0x0:
                {
// switch_1B40_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1BB8
                }
                case 0x1:
                {
// switch_1B40_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1BB8
                }
                case 0x2:
                {
// switch_1B40_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1BB8
                }
                case 0x3:
                {
// switch_1B40_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1BB8
                }
                case 0x4:
                {
// switch_1B40_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1BB8
                }
                case 0x5:
                {
// switch_1B40_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1BB8
                }
            }
        }
        case 0x65:
        {
// switch_1F58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1CF8
                case default:
                {
// switch_1CF8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D70
// lab_1D70
                    OP_JUMP lab_1FA0
                }
                case 0x0:
                {
// switch_1CF8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1D70
                }
                case 0x1:
                {
// switch_1CF8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1D70
                }
                case 0x2:
                {
// switch_1CF8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1D70
                }
                case 0x3:
                {
// switch_1CF8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D70
                }
                case 0x4:
                {
// switch_1CF8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1D70
                }
                case 0x5:
                {
// switch_1CF8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1D70
                }
            }
        }
        case 0x66:
        {
// switch_1F58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1EB0
                case default:
                {
// switch_1EB0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F28
// lab_1F28
                    OP_JUMP lab_1FA0
                }
                case 0x0:
                {
// switch_1EB0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1F28
                }
                case 0x1:
                {
// switch_1EB0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1F28
                }
                case 0x2:
                {
// switch_1EB0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1F28
                }
                case 0x3:
                {
// switch_1EB0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1F28
                }
                case 0x4:
                {
// switch_1EB0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1F28
                }
                case 0x5:
                {
// switch_1EB0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1F28
                }
            }
        }
    }
}
// fun_2060
fun_2060() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2108
    pri = 1;
    return pri;
// lab_2108
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2150
fun_2150() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_21A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2060(var_8)
    arg_2 = pri;
// lab_21A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1940(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    OP_JUMP lab_2218
// lab_2218
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2258
    pri = 0;
    return pri;
// lab_2258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2218
    pri = 0;
    return pri;
}
// fun_2298
fun_2298() {
    var_8 = 0;
    pri = fun_2200()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2348
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2348
    pri = 0;
    return pri;
}
// fun_2358
fun_2358() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2388
fun_2388() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_23B8
// lab_23B8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_23F8
    OP_JUMP lab_2428
// lab_23F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23B8
// lab_2428
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2470
fun_2470() {
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
// fun_24E0
fun_24E0() {
    pri = arg_1;
    OP_JNZ lab_2528
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2528
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2580
fun_2580() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_25F8
fun_25F8() {
    var_8 = 0;
    pri = fun_2580()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2678
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2678
    pri = 1;
    return pri;
// lab_2678
    var_8 = 0;
    pri = fun_2580()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_26B8
    pri = 1;
    return pri;
// lab_26B8
    var_8 = 0;
    pri = fun_2580()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_26E8
fun_26E8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_2738
fun_2738() {
    OP_JUMP lab_2750
// lab_2750
    pri = EvCameraMoveWait_()
    OP_JZER lab_2788
    pri = 0;
    return pri;
// lab_2788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2750
    pri = 0;
    return pri;
}
// fun_27C8
fun_27C8() {
    pri = arg_5;
    OP_JNZ lab_2800
    var_8 = 0;
    pri = fun_0F38()
// lab_2800
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2850
    OP_CONST_S -8, -1
// lab_2850
    pri = arg_1;
    switch (pri) {
// switch_4308
        case default:
        {
// switch_4308_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_47B0
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A28(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_47B0
            pri = 1;
            OP_JUMP lab_47B8
// lab_47B0
            pri = 0;
// lab_47B8
            OP_JZER lab_4808
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_4A60
// lab_4808
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4870
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4870
            pri = 1;
            OP_JUMP lab_4878
// lab_4870
            pri = 0;
// lab_4878
            OP_JZER lab_4A00
            var_16 = 20672;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            var_176 = 20776;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20792;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4A60
// lab_4A00
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_4A60
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4AD0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4AD0
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4308_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x1:
        {
// switch_4308_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x2:
        {
// switch_4308_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x3:
        {
// switch_4308_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x4:
        {
// switch_4308_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x5:
        {
// switch_4308_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_4308_case_default
        }
        case 0x6:
        {
// switch_4308_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x7:
        {
// switch_4308_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x8:
        {
// switch_4308_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x9:
        {
// switch_4308_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0xa:
        {
// switch_4308_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0xb:
        {
// switch_4308_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0xc:
        {
// switch_4308_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0xd:
        {
// switch_4308_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11304;
            var_72 = 11128;
            var_80 = 10944;
            var_88 = 10752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0xe:
        {
// switch_4308_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11960;
            var_72 = 11752;
            var_80 = 11536;
            var_88 = 11312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0xf:
        {
// switch_4308_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12352;
            var_72 = 12232;
            var_80 = 12104;
            var_88 = 11968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x10:
        {
// switch_4308_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12696;
            var_72 = 12592;
            var_80 = 12480;
            var_88 = 12360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x11:
        {
// switch_4308_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13040;
            var_72 = 12936;
            var_80 = 12824;
            var_88 = 12704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x12:
        {
// switch_4308_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x13:
        {
// switch_4308_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x14:
        {
// switch_4308_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13600;
            var_72 = 13424;
            var_80 = 13240;
            var_88 = 13048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x15:
        {
// switch_4308_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x16:
        {
// switch_4308_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x17:
        {
// switch_4308_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x18:
        {
// switch_4308_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x19:
        {
// switch_4308_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x1a:
        {
// switch_4308_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x1b:
        {
// switch_4308_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x1c:
        {
// switch_4308_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13992;
            var_72 = 13872;
            var_80 = 13744;
            var_88 = 13608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x1d:
        {
// switch_4308_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x1e:
        {
// switch_4308_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14456;
            var_72 = 14312;
            var_80 = 14160;
            var_88 = 14000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x1f:
        {
// switch_4308_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x20:
        {
// switch_4308_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x21:
        {
// switch_4308_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x22:
        {
// switch_4308_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x23:
        {
// switch_4308_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x24:
        {
// switch_4308_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14824;
            var_72 = 14712;
            var_80 = 14592;
            var_88 = 14464;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x25:
        {
// switch_4308_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15192;
            var_72 = 15080;
            var_80 = 14960;
            var_88 = 14832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x26:
        {
// switch_4308_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x27:
        {
// switch_4308_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x28:
        {
// switch_4308_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x29:
        {
// switch_4308_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15632;
            var_72 = 15496;
            var_80 = 15352;
            var_88 = 15200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x2a:
        {
// switch_4308_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16024;
            var_72 = 15904;
            var_80 = 15776;
            var_88 = 15640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x2b:
        {
// switch_4308_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16440;
            var_72 = 16312;
            var_80 = 16176;
            var_88 = 16032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x2c:
        {
// switch_4308_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16880;
            var_72 = 16744;
            var_80 = 16600;
            var_88 = 16448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x2d:
        {
// switch_4308_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x2e:
        {
// switch_4308_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17200;
            var_72 = 17104;
            var_80 = 17000;
            var_88 = 16888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x2f:
        {
// switch_4308_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17592;
            var_72 = 17472;
            var_80 = 17344;
            var_88 = 17208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x30:
        {
// switch_4308_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17984;
            var_72 = 17864;
            var_80 = 17736;
            var_88 = 17600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x31:
        {
// switch_4308_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x32:
        {
// switch_4308_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x33:
        {
// switch_4308_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18376;
            var_72 = 18256;
            var_80 = 18128;
            var_88 = 17992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x34:
        {
// switch_4308_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18744;
            var_72 = 18632;
            var_80 = 18512;
            var_88 = 18384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x35:
        {
// switch_4308_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19080;
            var_80 = 18920;
            var_88 = 18752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x36:
        {
// switch_4308_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19600;
            var_72 = 19488;
            var_80 = 19368;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x37:
        {
// switch_4308_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x38:
        {
// switch_4308_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19968;
            var_72 = 19856;
            var_80 = 19736;
            var_88 = 19608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4308_case_default
        }
        case 0x39:
        {
// switch_4308_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x3a:
        {
// switch_4308_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x3b:
        {
// switch_4308_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x3c:
        {
// switch_4308_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x3d:
        {
// switch_4308_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
        case 0x3e:
        {
// switch_4308_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_4308_case_default
        }
    }
}
// fun_4B00
fun_4B00() {
    pri = arg_4;
    OP_JNZ lab_4B38
    var_8 = 0;
    pri = fun_0F38()
// lab_4B38
    pri = arg_1;
    switch (pri) {
// switch_5F10
        case default:
        {
// switch_5F10_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1608(var_264)
            OP_JZER lab_64D8
            pri = arg_3;
            switch (pri) {
// switch_6480
                case default:
                {
// switch_6480_case_default
                    OP_JUMP lab_6790
// lab_6790
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6800
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6800
                    var_8 = 0;
                    pri = fun_0F78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6480_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6480_case_default
                }
                case 0x2:
                {
// switch_6480_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6480_case_default
                }
                case 0x3:
                {
// switch_6480_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_6480_case_default
                }
            }
// lab_64D8
            pri = arg_1;
            OP_JZER lab_6528
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6528
            pri = 0;
            OP_JUMP lab_6530
// lab_6528
            pri = 1;
// lab_6530
            OP_JZER lab_6598
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A28(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6598
            pri = 1;
            OP_JUMP lab_65A0
// lab_6598
            pri = 0;
// lab_65A0
            OP_JZER lab_65F0
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6790
// lab_65F0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6658
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6790
// lab_6658
            var_16 = 22096;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            var_176 = 22200;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22216;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5F10_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1:
        {
// switch_5F10_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2:
        {
// switch_5F10_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x3:
        {
// switch_5F10_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x4:
        {
// switch_5F10_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x5:
        {
// switch_5F10_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_5F10_case_default
        }
        case 0x6:
        {
// switch_5F10_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x7:
        {
// switch_5F10_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x8:
        {
// switch_5F10_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x9:
        {
// switch_5F10_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0xa:
        {
// switch_5F10_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0xb:
        {
// switch_5F10_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0xc:
        {
// switch_5F10_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0xd:
        {
// switch_5F10_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0xe:
        {
// switch_5F10_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0xf:
        {
// switch_5F10_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x10:
        {
// switch_5F10_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x11:
        {
// switch_5F10_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x12:
        {
// switch_5F10_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x13:
        {
// switch_5F10_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x14:
        {
// switch_5F10_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x15:
        {
// switch_5F10_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x16:
        {
// switch_5F10_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x17:
        {
// switch_5F10_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x18:
        {
// switch_5F10_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x19:
        {
// switch_5F10_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1a:
        {
// switch_5F10_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1b:
        {
// switch_5F10_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1c:
        {
// switch_5F10_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1d:
        {
// switch_5F10_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1e:
        {
// switch_5F10_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x1f:
        {
// switch_5F10_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x20:
        {
// switch_5F10_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x21:
        {
// switch_5F10_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x22:
        {
// switch_5F10_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x23:
        {
// switch_5F10_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x24:
        {
// switch_5F10_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x25:
        {
// switch_5F10_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x26:
        {
// switch_5F10_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x27:
        {
// switch_5F10_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x28:
        {
// switch_5F10_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x29:
        {
// switch_5F10_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2a:
        {
// switch_5F10_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2b:
        {
// switch_5F10_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2c:
        {
// switch_5F10_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2d:
        {
// switch_5F10_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2e:
        {
// switch_5F10_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x2f:
        {
// switch_5F10_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x30:
        {
// switch_5F10_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x31:
        {
// switch_5F10_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x32:
        {
// switch_5F10_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x33:
        {
// switch_5F10_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x34:
        {
// switch_5F10_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x35:
        {
// switch_5F10_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x36:
        {
// switch_5F10_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x37:
        {
// switch_5F10_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x38:
        {
// switch_5F10_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x39:
        {
// switch_5F10_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x3a:
        {
// switch_5F10_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x3b:
        {
// switch_5F10_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x3c:
        {
// switch_5F10_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x3d:
        {
// switch_5F10_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
        case 0x3e:
        {
// switch_5F10_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_5F10_case_default
        }
    }
}
// fun_6830
fun_6830() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6A40(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22264;
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
    var_424 = 22320;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22336;
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
    OP_JZER lab_6A28
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6A28
    pri = 0;
    return pri;
}
// fun_6A40
fun_6A40() {
    var_8 = arg_1;
    var_16 = 22384;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_09E8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6A88
fun_6A88() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6B88
        case default:
        {
// switch_6B88_case_default
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
// switch_6B88_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6B88_case_default
        }
        case 0x1:
        {
// switch_6B88_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6B88_case_default
        }
        case 0x2:
        {
// switch_6B88_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6B88_case_default
        }
        case 0x3:
        {
// switch_6B88_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6B88_case_default
        }
    }
}
// fun_6C48
fun_6C48() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_6C98
// lab_6C98
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22488;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6D10
    OP_JUMP lab_6D40
// lab_6D10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_6C98
// lab_6D40
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_6DC8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4B00(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_18D8(var_56)
// lab_6DC8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6E30
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14E0(var_24, var_16)
// lab_6E30
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6EF0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A60(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_07E0(var_88, var_80, var_72, var_64, var_56)
// lab_6EF0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6F30
    pri = 0;
    return pri;
// lab_6F30
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7078
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 22608;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09B0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7040
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_7078
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0888(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0888(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A60(var_40)
    pri = 0;
    return pri;
// lab_7040
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
}
// fun_7100
fun_7100() {
    pri = 22744;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7188
// lab_7188
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7308
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_72F8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7248
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7248
    pri = 0;
    OP_JUMP lab_7250
// lab_7308
    pri = 0;
    return pri;
// lab_72F8
    OP_JUMP lab_7180
// lab_7180
    OP_INC_P_S -936
// lab_7248
    pri = 1;
// lab_7250
    OP_JZER lab_72C8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_72C0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_72C8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_72C0
}
// fun_7328
fun_7328() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_73C0
    var_8 = 1;
    var_16 = 0;
    var_24 = 23664;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_18B0()
// lab_73C0
    pri = arg_4;
    OP_JZER lab_73F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1908(var_8)
// lab_73F8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7450
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7450
    pri = 0;
    OP_JUMP lab_7458
// lab_7450
    pri = 1;
// lab_7458
    OP_JZER lab_7520
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7520
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_74F8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_17F0(var_32, var_24)
    OP_JUMP lab_7520
// lab_7520
    pri = arg_2;
    OP_JZER lab_75F8
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_75C8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14E0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0730(var_40)
    OP_JUMP lab_75F8
// lab_75F8
    pri = arg_3;
    OP_JZER lab_7630
    var_8 = 1;
    var_16 = 8;
    pri = fun_1878(var_8)
// lab_7630
    pri = 0;
    return pri;
// lab_75C8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
// lab_74F8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_17F0(var_16, var_8)
}
// fun_7640
fun_7640() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7100(var_24)
    pri = 0;
    return pri;
}
// fun_76A8
fun_76A8() {
    pri = g_mode;
    switch (pri) {
// switch_7790
        case default:
        {
// switch_7790_case_default
            pri = CommandNOP()
            OP_JUMP lab_77E8
// lab_77E8
            pri = 0;
            return pri;
        }
        case 0xc49bde1ea7fdccfc:
        {
// switch_7790_case_0xc49bde1ea7fdccfc
            var_8 = 0;
            pri = fun_BCC0()
            OP_JUMP lab_77E8
        }
        case 0x0:
        {
// switch_7790_case_0x0
            var_8 = 0;
            pri = fun_77F8()
            OP_JUMP lab_77E8
        }
        case 0x513c87d1896dae2:
        {
// switch_7790_case_0x513c87d1896dae2
            var_8 = 0;
            pri = fun_BD08()
            OP_JUMP lab_77E8
        }
        case 0x58a9b821e487b3d8:
        {
// switch_7790_case_0x58a9b821e487b3d8
            var_8 = 0;
            pri = fun_BB68()
            OP_JUMP lab_77E8
        }
    }
}
// fun_77F8
fun_77F8() {
    pri = 0;
    return pri;
}
// fun_7810
fun_7810() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7328(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7868
fun_7868() {
    var_8 = -3147750900567566230;
    var_16 = 8;
    pri = fun_0438(var_8)
    pri = 0;
    return pri;
}
// fun_78A8
fun_78A8() {
    var_8 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_78D8
fun_78D8() {
    var_8 = 1;
    var_16 = -1822226077523994044;
    var_24 = 16;
    pri = fun_06F0(var_16, var_8)
    var_32 = 1;
    var_40 = -1822231575082135099;
    var_48 = 16;
    pri = fun_06F0(var_40, var_32)
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = -3147750900567566230;
    var_72 = 16;
    pri = fun_06B8(var_64, var_56)
    var_80 = 1;
    var_88 = 8;
    pri = fun_0090(var_80)
    var_96 = 0;
    var_104 = 4631952216750555136;
    var_112 = 3;
    OP_PUSH5_C 4673987046558222254, 4612721846341683118, 4673840756536146657, 4674111673452451594, 4640897843354140672
    var_120 = 4673840756536146657;
    var_128 = 25;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 6905620846586353737, 8802641224559852288
    var_168 = 48;
    pri = fun_0830(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_0888(var_176)
    var_192 = 0;
    pri = fun_2738()
    var_200 = 30;
    var_208 = 8;
    pri = fun_0090(var_200)
    var_216 = 8802641224559852288;
    var_224 = 8;
    pri = fun_0888(var_216)
    var_232 = 0;
    var_240 = -1822231575082135099;
    var_248 = 16;
    pri = fun_06B8(var_240, var_232)
    var_256 = 0;
    var_264 = 4633739582852667802;
    var_272 = 0;
    OP_PUSH5_C 4673926501950438769, -4591571816591644426, 4673860643952714056, 4673930177068054610, -4592113655921812439
    var_280 = 4673864593948236841;
    var_288 = 1;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    pri = fun_2738()
    var_304 = 0;
    var_312 = 4633739582852667802;
    var_320 = 0;
    OP_PUSH5_C 4673916309477649285, -4590068740216009523, 4673849690068122337, 4673919984595265126, -4590610579546177536
    var_328 = 4673853640063645123;
    var_336 = 300;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 2895981217777046770;
    var_352 = 8;
    pri = fun_0438(var_344)
    var_360 = 0;
    pri = fun_0468()
    var_368 = 1;
    var_376 = -3147750900567566230;
    var_384 = 16;
    pri = fun_06B8(var_376, var_368)
    var_392 = 1;
    OP_PUSH4_C -4587338432941916160, 4673989295059501056, 4673940916547878912, 2895981217777046770
    var_400 = 40;
    pri = fun_0610(var_392, var_384, var_376, var_368, var_360)
    var_408 = 1;
    var_416 = 1;
    var_424 = -40;
    pri = float(var_424)
    var_432 = pri;
    var_440 = 29912;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 29600;
    pri = float(var_456)
    var_464 = pri;
    var_472 = 8802641224559852288;
    var_480 = 48;
    pri = fun_0660(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 1;
    var_496 = 1;
    OP_PUSH4_C 4636251747019810406, 4673983797501362176, 4673802652960686080, -1822231575082135099
    var_504 = 48;
    pri = fun_0660(var_496, var_488, var_480, var_472, var_464, var_456)
    var_512 = 1;
    var_520 = 1;
    OP_PUSH4_C 4639129828656676864, 4674016782850195456, 4673810624419987456, -1822226077523994044
    var_528 = 48;
    pri = fun_0660(var_520, var_512, var_504, var_496, var_488, var_480)
    var_536 = 30;
    var_544 = 8;
    pri = fun_0090(var_536)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C -6555518660507460465, -1822226077523994044
    var_592 = 56;
    pri = fun_2150(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_2298(var_600)
    var_616 = 0;
    pri = fun_2358()
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C -2297642652354575951, -1822231575082135099
    var_664 = 56;
    pri = fun_2150(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 1;
    var_680 = 8;
    pri = fun_2298(var_672)
    var_688 = 0;
    pri = fun_2358()
    var_696 = 50;
    var_704 = 8;
    pri = fun_0090(var_696)
    var_712 = 23712;
    pri = SoundPostEvent(var_712)
    var_720 = 1;
    var_728 = -1822231575082135099;
    var_736 = 16;
    pri = fun_06B8(var_728, var_720)
    var_744 = 0;
    var_752 = 4631952216750555136;
    var_760 = 0;
    OP_PUSH5_C 4673980449488455598, -4592264245034352640, 4673835665797310054, 4674065931019957043, 4631717185145001738
    var_768 = 4673881801305211535;
    var_776 = 1;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 0;
    pri = fun_2738()
    var_792 = 10;
    var_800 = 8;
    pri = fun_0090(var_792)
    var_808 = 1;
    var_816 = 1;
    var_824 = -1;
    var_832 = -1;
    var_840 = 0;
    var_848 = 8;
    var_856 = -1822226077523994044;
    var_864 = 56;
    pri = fun_27C8(var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_872 = 0;
    var_880 = 3;
    var_888 = 0;
    var_896 = 100;
    var_904 = -1;
    OP_PUSH2_C -6555517560995832254, -1822226077523994044
    var_912 = 56;
    pri = fun_2150(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_920 = 1;
    var_928 = 8;
    pri = fun_2298(var_920)
    var_936 = 0;
    pri = fun_2358()
    var_944 = 0;
    pri = fun_0468()
    var_952 = 1;
    var_960 = 1;
    OP_PUSH4_C -4587753608532564378, 4673973627018805248, 4673913703635091456, 2895981217777046770
    var_968 = 48;
    pri = fun_0660(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 1;
    var_984 = 2895981217777046770;
    var_992 = 16;
    pri = fun_06B8(var_984, var_976)
    var_1000 = 1;
    var_1008 = 0;
    var_1016 = 50;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH4_C 4673989295059501056, 4673882367553699840, 4607182418800017408, 2895981217777046770
    var_1048 = 72;
    pri = fun_0768(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 2895981217777046770;
    var_1064 = 8;
    pri = fun_0888(var_1056)
    var_1072 = 0;
    pri = fun_2738()
    var_1080 = 1;
    var_1088 = 3;
    var_1096 = 0;
    var_1104 = 8;
    var_1112 = -1822226077523994044;
    var_1120 = 40;
    pri = fun_4B00(var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1128 = -1822226077523994044;
    var_1136 = 8;
    pri = fun_0A60(var_1128)
    var_1144 = 1;
    var_1152 = 1;
    var_1160 = -1;
    OP_PUSH2_C 2895981217777046770, 8802641224559852288
    var_1168 = 40;
    pri = fun_0FB8(var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1176 = 1;
    var_1184 = 1;
    var_1192 = -1;
    OP_PUSH2_C 2895981217777046770, -1822226077523994044
    var_1200 = 40;
    pri = fun_0FB8(var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1208 = 1;
    var_1216 = 1;
    var_1224 = -1;
    OP_PUSH2_C 2895981217777046770, -1822231575082135099
    var_1232 = 40;
    pri = fun_0FB8(var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1240 = 0;
    var_1248 = 3;
    var_1256 = 0;
    var_1264 = 100;
    var_1272 = -1;
    OP_PUSH2_C 6793378192141021884, 2895981217777046770
    var_1280 = 56;
    pri = fun_2150(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 1;
    var_1296 = 8;
    pri = fun_2298(var_1288)
    var_1304 = 0;
    pri = fun_2358()
    var_1312 = 0;
    var_1320 = 3;
    var_1328 = 0;
    var_1336 = 100;
    var_1344 = -1;
    OP_PUSH2_C -6555516461484204043, -1822226077523994044
    var_1352 = 56;
    pri = fun_2150(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1360 = 1;
    var_1368 = 8;
    pri = fun_2298(var_1360)
    var_1376 = 0;
    pri = fun_2358()
    var_1384 = -1;
    var_1392 = -1822226077523994044;
    var_1400 = 16;
    pri = fun_14E0(var_1392, var_1384)
    var_1408 = 1;
    var_1416 = 0;
    var_1424 = 50;
    pri = float(var_1424)
    var_1432 = pri;
    var_1440 = 0;
    var_1448 = 0;
    OP_PUSH4_C 4673997816274616320, 4673780662728130560, 4607182418800017408, -1822226077523994044
    var_1456 = 72;
    pri = fun_0768(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1464 = 20;
    var_1472 = 8;
    pri = fun_0090(var_1464)
    var_1480 = 1;
    var_1488 = 0;
    var_1496 = 50;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 30800;
    pri = float(var_1528)
    var_1536 = pri;
    var_1544 = 27600;
    pri = float(var_1544)
    var_1552 = pri;
    OP_PUSH2_C 4607182418800017408, 2895981217777046770
    var_1560 = 72;
    pri = fun_0768(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1568 = -1822226077523994044;
    var_1576 = 8;
    pri = fun_0888(var_1568)
    var_1584 = -1;
    var_1592 = 8802641224559852288;
    var_1600 = 16;
    pri = fun_14E0(var_1592, var_1584)
    var_1608 = -1;
    var_1616 = -1822231575082135099;
    var_1624 = 16;
    pri = fun_14E0(var_1616, var_1608)
    var_1632 = 0;
    var_1640 = 0;
    var_1648 = 0;
    var_1656 = 0;
    OP_PUSH2_C 2895981217777046770, -1822226077523994044
    var_1664 = 48;
    pri = fun_0830(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1672 = -1822226077523994044;
    var_1680 = 8;
    pri = fun_0888(var_1672)
    var_1688 = 30;
    var_1696 = 8;
    pri = fun_0090(var_1688)
    var_1704 = 1;
    var_1712 = 0;
    var_1720 = 50;
    pri = float(var_1720)
    var_1728 = pri;
    var_1736 = 0;
    var_1744 = 0;
    var_1752 = 30150;
    pri = float(var_1752)
    var_1760 = pri;
    var_1768 = 29400;
    pri = float(var_1768)
    var_1776 = pri;
    OP_PUSH2_C 4607182418800017408, -1822226077523994044
    var_1784 = 72;
    pri = fun_0768(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = -1822226077523994044;
    var_1800 = 8;
    pri = fun_0888(var_1792)
    var_1808 = 0;
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = 0;
    OP_PUSH2_C 8802641224559852288, -1822226077523994044
    var_1840 = 48;
    pri = fun_0830(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
    var_1848 = 0;
    var_1856 = 0;
    var_1864 = 0;
    var_1872 = 0;
    OP_PUSH2_C -1822226077523994044, 8802641224559852288
    var_1880 = 48;
    pri = fun_0830(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1888 = 10;
    var_1896 = 8;
    pri = fun_0090(var_1888)
    var_1904 = -1822226077523994044;
    var_1912 = 8;
    pri = fun_0888(var_1904)
    var_1920 = 8802641224559852288;
    var_1928 = 8;
    pri = fun_0888(var_1920)
    var_1936 = 0;
    var_1944 = 2895981217777046770;
    var_1952 = 16;
    pri = fun_06B8(var_1944, var_1936)
    var_1960 = 1;
    var_1968 = -3147750900567566230;
    var_1976 = 16;
    pri = fun_06B8(var_1968, var_1960)
    var_1984 = 1;
    var_1992 = 1;
    OP_PUSH4_C -4588647291583620710, 4673970878239735808, 4673915078024626176, -3147750900567566230
    var_2000 = 48;
    pri = fun_0660(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2008 = 30;
    var_2016 = 8;
    pri = fun_0090(var_2008)
    var_2024 = 1;
    var_2032 = 0;
    var_2040 = 100;
    pri = float(var_2040)
    var_2048 = pri;
    var_2056 = 0;
    var_2064 = 0;
    OP_PUSH4_C 4673985171890896896, 4673881542919979008, 4607182418800017408, -3147750900567566230
    var_2072 = 72;
    pri = fun_0768(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2080 = -3147750900567566230;
    var_2088 = 8;
    pri = fun_0888(var_2080)
    var_2096 = 1;
    var_2104 = 1;
    var_2112 = -1;
    OP_PUSH2_C -3147750900567566230, 8802641224559852288
    var_2120 = 40;
    pri = fun_0FB8(var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2128 = 1;
    var_2136 = 1;
    var_2144 = -1;
    OP_PUSH2_C 8802641224559852288, -3147750900567566230
    var_2152 = 40;
    pri = fun_0FB8(var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2160 = 1;
    var_2168 = 1;
    var_2176 = -1;
    OP_PUSH2_C -3147750900567566230, -1822226077523994044
    var_2184 = 40;
    pri = fun_0FB8(var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2192 = 1;
    var_2200 = 1;
    var_2208 = -1;
    OP_PUSH2_C -3147750900567566230, -1822226077523994044
    var_2216 = 40;
    pri = fun_0FB8(var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2224 = 0;
    var_2232 = 3;
    var_2240 = 0;
    var_2248 = 100;
    var_2256 = -1;
    OP_PUSH2_C -7388416985458219627, -3147750900567566230
    var_2264 = 56;
    pri = fun_2150(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2272 = 1;
    var_2280 = 8;
    pri = fun_2298(var_2272)
    var_2288 = 0;
    pri = fun_2358()
    var_2296 = -1;
    var_2304 = 8802641224559852288;
    var_2312 = 16;
    pri = fun_14E0(var_2304, var_2296)
    var_2320 = -1;
    var_2328 = -3147750900567566230;
    var_2336 = 16;
    pri = fun_14E0(var_2328, var_2320)
    var_2344 = 0;
    var_2352 = 1;
    var_2360 = -3147750900567566230;
    var_2368 = 24;
    pri = fun_6830(var_2360, var_2352, var_2344)
    var_2376 = 1;
    var_2384 = 8;
    pri = fun_0090(var_2376)
    var_2392 = -3147750900567566230;
    var_2400 = 8;
    pri = fun_0A60(var_2392)
    var_2408 = 0;
    var_2416 = 3;
    var_2424 = 0;
    var_2432 = 100;
    var_2440 = -1;
    OP_PUSH2_C -7388420283993104260, -3147750900567566230
    var_2448 = 56;
    pri = fun_2150(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2456 = 1;
    var_2464 = 8;
    pri = fun_2298(var_2456)
    var_2472 = 0;
    pri = fun_2358()
    var_2480 = 1;
    var_2488 = 1;
    var_2496 = -1;
    var_2504 = -1;
    var_2512 = 0;
    var_2520 = 11;
    var_2528 = -1822226077523994044;
    var_2536 = 56;
    pri = fun_27C8(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480)
    var_2544 = 0;
    var_2552 = 3;
    var_2560 = 0;
    var_2568 = 101;
    var_2576 = 2;
    OP_PUSH2_C -6555524158065601520, -1822226077523994044
    var_2584 = 56;
    pri = fun_2150(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2592 = 1;
    var_2600 = 8;
    pri = fun_2298(var_2592)
    var_2608 = 0;
    pri = fun_2358()
    var_2616 = 1;
    var_2624 = 1;
    var_2632 = -1;
    var_2640 = -1;
    var_2648 = 0;
    var_2656 = 11;
    var_2664 = -1822231575082135099;
    var_2672 = 56;
    pri = fun_27C8(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616)
    var_2680 = 0;
    var_2688 = 3;
    var_2696 = 0;
    var_2704 = 101;
    var_2712 = 2;
    OP_PUSH2_C -2297645950889460584, -1822231575082135099
    var_2720 = 56;
    pri = fun_2150(var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2728 = 1;
    var_2736 = 8;
    pri = fun_2298(var_2728)
    var_2744 = 0;
    pri = fun_2358()
    var_2752 = 0;
    var_2760 = 0;
    var_2768 = -3147750900567566230;
    var_2776 = 24;
    pri = fun_6830(var_2768, var_2760, var_2752)
    var_2784 = 1;
    var_2792 = 8;
    pri = fun_0090(var_2784)
    var_2800 = -3147750900567566230;
    var_2808 = 8;
    pri = fun_0A60(var_2800)
    var_2816 = 0;
    var_2824 = 3;
    var_2832 = 0;
    var_2840 = 100;
    var_2848 = -1;
    OP_PUSH2_C -7388419184481476049, -3147750900567566230
    var_2856 = 56;
    pri = fun_2150(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2864 = 1;
    var_2872 = 8;
    pri = fun_2298(var_2864)
    var_2880 = 0;
    pri = fun_2358()
    var_2888 = 0;
    var_2896 = -1822226077523994044;
    var_2904 = 16;
    pri = fun_06F0(var_2896, var_2888)
    var_2912 = 0;
    var_2920 = -1822231575082135099;
    var_2928 = 16;
    pri = fun_06F0(var_2920, var_2912)
    var_2936 = 0;
    var_2944 = 0;
    var_2952 = 0;
    var_2960 = 0;
    OP_PUSH2_C -3147750900567566230, 8802641224559852288
    var_2968 = 48;
    pri = fun_0830(var_2960, var_2952, var_2944, var_2936, var_2928, var_2920)
    var_2976 = 0;
    var_2984 = 0;
    var_2992 = 0;
    var_3000 = 0;
    OP_PUSH2_C 8802641224559852288, -3147750900567566230
    var_3008 = 48;
    pri = fun_0830(var_3000, var_2992, var_2984, var_2976, var_2968, var_2960)
    var_3016 = 10;
    var_3024 = 8;
    pri = fun_0090(var_3016)
    var_3032 = 8802641224559852288;
    var_3040 = 8;
    pri = fun_0888(var_3032)
    var_3048 = -3147750900567566230;
    var_3056 = 8;
    pri = fun_0888(var_3048)
    var_3064 = 0;
    var_3072 = 8;
    pri = fun_9340(var_3064)
    return pri;
}
// fun_9340
fun_9340() {
    pri = arg_0;
    OP_JZER lab_93B0
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -3147750900567566230;
    var_56 = 48;
    pri = fun_6A88(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_93B0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -7388422483016360682, -3147750900567566230
    var_48 = 56;
    pri = fun_2150(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2298(var_56)
    var_72 = 0;
    var_80 = -4703513044913913901;
    var_88 = 0;
    var_96 = 24;
    pri = fun_2388(var_88, var_80, var_72)
    var_104 = 0;
    var_112 = -4703511945402285690;
    var_120 = 1;
    var_128 = 24;
    pri = fun_2388(var_120, var_112, var_104)
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 1;
    var_176 = 32;
    pri = fun_2470(var_168, var_160, var_152, var_144)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9F90
        case default:
        {
// switch_9F90_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9F90_case_0x0
            pri = arg_0;
            OP_JZER lab_9A18
            var_8 = 0;
            var_16 = 0;
            var_24 = 0;
            var_32 = -3147750900567566230;
            var_40 = 32;
            pri = fun_6C48(var_32, var_24, var_16, var_8)
            pri = EvCameraStart()
            var_48 = 0;
            var_56 = 3;
            var_64 = 0;
            var_72 = 100;
            var_80 = -1;
            OP_PUSH2_C -7388421383504732471, -3147750900567566230
            var_88 = 56;
            pri = fun_2150(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 1;
            var_104 = 8;
            pri = fun_2298(var_96)
            var_112 = 0;
            pri = fun_2358()
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 0;
            OP_PUSH2_C -1822226077523994044, -3147750900567566230
            var_152 = 48;
            pri = fun_0830(var_144, var_136, var_128, var_120, var_112, var_104)
            var_160 = 1;
            var_168 = 0;
            var_176 = 23664;
            var_184 = 8;
            var_192 = 32;
            pri = fun_0310(var_184, var_176, var_168, var_160)
            var_200 = 0;
            pri = fun_0380()
            var_208 = 1;
            var_216 = 1;
            var_224 = -1;
            var_232 = -1;
            var_240 = 0;
            var_248 = 11;
            var_256 = -1822226077523994044;
            var_264 = 56;
            pri = fun_27C8(var_256, var_248, var_240, var_232, var_224, var_216, var_208)
            var_272 = 1;
            var_280 = 1;
            var_288 = -1;
            var_296 = -1;
            var_304 = 0;
            var_312 = 11;
            var_320 = -1822231575082135099;
            var_328 = 56;
            pri = fun_27C8(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
            var_336 = 1;
            var_344 = 1;
            var_352 = -40;
            pri = float(var_352)
            var_360 = pri;
            var_368 = 29912;
            pri = float(var_368)
            var_376 = pri;
            var_384 = 29600;
            pri = float(var_384)
            var_392 = pri;
            var_400 = 8802641224559852288;
            var_408 = 48;
            pri = fun_0660(var_400, var_392, var_384, var_376, var_368, var_360)
            var_416 = 1;
            var_424 = 1;
            OP_PUSH4_C -4589027282802180096, 4673985171890896896, 4673881542919979008, -3147750900567566230
            var_432 = 48;
            pri = fun_0660(var_424, var_416, var_408, var_400, var_392, var_384)
            var_440 = 1;
            var_448 = 1;
            OP_PUSH4_C 4639129828656676864, 4674016782850195456, 4673810624419987456, -1822226077523994044
            var_456 = 48;
            pri = fun_0660(var_448, var_440, var_432, var_424, var_416, var_408)
            var_464 = 1;
            var_472 = 1;
            OP_PUSH4_C 4636251747019810406, 4673983797501362176, 4673802652960686080, -1822231575082135099
            var_480 = 48;
            pri = fun_0660(var_472, var_464, var_456, var_448, var_440, var_432)
            var_488 = 0;
            var_496 = 4631952216750555136;
            var_504 = 0;
            OP_PUSH5_C 4673980449488455598, -4592264245034352640, 4673835665797310054, 4674065931019957043, 4631717185145001738
            var_512 = 4673881801305211535;
            var_520 = 1;
            pri = EvCameraMove(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
            var_528 = 0;
            pri = fun_2738()
            var_536 = -3147750900567566230;
            var_544 = 8;
            pri = fun_0888(var_536)
            var_552 = 23872;
            pri = SoundPostEvent(var_552)
            var_560 = 24032;
            var_568 = 8;
            var_576 = 16;
            pri = fun_02B0(var_568, var_560)
            var_584 = 0;
            pri = fun_0380()
            OP_JUMP lab_9B98
// lab_9A18
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -7388421383504732471, -3147750900567566230
            var_48 = 56;
            pri = fun_2150(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2298(var_56)
            var_72 = 0;
            pri = fun_2358()
            var_80 = 0;
            var_88 = 0;
            var_96 = 0;
            var_104 = 0;
            OP_PUSH2_C -1822226077523994044, 8802641224559852288
            var_112 = 48;
            pri = fun_0830(var_104, var_96, var_88, var_80, var_72, var_64)
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 0;
            OP_PUSH2_C -1822226077523994044, -3147750900567566230
            var_152 = 48;
            pri = fun_0830(var_144, var_136, var_128, var_120, var_112, var_104)
            var_160 = 8802641224559852288;
            var_168 = 8;
            pri = fun_0888(var_160)
            var_176 = -3147750900567566230;
            var_184 = 8;
            pri = fun_0888(var_176)
// lab_9B98
            var_8 = 0;
            pri = fun_9FE0()
            pri = 1;
            return pri;
            OP_JUMP switch_9F90_case_default
        }
        case 0x1:
        {
// switch_9F90_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -7388424682039617104, -3147750900567566230
            var_48 = 56;
            pri = fun_2150(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_2298(var_56)
            var_72 = 0;
            pri = fun_2358()
            var_80 = 24080;
            pri = SoundPostEvent(var_80)
            pri = arg_0;
            OP_JZER lab_9CE0
            var_88 = 0;
            var_96 = 0;
            var_104 = 0;
            var_112 = -3147750900567566230;
            var_120 = 32;
            pri = fun_6C48(var_112, var_104, var_96, var_88)
// lab_9CE0
            var_8 = 1;
            var_16 = 0;
            var_24 = 23664;
            var_32 = 8;
            var_40 = 32;
            pri = fun_0310(var_32, var_24, var_16, var_8)
            var_48 = 0;
            pri = fun_0380()
            var_56 = 1;
            var_64 = 3;
            var_72 = 0;
            var_80 = 11;
            var_88 = -1822226077523994044;
            var_96 = 40;
            pri = fun_4B00(var_88, var_80, var_72, var_64, var_56)
            var_104 = 1;
            var_112 = 3;
            var_120 = 0;
            var_128 = 11;
            var_136 = -1822231575082135099;
            var_144 = 40;
            pri = fun_4B00(var_136, var_128, var_120, var_112, var_104)
            var_152 = 1;
            var_160 = 1;
            var_168 = 90;
            pri = float(var_168)
            var_176 = pri;
            var_184 = 29880;
            pri = float(var_184)
            var_192 = pri;
            var_200 = 29900;
            pri = float(var_200)
            var_208 = pri;
            var_216 = 8802641224559852288;
            var_224 = 48;
            pri = fun_0660(var_216, var_208, var_200, var_192, var_184, var_176)
            var_232 = 5;
            var_240 = 8;
            pri = fun_0090(var_232)
            var_248 = 3;
            var_256 = 1;
            pri = EvCameraEnd(var_256, var_248)
            var_264 = 15;
            var_272 = 8;
            pri = fun_0090(var_264)
            var_280 = -1822226077523994044;
            var_288 = 8;
            pri = fun_0A60(var_280)
            var_296 = -1822231575082135099;
            var_304 = 8;
            pri = fun_0A60(var_296)
            var_312 = 24032;
            var_320 = 8;
            var_328 = 16;
            pri = fun_02B0(var_320, var_312)
            var_336 = 0;
            pri = fun_0380()
            pri = 0;
            return pri;
            OP_JUMP switch_9F90_case_default
        }
    }
}
// fun_9FE0
fun_9FE0() {
    var_8 = 10;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 101;
    var_56 = 2;
    OP_PUSH2_C -2297644851377832373, -1822231575082135099
    var_64 = 56;
    pri = fun_2150(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2298(var_72)
    var_88 = 0;
    pri = fun_2358()
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 101;
    var_128 = 2;
    OP_PUSH2_C -6555523058553973309, -1822226077523994044
    var_136 = 56;
    pri = fun_2150(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_2298(var_144)
    var_160 = 0;
    pri = fun_2358()
    var_168 = -1;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 207;
    var_208 = 40;
    pri = fun_24E0(var_200, var_192, var_184, var_176, var_168)
    var_216 = 0;
    pri = fun_25F8()
    OP_JZER lab_A1C0
    var_224 = 0;
    pri = fun_BA98()
    var_232 = 0;
    pri = fun_26E8()
// lab_A1C0
    var_8 = -1;
    var_16 = -1822226077523994044;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
    var_32 = -1;
    var_40 = -1822231575082135099;
    var_48 = 16;
    pri = fun_14E0(var_40, var_32)
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4673980449488455598, -4592264245034352640, 4673835665797310054, 4674065931019957043, 4631717185145001738
    var_80 = 4673881801305211535;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_2738()
    var_104 = 15;
    var_112 = 8;
    pri = fun_0090(var_104)
    var_120 = 24032;
    var_128 = 8;
    var_136 = 16;
    pri = fun_02B0(var_128, var_120)
    var_144 = 0;
    pri = fun_0380()
    var_152 = 1;
    var_160 = 1;
    var_168 = -1;
    OP_PUSH2_C -3147750900567566230, 8802641224559852288
    var_176 = 40;
    pri = fun_0FB8(var_168, var_160, var_152, var_144, var_136)
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    OP_PUSH2_C 8802641224559852288, -3147750900567566230
    var_216 = 48;
    pri = fun_0830(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = -3147750900567566230;
    var_232 = 8;
    pri = fun_0888(var_224)
    var_240 = 1;
    var_248 = 1;
    var_256 = -1;
    var_264 = -1;
    var_272 = 0;
    var_280 = 9;
    var_288 = -3147750900567566230;
    var_296 = 56;
    pri = fun_27C8(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 0;
    var_312 = 3;
    var_320 = 0;
    var_328 = 100;
    var_336 = -1;
    OP_PUSH2_C -7388423582527988893, -3147750900567566230
    var_344 = 56;
    pri = fun_2150(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 1;
    var_360 = 8;
    pri = fun_2298(var_352)
    var_368 = 0;
    pri = fun_2358()
    var_376 = -1;
    var_384 = 8802641224559852288;
    var_392 = 16;
    pri = fun_14E0(var_384, var_376)
    var_400 = -1;
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    var_432 = 208;
    var_440 = 40;
    pri = fun_24E0(var_432, var_424, var_416, var_408, var_400)
    var_448 = 0;
    pri = fun_25F8()
    OP_JZER lab_A588
    var_456 = 0;
    pri = fun_BA98()
    var_464 = 0;
    pri = fun_26E8()
// lab_A588
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C -1822226077523994044, -3147750900567566230
    var_40 = 48;
    pri = fun_0830(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = -3147750900567566230;
    var_56 = 8;
    pri = fun_0888(var_48)
    var_64 = 0;
    var_72 = 4631952216750555136;
    var_80 = 0;
    OP_PUSH5_C 4673980449488455598, -4592264245034352640, 4673835665797310054, 4674065931019957043, 4631717185145001738
    var_88 = 4673881801305211535;
    var_96 = 1;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    pri = fun_2738()
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    var_136 = -1;
    var_144 = 0;
    var_152 = 9;
    var_160 = -1822226077523994044;
    var_168 = 56;
    pri = fun_27C8(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 1;
    var_192 = -1;
    var_200 = -1;
    var_208 = 0;
    var_216 = 10;
    var_224 = -1822231575082135099;
    var_232 = 56;
    pri = fun_27C8(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 15;
    var_248 = 8;
    pri = fun_0090(var_240)
    var_256 = 24032;
    var_264 = 8;
    var_272 = 16;
    pri = fun_02B0(var_264, var_256)
    var_280 = 0;
    pri = fun_0380()
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C -2297639353819691318, -1822231575082135099
    var_328 = 56;
    pri = fun_2150(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_2298(var_336)
    var_352 = 0;
    pri = fun_2358()
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C -6555521959042345098, -1822226077523994044
    var_400 = 56;
    pri = fun_2150(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_2298(var_408)
    var_424 = 0;
    pri = fun_2358()
    var_432 = 1;
    var_440 = 3;
    var_448 = 0;
    var_456 = 9;
    var_464 = -1822226077523994044;
    var_472 = 40;
    pri = fun_4B00(var_464, var_456, var_448, var_440, var_432)
    var_480 = 1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 10;
    var_512 = -1822231575082135099;
    var_520 = 40;
    pri = fun_4B00(var_512, var_504, var_496, var_488, var_480)
    var_528 = -1822226077523994044;
    var_536 = 8;
    pri = fun_0A60(var_528)
    var_544 = -1822231575082135099;
    var_552 = 8;
    pri = fun_0A60(var_544)
    var_560 = -1822226077523994044;
    var_568 = 8;
    pri = fun_0888(var_560)
    var_576 = -1822231575082135099;
    var_584 = 8;
    pri = fun_0888(var_576)
    var_592 = 1;
    var_600 = 0;
    var_608 = -90;
    pri = float(var_608)
    var_616 = pri;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH4_C 4674095123053674496, 4673729535437438976, 4611686018427387904, -1822226077523994044
    var_640 = 72;
    pri = fun_0768(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 1;
    var_656 = 0;
    var_664 = -90;
    pri = float(var_664)
    var_672 = pri;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH4_C 4674040422350192640, 4673637726216519680, 4611686018427387904, -1822231575082135099
    var_696 = 72;
    pri = fun_0768(var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_704 = 70;
    var_712 = 8;
    pri = fun_0090(var_704)
    var_720 = 24240;
    pri = SoundPostEvent(var_720)
    var_728 = 0;
    var_736 = -1822231575082135099;
    var_744 = 16;
    pri = fun_06B8(var_736, var_728)
    var_752 = 0;
    var_760 = -1822226077523994044;
    var_768 = 16;
    pri = fun_06B8(var_760, var_752)
    var_776 = 0;
    var_784 = 4628011567076605952;
    var_792 = 0;
    OP_PUSH5_C 4673984657869210911, -4593197334582148465, 4673868640151027057, 4674102852620417761, -4608285800708723180
    var_800 = 4673819219852137595;
    var_808 = 1;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 0;
    pri = fun_2738()
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    OP_PUSH2_C -3147750900567566230, 8802641224559852288
    var_856 = 48;
    pri = fun_0830(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    OP_PUSH2_C 8802641224559852288, -3147750900567566230
    var_896 = 48;
    pri = fun_0830(var_888, var_880, var_872, var_864, var_856, var_848)
    var_904 = 10;
    var_912 = 8;
    pri = fun_0090(var_904)
    var_920 = 0;
    var_928 = 3;
    var_936 = 0;
    var_944 = 100;
    var_952 = -1;
    OP_PUSH2_C -7388409288876822150, -3147750900567566230
    var_960 = 56;
    pri = fun_2150(var_952, var_944, var_936, var_928, var_920, var_912, var_904)
    var_968 = 1;
    var_976 = 8;
    pri = fun_2298(var_968)
    var_984 = 0;
    pri = fun_2358()
    var_992 = 0;
    var_1000 = 2;
    var_1008 = -3147750900567566230;
    var_1016 = 24;
    pri = fun_6830(var_1008, var_1000, var_992)
    var_1024 = 1;
    var_1032 = 8;
    pri = fun_0090(var_1024)
    var_1040 = -3147750900567566230;
    var_1048 = 8;
    pri = fun_0A60(var_1040)
    var_1056 = 10;
    var_1064 = 8;
    pri = fun_0090(var_1056)
    var_1072 = 1;
    var_1080 = 15;
    var_1088 = 20;
    var_1096 = 4;
    var_1104 = -3147750900567566230;
    var_1112 = 40;
    pri = fun_1070(var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1120 = 50;
    var_1128 = 8;
    pri = fun_0090(var_1120)
    var_1136 = 7;
    var_1144 = 7;
    var_1152 = -3147750900567566230;
    var_1160 = 24;
    pri = fun_15A0(var_1152, var_1144, var_1136)
    var_1168 = 0;
    var_1176 = 3;
    var_1184 = 0;
    var_1192 = 100;
    var_1200 = -1;
    OP_PUSH2_C -7388408189365193939, -3147750900567566230
    var_1208 = 56;
    pri = fun_2150(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1216 = 1;
    var_1224 = 8;
    pri = fun_2298(var_1216)
    var_1232 = 0;
    pri = fun_2358()
    var_1240 = -1;
    var_1248 = -3147750900567566230;
    var_1256 = 16;
    pri = fun_14E0(var_1248, var_1240)
    var_1264 = 0;
    var_1272 = 0;
    var_1280 = -3147750900567566230;
    var_1288 = 24;
    pri = fun_6830(var_1280, var_1272, var_1264)
    var_1296 = 1;
    var_1304 = 8;
    pri = fun_0090(var_1296)
    var_1312 = -3147750900567566230;
    var_1320 = 8;
    pri = fun_0A60(var_1312)
    var_1328 = 0;
    var_1336 = 4626238274723328819;
    var_1344 = 0;
    OP_PUSH5_C 4673988000384559350, 4628473186038411428, 4673879712233118761, 4674031670237635543, 4630743281725582868
    var_1352 = 4673861460340097679;
    var_1360 = 1;
    pri = EvCameraMove(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1368 = 0;
    pri = fun_2738()
    var_1376 = 0;
    var_1384 = 4626238274723328819;
    var_1392 = 0;
    OP_PUSH5_C 4673988000384559350, 4628473186038411428, 4673879712233118761, 4674017153935369830, 4630192998146113536
    var_1400 = 4673867529644283003;
    var_1408 = 300;
    pri = EvCameraMove(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1416 = 30;
    var_1424 = 8;
    pri = fun_0090(var_1416)
    var_1432 = 1;
    var_1440 = 10;
    var_1448 = 20;
    var_1456 = 7;
    var_1464 = -3147750900567566230;
    var_1472 = 40;
    pri = fun_1070(var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1480 = 70;
    var_1488 = 8;
    pri = fun_0090(var_1480)
    var_1496 = 0;
    var_1504 = 3;
    var_1512 = 0;
    var_1520 = 100;
    var_1528 = -1;
    OP_PUSH2_C -7387426325481390741, -3147750900567566230
    var_1536 = 56;
    pri = fun_2150(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 1;
    var_1552 = 8;
    pri = fun_2298(var_1544)
    var_1560 = 0;
    pri = fun_2358()
    var_1568 = 30;
    var_1576 = 8;
    pri = fun_0090(var_1568)
    var_1584 = 0;
    var_1592 = 4628011567076605952;
    var_1600 = 0;
    OP_PUSH5_C 4673984657869210911, -4593197334582148465, 4673868640151027057, 4674102852620417761, -4608285800708723180
    var_1608 = 4673819219852137595;
    var_1616 = 1;
    pri = EvCameraMove(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1624 = 0;
    pri = fun_2738()
    var_1632 = 10;
    var_1640 = -3147750900567566230;
    var_1648 = 16;
    pri = fun_14E0(var_1640, var_1632)
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C -7387427424993018952, -3147750900567566230
    var_1696 = 56;
    pri = fun_2150(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_2298(var_1704)
    var_1720 = 0;
    pri = fun_2358()
    var_1728 = -3147750900567566230;
    var_1736 = 8;
    pri = fun_0888(var_1728)
    var_1744 = 1;
    var_1752 = 0;
    var_1760 = 30;
    pri = float(var_1760)
    var_1768 = pri;
    var_1776 = 0;
    var_1784 = 0;
    OP_PUSH4_C 4673985171890896896, 4673703147158372352, 4611686018427387904, -3147750900567566230
    var_1792 = 72;
    pri = fun_0768(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1800 = 15;
    var_1808 = 8;
    pri = fun_0090(var_1800)
    var_1816 = 0;
    var_1824 = 4631037423076245504;
    var_1832 = 0;
    OP_PUSH5_C 4673867098085969101, -4585631990895607808, 4673824021969171907, 4674026898357170995, 4628768734763957617
    var_1840 = 4673900655180848824;
    var_1848 = 1;
    pri = EvCameraMove(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 0;
    pri = fun_2738()
    var_1864 = 0;
    var_1872 = 4631037423076245504;
    var_1880 = 3;
    OP_PUSH5_C 4673875608305968087, -4585631990895607808, 4673806267605162394, 4674035408577169981, 4628768734763957617
    var_1888 = 4673882903565618381;
    var_1896 = 300;
    pri = EvCameraMove(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1904 = 8802641224559852288;
    var_1912 = 8;
    pri = fun_0888(var_1904)
    var_1920 = 0;
    var_1928 = 0;
    var_1936 = 0;
    OP_PUSH2_C -4590209477704364851, 8802641224559852288
    var_1944 = 40;
    pri = fun_07E0(var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1952 = 8802641224559852288;
    var_1960 = 8;
    pri = fun_0888(var_1952)
    var_1968 = -3147750900567566230;
    var_1976 = 8;
    pri = fun_0888(var_1968)
    var_1984 = 60;
    var_1992 = 8;
    pri = fun_0090(var_1984)
    var_2000 = 0;
    var_2008 = 0;
    var_2016 = 0;
    var_2024 = 0;
    OP_PUSH2_C 6905620846586353737, 8802641224559852288
    var_2032 = 48;
    pri = fun_0830(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
    var_2040 = 1;
    var_2048 = 3;
    var_2056 = 0;
    var_2064 = 60;
    var_2072 = 6905620846586353737;
    var_2080 = 40;
    pri = fun_4B00(var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2088 = 6905620846586353737;
    var_2096 = 8;
    pri = fun_0A60(var_2088)
    var_2104 = 8802641224559852288;
    var_2112 = 8;
    pri = fun_0888(var_2104)
    var_2120 = 0;
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = 0;
    OP_PUSH2_C 8802641224559852288, 6905620846586353737
    var_2152 = 48;
    pri = fun_0830(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2160 = 6905620846586353737;
    var_2168 = 8;
    pri = fun_0888(var_2160)
    var_2176 = 10;
    var_2184 = 8;
    pri = fun_0090(var_2176)
    var_2192 = 1;
    var_2200 = 0;
    var_2208 = 30;
    pri = float(var_2208)
    var_2216 = pri;
    var_2224 = 0;
    var_2232 = 0;
    OP_PUSH4_C 4673951636786249728, 4673666863274655744, 4607182418800017408, 6905620846586353737
    var_2240 = 72;
    pri = fun_0768(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2248 = 60;
    var_2256 = 8;
    pri = fun_0090(var_2248)
    var_2264 = 1;
    var_2272 = 1;
    var_2280 = 30;
    OP_PUSH2_C 6905620846586353737, 8802641224559852288
    var_2288 = 40;
    pri = fun_0FB8(var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2296 = 6905620846586353737;
    var_2304 = 8;
    pri = fun_0888(var_2296)
    var_2312 = 0;
    pri = fun_2738()
    var_2320 = 3;
    var_2328 = 1000;
    pri = EvCameraEnd(var_2328, var_2320)
    pri = 0;
    return pri;
}
// fun_B968
fun_B968() {
    pri = 0;
    return pri;
}
// fun_B980
fun_B980() {
    pri = 0;
    return pri;
}
// fun_B998
fun_B998() {
    var_8 = 2895981217777046770;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = 6905620846586353737;
    var_32 = 8;
    pri = fun_05B8(var_24)
    var_40 = -1822231575082135099;
    var_48 = 8;
    pri = fun_05B8(var_40)
    var_56 = -1822226077523994044;
    var_64 = 8;
    pri = fun_05B8(var_56)
    var_72 = -3147750900567566230;
    var_80 = 8;
    pri = fun_05B8(var_72)
    var_88 = 930;
    var_96 = 8;
    pri = fun_7640(var_88)
    pri = 0;
    return pri;
}
// fun_BA98
fun_BA98() {
    var_8 = 2895981217777046770;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = 911;
    var_32 = 8;
    pri = fun_7640(var_24)
    pri = 0;
    return pri;
}
// fun_BAF8
fun_BAF8() {
    var_8 = 0;
    pri = fun_0468()
    var_16 = 6390823521086203626;
    pri = ReserveScript(var_16)
    pri = 0;
    return pri;
}
// fun_BB50
fun_BB50() {
    pri = 0;
    return pri;
}
// fun_BB68
fun_BB68() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7810()
    var_16 = 0;
    pri = fun_7868()
    var_24 = 0;
    pri = fun_78A8()
    var_32 = 0;
    pri = fun_78D8()
    OP_JZER lab_BC50
    var_40 = 0;
    pri = fun_B968()
    var_48 = 0;
    pri = fun_B998()
    var_56 = 0;
    pri = fun_BAF8()
    OP_JUMP lab_BC98
// lab_BC50
    var_8 = 0;
    pri = fun_B980()
    var_16 = 0;
    pri = fun_BA98()
    var_24 = 0;
    pri = fun_BB50()
// lab_BC98
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BCC0
fun_BCC0() {
    var_8 = 0;
    pri = fun_7868()
    var_16 = 0;
    pri = fun_B998()
    pri = 0;
    return pri;
}
// fun_BD08
fun_BD08() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_7328(var_40, var_32, var_24, var_16, var_8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_9340(var_56)
    OP_JZER lab_BDB0
    var_72 = 0;
    pri = fun_B998()
    var_80 = 0;
    pri = fun_BAF8()
// lab_BDB0
    pri = 0;
    return pri;
}
