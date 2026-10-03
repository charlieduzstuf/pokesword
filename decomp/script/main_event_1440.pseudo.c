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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07A8
fun_07A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1898(var_8)
    OP_JZER lab_0820
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_18C8(var_24)
    OP_JNZ lab_0820
    pri = 0;
    return pri;
// lab_0820
    OP_JUMP lab_0830
// lab_0830
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0890
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0890
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0830
    pri = 0;
    return pri;
}
// fun_08D0
fun_08D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_09C8
    pri = 0;
    return pri;
// lab_09C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A08
// lab_0A08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1898(var_8)
    OP_JNZ lab_0A90
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A80
    pri = 0;
    return pri;
// lab_0A90
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0B38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B80(var_8)
    pri = 0;
    return pri;
// lab_0B38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A08
    pri = 0;
    return pri;
// lab_0A80
    OP_JUMP lab_0AD8
}
// fun_0B80
fun_0B80() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C08
    pri = 0;
    return pri;
// lab_0C08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1898(var_8)
    OP_JZER lab_0D38
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C60
    OP_ZERO_P_S 64
// lab_0D38
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D70
    OP_CONST_S 64, 1
// lab_0D70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DA8
    OP_CONST_S 72, 1
// lab_0DA8
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
// lab_0C60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C88
    OP_ZERO_P_S 72
// lab_0C88
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
    OP_JUMP lab_0E48
