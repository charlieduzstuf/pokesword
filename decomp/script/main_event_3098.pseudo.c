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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0718
fun_0718() {
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
// fun_0790
fun_0790() {
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
// fun_0850
fun_0850() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08F8
fun_08F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18A8(var_8)
    OP_JZER lab_0970
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_18D8(var_24)
    OP_JNZ lab_0970
    pri = 0;
    return pri;
// lab_0970
    OP_JUMP lab_0980
// lab_0980
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0980
    pri = 0;
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AD0
fun_0AD0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B18
    pri = 0;
    return pri;
// lab_0B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B58
// lab_0B58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18A8(var_8)
    OP_JNZ lab_0BE0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BD0
    pri = 0;
    return pri;
// lab_0BE0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C28
    pri = 0;
    return pri;
// lab_0C28
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DF8(var_8)
    pri = 0;
    return pri;
// lab_0C88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B58
    pri = 0;
    return pri;
// lab_0BD0
    OP_JUMP lab_0C28
}
// fun_0CD0
fun_0CD0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D18
// lab_0D18
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D70
    pri = 0;
    return pri;
// lab_0D70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DB0
    pri = 0;
    return pri;
// lab_0DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D18
    pri = 0;
    return pri;
}
// fun_0DF8
fun_0DF8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E30
fun_0E30() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E80
    pri = 0;
    return pri;
// lab_0E80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_18A8(var_8)
    OP_JZER lab_0FB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED8
    OP_ZERO_P_S 64
// lab_0FB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE8
    OP_CONST_S 64, 1
// lab_0FE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1020
    OP_CONST_S 72, 1
// lab_1020
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
// lab_0ED8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F00
    OP_ZERO_P_S 72
// lab_0F00
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
    OP_JUMP lab_10C0
