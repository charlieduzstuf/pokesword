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
    pri = fun_05B8()
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
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05E0
fun_05E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0670
fun_0670() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
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
// fun_0720
fun_0720() {
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
    pri = fun_1710(var_8)
    OP_JZER lab_0900
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1740(var_24)
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
    pri = fun_1710(var_8)
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
    pri = fun_1710(var_8)
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
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15A0
fun_15A0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_15D8
fun_15D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1618
fun_1618() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1560(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_15D8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_16B8
fun_16B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15A0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1618(var_24)
    pri = 0;
    return pri;
}
// fun_1710
fun_1710() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1740
fun_1740() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1770
fun_1770() {
    OP_JUMP lab_1788
// lab_1788
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1818
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1808
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1818
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18A8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1898
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_18A8
    pri = 0;
    return pri;
// lab_1898
    OP_JUMP lab_18B8
// lab_18B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1788
    pri = 0;
    return pri;
// lab_1808
    OP_JUMP lab_18B8
}
// fun_18F8
fun_18F8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1770(var_40)
    pri = 0;
    return pri;
}
// fun_1980
fun_1980() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_19B8
fun_19B8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_19E0
fun_19E0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1A10
fun_1A10() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1A48
fun_1A48() {
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
// switch_2060
        case default:
        {
// switch_2060_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_20A8
// lab_20A8
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
            OP_JNZ lab_2150
            var_88 = 0;
            pri = fun_2308()
// lab_2150
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2060_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1C48
                case default:
                {
// switch_1C48_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CC0
// lab_1CC0
                    OP_JUMP lab_20A8
                }
                case 0x0:
                {
// switch_1C48_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1CC0
                }
                case 0x1:
                {
// switch_1C48_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1CC0
                }
                case 0x2:
                {
// switch_1C48_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1CC0
                }
                case 0x3:
                {
// switch_1C48_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1CC0
                }
                case 0x4:
                {
// switch_1C48_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1CC0
                }
                case 0x5:
                {
// switch_1C48_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1CC0
                }
            }
        }
        case 0x65:
        {
// switch_2060_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1E00
                case default:
                {
// switch_1E00_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E78
// lab_1E78
                    OP_JUMP lab_20A8
                }
                case 0x0:
                {
// switch_1E00_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1E78
                }
                case 0x1:
                {
// switch_1E00_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1E78
                }
                case 0x2:
                {
// switch_1E00_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1E78
                }
                case 0x3:
                {
// switch_1E00_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1E78
                }
                case 0x4:
                {
// switch_1E00_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1E78
                }
                case 0x5:
                {
// switch_1E00_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1E78
                }
            }
        }
        case 0x66:
        {
// switch_2060_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1FB8
                case default:
                {
// switch_1FB8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2030
// lab_2030
                    OP_JUMP lab_20A8
                }
                case 0x0:
                {
// switch_1FB8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2030
                }
                case 0x1:
                {
// switch_1FB8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2030
                }
                case 0x2:
                {
// switch_1FB8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2030
                }
                case 0x3:
                {
// switch_1FB8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2030
                }
                case 0x4:
                {
// switch_1FB8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2030
                }
                case 0x5:
                {
// switch_1FB8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2030
                }
            }
        }
    }
}
// fun_2168
fun_2168() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2210
    pri = 1;
    return pri;
// lab_2210
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2258
fun_2258() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_22A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2168(var_8)
    arg_2 = pri;