// lab_0E48
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E98
fun_0E98() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0ED8
fun_0ED8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F30
fun_0F30() {
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
// fun_0F90
fun_0F90() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1350
        case default:
        {
// switch_1350_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1350_case_0x0
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
            pri = fun_0F30(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1350_case_default
        }
        case 0x1:
        {
// switch_1350_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0F30(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1350_case_default
        }
        case 0x2:
        {
// switch_1350_case_0x2
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
            pri = fun_0F30(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1350_case_default
        }
        case 0x3:
        {
// switch_1350_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0F30(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1350_case_default
        }
        case 0x4:
        {
// switch_1350_case_0x4
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
            pri = fun_0F30(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1350_case_default
        }
        case 0x5:
        {
// switch_1350_case_0x5
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
            pri = fun_0F30(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1350_case_default
        }
        case 0x6:
        {
// switch_1350_case_0x6
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
            pri = fun_0F30(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1350_case_default
        }
        case 0x7:
        {
// switch_1350_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0F30(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1350_case_default
        }
    }
}
// fun_1400
fun_1400() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1480
fun_1480() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F8
fun_14F8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1440(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_14B8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1480(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14F8(var_24)
    pri = 0;
    return pri;
}
// fun_15F0
fun_15F0() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1898(var_8)
    OP_JZER lab_1690
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
// lab_1690
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
// fun_16F8
fun_16F8() {
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
    pri = fun_15F0(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1898
fun_1898() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_18C8
fun_18C8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_18F8
fun_18F8() {
    OP_JUMP lab_1910
// lab_1910
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_19A0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1990
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0980(var_8)
    pri = 0;
    return pri;
// lab_19A0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A30
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1A20
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0980(var_8)
    pri = 0;
    return pri;
// lab_1A30
    pri = 0;
    return pri;
// lab_1A20
    OP_JUMP lab_1A40
// lab_1A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1910
    pri = 0;
    return pri;
// lab_1990
    OP_JUMP lab_1A40
}
// fun_1A80
fun_1A80() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0980(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_18F8(var_40)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1B40
fun_1B40() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B68
fun_1B68() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1BA0
fun_1BA0() {
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
// switch_21B8
        case default:
        {
// switch_21B8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2200
// lab_2200
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
            OP_JNZ lab_22A8
            var_88 = 0;
            pri = fun_2460()
// lab_22A8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_21B8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1DA0
                case default:
                {
// switch_1DA0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E18
// lab_1E18
                    OP_JUMP lab_2200
                }
                case 0x0:
                {
// switch_1DA0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E18
                }
                case 0x1:
                {
// switch_1DA0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E18
                }
                case 0x2:
                {
// switch_1DA0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E18
                }
                case 0x3:
                {
// switch_1DA0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E18
                }
                case 0x4:
                {
// switch_1DA0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E18
                }
                case 0x5:
                {
// switch_1DA0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E18
                }
            }
        }
        case 0x65:
        {
// switch_21B8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F58
                case default:
                {
// switch_1F58_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FD0
// lab_1FD0
                    OP_JUMP lab_2200
                }
                case 0x0:
                {
// switch_1F58_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1FD0
                }
                case 0x1:
                {
// switch_1F58_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1FD0
                }
                case 0x2:
                {
// switch_1F58_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1FD0
                }
                case 0x3:
                {
// switch_1F58_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FD0
                }
                case 0x4:
                {
// switch_1F58_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1FD0
                }
                case 0x5:
                {
// switch_1F58_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1FD0
                }
            }
        }
        case 0x66:
        {
// switch_21B8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2110
                case default:
                {
// switch_2110_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2188
// lab_2188
                    OP_JUMP lab_2200
                }
                case 0x0:
                {
// switch_2110_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2188
                }
                case 0x1:
                {
// switch_2110_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2188
                }
                case 0x2:
                {
// switch_2110_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2188
                }
                case 0x3:
                {
// switch_2110_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2188
                }
                case 0x4:
                {
// switch_2110_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2188
                }
                case 0x5:
                {
// switch_2110_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2188
                }
            }
        }
    }
}
// fun_22C0
fun_22C0() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0948(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2368
    pri = 1;
    return pri;
// lab_2368
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_23B0
fun_23B0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2400
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_22C0(var_8)
    arg_2 = pri;
// lab_2400
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1BA0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2460
fun_2460() {
    OP_JUMP lab_2478
// lab_2478
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_24B8
    pri = 0;
    return pri;
// lab_24B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2478
    pri = 0;
    return pri;
}
// fun_24F8
fun_24F8() {
    var_8 = 0;
    pri = fun_2460()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_25A8
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_25A8
    pri = 0;
    return pri;
}
// fun_25B8
fun_25B8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_25E8
fun_25E8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2618
// lab_2618
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2658
    OP_JUMP lab_2688
// lab_2658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2618
// lab_2688
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26D0
fun_26D0() {
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
// fun_2740
fun_2740() {
    OP_JUMP lab_2758
// lab_2758
    pri = EvCameraMoveWait_()
    OP_JZER lab_2790
    pri = 0;
    return pri;
// lab_2790
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2758
    pri = 0;
    return pri;
}
// fun_27D0
fun_27D0() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2938()
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
// fun_28A0
fun_28A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2938()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2938
fun_2938() {
    OP_JUMP lab_2950
// lab_2950
    pri = IsEasingRunningBlur_()
    OP_JZER lab_29A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_29B8
// lab_29A8
    pri = 0;
    return pri;
// lab_29B8
    OP_JUMP lab_2950
    pri = 0;
    return pri;
}
// fun_29D8
fun_29D8() {
    pri = arg_6;
    OP_JNZ lab_2A10
    var_8 = 0;
    pri = fun_0E58()
// lab_2A10
    pri = arg_1;
    switch (pri) {
// switch_3F78
        case default:
        {
// switch_3F78_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_42C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_42C8
            pri = 1;
            OP_JUMP lab_42D0
// lab_42C8
            pri = 0;
// lab_42D0
            OP_JZER lab_4428
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0948(var_24, var_16)
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
            OP_JUMP lab_4488
// lab_4428
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
// lab_4488
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_44E8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4548
// lab_44E8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4548
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4548
            pri = arg_2;
            OP_JZER lab_4588
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4588
            var_8 = 0;
            pri = fun_0E98()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F78_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1:
        {
// switch_3F78_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x2:
        {
// switch_3F78_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x3:
        {
// switch_3F78_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x4:
        {
// switch_3F78_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x5:
        {
// switch_3F78_case_0x5
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0x6:
        {
// switch_3F78_case_0x6
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0x7:
        {
// switch_3F78_case_0x7
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0x8:
        {
// switch_3F78_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x9:
        {
// switch_3F78_case_0x9
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0xa:
        {
// switch_3F78_case_0xa
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0xb:
        {
// switch_3F78_case_0xb
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0xc:
        {
// switch_3F78_case_0xc
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0xd:
        {
// switch_3F78_case_0xd
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0xe:
        {
// switch_3F78_case_0xe
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0xf:
        {
// switch_3F78_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x10:
        {
// switch_3F78_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x11:
        {
// switch_3F78_case_0x11
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0x12:
        {
// switch_3F78_case_0x12
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0x13:
        {
// switch_3F78_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x14:
        {
// switch_3F78_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x15:
        {
// switch_3F78_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x16:
        {
// switch_3F78_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x17:
        {
// switch_3F78_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x18:
        {
// switch_3F78_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x19:
        {
// switch_3F78_case_0x19
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1a:
        {
// switch_3F78_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08D0(var_48, var_40)
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
            pri = fun_0BB8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1b:
        {
// switch_3F78_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08D0(var_48, var_40)
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
            pri = fun_0BB8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1c:
        {
// switch_3F78_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_08D0(var_48, var_40)
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
            pri = fun_0BB8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1d:
        {
// switch_3F78_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1e:
        {
// switch_3F78_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x1f:
        {
// switch_3F78_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x20:
        {
// switch_3F78_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x21:
        {
// switch_3F78_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x22:
        {
// switch_3F78_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x23:
        {
// switch_3F78_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x24:
        {
// switch_3F78_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x25:
        {
// switch_3F78_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x26:
        {
// switch_3F78_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x27:
        {
// switch_3F78_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x28:
        {
// switch_3F78_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
        case 0x29:
        {
// switch_3F78_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F78_case_default
        }
    }
}
// fun_45B8
fun_45B8() {
    pri = arg_5;
    OP_JNZ lab_45F0
    var_8 = 0;
    pri = fun_0E58()
// lab_45F0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4640
    OP_CONST_S -8, -1
// lab_4640
    pri = arg_1;
    switch (pri) {
// switch_60F8
        case default:
        {
// switch_60F8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_65A0
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0948(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_65A0
            pri = 1;
            OP_JUMP lab_65A8
// lab_65A0
            pri = 0;
// lab_65A8
            OP_JZER lab_65F8
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6850
// lab_65F8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6660
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6660
            pri = 1;
            OP_JUMP lab_6668
// lab_6660
            pri = 0;
// lab_6668
            OP_JZER lab_67F0
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0948(var_24, var_16)
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
            OP_JUMP lab_6850
// lab_67F0
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
// lab_6850
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_68C0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_68C0
            var_8 = 0;
            pri = fun_0E98()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_60F8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1:
        {
// switch_60F8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2:
        {
// switch_60F8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x3:
        {
// switch_60F8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x4:
        {
// switch_60F8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x5:
        {
// switch_60F8_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B80(var_40)
            OP_JUMP switch_60F8_case_default
        }
        case 0x6:
        {
// switch_60F8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x7:
        {
// switch_60F8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x8:
        {
// switch_60F8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x9:
        {
// switch_60F8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0xa:
        {
// switch_60F8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0xb:
        {
// switch_60F8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0xc:
        {
// switch_60F8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0xd:
        {
// switch_60F8_case_0xd
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0xe:
        {
// switch_60F8_case_0xe
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0xf:
        {
// switch_60F8_case_0xf
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x10:
        {
// switch_60F8_case_0x10
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x11:
        {
// switch_60F8_case_0x11
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x12:
        {
// switch_60F8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x13:
        {
// switch_60F8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x14:
        {
// switch_60F8_case_0x14
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x15:
        {
// switch_60F8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x16:
        {
// switch_60F8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x17:
        {
// switch_60F8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x18:
        {
// switch_60F8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x19:
        {
// switch_60F8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1a:
        {
// switch_60F8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1b:
        {
// switch_60F8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1c:
        {
// switch_60F8_case_0x1c
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1d:
        {
// switch_60F8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1e:
        {
// switch_60F8_case_0x1e
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x1f:
        {
// switch_60F8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x20:
        {
// switch_60F8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x21:
        {
// switch_60F8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x22:
        {
// switch_60F8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x23:
        {
// switch_60F8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x24:
        {
// switch_60F8_case_0x24
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x25:
        {
// switch_60F8_case_0x25
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x26:
        {
// switch_60F8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x27:
        {
// switch_60F8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x28:
        {
// switch_60F8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x29:
        {
// switch_60F8_case_0x29
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2a:
        {
// switch_60F8_case_0x2a
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2b:
        {
// switch_60F8_case_0x2b
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2c:
        {
// switch_60F8_case_0x2c
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2d:
        {
// switch_60F8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2e:
        {
// switch_60F8_case_0x2e
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x2f:
        {
// switch_60F8_case_0x2f
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x30:
        {
// switch_60F8_case_0x30
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x31:
        {
// switch_60F8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x32:
        {
// switch_60F8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x33:
        {
// switch_60F8_case_0x33
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x34:
        {
// switch_60F8_case_0x34
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x35:
        {
// switch_60F8_case_0x35
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x36:
        {
// switch_60F8_case_0x36
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x37:
        {
// switch_60F8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x38:
        {
// switch_60F8_case_0x38
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
            pri = fun_0BB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_60F8_case_default
        }
        case 0x39:
        {
// switch_60F8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x3a:
        {
// switch_60F8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x3b:
        {
// switch_60F8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x3c:
        {
// switch_60F8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x3d:
        {
// switch_60F8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
        case 0x3e:
        {
// switch_60F8_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            OP_JUMP switch_60F8_case_default
        }
    }
}
// fun_68F0
fun_68F0() {
    pri = arg_4;
    OP_JNZ lab_6928
    var_8 = 0;
    pri = fun_0E58()
// lab_6928
    pri = arg_1;
    switch (pri) {
// switch_7D00
        case default:
        {
// switch_7D00_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1898(var_264)
            OP_JZER lab_82C8
            pri = arg_3;
            switch (pri) {
// switch_8270
                case default:
                {
// switch_8270_case_default
                    OP_JUMP lab_8580
// lab_8580
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_85F0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_85F0
                    var_8 = 0;
                    pri = fun_0E98()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8270_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8270_case_default
                }
                case 0x2:
                {
// switch_8270_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8270_case_default
                }
                case 0x3:
                {
// switch_8270_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8270_case_default
                }
            }
// lab_82C8
            pri = arg_1;
            OP_JZER lab_8318
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8318
            pri = 0;
            OP_JUMP lab_8320
// lab_8318
            pri = 1;
// lab_8320
            OP_JZER lab_8388
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0948(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8388
            pri = 1;
            OP_JUMP lab_8390
// lab_8388
            pri = 0;
// lab_8390
            OP_JZER lab_83E0
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8580
// lab_83E0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8448
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8580
// lab_8448
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0948(var_24, var_16)
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
// switch_7D00_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1:
        {
// switch_7D00_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2:
        {
// switch_7D00_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x3:
        {
// switch_7D00_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x4:
        {
// switch_7D00_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x5:
        {
// switch_7D00_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B80(var_40)
            OP_JUMP switch_7D00_case_default
        }
        case 0x6:
        {
// switch_7D00_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x7:
        {
// switch_7D00_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x8:
        {
// switch_7D00_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x9:
        {
// switch_7D00_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0xa:
        {
// switch_7D00_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0xb:
        {
// switch_7D00_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0xc:
        {
// switch_7D00_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0xd:
        {
// switch_7D00_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0xe:
        {
// switch_7D00_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0xf:
        {
// switch_7D00_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x10:
        {
// switch_7D00_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x11:
        {
// switch_7D00_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x12:
        {
// switch_7D00_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x13:
        {
// switch_7D00_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x14:
        {
// switch_7D00_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x15:
        {
// switch_7D00_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x16:
        {
// switch_7D00_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x17:
        {
// switch_7D00_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x18:
        {
// switch_7D00_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x19:
        {
// switch_7D00_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1a:
        {
// switch_7D00_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1b:
        {
// switch_7D00_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1c:
        {
// switch_7D00_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1d:
        {
// switch_7D00_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1e:
        {
// switch_7D00_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x1f:
        {
// switch_7D00_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x20:
        {
// switch_7D00_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x21:
        {
// switch_7D00_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x22:
        {
// switch_7D00_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x23:
        {
// switch_7D00_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x24:
        {
// switch_7D00_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x25:
        {
// switch_7D00_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x26:
        {
// switch_7D00_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x27:
        {
// switch_7D00_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x28:
        {
// switch_7D00_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x29:
        {
// switch_7D00_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2a:
        {
// switch_7D00_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2b:
        {
// switch_7D00_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2c:
        {
// switch_7D00_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2d:
        {
// switch_7D00_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2e:
        {
// switch_7D00_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x2f:
        {
// switch_7D00_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x30:
        {
// switch_7D00_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x31:
        {
// switch_7D00_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x32:
        {
// switch_7D00_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x33:
        {
// switch_7D00_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x34:
        {
// switch_7D00_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x35:
        {
// switch_7D00_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x36:
        {
// switch_7D00_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x37:
        {
// switch_7D00_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x38:
        {
// switch_7D00_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x39:
        {
// switch_7D00_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x3a:
        {
// switch_7D00_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x3b:
        {
// switch_7D00_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x3c:
        {
// switch_7D00_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x3d:
        {
// switch_7D00_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
        case 0x3e:
        {
// switch_7D00_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0908(var_24, var_16, var_8)
            OP_JUMP switch_7D00_case_default
        }
    }
}
// fun_8620
fun_8620() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8830(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32808;
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
    var_424 = 32864;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32880;
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
    OP_JZER lab_8818
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8818
    pri = 0;
    return pri;
}
// fun_8830
fun_8830() {
    var_8 = arg_1;
    var_16 = 32928;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0908(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8878
fun_8878() {
    pri = 33032;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8900
// lab_8900
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8A80
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8A70
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_89C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_89C0
    pri = 0;
    OP_JUMP lab_89C8
// lab_8A80
    pri = 0;
    return pri;
// lab_8A70
    OP_JUMP lab_88F8
// lab_88F8
    OP_INC_P_S -936
// lab_89C0
    pri = 1;
// lab_89C8
    OP_JZER lab_8A40
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8A38
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8A40
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8A38
}
// fun_8AA0
fun_8AA0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8B38
    var_8 = 1;
    var_16 = 0;
    var_24 = 33952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1B40()
// lab_8B38
    pri = arg_4;
    OP_JZER lab_8B70
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B68(var_8)
// lab_8B70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8BC8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8BC8
    pri = 0;
    OP_JUMP lab_8BD0
// lab_8BC8
    pri = 1;
// lab_8BD0
    OP_JZER lab_8C98
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8C98
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_8C70
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1A80(var_32, var_24)
    OP_JUMP lab_8C98
// lab_8C98
    pri = arg_2;
    OP_JZER lab_8D70
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_8D40
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1400(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06A0(var_40)
    OP_JUMP lab_8D70
// lab_8D70
    pri = arg_3;
    OP_JZER lab_8DA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B08(var_8)
// lab_8DA8
    pri = 0;
    return pri;
// lab_8D40
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1400(var_16, var_8)
// lab_8C70
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1A80(var_16, var_8)
}
// fun_8DB8
fun_8DB8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8878(var_24)
    pri = 0;
    return pri;
}
// fun_8E20
fun_8E20() {
    pri = g_mode;
    switch (pri) {
// switch_8EE0
        case default:
        {
// switch_8EE0_case_default
            pri = CommandNOP()
            OP_JUMP lab_8F28
// lab_8F28
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8EE0_case_0x0
            var_8 = 0;
            pri = fun_8F38()
            OP_JUMP lab_8F28
        }
        case 0x2707b32ae5cae757:
        {
// switch_8EE0_case_0x2707b32ae5cae757
            var_8 = 0;
            pri = fun_B930()
            OP_JUMP lab_8F28
        }
        case 0x4fb2912783b7eb7b:
        {
// switch_8EE0_case_0x4fb2912783b7eb7b
            var_8 = 0;
            pri = fun_BA20()
            OP_JUMP lab_8F28
        }
    }
}
// fun_8F38
fun_8F38() {
    pri = 0;
    return pri;
}
// fun_8F50
fun_8F50() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8AA0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8FA8
fun_8FA8() {
    var_8 = -5896533038610949627;
    var_16 = 8;
    pri = fun_0438(var_8)
    var_24 = 6155949791004856836;
    var_32 = 8;
    pri = fun_0438(var_24)
    pri = 0;
    return pri;
}
// fun_9010
fun_9010() {
    var_8 = 0;
    pri = fun_0468()
    pri = 0;
    return pri;
}
// fun_9040
fun_9040() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = -5896533038610949627;
    var_24 = 16;
    pri = fun_0668(var_16, var_8)
    var_32 = 0;
    var_40 = 6155949791004856836;
    var_48 = 16;
    pri = fun_0668(var_40, var_32)
    var_56 = 1;
    var_64 = 1;
    var_72 = 0;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 4666518663304577024, 4671175095048208384, 8802641224559852288
    var_88 = 48;
    pri = fun_0610(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    OP_PUSH4_C 4636033603912859648, 4667265231699836928, 4671153379693559808, 7418990988919710256
    var_112 = 48;
    pri = fun_0610(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 1;
    var_128 = 1;
    OP_PUSH4_C -4587338432941916160, 4667281174618439680, 4671193236990066688, -8208209633826348795
    var_136 = 48;
    pri = fun_0610(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 1;
    var_152 = 1;
    OP_PUSH4_C -4605043208977016422, 4667234995130073088, 4671168497978441728, -5896533038610949627
    var_160 = 48;
    pri = fun_0610(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 1;
    OP_PUSH4_C 4635590280824540365, 4667294368757972992, 4671141559943561216, 6155949791004856836
    var_184 = 48;
    pri = fun_0610(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 1;
    var_200 = 8;
    pri = fun_0090(var_192)
    var_208 = 0;
    var_216 = 4626941962165105459;
    var_224 = 0;
    OP_PUSH5_C 4667022816873703014, 4647879654229588050, 4671178778412161434, 4667708626256412017, 4651606119038446469
    var_232 = 4671232123967562056;
    var_240 = 1;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    pri = fun_2740()
    var_256 = 0;
    var_264 = 4626941962165105459;
    var_272 = 3;
    OP_PUSH5_C 4666911271419065139, -4592321947404578324, 4671163866285709722, 4667627977078514647, 4642020224823774413
    var_280 = 4671181381505940193;
    var_288 = 110;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 1;
    var_304 = 0;
    var_312 = 4641240890982006784;
    var_320 = 0;
    var_328 = 0;
    OP_PUSH4_C 4666824327537098752, 4671175095048208384, 4607182418800017408, 8802641224559852288
    var_336 = 72;
    pri = fun_06D8(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 10;
    var_352 = 8;
    pri = fun_0090(var_344)
    var_360 = 34000;
    var_368 = 8;
    var_376 = 16;
    pri = fun_02B0(var_368, var_360)
    var_384 = 0;
    pri = fun_0380()
    var_392 = 50;
    var_400 = 8;
    pri = fun_0090(var_392)
    var_408 = 1;
    var_416 = 0;
    var_424 = 0;
    OP_PUSH2_C 4607182418800017408, -8208209633826348795
    var_432 = 0;
    var_440 = 48;
    pri = fun_16F8(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    OP_PUSH2_C 8802641224559852288, -8208209633826348795
    var_480 = 48;
    pri = fun_0750(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 15;
    var_496 = 8;
    pri = fun_0090(var_488)
    var_504 = 1;
    var_512 = 0;
    var_520 = 1;
    OP_PUSH2_C 4607182418800017408, 7418990988919710256
    var_528 = 0;
    var_536 = 48;
    pri = fun_16F8(var_528, var_520, var_512, var_504, var_496, var_488)
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    var_568 = 0;
    OP_PUSH2_C 8802641224559852288, 7418990988919710256
    var_576 = 48;
    pri = fun_0750(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = -8208209633826348795;
    var_592 = 8;
    pri = fun_07A8(var_584)
    var_600 = 1;
    var_608 = 1;
    var_616 = -1;
    var_624 = -1;
    var_632 = 0;
    var_640 = 7;
    var_648 = -8208209633826348795;
    var_656 = 56;
    pri = fun_45B8(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 0;
    var_672 = 3;
    var_680 = 0;
    var_688 = 100;
    var_696 = -1;
    OP_PUSH2_C 5887338356820293162, -8208209633826348795
    var_704 = 56;
    pri = fun_23B0(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_712 = 8802641224559852288;
    var_720 = 8;
    pri = fun_07A8(var_712)
    var_728 = 7418990988919710256;
    var_736 = 8;
    pri = fun_07A8(var_728)
    var_744 = 1;
    var_752 = 8;
    pri = fun_24F8(var_744)
    var_760 = 0;
    pri = fun_25B8()
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C 5887331759750523896, -8208209633826348795
    var_808 = 56;
    pri = fun_23B0(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 1;
    var_824 = 8;
    pri = fun_24F8(var_816)
    var_832 = 0;
    pri = fun_25B8()
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 3;
    var_872 = 0;
    var_880 = 19;
    var_888 = 8802641224559852288;
    var_896 = 56;
    pri = fun_29D8(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 1;
    var_912 = 3;
    var_920 = 0;
    var_928 = 7;
    var_936 = -8208209633826348795;
    var_944 = 40;
    pri = fun_68F0(var_936, var_928, var_920, var_912, var_904)
    var_952 = 8802641224559852288;
    var_960 = 8;
    pri = fun_0980(var_952)
    var_968 = 1;
    var_976 = 0;
    var_984 = 4641240890982006784;
    var_992 = 0;
    var_1000 = 0;
    OP_PUSH4_C 4666962316246384640, 4671175095048208384, 4607182418800017408, 8802641224559852288
    var_1008 = 72;
    pri = fun_06D8(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 40;
    var_1024 = 8;
    pri = fun_0090(var_1016)
    var_1032 = 1;
    var_1040 = 0;
    var_1048 = 33952;
    var_1056 = 8;
    var_1064 = 32;
    pri = fun_0310(var_1056, var_1048, var_1040, var_1032)
    var_1072 = 0;
    pri = fun_0380()
    var_1080 = -8208209633826348795;
    var_1088 = 8;
    pri = fun_0980(var_1080)
    var_1096 = 8802641224559852288;
    var_1104 = 8;
    pri = fun_07A8(var_1096)
    var_1112 = 1;
    var_1120 = 1;
    OP_PUSH4_C -4586121053667642573, 4667299316560297984, 4671197085280763904, 8802641224559852288
    var_1128 = 48;
    pri = fun_0610(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1136 = 1;
    var_1144 = 1;
    OP_PUSH4_C -4592236097536681574, 4667234995130073088, 4671168497978441728, -8208209633826348795
    var_1152 = 48;
    pri = fun_0610(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1160 = 1;
    var_1168 = 1;
    OP_PUSH4_C 4635590280824540365, 4667294368757972992, 4671141559943561216, 7418990988919710256
    var_1176 = 48;
    pri = fun_0610(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1184 = 10;
    var_1192 = 8;
    pri = fun_0090(var_1184)
    var_1200 = 8802641224559852288;
    var_1208 = 8;
    pri = fun_07A8(var_1200)
    var_1216 = -8208209633826348795;
    var_1224 = 8;
    pri = fun_07A8(var_1216)
    var_1232 = 7418990988919710256;
    var_1240 = 8;
    pri = fun_07A8(var_1232)
    var_1248 = 0;
    var_1256 = 4627730092099895296;
    var_1264 = 0;
    OP_PUSH5_C 4666956202961734205, -4588440407475738378, 4671113184297227387, 4667631797881421169, 4642157092031199969
    var_1272 = 4671227486777271910;
    var_1280 = 1;
    pri = EvCameraMove(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1288 = 0;
    pri = fun_2740()
    var_1296 = 0;
    var_1304 = 4627730092099895296;
    var_1312 = 3;
    OP_PUSH5_C 4666892964550462669, -4586468675263880233, 4671102821400135598, 4667568559470149632, 4641170874081550008
    var_1320 = 4671217123880180122;
    var_1328 = 150;
    pri = EvCameraMove(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 34000;
    var_1344 = 30;
    var_1352 = 16;
    pri = fun_02B0(var_1344, var_1336)
    var_1360 = 0;
    pri = fun_0380()
    var_1368 = 1;
    var_1376 = 1;
    var_1384 = -1;
    var_1392 = -1;
    var_1400 = 0;
    var_1408 = 1;
    var_1416 = -8208209633826348795;
    var_1424 = 56;
    pri = fun_45B8(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1432 = 1;
    var_1440 = 1;
    var_1448 = 70;
    OP_PUSH2_C -8208209633826348795, 7418990988919710256
    var_1456 = 40;
    pri = fun_0ED8(var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1464 = 0;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 100;
    var_1496 = -1;
    OP_PUSH2_C 5887335058285408529, -8208209633826348795
    var_1504 = 56;
    pri = fun_23B0(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_24F8(var_1512)
    var_1528 = 0;
    pri = fun_25B8()
    var_1536 = 1;
    var_1544 = 3;
    var_1552 = 0;
    var_1560 = 1;
    var_1568 = -8208209633826348795;
    var_1576 = 40;
    pri = fun_68F0(var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1584 = 1;
    var_1592 = 1;
    var_1600 = -1;
    var_1608 = -1;
    var_1616 = 0;
    var_1624 = 1;
    var_1632 = 7418990988919710256;
    var_1640 = 56;
    pri = fun_45B8(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 0;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C 6229333905964480033, 7418990988919710256
    var_1688 = 56;
    pri = fun_23B0(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = -8208209633826348795;
    var_1704 = 8;
    pri = fun_0980(var_1696)
    var_1712 = 1;
    var_1720 = 8;
    pri = fun_24F8(var_1712)
    var_1728 = 0;
    pri = fun_25B8()
    var_1736 = 50;
    var_1744 = 7418990988919710256;
    var_1752 = 16;
    pri = fun_1400(var_1744, var_1736)
    var_1760 = 0;
    var_1768 = 3;
    var_1776 = 0;
    var_1784 = 100;
    var_1792 = -1;
    OP_PUSH2_C 6229330607429595400, 7418990988919710256
    var_1800 = 56;
    pri = fun_23B0(var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744)
    var_1808 = 1;
    var_1816 = 8;
    pri = fun_24F8(var_1808)
    var_1824 = 0;
    pri = fun_25B8()
    var_1832 = 1;
    var_1840 = 3;
    var_1848 = 0;
    var_1856 = 1;
    var_1864 = 7418990988919710256;
    var_1872 = 40;
    pri = fun_68F0(var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1880 = 8;
    var_1888 = -8208209633826348795;
    var_1896 = 16;
    pri = fun_1440(var_1888, var_1880)
    var_1904 = 1;
    var_1912 = 1;
    var_1920 = 60;
    var_1928 = 3;
    var_1936 = -8208209633826348795;
    var_1944 = 40;
    pri = fun_0F90(var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1952 = 0;
    var_1960 = 3;
    var_1968 = 0;
    var_1976 = 100;
    var_1984 = -1;
    OP_PUSH2_C 5887333958773780318, -8208209633826348795
    var_1992 = 56;
    pri = fun_23B0(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2000 = 7418990988919710256;
    var_2008 = 8;
    pri = fun_0980(var_2000)
    var_2016 = 1;
    var_2024 = 8;
    pri = fun_24F8(var_2016)
    var_2032 = 0;
    pri = fun_25B8()
    var_2040 = 0;
    var_2048 = 0;
    var_2056 = 0;
    var_2064 = 0;
    OP_PUSH2_C -8208209633826348795, 7418990988919710256
    var_2072 = 48;
    pri = fun_0750(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2080 = 0;
    var_2088 = 3;
    var_2096 = 0;
    var_2104 = 100;
    var_2112 = -1;
    OP_PUSH2_C 6229331706941223611, 7418990988919710256
    var_2120 = 56;
    pri = fun_23B0(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064)
    var_2128 = 7418990988919710256;
    var_2136 = 8;
    pri = fun_07A8(var_2128)
    var_2144 = 1;
    var_2152 = 8;
    pri = fun_24F8(var_2144)
    var_2160 = 0;
    pri = fun_25B8()
    var_2168 = -1;
    var_2176 = -8208209633826348795;
    var_2184 = 16;
    pri = fun_1400(var_2176, var_2168)
    var_2192 = 6;
    var_2200 = 7;
    var_2208 = -8208209633826348795;
    var_2216 = 24;
    pri = fun_1530(var_2208, var_2200, var_2192)
    var_2224 = 1;
    var_2232 = 1;
    var_2240 = -1;
    var_2248 = -1;
    var_2256 = 0;
    var_2264 = 12;
    var_2272 = -8208209633826348795;
    var_2280 = 56;
    pri = fun_45B8(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2288 = 0;
    var_2296 = 3;
    var_2304 = 0;
    var_2312 = 100;
    var_2320 = -1;
    OP_PUSH2_C 5887324063169126419, -8208209633826348795
    var_2328 = 56;
    pri = fun_23B0(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2336 = 1;
    var_2344 = 8;
    pri = fun_24F8(var_2336)
    var_2352 = 0;
    pri = fun_25B8()
    var_2360 = 1;
    var_2368 = 3;
    var_2376 = 0;
    var_2384 = 12;
    var_2392 = -8208209633826348795;
    var_2400 = 40;
    pri = fun_68F0(var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2408 = -8208209633826348795;
    var_2416 = 8;
    pri = fun_14F8(var_2408)
    var_2424 = 1;
    var_2432 = -1;
    var_2440 = -1;
    var_2448 = 3;
    var_2456 = 0;
    var_2464 = 0;
    var_2472 = 7418990988919710256;
    var_2480 = 56;
    pri = fun_29D8(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2488 = 0;
    var_2496 = 3;
    var_2504 = 0;
    var_2512 = 100;
    var_2520 = -1;
    OP_PUSH2_C 6229335005476108244, 7418990988919710256
    var_2528 = 56;
    pri = fun_23B0(var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2536 = 7418990988919710256;
    var_2544 = 8;
    pri = fun_0980(var_2536)
    var_2552 = -8208209633826348795;
    var_2560 = 8;
    pri = fun_0980(var_2552)
    var_2568 = 1;
    var_2576 = 8;
    pri = fun_24F8(var_2568)
    var_2584 = 0;
    pri = fun_25B8()
    var_2592 = 34048;
    pri = SoundPostEvent(var_2592)
    var_2600 = 1;
    var_2608 = 0;
    var_2616 = 33952;
    var_2624 = 8;
    var_2632 = 32;
    pri = fun_0310(var_2624, var_2616, var_2608, var_2600)
    var_2640 = 0;
    pri = fun_0380()
    var_2648 = 0;
    var_2656 = -8208209633826348795;
    var_2664 = 16;
    pri = fun_0668(var_2656, var_2648)
    var_2672 = 0;
    var_2680 = 7418990988919710256;
    var_2688 = 16;
    pri = fun_0668(var_2680, var_2672)
    var_2696 = 1;
    var_2704 = -5896533038610949627;
    var_2712 = 16;
    pri = fun_0668(var_2704, var_2696)
    var_2720 = 0;
    var_2728 = 0;
    var_2736 = 0;
    var_2744 = 0;
    OP_PUSH2_C -5896533038610949627, 6155949791004856836
    var_2752 = 48;
    pri = fun_0750(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704)
    var_2760 = 50;
    var_2768 = 8;
    pri = fun_0090(var_2760)
    var_2776 = -8208209633826348795;
    var_2784 = 8;
    pri = fun_1598(var_2776)
    var_2792 = 1;
    var_2800 = 1;
    OP_PUSH4_C -4584439240681796403, 4667299316560297984, 4671195161135415296, 8802641224559852288
    var_2808 = 48;
    pri = fun_0610(var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
    var_2816 = 0;
    var_2824 = 4631952216750555136;
    var_2832 = 0;
    OP_PUSH5_C 4666570928589803356, -4591219972870756106, 4671126680802458337, 4667295715659717018, 4631482153539448340
    var_2840 = 4671171315476987904;
    var_2848 = 1;
    pri = EvCameraMove(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
    var_2856 = 0;
    pri = fun_2740()
    var_2864 = 34232;
    pri = SoundPostEvent(var_2864)
    var_2872 = 34000;
    var_2880 = 8;
    var_2888 = 16;
    pri = fun_02B0(var_2880, var_2872)
    var_2896 = 0;
    var_2904 = 4627307879634829312;
    var_2912 = 0;
    OP_PUSH5_C 4666615722693518950, -4579999324767906693, 4671085097272695849, 4667303577167855616, 4632882491548583854
    var_2920 = 4671170996618615849;
    var_2928 = 1;
    pri = EvCameraMove(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2936 = 0;
    pri = fun_2740()
    var_2944 = 0;
    pri = fun_0380()
    var_2952 = 34392;
    pri = SoundPostEvent(var_2952)
    var_2960 = 0;
    var_2968 = 4627307879634829312;
    var_2976 = 18;
    OP_PUSH5_C 4666612644060961178, -4579999324767906693, 4671091260035369533, 4667300641471809454, 4632743161435112079
    var_2984 = 4671177162130068603;
    var_2992 = 30;
    pri = EvCameraMove(var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920)
    var_3000 = 0;
    pri = fun_2740()
    var_3008 = 10;
    var_3016 = 8;
    pri = fun_0090(var_3008)
    OP_PUSH2_C 4622719837514445619, 4627307879634829312
    var_3024 = 0;
    OP_PUSH5_C 4667684299561647473, -4576010120660474921, 4671019011126308372, 4667164615390779146, 4641551920831272059
    var_3032 = 4671182896083207455;
    var_3040 = 1;
    pri = EvCameraMove(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968)
    var_3048 = 0;
    pri = fun_2740()
    var_3056 = 34536;
    pri = SoundPostEvent(var_3056)
    OP_PUSH2_C 4622719837514445619, 4627307879634829312
    var_3064 = 18;
    OP_PUSH5_C 4667689511246763131, -4575742015745158021, 4671028062855784038, 4667169832573452943, 4641015359156917371
    var_3072 = 4671191947812683121;
    var_3080 = 30;
    pri = EvCameraMove(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008)
    var_3088 = 0;
    pri = fun_2740()
    var_3096 = 10;
    var_3104 = 8;
    pri = fun_0090(var_3096)
    var_3112 = 1;
    var_3120 = 6155949791004856836;
    var_3128 = 16;
    pri = fun_0668(var_3120, var_3112)
    var_3136 = 0;
    var_3144 = 4627307879634829312;
    var_3152 = 0;
    OP_PUSH5_C 4666657119306304717, 4635384100404099809, 4671139580822631219, 4667328030306457354, 4637605641657788662
    var_3160 = 4671171560118325084;
    var_3168 = 1;
    pri = EvCameraMove(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
    var_3176 = 0;
    pri = fun_2740()
    var_3184 = 34680;
    pri = SoundPostEvent(var_3184)
    var_3192 = 0;
    var_3200 = 4627307879634829312;
    var_3208 = 15;
    OP_PUSH5_C 4666657965930258104, 4632277320348655944, 4671137401040829153, 4667559614943057674, 4636225710584464671
    var_3216 = 4671180372704021709;
    var_3224 = 40;
    pri = EvCameraMove(var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3232 = 0;
    var_3240 = 0;
    var_3248 = 3;
    var_3256 = 20;
    OP_PUSH2_C 4602678819172646912, 4599075939470750516
    var_3264 = 48;
    pri = fun_27D0(var_3256, var_3248, var_3240, var_3232, var_3224, var_3216)
    var_3272 = 0;
    pri = fun_2938()
    var_3280 = 3;
    var_3288 = 20;
    var_3296 = 16;
    pri = fun_28A0(var_3288, var_3280)
    var_3304 = 0;
    pri = fun_2740()
    var_3312 = 20;
    var_3320 = 8;
    pri = fun_0090(var_3312)
    var_3328 = 0;
    var_3336 = -8979679467098577434;
    var_3344 = 0;
    var_3352 = 24;
    pri = fun_25E8(var_3344, var_3336, var_3328)
    var_3360 = 0;
    var_3368 = -8979680566610205645;
    var_3376 = 1;
    var_3384 = 24;
    pri = fun_25E8(var_3376, var_3368, var_3360)
    var_3392 = 0;
    var_3400 = 0;
    var_3408 = 0;
    var_3416 = 1;
    var_3424 = 32;
    pri = fun_26D0(var_3416, var_3408, var_3400, var_3392)
    var_3432 = 1;
    var_3440 = 1;
    var_3448 = 70;
    OP_PUSH2_C 8802641224559852288, -5896533038610949627
    var_3456 = 40;
    pri = fun_0ED8(var_3448, var_3440, var_3432, var_3424, var_3416)
    var_3464 = 2;
    var_3472 = 6;
    var_3480 = -5896533038610949627;
    var_3488 = 24;
    pri = fun_1530(var_3480, var_3472, var_3464)
    var_3496 = 0;
    var_3504 = 2;
    var_3512 = -5896533038610949627;
    var_3520 = 24;
    pri = fun_8620(var_3512, var_3504, var_3496)
    var_3528 = 0;
    var_3536 = 3;
    var_3544 = 0;
    var_3552 = 100;
    var_3560 = -1;
    OP_PUSH2_C 5887322963657498208, -5896533038610949627
    var_3568 = 56;
    pri = fun_23B0(var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512)
    var_3576 = -5896533038610949627;
    var_3584 = 8;
    pri = fun_0980(var_3576)
    var_3592 = 1;
    var_3600 = 8;
    pri = fun_24F8(var_3592)
    var_3608 = 0;
    pri = fun_25B8()
    var_3616 = -5896533038610949627;
    var_3624 = 8;
    pri = fun_1598(var_3616)
    var_3632 = 1;
    var_3640 = 1;
    var_3648 = 70;
    OP_PUSH2_C 6155949791004856836, -5896533038610949627
    var_3656 = 40;
    pri = fun_0ED8(var_3648, var_3640, var_3632, var_3624, var_3616)
    var_3664 = 1;
    var_3672 = 1;
    var_3680 = 70;
    OP_PUSH2_C 6155949791004856836, 8802641224559852288
    var_3688 = 40;
    pri = fun_0ED8(var_3680, var_3672, var_3664, var_3656, var_3648)
    var_3696 = 0;
    var_3704 = 0;
    var_3712 = -5896533038610949627;
    var_3720 = 24;
    pri = fun_8620(var_3712, var_3704, var_3696)
    var_3728 = 1;
    var_3736 = 1;
    var_3744 = -1;
    var_3752 = -1;
    var_3760 = 0;
    var_3768 = 1;
    var_3776 = 6155949791004856836;
    var_3784 = 56;
    pri = fun_45B8(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728)
    var_3792 = 0;
    var_3800 = 3;
    var_3808 = 0;
    var_3816 = 100;
    var_3824 = -1;
    OP_PUSH2_C 6229337204499364666, 6155949791004856836
    var_3832 = 56;
    pri = fun_23B0(var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776)
    var_3840 = -5896533038610949627;
    var_3848 = 8;
    pri = fun_07A8(var_3840)
    var_3856 = -5896533038610949627;
    var_3864 = 8;
    pri = fun_0980(var_3856)
    var_3872 = 1;
    var_3880 = 8;
    pri = fun_24F8(var_3872)
    var_3888 = 0;
    pri = fun_25B8()
    var_3896 = 1;
    var_3904 = 3;
    var_3912 = 0;
    var_3920 = 1;
    var_3928 = 6155949791004856836;
    var_3936 = 40;
    pri = fun_68F0(var_3928, var_3920, var_3912, var_3904, var_3896)
    var_3944 = 1;
    var_3952 = -1;
    var_3960 = -1;
    var_3968 = 3;
    var_3976 = 0;
    var_3984 = 0;
    var_3992 = -5896533038610949627;
    var_4000 = 56;
    pri = fun_29D8(var_3992, var_3984, var_3976, var_3968, var_3960, var_3952, var_3944)
    var_4008 = 0;
    var_4016 = 3;
    var_4024 = 0;
    var_4032 = 100;
    var_4040 = -1;
    OP_PUSH2_C 5887337257308664951, -5896533038610949627
    var_4048 = 56;
    pri = fun_23B0(var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992)
    var_4056 = 6155949791004856836;
    var_4064 = 8;
    pri = fun_0980(var_4056)
    var_4072 = -5896533038610949627;
    var_4080 = 8;
    pri = fun_0980(var_4072)
    var_4088 = 1;
    var_4096 = 8;
    pri = fun_24F8(var_4088)
    var_4104 = 0;
    pri = fun_25B8()
    var_4112 = 5;
    var_4120 = 5;
    var_4128 = -5896533038610949627;
    var_4136 = 24;
    pri = fun_1530(var_4128, var_4120, var_4112)
    var_4144 = -1;
    var_4152 = -5896533038610949627;
    var_4160 = 16;
    pri = fun_1400(var_4152, var_4144)
    var_4168 = 0;
    var_4176 = 0;
    var_4184 = 0;
    var_4192 = 0;
    OP_PUSH2_C 8802641224559852288, -5896533038610949627
    var_4200 = 48;
    pri = fun_0750(var_4192, var_4184, var_4176, var_4168, var_4160, var_4152)
    var_4208 = 1;
    var_4216 = 1;
    var_4224 = 70;
    OP_PUSH2_C -5896533038610949627, 8802641224559852288
    var_4232 = 40;
    pri = fun_0ED8(var_4224, var_4216, var_4208, var_4200, var_4192)
    var_4240 = 1;
    var_4248 = 1;
    var_4256 = 70;
    OP_PUSH2_C -5896533038610949627, 6155949791004856836
    var_4264 = 40;
    pri = fun_0ED8(var_4256, var_4248, var_4240, var_4232, var_4224)
    var_4272 = 0;
    var_4280 = 3;
    var_4288 = 0;
    var_4296 = 100;
    var_4304 = -1;
    OP_PUSH2_C 5887336157797036740, -5896533038610949627
    var_4312 = 56;
    pri = fun_23B0(var_4304, var_4296, var_4288, var_4280, var_4272, var_4264, var_4256)
    var_4320 = -5896533038610949627;
    var_4328 = 8;
    pri = fun_07A8(var_4320)
    var_4336 = 1;
    var_4344 = 8;
    pri = fun_24F8(var_4336)
    var_4352 = 0;
    pri = fun_25B8()
    var_4360 = 34808;
    pri = SoundPostEvent(var_4360)
    var_4368 = 34968;
    pri = SoundPostEvent(var_4368)
    var_4376 = 35096;
    pri = SoundPostEvent(var_4376)
    var_4384 = 1;
    var_4392 = 0;
    var_4400 = 33952;
    var_4408 = 8;
    var_4416 = 32;
    pri = fun_0310(var_4408, var_4400, var_4392, var_4384)
    var_4424 = 0;
    pri = fun_0380()
    var_4432 = -5896533038610949627;
    var_4440 = 8;
    pri = fun_1598(var_4432)
    var_4448 = -1;
    var_4456 = 6155949791004856836;
    var_4464 = 16;
    pri = fun_1400(var_4456, var_4448)
    var_4472 = -1;
    var_4480 = 8802641224559852288;
    var_4488 = 16;
    pri = fun_1400(var_4480, var_4472)
    var_4496 = 3;
    var_4504 = 1;
    pri = EvCameraEnd(var_4504, var_4496)
    var_4512 = 15;
    var_4520 = 8;
    pri = fun_0090(var_4512)
    pri = 0;
    return pri;
}
// fun_B6C0
fun_B6C0() {
    pri = 0;
    return pri;
}
// fun_B6D8
fun_B6D8() {
    var_8 = -8208209633826348795;
    var_16 = 8;
    pri = fun_05B8(var_8)
    var_24 = 7418990988919710256;
    var_32 = 8;
    pri = fun_05B8(var_24)
    var_40 = -7268306149131292845;
    pri = VanishFlagSet(var_40)
    var_48 = 1450;
    var_56 = 8;
    pri = fun_8DB8(var_48)
    var_64 = 5804806806352038632;
    pri = VanishFlagSet(var_64)
    pri = 0;
    return pri;
}
// fun_B7B0
fun_B7B0() {
    var_8 = 0;
    pri = fun_0468()
    OP_PUSH2_C -5896533038610949627, 4202587743579492727
    pri = SetBamiriInfoToChara(var_8, var_0)
    OP_PUSH2_C 6155949791004856836, -4372640176965576242
    pri = SetBamiriInfoToChara(var_8, var_0)
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    OP_PUSH3_C 4667299316560297984, 4671171796513325056, 8802641224559852288
    var_56 = 48;
    pri = fun_0610(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 35264;
    pri = SoundPostEvent(var_64)
    var_72 = 35392;
    pri = SoundPostEvent(var_72)
    var_80 = 34000;
    var_88 = 8;
    var_96 = 16;
    pri = fun_02B0(var_88, var_80)
    var_104 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_B930
fun_B930() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8F50()
    var_16 = 0;
    pri = fun_8FA8()
    var_24 = 0;
    pri = fun_9010()
    var_32 = 0;
    pri = fun_9040()
    var_40 = 0;
    pri = fun_B6C0()
    var_48 = 0;
    pri = fun_B6D8()
    var_56 = 0;
    pri = fun_B7B0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BA20
fun_BA20() {
    var_8 = 0;
    pri = fun_8FA8()
    var_16 = 0;
    pri = fun_B6D8()
    pri = 0;
    return pri;
}
