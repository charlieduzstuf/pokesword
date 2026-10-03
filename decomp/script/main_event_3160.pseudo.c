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
    pri = fun_1978(var_8)
    OP_JZER lab_0900
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_19A8(var_24)
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
    pri = fun_1978(var_8)
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
    pri = fun_1978(var_8)
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
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15D8
fun_15D8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1520(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1598(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1678
fun_1678() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1560(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15D8(var_24)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1978(var_8)
    OP_JZER lab_1770
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1770
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_17D8
fun_17D8() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_16D0(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1978
fun_1978() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_19A8
fun_19A8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_19D8
fun_19D8() {
    OP_JUMP lab_19F0
// lab_19F0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1A80
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1A70
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1A80
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B10
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1B00
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    pri = 0;
    return pri;
// lab_1B10
    pri = 0;
    return pri;
// lab_1B00
    OP_JUMP lab_1B20
// lab_1B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19F0
    pri = 0;
    return pri;
// lab_1A70
    OP_JUMP lab_1B20
}
// fun_1B60
fun_1B60() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A60(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_19D8(var_40)
    pri = 0;
    return pri;
}
// fun_1BE8
fun_1BE8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1C20
fun_1C20() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1C48
fun_1C48() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1C78
fun_1C78() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1CB0
fun_1CB0() {
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
// switch_22C8
        case default:
        {
// switch_22C8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2310
// lab_2310
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
            OP_JNZ lab_23B8
            var_88 = 0;
            pri = fun_2628()
// lab_23B8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_22C8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1EB0
                case default:
                {
// switch_1EB0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F28
// lab_1F28
                    OP_JUMP lab_2310
                }
                case 0x0:
                {
// switch_1EB0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1F28
                }
                case 0x1:
                {
// switch_1EB0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1F28
                }
                case 0x2:
                {
// switch_1EB0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1F28
                }
                case 0x3:
                {
// switch_1EB0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F28
                }
                case 0x4:
                {
// switch_1EB0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1F28
                }
                case 0x5:
                {
// switch_1EB0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1F28
                }
            }
        }
        case 0x65:
        {
// switch_22C8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2068
                case default:
                {
// switch_2068_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20E0
// lab_20E0
                    OP_JUMP lab_2310
                }
                case 0x0:
                {
// switch_2068_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_20E0
                }
                case 0x1:
                {
// switch_2068_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_20E0
                }
                case 0x2:
                {
// switch_2068_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_20E0
                }
                case 0x3:
                {
// switch_2068_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20E0
                }
                case 0x4:
                {
// switch_2068_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_20E0
                }
                case 0x5:
                {
// switch_2068_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_20E0
                }
            }
        }
        case 0x66:
        {
// switch_22C8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2220
                case default:
                {
// switch_2220_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2298
// lab_2298
                    OP_JUMP lab_2310
                }
                case 0x0:
                {
// switch_2220_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2298
                }
                case 0x1:
                {
// switch_2220_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2298
                }
                case 0x2:
                {
// switch_2220_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2298
                }
                case 0x3:
                {
// switch_2220_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2298
                }
                case 0x4:
                {
// switch_2220_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2298
                }
                case 0x5:
                {
// switch_2220_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2298
                }
            }
        }
    }
}
// fun_23D0
fun_23D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1CB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2438
fun_2438() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A28(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_24E0
    pri = 1;
    return pri;
// lab_24E0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2528
fun_2528() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2578
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2438(var_8)
    arg_2 = pri;
// lab_2578
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1CB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25D8
fun_25D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_23D0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2628
fun_2628() {
    OP_JUMP lab_2640
// lab_2640
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2680
    pri = 0;
    return pri;
// lab_2680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2640
    pri = 0;
    return pri;
}
// fun_26C0
fun_26C0() {
    var_8 = 0;
    pri = fun_2628()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2770
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2770
    pri = 0;
    return pri;
}
// fun_2780
fun_2780() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_27B0
fun_27B0() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2810(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_28B0(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2810
fun_2810() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2860
fun_2860() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28B0
fun_28B0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2900
fun_2900() {
    OP_JUMP lab_2918
// lab_2918
    pri = EvCameraMoveWait_()
    OP_JZER lab_2950
    pri = 0;
    return pri;
// lab_2950
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2918
    pri = 0;
    return pri;
}
// fun_2990
fun_2990() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2AF8()
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = -1;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = arg_5;
    var_120 = arg_4;
    pri = StartBlur_(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_2A60
fun_2A60() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2AF8()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2AF8
fun_2AF8() {
    OP_JUMP lab_2B10
// lab_2B10
    pri = IsEasingRunningBlur_()
    OP_JZER lab_2B68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B78
// lab_2B68
    pri = 0;
    return pri;
// lab_2B78
    OP_JUMP lab_2B10
    pri = 0;
    return pri;
}
// fun_2B98
fun_2B98() {
    pri = arg_6;
    OP_JNZ lab_2BD0
    var_8 = 0;
    pri = fun_0F38()
// lab_2BD0
    pri = arg_1;
    switch (pri) {
// switch_4138
        case default:
        {
// switch_4138_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4488
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4488
            pri = 1;
            OP_JUMP lab_4490
// lab_4488
            pri = 0;
// lab_4490
            OP_JZER lab_45E8
            var_16 = 11080;
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4648
// lab_45E8
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_4648
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_46A8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4708
// lab_46A8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4708
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4708
            pri = arg_2;
            OP_JZER lab_4748
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4748
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4138_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x1:
        {
// switch_4138_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x2:
        {
// switch_4138_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x3:
        {
// switch_4138_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x4:
        {
// switch_4138_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x5:
        {
// switch_4138_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x6:
        {
// switch_4138_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x7:
        {
// switch_4138_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x8:
        {
// switch_4138_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x9:
        {
// switch_4138_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xa:
        {
// switch_4138_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xb:
        {
// switch_4138_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xc:
        {
// switch_4138_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xd:
        {
// switch_4138_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xe:
        {
// switch_4138_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xf:
        {
// switch_4138_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x10:
        {
// switch_4138_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x11:
        {
// switch_4138_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x12:
        {
// switch_4138_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x13:
        {
// switch_4138_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x14:
        {
// switch_4138_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x15:
        {
// switch_4138_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x16:
        {
// switch_4138_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x17:
        {
// switch_4138_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x18:
        {
// switch_4138_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x19:
        {
// switch_4138_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x1a:
        {
// switch_4138_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4138_case_default
        }
        case 0x1b:
        {
// switch_4138_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4138_case_default
        }
        case 0x1c:
        {
// switch_4138_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09B0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0C98(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4138_case_default
        }
        case 0x1d:
        {
// switch_4138_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x1e:
        {
// switch_4138_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x1f:
        {
// switch_4138_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x20:
        {
// switch_4138_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x21:
        {
// switch_4138_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x22:
        {
// switch_4138_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x23:
        {
// switch_4138_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x24:
        {
// switch_4138_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x25:
        {
// switch_4138_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x26:
        {
// switch_4138_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x27:
        {
// switch_4138_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x28:
        {
// switch_4138_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x29:
        {
// switch_4138_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
    }
}
// fun_4778
fun_4778() {
    pri = arg_5;
    OP_JNZ lab_47B0
    var_8 = 0;
    pri = fun_0F38()
// lab_47B0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4800
    OP_CONST_S -8, -1
// lab_4800
    pri = arg_1;
    switch (pri) {
// switch_62B8
        case default:
        {
// switch_62B8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6760
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A28(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6760
            pri = 1;
            OP_JUMP lab_6768
// lab_6760
            pri = 0;
// lab_6768
            OP_JZER lab_67B8
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6A10
// lab_67B8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6820
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6820
            pri = 1;
            OP_JUMP lab_6828
// lab_6820
            pri = 0;
// lab_6828
            OP_JZER lab_69B0
            var_16 = 31216;
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6A10
// lab_69B0
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_6A10
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6A80
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6A80
            var_8 = 0;
            pri = fun_0F78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_62B8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1:
        {
// switch_62B8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2:
        {
// switch_62B8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3:
        {
// switch_62B8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x4:
        {
// switch_62B8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x5:
        {
// switch_62B8_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_62B8_case_default
        }
        case 0x6:
        {
// switch_62B8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x7:
        {
// switch_62B8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x8:
        {
// switch_62B8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x9:
        {
// switch_62B8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xa:
        {
// switch_62B8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xb:
        {
// switch_62B8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xc:
        {
// switch_62B8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xd:
        {
// switch_62B8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0xe:
        {
// switch_62B8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0xf:
        {
// switch_62B8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x10:
        {
// switch_62B8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x11:
        {
// switch_62B8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x12:
        {
// switch_62B8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x13:
        {
// switch_62B8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x14:
        {
// switch_62B8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x15:
        {
// switch_62B8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x16:
        {
// switch_62B8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x17:
        {
// switch_62B8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x18:
        {
// switch_62B8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x19:
        {
// switch_62B8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1a:
        {
// switch_62B8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1b:
        {
// switch_62B8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1c:
        {
// switch_62B8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1d:
        {
// switch_62B8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1e:
        {
// switch_62B8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1f:
        {
// switch_62B8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x20:
        {
// switch_62B8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x21:
        {
// switch_62B8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x22:
        {
// switch_62B8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x23:
        {
// switch_62B8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x24:
        {
// switch_62B8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x25:
        {
// switch_62B8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x26:
        {
// switch_62B8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x27:
        {
// switch_62B8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x28:
        {
// switch_62B8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x29:
        {
// switch_62B8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2a:
        {
// switch_62B8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2b:
        {
// switch_62B8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2c:
        {
// switch_62B8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2d:
        {
// switch_62B8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2e:
        {
// switch_62B8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2f:
        {
// switch_62B8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x30:
        {
// switch_62B8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x31:
        {
// switch_62B8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x32:
        {
// switch_62B8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x33:
        {
// switch_62B8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x34:
        {
// switch_62B8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x35:
        {
// switch_62B8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x36:
        {
// switch_62B8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x37:
        {
// switch_62B8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x38:
        {
// switch_62B8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0C98(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x39:
        {
// switch_62B8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3a:
        {
// switch_62B8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3b:
        {
// switch_62B8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3c:
        {
// switch_62B8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3d:
        {
// switch_62B8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3e:
        {
// switch_62B8_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
    }
}
// fun_6AB0
fun_6AB0() {
    pri = arg_4;
    OP_JNZ lab_6AE8
    var_8 = 0;
    pri = fun_0F38()
// lab_6AE8
    pri = arg_1;
    switch (pri) {
// switch_7EC0
        case default:
        {
// switch_7EC0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1978(var_264)
            OP_JZER lab_8488
            pri = arg_3;
            switch (pri) {
// switch_8430
                case default:
                {
// switch_8430_case_default
                    OP_JUMP lab_8740
// lab_8740
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_87B0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_87B0
                    var_8 = 0;
                    pri = fun_0F78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8430_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8430_case_default
                }
                case 0x2:
                {
// switch_8430_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8430_case_default
                }
                case 0x3:
                {
// switch_8430_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8430_case_default
                }
            }
// lab_8488
            pri = arg_1;
            OP_JZER lab_84D8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_84D8
            pri = 0;
            OP_JUMP lab_84E0
// lab_84D8
            pri = 1;
// lab_84E0
            OP_JZER lab_8548
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A28(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8548
            pri = 1;
            OP_JUMP lab_8550
// lab_8548
            pri = 0;
// lab_8550
            OP_JZER lab_85A0
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8740
// lab_85A0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8608
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8740
// lab_8608
            var_16 = 32640;
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7EC0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1:
        {
// switch_7EC0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2:
        {
// switch_7EC0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3:
        {
// switch_7EC0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x4:
        {
// switch_7EC0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x5:
        {
// switch_7EC0_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C60(var_40)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x6:
        {
// switch_7EC0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x7:
        {
// switch_7EC0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x8:
        {
// switch_7EC0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x9:
        {
// switch_7EC0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xa:
        {
// switch_7EC0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xb:
        {
// switch_7EC0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xc:
        {
// switch_7EC0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xd:
        {
// switch_7EC0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xe:
        {
// switch_7EC0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xf:
        {
// switch_7EC0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x10:
        {
// switch_7EC0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x11:
        {
// switch_7EC0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x12:
        {
// switch_7EC0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x13:
        {
// switch_7EC0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x14:
        {
// switch_7EC0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x15:
        {
// switch_7EC0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x16:
        {
// switch_7EC0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x17:
        {
// switch_7EC0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x18:
        {
// switch_7EC0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x19:
        {
// switch_7EC0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1a:
        {
// switch_7EC0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1b:
        {
// switch_7EC0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1c:
        {
// switch_7EC0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1d:
        {
// switch_7EC0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1e:
        {
// switch_7EC0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1f:
        {
// switch_7EC0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x20:
        {
// switch_7EC0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x21:
        {
// switch_7EC0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x22:
        {
// switch_7EC0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x23:
        {
// switch_7EC0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x24:
        {
// switch_7EC0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x25:
        {
// switch_7EC0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x26:
        {
// switch_7EC0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x27:
        {
// switch_7EC0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x28:
        {
// switch_7EC0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x29:
        {
// switch_7EC0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2a:
        {
// switch_7EC0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2b:
        {
// switch_7EC0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2c:
        {
// switch_7EC0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2d:
        {
// switch_7EC0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2e:
        {
// switch_7EC0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2f:
        {
// switch_7EC0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x30:
        {
// switch_7EC0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x31:
        {
// switch_7EC0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x32:
        {
// switch_7EC0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x33:
        {
// switch_7EC0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x34:
        {
// switch_7EC0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x35:
        {
// switch_7EC0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x36:
        {
// switch_7EC0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x37:
        {
// switch_7EC0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x38:
        {
// switch_7EC0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x39:
        {
// switch_7EC0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3a:
        {
// switch_7EC0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3b:
        {
// switch_7EC0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3c:
        {
// switch_7EC0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3d:
        {
// switch_7EC0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3e:
        {
// switch_7EC0_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_09E8(var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
    }
}
// fun_87E0
fun_87E0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_88E0
        case default:
        {
// switch_88E0_case_default
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
// switch_88E0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_88E0_case_default
        }
        case 0x1:
        {
// switch_88E0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_88E0_case_default
        }
        case 0x2:
        {
// switch_88E0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_88E0_case_default
        }
        case 0x3:
        {
// switch_88E0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_88E0_case_default
        }
    }
}
// fun_89A0
fun_89A0() {
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
    pri = fun_2528(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2628()
    pri = 0;
    return pri;
}
// fun_8A38
fun_8A38() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_87E0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_89A0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8AE0
fun_8AE0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8B30
// lab_8B30
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32808;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8BA8
    OP_JUMP lab_8BD8
// lab_8BA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8B30
// lab_8BD8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8C60
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6AB0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1C48(var_56)
// lab_8C60
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8CC8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14E0(var_24, var_16)
// lab_8CC8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8D88
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
// lab_8D88
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8DC8
    pri = 0;
    return pri;
// lab_8DC8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F10
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 32928;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09B0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8ED8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_8F10
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
// lab_8ED8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
}
// fun_8F98
fun_8F98() {
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
    pri = fun_8A38(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_26C0(var_112)
    var_128 = 0;
    pri = fun_2780()
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
    pri = fun_8AE0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9110
fun_9110() {
    pri = 33064;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9198
// lab_9198
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9318
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9308
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9258
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9258
    pri = 0;
    OP_JUMP lab_9260
// lab_9318
    pri = 0;
    return pri;
// lab_9308
    OP_JUMP lab_9190
// lab_9190
    OP_INC_P_S -936
// lab_9258
    pri = 1;
// lab_9260
    OP_JZER lab_92D8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_92D0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_92D8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_92D0
}
// fun_9338
fun_9338() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9380
    pri = arg_0;
    return pri;
// lab_9380
    pri = arg_1;
    return pri;
}
// fun_9390
fun_9390() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9428
    var_8 = 1;
    var_16 = 0;
    var_24 = 33984;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1C20()
// lab_9428
    pri = arg_4;
    OP_JZER lab_9460
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C78(var_8)
// lab_9460
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_94B8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_94B8
    pri = 0;
    OP_JUMP lab_94C0
// lab_94B8
    pri = 1;
// lab_94C0
    OP_JZER lab_9588
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9588
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_9560
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1B60(var_32, var_24)
    OP_JUMP lab_9588
// lab_9588
    pri = arg_2;
    OP_JZER lab_9660
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_9630
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14E0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0670(var_40)
    OP_JUMP lab_9660
// lab_9660
    pri = arg_3;
    OP_JZER lab_9698
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BE8(var_8)
// lab_9698
    pri = 0;
    return pri;
// lab_9630
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14E0(var_16, var_8)
// lab_9560
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B60(var_16, var_8)
}
// fun_96A8
fun_96A8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9110(var_24)
    pri = 0;
    return pri;
}
// fun_9710
fun_9710() {
    pri = g_mode;
    switch (pri) {
// switch_9848
        case default:
        {
// switch_9848_case_default
            pri = CommandNOP()
            OP_JUMP lab_98C0
// lab_98C0
            pri = 0;
            return pri;
        }
        case 0xc12c2bfd98581a4a:
        {
// switch_9848_case_0xc12c2bfd98581a4a
            var_8 = 0;
            pri = fun_F2E8()
            OP_JUMP lab_98C0
        }
        case 0xce3ea495d74d6ab3:
        {
// switch_9848_case_0xce3ea495d74d6ab3
            var_8 = 0;
            pri = fun_F420()
            OP_JUMP lab_98C0
        }
        case 0x0:
        {
// switch_9848_case_0x0
            var_8 = 0;
            pri = fun_98D0()
            OP_JUMP lab_98C0
        }
        case 0xd7fc617f7a99ad0:
        {
// switch_9848_case_0xd7fc617f7a99ad0
            var_8 = 0;
            pri = fun_F2A0()
            OP_JUMP lab_98C0
        }
        case 0x2cad401b8326eac4:
        {
// switch_9848_case_0x2cad401b8326eac4
            var_8 = 0;
            pri = fun_F1B0()
            OP_JUMP lab_98C0
        }
        case 0x48b4b68824e977b7:
        {
// switch_9848_case_0x48b4b68824e977b7
            var_8 = 0;
            pri = fun_F4A8()
            OP_JUMP lab_98C0
        }
    }
}
// fun_98D0
fun_98D0() {
    pri = 0;
    return pri;
}
// fun_98E8
fun_98E8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_9390(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9940
fun_9940() {
    var_8 = 1514373463937579588;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = 3012735517485661393;
    var_32 = 8;
    pri = fun_0438(var_24)
    var_40 = 6718143717892348318;
    var_48 = 8;
    pri = fun_0438(var_40)
    pri = 0;
    return pri;
}
// fun_99D0
fun_99D0() {
    var_8 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_9A00
fun_9A00() {
    pri = EvCameraStart()
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    OP_ZERO_P_S -56
    OP_ZERO_P_S -64
    OP_ZERO_P_S -72
    OP_ZERO_P_S -80
    OP_ZERO_P_S -88
    OP_ZERO_P_S -96
    OP_ZERO_P_S -104
    OP_ZERO_P_S -112
    OP_ZERO_P_S -120
    OP_ZERO_P_S -128
    OP_ZERO_P_S -136
    OP_ZERO_P_S -144
    OP_ZERO_P_S -152
    OP_ZERO_P_S -160
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9D80
    OP_CONST_S -8, 7816440442768909182
    OP_CONST_S -16, 6847521706384717156
    OP_CONST_S -24, 6847525004919601789
    OP_CONST_S -32, 6847523905407973578
    OP_CONST_S -40, 6847518407849832523
    OP_CONST_S -48, 6847517308338204312
    OP_CONST_S -56, 6847520606873088945
    OP_CONST_S -64, 6847519507361460734
    OP_CONST_S -72, 6847514009803319679
    OP_CONST_S -80, 6847512910291691468
    OP_CONST_S -88, 6846671783896299278
    OP_CONST_S -96, 6846672883407927489
    OP_CONST_S -104, 6846669584873042856
    OP_CONST_S -112, 6846670684384671067
    OP_CONST_S -120, 6846676181942812122
    OP_CONST_S -128, 6846677281454440333
    OP_CONST_S -136, 6846673982919555700
    OP_CONST_S -144, 6846675082431183911
    OP_CONST_S -152, 6846664087314901801
    OP_CONST_S -160, 6845680024407842181
    OP_JUMP lab_9F60
// lab_9D80
    OP_CONST_S -8, 387792121742723038
    OP_CONST_S -16, 897430248506961006
    OP_CONST_S -24, 897429148995332795
    OP_CONST_S -32, 897428049483704584
    OP_CONST_S -40, 897435746065102061
    OP_CONST_S -48, 897434646553473850
    OP_CONST_S -56, 897433547041845639
    OP_CONST_S -64, 897432447530217428
    OP_CONST_S -72, 897422551925563529
    OP_CONST_S -80, 897421452413935318
    OP_CONST_S -88, 896439588530132120
    OP_CONST_S -96, 896440688041760331
    OP_CONST_S -104, 896441787553388542
    OP_CONST_S -112, 896442887065016753
    OP_CONST_S -120, 896443986576644964
    OP_CONST_S -128, 896445086088273175
    OP_CONST_S -136, 896446185599901386
    OP_CONST_S -144, 896447285111529597
    OP_CONST_S -152, 896431891948734643
    OP_CONST_S -160, 899379682623400659
// lab_9F60
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4588668402206874010, 4666318772090647347, 4662665644707361587, 8802641224559852288
    var_24 = 48;
    pri = fun_05E0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4587338432941916160, 4666379245230175027, 4662735793549213696, 1514373463937579588
    var_48 = 48;
    pri = fun_05E0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4666251097149957734, 4662740851302701466, 3012735517485661393
    var_72 = 48;
    pri = fun_05E0(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C -4587338432941916160, 4666180508503454515, 4662631779749226086, 6718143717892348318
    var_96 = 48;
    pri = fun_05E0(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH3_C 4643457506423603200, 4666314154141810688, 4661799559398162432
    var_120 = var_8;
    var_128 = 48;
    pri = fun_05E0(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    OP_PUSH4_C 4630826316843712512, 4666233889792983040, 4661697304816779264, 1139048380943932808
    var_152 = 48;
    pri = fun_05E0(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 1;
    var_168 = 1;
    OP_PUSH4_C 4638777984935788544, 4666377925816221696, 4661728091142356992, -164538243036851154
    var_176 = 48;
    pri = fun_05E0(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 1;
    var_192 = 1;
    OP_PUSH4_C 4634837335261839360, 4666277870258094080, 4661637931188879360, -7785343324082770324
    var_200 = 48;
    pri = fun_05E0(var_192, var_184, var_176, var_168, var_160, var_152)
    var_208 = 1;
    var_216 = 1;
    OP_PUSH4_C 4636737291354636288, 4666331746327855104, 4661664319467945984, -5321351475360329479
    var_224 = 48;
    pri = fun_05E0(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 1;
    var_240 = 8;
    pri = fun_0090(var_232)
    var_248 = 0;
    var_256 = 4628799697011395789;
    var_264 = 0;
    OP_PUSH5_C 4666333571517157212, -4580252300403225395, 4662704523438519747, 4666475249087954289, -4585538400465851515
    var_272 = 4663280491609613926;
    var_280 = 1;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 0;
    pri = fun_2900()
    var_296 = 1;
    var_304 = 0;
    var_312 = 20;
    pri = float(var_312)
    var_320 = pri;
    var_328 = var_8;
    OP_PUSH4_C 4666314374044136243, 4662068829795804774, 4611686018427387904, 8802641224559852288
    var_336 = 64;
    pri = fun_0720(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_344 = 1;
    var_352 = 0;
    var_360 = 20;
    pri = float(var_360)
    var_368 = pri;
    var_376 = var_8;
    OP_PUSH4_C 4666180508503454515, 4661930291330704998, 4611686018427387904, 6718143717892348318
    var_384 = 64;
    pri = fun_0720(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_392 = 1;
    var_400 = 0;
    var_408 = 20;
    pri = float(var_408)
    var_416 = pri;
    var_424 = var_8;
    OP_PUSH4_C 4666379245230175027, 4662160748967886848, 4611686018427387904, 1514373463937579588
    var_432 = 64;
    pri = fun_0720(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_440 = 1;
    var_448 = 0;
    var_456 = 4641240890982006784;
    var_464 = var_8;
    OP_PUSH4_C 4666251097149957734, 4662110831139985818, 4607182418800017408, 3012735517485661393
    var_472 = 64;
    pri = fun_0720(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_480 = 34032;
    var_488 = 8;
    var_496 = 16;
    pri = fun_02B0(var_488, var_480)
    var_504 = 0;
    pri = fun_0380()
    var_512 = 0;
    var_520 = 4628799697011395789;
    var_528 = 3;
    OP_PUSH5_C 4666332763376110797, -4578882748719667610, 4661983012913256858, 4666564837295385477, -4585710803889086792
    var_536 = 4662387369309487759;
    var_544 = 75;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 1;
    var_560 = 0;
    var_568 = 0;
    var_576 = 4607182418800017408;
    var_584 = var_8;
    var_592 = 0;
    var_600 = 48;
    pri = fun_17D8(var_592, var_584, var_576, var_568, var_560, var_552)
    var_608 = 0;
    pri = fun_27B0()
    var_616 = 25;
    var_624 = 8;
    pri = fun_0090(var_616)
    var_632 = 34080;
    pri = SoundPostEvent(var_632)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    var_672 = 8802641224559852288;
    var_680 = var_8;
    var_688 = 48;
    pri = fun_0830(var_680, var_672, var_664, var_656, var_648, var_640)
    var_696 = 0;
    var_704 = 0;
    var_712 = 0;
    var_720 = 90;
    pri = float(var_720)
    var_728 = pri;
    var_736 = 1139048380943932808;
    var_744 = 40;
    pri = fun_07E0(var_736, var_728, var_720, var_712, var_704)
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    var_776 = 90;
    pri = float(var_776)
    var_784 = pri;
    var_792 = -7785343324082770324;
    var_800 = 40;
    pri = fun_07E0(var_792, var_784, var_776, var_768, var_760)
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 90;
    pri = float(var_832)
    var_840 = pri;
    var_848 = -164538243036851154;
    var_856 = 40;
    pri = fun_07E0(var_848, var_840, var_832, var_824, var_816)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 90;
    pri = float(var_888)
    var_896 = pri;
    var_904 = -5321351475360329479;
    var_912 = 40;
    pri = fun_07E0(var_904, var_896, var_888, var_880, var_872)
    var_920 = 0;
    var_928 = 3;
    var_936 = 0;
    var_944 = 100;
    var_952 = -1;
    var_960 = var_16;
    var_968 = var_8;
    var_976 = 56;
    pri = fun_2528(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = var_8;
    var_992 = 8;
    pri = fun_0888(var_984)
    var_1000 = 8802641224559852288;
    var_1008 = 8;
    pri = fun_0888(var_1000)
    var_1016 = 1514373463937579588;
    var_1024 = 8;
    pri = fun_0888(var_1016)
    var_1032 = 3012735517485661393;
    var_1040 = 8;
    pri = fun_0888(var_1032)
    var_1048 = 6718143717892348318;
    var_1056 = 8;
    pri = fun_0888(var_1048)
    var_1064 = 1139048380943932808;
    var_1072 = 8;
    pri = fun_0888(var_1064)
    var_1080 = -7785343324082770324;
    var_1088 = 8;
    pri = fun_0888(var_1080)
    var_1096 = -164538243036851154;
    var_1104 = 8;
    pri = fun_0888(var_1096)
    var_1112 = -5321351475360329479;
    var_1120 = 8;
    pri = fun_0888(var_1112)
    var_1128 = 1;
    var_1136 = 8;
    pri = fun_26C0(var_1128)
    var_1144 = 0;
    pri = fun_2780()
    var_1152 = 5;
    var_1160 = 5;
    var_1168 = var_8;
    var_1176 = 24;
    pri = fun_1610(var_1168, var_1160, var_1152)
    var_1184 = 0;
    var_1192 = 4628799697011395789;
    var_1200 = 0;
    OP_PUSH5_C 4666204093027870310, -4579890956901873091, 4661380931341002998, 4666337689188203233, -4579845393140018053
    var_1208 = 4661983991478605578;
    var_1216 = 1;
    pri = EvCameraMove(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 0;
    pri = fun_2900()
    var_1232 = 0;
    var_1240 = 4628799697011395789;
    var_1248 = 3;
    OP_PUSH5_C 4666212801159962296, -4579890956901873091, 4661373223764492288, 4666346292866690580, -4579842402468390502
    var_1256 = 4661976382858141368;
    var_1264 = 75;
    pri = EvCameraMove(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1272 = 1;
    var_1280 = 1;
    var_1288 = -1;
    var_1296 = -1;
    var_1304 = 0;
    var_1312 = 4;
    var_1320 = var_8;
    var_1328 = 56;
    pri = fun_4778(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1336 = 0;
    var_1344 = 3;
    var_1352 = 0;
    var_1360 = 100;
    var_1368 = -1;
    var_1376 = var_24;
    var_1384 = var_8;
    var_1392 = 56;
    pri = fun_2528(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1400 = 1;
    var_1408 = 8;
    pri = fun_26C0(var_1400)
    var_1416 = 0;
    pri = fun_2780()
    var_1424 = var_8;
    var_1432 = 8;
    pri = fun_1678(var_1424)
    var_1440 = 0;
    var_1448 = 4625928652248947098;
    var_1456 = 0;
    OP_PUSH5_C 4666288925847511368, -4579566556991214060, 4661642043362367242, 4666337337344482345, -4579525567197730570
    var_1464 = 4662294559532987187;
    var_1472 = 1;
    pri = EvCameraMove(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
    var_1480 = 0;
    pri = fun_2900()
    var_1488 = 0;
    var_1496 = 4625928652248947098;
    var_1504 = 3;
    OP_PUSH5_C 4666270531017978675, -4579563918163307397, 4661690718742128886, 4666367150602269491, -4579521169151219466
    var_1512 = 4662321453587402588;
    var_1520 = 75;
    pri = EvCameraMove(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1528 = 1;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 4;
    var_1560 = var_8;
    var_1568 = 40;
    pri = fun_6AB0(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = 0;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 100;
    var_1608 = -1;
    var_1616 = var_32;
    var_1624 = var_8;
    var_1632 = 56;
    pri = fun_2528(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = var_8;
    var_1648 = 8;
    pri = fun_0A60(var_1640)
    var_1656 = 0;
    pri = fun_2900()
    var_1664 = 1;
    var_1672 = 8;
    pri = fun_26C0(var_1664)
    var_1680 = 0;
    pri = fun_2780()
    var_1688 = 8;
    var_1696 = var_8;
    var_1704 = 16;
    pri = fun_1520(var_1696, var_1688)
    var_1712 = 0;
    var_1720 = 4627392322127842509;
    var_1728 = 0;
    OP_PUSH5_C 4666307078784485949, -4579531548540985672, 4662012182956741755, 4666445859142143836, -4586819111609885000
    var_1736 = 4662571207653651907;
    var_1744 = 1;
    pri = EvCameraMove(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1752 = 0;
    pri = fun_2900()
    var_1760 = 0;
    var_1768 = 0;
    var_1776 = 0;
    var_1784 = 270;
    pri = float(var_1784)
    var_1792 = pri;
    var_1800 = var_8;
    var_1808 = 40;
    pri = fun_07E0(var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1816 = 0;
    var_1824 = 3;
    var_1832 = 0;
    var_1840 = 100;
    var_1848 = -1;
    var_1856 = var_40;
    var_1864 = var_8;
    var_1872 = 56;
    pri = fun_2528(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1880 = var_8;
    var_1888 = 8;
    pri = fun_0888(var_1880)
    var_1896 = 1;
    var_1904 = 8;
    pri = fun_26C0(var_1896)
    var_1912 = 0;
    pri = fun_2780()
    var_1920 = 34240;
    pri = SoundPostEvent(var_1920)
    var_1928 = 0;
    var_1936 = 4626660487188394803;
    var_1944 = 0;
    OP_PUSH5_C 4666234296612285317, -4578940275168032850, 4661413465890068890, 4666290657578325115, -4580673457337128714
    var_1952 = 4662056911089759683;
    var_1960 = 1;
    pri = EvCameraMove(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888)
    var_1968 = 0;
    pri = fun_2900()
    var_1976 = 0;
    var_1984 = 4626660487188394803;
    var_1992 = 3;
    OP_PUSH5_C 4666306715945648783, -4578940275168032850, 4661388111151932375, 4666378024772268196, -4580670290743640719
    var_2000 = 4662025629983949455;
    var_2008 = 150;
    pri = EvCameraMove(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2016 = 5;
    var_2024 = 5;
    var_2032 = 1139048380943932808;
    var_2040 = 24;
    pri = fun_1610(var_2032, var_2024, var_2016)
    var_2048 = 5;
    var_2056 = 5;
    var_2064 = -7785343324082770324;
    var_2072 = 24;
    pri = fun_1610(var_2064, var_2056, var_2048)
    var_2080 = 5;
    var_2088 = 5;
    var_2096 = -164538243036851154;
    var_2104 = 24;
    pri = fun_1610(var_2096, var_2088, var_2080)
    var_2112 = 5;
    var_2120 = 5;
    var_2128 = -5321351475360329479;
    var_2136 = 24;
    pri = fun_1610(var_2128, var_2120, var_2112)
    var_2144 = 1;
    var_2152 = 1;
    var_2160 = -1;
    var_2168 = -1;
    var_2176 = 0;
    var_2184 = 8;
    var_2192 = 1139048380943932808;
    var_2200 = 56;
    pri = fun_4778(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = 1;
    var_2216 = 1;
    var_2224 = -1;
    var_2232 = -1;
    var_2240 = 0;
    var_2248 = 8;
    var_2256 = -7785343324082770324;
    var_2264 = 56;
    pri = fun_4778(var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2272 = 1;
    var_2280 = 1;
    var_2288 = -1;
    var_2296 = -1;
    var_2304 = 0;
    var_2312 = 8;
    var_2320 = -164538243036851154;
    var_2328 = 56;
    pri = fun_4778(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2336 = 1;
    var_2344 = 1;
    var_2352 = -1;
    var_2360 = -1;
    var_2368 = 0;
    var_2376 = 8;
    var_2384 = -5321351475360329479;
    var_2392 = 56;
    pri = fun_4778(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336)
    var_2400 = 3;
    var_2408 = 0;
    var_2416 = 3193644475698085466;
    var_2424 = 24;
    pri = fun_25D8(var_2416, var_2408, var_2400)
    var_2432 = 75;
    var_2440 = 8;
    pri = fun_0090(var_2432)
    var_2448 = 0;
    var_2456 = 0;
    var_2464 = 0;
    var_2472 = 90;
    pri = float(var_2472)
    var_2480 = pri;
    var_2488 = var_8;
    var_2496 = 40;
    pri = fun_07E0(var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2504 = var_8;
    var_2512 = 8;
    pri = fun_0888(var_2504)
    var_2520 = 0;
    pri = fun_2900()
    var_2528 = 1;
    var_2536 = 8;
    pri = fun_26C0(var_2528)
    var_2544 = 0;
    pri = fun_2780()
    var_2552 = 6;
    var_2560 = 6;
    var_2568 = 3012735517485661393;
    var_2576 = 24;
    pri = fun_1610(var_2568, var_2560, var_2552)
    var_2584 = 6;
    var_2592 = 6;
    var_2600 = 1514373463937579588;
    var_2608 = 24;
    pri = fun_1610(var_2600, var_2592, var_2584)
    var_2616 = 7;
    var_2624 = 6718143717892348318;
    var_2632 = 16;
    pri = fun_1520(var_2624, var_2616)
    var_2640 = 0;
    var_2648 = -164538243036851154;
    var_2656 = 16;
    pri = fun_0638(var_2648, var_2640)
    var_2664 = 0;
    var_2672 = 4628658959523040461;
    var_2680 = 0;
    OP_PUSH5_C 4666257672229491835, -4577966723592334868, 4662197791514626621, 4666372356789827011, -4582507970497840415
    var_2688 = 4661616094887951729;
    var_2696 = 1;
    pri = EvCameraMove(var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2704 = 0;
    pri = fun_2900()
    var_2712 = 0;
    var_2720 = 4628658959523040461;
    var_2728 = 3;
    OP_PUSH5_C 4666272526631583089, -4577966723592334868, 4662209490318346158, 4666387057260290376, -4582504803904352420
    var_2736 = 4661627639760043377;
    var_2744 = 150;
    pri = EvCameraMove(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672)
    var_2752 = 1;
    var_2760 = 1;
    var_2768 = -1;
    var_2776 = -1;
    var_2784 = 0;
    var_2792 = 10;
    var_2800 = 3012735517485661393;
    var_2808 = 56;
    pri = fun_4778(var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2816 = 0;
    var_2824 = 3;
    var_2832 = 0;
    var_2840 = 100;
    var_2848 = -1;
    OP_PUSH2_C 4095644893577174742, 3012735517485661393
    var_2856 = 56;
    pri = fun_2528(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2864 = 1;
    var_2872 = 8;
    pri = fun_26C0(var_2864)
    var_2880 = 0;
    pri = fun_2780()
    var_2888 = 1;
    var_2896 = 3;
    var_2904 = 0;
    var_2912 = 10;
    var_2920 = 3012735517485661393;
    var_2928 = 40;
    pri = fun_6AB0(var_2920, var_2912, var_2904, var_2896, var_2888)
    var_2936 = 1;
    var_2944 = 1;
    var_2952 = -1;
    var_2960 = -1;
    var_2968 = 0;
    var_2976 = 2;
    var_2984 = 1514373463937579588;
    var_2992 = 56;
    pri = fun_4778(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936)
    var_3000 = 0;
    var_3008 = 3;
    var_3016 = 0;
    var_3024 = 100;
    var_3032 = -1;
    OP_PUSH2_C 4139859296788171147, 1514373463937579588
    var_3040 = 56;
    pri = fun_2528(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3048 = 3012735517485661393;
    var_3056 = 8;
    pri = fun_0A60(var_3048)
    var_3064 = 1;
    var_3072 = 8;
    pri = fun_26C0(var_3064)
    var_3080 = 0;
    pri = fun_2780()
    var_3088 = var_8;
    var_3096 = 8;
    pri = fun_1560(var_3088)
    var_3104 = 1;
    var_3112 = -164538243036851154;
    var_3120 = 16;
    pri = fun_0638(var_3112, var_3104)
    var_3128 = 0;
    var_3136 = 4628658959523040461;
    var_3144 = 0;
    OP_PUSH5_C 4666235225699610788, -4578966839368959918, 4661759438218864886, 4666434292279819633, -4579841346937227837
    var_3152 = 4662282717792756040;
    var_3160 = 1;
    pri = EvCameraMove(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3168 = 0;
    pri = fun_2900()
    var_3176 = 1;
    var_3184 = 1;
    var_3192 = 30;
    var_3200 = 1514373463937579588;
    var_3208 = var_8;
    var_3216 = 40;
    pri = fun_0FB8(var_3208, var_3200, var_3192, var_3184, var_3176)
    var_3224 = 1;
    var_3232 = 3;
    var_3240 = 0;
    var_3248 = 2;
    var_3256 = 1514373463937579588;
    var_3264 = 40;
    pri = fun_6AB0(var_3256, var_3248, var_3240, var_3232, var_3224)
    var_3272 = 1;
    var_3280 = 1;
    var_3288 = -1;
    var_3296 = -1;
    var_3304 = 0;
    var_3312 = 1;
    var_3320 = var_8;
    var_3328 = 56;
    pri = fun_4778(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3336 = 0;
    var_3344 = 3;
    var_3352 = 0;
    var_3360 = 100;
    var_3368 = -1;
    var_3376 = var_48;
    var_3384 = var_8;
    var_3392 = 56;
    pri = fun_2528(var_3384, var_3376, var_3368, var_3360, var_3352, var_3344, var_3336)
    var_3400 = 1;
    var_3408 = 8;
    pri = fun_26C0(var_3400)
    var_3416 = 0;
    pri = fun_2780()
    var_3424 = 1;
    var_3432 = 3;
    var_3440 = 0;
    var_3448 = 1;
    var_3456 = var_8;
    var_3464 = 40;
    pri = fun_6AB0(var_3456, var_3448, var_3440, var_3432, var_3424)
    var_3472 = 4;
    var_3480 = 4;
    var_3488 = 1514373463937579588;
    var_3496 = 24;
    pri = fun_1610(var_3488, var_3480, var_3472)
    var_3504 = 1;
    var_3512 = -1;
    var_3520 = -1;
    var_3528 = 3;
    var_3536 = 0;
    var_3544 = 1;
    var_3552 = 1514373463937579588;
    var_3560 = 56;
    pri = fun_2B98(var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504)
    var_3568 = 0;
    var_3576 = 3;
    var_3584 = 0;
    var_3592 = 100;
    var_3600 = -1;
    OP_PUSH2_C 4139860396299799358, 1514373463937579588
    var_3608 = 56;
    pri = fun_2528(var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552)
    var_3616 = var_8;
    var_3624 = 8;
    pri = fun_0A60(var_3616)
    var_3632 = 1;
    var_3640 = 8;
    pri = fun_26C0(var_3632)
    var_3648 = 0;
    pri = fun_2780()
    var_3656 = 1;
    var_3664 = 3;
    var_3672 = 0;
    var_3680 = 8;
    var_3688 = 1139048380943932808;
    var_3696 = 40;
    pri = fun_6AB0(var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3704 = 1;
    var_3712 = 3;
    var_3720 = 0;
    var_3728 = 8;
    var_3736 = -7785343324082770324;
    var_3744 = 40;
    pri = fun_6AB0(var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3752 = 1;
    var_3760 = 3;
    var_3768 = 0;
    var_3776 = 8;
    var_3784 = -164538243036851154;
    var_3792 = 40;
    pri = fun_6AB0(var_3784, var_3776, var_3768, var_3760, var_3752)
    var_3800 = 1;
    var_3808 = 3;
    var_3816 = 0;
    var_3824 = 8;
    var_3832 = -5321351475360329479;
    var_3840 = 40;
    pri = fun_6AB0(var_3832, var_3824, var_3816, var_3808, var_3800)
    var_3848 = 34416;
    pri = SoundPostEvent(var_3848)
    var_3856 = 1139048380943932808;
    var_3864 = 8;
    pri = fun_1678(var_3856)
    var_3872 = -7785343324082770324;
    var_3880 = 8;
    pri = fun_1678(var_3872)
    var_3888 = -164538243036851154;
    var_3896 = 8;
    pri = fun_1678(var_3888)
    var_3904 = -5321351475360329479;
    var_3912 = 8;
    pri = fun_1678(var_3904)
    var_3920 = 6;
    var_3928 = 6;
    var_3936 = var_8;
    var_3944 = 24;
    pri = fun_1610(var_3936, var_3928, var_3920)
    var_3952 = 1;
    var_3960 = 1;
    var_3968 = -1;
    var_3976 = -1;
    var_3984 = 0;
    var_3992 = 11;
    var_4000 = var_8;
    var_4008 = 56;
    pri = fun_4778(var_4000, var_3992, var_3984, var_3976, var_3968, var_3960, var_3952)
    var_4016 = 34592;
    pri = SoundPostEvent(var_4016)
    var_4024 = 0;
    var_4032 = 4628658959523040461;
    var_4040 = 3;
    OP_PUSH5_C 4666153509995434476, -4579239166408927478, 4661393399802861978, 4666352147766108488, -4580104701962312745
    var_4048 = 4661917394059311186;
    var_4056 = 15;
    pri = EvCameraMove(var_4056, var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984)
    var_4064 = 0;
    var_4072 = 0;
    var_4080 = 3;
    var_4088 = 8;
    OP_PUSH2_C 4600877379321698714, 4599075939470750516
    var_4096 = 48;
    pri = fun_2990(var_4088, var_4080, var_4072, var_4064, var_4056, var_4048)
    var_4104 = 0;
    pri = fun_2AF8()
    var_4112 = 3;
    var_4120 = 7;
    var_4128 = 16;
    pri = fun_2A60(var_4120, var_4112)
    var_4136 = 0;
    var_4144 = 3;
    var_4152 = 0;
    var_4160 = 101;
    var_4168 = -1;
    var_4176 = var_56;
    var_4184 = var_8;
    var_4192 = 56;
    pri = fun_2528(var_4184, var_4176, var_4168, var_4160, var_4152, var_4144, var_4136)
    var_4200 = 1139048380943932808;
    var_4208 = 8;
    pri = fun_0A60(var_4200)
    var_4216 = -7785343324082770324;
    var_4224 = 8;
    pri = fun_0A60(var_4216)
    var_4232 = -164538243036851154;
    var_4240 = 8;
    pri = fun_0A60(var_4232)
    var_4248 = -5321351475360329479;
    var_4256 = 8;
    pri = fun_0A60(var_4248)
    var_4264 = 1;
    var_4272 = 8;
    pri = fun_26C0(var_4264)
    var_4280 = 0;
    pri = fun_2780()
    var_4288 = 0;
    var_4296 = 4628658959523040461;
    var_4304 = 0;
    OP_PUSH5_C 4666313120600880579, -4580577755845047091, 4661963991362096333, 4666494529024347341, 4639195271588762092
    var_4312 = 4662315461249031209;
    var_4320 = 1;
    pri = EvCameraMove(var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272, var_4264, var_4256, var_4248)
    var_4328 = 0;
    pri = fun_2900()
    var_4336 = 0;
    var_4344 = 4628658959523040461;
    var_4352 = 3;
    OP_PUSH5_C 4666313120600880579, -4580577755845047091, 4661963991362096333, 4666467145687257580, 4639181197839926559
    var_4360 = 4662364785340653240;
    var_4368 = 250;
    pri = EvCameraMove(var_4368, var_4360, var_4352, var_4344, var_4336, var_4328, var_4320, var_4312, var_4304, var_4296)
    var_4376 = 0;
    var_4384 = 3;
    var_4392 = 0;
    var_4400 = 100;
    var_4408 = -1;
    var_4416 = var_64;
    var_4424 = var_8;
    var_4432 = 56;
    pri = fun_2528(var_4424, var_4416, var_4408, var_4400, var_4392, var_4384, var_4376)
    var_4440 = 1;
    var_4448 = 8;
    pri = fun_26C0(var_4440)
    var_4456 = 0;
    pri = fun_2780()
    var_4464 = -1;
    var_4472 = var_8;
    var_4480 = 16;
    pri = fun_14E0(var_4472, var_4464)
    var_4488 = 1;
    var_4496 = 3;
    var_4504 = 0;
    var_4512 = 11;
    var_4520 = var_8;
    var_4528 = 40;
    pri = fun_6AB0(var_4520, var_4512, var_4504, var_4496, var_4488)
    var_4536 = 1;
    var_4544 = 1;
    var_4552 = 30;
    var_4560 = 6718143717892348318;
    var_4568 = var_8;
    var_4576 = 40;
    pri = fun_0FB8(var_4568, var_4560, var_4552, var_4544, var_4536)
    var_4584 = 0;
    var_4592 = 0;
    var_4600 = 0;
    var_4608 = 0;
    OP_PUSH2_C 6718143717892348318, 1139048380943932808
    var_4616 = 48;
    pri = fun_0830(var_4608, var_4600, var_4592, var_4584, var_4576, var_4568)
    var_4624 = 0;
    var_4632 = 0;
    var_4640 = 0;
    var_4648 = 0;
    OP_PUSH2_C 6718143717892348318, -7785343324082770324
    var_4656 = 48;
    pri = fun_0830(var_4648, var_4640, var_4632, var_4624, var_4616, var_4608)
    var_4664 = 0;
    var_4672 = 0;
    var_4680 = 0;
    var_4688 = 0;
    OP_PUSH2_C 6718143717892348318, -164538243036851154
    var_4696 = 48;
    pri = fun_0830(var_4688, var_4680, var_4672, var_4664, var_4656, var_4648)
    var_4704 = 0;
    var_4712 = 0;
    var_4720 = 0;
    var_4728 = 0;
    OP_PUSH2_C 6718143717892348318, -5321351475360329479
    var_4736 = 48;
    pri = fun_0830(var_4728, var_4720, var_4712, var_4704, var_4696, var_4688)
    var_4744 = 0;
    var_4752 = 3;
    var_4760 = 0;
    var_4768 = 100;
    var_4776 = -1;
    var_4784 = var_72;
    var_4792 = var_8;
    var_4800 = 56;
    pri = fun_2528(var_4792, var_4784, var_4776, var_4768, var_4760, var_4752, var_4744)
    var_4808 = var_8;
    var_4816 = 8;
    pri = fun_0A60(var_4808)
    var_4824 = 1139048380943932808;
    var_4832 = 8;
    pri = fun_0888(var_4824)
    var_4840 = -7785343324082770324;
    var_4848 = 8;
    pri = fun_0888(var_4840)
    var_4856 = -164538243036851154;
    var_4864 = 8;
    pri = fun_0888(var_4856)
    var_4872 = -5321351475360329479;
    var_4880 = 8;
    pri = fun_0888(var_4872)
    var_4888 = 1;
    var_4896 = 8;
    pri = fun_26C0(var_4888)
    var_4904 = 0;
    pri = fun_2780()
    var_4912 = 34736;
    pri = SoundPostEvent(var_4912)
    var_4920 = 6;
    var_4928 = 6;
    var_4936 = 1139048380943932808;
    var_4944 = 24;
    pri = fun_1610(var_4936, var_4928, var_4920)
    var_4952 = 6;
    var_4960 = 6;
    var_4968 = -7785343324082770324;
    var_4976 = 24;
    pri = fun_1610(var_4968, var_4960, var_4952)
    var_4984 = 6;
    var_4992 = 6;
    var_5000 = -164538243036851154;
    var_5008 = 24;
    pri = fun_1610(var_5000, var_4992, var_4984)
    var_5016 = 6;
    var_5024 = 6;
    var_5032 = -5321351475360329479;
    var_5040 = 24;
    pri = fun_1610(var_5032, var_5024, var_5016)
    var_5048 = 0;
    var_5056 = 4626491602202368410;
    var_5064 = 0;
    OP_PUSH5_C 4666252103203097149, -4579193250803351552, 4661825606828624445, 4666196193036824740, -4587448208182833316
    var_5072 = 4662428051239715471;
    var_5080 = 1;
    pri = EvCameraMove(var_5080, var_5072, var_5064, var_5056, var_5048, var_5040, var_5032, var_5024, var_5016, var_5008)
    var_5088 = 0;
    pri = fun_2900()
    var_5096 = 0;
    var_5104 = 4626491602202368410;
    var_5112 = 3;
    OP_PUSH5_C 4666243307110074941, -4579193250803351552, 4661822352274206228, 4666187473909616476, -4587439060246090220
    var_5120 = 4662424862655994921;
    var_5128 = 150;
    pri = EvCameraMove(var_5128, var_5120, var_5112, var_5104, var_5096, var_5088, var_5080, var_5072, var_5064, var_5056)
    var_5136 = 1;
    var_5144 = 1;
    var_5152 = -1;
    var_5160 = -1;
    var_5168 = 0;
    var_5176 = 11;
    var_5184 = -5321351475360329479;
    var_5192 = 56;
    pri = fun_4778(var_5184, var_5176, var_5168, var_5160, var_5152, var_5144, var_5136)
    var_5200 = 1;
    var_5208 = 1;
    var_5216 = -1;
    var_5224 = -1;
    var_5232 = 0;
    var_5240 = 11;
    var_5248 = -7785343324082770324;
    var_5256 = 56;
    pri = fun_4778(var_5248, var_5240, var_5232, var_5224, var_5216, var_5208, var_5200)
    var_5264 = 1;
    var_5272 = 1;
    var_5280 = -1;
    var_5288 = -1;
    var_5296 = 0;
    var_5304 = 11;
    var_5312 = -164538243036851154;
    var_5320 = 56;
    pri = fun_4778(var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264)
    var_5328 = 1;
    var_5336 = 1;
    var_5344 = -1;
    var_5352 = -1;
    var_5360 = 0;
    var_5368 = 11;
    var_5376 = 1139048380943932808;
    var_5384 = 56;
    pri = fun_4778(var_5376, var_5368, var_5360, var_5352, var_5344, var_5336, var_5328)
    var_5392 = 0;
    var_5400 = 3;
    var_5408 = 0;
    var_5416 = 100;
    var_5424 = -1;
    var_5432 = 3224256193902928800;
    var_5440 = var_8;
    var_5448 = 56;
    pri = fun_2528(var_5440, var_5432, var_5424, var_5416, var_5408, var_5400, var_5392)
    var_5456 = 1;
    var_5464 = 8;
    pri = fun_26C0(var_5456)
    var_5472 = 0;
    pri = fun_2780()
    var_5480 = 0;
    var_5488 = 3;
    var_5496 = 0;
    var_5504 = 100;
    var_5512 = -1;
    var_5520 = 51778092272060343;
    var_5528 = var_8;
    var_5536 = 56;
    pri = fun_2528(var_5528, var_5520, var_5512, var_5504, var_5496, var_5488, var_5480)
    var_5544 = 1;
    var_5552 = 8;
    pri = fun_26C0(var_5544)
    var_5560 = 0;
    pri = fun_2780()
    var_5568 = 7;
    var_5576 = 6718143717892348318;
    var_5584 = 16;
    pri = fun_1520(var_5576, var_5568)
    var_5592 = 0;
    var_5600 = 3;
    var_5608 = 0;
    var_5616 = 100;
    var_5624 = -1;
    OP_PUSH2_C 3412240712023977296, 6718143717892348318
    var_5632 = 56;
    pri = fun_2528(var_5624, var_5616, var_5608, var_5600, var_5592, var_5584, var_5576)
    var_5640 = 1;
    var_5648 = 8;
    pri = fun_26C0(var_5640)
    var_5656 = 0;
    pri = fun_2780()
    var_5664 = 0;
    var_5672 = 4626491602202368410;
    var_5680 = 0;
    OP_PUSH5_C 4666288634476930007, -4578870434189436518, 4661493994121687204, 4666342576517388698, -4581051337493362770
    var_5688 = 4662135921995331666;
    var_5696 = 1;
    pri = EvCameraMove(var_5696, var_5688, var_5680, var_5672, var_5664, var_5656, var_5648, var_5640, var_5632, var_5624)
    var_5704 = 0;
    pri = fun_2900()
    var_5712 = -1;
    var_5720 = var_8;
    var_5728 = 16;
    pri = fun_14E0(var_5720, var_5712)
    var_5736 = 0;
    var_5744 = 0;
    var_5752 = 0;
    var_5760 = 270;
    pri = float(var_5760)
    var_5768 = pri;
    var_5776 = var_8;
    var_5784 = 40;
    pri = fun_07E0(var_5776, var_5768, var_5760, var_5752, var_5744)
    var_5792 = var_8;
    var_5800 = 8;
    pri = fun_0888(var_5792)
    var_5808 = 5;
    var_5816 = 8;
    pri = fun_0090(var_5808)
    var_5824 = 1;
    var_5832 = -1;
    var_5840 = -1;
    var_5848 = 3;
    var_5856 = 0;
    var_5864 = 1;
    var_5872 = var_8;
    var_5880 = 56;
    pri = fun_2B98(var_5872, var_5864, var_5856, var_5848, var_5840, var_5832, var_5824)
    var_5888 = 5;
    var_5896 = 8;
    pri = fun_0090(var_5888)
    var_5904 = 1;
    var_5912 = 3;
    var_5920 = 0;
    var_5928 = 11;
    var_5936 = -5321351475360329479;
    var_5944 = 40;
    pri = fun_6AB0(var_5936, var_5928, var_5920, var_5912, var_5904)
    var_5952 = 1;
    var_5960 = 3;
    var_5968 = 0;
    var_5976 = 11;
    var_5984 = -7785343324082770324;
    var_5992 = 40;
    pri = fun_6AB0(var_5984, var_5976, var_5968, var_5960, var_5952)
    var_6000 = 1;
    var_6008 = 3;
    var_6016 = 0;
    var_6024 = 11;
    var_6032 = -164538243036851154;
    var_6040 = 40;
    pri = fun_6AB0(var_6032, var_6024, var_6016, var_6008, var_6000)
    var_6048 = 1;
    var_6056 = 3;
    var_6064 = 0;
    var_6072 = 11;
    var_6080 = 1139048380943932808;
    var_6088 = 40;
    pri = fun_6AB0(var_6080, var_6072, var_6064, var_6056, var_6048)
    var_6096 = var_8;
    var_6104 = 8;
    pri = fun_0A60(var_6096)
    var_6112 = -5321351475360329479;
    var_6120 = 8;
    pri = fun_0A60(var_6112)
    var_6128 = -7785343324082770324;
    var_6136 = 8;
    pri = fun_0A60(var_6128)
    var_6144 = -164538243036851154;
    var_6152 = 8;
    pri = fun_0A60(var_6144)
    var_6160 = 1139048380943932808;
    var_6168 = 8;
    pri = fun_0A60(var_6160)
    var_6176 = 4;
    var_6184 = var_8;
    var_6192 = 16;
    pri = fun_1520(var_6184, var_6176)
    var_6200 = var_8;
    var_6208 = 8;
    pri = fun_15D8(var_6200)
    var_6216 = 0;
    var_6224 = 4626491602202368410;
    var_6232 = 0;
    OP_PUSH5_C 4666320135485065789, -4579685480168874312, 4662016295130229637, 4666454319884119572, -4586960552785682104
    var_6240 = 4662582785511092388;
    var_6248 = 1;
    pri = EvCameraMove(var_6248, var_6240, var_6232, var_6224, var_6216, var_6208, var_6200, var_6192, var_6184, var_6176)
    var_6256 = 0;
    pri = fun_2900()
    var_6264 = 0;
    var_6272 = 4626491602202368410;
    var_6280 = 3;
    OP_PUSH5_C 4666306869877276672, -4579685480168874312, 4662026619544414454, 4666406100801683456, -4586952108536380785
    var_6288 = 4662621268418064548;
    var_6296 = 300;
    pri = EvCameraMove(var_6296, var_6288, var_6280, var_6272, var_6264, var_6256, var_6248, var_6240, var_6232, var_6224)
    var_6304 = 0;
    var_6312 = 0;
    var_6320 = 0;
    var_6328 = 0;
    var_6336 = 8802641224559852288;
    var_6344 = var_8;
    var_6352 = 48;
    pri = fun_0830(var_6344, var_6336, var_6328, var_6320, var_6312, var_6304)
    var_6360 = 0;
    var_6368 = 0;
    var_6376 = 0;
    var_6384 = 0;
    OP_PUSH2_C 8802641224559852288, -5321351475360329479
    var_6392 = 48;
    pri = fun_0830(var_6384, var_6376, var_6368, var_6360, var_6352, var_6344)
    var_6400 = 0;
    var_6408 = 0;
    var_6416 = 0;
    var_6424 = 0;
    OP_PUSH2_C 8802641224559852288, -7785343324082770324
    var_6432 = 48;
    pri = fun_0830(var_6424, var_6416, var_6408, var_6400, var_6392, var_6384)
    var_6440 = 0;
    var_6448 = 0;
    var_6456 = 0;
    var_6464 = 0;
    OP_PUSH2_C 8802641224559852288, -164538243036851154
    var_6472 = 48;
    pri = fun_0830(var_6464, var_6456, var_6448, var_6440, var_6432, var_6424)
    var_6480 = 0;
    var_6488 = 0;
    var_6496 = 0;
    var_6504 = 0;
    OP_PUSH2_C 8802641224559852288, 1139048380943932808
    var_6512 = 48;
    pri = fun_0830(var_6504, var_6496, var_6488, var_6480, var_6472, var_6464)
    var_6520 = 0;
    var_6528 = 3;
    var_6536 = 0;
    var_6544 = 100;
    var_6552 = -1;
    var_6560 = var_80;
    var_6568 = var_8;
    var_6576 = 56;
    pri = fun_2528(var_6568, var_6560, var_6552, var_6544, var_6536, var_6528, var_6520)
    var_6584 = var_8;
    var_6592 = 8;
    pri = fun_0888(var_6584)
    var_6600 = 1139048380943932808;
    var_6608 = 8;
    pri = fun_0888(var_6600)
    var_6616 = -7785343324082770324;
    var_6624 = 8;
    pri = fun_0888(var_6616)
    var_6632 = -164538243036851154;
    var_6640 = 8;
    pri = fun_0888(var_6632)
    var_6648 = -5321351475360329479;
    var_6656 = 8;
    pri = fun_0888(var_6648)
    var_6664 = 1;
    var_6672 = 8;
    pri = fun_26C0(var_6664)
    var_6680 = 0;
    pri = fun_2780()
    var_6688 = 7;
    var_6696 = 7;
    var_6704 = var_8;
    var_6712 = 24;
    pri = fun_1610(var_6704, var_6696, var_6688)
    var_6720 = 1;
    var_6728 = 1;
    var_6736 = -1;
    var_6744 = -1;
    var_6752 = 0;
    var_6760 = 10;
    var_6768 = var_8;
    var_6776 = 56;
    pri = fun_4778(var_6768, var_6760, var_6752, var_6744, var_6736, var_6728, var_6720)
    var_6784 = 0;
    var_6792 = 3;
    var_6800 = 0;
    var_6808 = 100;
    var_6816 = -1;
    var_6824 = var_88;
    var_6832 = var_8;
    var_6840 = 56;
    pri = fun_2528(var_6832, var_6824, var_6816, var_6808, var_6800, var_6792, var_6784)
    var_6848 = 1;
    var_6856 = 8;
    pri = fun_26C0(var_6848)
    var_6864 = 0;
    pri = fun_2780()
    var_6872 = 8;
    var_6880 = 6718143717892348318;
    var_6888 = 16;
    pri = fun_1520(var_6880, var_6872)
    var_6896 = 6718143717892348318;
    var_6904 = 8;
    pri = fun_1678(var_6896)
    var_6912 = 1;
    var_6920 = -1;
    var_6928 = -1;
    var_6936 = 3;
    var_6944 = 0;
    var_6952 = 1;
    var_6960 = 6718143717892348318;
    var_6968 = 56;
    pri = fun_2B98(var_6960, var_6952, var_6944, var_6936, var_6928, var_6920, var_6912)
    var_6976 = 1;
    var_6984 = 3;
    var_6992 = 0;
    var_7000 = 10;
    var_7008 = var_8;
    var_7016 = 40;
    pri = fun_6AB0(var_7008, var_7000, var_6992, var_6984, var_6976)
    var_7024 = 0;
    var_7032 = 3;
    var_7040 = 0;
    var_7048 = 100;
    var_7056 = -1;
    OP_PUSH2_C 3412244010558861929, 6718143717892348318
    var_7064 = 56;
    pri = fun_2528(var_7056, var_7048, var_7040, var_7032, var_7024, var_7016, var_7008)
    var_7072 = 6718143717892348318;
    var_7080 = 8;
    pri = fun_0A60(var_7072)
    var_7088 = var_8;
    var_7096 = 8;
    pri = fun_0A60(var_7088)
    var_7104 = 1;
    var_7112 = 8;
    pri = fun_26C0(var_7104)
    var_7120 = 0;
    pri = fun_2780()
    var_7128 = 6718143717892348318;
    var_7136 = 8;
    pri = fun_1560(var_7128)
    var_7144 = var_8;
    var_7152 = 8;
    pri = fun_1678(var_7144)
    var_7160 = 0;
    var_7168 = 0;
    var_7176 = 0;
    var_7184 = 0;
    var_7192 = 6718143717892348318;
    var_7200 = var_8;
    var_7208 = 48;
    pri = fun_0830(var_7200, var_7192, var_7184, var_7176, var_7168, var_7160)
    var_7216 = 0;
    var_7224 = 3;
    var_7232 = 0;
    var_7240 = 100;
    var_7248 = -1;
    var_7256 = var_96;
    var_7264 = var_8;
    var_7272 = 56;
    pri = fun_2528(var_7264, var_7256, var_7248, var_7240, var_7232, var_7224, var_7216)
    var_7280 = var_8;
    var_7288 = 8;
    pri = fun_0888(var_7280)
    var_7296 = 1;
    var_7304 = 8;
    pri = fun_26C0(var_7296)
    var_7312 = 0;
    pri = fun_2780()
    var_7320 = 0;
    var_7328 = 4627955272081263821;
    var_7336 = 0;
    OP_PUSH5_C 4666254928947980534, -4578690993891783475, 4661332486858683187, 4666309690124601917, -4580566848689699553
    var_7344 = 4661974777571164815;
    var_7352 = 1;
    pri = EvCameraMove(var_7352, var_7344, var_7336, var_7328, var_7320, var_7312, var_7304, var_7296, var_7288, var_7280)
    var_7360 = 0;
    pri = fun_2900()
    var_7368 = 0;
    var_7376 = 4627955272081263821;
    var_7384 = 3;
    OP_PUSH5_C 4666259975706352026, -4578690993891783475, 4661331013513101967, 4666324594004716421, -4580558756284119122
    var_7392 = 4661969686832328212;
    var_7400 = 180;
    pri = EvCameraMove(var_7400, var_7392, var_7384, var_7376, var_7368, var_7360, var_7352, var_7344, var_7336, var_7328)
    var_7408 = 0;
    var_7416 = 3;
    var_7424 = 0;
    var_7432 = 100;
    var_7440 = -1;
    var_7448 = var_104;
    var_7456 = var_8;
    var_7464 = 56;
    pri = fun_2528(var_7456, var_7448, var_7440, var_7432, var_7424, var_7416, var_7408)
    var_7472 = 1;
    var_7480 = 8;
    pri = fun_26C0(var_7472)
    var_7488 = 0;
    pri = fun_2780()
    var_7496 = 5;
    var_7504 = 5;
    var_7512 = var_8;
    var_7520 = 24;
    pri = fun_1610(var_7512, var_7504, var_7496)
    var_7528 = 1;
    var_7536 = -1;
    var_7544 = -1;
    var_7552 = 3;
    var_7560 = 0;
    var_7568 = 1;
    var_7576 = var_8;
    var_7584 = 56;
    pri = fun_2B98(var_7576, var_7568, var_7560, var_7552, var_7544, var_7536, var_7528)
    var_7592 = 0;
    var_7600 = 3;
    var_7608 = 0;
    var_7616 = 100;
    var_7624 = -1;
    var_7632 = var_112;
    var_7640 = var_8;
    var_7648 = 56;
    pri = fun_2528(var_7640, var_7632, var_7624, var_7616, var_7608, var_7600, var_7592)
    var_7656 = var_8;
    var_7664 = 8;
    pri = fun_0A60(var_7656)
    var_7672 = 1;
    var_7680 = 8;
    pri = fun_26C0(var_7672)
    var_7688 = 0;
    pri = fun_2780()
    var_7696 = 6;
    var_7704 = 6;
    var_7712 = 6718143717892348318;
    var_7720 = 24;
    pri = fun_1610(var_7712, var_7704, var_7696)
    var_7728 = 0;
    var_7736 = 4626491602202368410;
    var_7744 = 0;
    OP_PUSH5_C 4666105169966719304, -4579095438248944599, 4661839944460250644, 4666432549553889608, -4580640032183644324
    var_7752 = 4661828520534438052;
    var_7760 = 1;
    pri = EvCameraMove(var_7760, var_7752, var_7744, var_7736, var_7728, var_7720, var_7712, var_7704, var_7696, var_7688)
    var_7768 = 0;
    pri = fun_2900()
    var_7776 = 1;
    var_7784 = 1;
    var_7792 = -1;
    var_7800 = -1;
    var_7808 = 0;
    var_7816 = 11;
    var_7824 = 6718143717892348318;
    var_7832 = 56;
    pri = fun_4778(var_7824, var_7816, var_7808, var_7800, var_7792, var_7784, var_7776)
    var_7840 = 0;
    var_7848 = 3;
    var_7856 = 0;
    var_7864 = 100;
    var_7872 = -1;
    OP_PUSH2_C 3412242911047233718, 6718143717892348318
    var_7880 = 56;
    pri = fun_2528(var_7872, var_7864, var_7856, var_7848, var_7840, var_7832, var_7824)
    var_7888 = 1;
    var_7896 = 8;
    pri = fun_26C0(var_7888)
    var_7904 = 0;
    pri = fun_2780()
    var_7912 = 6718143717892348318;
    var_7920 = 8;
    pri = fun_15D8(var_7912)
    var_7928 = 0;
    var_7936 = 3;
    var_7944 = 0;
    var_7952 = 100;
    var_7960 = -1;
    OP_PUSH2_C 3412246209582118351, 6718143717892348318
    var_7968 = 56;
    pri = fun_2528(var_7960, var_7952, var_7944, var_7936, var_7928, var_7920, var_7912)
    var_7976 = 1;
    var_7984 = 8;
    pri = fun_26C0(var_7976)
    var_7992 = 0;
    pri = fun_2780()
    var_8000 = 0;
    var_8008 = 4627955272081263821;
    var_8016 = 0;
    OP_PUSH5_C 4666238282341936005, -4579025245426627379, 4661840472225831977, 4666350377552387768, -4579522224682382131
    var_8024 = 4662460365886455808;
    var_8032 = 1;
    pri = EvCameraMove(var_8032, var_8024, var_8016, var_8008, var_8000, var_7992, var_7984, var_7976, var_7968, var_7960)
    var_8040 = 0;
    pri = fun_2900()
    var_8048 = 0;
    var_8056 = 4627955272081263821;
    var_8064 = 3;
    OP_PUSH5_C 4666276589327047721, -4579025245426627379, 4661812764532812022, 4666388349186453012, -4579521520994940355
    var_8072 = 4662432878095761408;
    var_8080 = 300;
    pri = EvCameraMove(var_8080, var_8072, var_8064, var_8056, var_8048, var_8040, var_8032, var_8024, var_8016, var_8008)
    var_8088 = var_8;
    var_8096 = 8;
    pri = fun_1678(var_8088)
    var_8104 = 0;
    var_8112 = 0;
    var_8120 = 0;
    var_8128 = 0;
    var_8136 = 8802641224559852288;
    var_8144 = var_8;
    var_8152 = 48;
    pri = fun_0830(var_8144, var_8136, var_8128, var_8120, var_8112, var_8104)
    var_8160 = 1;
    var_8168 = 3;
    var_8176 = 0;
    var_8184 = 11;
    var_8192 = 6718143717892348318;
    var_8200 = 40;
    pri = fun_6AB0(var_8192, var_8184, var_8176, var_8168, var_8160)
    var_8208 = 0;
    var_8216 = 3;
    var_8224 = 0;
    var_8232 = 100;
    var_8240 = -1;
    var_8248 = var_120;
    var_8256 = var_8;
    var_8264 = 56;
    pri = fun_2528(var_8256, var_8248, var_8240, var_8232, var_8224, var_8216, var_8208)
    var_8272 = var_8;
    var_8280 = 8;
    pri = fun_0888(var_8272)
    var_8288 = 6718143717892348318;
    var_8296 = 8;
    pri = fun_0A60(var_8288)
    var_8304 = 1;
    var_8312 = 8;
    pri = fun_26C0(var_8304)
    var_8320 = 0;
    pri = fun_2780()
    var_8328 = 8;
    var_8336 = var_8;
    var_8344 = 16;
    pri = fun_1520(var_8336, var_8328)
    var_8352 = 2;
    var_8360 = var_8;
    var_8368 = 16;
    pri = fun_1598(var_8360, var_8352)
    var_8376 = 1;
    var_8384 = 1;
    var_8392 = -1;
    var_8400 = -1;
    var_8408 = 0;
    var_8416 = 9;
    var_8424 = var_8;
    var_8432 = 56;
    pri = fun_4778(var_8424, var_8416, var_8408, var_8400, var_8392, var_8384, var_8376)
    var_8440 = 0;
    var_8448 = 3;
    var_8456 = 0;
    var_8464 = 100;
    var_8472 = -1;
    var_8480 = var_128;
    var_8488 = var_8;
    var_8496 = 56;
    pri = fun_2528(var_8488, var_8480, var_8472, var_8464, var_8456, var_8448, var_8440)
    var_8504 = 1;
    var_8512 = 8;
    pri = fun_26C0(var_8504)
    var_8520 = 0;
    pri = fun_2780()
    var_8528 = 3012735517485661393;
    var_8536 = 8;
    pri = fun_1678(var_8528)
    var_8544 = 1;
    var_8552 = 1;
    var_8560 = -1;
    var_8568 = -1;
    var_8576 = 0;
    var_8584 = 6;
    var_8592 = 3012735517485661393;
    var_8600 = 56;
    pri = fun_4778(var_8592, var_8584, var_8576, var_8568, var_8560, var_8552, var_8544)
    var_8608 = 0;
    var_8616 = 3;
    var_8624 = 0;
    var_8632 = 100;
    var_8640 = -1;
    OP_PUSH2_C 4095650391135315797, 3012735517485661393
    var_8648 = 56;
    pri = fun_2528(var_8640, var_8632, var_8624, var_8616, var_8608, var_8600, var_8592)
    var_8656 = 1;
    var_8664 = 8;
    pri = fun_26C0(var_8656)
    var_8672 = 0;
    pri = fun_2780()
    var_8680 = 888;
    var_8688 = 889;
    var_8696 = 16;
    pri = fun_9338(var_8688, var_8680)
    var_8704 = pri;
    var_8712 = 1;
    var_8720 = 16;
    pri = fun_2860(var_8712, var_8704)
    var_8728 = 4;
    var_8736 = 4;
    var_8744 = 1514373463937579588;
    var_8752 = 24;
    pri = fun_1610(var_8744, var_8736, var_8728)
    var_8760 = 1;
    var_8768 = -1;
    var_8776 = -1;
    var_8784 = 3;
    var_8792 = 0;
    var_8800 = 1;
    var_8808 = 1514373463937579588;
    var_8816 = 56;
    pri = fun_2B98(var_8808, var_8800, var_8792, var_8784, var_8776, var_8768, var_8760)
    var_8824 = 0;
    var_8832 = 3;
    var_8840 = 0;
    var_8848 = 100;
    var_8856 = -1;
    OP_PUSH2_C 4139861495811427569, 1514373463937579588
    var_8864 = 56;
    pri = fun_2528(var_8856, var_8848, var_8840, var_8832, var_8824, var_8816, var_8808)
    var_8872 = 1514373463937579588;
    var_8880 = 8;
    pri = fun_0A60(var_8872)
    var_8888 = 1;
    var_8896 = 8;
    pri = fun_26C0(var_8888)
    var_8904 = 0;
    pri = fun_2780()
    var_8912 = 0;
    var_8920 = 4627955272081263821;
    var_8928 = 0;
    OP_PUSH5_C 4666234895846122455, -4579173019789400474, 4661387759308211487, 4666346479783667302, -4579669119435853005
    var_8936 = 4662007993817439928;
    var_8944 = 1;
    pri = EvCameraMove(var_8944, var_8936, var_8928, var_8920, var_8912, var_8904, var_8896, var_8888, var_8880, var_8872)
    var_8952 = 0;
    pri = fun_2900()
    var_8960 = 0;
    var_8968 = 4627955272081263821;
    var_8976 = 3;
    OP_PUSH5_C 4666229590702518436, -4579529789322381230, 4661358270406354534, 4666341174640063283, -4580025888968833761
    var_8984 = 4661978504915582976;
    var_8992 = 25;
    pri = EvCameraMove(var_8992, var_8984, var_8976, var_8968, var_8960, var_8952, var_8944, var_8936, var_8928, var_8920)
    var_9000 = var_8;
    var_9008 = 8;
    pri = fun_1678(var_9000)
    var_9016 = 1;
    var_9024 = 3;
    var_9032 = 0;
    var_9040 = 6;
    var_9048 = 3012735517485661393;
    var_9056 = 40;
    pri = fun_6AB0(var_9048, var_9040, var_9032, var_9024, var_9016)
    var_9064 = 1;
    var_9072 = 3;
    var_9080 = 0;
    var_9088 = 9;
    var_9096 = var_8;
    var_9104 = 40;
    pri = fun_6AB0(var_9096, var_9088, var_9080, var_9072, var_9064)
    var_9112 = 0;
    var_9120 = 3;
    var_9128 = 0;
    var_9136 = 100;
    var_9144 = -1;
    var_9152 = var_136;
    var_9160 = var_8;
    var_9168 = 56;
    pri = fun_2528(var_9160, var_9152, var_9144, var_9136, var_9128, var_9120, var_9112)
    var_9176 = var_8;
    var_9184 = 8;
    pri = fun_0A60(var_9176)
    var_9192 = 3012735517485661393;
    var_9200 = 8;
    pri = fun_0A60(var_9192)
    var_9208 = 1;
    var_9216 = 8;
    pri = fun_26C0(var_9208)
    var_9224 = 0;
    pri = fun_2780()
    var_9232 = 8;
    var_9240 = var_8;
    var_9248 = 16;
    pri = fun_1520(var_9240, var_9232)
    var_9256 = 0;
    var_9264 = 4630488546871659725;
    var_9272 = 0;
    OP_PUSH5_C 4666245176279842161, -4576247791093934981, 4661777008414676746, 4666387222187034542, -4598118924549934285
    var_9280 = 4662087708410453688;
    var_9288 = 1;
    pri = EvCameraMove(var_9288, var_9280, var_9272, var_9264, var_9256, var_9248, var_9240, var_9232, var_9224, var_9216)
    var_9296 = 0;
    pri = fun_2900()
    var_9304 = 0;
    var_9312 = 4630488546871659725;
    var_9320 = 3;
    OP_PUSH5_C 4666294165020417720, -4578789510133632205, 4661917602966520463, 4666436210927610102, 4638717467815795753
    var_9328 = 4662228302962297405;
    var_9336 = 120;
    pri = EvCameraMove(var_9336, var_9328, var_9320, var_9312, var_9304, var_9296, var_9288, var_9280, var_9272, var_9264)
    var_9344 = 1;
    var_9352 = 1;
    var_9360 = -1;
    var_9368 = 2;
    var_9376 = var_8;
    var_9384 = 40;
    pri = fun_1070(var_9376, var_9368, var_9360, var_9352, var_9344)
    var_9392 = 0;
    var_9400 = 3;
    var_9408 = 0;
    var_9416 = 100;
    var_9424 = -1;
    var_9432 = var_144;
    var_9440 = var_8;
    var_9448 = 56;
    pri = fun_2528(var_9440, var_9432, var_9424, var_9416, var_9408, var_9400, var_9392)
    var_9456 = 1;
    var_9464 = 8;
    pri = fun_26C0(var_9456)
    var_9472 = 0;
    pri = fun_2780()
    var_9480 = 1514373463937579588;
    var_9488 = 8;
    pri = fun_1678(var_9480)
    var_9496 = 1;
    var_9504 = 0;
    var_9512 = 4641240890982006784;
    var_9520 = var_8;
    var_9528 = 4666379245230175027;
    var_9536 = 4722;
    pri = float(var_9536)
    var_9544 = pri;
    OP_PUSH2_C 4611686018427387904, 1514373463937579588
    var_9552 = 64;
    pri = fun_0720(var_9544, var_9536, var_9528, var_9520, var_9512, var_9504, var_9496, var_9488)
    var_9560 = 0;
    var_9568 = 3;
    var_9576 = 0;
    var_9584 = 100;
    var_9592 = -1;
    OP_PUSH2_C 4139862595323055780, 1514373463937579588
    var_9600 = 56;
    pri = fun_2528(var_9592, var_9584, var_9576, var_9568, var_9560, var_9552, var_9544)
    var_9608 = 1514373463937579588;
    var_9616 = 8;
    pri = fun_0888(var_9608)
    var_9624 = 1;
    var_9632 = 8;
    pri = fun_26C0(var_9624)
    var_9640 = 0;
    pri = fun_2780()
    var_9648 = var_8;
    var_9656 = 8;
    pri = fun_1678(var_9648)
    var_9664 = 0;
    var_9672 = 0;
    var_9680 = 0;
    var_9688 = 0;
    OP_PUSH2_C 1514373463937579588, -164538243036851154
    var_9696 = 48;
    pri = fun_0830(var_9688, var_9680, var_9672, var_9664, var_9656, var_9648)
    var_9704 = 1;
    var_9712 = 1;
    var_9720 = 30;
    var_9728 = 1514373463937579588;
    var_9736 = var_8;
    var_9744 = 40;
    pri = fun_0FB8(var_9736, var_9728, var_9720, var_9712, var_9704)
    var_9752 = 0;
    var_9760 = 3;
    var_9768 = 0;
    var_9776 = 100;
    var_9784 = -1;
    var_9792 = var_152;
    var_9800 = var_8;
    var_9808 = 56;
    pri = fun_2528(var_9800, var_9792, var_9784, var_9776, var_9768, var_9760, var_9752)
    var_9816 = -164538243036851154;
    var_9824 = 8;
    pri = fun_0888(var_9816)
    var_9832 = 1;
    var_9840 = 8;
    pri = fun_26C0(var_9832)
    var_9848 = 0;
    pri = fun_2780()
    var_9856 = 2;
    var_9864 = 2;
    var_9872 = var_8;
    var_9880 = 24;
    pri = fun_1610(var_9872, var_9864, var_9856)
    var_9888 = -1;
    var_9896 = var_8;
    var_9904 = 16;
    pri = fun_14E0(var_9896, var_9888)
    var_9912 = 0;
    var_9920 = 4625703472267578573;
    var_9928 = 0;
    OP_PUSH5_C 4666261322608096051, -4579040726550346465, 4661539272010519020, 4666380234790640026, -4581027412120342364
    var_9936 = 4662147235969981481;
    var_9944 = 1;
    pri = EvCameraMove(var_9944, var_9936, var_9928, var_9920, var_9912, var_9904, var_9896, var_9888, var_9880, var_9872)
    var_9952 = 0;
    pri = fun_2900()
    var_9960 = 34936;
    pri = SoundPostEvent(var_9960)
    var_9968 = 0;
    var_9976 = 4628011567076605952;
    var_9984 = 3;
    OP_PUSH5_C 4666280597046930964, -4578780362196889108, 4661828531529554330, 4666399487239242383, -4580506683413427651
    var_9992 = 4662436506484133069;
    var_10000 = 20;
    pri = EvCameraMove(var_10000, var_9992, var_9984, var_9976, var_9968, var_9960, var_9952, var_9944, var_9936, var_9928)
    var_10008 = 0;
    var_10016 = 0;
    var_10024 = 0;
    var_10032 = 0;
    OP_PUSH2_C -164538243036851154, 1514373463937579588
    var_10040 = 48;
    pri = fun_0830(var_10032, var_10024, var_10016, var_10008, var_10000, var_9992)
    var_10048 = 1;
    var_10056 = 1;
    var_10064 = -1;
    var_10072 = -1;
    var_10080 = 0;
    var_10088 = 4;
    var_10096 = var_8;
    var_10104 = 56;
    pri = fun_4778(var_10096, var_10088, var_10080, var_10072, var_10064, var_10056, var_10048)
    var_10112 = 0;
    var_10120 = 3;
    var_10128 = 0;
    var_10136 = 100;
    var_10144 = -1;
    var_10152 = var_160;
    var_10160 = var_8;
    var_10168 = 56;
    pri = fun_2528(var_10160, var_10152, var_10144, var_10136, var_10128, var_10120, var_10112)
    var_10176 = 1514373463937579588;
    var_10184 = 8;
    pri = fun_0888(var_10176)
    var_10192 = 1;
    var_10200 = 8;
    pri = fun_26C0(var_10192)
    var_10208 = 0;
    pri = fun_2780()
    var_10216 = 3;
    var_10224 = 50;
    pri = EvCameraEnd(var_10224, var_10216)
    var_10232 = 1;
    var_10240 = 0;
    var_10248 = 4641240890982006784;
    var_10256 = 0;
    var_10264 = 0;
    var_10272 = 4666251097149957734;
    var_10280 = 4722;
    pri = float(var_10280)
    var_10288 = pri;
    OP_PUSH2_C 4607182418800017408, 3012735517485661393
    var_10296 = 72;
    pri = fun_06A8(var_10288, var_10280, var_10272, var_10264, var_10256, var_10248, var_10240, var_10232, var_10224)
    var_10304 = 3012735517485661393;
    var_10312 = 8;
    pri = fun_0888(var_10304)
    var_10320 = 35064;
    pri = SoundPostEvent(var_10320)
    var_10328 = 1;
    var_10336 = 3;
    var_10344 = 0;
    var_10352 = 4;
    var_10360 = var_8;
    var_10368 = 40;
    pri = fun_6AB0(var_10360, var_10352, var_10344, var_10336, var_10328)
    var_10376 = var_8;
    var_10384 = 8;
    pri = fun_0A60(var_10376)
    var_10392 = 6718143717892348318;
    var_10400 = 8;
    pri = fun_1678(var_10392)
    var_10408 = var_8;
    var_10416 = 8;
    pri = fun_1678(var_10408)
    var_10424 = 1139048380943932808;
    var_10432 = 8;
    pri = fun_1678(var_10424)
    var_10440 = -7785343324082770324;
    var_10448 = 8;
    pri = fun_1678(var_10440)
    var_10456 = -164538243036851154;
    var_10464 = 8;
    pri = fun_1678(var_10456)
    var_10472 = -5321351475360329479;
    var_10480 = 8;
    pri = fun_1678(var_10472)
    var_10488 = 1;
    var_10496 = 8;
    pri = fun_0090(var_10488)
    pri = 0;
    return pri;
}
// fun_F028
fun_F028() {
    pri = 0;
    return pri;
}
// fun_F040
fun_F040() {
    var_8 = 3165;
    var_16 = 8;
    pri = fun_96A8(var_8)
    var_24 = -4341115018897366444;
    pri = FlagSet(var_24)
    var_32 = -5483880531844336598;
    pri = FlagSet(var_32)
    pri = 0;
    return pri;
}
// fun_F0C8
fun_F0C8() {
    OP_PUSH2_C 1514373463937579588, -7988943321491148680
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_F170
    OP_PUSH2_C 7816440442768909182, 857771034974634997
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_JUMP lab_F1A0
// lab_F170
    OP_PUSH2_C 387792121742723038, 7697777616376624213
    pri = SetBamiriInfoToChara(var_0, var_-8)
// lab_F1A0
    pri = 0;
    return pri;
}
// fun_F1B0
fun_F1B0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_98E8()
    var_16 = 0;
    pri = fun_9940()
    var_24 = 0;
    pri = fun_99D0()
    var_32 = 0;
    pri = fun_9A00()
    var_40 = 0;
    pri = fun_F028()
    var_48 = 0;
    pri = fun_F040()
    var_56 = 0;
    pri = fun_F0C8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_F2A0
fun_F2A0() {
    var_8 = 0;
    pri = fun_9940()
    var_16 = 0;
    pri = fun_F040()
    pri = 0;
    return pri;
}
// fun_F2E8
fun_F2E8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_F3A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4095649291623687586;
    var_88 = 80;
    pri = fun_8F98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_F410
// lab_F3A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4095648192112059375;
    var_88 = 80;
    pri = fun_8F98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_F410
    pri = 0;
    return pri;
}
// fun_F420
fun_F420() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3412245110070490140;
    var_88 = 80;
    pri = fun_8F98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_F4A8
fun_F4A8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4139863694834683991;
    var_88 = 80;
    pri = fun_8F98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