// lab_22A8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1A48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2308
fun_2308() {
    OP_JUMP lab_2320
// lab_2320
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2360
    pri = 0;
    return pri;
// lab_2360
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2320
    pri = 0;
    return pri;
}
// fun_23A0
fun_23A0() {
    var_8 = 0;
    pri = fun_2308()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2450
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2450
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_24C0
// lab_24C0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2500
    OP_JUMP lab_2530
// lab_2500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24C0
// lab_2530
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2578
fun_2578() {
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
// fun_25E8
fun_25E8() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2648(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2698(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2648
fun_2648() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2698
fun_2698() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E8
fun_26E8() {
    OP_JUMP lab_2700
// lab_2700
    pri = EvCameraMoveWait_()
    OP_JZER lab_2738
    pri = 0;
    return pri;
// lab_2738
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2700
    pri = 0;
    return pri;
}
// fun_2778
fun_2778() {
    pri = arg_6;
    OP_JNZ lab_27B0
    var_8 = 0;
    pri = fun_0F38()
// lab_27B0
    pri = arg_1;
    switch (pri) {
// switch_3D18
        case default:
        {
// switch_3D18_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4068
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4068
            pri = 1;
            OP_JUMP lab_4070
// lab_4068
            pri = 0;
// lab_4070
            OP_JZER lab_41C8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A28(var_24, var_16)
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
            OP_JUMP lab_4228
// lab_41C8
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
// lab_4228
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4288
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_42E8
// lab_4288
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_42E8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_42E8
            pri = arg_2;
            OP_JZER lab_4328
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4328
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3D18_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1:
        {
// switch_3D18_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x2:
        {
// switch_3D18_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x3:
        {
// switch_3D18_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x4:
        {
// switch_3D18_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x5:
        {
// switch_3D18_case_0x5
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0x6:
        {
// switch_3D18_case_0x6
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0x7:
        {
// switch_3D18_case_0x7
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0x8:
        {
// switch_3D18_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x9:
        {
// switch_3D18_case_0x9
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0xa:
        {
// switch_3D18_case_0xa
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0xb:
        {
// switch_3D18_case_0xb
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0xc:
        {
// switch_3D18_case_0xc
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0xd:
        {
// switch_3D18_case_0xd
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0xe:
        {
// switch_3D18_case_0xe
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0xf:
        {
// switch_3D18_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x10:
        {
// switch_3D18_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x11:
        {
// switch_3D18_case_0x11
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0x12:
        {
// switch_3D18_case_0x12
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0x13:
        {
// switch_3D18_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x14:
        {
// switch_3D18_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x15:
        {
// switch_3D18_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x16:
        {
// switch_3D18_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x17:
        {
// switch_3D18_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x18:
        {
// switch_3D18_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x19:
        {
// switch_3D18_case_0x19
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1a:
        {
// switch_3D18_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
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
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1b:
        {
// switch_3D18_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
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
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1c:
        {
// switch_3D18_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
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
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1d:
        {
// switch_3D18_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1e:
        {
// switch_3D18_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x1f:
        {
// switch_3D18_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x20:
        {
// switch_3D18_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x21:
        {
// switch_3D18_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x22:
        {
// switch_3D18_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x23:
        {
// switch_3D18_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x24:
        {
// switch_3D18_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x25:
        {
// switch_3D18_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x26:
        {
// switch_3D18_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x27:
        {
// switch_3D18_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x28:
        {
// switch_3D18_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
        case 0x29:
        {
// switch_3D18_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D18_case_default
        }
    }
}
// fun_4358
fun_4358() {
    pri = arg_5;
    OP_JNZ lab_4390
    var_8 = 0;
    pri = fun_0F38()
// lab_4390
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_43E0
    OP_CONST_S -8, -1
// lab_43E0
    pri = arg_1;
    switch (pri) {
// switch_5E98
        case default:
        {
// switch_5E98_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6340
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A28(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6340
            pri = 1;
            OP_JUMP lab_6348
// lab_6340
            pri = 0;
// lab_6348
            OP_JZER lab_6398
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_65F0
// lab_6398
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6400
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6400
            pri = 1;
            OP_JUMP lab_6408
// lab_6400
            pri = 0;
// lab_6408
            OP_JZER lab_6590
            var_16 = 28456;
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
            OP_JUMP lab_65F0
// lab_6590
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
// lab_65F0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6660
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6660
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5E98_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1:
        {
// switch_5E98_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2:
        {
// switch_5E98_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x3:
        {
// switch_5E98_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x4:
        {
// switch_5E98_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x5:
        {
// switch_5E98_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_5E98_case_default
        }
        case 0x6:
        {
// switch_5E98_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x7:
        {
// switch_5E98_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x8:
        {
// switch_5E98_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x9:
        {
// switch_5E98_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0xa:
        {
// switch_5E98_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0xb:
        {
// switch_5E98_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0xc:
        {
// switch_5E98_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0xd:
        {
// switch_5E98_case_0xd
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0xe:
        {
// switch_5E98_case_0xe
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0xf:
        {
// switch_5E98_case_0xf
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x10:
        {
// switch_5E98_case_0x10
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x11:
        {
// switch_5E98_case_0x11
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x12:
        {
// switch_5E98_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x13:
        {
// switch_5E98_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x14:
        {
// switch_5E98_case_0x14
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x15:
        {
// switch_5E98_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x16:
        {
// switch_5E98_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x17:
        {
// switch_5E98_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x18:
        {
// switch_5E98_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x19:
        {
// switch_5E98_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1a:
        {
// switch_5E98_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1b:
        {
// switch_5E98_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1c:
        {
// switch_5E98_case_0x1c
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1d:
        {
// switch_5E98_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1e:
        {
// switch_5E98_case_0x1e
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x1f:
        {
// switch_5E98_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x20:
        {
// switch_5E98_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x21:
        {
// switch_5E98_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x22:
        {
// switch_5E98_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x23:
        {
// switch_5E98_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x24:
        {
// switch_5E98_case_0x24
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x25:
        {
// switch_5E98_case_0x25
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x26:
        {
// switch_5E98_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x27:
        {
// switch_5E98_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x28:
        {
// switch_5E98_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x29:
        {
// switch_5E98_case_0x29
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2a:
        {
// switch_5E98_case_0x2a
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2b:
        {
// switch_5E98_case_0x2b
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2c:
        {
// switch_5E98_case_0x2c
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2d:
        {
// switch_5E98_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2e:
        {
// switch_5E98_case_0x2e
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x2f:
        {
// switch_5E98_case_0x2f
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x30:
        {
// switch_5E98_case_0x30
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x31:
        {
// switch_5E98_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x32:
        {
// switch_5E98_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x33:
        {
// switch_5E98_case_0x33
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x34:
        {
// switch_5E98_case_0x34
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x35:
        {
// switch_5E98_case_0x35
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x36:
        {
// switch_5E98_case_0x36
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x37:
        {
// switch_5E98_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x38:
        {
// switch_5E98_case_0x38
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
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5E98_case_default
        }
        case 0x39:
        {
// switch_5E98_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x3a:
        {
// switch_5E98_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x3b:
        {
// switch_5E98_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x3c:
        {
// switch_5E98_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x3d:
        {
// switch_5E98_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
        case 0x3e:
        {
// switch_5E98_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_5E98_case_default
        }
    }
}
// fun_6690
fun_6690() {
    pri = arg_4;
    OP_JNZ lab_66C8
    var_8 = 0;
    pri = fun_0F38()
// lab_66C8
    pri = arg_1;
    switch (pri) {
// switch_7AA0
        case default:
        {
// switch_7AA0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1710(var_264)
            OP_JZER lab_8068
            pri = arg_3;
            switch (pri) {
// switch_8010
                case default:
                {
// switch_8010_case_default
                    OP_JUMP lab_8320
// lab_8320
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8390
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8390
                    var_8 = 0;
                    pri = fun_0F78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8010_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8010_case_default
                }
                case 0x2:
                {
// switch_8010_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8010_case_default
                }
                case 0x3:
                {
// switch_8010_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8010_case_default
                }
            }
// lab_8068
            pri = arg_1;
            OP_JZER lab_80B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_80B8
            pri = 0;
            OP_JUMP lab_80C0
// lab_80B8
            pri = 1;
// lab_80C0
            OP_JZER lab_8128
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A28(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8128
            pri = 1;
            OP_JUMP lab_8130
// lab_8128
            pri = 0;
// lab_8130
            OP_JZER lab_8180
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8320
// lab_8180
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_81E8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8320
// lab_81E8
            var_16 = 29880;
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
// switch_7AA0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1:
        {
// switch_7AA0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2:
        {
// switch_7AA0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x3:
        {
// switch_7AA0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x4:
        {
// switch_7AA0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x5:
        {
// switch_7AA0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x6:
        {
// switch_7AA0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x7:
        {
// switch_7AA0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x8:
        {
// switch_7AA0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x9:
        {
// switch_7AA0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0xa:
        {
// switch_7AA0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0xb:
        {
// switch_7AA0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0xc:
        {
// switch_7AA0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0xd:
        {
// switch_7AA0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0xe:
        {
// switch_7AA0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0xf:
        {
// switch_7AA0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x10:
        {
// switch_7AA0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x11:
        {
// switch_7AA0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x12:
        {
// switch_7AA0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x13:
        {
// switch_7AA0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x14:
        {
// switch_7AA0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x15:
        {
// switch_7AA0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x16:
        {
// switch_7AA0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x17:
        {
// switch_7AA0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x18:
        {
// switch_7AA0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x19:
        {
// switch_7AA0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1a:
        {
// switch_7AA0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1b:
        {
// switch_7AA0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1c:
        {
// switch_7AA0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1d:
        {
// switch_7AA0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1e:
        {
// switch_7AA0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x1f:
        {
// switch_7AA0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x20:
        {
// switch_7AA0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x21:
        {
// switch_7AA0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x22:
        {
// switch_7AA0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x23:
        {
// switch_7AA0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x24:
        {
// switch_7AA0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x25:
        {
// switch_7AA0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x26:
        {
// switch_7AA0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x27:
        {
// switch_7AA0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x28:
        {
// switch_7AA0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x29:
        {
// switch_7AA0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2a:
        {
// switch_7AA0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2b:
        {
// switch_7AA0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2c:
        {
// switch_7AA0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2d:
        {
// switch_7AA0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2e:
        {
// switch_7AA0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x2f:
        {
// switch_7AA0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x30:
        {
// switch_7AA0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x31:
        {
// switch_7AA0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x32:
        {
// switch_7AA0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x33:
        {
// switch_7AA0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x34:
        {
// switch_7AA0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x35:
        {
// switch_7AA0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x36:
        {
// switch_7AA0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x37:
        {
// switch_7AA0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x38:
        {
// switch_7AA0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x39:
        {
// switch_7AA0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x3a:
        {
// switch_7AA0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x3b:
        {
// switch_7AA0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x3c:
        {
// switch_7AA0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x3d:
        {
// switch_7AA0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
        case 0x3e:
        {
// switch_7AA0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_7AA0_case_default
        }
    }
}
// fun_83C0
fun_83C0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_84C0
        case default:
        {
// switch_84C0_case_default
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
// switch_84C0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_84C0_case_default
        }
        case 0x1:
        {
// switch_84C0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_84C0_case_default
        }
        case 0x2:
        {
// switch_84C0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_84C0_case_default
        }
        case 0x3:
        {
// switch_84C0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_84C0_case_default
        }
    }
}
// fun_8580
fun_8580() {
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
    pri = fun_2258(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2308()
    pri = 0;
    return pri;
}
// fun_8618
fun_8618() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_83C0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8580(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_86C0
fun_86C0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8710
// lab_8710
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8788
    OP_JUMP lab_87B8
// lab_8788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8710
// lab_87B8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8840
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6690(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_19E0(var_56)
// lab_8840
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_88A8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14E0(var_24, var_16)
// lab_88A8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8968
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
// lab_8968
    pri = IsPlayerRideBicycle()
    OP_JZER lab_89A8
    pri = 0;
    return pri;
// lab_89A8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8AF0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09B0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8AB8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_8AF0
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
// lab_8AB8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
}
// fun_8B78
fun_8B78() {
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
    pri = fun_8618(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_23A0(var_112)
    var_128 = 0;
    pri = fun_2460()
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
    pri = fun_86C0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8CF0
fun_8CF0() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8D78
// lab_8D78
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8EF8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8EE8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8E38
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8E38
    pri = 0;
    OP_JUMP lab_8E40
// lab_8EF8
    pri = 0;
    return pri;
// lab_8EE8
    OP_JUMP lab_8D70
// lab_8D70
    OP_INC_P_S -936
// lab_8E38
    pri = 1;
// lab_8E40
    OP_JZER lab_8EB8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8EB0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8EB8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8EB0
}
// fun_8F18
fun_8F18() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8FB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_19B8()
// lab_8FB0
    pri = arg_4;
    OP_JZER lab_8FE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A10(var_8)
// lab_8FE8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9040
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9040
    pri = 0;
    OP_JUMP lab_9048
// lab_9040
    pri = 1;
// lab_9048
    OP_JZER lab_9110
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9110
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_90E8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_18F8(var_32, var_24)
    OP_JUMP lab_9110
// lab_9110
    pri = arg_2;
    OP_JZER lab_91E8
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_91B8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14E0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0670(var_40)
    OP_JUMP lab_91E8
// lab_91E8
    pri = arg_3;
    OP_JZER lab_9220
    var_8 = 1;
    var_16 = 8;
    pri = fun_1980(var_8)
// lab_9220
    pri = 0;
    return pri;
// lab_91B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
// lab_90E8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_18F8(var_16, var_8)
}
// fun_9230
fun_9230() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8CF0(var_24)
    pri = 0;
    return pri;
}
// fun_9298
fun_9298() {
    pri = g_mode;
    switch (pri) {
// switch_93D0
        case default:
        {
// switch_93D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9448
// lab_9448
            pri = 0;
            return pri;
        }
        case 0xcbb4479a79491630:
        {
// switch_93D0_case_0xcbb4479a79491630
            var_8 = 0;
            pri = fun_CE90()
            OP_JUMP lab_9448
        }
        case 0x0:
        {
// switch_93D0_case_0x0
            var_8 = 0;
            pri = fun_9458()
            OP_JUMP lab_9448
        }
        case 0xb13b05eb00e97f5:
        {
// switch_93D0_case_0xb13b05eb00e97f5
            var_8 = 0;
            pri = fun_CFA0()
            OP_JUMP lab_9448
        }
        case 0x16bb0317fd0d1e3e:
        {
// switch_93D0_case_0x16bb0317fd0d1e3e
            var_8 = 0;
            pri = fun_CE48()
            OP_JUMP lab_9448
        }
        case 0x3000016188a0e071:
        {
// switch_93D0_case_0x3000016188a0e071
            var_8 = 0;
            pri = fun_CF18()
            OP_JUMP lab_9448
        }
        case 0x33ff5d1b86eb13e2:
        {
// switch_93D0_case_0x33ff5d1b86eb13e2
            var_8 = 0;
            pri = fun_CD58()
            OP_JUMP lab_9448
        }
    }
}
// fun_9458
fun_9458() {
    pri = 0;
    return pri;
}
// fun_9470
fun_9470() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8F18(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_94C8
fun_94C8() {
    var_8 = 7983844220748856187;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = -840913160134923076;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = -7720708891673496377;
    var_48 = 8;
    pri = fun_0438(var_40)
    pri = 0;
    return pri;
}
// fun_9558
fun_9558() {
    var_8 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_9588
fun_9588() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    OP_PUSH3_C 4662458056912037478, 4666569240839454720, 8802641224559852288
    var_32 = 48;
    pri = fun_05E0(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 1;
    var_48 = 1;
    OP_PUSH4_C -4582834833314545664, 4663294455407286682, 4666569020937129165, -7720708891673496377
    var_56 = 48;
    pri = fun_05E0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 1;
    var_80 = 0;
    OP_PUSH3_C 4662330733465541018, 4666514320233647309, -840913160134923076
    var_88 = 48;
    pri = fun_05E0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    var_112 = 0;
    OP_PUSH3_C 4662310832305078272, 4666618718862704640, 7983844220748856187
    var_120 = 48;
    pri = fun_05E0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 8;
    pri = fun_0090(var_128)
    var_144 = 0;
    var_152 = 7983844220748856187;
    var_160 = 16;
    pri = fun_0638(var_152, var_144)
    var_168 = 0;
    var_176 = -840913160134923076;
    var_184 = 16;
    pri = fun_0638(var_176, var_168)
    var_192 = 1;
    var_200 = 8;
    pri = fun_0090(var_192)
    var_208 = 1;
    var_216 = 0;
    var_224 = 4641240890982006784;
    var_232 = 0;
    var_240 = 0;
    OP_PUSH4_C 4662685655818987110, 4666569240839454720, 4607182418800017408, 8802641224559852288
    var_248 = 72;
    pri = fun_06A8(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    var_264 = 4631952216750555136;
    var_272 = 0;
    OP_PUSH5_C 4662437682961574789, -4583257397623332536, 4666556541480153907, 4663078522318707753, -4585218926367284920
    var_280 = 4666376870285059031;
    var_288 = 1;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    pri = fun_26E8()
    var_304 = 0;
    var_312 = 4631952216750555136;
    var_320 = 3;
    OP_PUSH5_C 4662426423962506363, -4575703488857720750, 4666631533670726369, 4663057895480570675, -4577912891503038956
    var_328 = 4666454902625282294;
    var_336 = 75;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 31272;
    var_352 = 8;
    var_360 = 16;
    pri = fun_02B0(var_352, var_344)
    var_368 = 0;
    pri = fun_0380()
    var_376 = 31320;
    pri = SoundPostEvent(var_376)
    var_384 = 0;
    pri = fun_25E8()
    var_392 = 1;
    var_400 = 8;
    pri = fun_0090(var_392)
    var_408 = 8802641224559852288;
    var_416 = 8;
    pri = fun_0888(var_408)
    var_424 = 0;
    pri = fun_26E8()
    var_432 = 12;
    var_440 = 8;
    pri = fun_0090(var_432)
    var_448 = 6;
    var_456 = 6;
    var_464 = -7720708891673496377;
    var_472 = 24;
    pri = fun_1650(var_464, var_456, var_448)
    var_480 = 0;
    var_488 = 4631952216750555136;
    var_496 = 0;
    OP_PUSH5_C 4663141909164049039, -4575190324790805135, 4666704816120717640, 4662591559613882040, -4577859587179324375
    var_504 = 4666480488260860641;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_26E8()
    var_528 = 0;
    var_536 = 4631952216750555136;
    var_544 = 3;
    OP_PUSH5_C 4663182920947765084, -4575107025789884826, 4666725552910017495, 4662599190224578806, -4577526039331922248
    var_552 = 4666520977776553492;
    var_560 = 30;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 1;
    var_576 = 0;
    var_584 = 20;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH4_C 4662903029267798426, 4666569020937129165, 4611686018427387904, -7720708891673496377
    var_616 = 72;
    pri = fun_06A8(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C 3292105439873868558, -7720708891673496377
    var_664 = 56;
    pri = fun_2258(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = -7720708891673496377;
    var_680 = 8;
    pri = fun_0888(var_672)
    var_688 = 1;
    var_696 = 8;
    pri = fun_23A0(var_688)
    var_704 = 0;
    pri = fun_2460()
    var_712 = 7;
    var_720 = 7;
    var_728 = -7720708891673496377;
    var_736 = 24;
    pri = fun_1650(var_728, var_720, var_712)
    var_744 = 0;
    var_752 = 4628743402016053658;
    var_760 = 0;
    OP_PUSH5_C 4663433532633084068, -4575852494673516954, 4666661748250257654, 4662740455478515466, -4577938048329082470
    var_768 = 4666555392490502881;
    var_776 = 1;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 0;
    pri = fun_26E8()
    var_792 = 0;
    var_800 = 4628743402016053658;
    var_808 = 3;
    OP_PUSH5_C 4663417809616806871, -4575835782096774758, 4666685184340603699, 4662745535222235791, -4577921511674200719
    var_816 = 4666549510103294280;
    var_824 = 150;
    pri = EvCameraMove(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 1;
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 0;
    var_872 = 1;
    var_880 = -7720708891673496377;
    var_888 = 56;
    pri = fun_4358(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C 3292104340362240347, -7720708891673496377
    var_936 = 56;
    pri = fun_2258(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 1;
    var_952 = 8;
    pri = fun_23A0(var_944)
    var_960 = 0;
    pri = fun_2460()
    var_968 = 1;
    var_976 = 3;
    var_984 = 0;
    var_992 = 1;
    var_1000 = -7720708891673496377;
    var_1008 = 40;
    pri = fun_6690(var_1000, var_992, var_984, var_976, var_968)
    var_1016 = 0;
    var_1024 = 3;
    var_1032 = 0;
    var_1040 = 100;
    var_1048 = -1;
    OP_PUSH2_C 3292103240850612136, -7720708891673496377
    var_1056 = 56;
    pri = fun_2258(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1064 = -7720708891673496377;
    var_1072 = 8;
    pri = fun_0A60(var_1064)
    var_1080 = 1;
    var_1088 = 8;
    pri = fun_23A0(var_1080)
    var_1096 = 0;
    pri = fun_2460()
    var_1104 = 0;
    var_1112 = 4628743402016053658;
    var_1120 = 0;
    OP_PUSH5_C 4662990715320113562, -4575557385752621875, 4666634474864330670, 4662371921171117507, -4578436962725302108
    var_1128 = 4666457755857956372;
    var_1136 = 1;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 0;
    pri = fun_26E8()
    var_1152 = -7720708891673496377;
    var_1160 = 8;
    pri = fun_16B8(var_1152)
    var_1168 = 1;
    var_1176 = -1;
    var_1184 = -1;
    var_1192 = 3;
    var_1200 = 0;
    var_1208 = 1;
    var_1216 = -7720708891673496377;
    var_1224 = 56;
    pri = fun_2778(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 100;
    var_1264 = -1;
    OP_PUSH2_C 3292110937432009613, -7720708891673496377
    var_1272 = 56;
    pri = fun_2258(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1280 = 1;
    var_1288 = 8;
    pri = fun_23A0(var_1280)
    var_1296 = 0;
    var_1304 = -1114614285133849021;
    var_1312 = 0;
    var_1320 = 24;
    pri = fun_2490(var_1312, var_1304, var_1296)
    var_1328 = 0;
    var_1336 = -1114613185622220810;
    var_1344 = 1;
    var_1352 = 24;
    pri = fun_2490(var_1344, var_1336, var_1328)
    var_1368 = 0;
    var_1376 = 0;
    var_1384 = 0;
    var_1392 = 1;
    var_1400 = 32;
    pri = fun_2578(var_1392, var_1384, var_1376, var_1368)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A6C8
        case default:
        {
// switch_A6C8_case_default
            var_8 = 1;
            var_16 = 3;
            var_24 = 0;
            var_32 = 12;
            var_40 = -7720708891673496377;
            var_48 = 40;
            pri = fun_6690(var_40, var_32, var_24, var_16, var_8)
            var_56 = -7720708891673496377;
            var_64 = 8;
            pri = fun_0A60(var_56)
            var_72 = 7;
            var_80 = 7;
            var_88 = -7720708891673496377;
            var_96 = 24;
            pri = fun_1650(var_88, var_80, var_72)
            var_104 = 0;
            var_112 = 4628743402016053658;
            var_120 = 0;
            OP_PUSH5_C 4662990715320113562, -4575557385752621875, 4666634474864330670, 4662371921171117507, -4578436962725302108
            var_128 = 4666457755857956372;
            var_136 = 1;
            pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_144 = 0;
            pri = fun_26E8()
            var_152 = 1;
            var_160 = 1;
            var_168 = -1;
            var_176 = -1;
            var_184 = 0;
            var_192 = 1;
            var_200 = -7720708891673496377;
            var_208 = 56;
            pri = fun_4358(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 0;
            var_224 = 3;
            var_232 = 0;
            var_240 = 100;
            var_248 = -1;
            OP_PUSH2_C 3292097743292471081, -7720708891673496377
            var_256 = 56;
            pri = fun_2258(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
            var_264 = 1;
            var_272 = 8;
            pri = fun_23A0(var_264)
            var_280 = 0;
            pri = fun_2460()
            var_288 = 1;
            var_296 = 3;
            var_304 = 0;
            var_312 = 1;
            var_320 = -7720708891673496377;
            var_328 = 40;
            pri = fun_6690(var_320, var_312, var_304, var_296, var_288)
            var_336 = 1;
            var_344 = 0;
            OP_PUSH5_C 4641240890982006784, -7720708891673496377, 4662681477674801562, 4666514320233647309, 4607182418800017408
            var_352 = -840913160134923076;
            var_360 = 64;
            pri = fun_0720(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
            var_368 = 1;
            var_376 = 0;
            OP_PUSH5_C 4641240890982006784, -7720708891673496377, 4662738542328283136, 4666618718862704640, 4611686018427387904
            var_384 = 7983844220748856187;
            var_392 = 64;
            pri = fun_0720(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
            var_400 = 1;
            var_408 = 7983844220748856187;
            var_416 = 16;
            pri = fun_0638(var_408, var_400)
            var_424 = 1;
            var_432 = -840913160134923076;
            var_440 = 16;
            pri = fun_0638(var_432, var_424)
            var_448 = 31480;
            pri = SoundPostEvent(var_448)
            var_456 = 0;
            var_464 = 4631952216750555136;
            var_472 = 0;
            OP_PUSH5_C 4662379859645070049, -4575538210269833462, 4666613402723984343, 4663024415351504896, -4578546210200637932
            var_480 = 4666464292454583501;
            var_488 = 1;
            pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
            var_496 = 0;
            pri = fun_26E8()
            var_504 = 0;
            var_512 = 4631952216750555136;
            var_520 = 3;
            OP_PUSH5_C 4662431866545063854, -4575187598001968251, 4666679840714092708, 4663015135473366467, -4577842170915140403
            var_528 = 4666477200721093591;
            var_536 = 60;
            pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
            var_544 = 0;
            var_552 = 3;
            var_560 = 0;
            var_568 = 100;
            var_576 = -1;
            OP_PUSH2_C -3497007629396739227, 7983844220748856187
            var_584 = 56;
            pri = fun_2258(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
            var_592 = -7720708891673496377;
            var_600 = 8;
            pri = fun_0A60(var_592)
            var_608 = 7983844220748856187;
            var_616 = 8;
            pri = fun_0888(var_608)
            var_624 = -840913160134923076;
            var_632 = 8;
            pri = fun_0888(var_624)
            var_640 = 1;
            var_648 = 8;
            pri = fun_23A0(var_640)
            var_656 = 0;
            pri = fun_2460()
            var_664 = -7720708891673496377;
            var_672 = 8;
            pri = fun_16B8(var_664)
            var_680 = 0;
            var_688 = 0;
            var_696 = 0;
            var_704 = 0;
            OP_PUSH2_C -840913160134923076, -7720708891673496377
            var_712 = 48;
            pri = fun_0830(var_704, var_696, var_688, var_680, var_672, var_664)
            var_720 = 0;
            var_728 = 3;
            var_736 = 0;
            var_744 = 100;
            var_752 = -1;
            OP_PUSH2_C 3292096643780842870, -7720708891673496377
            var_760 = 56;
            pri = fun_2258(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
            var_768 = -7720708891673496377;
            var_776 = 8;
            pri = fun_0888(var_768)
            var_784 = 1;
            var_792 = 8;
            pri = fun_23A0(var_784)
            var_800 = 0;
            pri = fun_2460()
            var_808 = 0;
            var_816 = 3;
            var_824 = 0;
            var_832 = 100;
            var_840 = -1;
            OP_PUSH2_C 3291114779897039672, -7720708891673496377
            var_848 = 56;
            pri = fun_2258(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
            var_856 = 1;
            var_864 = 8;
            pri = fun_23A0(var_856)
            var_872 = 0;
            pri = fun_2460()
            var_880 = 8;
            var_888 = -840913160134923076;
            var_896 = 16;
            pri = fun_1560(var_888, var_880)
            var_904 = 0;
            var_912 = 4631952216750555136;
            var_920 = 0;
            OP_PUSH5_C 4662072777042548490, -4575220671311731753, 4666516145422949417, 4662783050558975508, -4577899873285366088
            var_928 = 4666522687517134684;
            var_936 = 1;
            pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
            var_944 = 0;
            pri = fun_26E8()
            var_952 = 0;
            var_960 = 4631952216750555136;
            var_968 = 3;
            OP_PUSH5_C 4662073040925339156, -4575220671311731753, 4666508938124229345, 4662783314441766175, -4577899873285366088
            var_976 = 4666515474720856474;
            var_984 = 60;
            pri = EvCameraMove(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912)
            var_992 = 0;
            var_1000 = 3;
            var_1008 = 0;
            var_1016 = 100;
            var_1024 = -1;
            OP_PUSH2_C 2356239449114766636, -840913160134923076
            var_1032 = 56;
            pri = fun_2258(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
            var_1040 = 1;
            var_1048 = 8;
            pri = fun_23A0(var_1040)
            var_1056 = 0;
            pri = fun_2460()
            var_1064 = -840913160134923076;
            var_1072 = 8;
            pri = fun_15A0(var_1064)
            var_1080 = 0;
            var_1088 = 4631952216750555136;
            var_1096 = 0;
            OP_PUSH5_C 4662302377060660675, -4575276702424283218, 4666640142846771855, 4662978873579882414, -4578007889307678802
            var_1104 = 4666531626546668503;
            var_1112 = 1;
            pri = EvCameraMove(var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
            var_1120 = 0;
            pri = fun_26E8()
            var_1128 = 0;
            var_1136 = 4631952216750555136;
            var_1144 = 3;
            OP_PUSH5_C 4662326412384843858, -4575252337246611702, 4666636289058516500, 4663002908904065597, -4577959158952335770
            var_1152 = 4666527767260855009;
            var_1160 = 60;
            pri = EvCameraMove(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
            var_1168 = 0;
            var_1176 = 3;
            var_1184 = 0;
            var_1192 = 100;
            var_1200 = -1;
            OP_PUSH2_C 2356242747649651269, -840913160134923076
            var_1208 = 56;
            pri = fun_2258(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
            var_1216 = 1;
            var_1224 = 8;
            pri = fun_23A0(var_1216)
            var_1232 = 0;
            pri = fun_2460()
            var_1240 = 7;
            var_1248 = 6;
            var_1256 = -7720708891673496377;
            var_1264 = 24;
            pri = fun_1650(var_1256, var_1248, var_1240)
            var_1272 = 0;
            var_1280 = 4631952216750555136;
            var_1288 = 0;
            OP_PUSH5_C 4663096884162891612, -4575197185743362458, 4666853706487792927, 4662842358216177746, -4577848328180255949
            var_1296 = 4666522049800390574;
            var_1304 = 1;
            pri = EvCameraMove(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
            var_1312 = 0;
            pri = fun_26E8()
            var_1320 = 1;
            var_1328 = -1;
            var_1336 = -1;
            var_1344 = 3;
            var_1352 = 0;
            var_1360 = 0;
            var_1368 = -7720708891673496377;
            var_1376 = 56;
            pri = fun_2778(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
            var_1384 = 0;
            var_1392 = 3;
            var_1400 = 0;
            var_1408 = 100;
            var_1416 = -1;
            OP_PUSH2_C 3291115879408667883, -7720708891673496377
            var_1424 = 56;
            pri = fun_2258(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
            var_1432 = 1;
            var_1440 = 8;
            pri = fun_23A0(var_1432)
            var_1448 = 0;
            pri = fun_2460()
            var_1456 = 4;
            var_1464 = 4;
            var_1472 = -840913160134923076;
            var_1480 = 24;
            pri = fun_1650(var_1472, var_1464, var_1456)
            var_1488 = 0;
            var_1496 = 4631952216750555136;
            var_1504 = 0;
            OP_PUSH5_C 4663002579050577265, -4575130863201975009, 4666758736170943775, 4662632681348760863, -4577992935949541048
            var_1512 = 4666458349594235372;
            var_1520 = 1;
            pri = EvCameraMove(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
            var_1528 = 0;
            pri = fun_26E8()
            var_1536 = 0;
            var_1544 = 0;
            var_1552 = 0;
            var_1560 = -127;
            pri = float(var_1560)
            var_1568 = pri;
            var_1576 = -840913160134923076;
            var_1584 = 40;
            pri = fun_07E0(var_1576, var_1568, var_1560, var_1552, var_1544)
            var_1592 = 0;
            var_1600 = 3;
            var_1608 = 0;
            var_1616 = 100;
            var_1624 = -1;
            OP_PUSH2_C 2356241648138023058, -840913160134923076
            var_1632 = 56;
            pri = fun_2258(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
            var_1640 = -840913160134923076;
            var_1648 = 8;
            pri = fun_0888(var_1640)
            var_1656 = 1;
            var_1664 = 8;
            pri = fun_23A0(var_1656)
            var_1672 = 0;
            pri = fun_2460()
            var_1680 = -7720708891673496377;
            var_1688 = 8;
            pri = fun_0A60(var_1680)
            var_1696 = -7720708891673496377;
            var_1704 = 8;
            pri = fun_16B8(var_1696)
            var_1712 = 0;
            var_1720 = 1;
            var_1728 = 120;
            var_1736 = 1;
            var_1744 = -840913160134923076;
            var_1752 = 40;
            pri = fun_1070(var_1744, var_1736, var_1728, var_1720, var_1712)
            var_1760 = 1;
            var_1768 = 1;
            var_1776 = -1;
            var_1784 = -1;
            var_1792 = 0;
            var_1800 = 1;
            var_1808 = -7720708891673496377;
            var_1816 = 56;
            pri = fun_4358(var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
            var_1824 = 0;
            var_1832 = 3;
            var_1840 = 0;
            var_1848 = 100;
            var_1856 = -1;
            OP_PUSH2_C 3291116978920296094, -7720708891673496377
            var_1864 = 56;
            pri = fun_2258(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808)
            var_1872 = 1;
            var_1880 = 8;
            pri = fun_23A0(var_1872)
            var_1888 = 0;
            pri = fun_2460()
            var_1896 = 1;
            var_1904 = 3;
            var_1912 = 0;
            var_1920 = 1;
            var_1928 = -7720708891673496377;
            var_1936 = 40;
            pri = fun_6690(var_1928, var_1920, var_1912, var_1904, var_1896)
            var_1944 = 15;
            var_1952 = -840913160134923076;
            var_1960 = 16;
            pri = fun_1520(var_1952, var_1944)
            var_1968 = -840913160134923076;
            var_1976 = 8;
            pri = fun_16B8(var_1968)
            var_1984 = -1;
            var_1992 = -840913160134923076;
            var_2000 = 16;
            pri = fun_14E0(var_1992, var_1984)
            var_2008 = 0;
            var_2016 = 4631952216750555136;
            var_2024 = 0;
            OP_PUSH5_C 4662579497971325338, -4574302711043934126, 4666657421672002355, 4663008538403599811, -4579270656421946982
            var_2032 = 4666432445100284969;
            var_2040 = 1;
            pri = EvCameraMove(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
            var_2048 = 0;
            pri = fun_26E8()
            var_2056 = 0;
            var_2064 = 4631952216750555136;
            var_2072 = 3;
            OP_PUSH5_C 4662558541279699927, -4574302711043934126, 4666646272624096707, 4663032760644759716, -4579256054907530117
            var_2080 = 4666444831098771866;
            var_2088 = 360;
            pri = EvCameraMove(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
            var_2096 = 0;
            var_2104 = 0;
            var_2112 = 0;
            var_2120 = 0;
            OP_PUSH2_C -7720708891673496377, -840913160134923076
            var_2128 = 48;
            pri = fun_0830(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
            var_2136 = 0;
            var_2144 = 3;
            var_2152 = 0;
            var_2160 = 100;
            var_2168 = -1;
            OP_PUSH2_C 2356236150579882003, -840913160134923076
            var_2176 = 56;
            pri = fun_2258(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
            var_2184 = -840913160134923076;
            var_2192 = 8;
            pri = fun_0888(var_2184)
            var_2200 = 1;
            var_2208 = 8;
            pri = fun_23A0(var_2200)
            var_2216 = 0;
            pri = fun_2460()
            var_2224 = -7720708891673496377;
            var_2232 = 8;
            pri = fun_0A60(var_2224)
            var_2240 = 6;
            var_2248 = 6;
            var_2256 = 7983844220748856187;
            var_2264 = 24;
            pri = fun_1650(var_2256, var_2248, var_2240)
            var_2272 = 1;
            var_2280 = -1;
            var_2288 = -1;
            var_2296 = 3;
            var_2304 = 0;
            var_2312 = 1;
            var_2320 = 7983844220748856187;
            var_2328 = 56;
            pri = fun_2778(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
            var_2336 = 0;
            var_2344 = 3;
            var_2352 = 0;
            var_2360 = 100;
            var_2368 = -1;
            OP_PUSH2_C -3497010927931623860, 7983844220748856187
            var_2376 = 56;
            pri = fun_2258(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
            var_2384 = 7983844220748856187;
            var_2392 = 8;
            pri = fun_0A60(var_2384)
            var_2400 = 1;
            var_2408 = 8;
            pri = fun_23A0(var_2400)
            var_2416 = 0;
            pri = fun_2460()
            var_2424 = 7983844220748856187;
            var_2432 = 8;
            pri = fun_1618(var_2424)
            var_2440 = 1;
            var_2448 = 1;
            var_2456 = -1;
            OP_PUSH2_C 7983844220748856187, 8802641224559852288
            var_2464 = 40;
            pri = fun_0FB8(var_2456, var_2448, var_2440, var_2432, var_2424)
            var_2472 = 0;
            var_2480 = 0;
            var_2488 = 0;
            var_2496 = 0;
            OP_PUSH2_C 8802641224559852288, 7983844220748856187
            var_2504 = 48;
            pri = fun_0830(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
            var_2512 = 0;
            var_2520 = 4631952216750555136;
            var_2528 = 0;
            OP_PUSH5_C 4662467699629013074, -4575027333187103621, 4666863305224303411, 4662740037664096911, -4577604148637959455
            var_2536 = 4666536068573644718;
            var_2544 = 1;
            pri = EvCameraMove(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
            var_2552 = 0;
            pri = fun_26E8()
            var_2560 = 0;
            var_2568 = 3;
            var_2576 = 0;
            var_2584 = 100;
            var_2592 = -1;
            OP_PUSH2_C -3497009828419995649, 7983844220748856187
            var_2600 = 56;
            pri = fun_2258(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
            var_2608 = 7983844220748856187;
            var_2616 = 8;
            pri = fun_0888(var_2608)
            var_2624 = 1;
            var_2632 = 8;
            pri = fun_23A0(var_2624)
            var_2640 = 0;
            var_2648 = -1114612086110592599;
            var_2656 = 0;
            var_2664 = 24;
            pri = fun_2490(var_2656, var_2648, var_2640)
            var_2672 = 0;
            var_2680 = -1114610986598964388;
            var_2688 = 1;
            var_2696 = 24;
            pri = fun_2490(var_2688, var_2680, var_2672)
            var_2712 = 0;
            var_2720 = 0;
            var_2728 = 0;
            var_2736 = 1;
            var_2744 = 32;
            pri = fun_2578(var_2736, var_2728, var_2720, var_2712)
            var_16 = pri;
            pri = var_16;
            switch (pri) {
// switch_C2B8
                case default:
                {
// switch_C2B8_case_default
                    var_8 = 7983844220748856187;
                    var_16 = 8;
                    pri = fun_15A0(var_8)
                    var_24 = 5;
                    var_32 = 5;
                    var_40 = -7720708891673496377;
                    var_48 = 24;
                    pri = fun_1650(var_40, var_32, var_24)
                    var_56 = -840913160134923076;
                    var_64 = 8;
                    pri = fun_16B8(var_56)
                    var_72 = 0;
                    var_80 = 4631952216750555136;
                    var_88 = 0;
                    OP_PUSH5_C 4662988142462904566, -4574520590268094218, 4666703359267810836, 4662605105597136241, -4579193250803351552
                    var_96 = 4666446430888190280;
                    var_104 = 1;
                    pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
                    var_112 = 0;
                    pri = fun_26E8()
                    var_120 = -1;
                    var_128 = 8802641224559852288;
                    var_136 = 16;
                    pri = fun_14E0(var_128, var_120)
                    var_144 = 0;
                    var_152 = 0;
                    var_160 = 0;
                    var_168 = 0;
                    OP_PUSH2_C -7720708891673496377, 7983844220748856187
                    var_176 = 48;
                    pri = fun_0830(var_168, var_160, var_152, var_144, var_136, var_128)
                    var_184 = 1;
                    var_192 = 1;
                    var_200 = -1;
                    OP_PUSH2_C 8802641224559852288, -7720708891673496377
                    var_208 = 40;
                    pri = fun_0FB8(var_200, var_192, var_184, var_176, var_168)
                    var_216 = 1;
                    var_224 = 3;
                    var_232 = 0;
                    var_240 = 6;
                    var_248 = -840913160134923076;
                    var_256 = 40;
                    pri = fun_6690(var_248, var_240, var_232, var_224, var_216)
                    var_264 = 1;
                    var_272 = 1;
                    var_280 = -1;
                    var_288 = -1;
                    var_296 = 0;
                    var_304 = 8;
                    var_312 = -7720708891673496377;
                    var_320 = 56;
                    pri = fun_4358(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
                    var_328 = 0;
                    var_336 = 3;
                    var_344 = 0;
                    var_352 = 100;
                    var_360 = -1;
                    OP_PUSH2_C 3291118078431924305, -7720708891673496377
                    var_368 = 56;
                    pri = fun_2258(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
                    var_376 = 7983844220748856187;
                    var_384 = 8;
                    pri = fun_0888(var_376)
                    var_392 = -840913160134923076;
                    var_400 = 8;
                    pri = fun_0A60(var_392)
                    var_408 = 1;
                    var_416 = 8;
                    pri = fun_23A0(var_408)
                    var_424 = 0;
                    pri = fun_2460()
                    var_432 = 0;
                    var_440 = 3;
                    var_448 = 0;
                    var_456 = 100;
                    var_464 = -1;
                    OP_PUSH2_C 3291119177943552516, -7720708891673496377
                    var_472 = 56;
                    pri = fun_2258(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
                    var_480 = 1;
                    var_488 = 8;
                    pri = fun_23A0(var_480)
                    var_496 = 0;
                    pri = fun_2460()
                    var_504 = 1;
                    var_512 = 3;
                    var_520 = 0;
                    var_528 = 8;
                    var_536 = -7720708891673496377;
                    var_544 = 40;
                    pri = fun_6690(var_536, var_528, var_520, var_512, var_504)
                    var_552 = -7720708891673496377;
                    var_560 = 8;
                    pri = fun_16B8(var_552)
                    var_568 = 0;
                    var_576 = 4631952216750555136;
                    var_584 = 0;
                    OP_PUSH5_C 4662581675004348334, -4574643911492265574, 4666583413544336753, 4663184757132183470, -4579880401590246441
                    var_592 = 4666502258591090606;
                    var_600 = 1;
                    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
                    var_608 = 0;
                    pri = fun_26E8()
                    var_616 = 0;
                    var_624 = 4631952216750555136;
                    var_632 = 3;
                    OP_PUSH5_C 4662692747668986266, -4575222870334987305, 4666566816416315474, 4663302987617518223, -4581914058296980931
                    var_640 = 4666500284967718748;
                    var_648 = 300;
                    pri = EvCameraMove(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
                    var_656 = 0;
                    var_664 = 0;
                    var_672 = 0;
                    var_680 = 0;
                    OP_PUSH2_C 8802641224559852288, -840913160134923076
                    var_688 = 48;
                    pri = fun_0830(var_680, var_672, var_664, var_656, var_648, var_640)
                    var_696 = 0;
                    var_704 = 3;
                    var_712 = 0;
                    var_720 = 100;
                    var_728 = -1;
                    OP_PUSH2_C 2356237250091510214, -840913160134923076
                    var_736 = 56;
                    pri = fun_2258(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
                    var_744 = -840913160134923076;
                    var_752 = 8;
                    pri = fun_0888(var_744)
                    var_760 = -7720708891673496377;
                    var_768 = 8;
                    pri = fun_0A60(var_760)
                    var_776 = 1;
                    var_784 = 8;
                    pri = fun_23A0(var_776)
                    var_792 = 0;
                    pri = fun_2460()
                    var_800 = 3;
                    var_808 = 0;
                    pri = EvCameraEnd(var_808, var_800)
                    pri = 1;
                    return pri;
                }
                case 0x0:
                {
// switch_C2B8_case_0x0
                    var_8 = 2;
                    var_16 = 2;
                    var_24 = -840913160134923076;
                    var_32 = 24;
                    pri = fun_1650(var_24, var_16, var_8)
                    var_40 = 0;
                    var_48 = 4631952216750555136;
                    var_56 = 3;
                    OP_PUSH5_C 4662290788208103916, -4575264124011261460, 4666717460504437064, 4662841038802224415, -4577730988299339694
                    var_64 = 4666489509753766543;
                    var_72 = 30;
                    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
                    var_80 = 1;
                    var_88 = 1;
                    var_96 = -1;
                    OP_PUSH2_C -840913160134923076, 8802641224559852288
                    var_104 = 40;
                    pri = fun_0FB8(var_96, var_88, var_80, var_72, var_64)
                    var_112 = 1;
                    var_120 = 1;
                    var_128 = -1;
                    var_136 = -1;
                    var_144 = 0;
                    var_152 = 6;
                    var_160 = -840913160134923076;
                    var_168 = 56;
                    pri = fun_4358(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
                    var_176 = 0;
                    var_184 = 3;
                    var_192 = 0;
                    var_200 = 100;
                    var_208 = -1;
                    OP_PUSH2_C 2356235051068253792, -840913160134923076
                    var_216 = 56;
                    pri = fun_2258(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
                    var_224 = 0;
                    pri = fun_26E8()
                    var_232 = 1;
                    var_240 = 8;
                    pri = fun_23A0(var_232)
                    var_248 = 0;
                    pri = fun_2460()
                    OP_JUMP switch_C2B8_case_default
                }
                case 0x1:
                {
// switch_C2B8_case_0x1
                    var_8 = 2;
                    var_16 = 2;
                    var_24 = -840913160134923076;
                    var_32 = 24;
                    pri = fun_1650(var_24, var_16, var_8)
                    var_40 = 0;
                    var_48 = 4631952216750555136;
                    var_56 = 3;
                    OP_PUSH5_C 4662290788208103916, -4575264124011261460, 4666717460504437064, 4662841038802224415, -4577730988299339694
                    var_64 = 4666489509753766543;
                    var_72 = 30;
                    pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
                    var_80 = 1;
                    var_88 = 1;
                    var_96 = -1;
                    OP_PUSH2_C -840913160134923076, 8802641224559852288
                    var_104 = 40;
                    pri = fun_0FB8(var_96, var_88, var_80, var_72, var_64)
                    var_112 = 1;
                    var_120 = 1;
                    var_128 = -1;
                    var_136 = -1;
                    var_144 = 0;
                    var_152 = 6;
                    var_160 = -840913160134923076;
                    var_168 = 56;
                    pri = fun_4358(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
                    var_176 = 0;
                    var_184 = 3;
                    var_192 = 0;
                    var_200 = 100;
                    var_208 = -1;
                    OP_PUSH2_C 2356238349603138425, -840913160134923076
                    var_216 = 56;
                    pri = fun_2258(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
                    var_224 = 0;
                    pri = fun_26E8()
                    var_232 = 1;
                    var_240 = 8;
                    pri = fun_23A0(var_232)
                    var_248 = 0;
                    pri = fun_2460()
                    OP_JUMP switch_C2B8_case_default
                }
            }
        }
        case 0x0:
        {
// switch_A6C8_case_0x0
            var_8 = -7720708891673496377;
            var_16 = 8;
            pri = fun_0A60(var_8)
            var_24 = 4;
            var_32 = 4;
            var_40 = -7720708891673496377;
            var_48 = 24;
            pri = fun_1650(var_40, var_32, var_24)
            var_56 = 1;
            var_64 = 1;
            var_72 = -1;
            var_80 = -1;
            var_88 = 0;
            var_96 = 12;
            var_104 = -7720708891673496377;
            var_112 = 56;
            pri = fun_4358(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_120 = 0;
            var_128 = 3;
            var_136 = 0;
            var_144 = 100;
            var_152 = -1;
            OP_PUSH2_C 3292109837920381402, -7720708891673496377
            var_160 = 56;
            pri = fun_2258(var_152, var_144, var_136, var_128, var_120, var_112, var_104)
            var_168 = 1;
            var_176 = 8;
            pri = fun_23A0(var_168)
            var_184 = 0;
            pri = fun_2460()
            OP_JUMP switch_A6C8_case_default
        }
        case 0x1:
        {
// switch_A6C8_case_0x1
            var_8 = -7720708891673496377;
            var_16 = 8;
            pri = fun_0A60(var_8)
            var_24 = 1;
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 0;
            var_64 = 12;
            var_72 = -7720708891673496377;
            var_80 = 56;
            pri = fun_4358(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 0;
            var_96 = 3;
            var_104 = 0;
            var_112 = 100;
            var_120 = -1;
            OP_PUSH2_C 3292108738408753191, -7720708891673496377
            var_128 = 56;
            pri = fun_2258(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
            var_136 = 1;
            var_144 = 8;
            pri = fun_23A0(var_136)
            var_152 = 0;
            pri = fun_2460()
            var_160 = 0;
            var_168 = 4631952216750555136;
            var_176 = 0;
            OP_PUSH5_C 4662628250316900925, -4578984431555004334, 4666524188350506598, 4663292399320542740, -4575940103760018145
            var_184 = 4666396425099359027;
            var_192 = 1;
            pri = EvCameraMove(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
            var_200 = 0;
            pri = fun_26E8()
            var_208 = 0;
            var_216 = 4631952216750555136;
            var_224 = 3;
            OP_PUSH5_C 4662679916368290120, -4578747816652706939, 4666514254262949642, 4663344065371931935, -4575703312935860306
            var_232 = 4666386491011802071;
            var_240 = 60;
            pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_248 = 1;
            var_256 = 1;
            var_264 = -1;
            var_272 = 2;
            var_280 = -7720708891673496377;
            var_288 = 40;
            pri = fun_1070(var_280, var_272, var_264, var_256, var_248)
            var_296 = 0;
            var_304 = 3;
            var_312 = 0;
            var_320 = 100;
            var_328 = -1;
            OP_PUSH2_C 3292107638897124980, -7720708891673496377
            var_336 = 56;
            pri = fun_2258(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            var_344 = 1;
            var_352 = 8;
            pri = fun_23A0(var_344)
            var_360 = 0;
            pri = fun_2460()
            var_368 = -1;
            var_376 = -7720708891673496377;
            var_384 = 16;
            pri = fun_14E0(var_376, var_368)
            OP_JUMP switch_A6C8_case_default
        }
    }
}
// fun_C9E0
fun_C9E0() {
    pri = 0;
    return pri;
}
// fun_C9F8
fun_C9F8() {
    var_8 = 3080;
    var_16 = 8;
    pri = fun_9230(var_8)
    var_24 = 1;
    var_32 = -6572827771961546186;
    pri = WorkSet(var_32, var_24)
    var_40 = 1;
    var_48 = -6571976749961500097;
    pri = WorkSet(var_48, var_40)
    var_56 = -6555520503448918311;
    pri = FlagSet(var_56)
    var_64 = -968532486077324965;
    pri = FlagSet(var_64)
    var_72 = -6397670319191688058;
    pri = VanishFlagSet(var_72)
    var_80 = 8389417158930239541;
    pri = VanishFlagSet(var_80)
    var_88 = 7983844220748856187;
    pri = VanishFlagSet(var_88)
    var_96 = -840913160134923076;
    pri = VanishFlagSet(var_96)
    var_104 = -7720708891673496377;
    pri = VanishFlagSet(var_104)
    var_112 = -1973076409959789862;
    pri = VanishFlagReset(var_112)
    var_120 = -2946005106301865392;
    pri = VanishFlagReset(var_120)
    var_128 = 5680856449783091532;
    pri = VanishFlagReset(var_128)
    var_136 = -5735822517530358307;
    pri = VanishFlagReset(var_136)
    var_144 = -5735834612158268628;
    pri = VanishFlagReset(var_144)
    var_152 = 6677431524334105512;
    pri = VanishFlagReset(var_152)
    var_160 = 2680324464551249407;
    pri = VanishFlagReset(var_160)
    var_168 = -2740292375873623988;
    pri = VanishFlagReset(var_168)
    var_176 = 1873309426352893503;
    pri = VanishFlagReset(var_176)
    pri = 0;
    return pri;
}
// fun_CD10
fun_CD10() {
    OP_PUSH2_C 7983844220748856187, 8819305909045252721
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_CD58
fun_CD58() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9470()
    var_16 = 0;
    pri = fun_94C8()
    var_24 = 0;
    pri = fun_9558()
    var_32 = 0;
    pri = fun_9588()
    var_40 = 0;
    pri = fun_C9E0()
    var_48 = 0;
    pri = fun_C9F8()
    var_56 = 0;
    pri = fun_CD10()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CE48
fun_CE48() {
    var_8 = 0;
    pri = fun_94C8()
    var_16 = 0;
    pri = fun_C9F8()
    pri = 0;
    return pri;
}
// fun_CE90
fun_CE90() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 2356249344719420535;
    var_88 = 80;
    pri = fun_8B78(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_CF18
fun_CF18() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -3497013126954880282;
    var_88 = 80;
    pri = fun_8B78(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_CFA0
fun_CFA0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3291120277455180727;
    var_88 = 80;
    pri = fun_8B78(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