// lab_10C0
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1110
fun_1110() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1150
fun_1150() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
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
// fun_1208
fun_1208() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_15C8
        case default:
        {
// switch_15C8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_15C8_case_0x0
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
            pri = fun_11A8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15C8_case_default
        }
        case 0x1:
        {
// switch_15C8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11A8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15C8_case_default
        }
        case 0x2:
        {
// switch_15C8_case_0x2
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
            pri = fun_11A8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15C8_case_default
        }
        case 0x3:
        {
// switch_15C8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11A8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15C8_case_default
        }
        case 0x4:
        {
// switch_15C8_case_0x4
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
            pri = fun_11A8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_15C8_case_default
        }
        case 0x5:
        {
// switch_15C8_case_0x5
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
            pri = fun_11A8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15C8_case_default
        }
        case 0x6:
        {
// switch_15C8_case_0x6
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
            pri = fun_11A8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15C8_case_default
        }
        case 0x7:
        {
// switch_15C8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_11A8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15C8_case_default
        }
    }
}
// fun_1678
fun_1678() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16B8
fun_16B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F8
fun_16F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17B0
fun_17B0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_17E8
fun_17E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_16F8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1770(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1738(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_17B0(var_24)
    pri = 0;
    return pri;
}
// fun_18A8
fun_18A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_18D8
fun_18D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1908
fun_1908() {
    OP_JUMP lab_1920
// lab_1920
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_19B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_19A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    pri = 0;
    return pri;
// lab_19B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A40
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1A30
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    pri = 0;
    return pri;
// lab_1A40
    pri = 0;
    return pri;
// lab_1A30
    OP_JUMP lab_1A50
// lab_1A50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1920
    pri = 0;
    return pri;
// lab_19A0
    OP_JUMP lab_1A50
}
// fun_1A90
fun_1A90() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1908(var_40)
    pri = 0;
    return pri;
}
// fun_1B18
fun_1B18() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1B50
fun_1B50() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B78
fun_1B78() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1BA8
fun_1BA8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1BE0
fun_1BE0() {
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
// switch_21F8
        case default:
        {
// switch_21F8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2240
// lab_2240
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
            OP_JNZ lab_22E8
            var_88 = 0;
            pri = fun_24A0()
// lab_22E8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_21F8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1DE0
                case default:
                {
// switch_1DE0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E58
// lab_1E58
                    OP_JUMP lab_2240
                }
                case 0x0:
                {
// switch_1DE0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E58
                }
                case 0x1:
                {
// switch_1DE0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E58
                }
                case 0x2:
                {
// switch_1DE0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E58
                }
                case 0x3:
                {
// switch_1DE0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E58
                }
                case 0x4:
                {
// switch_1DE0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E58
                }
                case 0x5:
                {
// switch_1DE0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E58
                }
            }
        }
        case 0x65:
        {
// switch_21F8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F98
                case default:
                {
// switch_1F98_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2010
// lab_2010
                    OP_JUMP lab_2240
                }
                case 0x0:
                {
// switch_1F98_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2010
                }
                case 0x1:
                {
// switch_1F98_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2010
                }
                case 0x2:
                {
// switch_1F98_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2010
                }
                case 0x3:
                {
// switch_1F98_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2010
                }
                case 0x4:
                {
// switch_1F98_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2010
                }
                case 0x5:
                {
// switch_1F98_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2010
                }
            }
        }
        case 0x66:
        {
// switch_21F8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2150
                case default:
                {
// switch_2150_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21C8
// lab_21C8
                    OP_JUMP lab_2240
                }
                case 0x0:
                {
// switch_2150_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_21C8
                }
                case 0x1:
                {
// switch_2150_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_21C8
                }
                case 0x2:
                {
// switch_2150_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_21C8
                }
                case 0x3:
                {
// switch_2150_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21C8
                }
                case 0x4:
                {
// switch_2150_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_21C8
                }
                case 0x5:
                {
// switch_2150_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_21C8
                }
            }
        }
    }
}
// fun_2300
fun_2300() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A98(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_23A8
    pri = 1;
    return pri;
// lab_23A8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_23F0
fun_23F0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2440
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2300(var_8)
    arg_2 = pri;
// lab_2440
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1BE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24A0
fun_24A0() {
    OP_JUMP lab_24B8
// lab_24B8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_24F8
    pri = 0;
    return pri;
// lab_24F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24B8
    pri = 0;
    return pri;
}
// fun_2538
fun_2538() {
    var_8 = 0;
    pri = fun_24A0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_25E8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_25E8
    pri = 0;
    return pri;
}
// fun_25F8
fun_25F8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2628
fun_2628() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2658
// lab_2658
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2698
    OP_JUMP lab_26C8
// lab_2698
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2658
// lab_26C8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2710
fun_2710() {
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
// fun_2780
fun_2780() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_27E0(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2880(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_27E0
fun_27E0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2830
fun_2830() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2880
fun_2880() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28D0
fun_28D0() {
    OP_JUMP lab_28E8
// lab_28E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2920
    pri = 0;
    return pri;
// lab_2920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_28E8
    pri = 0;
    return pri;
}
// fun_2960
fun_2960() {
    pri = arg_6;
    OP_JNZ lab_2998
    var_8 = 0;
    pri = fun_10D0()
// lab_2998
    pri = arg_1;
    switch (pri) {
// switch_3F00
        case default:
        {
// switch_3F00_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4250
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4250
            pri = 1;
            OP_JUMP lab_4258
// lab_4250
            pri = 0;
// lab_4258
            OP_JZER lab_43B0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A98(var_24, var_16)
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
            OP_JUMP lab_4410
// lab_43B0
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
// lab_4410
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4470
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_44D0
// lab_4470
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_44D0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_44D0
            pri = arg_2;
            OP_JZER lab_4510
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4510
            var_8 = 0;
            pri = fun_1110()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F00_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1:
        {
// switch_3F00_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x2:
        {
// switch_3F00_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x3:
        {
// switch_3F00_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x4:
        {
// switch_3F00_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x5:
        {
// switch_3F00_case_0x5
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0x6:
        {
// switch_3F00_case_0x6
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0x7:
        {
// switch_3F00_case_0x7
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0x8:
        {
// switch_3F00_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x9:
        {
// switch_3F00_case_0x9
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0xa:
        {
// switch_3F00_case_0xa
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0xb:
        {
// switch_3F00_case_0xb
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0xc:
        {
// switch_3F00_case_0xc
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0xd:
        {
// switch_3F00_case_0xd
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0xe:
        {
// switch_3F00_case_0xe
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0xf:
        {
// switch_3F00_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x10:
        {
// switch_3F00_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x11:
        {
// switch_3F00_case_0x11
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0x12:
        {
// switch_3F00_case_0x12
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0x13:
        {
// switch_3F00_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x14:
        {
// switch_3F00_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x15:
        {
// switch_3F00_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x16:
        {
// switch_3F00_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x17:
        {
// switch_3F00_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x18:
        {
// switch_3F00_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x19:
        {
// switch_3F00_case_0x19
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1a:
        {
// switch_3F00_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A20(var_48, var_40)
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
            pri = fun_0E30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1b:
        {
// switch_3F00_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A20(var_48, var_40)
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
            pri = fun_0E30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1c:
        {
// switch_3F00_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A20(var_48, var_40)
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
            pri = fun_0E30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1d:
        {
// switch_3F00_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1e:
        {
// switch_3F00_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x1f:
        {
// switch_3F00_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x20:
        {
// switch_3F00_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x21:
        {
// switch_3F00_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x22:
        {
// switch_3F00_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x23:
        {
// switch_3F00_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x24:
        {
// switch_3F00_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x25:
        {
// switch_3F00_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x26:
        {
// switch_3F00_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x27:
        {
// switch_3F00_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x28:
        {
// switch_3F00_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
        case 0x29:
        {
// switch_3F00_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F00_case_default
        }
    }
}
// fun_4540
fun_4540() {
    pri = arg_5;
    OP_JNZ lab_4578
    var_8 = 0;
    pri = fun_10D0()
// lab_4578
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_45C8
    OP_CONST_S -8, -1
// lab_45C8
    pri = arg_1;
    switch (pri) {
// switch_6080
        case default:
        {
// switch_6080_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6528
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A98(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6528
            pri = 1;
            OP_JUMP lab_6530
// lab_6528
            pri = 0;
// lab_6530
            OP_JZER lab_6580
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_67D8
// lab_6580
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_65E8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_65E8
            pri = 1;
            OP_JUMP lab_65F0
// lab_65E8
            pri = 0;
// lab_65F0
            OP_JZER lab_6778
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A98(var_24, var_16)
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
            OP_JUMP lab_67D8
// lab_6778
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
// lab_67D8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6848
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6848
            var_8 = 0;
            pri = fun_1110()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6080_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x1:
        {
// switch_6080_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x2:
        {
// switch_6080_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x3:
        {
// switch_6080_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x4:
        {
// switch_6080_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x5:
        {
// switch_6080_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DF8(var_40)
            OP_JUMP switch_6080_case_default
        }
        case 0x6:
        {
// switch_6080_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x7:
        {
// switch_6080_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x8:
        {
// switch_6080_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x9:
        {
// switch_6080_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0xa:
        {
// switch_6080_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0xb:
        {
// switch_6080_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0xc:
        {
// switch_6080_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0xd:
        {
// switch_6080_case_0xd
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0xe:
        {
// switch_6080_case_0xe
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0xf:
        {
// switch_6080_case_0xf
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x10:
        {
// switch_6080_case_0x10
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x11:
        {
// switch_6080_case_0x11
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x12:
        {
// switch_6080_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x13:
        {
// switch_6080_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x14:
        {
// switch_6080_case_0x14
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x15:
        {
// switch_6080_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x16:
        {
// switch_6080_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x17:
        {
// switch_6080_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x18:
        {
// switch_6080_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x19:
        {
// switch_6080_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x1a:
        {
// switch_6080_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x1b:
        {
// switch_6080_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x1c:
        {
// switch_6080_case_0x1c
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x1d:
        {
// switch_6080_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x1e:
        {
// switch_6080_case_0x1e
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x1f:
        {
// switch_6080_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x20:
        {
// switch_6080_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x21:
        {
// switch_6080_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x22:
        {
// switch_6080_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x23:
        {
// switch_6080_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x24:
        {
// switch_6080_case_0x24
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x25:
        {
// switch_6080_case_0x25
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x26:
        {
// switch_6080_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x27:
        {
// switch_6080_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x28:
        {
// switch_6080_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x29:
        {
// switch_6080_case_0x29
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x2a:
        {
// switch_6080_case_0x2a
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x2b:
        {
// switch_6080_case_0x2b
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x2c:
        {
// switch_6080_case_0x2c
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x2d:
        {
// switch_6080_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x2e:
        {
// switch_6080_case_0x2e
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x2f:
        {
// switch_6080_case_0x2f
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x30:
        {
// switch_6080_case_0x30
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x31:
        {
// switch_6080_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x32:
        {
// switch_6080_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x33:
        {
// switch_6080_case_0x33
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x34:
        {
// switch_6080_case_0x34
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x35:
        {
// switch_6080_case_0x35
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x36:
        {
// switch_6080_case_0x36
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x37:
        {
// switch_6080_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x38:
        {
// switch_6080_case_0x38
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
            pri = fun_0E30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6080_case_default
        }
        case 0x39:
        {
// switch_6080_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x3a:
        {
// switch_6080_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x3b:
        {
// switch_6080_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x3c:
        {
// switch_6080_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x3d:
        {
// switch_6080_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
        case 0x3e:
        {
// switch_6080_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            OP_JUMP switch_6080_case_default
        }
    }
}
// fun_6878
fun_6878() {
    pri = arg_4;
    OP_JNZ lab_68B0
    var_8 = 0;
    pri = fun_10D0()
// lab_68B0
    pri = arg_1;
    switch (pri) {
// switch_7C88
        case default:
        {
// switch_7C88_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_18A8(var_264)
            OP_JZER lab_8250
            pri = arg_3;
            switch (pri) {
// switch_81F8
                case default:
                {
// switch_81F8_case_default
                    OP_JUMP lab_8508
// lab_8508
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8578
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8578
                    var_8 = 0;
                    pri = fun_1110()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_81F8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81F8_case_default
                }
                case 0x2:
                {
// switch_81F8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81F8_case_default
                }
                case 0x3:
                {
// switch_81F8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_81F8_case_default
                }
            }
// lab_8250
            pri = arg_1;
            OP_JZER lab_82A0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_82A0
            pri = 0;
            OP_JUMP lab_82A8
// lab_82A0
            pri = 1;
// lab_82A8
            OP_JZER lab_8310
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A98(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8310
            pri = 1;
            OP_JUMP lab_8318
// lab_8310
            pri = 0;
// lab_8318
            OP_JZER lab_8368
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8508
// lab_8368
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_83D0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8508
// lab_83D0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A98(var_24, var_16)
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
// switch_7C88_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1:
        {
// switch_7C88_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2:
        {
// switch_7C88_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x3:
        {
// switch_7C88_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x4:
        {
// switch_7C88_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x5:
        {
// switch_7C88_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DF8(var_40)
            OP_JUMP switch_7C88_case_default
        }
        case 0x6:
        {
// switch_7C88_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x7:
        {
// switch_7C88_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x8:
        {
// switch_7C88_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x9:
        {
// switch_7C88_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0xa:
        {
// switch_7C88_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0xb:
        {
// switch_7C88_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0xc:
        {
// switch_7C88_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0xd:
        {
// switch_7C88_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0xe:
        {
// switch_7C88_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0xf:
        {
// switch_7C88_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x10:
        {
// switch_7C88_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x11:
        {
// switch_7C88_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x12:
        {
// switch_7C88_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x13:
        {
// switch_7C88_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x14:
        {
// switch_7C88_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x15:
        {
// switch_7C88_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x16:
        {
// switch_7C88_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x17:
        {
// switch_7C88_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x18:
        {
// switch_7C88_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x19:
        {
// switch_7C88_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1a:
        {
// switch_7C88_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1b:
        {
// switch_7C88_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1c:
        {
// switch_7C88_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1d:
        {
// switch_7C88_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1e:
        {
// switch_7C88_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x1f:
        {
// switch_7C88_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x20:
        {
// switch_7C88_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x21:
        {
// switch_7C88_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x22:
        {
// switch_7C88_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x23:
        {
// switch_7C88_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x24:
        {
// switch_7C88_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x25:
        {
// switch_7C88_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x26:
        {
// switch_7C88_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x27:
        {
// switch_7C88_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x28:
        {
// switch_7C88_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x29:
        {
// switch_7C88_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2a:
        {
// switch_7C88_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2b:
        {
// switch_7C88_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2c:
        {
// switch_7C88_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2d:
        {
// switch_7C88_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2e:
        {
// switch_7C88_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x2f:
        {
// switch_7C88_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x30:
        {
// switch_7C88_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x31:
        {
// switch_7C88_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x32:
        {
// switch_7C88_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x33:
        {
// switch_7C88_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x34:
        {
// switch_7C88_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x35:
        {
// switch_7C88_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x36:
        {
// switch_7C88_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x37:
        {
// switch_7C88_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x38:
        {
// switch_7C88_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x39:
        {
// switch_7C88_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x3a:
        {
// switch_7C88_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x3b:
        {
// switch_7C88_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x3c:
        {
// switch_7C88_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x3d:
        {
// switch_7C88_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
        case 0x3e:
        {
// switch_7C88_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A58(var_24, var_16, var_8)
            OP_JUMP switch_7C88_case_default
        }
    }
}
// fun_85A8
fun_85A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_87B8(var_16, var_8)
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
    OP_JZER lab_87A0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_87A0
    pri = 0;
    return pri;
}
// fun_87B8
fun_87B8() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A58(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8800
fun_8800() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8900
        case default:
        {
// switch_8900_case_default
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
// switch_8900_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8900_case_default
        }
        case 0x1:
        {
// switch_8900_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8900_case_default
        }
        case 0x2:
        {
// switch_8900_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8900_case_default
        }
        case 0x3:
        {
// switch_8900_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8900_case_default
        }
    }
}
// fun_89C0
fun_89C0() {
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
    pri = fun_23F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_24A0()
    pri = 0;
    return pri;
}
// fun_8A58
fun_8A58() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8800(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_89C0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8B00
fun_8B00() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8B50
// lab_8B50
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8BC8
    OP_JUMP lab_8BF8
// lab_8BC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8B50
// lab_8BF8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8C80
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6878(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1B78(var_56)
// lab_8C80
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8CE8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1678(var_24, var_16)
// lab_8CE8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1678(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8DA8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AD0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0850(var_88, var_80, var_72, var_64, var_56)
// lab_8DA8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8DE8
    pri = 0;
    return pri;
// lab_8DE8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F30
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0A20(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8EF8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_8F30
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08F8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08F8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AD0(var_40)
    pri = 0;
    return pri;
// lab_8EF8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1678(var_16, var_8)
}
// fun_8FB8
fun_8FB8() {
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
    pri = fun_8A58(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2538(var_112)
    var_128 = 0;
    pri = fun_25F8()
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
    pri = fun_8B00(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9130
fun_9130() {
    pri = 30528;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_91B8
// lab_91B8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9338
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9328
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9278
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9278
    pri = 0;
    OP_JUMP lab_9280
// lab_9338
    pri = 0;
    return pri;
// lab_9328
    OP_JUMP lab_91B0
// lab_91B0
    OP_INC_P_S -936
// lab_9278
    pri = 1;
// lab_9280
    OP_JZER lab_92F8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_92F0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_92F8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_92F0
}
// fun_9358
fun_9358() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_93A0
    pri = arg_0;
    return pri;
// lab_93A0
    pri = arg_1;
    return pri;
}
// fun_93B0
fun_93B0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9448
    var_8 = 1;
    var_16 = 0;
    var_24 = 31448;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1B50()
// lab_9448
    pri = arg_4;
    OP_JZER lab_9480
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BA8(var_8)
// lab_9480
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_94D8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_94D8
    pri = 0;
    OP_JUMP lab_94E0
// lab_94D8
    pri = 1;
// lab_94E0
    OP_JZER lab_95A8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_95A8
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_9580
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1A90(var_32, var_24)
    OP_JUMP lab_95A8
// lab_95A8
    pri = arg_2;
    OP_JZER lab_9680
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_9650
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1678(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06E0(var_40)
    OP_JUMP lab_9680
// lab_9680
    pri = arg_3;
    OP_JZER lab_96B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B18(var_8)
// lab_96B8
    pri = 0;
    return pri;
// lab_9650
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1678(var_16, var_8)
// lab_9580
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1A90(var_16, var_8)
}
// fun_96C8
fun_96C8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9130(var_24)
    pri = 0;
    return pri;
}
// fun_9730
fun_9730() {
    pri = g_mode;
    switch (pri) {
// switch_9840
        case default:
        {
// switch_9840_case_default
            pri = CommandNOP()
            OP_JUMP lab_98A8
// lab_98A8
            pri = 0;
            return pri;
        }
        case 0x81e7512e6d2e6e90:
        {
// switch_9840_case_0x81e7512e6d2e6e90
            var_8 = 0;
            pri = fun_E0A8()
            OP_JUMP lab_98A8
        }
        case 0xbfa0ea6aebe2cb8b:
        {
// switch_9840_case_0xbfa0ea6aebe2cb8b
            var_8 = 0;
            pri = fun_E020()
            OP_JUMP lab_98A8
        }
        case 0x0:
        {
// switch_9840_case_0x0
            var_8 = 0;
            pri = fun_98B8()
            OP_JUMP lab_98A8
        }
        case 0x168b7717fce4bf98:
        {
// switch_9840_case_0x168b7717fce4bf98
            var_8 = 0;
            pri = fun_DFD8()
            OP_JUMP lab_98A8
        }
        case 0x3421611b87080114:
        {
// switch_9840_case_0x3421611b87080114
            var_8 = 0;
            pri = fun_DEE8()
            OP_JUMP lab_98A8
        }
    }
}
// fun_98B8
fun_98B8() {
    pri = 0;
    return pri;
}
// fun_98D0
fun_98D0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_93B0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9928
fun_9928() {
    var_8 = -34089364971008208;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = -1499539697698718860;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = -3059696659601986933;
    var_48 = 8;
    pri = fun_0438(var_40)
    var_56 = 6241921994871454197;
    var_64 = 8;
    pri = fun_0438(var_56)
    pri = 0;
    return pri;
}
// fun_99E0
fun_99E0() {
    var_8 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_9A10
fun_9A10() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 6241921994871454197;
    var_24 = 16;
    pri = fun_06A0(var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4676005070958388838, 4672913340468350157, 8802641224559852288
    var_48 = 48;
    pri = fun_0610(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4675994075842111078, 4672939893674160947, 6241921994871454197
    var_72 = 48;
    pri = fun_0610(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C -4587338432941916160, 4676015282672631808, 4672936787553812480, -34089364971008208
    var_96 = 48;
    pri = fun_0610(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    var_120 = 0;
    OP_PUSH3_C 4675974339608392499, 4672946023451485798, -1499539697698718860
    var_128 = 48;
    pri = fun_0610(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    var_152 = 0;
    OP_PUSH3_C 4675978875093857075, 4672981757579388518, -3059696659601986933
    var_160 = 48;
    pri = fun_0610(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 8;
    pri = fun_0090(var_168)
    var_184 = 0;
    var_192 = -3059696659601986933;
    var_200 = 16;
    pri = fun_0668(var_192, var_184)
    var_208 = 0;
    var_216 = -1499539697698718860;
    var_224 = 16;
    pri = fun_0668(var_216, var_208)
    var_232 = 1;
    var_240 = 0;
    OP_PUSH5_C 4641240890982006784, -1499539697698718860, 4676005070958388838, 4672840965115451802, 4607182418800017408
    var_248 = 8802641224559852288;
    var_256 = 64;
    pri = fun_0790(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 0;
    OP_PUSH5_C 4641240890982006784, -1499539697698718860, 4675994075842111078, 4672862378104402739, 4607182418800017408
    var_280 = 6241921994871454197;
    var_288 = 64;
    pri = fun_0790(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_296 = 1;
    var_304 = 0;
    OP_PUSH5_C 4641240890982006784, -1499539697698718860, 4676015282672631808, 4672869992222425088, 4607182418800017408
    var_312 = -34089364971008208;
    var_320 = 64;
    pri = fun_0790(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_328 = 0;
    var_336 = 4631952216750555136;
    var_344 = 0;
    OP_PUSH5_C 4675929572992467599, -4580659383588293181, 4672943065765207081, 4676039814151437025, -4583506151134000579
    var_352 = 4672878419979051991;
    var_360 = 1;
    pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 0;
    pri = fun_28D0()
    var_376 = 0;
    var_384 = 4631952216750555136;
    var_392 = 3;
    OP_PUSH5_C 4675920998176160481, -4577349941549617644, 4672911298125501563, 4676031239335129907, -4578772093869448233
    var_400 = 4672846707314927862;
    var_408 = 60;
    pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_416 = 31496;
    var_424 = 8;
    var_432 = 16;
    pri = fun_02B0(var_424, var_416)
    var_440 = 0;
    pri = fun_0380()
    var_448 = 0;
    pri = fun_2780()
    var_456 = 1;
    var_464 = 1103;
    var_472 = 1104;
    var_480 = 16;
    pri = fun_9358(var_472, var_464)
    var_488 = pri;
    var_496 = 1;
    var_504 = 24;
    pri = fun_2830(var_496, var_488, var_480)
    var_512 = 6;
    var_520 = 7;
    var_528 = -1499539697698718860;
    var_536 = 24;
    pri = fun_17E8(var_528, var_520, var_512)
    var_544 = 70;
    var_552 = 8;
    pri = fun_0090(var_544)
    var_560 = 31544;
    pri = SoundPostEvent(var_560)
    var_568 = 1;
    var_576 = -1499539697698718860;
    var_584 = 16;
    pri = fun_0668(var_576, var_568)
    var_592 = 0;
    var_600 = 4631952216750555136;
    var_608 = 3;
    OP_PUSH5_C 4675927464678921339, -4576625495328308593, 4672901012194223718, 4676039117335942922, -4578882045032225833
    var_616 = 4672854755740043182;
    var_624 = 80;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 1;
    var_640 = 0;
    var_648 = 4641240890982006784;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH4_C 4675992481550250803, 4672916336637535846, 4611686018427387904, -1499539697698718860
    var_672 = 72;
    pri = fun_0718(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C -4002922298262564256, -1499539697698718860
    var_720 = 56;
    pri = fun_23F0(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = -1499539697698718860;
    var_736 = 8;
    pri = fun_08F8(var_728)
    var_744 = -34089364971008208;
    var_752 = 8;
    pri = fun_08F8(var_744)
    var_760 = 6241921994871454197;
    var_768 = 8;
    pri = fun_08F8(var_760)
    var_776 = 8802641224559852288;
    var_784 = 8;
    pri = fun_08F8(var_776)
    var_792 = 1;
    var_800 = 8;
    pri = fun_2538(var_792)
    var_808 = 0;
    pri = fun_25F8()
    var_816 = 1;
    var_824 = 1;
    var_832 = -1;
    var_840 = -1;
    var_848 = 0;
    var_856 = 1;
    var_864 = -34089364971008208;
    var_872 = 56;
    pri = fun_4540(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_880 = 0;
    var_888 = 3;
    var_896 = 0;
    var_904 = 100;
    var_912 = -1;
    OP_PUSH2_C -7597442377121883717, -34089364971008208
    var_920 = 56;
    pri = fun_23F0(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_928 = 1;
    var_936 = 8;
    pri = fun_2538(var_928)
    var_944 = 0;
    pri = fun_25F8()
    var_952 = 1;
    var_960 = 3;
    var_968 = 0;
    var_976 = 1;
    var_984 = -34089364971008208;
    var_992 = 40;
    pri = fun_6878(var_984, var_976, var_968, var_960, var_952)
    var_1000 = 1;
    var_1008 = -1;
    var_1016 = -1;
    var_1024 = 3;
    var_1032 = 0;
    var_1040 = 1;
    var_1048 = 6241921994871454197;
    var_1056 = 56;
    pri = fun_2960(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1064 = 0;
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 100;
    var_1096 = -1;
    OP_PUSH2_C -2826679760455587610, 6241921994871454197
    var_1104 = 56;
    pri = fun_23F0(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = -34089364971008208;
    var_1120 = 8;
    pri = fun_0AD0(var_1112)
    var_1128 = 6241921994871454197;
    var_1136 = 8;
    pri = fun_0AD0(var_1128)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_2538(var_1144)
    var_1160 = 0;
    pri = fun_25F8()
    var_1168 = -1499539697698718860;
    var_1176 = 8;
    pri = fun_17B0(var_1168)
    var_1184 = 8;
    var_1192 = -1499539697698718860;
    var_1200 = 16;
    pri = fun_16F8(var_1192, var_1184)
    var_1208 = 1;
    var_1216 = 1;
    OP_PUSH4_C 4635942124545428685, 4675994075842111078, 4672862378104402739, 6241921994871454197
    var_1224 = 48;
    pri = fun_0610(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1232 = 0;
    var_1240 = 4631952216750555136;
    var_1248 = 0;
    OP_PUSH5_C 4675893672563431178, -4577028532310586163, 4672955471005147464, 4676005325220452762, -4579241277471252808
    var_1256 = 4672909824779920343;
    var_1264 = 1;
    pri = EvCameraMove(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1272 = 0;
    pri = fun_28D0()
    var_1280 = 1;
    var_1288 = 1;
    var_1296 = -1;
    var_1304 = -1;
    var_1312 = 0;
    var_1320 = 9;
    var_1328 = -1499539697698718860;
    var_1336 = 56;
    pri = fun_4540(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    OP_PUSH2_C -4002918999727679623, -1499539697698718860
    var_1384 = 56;
    pri = fun_23F0(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = 1;
    var_1400 = 8;
    pri = fun_2538(var_1392)
    var_1408 = 0;
    pri = fun_25F8()
    var_1416 = 31768;
    pri = SoundPostEvent(var_1416)
    var_1424 = -1499539697698718860;
    var_1432 = 8;
    pri = fun_1850(var_1424)
    var_1440 = 1;
    var_1448 = 3;
    var_1456 = 0;
    var_1464 = 9;
    var_1472 = -1499539697698718860;
    var_1480 = 40;
    pri = fun_6878(var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1488 = 10;
    var_1496 = 8;
    pri = fun_0090(var_1488)
    var_1504 = 0;
    var_1512 = 4631952216750555136;
    var_1520 = 3;
    OP_PUSH5_C 4675893151669797519, -4577191260031497011, 4672952304411659469, 4676001651477226455, -4579340849244264202
    var_1528 = 4672907952861374054;
    var_1536 = 10;
    pri = EvCameraMove(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1544 = 0;
    var_1552 = 3;
    var_1560 = 0;
    var_1568 = 100;
    var_1576 = -1;
    OP_PUSH2_C -4002920099239307834, -1499539697698718860
    var_1584 = 56;
    pri = fun_23F0(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1592 = -1499539697698718860;
    var_1600 = 8;
    pri = fun_0AD0(var_1592)
    var_1608 = 1;
    var_1616 = 8;
    pri = fun_2538(var_1608)
    var_1624 = 0;
    pri = fun_25F8()
    var_1632 = 3;
    var_1640 = 7;
    var_1648 = -1499539697698718860;
    var_1656 = 24;
    pri = fun_17E8(var_1648, var_1640, var_1632)
    var_1664 = 0;
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 100;
    var_1696 = -1;
    OP_PUSH2_C -4002916800704423201, -1499539697698718860
    var_1704 = 56;
    pri = fun_23F0(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = 1;
    var_1720 = 8;
    pri = fun_2538(var_1712)
    var_1728 = 0;
    pri = fun_25F8()
    var_1736 = 1;
    var_1744 = 1;
    var_1752 = -1;
    var_1760 = -1;
    var_1768 = 0;
    var_1776 = 8;
    var_1784 = -1499539697698718860;
    var_1792 = 56;
    pri = fun_4540(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1800 = 0;
    var_1808 = 4629250056974132838;
    var_1816 = 0;
    OP_PUSH5_C 4675988494446210580, -4575792505319105495, 4672788254528016220, 4676010409087341691, -4581231129634736701
    var_1824 = 4672985894491888026;
    var_1832 = 1;
    pri = EvCameraMove(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
    var_1840 = 0;
    pri = fun_28D0()
    var_1848 = 0;
    var_1856 = 3;
    var_1864 = 0;
    var_1872 = 100;
    var_1880 = -1;
    OP_PUSH2_C -4002917900216051412, -1499539697698718860
    var_1888 = 56;
    pri = fun_23F0(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1896 = 1;
    var_1904 = 8;
    pri = fun_2538(var_1896)
    var_1912 = 0;
    pri = fun_25F8()
    var_1920 = 7;
    var_1928 = 6;
    var_1936 = -34089364971008208;
    var_1944 = 24;
    pri = fun_17E8(var_1936, var_1928, var_1920)
    var_1952 = 1;
    var_1960 = -1;
    var_1968 = -1;
    var_1976 = 3;
    var_1984 = 0;
    var_1992 = 4;
    var_2000 = -34089364971008208;
    var_2008 = 56;
    pri = fun_2960(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2016 = 0;
    var_2024 = 3;
    var_2032 = 0;
    var_2040 = 100;
    var_2048 = -1;
    OP_PUSH2_C -7597441277610255506, -34089364971008208
    var_2056 = 56;
    pri = fun_23F0(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2064 = 1;
    var_2072 = 8;
    pri = fun_2538(var_2064)
    var_2080 = 0;
    pri = fun_25F8()
    var_2088 = 2;
    var_2096 = 5;
    var_2104 = 6241921994871454197;
    var_2112 = 24;
    pri = fun_17E8(var_2104, var_2096, var_2088)
    var_2120 = 1;
    var_2128 = 1;
    var_2136 = -1;
    var_2144 = -1;
    var_2152 = 0;
    var_2160 = 0;
    var_2168 = 6241921994871454197;
    var_2176 = 56;
    pri = fun_4540(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2184 = 1;
    var_2192 = 3;
    var_2200 = 0;
    var_2208 = 8;
    var_2216 = -1499539697698718860;
    var_2224 = 40;
    pri = fun_6878(var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2232 = 0;
    var_2240 = 3;
    var_2248 = 0;
    var_2256 = 100;
    var_2264 = -1;
    OP_PUSH2_C -2826680859967215821, 6241921994871454197
    var_2272 = 56;
    pri = fun_23F0(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2280 = -1499539697698718860;
    var_2288 = 8;
    pri = fun_0AD0(var_2280)
    var_2296 = 1;
    var_2304 = 8;
    pri = fun_2538(var_2296)
    var_2312 = 0;
    pri = fun_25F8()
    var_2320 = 31928;
    pri = SoundPostEvent(var_2320)
    var_2328 = 6241921994871454197;
    var_2336 = 8;
    pri = fun_1850(var_2328)
    var_2344 = -34089364971008208;
    var_2352 = 8;
    pri = fun_1850(var_2344)
    var_2360 = -1499539697698718860;
    var_2368 = 8;
    pri = fun_1850(var_2360)
    var_2376 = 1;
    var_2384 = 1;
    var_2392 = 0;
    OP_PUSH3_C 4675974339608392499, 4672946023451485798, -3059696659601986933
    var_2400 = 48;
    pri = fun_0610(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352)
    var_2408 = 1;
    var_2416 = -3059696659601986933;
    var_2424 = 16;
    pri = fun_0668(var_2416, var_2408)
    var_2432 = 1;
    var_2440 = 8;
    pri = fun_0090(var_2432)
    var_2448 = 0;
    var_2456 = 4629250056974132838;
    var_2464 = 0;
    OP_PUSH5_C 4675959941503626772, -4576541404679016284, 4672946265344043909, 4676015666127311995, -4578545154669475267
    var_2472 = 4672912306927420047;
    var_2480 = 1;
    pri = EvCameraMove(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2488 = 0;
    pri = fun_28D0()
    var_2496 = 0;
    var_2504 = 4629250056974132838;
    var_2512 = 3;
    OP_PUSH5_C 4675956126198278390, -4576597523752497971, 4672922026610209587, 4676088927961460244, -4582599098021550490
    var_2520 = 4672841097056847135;
    var_2528 = 130;
    pri = EvCameraMove(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2536 = 1;
    var_2544 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4676014471782806323, 4672935303213114982, 4607182418800017408
    var_2552 = -3059696659601986933;
    var_2560 = 64;
    pri = fun_0790(var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2568 = 1;
    var_2576 = 3;
    var_2584 = 0;
    var_2592 = 0;
    var_2600 = 6241921994871454197;
    var_2608 = 40;
    pri = fun_6878(var_2600, var_2592, var_2584, var_2576, var_2568)
    var_2616 = 1;
    var_2624 = 1;
    var_2632 = 30;
    OP_PUSH2_C -3059696659601986933, -1499539697698718860
    var_2640 = 40;
    pri = fun_1150(var_2632, var_2624, var_2616, var_2608, var_2600)
    var_2648 = 0;
    var_2656 = 3;
    var_2664 = 0;
    var_2672 = 100;
    var_2680 = -1;
    OP_PUSH2_C 8179632743126532158, -3059696659601986933
    var_2688 = 56;
    pri = fun_23F0(var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2696 = -3059696659601986933;
    var_2704 = 8;
    pri = fun_08F8(var_2696)
    var_2712 = 6241921994871454197;
    var_2720 = 8;
    pri = fun_0AD0(var_2712)
    var_2728 = 1;
    var_2736 = 8;
    pri = fun_2538(var_2728)
    var_2744 = 0;
    pri = fun_25F8()
    var_2752 = -1;
    var_2760 = -1499539697698718860;
    var_2768 = 16;
    pri = fun_1678(var_2760, var_2752)
    var_2776 = 0;
    var_2784 = 0;
    var_2792 = 0;
    var_2800 = 0;
    OP_PUSH2_C -3059696659601986933, -1499539697698718860
    var_2808 = 48;
    pri = fun_08A0(var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
    var_2816 = 0;
    var_2824 = 0;
    var_2832 = 0;
    var_2840 = 0;
    OP_PUSH2_C -3059696659601986933, 6241921994871454197
    var_2848 = 48;
    pri = fun_08A0(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2856 = 0;
    var_2864 = 0;
    var_2872 = 0;
    var_2880 = 0;
    OP_PUSH2_C -3059696659601986933, -34089364971008208
    var_2888 = 48;
    pri = fun_08A0(var_2880, var_2872, var_2864, var_2856, var_2848, var_2840)
    var_2896 = 0;
    var_2904 = 3;
    var_2912 = 0;
    var_2920 = 100;
    var_2928 = -1;
    OP_PUSH2_C -4002914601681166779, -1499539697698718860
    var_2936 = 56;
    pri = fun_23F0(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880)
    var_2944 = -1499539697698718860;
    var_2952 = 8;
    pri = fun_08F8(var_2944)
    var_2960 = 6241921994871454197;
    var_2968 = 8;
    pri = fun_08F8(var_2960)
    var_2976 = -34089364971008208;
    var_2984 = 8;
    pri = fun_08F8(var_2976)
    var_2992 = 1;
    var_3000 = 8;
    pri = fun_2538(var_2992)
    var_3008 = 0;
    pri = fun_25F8()
    var_3016 = 0;
    var_3024 = 4629250056974132838;
    var_3032 = 0;
    OP_PUSH5_C 4675962001713539318, -4575952066446528348, 4673145010317101629, 4676021221409811333, -4579387468537281905
    var_3040 = 4672888694915213558;
    var_3048 = 1;
    pri = EvCameraMove(var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976)
    var_3056 = 0;
    pri = fun_28D0()
    var_3064 = 1;
    var_3072 = 1;
    var_3080 = -1;
    var_3088 = -1;
    var_3096 = 0;
    var_3104 = 1;
    var_3112 = -3059696659601986933;
    var_3120 = 56;
    pri = fun_4540(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3128 = 0;
    var_3136 = 3;
    var_3144 = 0;
    var_3152 = 100;
    var_3160 = -1;
    OP_PUSH2_C 8179631643614903947, -3059696659601986933
    var_3168 = 56;
    pri = fun_23F0(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112)
    var_3176 = 1;
    var_3184 = 8;
    pri = fun_2538(var_3176)
    var_3192 = 0;
    pri = fun_25F8()
    var_3200 = 0;
    var_3208 = 4629250056974132838;
    var_3216 = 0;
    OP_PUSH5_C 4675962287586562540, -4576098081590697001, 4673025537383627489, 4676031889421379830, -4579510261995871928
    var_3224 = 4672779857007959081;
    var_3232 = 1;
    pri = EvCameraMove(var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160)
    var_3240 = 0;
    pri = fun_28D0()
    var_3248 = 0;
    var_3256 = 4629250056974132838;
    var_3264 = 3;
    OP_PUSH5_C 4675952026394296320, -4576098081590697001, 4673011295959268721, 4676041143186117100, -4579504808418198159
    var_3272 = 4672792245755225047;
    var_3280 = 280;
    pri = EvCameraMove(var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216, var_3208)
    var_3288 = 0;
    var_3296 = 3;
    var_3304 = 0;
    var_3312 = 100;
    var_3320 = -1;
    OP_PUSH2_C 8179630544103275736, -3059696659601986933
    var_3328 = 56;
    pri = fun_23F0(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3336 = 1;
    var_3344 = 3;
    var_3352 = 0;
    var_3360 = 1;
    var_3368 = -3059696659601986933;
    var_3376 = 40;
    pri = fun_6878(var_3368, var_3360, var_3352, var_3344, var_3336)
    var_3384 = 1;
    var_3392 = 8;
    pri = fun_2538(var_3384)
    var_3400 = 0;
    var_3408 = -3193320142725063731;
    var_3416 = 0;
    var_3424 = 24;
    pri = fun_2628(var_3416, var_3408, var_3400)
    var_3432 = 0;
    var_3440 = -3193323441259948364;
    var_3448 = 1;
    var_3456 = 24;
    pri = fun_2628(var_3448, var_3440, var_3432)
    var_3472 = 0;
    var_3480 = 0;
    var_3488 = 0;
    var_3496 = 1;
    var_3504 = 32;
    pri = fun_2710(var_3496, var_3488, var_3480, var_3472)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_BB08
        case default:
        {
// switch_BB08_case_default
            var_8 = 0;
            var_16 = 4629250056974132838;
            var_24 = 0;
            OP_PUSH5_C 4675894527433721774, -4576073100686513930, 4672946655670671770, 4676035406484199178, -4579473318405178655
            var_32 = 4672925924378930053;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            var_48 = 0;
            pri = fun_28D0()
            var_56 = 0;
            var_64 = 4629250056974132838;
            var_72 = 3;
            OP_PUSH5_C 4675894491699593871, -4576073100686513930, 4672945649617532355, 4676035369375681741, -4579473318405178655
            var_80 = 4672924918325790638;
            var_88 = 90;
            pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_96 = 8;
            var_104 = -3059696659601986933;
            var_112 = 16;
            pri = fun_16F8(var_104, var_96)
            var_120 = 1;
            var_128 = 1;
            var_136 = -1;
            var_144 = -1;
            var_152 = 0;
            var_160 = 6;
            var_168 = -3059696659601986933;
            var_176 = 56;
            pri = fun_4540(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
            var_184 = 0;
            var_192 = 3;
            var_200 = 0;
            var_208 = 100;
            var_216 = -1;
            OP_PUSH2_C 8179637141173045002, -3059696659601986933
            var_224 = 56;
            pri = fun_23F0(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_232 = 1;
            var_240 = 8;
            pri = fun_2538(var_232)
            var_248 = 0;
            pri = fun_25F8()
            var_256 = 2;
            var_264 = 7;
            var_272 = -1499539697698718860;
            var_280 = 24;
            pri = fun_17E8(var_272, var_264, var_256)
            var_288 = 1;
            var_296 = 1;
            var_304 = -1;
            var_312 = -1;
            var_320 = 0;
            var_328 = 6;
            var_336 = -1499539697698718860;
            var_344 = 56;
            pri = fun_4540(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
            var_352 = 0;
            var_360 = 3;
            var_368 = 0;
            var_376 = 100;
            var_384 = -1;
            OP_PUSH2_C -4002915701192794990, -1499539697698718860
            var_392 = 56;
            pri = fun_23F0(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_400 = 1;
            var_408 = 8;
            pri = fun_2538(var_400)
            var_416 = 0;
            pri = fun_25F8()
            var_424 = 0;
            var_432 = 4629250056974132838;
            var_440 = 0;
            OP_PUSH5_C 4675949681685750088, -4576097377903255224, 4672682132414482350, 4676023267875828531, -4579494956794013286
            var_448 = 4672923329531488502;
            var_456 = 1;
            pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
            var_464 = 0;
            pri = fun_28D0()
            var_472 = 7;
            var_480 = 6;
            var_488 = -34089364971008208;
            var_496 = 24;
            pri = fun_17E8(var_488, var_480, var_472)
            var_504 = 1;
            var_512 = -1;
            var_520 = -1;
            var_528 = 3;
            var_536 = 0;
            var_544 = 1;
            var_552 = -34089364971008208;
            var_560 = 56;
            pri = fun_2960(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
            var_568 = 1;
            var_576 = 3;
            var_584 = 0;
            var_592 = 6;
            var_600 = -3059696659601986933;
            var_608 = 40;
            pri = fun_6878(var_600, var_592, var_584, var_576, var_568)
            var_616 = 1;
            var_624 = 3;
            var_632 = 0;
            var_640 = 6;
            var_648 = -1499539697698718860;
            var_656 = 40;
            pri = fun_6878(var_648, var_640, var_632, var_624, var_616)
            var_664 = 1;
            var_672 = 1;
            var_680 = 30;
            OP_PUSH2_C -34089364971008208, 8802641224559852288
            var_688 = 40;
            pri = fun_1150(var_680, var_672, var_664, var_656, var_648)
            var_696 = 1;
            var_704 = 1;
            var_712 = 30;
            OP_PUSH2_C -34089364971008208, 6241921994871454197
            var_720 = 40;
            pri = fun_1150(var_712, var_704, var_696, var_688, var_680)
            var_728 = 0;
            var_736 = 3;
            var_744 = 0;
            var_752 = 100;
            var_760 = -1;
            OP_PUSH2_C -7597440178098627295, -34089364971008208
            var_768 = 56;
            pri = fun_23F0(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
            var_776 = -1499539697698718860;
            var_784 = 8;
            pri = fun_0AD0(var_776)
            var_792 = -3059696659601986933;
            var_800 = 8;
            pri = fun_0AD0(var_792)
            var_808 = -34089364971008208;
            var_816 = 8;
            pri = fun_0AD0(var_808)
            var_824 = 1;
            var_832 = 8;
            pri = fun_2538(var_824)
            var_840 = 0;
            pri = fun_25F8()
            var_848 = -1;
            var_856 = 8802641224559852288;
            var_864 = 16;
            pri = fun_1678(var_856, var_848)
            var_872 = -1;
            var_880 = 6241921994871454197;
            var_888 = 16;
            pri = fun_1678(var_880, var_872)
            var_896 = -3059696659601986933;
            var_904 = 8;
            pri = fun_1738(var_896)
            var_912 = 1;
            var_920 = 1;
            OP_PUSH4_C -4591771663825108992, 4675992481550250803, 4672916336637535846, -1499539697698718860
            var_928 = 48;
            pri = fun_0610(var_920, var_912, var_904, var_896, var_888, var_880)
            var_936 = 0;
            var_944 = 4629250056974132838;
            var_952 = 0;
            OP_PUSH5_C 4675929560622961787, -4576062721296747725, 4672935278474103357, 4676064081747451576, -4579458189125180457
            var_960 = 4672848997047892705;
            var_968 = 1;
            pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
            var_976 = 0;
            pri = fun_28D0()
            var_984 = 0;
            var_992 = 4629250056974132838;
            var_1000 = 3;
            OP_PUSH5_C 4675932628260403282, -4576140126915343155, 4672933304850731500, 4676067149384893071, -4579535770665636332
            var_1008 = 4672847026173299917;
            var_1016 = 90;
            pri = EvCameraMove(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
            var_1024 = 0;
            var_1032 = 4;
            var_1040 = -1499539697698718860;
            var_1048 = 24;
            pri = fun_85A8(var_1040, var_1032, var_1024)
            var_1056 = 0;
            var_1064 = 3;
            var_1072 = 0;
            var_1080 = 100;
            var_1088 = -1;
            OP_PUSH2_C -4002912402657910357, -1499539697698718860
            var_1096 = 56;
            pri = fun_23F0(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040)
            var_1104 = -1499539697698718860;
            var_1112 = 8;
            pri = fun_0AD0(var_1104)
            var_1120 = 1;
            var_1128 = 8;
            pri = fun_2538(var_1120)
            var_1136 = 0;
            pri = fun_25F8()
            var_1144 = 0;
            var_1152 = 4629250056974132838;
            var_1160 = 0;
            OP_PUSH5_C 4675880632355525755, -4576078730186048143, 4672985025877702083, 4676015153480015544, -4579474373936341320
            var_1168 = 4672898744451491430;
            var_1176 = 1;
            pri = EvCameraMove(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
            var_1184 = 0;
            pri = fun_28D0()
            var_1192 = -1499539697698718860;
            var_1200 = 8;
            pri = fun_1850(var_1192)
            var_1208 = 0;
            var_1216 = 3;
            var_1224 = 0;
            var_1232 = 100;
            var_1240 = -1;
            OP_PUSH2_C -4002913502169538568, -1499539697698718860
            var_1248 = 56;
            pri = fun_23F0(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
            var_1256 = 1;
            var_1264 = 8;
            pri = fun_2538(var_1256)
            var_1272 = 0;
            pri = fun_25F8()
            var_1280 = 0;
            var_1288 = 4629250056974132838;
            var_1296 = 3;
            OP_PUSH5_C 4675932628260403282, -4576140126915343155, 4672933304850731500, 4676067149384893071, -4579535770665636332
            var_1304 = 4672847026173299917;
            var_1312 = 1;
            pri = EvCameraMove(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
            var_1320 = 0;
            pri = fun_28D0()
            var_1328 = 0;
            var_1336 = 0;
            var_1344 = -1499539697698718860;
            var_1352 = 24;
            pri = fun_85A8(var_1344, var_1336, var_1328)
            var_1360 = 0;
            var_1368 = 3;
            var_1376 = 0;
            var_1384 = 100;
            var_1392 = -1;
            OP_PUSH2_C -4003877773867290390, -1499539697698718860
            var_1400 = 56;
            pri = fun_23F0(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
            var_1408 = -1499539697698718860;
            var_1416 = 8;
            pri = fun_0AD0(var_1408)
            var_1424 = 1;
            var_1432 = 8;
            pri = fun_2538(var_1424)
            var_1440 = 0;
            pri = fun_25F8()
            var_1448 = 6;
            var_1456 = -3059696659601986933;
            var_1464 = 16;
            pri = fun_16F8(var_1456, var_1448)
            var_1472 = 1;
            var_1480 = -1;
            var_1488 = -1;
            var_1496 = 3;
            var_1504 = 0;
            var_1512 = 0;
            var_1520 = -3059696659601986933;
            var_1528 = 56;
            pri = fun_2960(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
            var_1536 = 0;
            var_1544 = 3;
            var_1552 = 0;
            var_1560 = 100;
            var_1568 = -1;
            OP_PUSH2_C 8179636041661416791, -3059696659601986933
            var_1576 = 56;
            pri = fun_23F0(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
            var_1584 = -1499539697698718860;
            var_1592 = 8;
            pri = fun_0AD0(var_1584)
            var_1600 = -3059696659601986933;
            var_1608 = 8;
            pri = fun_0AD0(var_1600)
            var_1616 = 1;
            var_1624 = 8;
            pri = fun_2538(var_1616)
            var_1632 = 0;
            pri = fun_25F8()
            var_1640 = 4;
            var_1648 = 4;
            var_1656 = 6241921994871454197;
            var_1664 = 24;
            pri = fun_17E8(var_1656, var_1648, var_1640)
            var_1672 = 1;
            var_1680 = 1;
            OP_PUSH4_C -4588499517220847616, 4675992481550250803, 4672916336637535846, -1499539697698718860
            var_1688 = 48;
            pri = fun_0610(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
            var_1696 = 0;
            var_1704 = 4629250056974132838;
            var_1712 = 0;
            OP_PUSH5_C 4675918910478457242, -4576809685516193628, 4672881776238295777, 4676026380868124672, -4579446226438670254
            var_1720 = 4672837317485626655;
            var_1728 = 1;
            pri = EvCameraMove(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
            var_1736 = 0;
            pri = fun_28D0()
            var_1744 = 0;
            var_1752 = 0;
            var_1760 = 0;
            var_1768 = 0;
            OP_PUSH2_C 8802641224559852288, 6241921994871454197
            var_1776 = 48;
            pri = fun_08A0(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
            var_1784 = 0;
            var_1792 = 3;
            var_1800 = 0;
            var_1808 = 100;
            var_1816 = -1;
            OP_PUSH2_C -2826674262897446555, 6241921994871454197
            var_1824 = 56;
            pri = fun_23F0(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
            var_1832 = 6241921994871454197;
            var_1840 = 8;
            pri = fun_08F8(var_1832)
            var_1848 = 1;
            var_1856 = 8;
            pri = fun_2538(var_1848)
            var_1864 = 0;
            pri = fun_25F8()
            var_1872 = 0;
            var_1880 = 1;
            var_1888 = 120;
            var_1896 = 1;
            var_1904 = 6241921994871454197;
            var_1912 = 40;
            pri = fun_1208(var_1904, var_1896, var_1888, var_1880, var_1872)
            var_1920 = 0;
            var_1928 = 4629250056974132838;
            var_1936 = 3;
            OP_PUSH5_C 4675934611504501883, -4576809685516193628, 4672954863524973117, 4676025600214868951, -4579491614278664847
            var_1944 = 4672825431764930396;
            var_1952 = 50;
            pri = EvCameraMove(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
            var_1960 = 1;
            var_1968 = 1;
            var_1976 = -1;
            var_1984 = -1;
            var_1992 = 0;
            var_2000 = 1;
            var_2008 = -1499539697698718860;
            var_2016 = 56;
            pri = fun_4540(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
            var_2024 = 0;
            var_2032 = 3;
            var_2040 = 0;
            var_2048 = 100;
            var_2056 = -1;
            OP_PUSH2_C -4003876674355662179, -1499539697698718860
            var_2064 = 56;
            pri = fun_23F0(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
            var_2072 = 1;
            var_2080 = 8;
            pri = fun_2538(var_2072)
            var_2088 = 0;
            pri = fun_25F8()
            var_2096 = 1;
            var_2104 = 3;
            var_2112 = 0;
            var_2120 = 1;
            var_2128 = -1499539697698718860;
            var_2136 = 40;
            pri = fun_6878(var_2128, var_2120, var_2112, var_2104, var_2096)
            var_2144 = 15;
            var_2152 = 6241921994871454197;
            var_2160 = 16;
            pri = fun_16B8(var_2152, var_2144)
            var_2168 = 6241921994871454197;
            var_2176 = 8;
            pri = fun_1850(var_2168)
            var_2184 = 0;
            var_2192 = 0;
            var_2200 = 0;
            var_2208 = 0;
            OP_PUSH2_C -1499539697698718860, 6241921994871454197
            var_2216 = 48;
            pri = fun_08A0(var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
            var_2224 = 0;
            var_2232 = 3;
            var_2240 = 0;
            var_2248 = 100;
            var_2256 = -1;
            OP_PUSH2_C -2826675362409074766, 6241921994871454197
            var_2264 = 56;
            pri = fun_23F0(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
            var_2272 = 6241921994871454197;
            var_2280 = 8;
            pri = fun_08F8(var_2272)
            var_2288 = 1;
            var_2296 = 8;
            pri = fun_2538(var_2288)
            var_2304 = 0;
            pri = fun_25F8()
            var_2312 = 2;
            var_2320 = 2;
            var_2328 = -34089364971008208;
            var_2336 = 24;
            pri = fun_17E8(var_2328, var_2320, var_2312)
            var_2344 = 1;
            var_2352 = 1;
            OP_PUSH4_C -4589090614671939994, 4675992481550250803, 4672916336637535846, -1499539697698718860
            var_2360 = 48;
            pri = fun_0610(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
            var_2368 = 0;
            var_2376 = 4629250056974132838;
            var_2384 = 0;
            OP_PUSH5_C 4675972970716415918, -4575077998682911539, 4673036675436416860, 4676023590857369190, -4580599218312021279
            var_2392 = 4672783861979063255;
            var_2400 = 1;
            pri = EvCameraMove(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
            var_2408 = 0;
            pri = fun_28D0()
            var_2416 = 1;
            var_2424 = 1;
            var_2432 = 30;
            OP_PUSH2_C -34089364971008208, 8802641224559852288
            var_2440 = 40;
            pri = fun_1150(var_2432, var_2424, var_2416, var_2408, var_2400)
            var_2448 = 0;
            var_2456 = 0;
            var_2464 = 0;
            var_2472 = 0;
            OP_PUSH2_C 8802641224559852288, -34089364971008208
            var_2480 = 48;
            pri = fun_08A0(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
            var_2488 = 0;
            var_2496 = 0;
            var_2504 = 0;
            var_2512 = 0;
            OP_PUSH2_C -34089364971008208, 6241921994871454197
            var_2520 = 48;
            pri = fun_08A0(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
            var_2528 = 0;
            var_2536 = 3;
            var_2544 = 0;
            var_2552 = 100;
            var_2560 = -1;
            OP_PUSH2_C -7597439078586999084, -34089364971008208
            var_2568 = 56;
            pri = fun_23F0(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512)
            var_2576 = -34089364971008208;
            var_2584 = 8;
            pri = fun_08F8(var_2576)
            var_2592 = 6241921994871454197;
            var_2600 = 8;
            pri = fun_08F8(var_2592)
            var_2608 = 1;
            var_2616 = 8;
            pri = fun_2538(var_2608)
            var_2624 = 0;
            pri = fun_25F8()
            var_2632 = -3059696659601986933;
            var_2640 = 8;
            pri = fun_1738(var_2632)
            var_2648 = 1;
            var_2656 = 1;
            var_2664 = -1;
            var_2672 = -1;
            var_2680 = 0;
            var_2688 = 22;
            var_2696 = -34089364971008208;
            var_2704 = 56;
            pri = fun_4540(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
            var_2712 = 0;
            var_2720 = 3;
            var_2728 = 0;
            var_2736 = 100;
            var_2744 = -1;
            OP_PUSH2_C -7597437979075370873, -34089364971008208
            var_2752 = 56;
            pri = fun_23F0(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
            var_2760 = 1;
            var_2768 = 8;
            pri = fun_2538(var_2760)
            var_2776 = 0;
            pri = fun_25F8()
            var_2784 = 32152;
            var_2792 = -34089364971008208;
            var_2800 = 16;
            pri = fun_0CD0(var_2792, var_2784)
            var_2808 = 1;
            var_2816 = 0;
            var_2824 = 4641240890982006784;
            var_2832 = 0;
            var_2840 = 0;
            OP_PUSH4_C 4675983080725833318, 4672784312778830643, 4607182418800017408, 6241921994871454197
            var_2848 = 72;
            pri = fun_0718(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
            var_2856 = 1;
            var_2864 = 3;
            var_2872 = 0;
            var_2880 = 22;
            var_2888 = -34089364971008208;
            var_2896 = 40;
            pri = fun_6878(var_2888, var_2880, var_2872, var_2864, var_2856)
            var_2904 = -34089364971008208;
            var_2912 = 8;
            pri = fun_0AD0(var_2904)
            var_2920 = -1;
            var_2928 = 8802641224559852288;
            var_2936 = 16;
            pri = fun_1678(var_2928, var_2920)
            var_2944 = 0;
            var_2952 = 4629250056974132838;
            var_2960 = 3;
            OP_PUSH5_C 4675972394847200870, -4576077146889304146, 4672943838172125594, 4676067341799427932, -4583193010222409974
            var_2968 = 4672746629766567690;
            var_2976 = 300;
            pri = EvCameraMove(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
            var_2984 = 1;
            var_2992 = 0;
            var_3000 = 4641240890982006784;
            var_3008 = 0;
            var_3016 = 0;
            OP_PUSH4_C 4676041533512744960, 4672759271401508045, 4611686018427387904, -34089364971008208
            var_3024 = 72;
            pri = fun_0718(var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
            var_3032 = -1499539697698718860;
            var_3040 = 8;
            pri = fun_1850(var_3032)
            var_3048 = 1;
            var_3056 = 1;
            var_3064 = -1;
            var_3072 = -1;
            var_3080 = 0;
            var_3088 = 1;
            var_3096 = -1499539697698718860;
            var_3104 = 56;
            pri = fun_4540(var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048)
            var_3112 = 0;
            var_3120 = 3;
            var_3128 = 0;
            var_3136 = 100;
            var_3144 = -1;
            OP_PUSH2_C -4003879972890546812, -1499539697698718860
            var_3152 = 56;
            pri = fun_23F0(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
            var_3160 = 1;
            var_3168 = 8;
            pri = fun_2538(var_3160)
            var_3176 = 0;
            pri = fun_25F8()
            var_3184 = 1;
            var_3192 = 3;
            var_3200 = 0;
            var_3208 = 1;
            var_3216 = -1499539697698718860;
            var_3224 = 40;
            pri = fun_6878(var_3216, var_3208, var_3200, var_3192, var_3184)
            var_3232 = -1499539697698718860;
            var_3240 = 8;
            pri = fun_0AD0(var_3232)
            var_3248 = 1;
            var_3256 = 0;
            var_3264 = 4641240890982006784;
            var_3272 = 0;
            var_3280 = 0;
            OP_PUSH4_C 4675985238517402829, 4672945391232299827, 4607182418800017408, -3059696659601986933
            var_3288 = 72;
            pri = fun_0718(var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216)
            var_3296 = 5;
            var_3304 = 8;
            pri = fun_0090(var_3296)
            var_3312 = 1;
            var_3320 = 0;
            var_3328 = 4641240890982006784;
            var_3336 = 0;
            var_3344 = 0;
            OP_PUSH4_C 4675971906938916045, 4672945391232299827, 4607182418800017408, -1499539697698718860
            var_3352 = 72;
            pri = fun_0718(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288, var_3280)
            var_3360 = 35;
            var_3368 = 8;
            pri = fun_0090(var_3360)
            var_3376 = 1;
            var_3384 = 0;
            var_3392 = 31448;
            var_3400 = 8;
            var_3408 = 32;
            pri = fun_0310(var_3400, var_3392, var_3384, var_3376)
            var_3416 = 0;
            pri = fun_0380()
            var_3424 = 0;
            var_3432 = 6241921994871454197;
            var_3440 = 16;
            pri = fun_06A0(var_3432, var_3424)
            var_3448 = 32328;
            pri = SoundPostEvent(var_3448)
            var_3456 = 32488;
            pri = SoundPostEvent(var_3456)
            var_3464 = 15;
            var_3472 = 8;
            pri = fun_0090(var_3464)
            var_3480 = 32704;
            pri = SoundPostEvent(var_3480)
            var_3488 = 3;
            var_3496 = 1;
            pri = EvCameraEnd(var_3496, var_3488)
            var_3504 = 6241921994871454197;
            var_3512 = 8;
            pri = fun_08F8(var_3504)
            var_3520 = -34089364971008208;
            var_3528 = 8;
            pri = fun_08F8(var_3520)
            var_3536 = -3059696659601986933;
            var_3544 = 8;
            pri = fun_08F8(var_3536)
            var_3552 = -1499539697698718860;
            var_3560 = 8;
            pri = fun_08F8(var_3552)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_BB08_case_0x0
            var_8 = -3059696659601986933;
            var_16 = 8;
            pri = fun_0AD0(var_8)
            var_24 = 1;
            var_32 = -1;
            var_40 = -1;
            var_48 = 3;
            var_56 = 0;
            var_64 = 1;
            var_72 = 6241921994871454197;
            var_80 = 56;
            pri = fun_2960(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 0;
            var_96 = 3;
            var_104 = 0;
            var_112 = 100;
            var_120 = -1;
            OP_PUSH2_C -2826681959478844032, 6241921994871454197
            var_128 = 56;
            pri = fun_23F0(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
            var_136 = 6241921994871454197;
            var_144 = 8;
            pri = fun_0AD0(var_136)
            var_152 = 1;
            var_160 = 8;
            pri = fun_2538(var_152)
            var_168 = 0;
            pri = fun_25F8()
            OP_JUMP switch_BB08_case_default
        }
        case 0x1:
        {
// switch_BB08_case_0x1
            var_8 = -3059696659601986933;
            var_16 = 8;
            pri = fun_0AD0(var_8)
            var_24 = 5;
            var_32 = -3059696659601986933;
            var_40 = 16;
            pri = fun_16F8(var_32, var_24)
            var_48 = 1;
            var_56 = -1;
            var_64 = -1;
            var_72 = 3;
            var_80 = 0;
            var_88 = 0;
            var_96 = -3059696659601986933;
            var_104 = 56;
            pri = fun_2960(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_112 = 0;
            var_120 = 3;
            var_128 = 0;
            var_136 = 100;
            var_144 = -1;
            OP_PUSH2_C 8179638240684673213, -3059696659601986933
            var_152 = 56;
            pri = fun_23F0(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = -3059696659601986933;
            var_168 = 8;
            pri = fun_0AD0(var_160)
            var_176 = 1;
            var_184 = 8;
            pri = fun_2538(var_176)
            var_192 = 0;
            pri = fun_25F8()
            var_200 = -3059696659601986933;
            var_208 = 8;
            pri = fun_1738(var_200)
            OP_JUMP switch_BB08_case_default
        }
    }
}
// fun_D928
fun_D928() {
    pri = 0;
    return pri;
}
// fun_D940
fun_D940() {
    var_8 = -34089364971008208;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = -1499539697698718860;
    var_32 = 8;
    pri = fun_05B8(var_24)
    var_40 = -3059696659601986933;
    var_48 = 8;
    pri = fun_05B8(var_40)
    var_56 = 6241921994871454197;
    var_64 = 8;
    pri = fun_05B8(var_56)
    var_72 = 3100;
    var_80 = 8;
    pri = fun_96C8(var_72)
    var_88 = 1;
    var_96 = -5941009907650657751;
    pri = WorkSet(var_96, var_88)
    var_104 = 1;
    var_112 = -5942001667139114848;
    pri = WorkSet(var_112, var_104)
    var_120 = 1;
    var_128 = -5939167126162154565;
    pri = WorkSet(var_128, var_120)
    var_136 = 1;
    var_144 = -5940158885650611662;
    pri = WorkSet(var_144, var_136)
    var_152 = 2556148519277313732;
    pri = FlagSet(var_152)
    var_160 = 1656060553018210897;
    pri = FlagSet(var_160)
    var_168 = -4341115018897366444;
    pri = FlagReset(var_168)
    var_176 = -5483880531844336598;
    pri = FlagReset(var_176)
    var_184 = -7268306149131292845;
    pri = FlagReset(var_184)
    var_192 = -7378220578778123489;
    pri = FlagSet(var_192)
    var_200 = -7378219479266495278;
    pri = FlagReset(var_200)
    var_208 = -4318590674611970841;
    pri = VanishFlagSet(var_208)
    var_216 = 2783038146703910472;
    pri = VanishFlagSet(var_216)
    var_224 = -4661849163373684695;
    pri = VanishFlagSet(var_224)
    var_232 = -4775404322951928595;
    pri = VanishFlagSet(var_232)
    var_240 = -8764591052235238938;
    pri = VanishFlagSet(var_240)
    var_248 = 7154490619122646225;
    pri = VanishFlagSet(var_248)
    var_256 = 1483708011585131345;
    pri = VanishFlagSet(var_256)
    var_264 = -122636264001050026;
    pri = VanishFlagSet(var_264)
    var_272 = 2375970181849788458;
    pri = VanishFlagSet(var_272)
    var_280 = -122628567419652549;
    pri = VanishFlagSet(var_280)
    var_288 = -1748623951613131052;
    pri = VanishFlagSet(var_288)
    var_296 = 7356533311563781232;
    pri = VanishFlagSet(var_296)
    var_304 = -6555521602960546522;
    pri = FlagSet(var_304)
    var_312 = -6555522702472174733;
    pri = FlagSet(var_312)
    var_320 = -6555523801983802944;
    pri = FlagSet(var_320)
    var_328 = -968531386565696754;
    pri = FlagSet(var_328)
    pri = 0;
    return pri;
}
// fun_DE70
fun_DE70() {
    var_8 = 20;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 31496;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02B0(var_32, var_24)
    var_48 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_DEE8
fun_DEE8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_98D0()
    var_16 = 0;
    pri = fun_9928()
    var_24 = 0;
    pri = fun_99E0()
    var_32 = 0;
    pri = fun_9A10()
    var_40 = 0;
    pri = fun_D928()
    var_48 = 0;
    pri = fun_D940()
    var_56 = 0;
    pri = fun_DE70()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_DFD8
fun_DFD8() {
    var_8 = 0;
    pri = fun_9928()
    var_16 = 0;
    pri = fun_D940()
    pri = 0;
    return pri;
}
// fun_E020
fun_E020() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4003879972890546812;
    var_88 = 80;
    pri = fun_8FB8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_E0A8
fun_E0A8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8179634942149788580;
    var_88 = 80;
    pri = fun_8FB8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
