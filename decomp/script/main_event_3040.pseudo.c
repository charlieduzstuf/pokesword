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
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0470
// lab_0470
    var_8 = 0;
    pri = fun_0588()
    OP_JNZ lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0470
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0508
// lab_0508
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0548
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0608
fun_0608() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0640
fun_0640() {
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
// fun_06B8
fun_06B8() {
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
// fun_0778
fun_0778() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1950(var_8)
    OP_JZER lab_0898
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1980(var_24)
    OP_JNZ lab_0898
    pri = 0;
    return pri;
// lab_0898
    OP_JUMP lab_08A8
// lab_08A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0908
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0908
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08A8
    pri = 0;
    return pri;
}
// fun_0948
fun_0948() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0A40
    pri = 0;
    return pri;
// lab_0A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0A80
// lab_0A80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1950(var_8)
    OP_JNZ lab_0B08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0AF8
    pri = 0;
    return pri;
// lab_0B08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0B50
    pri = 0;
    return pri;
// lab_0B50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0BB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    pri = 0;
    return pri;
// lab_0BB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
// lab_0AF8
    OP_JUMP lab_0B50
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C80
    pri = 0;
    return pri;
// lab_0C80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1950(var_8)
    OP_JZER lab_0DB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CD8
    OP_ZERO_P_S 64
// lab_0DB0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0DE8
    OP_CONST_S 64, 1
// lab_0DE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E20
    OP_CONST_S 72, 1
// lab_0E20
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
// lab_0CD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D00
    OP_ZERO_P_S 72
// lab_0D00
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
    OP_JUMP lab_0EC0
// lab_0EC0
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F10
fun_0F10() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
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
// fun_1008
fun_1008() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_13C8
        case default:
        {
// switch_13C8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_13C8_case_0x0
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
            pri = fun_0FA8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13C8_case_default
        }
        case 0x1:
        {
// switch_13C8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FA8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_13C8_case_default
        }
        case 0x2:
        {
// switch_13C8_case_0x2
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
            pri = fun_0FA8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13C8_case_default
        }
        case 0x3:
        {
// switch_13C8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FA8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_13C8_case_default
        }
        case 0x4:
        {
// switch_13C8_case_0x4
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
            pri = fun_0FA8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_13C8_case_default
        }
        case 0x5:
        {
// switch_13C8_case_0x5
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
            pri = fun_0FA8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13C8_case_default
        }
        case 0x6:
        {
// switch_13C8_case_0x6
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
            pri = fun_0FA8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_13C8_case_default
        }
        case 0x7:
        {
// switch_13C8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_0FA8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_13C8_case_default
        }
    }
}
// fun_1478
fun_1478() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14F8
fun_14F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1538
fun_1538() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1570
fun_1570() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_15E8
fun_15E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14F8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1570(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1538(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15B0(var_24)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1950(var_8)
    OP_JZER lab_1748
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
// lab_1748
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
// fun_17B0
fun_17B0() {
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
    pri = fun_16A8(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1950
fun_1950() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1980
fun_1980() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_19B0
fun_19B0() {
    OP_JUMP lab_19C8
// lab_19C8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1A58
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1A48
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_1A58
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1AE8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1AD8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    pri = 0;
    return pri;
// lab_1AE8
    pri = 0;
    return pri;
// lab_1AD8
    OP_JUMP lab_1AF8
// lab_1AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19C8
    pri = 0;
    return pri;
// lab_1A48
    OP_JUMP lab_1AF8
}
// fun_1B38
fun_1B38() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_19B0(var_40)
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1C20
fun_1C20() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1C50
fun_1C50() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1C88
fun_1C88() {
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
// switch_22A0
        case default:
        {
// switch_22A0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_22E8
// lab_22E8
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
            OP_JNZ lab_2390
            var_88 = 0;
            pri = fun_2548()
// lab_2390
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_22A0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1E88
                case default:
                {
// switch_1E88_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F00
// lab_1F00
                    OP_JUMP lab_22E8
                }
                case 0x0:
                {
// switch_1E88_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1F00
                }
                case 0x1:
                {
// switch_1E88_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1F00
                }
                case 0x2:
                {
// switch_1E88_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1F00
                }
                case 0x3:
                {
// switch_1E88_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F00
                }
                case 0x4:
                {
// switch_1E88_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1F00
                }
                case 0x5:
                {
// switch_1E88_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1F00
                }
            }
        }
        case 0x65:
        {
// switch_22A0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2040
                case default:
                {
// switch_2040_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20B8
// lab_20B8
                    OP_JUMP lab_22E8
                }
                case 0x0:
                {
// switch_2040_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_20B8
                }
                case 0x1:
                {
// switch_2040_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_20B8
                }
                case 0x2:
                {
// switch_2040_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_20B8
                }
                case 0x3:
                {
// switch_2040_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20B8
                }
                case 0x4:
                {
// switch_2040_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_20B8
                }
                case 0x5:
                {
// switch_2040_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_20B8
                }
            }
        }
        case 0x66:
        {
// switch_22A0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_21F8
                case default:
                {
// switch_21F8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2270
// lab_2270
                    OP_JUMP lab_22E8
                }
                case 0x0:
                {
// switch_21F8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2270
                }
                case 0x1:
                {
// switch_21F8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2270
                }
                case 0x2:
                {
// switch_21F8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2270
                }
                case 0x3:
                {
// switch_21F8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2270
                }
                case 0x4:
                {
// switch_21F8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2270
                }
                case 0x5:
                {
// switch_21F8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2270
                }
            }
        }
    }
}
// fun_23A8
fun_23A8() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_09C0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2450
    pri = 1;
    return pri;
// lab_2450
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2498
fun_2498() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_24E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_23A8(var_8)
    arg_2 = pri;
// lab_24E8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    OP_JUMP lab_2560
// lab_2560
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_25A0
    pri = 0;
    return pri;
// lab_25A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2560
    pri = 0;
    return pri;
}
// fun_25E0
fun_25E0() {
    var_8 = 0;
    pri = fun_2548()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2690
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2690
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_26D0
fun_26D0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2700
// lab_2700
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2740
    OP_JUMP lab_2770
// lab_2740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2700
// lab_2770
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27B8
fun_27B8() {
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
// fun_2828
fun_2828() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2888(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_28D8(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2888
fun_2888() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28D8
fun_28D8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2928
fun_2928() {
    OP_JUMP lab_2940
// lab_2940
    pri = EvCameraMoveWait_()
    OP_JZER lab_2978
    pri = 0;
    return pri;
// lab_2978
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2940
    pri = 0;
    return pri;
}
// fun_29B8
fun_29B8() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2B20()
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
// fun_2A88
fun_2A88() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2B20()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2B20
fun_2B20() {
    OP_JUMP lab_2B38
// lab_2B38
    pri = IsEasingRunningBlur_()
    OP_JZER lab_2B90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2BA0
// lab_2B90
    pri = 0;
    return pri;
// lab_2BA0
    OP_JUMP lab_2B38
    pri = 0;
    return pri;
}
// fun_2BC0
fun_2BC0() {
    pri = arg_6;
    OP_JNZ lab_2BF8
    var_8 = 0;
    pri = fun_0ED0()
// lab_2BF8
    pri = arg_1;
    switch (pri) {
// switch_4160
        case default:
        {
// switch_4160_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_44B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_44B0
            pri = 1;
            OP_JUMP lab_44B8
// lab_44B0
            pri = 0;
// lab_44B8
            OP_JZER lab_4610
            var_16 = 11080;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
            OP_JUMP lab_4670
// lab_4610
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
// lab_4670
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_46D0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4730
// lab_46D0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4730
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4730
            pri = arg_2;
            OP_JZER lab_4770
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4770
            var_8 = 0;
            pri = fun_0F10()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4160_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x1:
        {
// switch_4160_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x2:
        {
// switch_4160_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x3:
        {
// switch_4160_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x4:
        {
// switch_4160_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x5:
        {
// switch_4160_case_0x5
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0x6:
        {
// switch_4160_case_0x6
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0x7:
        {
// switch_4160_case_0x7
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0x8:
        {
// switch_4160_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x9:
        {
// switch_4160_case_0x9
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0xa:
        {
// switch_4160_case_0xa
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0xb:
        {
// switch_4160_case_0xb
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0xc:
        {
// switch_4160_case_0xc
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0xd:
        {
// switch_4160_case_0xd
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0xe:
        {
// switch_4160_case_0xe
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0xf:
        {
// switch_4160_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x10:
        {
// switch_4160_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x11:
        {
// switch_4160_case_0x11
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0x12:
        {
// switch_4160_case_0x12
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0x13:
        {
// switch_4160_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x14:
        {
// switch_4160_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x15:
        {
// switch_4160_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x16:
        {
// switch_4160_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x17:
        {
// switch_4160_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x18:
        {
// switch_4160_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x19:
        {
// switch_4160_case_0x19
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4160_case_default
        }
        case 0x1a:
        {
// switch_4160_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0948(var_48, var_40)
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
            pri = fun_0C30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4160_case_default
        }
        case 0x1b:
        {
// switch_4160_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0948(var_48, var_40)
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
            pri = fun_0C30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4160_case_default
        }
        case 0x1c:
        {
// switch_4160_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0948(var_48, var_40)
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
            pri = fun_0C30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4160_case_default
        }
        case 0x1d:
        {
// switch_4160_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x1e:
        {
// switch_4160_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x1f:
        {
// switch_4160_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x20:
        {
// switch_4160_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x21:
        {
// switch_4160_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x22:
        {
// switch_4160_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x23:
        {
// switch_4160_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x24:
        {
// switch_4160_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x25:
        {
// switch_4160_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x26:
        {
// switch_4160_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x27:
        {
// switch_4160_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x28:
        {
// switch_4160_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
        case 0x29:
        {
// switch_4160_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4160_case_default
        }
    }
}
// fun_47A0
fun_47A0() {
    pri = arg_5;
    OP_JNZ lab_47D8
    var_8 = 0;
    pri = fun_0ED0()
// lab_47D8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4828
    OP_CONST_S -8, -1
// lab_4828
    pri = arg_1;
    switch (pri) {
// switch_62E0
        case default:
        {
// switch_62E0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6788
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_09C0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6788
            pri = 1;
            OP_JUMP lab_6790
// lab_6788
            pri = 0;
// lab_6790
            OP_JZER lab_67E0
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6A38
// lab_67E0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6848
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6848
            pri = 1;
            OP_JUMP lab_6850
// lab_6848
            pri = 0;
// lab_6850
            OP_JZER lab_69D8
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
            OP_JUMP lab_6A38
// lab_69D8
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
// lab_6A38
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6AA8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6AA8
            var_8 = 0;
            pri = fun_0F10()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_62E0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1:
        {
// switch_62E0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2:
        {
// switch_62E0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x3:
        {
// switch_62E0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x4:
        {
// switch_62E0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x5:
        {
// switch_62E0_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BF8(var_40)
            OP_JUMP switch_62E0_case_default
        }
        case 0x6:
        {
// switch_62E0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x7:
        {
// switch_62E0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x8:
        {
// switch_62E0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x9:
        {
// switch_62E0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0xa:
        {
// switch_62E0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0xb:
        {
// switch_62E0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0xc:
        {
// switch_62E0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0xd:
        {
// switch_62E0_case_0xd
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0xe:
        {
// switch_62E0_case_0xe
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0xf:
        {
// switch_62E0_case_0xf
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x10:
        {
// switch_62E0_case_0x10
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x11:
        {
// switch_62E0_case_0x11
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x12:
        {
// switch_62E0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x13:
        {
// switch_62E0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x14:
        {
// switch_62E0_case_0x14
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x15:
        {
// switch_62E0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x16:
        {
// switch_62E0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x17:
        {
// switch_62E0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x18:
        {
// switch_62E0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x19:
        {
// switch_62E0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1a:
        {
// switch_62E0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1b:
        {
// switch_62E0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1c:
        {
// switch_62E0_case_0x1c
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1d:
        {
// switch_62E0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1e:
        {
// switch_62E0_case_0x1e
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x1f:
        {
// switch_62E0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x20:
        {
// switch_62E0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x21:
        {
// switch_62E0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x22:
        {
// switch_62E0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x23:
        {
// switch_62E0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x24:
        {
// switch_62E0_case_0x24
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x25:
        {
// switch_62E0_case_0x25
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x26:
        {
// switch_62E0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x27:
        {
// switch_62E0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x28:
        {
// switch_62E0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x29:
        {
// switch_62E0_case_0x29
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2a:
        {
// switch_62E0_case_0x2a
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2b:
        {
// switch_62E0_case_0x2b
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2c:
        {
// switch_62E0_case_0x2c
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2d:
        {
// switch_62E0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2e:
        {
// switch_62E0_case_0x2e
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x2f:
        {
// switch_62E0_case_0x2f
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x30:
        {
// switch_62E0_case_0x30
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x31:
        {
// switch_62E0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x32:
        {
// switch_62E0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x33:
        {
// switch_62E0_case_0x33
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x34:
        {
// switch_62E0_case_0x34
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x35:
        {
// switch_62E0_case_0x35
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x36:
        {
// switch_62E0_case_0x36
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x37:
        {
// switch_62E0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x38:
        {
// switch_62E0_case_0x38
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
            pri = fun_0C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62E0_case_default
        }
        case 0x39:
        {
// switch_62E0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x3a:
        {
// switch_62E0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x3b:
        {
// switch_62E0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x3c:
        {
// switch_62E0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x3d:
        {
// switch_62E0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
        case 0x3e:
        {
// switch_62E0_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            OP_JUMP switch_62E0_case_default
        }
    }
}
// fun_6AD8
fun_6AD8() {
    pri = arg_4;
    OP_JNZ lab_6B10
    var_8 = 0;
    pri = fun_0ED0()
// lab_6B10
    pri = arg_1;
    switch (pri) {
// switch_7EE8
        case default:
        {
// switch_7EE8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1950(var_264)
            OP_JZER lab_84B0
            pri = arg_3;
            switch (pri) {
// switch_8458
                case default:
                {
// switch_8458_case_default
                    OP_JUMP lab_8768
// lab_8768
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_87D8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_87D8
                    var_8 = 0;
                    pri = fun_0F10()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8458_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8458_case_default
                }
                case 0x2:
                {
// switch_8458_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8458_case_default
                }
                case 0x3:
                {
// switch_8458_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8458_case_default
                }
            }
// lab_84B0
            pri = arg_1;
            OP_JZER lab_8500
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8500
            pri = 0;
            OP_JUMP lab_8508
// lab_8500
            pri = 1;
// lab_8508
            OP_JZER lab_8570
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_09C0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8570
            pri = 1;
            OP_JUMP lab_8578
// lab_8570
            pri = 0;
// lab_8578
            OP_JZER lab_85C8
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8768
// lab_85C8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8630
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8768
// lab_8630
            var_16 = 32640;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_09C0(var_24, var_16)
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
// switch_7EE8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1:
        {
// switch_7EE8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2:
        {
// switch_7EE8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x3:
        {
// switch_7EE8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x4:
        {
// switch_7EE8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x5:
        {
// switch_7EE8_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0BF8(var_40)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x6:
        {
// switch_7EE8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x7:
        {
// switch_7EE8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x8:
        {
// switch_7EE8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x9:
        {
// switch_7EE8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0xa:
        {
// switch_7EE8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0xb:
        {
// switch_7EE8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0xc:
        {
// switch_7EE8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0xd:
        {
// switch_7EE8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0xe:
        {
// switch_7EE8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0xf:
        {
// switch_7EE8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x10:
        {
// switch_7EE8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x11:
        {
// switch_7EE8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x12:
        {
// switch_7EE8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x13:
        {
// switch_7EE8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x14:
        {
// switch_7EE8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x15:
        {
// switch_7EE8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x16:
        {
// switch_7EE8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x17:
        {
// switch_7EE8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x18:
        {
// switch_7EE8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x19:
        {
// switch_7EE8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1a:
        {
// switch_7EE8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1b:
        {
// switch_7EE8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1c:
        {
// switch_7EE8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1d:
        {
// switch_7EE8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1e:
        {
// switch_7EE8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x1f:
        {
// switch_7EE8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x20:
        {
// switch_7EE8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x21:
        {
// switch_7EE8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x22:
        {
// switch_7EE8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x23:
        {
// switch_7EE8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x24:
        {
// switch_7EE8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x25:
        {
// switch_7EE8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x26:
        {
// switch_7EE8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x27:
        {
// switch_7EE8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x28:
        {
// switch_7EE8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x29:
        {
// switch_7EE8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2a:
        {
// switch_7EE8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2b:
        {
// switch_7EE8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2c:
        {
// switch_7EE8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2d:
        {
// switch_7EE8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2e:
        {
// switch_7EE8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x2f:
        {
// switch_7EE8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x30:
        {
// switch_7EE8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x31:
        {
// switch_7EE8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x32:
        {
// switch_7EE8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x33:
        {
// switch_7EE8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x34:
        {
// switch_7EE8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x35:
        {
// switch_7EE8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x36:
        {
// switch_7EE8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x37:
        {
// switch_7EE8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x38:
        {
// switch_7EE8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x39:
        {
// switch_7EE8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x3a:
        {
// switch_7EE8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x3b:
        {
// switch_7EE8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x3c:
        {
// switch_7EE8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x3d:
        {
// switch_7EE8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
        case 0x3e:
        {
// switch_7EE8_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0980(var_24, var_16, var_8)
            OP_JUMP switch_7EE8_case_default
        }
    }
}
// fun_8808
fun_8808() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8A18(var_16, var_8)
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
    OP_JZER lab_8A00
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8A00
    pri = 0;
    return pri;
}
// fun_8A18
fun_8A18() {
    var_8 = arg_1;
    var_16 = 32928;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0980(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8A60
fun_8A60() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8B60
        case default:
        {
// switch_8B60_case_default
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
// switch_8B60_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8B60_case_default
        }
        case 0x1:
        {
// switch_8B60_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8B60_case_default
        }
        case 0x2:
        {
// switch_8B60_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8B60_case_default
        }
        case 0x3:
        {
// switch_8B60_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8B60_case_default
        }
    }
}
// fun_8C20
fun_8C20() {
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
    pri = fun_2498(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2548()
    pri = 0;
    return pri;
}
// fun_8CB8
fun_8CB8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8A60(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8C20(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8D60
fun_8D60() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8DB0
// lab_8DB0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 33032;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8E28
    OP_JUMP lab_8E58
// lab_8E28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8DB0
// lab_8E58
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8EE0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6AD8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1C20(var_56)
// lab_8EE0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8F48
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1478(var_24, var_16)
// lab_8F48
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1478(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_9008
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_09F8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0778(var_88, var_80, var_72, var_64, var_56)
// lab_9008
    pri = IsPlayerRideBicycle()
    OP_JZER lab_9048
    pri = 0;
    return pri;
// lab_9048
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9190
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 33152;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0948(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9158
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9190
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0820(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0820(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_09F8(var_40)
    pri = 0;
    return pri;
// lab_9158
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1478(var_16, var_8)
}
// fun_9218
fun_9218() {
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
    pri = fun_8CB8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_25E0(var_112)
    var_128 = 0;
    pri = fun_26A0()
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
    pri = fun_8D60(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9390
fun_9390() {
    pri = 33288;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9418
// lab_9418
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9598
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9588
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_94D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_94D8
    pri = 0;
    OP_JUMP lab_94E0
// lab_9598
    pri = 0;
    return pri;
// lab_9588
    OP_JUMP lab_9410
// lab_9410
    OP_INC_P_S -936
// lab_94D8
    pri = 1;
// lab_94E0
    OP_JZER lab_9558
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9550
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9558
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9550
}
// fun_95B8
fun_95B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9650
    var_8 = 1;
    var_16 = 0;
    var_24 = 34208;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1BF8()
// lab_9650
    pri = arg_4;
    OP_JZER lab_9688
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C50(var_8)
// lab_9688
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_96E0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_96E0
    pri = 0;
    OP_JUMP lab_96E8
// lab_96E0
    pri = 1;
// lab_96E8
    OP_JZER lab_97B0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_97B0
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_9788
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1B38(var_32, var_24)
    OP_JUMP lab_97B0
// lab_97B0
    pri = arg_2;
    OP_JZER lab_9888
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_9858
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1478(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0608(var_40)
    OP_JUMP lab_9888
// lab_9888
    pri = arg_3;
    OP_JZER lab_98C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BC0(var_8)
// lab_98C0
    pri = 0;
    return pri;
// lab_9858
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1478(var_16, var_8)
// lab_9788
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B38(var_16, var_8)
}
// fun_98D0
fun_98D0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9390(var_24)
    pri = 0;
    return pri;
}
// fun_9938
fun_9938() {
    pri = g_mode;
    switch (pri) {
// switch_9A48
        case default:
        {
// switch_9A48_case_default
            pri = CommandNOP()
            OP_JUMP lab_9AB0
// lab_9AB0
            pri = 0;
            return pri;
        }
        case 0xcdd20062f1ae8e0a:
        {
// switch_9A48_case_0xcdd20062f1ae8e0a
            var_8 = 0;
            pri = fun_D700()
            OP_JUMP lab_9AB0
        }
        case 0x0:
        {
// switch_9A48_case_0x0
            var_8 = 0;
            pri = fun_9AC0()
            OP_JUMP lab_9AB0
        }
        case 0x16b7fd17fd0ade35:
        {
// switch_9A48_case_0x16b7fd17fd0ade35
            var_8 = 0;
            pri = fun_D6B8()
            OP_JUMP lab_9AB0
        }
        case 0x33fbd71b86e7fa59:
        {
// switch_9A48_case_0x33fbd71b86e7fa59
            var_8 = 0;
            pri = fun_D5C8()
            OP_JUMP lab_9AB0
        }
        case 0x789e6d652721888f:
        {
// switch_9A48_case_0x789e6d652721888f
            var_8 = 0;
            pri = fun_D788()
            OP_JUMP lab_9AB0
        }
    }
}
// fun_9AC0
fun_9AC0() {
    pri = 0;
    return pri;
}
// fun_9AD8
fun_9AD8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_95B8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9B30
fun_9B30() {
    pri = 0;
    return pri;
}
// fun_9B48
fun_9B48() {
    var_8 = 0;
    pri = fun_0438()
    pri = 0;
    return pri;
}
// fun_9B78
fun_9B78() {
    var_8 = 0;
    pri = fun_2828()
    pri = EvCameraStart()
    var_16 = 1;
    var_24 = 1;
    OP_PUSH4_C 4640537203540230144, 4656691228375515136, 4652605443166699520, 8802641224559852288
    var_32 = 48;
    pri = fun_05B0(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 1;
    var_48 = 1;
    OP_PUSH4_C -4587338432941916160, 4649410702181033574, 4655642734087267942, 2610993506854619934
    var_56 = 48;
    pri = fun_05B0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 1;
    var_72 = 0;
    var_80 = 4641240890982006784;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH4_C 4655182698422206464, 4652605443166699520, 4607182418800017408, 8802641224559852288
    var_104 = 72;
    pri = fun_0640(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 0;
    var_120 = 4631952216750555136;
    var_128 = 0;
    OP_PUSH5_C 4655853136632359158, 4638461325586989056, 4652498614616944804, 4657016046100592722, 4641623696950333276
    var_136 = 4652988249135026012;
    var_144 = 1;
    pri = EvCameraMove(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_152 = 0;
    pri = fun_2928()
    var_160 = 0;
    var_168 = 4631952216750555136;
    var_176 = 3;
    OP_PUSH5_C 4654338933199051162, 4631687630272447119, 4652610764802977956, 4655851553335615160, 4638857501616709304
    var_184 = 4652884939022480179;
    var_192 = 90;
    pri = EvCameraMove(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_200 = 34256;
    var_208 = 8;
    var_216 = 16;
    pri = fun_02B0(var_208, var_200)
    var_224 = 0;
    pri = fun_0380()
    var_232 = 1;
    var_240 = 8;
    pri = fun_0090(var_232)
    var_248 = 35;
    var_256 = 8;
    pri = fun_0090(var_248)
    var_264 = 1;
    var_272 = 0;
    var_280 = 0;
    OP_PUSH2_C 4607182418800017408, -1528879600583155539
    var_288 = 0;
    var_296 = 48;
    pri = fun_17B0(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 8802641224559852288;
    var_312 = 8;
    pri = fun_0820(var_304)
    var_320 = 4;
    var_328 = -1528879600583155539;
    var_336 = 16;
    pri = fun_14F8(var_328, var_320)
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH2_C 8802641224559852288, -1528879600583155539
    var_376 = 48;
    pri = fun_07C8(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 3361562880606467749, -1528879600583155539
    var_424 = 56;
    pri = fun_2498(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = -1528879600583155539;
    var_440 = 8;
    pri = fun_0820(var_432)
    var_448 = 1;
    var_456 = 8;
    pri = fun_25E0(var_448)
    var_464 = 0;
    pri = fun_26A0()
    var_472 = -1528879600583155539;
    var_480 = 8;
    pri = fun_1538(var_472)
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    OP_PUSH2_C 2610993506854619934, -1528879600583155539
    var_520 = 48;
    pri = fun_07C8(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C 3361559582071583116, -1528879600583155539
    var_568 = 56;
    pri = fun_2498(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = -1528879600583155539;
    var_584 = 8;
    pri = fun_0820(var_576)
    var_592 = 1;
    var_600 = 8;
    pri = fun_25E0(var_592)
    var_608 = 0;
    pri = fun_26A0()
    var_616 = 1;
    var_624 = 0;
    var_632 = 50;
    pri = float(var_632)
    var_640 = pri;
    OP_PUSH5_C 8802641224559852288, 4649410702181033574, 4652990712041072230, 4611686018427387904, 2610993506854619934
    var_648 = 64;
    pri = fun_06B8(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_656 = 0;
    var_664 = 3;
    var_672 = 0;
    var_680 = 100;
    var_688 = -1;
    OP_PUSH2_C -8524535115600294103, 2610993506854619934
    var_696 = 56;
    pri = fun_2498(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 2610993506854619934;
    var_712 = 8;
    pri = fun_0820(var_704)
    var_720 = 1;
    var_728 = 8;
    pri = fun_25E0(var_720)
    var_736 = 0;
    var_744 = -186372727639087230;
    var_752 = 0;
    var_760 = 24;
    pri = fun_26D0(var_752, var_744, var_736)
    var_768 = 0;
    var_776 = -186378225197228285;
    var_784 = 1;
    var_792 = 24;
    pri = fun_26D0(var_784, var_776, var_768)
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 1;
    var_840 = 32;
    pri = fun_27B8(var_832, var_824, var_816, var_808)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A728
        case default:
        {
// switch_A728_case_default
            var_8 = 2610993506854619934;
            var_16 = 8;
            pri = fun_1538(var_8)
            var_24 = 2610993506854619934;
            var_32 = 8;
            pri = fun_0820(var_24)
            var_40 = 0;
            var_48 = 4628321189550987674;
            var_56 = 0;
            OP_PUSH5_C 4653569055157282406, 4637609863782439322, 4652944136728519639, 4655125787700352778, 4639467246785008763
            var_64 = 4652706422314594468;
            var_72 = 1;
            pri = EvCameraMove(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
            var_80 = 0;
            pri = fun_2928()
            var_88 = 0;
            var_96 = 4628321189550987674;
            var_104 = 3;
            OP_PUSH5_C 4653585195987978158, 4637609863782439322, 4653049909747111690, 4655142016491978752, 4639465135722683433
            var_112 = 4652812679118302740;
            var_120 = 280;
            pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_128 = 15;
            var_136 = 2610993506854619934;
            var_144 = 16;
            pri = fun_14B8(var_136, var_128)
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            OP_PUSH2_C -8523676397018850537, 2610993506854619934
            var_192 = 56;
            pri = fun_2498(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_200 = 1;
            var_208 = 8;
            pri = fun_25E0(var_200)
            var_216 = 0;
            pri = fun_26A0()
            var_224 = 5;
            var_232 = 5;
            var_240 = 2610993506854619934;
            var_248 = 24;
            pri = fun_15E8(var_240, var_232, var_224)
            var_256 = 0;
            var_264 = 3;
            var_272 = 0;
            var_280 = 100;
            var_288 = -1;
            OP_PUSH2_C -8526483450205105545, 2610993506854619934
            var_296 = 56;
            pri = fun_2498(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
            var_304 = 1;
            var_312 = 8;
            pri = fun_25E0(var_304)
            var_320 = 0;
            pri = fun_26A0()
            var_328 = 8;
            var_336 = -1528879600583155539;
            var_344 = 16;
            pri = fun_14F8(var_336, var_328)
            var_352 = 1;
            var_360 = -1;
            var_368 = -1;
            var_376 = 3;
            var_384 = 0;
            var_392 = 1;
            var_400 = -1528879600583155539;
            var_408 = 56;
            pri = fun_2BC0(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
            var_416 = 0;
            var_424 = 3;
            var_432 = 0;
            var_440 = 100;
            var_448 = -1;
            OP_PUSH2_C 3361560681583211327, -1528879600583155539
            var_456 = 56;
            pri = fun_2498(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
            var_464 = -1528879600583155539;
            var_472 = 8;
            pri = fun_09F8(var_464)
            var_480 = 1;
            var_488 = 8;
            pri = fun_25E0(var_480)
            var_496 = 0;
            pri = fun_26A0()
            var_504 = 2610993506854619934;
            var_512 = 8;
            pri = fun_1650(var_504)
            var_520 = -1528879600583155539;
            var_528 = 8;
            pri = fun_1538(var_520)
            var_536 = 0;
            var_544 = 4628321189550987674;
            var_552 = 0;
            OP_PUSH5_C 4653228866259648512, 4637252390562016788, 4653408130635441111, 4654747115895746724, 4639268455082706862
            var_560 = 4652988996802932900;
            var_568 = 1;
            pri = EvCameraMove(var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496)
            var_576 = 0;
            pri = fun_2928()
            var_584 = 0;
            var_592 = 4628321189550987674;
            var_600 = 3;
            OP_PUSH5_C 4653111966183383368, 4637504310666172826, 4653440368316367503, 4654630215819481580, 4639394766978505769
            var_608 = 4653021278464324403;
            var_616 = 180;
            pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
            var_624 = 1;
            var_632 = -1;
            var_640 = -1;
            var_648 = 3;
            var_656 = 0;
            var_664 = 0;
            var_672 = -1528879600583155539;
            var_680 = 56;
            pri = fun_2BC0(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
            var_688 = 0;
            var_696 = 3;
            var_704 = 0;
            var_712 = 100;
            var_720 = -1;
            OP_PUSH2_C 3361557383048326694, -1528879600583155539
            var_728 = 56;
            pri = fun_2498(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
            var_736 = -1528879600583155539;
            var_744 = 8;
            pri = fun_09F8(var_736)
            var_752 = 1;
            var_760 = 8;
            pri = fun_25E0(var_752)
            var_768 = 0;
            pri = fun_26A0()
            var_776 = 40;
            var_784 = 2610993506854619934;
            var_792 = 16;
            pri = fun_1478(var_784, var_776)
            var_800 = 15;
            var_808 = 2610993506854619934;
            var_816 = 16;
            pri = fun_14B8(var_808, var_800)
            var_824 = 0;
            var_832 = 4628321189550987674;
            var_840 = 0;
            OP_PUSH5_C 4654376228633465324, 4636111713218896855, 4652688258382503608, 4655939470285372129, 4638687912943241134
            var_848 = 4652880672917364408;
            var_856 = 1;
            pri = EvCameraMove(var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
            var_864 = 0;
            pri = fun_2928()
            var_872 = 0;
            var_880 = 4628321189550987674;
            var_888 = 3;
            OP_PUSH5_C 4654423903457645691, 4636189822524934062, 4652694151764828488, 4655987145109552497, 4638737171064165499
            var_896 = 4652886566299689288;
            var_904 = 90;
            pri = EvCameraMove(var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832)
            var_912 = 1;
            var_920 = 1;
            var_928 = -1;
            var_936 = -1;
            var_944 = 0;
            var_952 = 1;
            var_960 = 2610993506854619934;
            var_968 = 56;
            pri = fun_47A0(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
            var_976 = 0;
            var_984 = 3;
            var_992 = 0;
            var_1000 = 100;
            var_1008 = -1;
            OP_PUSH2_C -8523688491646760858, 2610993506854619934
            var_1016 = 56;
            pri = fun_2498(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
            var_1024 = 1;
            var_1032 = 8;
            pri = fun_25E0(var_1024)
            var_1040 = 0;
            pri = fun_26A0()
            var_1048 = 1;
            var_1056 = 3;
            var_1064 = 0;
            var_1072 = 1;
            var_1080 = 2610993506854619934;
            var_1088 = 40;
            pri = fun_6AD8(var_1080, var_1072, var_1064, var_1056, var_1048)
            var_1096 = 2610993506854619934;
            var_1104 = 8;
            pri = fun_09F8(var_1096)
            var_1112 = 1;
            var_1120 = 0;
            var_1128 = 4641240890982006784;
            var_1136 = 0;
            var_1144 = 0;
            OP_PUSH4_C 4652106704692340326, 4652715394329477120, 4607182418800017408, 2610993506854619934
            var_1152 = 72;
            pri = fun_0640(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
            var_1160 = 20;
            var_1168 = 8;
            pri = fun_0090(var_1160)
            var_1176 = 1;
            var_1184 = 0;
            var_1192 = 4641240890982006784;
            var_1200 = 0;
            var_1208 = 0;
            OP_PUSH4_C 4653975434654908416, 4652605443166699520, 4607182418800017408, 8802641224559852288
            var_1216 = 72;
            pri = fun_0640(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
            var_1224 = 25;
            var_1232 = 8;
            pri = fun_0090(var_1224)
            var_1240 = 1;
            var_1248 = 1;
            var_1256 = 40;
            var_1264 = 0;
            var_1272 = -1528879600583155539;
            var_1280 = 40;
            pri = fun_1008(var_1272, var_1264, var_1256, var_1248, var_1240)
            var_1288 = 5;
            var_1296 = -1528879600583155539;
            var_1304 = 16;
            pri = fun_14F8(var_1296, var_1288)
            var_1312 = 20;
            var_1320 = 8;
            pri = fun_0090(var_1312)
            var_1328 = 1;
            var_1336 = 0;
            var_1344 = 34208;
            var_1352 = 8;
            var_1360 = 32;
            pri = fun_0310(var_1352, var_1344, var_1336, var_1328)
            var_1368 = 8802641224559852288;
            var_1376 = 8;
            pri = fun_0820(var_1368)
            var_1384 = 2610993506854619934;
            var_1392 = 8;
            pri = fun_0820(var_1384)
            var_1400 = 1;
            var_1408 = 1;
            OP_PUSH4_C 4637933560005656576, 4647768471613787341, 4656557967566228685, 8802641224559852288
            var_1416 = 48;
            pri = fun_05B0(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
            var_1424 = 1;
            var_1432 = 1;
            OP_PUSH4_C 4639784257977529139, 4648064899948635750, 4657094969045234483, 2610993506854619934
            var_1440 = 48;
            pri = fun_05B0(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
            var_1448 = 0;
            var_1456 = 4629053024490435379;
            var_1464 = 0;
            OP_PUSH5_C 4647052645563640054, 4643656825891486433, 4656966941911296246, 4650115093310251991, 4643893616715644273
            var_1472 = 4655929090895605924;
            var_1480 = 1;
            pri = EvCameraMove(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
            var_1488 = 0;
            pri = fun_2928()
            var_1496 = -1;
            var_1504 = -1528879600583155539;
            var_1512 = 16;
            pri = fun_1478(var_1504, var_1496)
            var_1520 = 0;
            var_1528 = 0;
            var_1536 = 0;
            var_1544 = 0;
            OP_PUSH2_C 8802641224559852288, 2610993506854619934
            var_1552 = 48;
            pri = fun_07C8(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
            var_1560 = 2610993506854619934;
            var_1568 = 8;
            pri = fun_0820(var_1560)
            var_1576 = 0;
            var_1584 = 4;
            var_1592 = 2610993506854619934;
            var_1600 = 24;
            pri = fun_8808(var_1592, var_1584, var_1576)
            var_1608 = 2610993506854619934;
            var_1616 = 8;
            pri = fun_09F8(var_1608)
            var_1624 = 0;
            var_1632 = 4629053024490435379;
            var_1640 = 3;
            OP_PUSH5_C 4646439557879992156, 4635792239120330260, 4657097563892676035, 4649009072573639557, 4639615021147781857
            var_1648 = 4655894038464912425;
            var_1656 = 120;
            pri = EvCameraMove(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
            var_1664 = 34256;
            var_1672 = 8;
            var_1680 = 16;
            pri = fun_02B0(var_1672, var_1664)
            var_1688 = 0;
            var_1696 = 3;
            var_1704 = 0;
            var_1712 = 100;
            var_1720 = -1;
            OP_PUSH2_C -8524538414135178736, 2610993506854619934
            var_1728 = 56;
            pri = fun_2498(var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672)
            var_1736 = 1;
            var_1744 = 8;
            pri = fun_25E0(var_1736)
            var_1752 = 0;
            pri = fun_26A0()
            var_1760 = 0;
            var_1768 = 0;
            var_1776 = 2610993506854619934;
            var_1784 = 24;
            pri = fun_8808(var_1776, var_1768, var_1760)
            var_1792 = 2610993506854619934;
            var_1800 = 8;
            pri = fun_09F8(var_1792)
            var_1808 = 3;
            var_1816 = 2;
            var_1824 = 2610993506854619934;
            var_1832 = 24;
            pri = fun_15E8(var_1824, var_1816, var_1808)
            var_1840 = 0;
            var_1848 = 4629053024490435379;
            var_1856 = 0;
            OP_PUSH5_C 4645643159617761444, 4636374892322121318, 4657549683074017526, 4648192267375597322, 4639883126063098757
            var_1864 = 4656687446055515587;
            var_1872 = 1;
            pri = EvCameraMove(var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
            var_1880 = 0;
            pri = fun_2928()
            var_1888 = 0;
            var_1896 = 4629053024490435379;
            var_1904 = 3;
            OP_PUSH5_C 4645521949455915418, 4636187007775166956, 4657583526041920471, 4648131662294674309, 4639789535633342464
            var_1912 = 4656738573346207171;
            var_1920 = 70;
            pri = EvCameraMove(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
            var_1928 = 0;
            var_1936 = 1;
            var_1944 = 45;
            var_1952 = 0;
            var_1960 = 2610993506854619934;
            var_1968 = 40;
            pri = fun_1008(var_1960, var_1952, var_1944, var_1936, var_1928)
            var_1976 = 0;
            var_1984 = 3;
            var_1992 = 0;
            var_2000 = 100;
            var_2008 = -1;
            OP_PUSH2_C -8524537314623550525, 2610993506854619934
            var_2016 = 56;
            pri = fun_2498(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
            var_2024 = 1;
            var_2032 = 8;
            pri = fun_25E0(var_2024)
            var_2040 = 0;
            pri = fun_26A0()
            var_2048 = 2610993506854619934;
            var_2056 = 8;
            pri = fun_1650(var_2048)
            var_2064 = 0;
            var_2072 = 4629053024490435379;
            var_2080 = 0;
            OP_PUSH5_C 4649899940874928783, 4637547235600121201, 4655975666208158515, 4652454062405787320, 4640129768511441469
            var_2088 = 4654748611231560499;
            var_2096 = 1;
            pri = EvCameraMove(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
            var_2104 = 0;
            pri = fun_2928()
            var_2112 = 0;
            var_2120 = 4629053024490435379;
            var_2128 = 3;
            OP_PUSH5_C 4649899940874928783, 4637547235600121201, 4655975666208158515, 4652355282281147924, 4640126601917953475
            var_2136 = 4654644641412038001;
            var_2144 = 160;
            pri = EvCameraMove(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
            var_2152 = -1;
            var_2160 = 2610993506854619934;
            var_2168 = 16;
            pri = fun_1478(var_2160, var_2152)
            var_2176 = 15;
            var_2184 = 2610993506854619934;
            var_2192 = 16;
            pri = fun_14B8(var_2184, var_2176)
            var_2200 = 1;
            var_2208 = 1;
            var_2216 = -1;
            var_2224 = -1;
            var_2232 = 0;
            var_2240 = 1;
            var_2248 = 2610993506854619934;
            var_2256 = 56;
            pri = fun_47A0(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
            var_2264 = 0;
            var_2272 = 3;
            var_2280 = 0;
            var_2288 = 100;
            var_2296 = -1;
            OP_PUSH2_C -8524531817065409470, 2610993506854619934
            var_2304 = 56;
            pri = fun_2498(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
            var_2312 = 1;
            var_2320 = 8;
            pri = fun_25E0(var_2312)
            var_2328 = 0;
            var_2336 = -186374926662343652;
            var_2344 = 0;
            var_2352 = 24;
            pri = fun_26D0(var_2344, var_2336, var_2328)
            var_2360 = 0;
            var_2368 = -186371628127459019;
            var_2376 = 1;
            var_2384 = 24;
            pri = fun_26D0(var_2376, var_2368, var_2360)
            var_2400 = 0;
            var_2408 = 0;
            var_2416 = 0;
            var_2424 = 1;
            var_2432 = 32;
            pri = fun_27B8(var_2424, var_2416, var_2408, var_2400)
            var_16 = pri;
            pri = var_16;
            switch (pri) {
// switch_BF58
                case default:
                {
// switch_BF58_case_default
                    var_8 = 0;
                    var_16 = 4629306351969474970;
                    var_24 = 0;
                    OP_PUSH5_C 4646691653906008637, 4633463737375491359, 4657195266495920210, 4648475413609982198, 4639833867942174392
                    var_32 = 4655962340127229870;
                    var_40 = 1;
                    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
                    var_48 = 0;
                    pri = fun_2928()
                    var_56 = 34304;
                    pri = SoundPostEvent(var_56)
                    var_64 = 0;
                    var_72 = 4629306351969474970;
                    var_80 = 9;
                    OP_PUSH5_C 4648223053701175050, 4638697764567426007, 4656300857767189545, 4649495232634976993, 4642265811740954460
                    var_88 = 4654594679603671859;
                    var_96 = 15;
                    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
                    var_104 = 0;
                    var_112 = 1;
                    var_120 = 2610993506854619934;
                    var_128 = 24;
                    pri = fun_8808(var_120, var_112, var_104)
                    var_136 = 0;
                    var_144 = 3;
                    var_152 = 0;
                    var_160 = 100;
                    var_168 = -1;
                    OP_PUSH2_C -8524532916577037681, 2610993506854619934
                    var_176 = 56;
                    pri = fun_2498(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
                    var_184 = 2610993506854619934;
                    var_192 = 8;
                    pri = fun_09F8(var_184)
                    var_200 = 1;
                    var_208 = 8;
                    pri = fun_25E0(var_200)
                    var_216 = 0;
                    pri = fun_26A0()
                    var_224 = 0;
                    var_232 = 0;
                    var_240 = 2610993506854619934;
                    var_248 = 24;
                    pri = fun_8808(var_240, var_232, var_224)
                    var_256 = 2610993506854619934;
                    var_264 = 8;
                    pri = fun_09F8(var_256)
                    var_272 = 0;
                    var_280 = 0;
                    var_288 = 0;
                    var_296 = 92;
                    pri = float(var_296)
                    var_304 = pri;
                    var_312 = 2610993506854619934;
                    var_320 = 40;
                    pri = fun_0778(var_312, var_304, var_296, var_288, var_280)
                    var_328 = 2610993506854619934;
                    var_336 = 8;
                    pri = fun_0820(var_328)
                    var_344 = 10;
                    var_352 = 8;
                    pri = fun_0090(var_344)
                    var_360 = 1;
                    var_368 = 0;
                    var_376 = 0;
                    OP_PUSH2_C 4607182418800017408, 2610993506854619934
                    var_384 = 3;
                    var_392 = 48;
                    pri = fun_17B0(var_384, var_376, var_368, var_360, var_352, var_344)
                    var_400 = 50;
                    var_408 = 8;
                    pri = fun_0090(var_400)
                    var_416 = 0;
                    var_424 = 3;
                    var_432 = 0;
                    var_440 = 100;
                    var_448 = -1;
                    OP_PUSH2_C -8526484549716733756, 2610993506854619934
                    var_456 = 56;
                    pri = fun_2498(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
                    var_464 = 1;
                    var_472 = 8;
                    pri = fun_25E0(var_464)
                    var_480 = 0;
                    pri = fun_26A0()
                    var_488 = 0;
                    var_496 = 0;
                    var_504 = 0;
                    var_512 = 0;
                    OP_PUSH2_C 8802641224559852288, 2610993506854619934
                    var_520 = 48;
                    pri = fun_07C8(var_512, var_504, var_496, var_488, var_480, var_472)
                    var_528 = 0;
                    var_536 = 3;
                    var_544 = 0;
                    var_552 = 100;
                    var_560 = -1;
                    OP_PUSH2_C -8524527419018896626, 2610993506854619934
                    var_568 = 56;
                    pri = fun_2498(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
                    var_576 = 2610993506854619934;
                    var_584 = 8;
                    pri = fun_0820(var_576)
                    var_592 = 1;
                    var_600 = 8;
                    pri = fun_25E0(var_592)
                    var_608 = 0;
                    pri = fun_26A0()
                    var_616 = 0;
                    var_624 = 0;
                    var_632 = 0;
                    OP_PUSH2_C 4639784257977529139, 2610993506854619934
                    var_640 = 40;
                    pri = fun_0778(var_632, var_624, var_616, var_608, var_600)
                    var_648 = 0;
                    var_656 = 3;
                    var_664 = 0;
                    var_672 = 100;
                    var_680 = -1;
                    OP_PUSH2_C -8524526319507268415, 2610993506854619934
                    var_688 = 56;
                    pri = fun_2498(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
                    var_696 = 2610993506854619934;
                    var_704 = 8;
                    pri = fun_0820(var_696)
                    var_712 = 1;
                    var_720 = 8;
                    pri = fun_25E0(var_712)
                    var_728 = 0;
                    pri = fun_26A0()
                    var_736 = 1;
                    var_744 = 1;
                    var_752 = -1;
                    var_760 = -1;
                    var_768 = 0;
                    var_776 = 28;
                    var_784 = 2610993506854619934;
                    var_792 = 56;
                    pri = fun_47A0(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
                    var_800 = 5;
                    var_808 = 8;
                    pri = fun_0090(var_800)
                    var_816 = 34448;
                    pri = SoundPostEvent(var_816)
                    var_824 = 0;
                    var_832 = 0;
                    var_840 = 3;
                    var_848 = 15;
                    OP_PUSH2_C 4602678819172646912, 4599075939470750516
                    var_856 = 48;
                    pri = fun_29B8(var_848, var_840, var_832, var_824, var_816, var_808)
                    var_864 = 0;
                    var_872 = 4629306351969474970;
                    var_880 = 9;
                    OP_PUSH5_C 4646037224585156362, 4634968221126009815, 4657499897187511828, 4648146527691881841, 4640395762364433039
                    var_888 = 4656571161705761997;
                    var_896 = 30;
                    pri = EvCameraMove(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
                    var_904 = 34608;
                    pri = SoundPostEvent(var_904)
                    var_912 = 0;
                    pri = fun_2B20()
                    var_920 = 3;
                    var_928 = 15;
                    var_936 = 16;
                    pri = fun_2A88(var_928, var_920)
                    var_944 = 0;
                    var_952 = 3;
                    var_960 = 0;
                    var_968 = 100;
                    var_976 = -1;
                    OP_PUSH2_C -8523685193111876225, 2610993506854619934
                    var_984 = 56;
                    pri = fun_2498(var_976, var_968, var_960, var_952, var_944, var_936, var_928)
                    var_992 = 1;
                    var_1000 = 8;
                    pri = fun_25E0(var_992)
                    var_1008 = 0;
                    pri = fun_26A0()
                    var_1016 = 15;
                    var_1024 = 8;
                    pri = fun_0090(var_1016)
                    var_1032 = -6555519403937290100;
                    pri = FlagSet(var_1032)
                    pri = CallTownMap()
                    var_1040 = 5;
                    var_1048 = 8;
                    pri = fun_0090(var_1040)
                    var_1056 = 1;
                    var_1064 = 3;
                    var_1072 = 0;
                    var_1080 = 28;
                    var_1088 = 2610993506854619934;
                    var_1096 = 40;
                    pri = fun_6AD8(var_1088, var_1080, var_1072, var_1064, var_1056)
                    var_1104 = 2610993506854619934;
                    var_1112 = 8;
                    pri = fun_09F8(var_1104)
                    var_1120 = 4;
                    var_1128 = 4;
                    var_1136 = 2610993506854619934;
                    var_1144 = 24;
                    pri = fun_15E8(var_1136, var_1128, var_1120)
                    var_1152 = 0;
                    var_1160 = 4629306351969474970;
                    var_1168 = 0;
                    OP_PUSH5_C 4647567217005439222, 4635668390130577572, 4656867721982005740, 4650463858398582538, 4640424261705824993
                    var_1176 = 4655848034898406277;
                    var_1184 = 1;
                    pri = EvCameraMove(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
                    var_1192 = 0;
                    pri = fun_2928()
                    var_1200 = 0;
                    var_1208 = 4629306351969474970;
                    var_1216 = 3;
                    OP_PUSH5_C 4647633715468687114, 4635668390130577572, 4656877309723399946, 4650067594407932068, 4640418280362569892
                    var_1224 = 4655647396016569713;
                    var_1232 = 250;
                    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
                    var_1240 = 0;
                    var_1248 = 3;
                    var_1256 = 0;
                    var_1264 = 100;
                    var_1272 = -1;
                    OP_PUSH2_C -8523686292623504436, 2610993506854619934
                    var_1280 = 56;
                    pri = fun_2498(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
                    var_1288 = 1;
                    var_1296 = 8;
                    pri = fun_25E0(var_1288)
                    var_1304 = 0;
                    pri = fun_26A0()
                    var_1312 = 7;
                    var_1320 = 7;
                    var_1328 = 2610993506854619934;
                    var_1336 = 24;
                    pri = fun_15E8(var_1328, var_1320, var_1312)
                    var_1344 = 0;
                    var_1352 = 0;
                    var_1360 = 0;
                    var_1368 = 0;
                    OP_PUSH2_C 8802641224559852288, 2610993506854619934
                    var_1376 = 48;
                    pri = fun_07C8(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
                    var_1384 = 0;
                    var_1392 = 3;
                    var_1400 = 0;
                    var_1408 = 100;
                    var_1416 = -1;
                    OP_PUSH2_C -8523682994088619803, 2610993506854619934
                    var_1424 = 56;
                    pri = fun_2498(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
                    var_1432 = 2610993506854619934;
                    var_1440 = 8;
                    pri = fun_0820(var_1432)
                    var_1448 = 1;
                    var_1456 = 8;
                    pri = fun_25E0(var_1448)
                    var_1464 = 0;
                    pri = fun_26A0()
                    var_1472 = 2610993506854619934;
                    var_1480 = 8;
                    pri = fun_15B0(var_1472)
                    var_1488 = 1;
                    var_1496 = 1;
                    var_1504 = -1;
                    var_1512 = -1;
                    var_1520 = 0;
                    var_1528 = 6;
                    var_1536 = 2610993506854619934;
                    var_1544 = 56;
                    pri = fun_47A0(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
                    var_1552 = 0;
                    var_1560 = 3;
                    var_1568 = 0;
                    var_1576 = 100;
                    var_1584 = -1;
                    OP_PUSH2_C -8523684093600248014, 2610993506854619934
                    var_1592 = 56;
                    pri = fun_2498(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
                    var_1600 = 1;
                    var_1608 = 8;
                    pri = fun_25E0(var_1600)
                    var_1616 = 0;
                    pri = fun_26A0()
                    var_1624 = 1;
                    var_1632 = 3;
                    var_1640 = 0;
                    var_1648 = 6;
                    var_1656 = 2610993506854619934;
                    var_1664 = 40;
                    pri = fun_6AD8(var_1656, var_1648, var_1640, var_1632, var_1624)
                    var_1672 = 2;
                    var_1680 = 2610993506854619934;
                    var_1688 = 16;
                    pri = fun_14F8(var_1680, var_1672)
                    var_1696 = 0;
                    var_1704 = 4629306351969474970;
                    var_1712 = 0;
                    OP_PUSH5_C 4646876195937614561, 4638492991521869005, 4657658754627492905, 4648195170086294651, 4638770596217649889
                    var_1720 = 4656748930745740820;
                    var_1728 = 1;
                    pri = EvCameraMove(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
                    var_1736 = 0;
                    pri = fun_2928()
                    var_1744 = 0;
                    var_1752 = 4629306351969474970;
                    var_1760 = 3;
                    OP_PUSH5_C 4646817789879947100, 4638774818342300549, 4657688331490280079, 4648165879096530698, 4638945462546931384
                    var_1768 = 4656778507608527995;
                    var_1776 = 120;
                    pri = EvCameraMove(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
                    var_1784 = 0;
                    var_1792 = 3;
                    var_1800 = 0;
                    var_1808 = 100;
                    var_1816 = -1;
                    OP_PUSH2_C -8523689591158389069, 2610993506854619934
                    var_1824 = 56;
                    pri = fun_2498(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
                    var_1832 = 2610993506854619934;
                    var_1840 = 8;
                    pri = fun_09F8(var_1832)
                    var_1848 = 1;
                    var_1856 = 8;
                    pri = fun_25E0(var_1848)
                    var_1864 = 0;
                    pri = fun_26A0()
                    var_1872 = 5;
                    var_1880 = 2610993506854619934;
                    var_1888 = 16;
                    pri = fun_14F8(var_1880, var_1872)
                    var_1896 = 0;
                    var_1904 = 4629306351969474970;
                    var_1912 = 0;
                    OP_PUSH5_C 4647077274624102236, 4635258140352021791, 4657028932376870257, 4648814415035058094, 4640953786505761915
                    var_1920 = 4655673168569124782;
                    var_1928 = 1;
                    pri = EvCameraMove(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
                    var_1936 = 0;
                    pri = fun_2928()
                    var_1944 = 0;
                    var_1952 = 4629306351969474970;
                    var_1960 = 3;
                    OP_PUSH5_C 4647270436826869924, 4635472765021763666, 4656972329518272348, 4648910996136441938, 4641061098840632852
                    var_1968 = 4655559962851928965;
                    var_1976 = 120;
                    pri = EvCameraMove(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
                    var_1984 = 1;
                    var_1992 = -1;
                    var_2000 = -1;
                    var_2008 = 3;
                    var_2016 = 0;
                    var_2024 = 0;
                    var_2032 = 2610993506854619934;
                    var_2040 = 56;
                    pri = fun_2BC0(var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984)
                    var_2048 = 0;
                    var_2056 = 3;
                    var_2064 = 0;
                    var_2072 = 100;
                    var_2080 = -1;
                    OP_PUSH2_C -8523677496530478748, 2610993506854619934
                    var_2088 = 56;
                    pri = fun_2498(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
                    var_2096 = 1;
                    var_2104 = 8;
                    pri = fun_25E0(var_2096)
                    var_2112 = 0;
                    pri = fun_26A0()
                    var_2120 = 0;
                    var_2128 = 0;
                    var_2136 = 0;
                    var_2144 = 90;
                    pri = float(var_2144)
                    var_2152 = pri;
                    var_2160 = -1528879600583155539;
                    var_2168 = 40;
                    pri = fun_0778(var_2160, var_2152, var_2144, var_2136, var_2128)
                    var_2176 = 2610993506854619934;
                    var_2184 = 8;
                    pri = fun_1538(var_2176)
                    var_2192 = 0;
                    var_2200 = 0;
                    var_2208 = 0;
                    OP_PUSH2_C 4639784257977529139, 2610993506854619934
                    var_2216 = 40;
                    pri = fun_0778(var_2208, var_2200, var_2192, var_2184, var_2176)
                    var_2224 = 2610993506854619934;
                    var_2232 = 8;
                    pri = fun_0820(var_2224)
                    var_2240 = -1528879600583155539;
                    var_2248 = 8;
                    pri = fun_0820(var_2240)
                    var_2256 = 3;
                    var_2264 = 45;
                    pri = EvCameraEnd(var_2264, var_2256)
                    pri = 0;
                    return pri;
                }
                case 0x0:
                {
// switch_BF58_case_0x0
                    var_8 = 0;
                    var_16 = 4629306351969474970;
                    var_24 = 0;
                    OP_PUSH5_C 4648153564566299607, 4636426965192812790, 4657734620929809449, 4647918093156095099, 4639548874528254853
                    var_32 = 4656807424764338504;
                    var_40 = 1;
                    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
                    var_48 = 0;
                    pri = fun_2928()
                    var_56 = 1;
                    var_64 = 3;
                    var_72 = 0;
                    var_80 = 1;
                    var_88 = 2610993506854619934;
                    var_96 = 40;
                    pri = fun_6AD8(var_88, var_80, var_72, var_64, var_56)
                    var_104 = 0;
                    var_112 = 3;
                    var_120 = 0;
                    var_128 = 100;
                    var_136 = -1;
                    OP_PUSH2_C -186379324708856496, 2610993506854619934
                    var_144 = 56;
                    pri = fun_2498(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
                    var_152 = 1;
                    var_160 = 8;
                    pri = fun_25E0(var_152)
                    var_168 = 0;
                    pri = fun_26A0()
                    OP_JUMP switch_BF58_case_default
                }
                case 0x1:
                {
// switch_BF58_case_0x1
                    var_8 = 0;
                    var_16 = 4629306351969474970;
                    var_24 = 0;
                    OP_PUSH5_C 4648153564566299607, 4636426965192812790, 4657734620929809449, 4647918093156095099, 4639548874528254853
                    var_32 = 4656807424764338504;
                    var_40 = 1;
                    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
                    var_48 = 0;
                    pri = fun_2928()
                    var_56 = 1;
                    var_64 = 3;
                    var_72 = 0;
                    var_80 = 1;
                    var_88 = 2610993506854619934;
                    var_96 = 40;
                    pri = fun_6AD8(var_88, var_80, var_72, var_64, var_56)
                    var_104 = 0;
                    var_112 = 3;
                    var_120 = 0;
                    var_128 = 100;
                    var_136 = -1;
                    OP_PUSH2_C -8524534016088665892, 2610993506854619934
                    var_144 = 56;
                    pri = fun_2498(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
                    var_152 = 1;
                    var_160 = 8;
                    pri = fun_25E0(var_152)
                    var_168 = 0;
                    pri = fun_26A0()
                    OP_JUMP switch_BF58_case_default
                }
            }
        }
        case 0x0:
        {
// switch_A728_case_0x0
            var_8 = 5;
            var_16 = 2610993506854619934;
            var_24 = 16;
            pri = fun_14F8(var_16, var_8)
            var_32 = 0;
            var_40 = 1;
            var_48 = 50;
            OP_PUSH2_C -1528879600583155539, 2610993506854619934
            var_56 = 40;
            pri = fun_0F50(var_48, var_40, var_32, var_24, var_16)
            var_64 = 1;
            var_72 = 0;
            var_80 = 4641240890982006784;
            var_88 = 0;
            var_96 = 0;
            OP_PUSH4_C 4654391489854858854, 4652758934989937050, 4607182418800017408, 2610993506854619934
            var_104 = 72;
            pri = fun_0640(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            OP_PUSH2_C 8802641224559852288, -1528879600583155539
            var_144 = 48;
            pri = fun_07C8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            OP_PUSH2_C -8524530717553781259, 2610993506854619934
            var_192 = 56;
            pri = fun_2498(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_200 = -1528879600583155539;
            var_208 = 8;
            pri = fun_0820(var_200)
            var_216 = 1;
            var_224 = 8;
            pri = fun_25E0(var_216)
            var_232 = 0;
            pri = fun_26A0()
            OP_JUMP switch_A728_case_default
        }
        case 0x1:
        {
// switch_A728_case_0x1
            var_8 = 5;
            var_16 = 2610993506854619934;
            var_24 = 16;
            pri = fun_14F8(var_16, var_8)
            var_32 = 0;
            var_40 = 1;
            var_48 = 50;
            OP_PUSH2_C -1528879600583155539, 2610993506854619934
            var_56 = 40;
            pri = fun_0F50(var_48, var_40, var_32, var_24, var_16)
            var_64 = 1;
            var_72 = 0;
            var_80 = 4641240890982006784;
            var_88 = 0;
            var_96 = 0;
            OP_PUSH4_C 4654391489854858854, 4652758934989937050, 4607182418800017408, 2610993506854619934
            var_104 = 72;
            pri = fun_0640(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            OP_PUSH2_C 8802641224559852288, -1528879600583155539
            var_144 = 48;
            pri = fun_07C8(var_136, var_128, var_120, var_112, var_104, var_96)
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            OP_PUSH2_C -8523687392135132647, 2610993506854619934
            var_192 = 56;
            pri = fun_2498(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_200 = -1528879600583155539;
            var_208 = 8;
            pri = fun_0820(var_200)
            var_216 = 1;
            var_224 = 8;
            pri = fun_25E0(var_216)
            var_232 = 0;
            pri = fun_26A0()
            OP_JUMP switch_A728_case_default
        }
    }
}
// fun_D328
fun_D328() {
    pri = 0;
    return pri;
}
// fun_D340
fun_D340() {
    var_8 = 3050;
    var_16 = 8;
    pri = fun_98D0(var_8)
    var_24 = -6397670319191688058;
    pri = VanishFlagReset(var_24)
    var_32 = 8541340050249644631;
    pri = VanishFlagReset(var_32)
    var_40 = -1973076409959789862;
    pri = VanishFlagSet(var_40)
    var_48 = -2946005106301865392;
    pri = VanishFlagSet(var_48)
    var_56 = 5680856449783091532;
    pri = VanishFlagSet(var_56)
    var_64 = -5735822517530358307;
    pri = VanishFlagSet(var_64)
    var_72 = -5735834612158268628;
    pri = VanishFlagSet(var_72)
    var_80 = 6677431524334105512;
    pri = VanishFlagSet(var_80)
    var_88 = 2680324464551249407;
    pri = VanishFlagSet(var_88)
    var_96 = -2740292375873623988;
    pri = VanishFlagSet(var_96)
    var_104 = 1873309426352893503;
    pri = VanishFlagSet(var_104)
    var_112 = -853404815738154776;
    pri = VanishFlagSet(var_112)
    var_120 = -6555519403937290100;
    pri = FlagSet(var_120)
    pri = 0;
    return pri;
}
// fun_D580
fun_D580() {
    OP_PUSH2_C 2610993506854619934, -2116126235335757485
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_D5C8
fun_D5C8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9AD8()
    var_16 = 0;
    pri = fun_9B30()
    var_24 = 0;
    pri = fun_9B48()
    var_32 = 0;
    pri = fun_9B78()
    var_40 = 0;
    pri = fun_D328()
    var_48 = 0;
    pri = fun_D340()
    var_56 = 0;
    pri = fun_D580()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_D6B8
fun_D6B8() {
    var_8 = 0;
    pri = fun_9B30()
    var_16 = 0;
    pri = fun_D340()
    pri = 0;
    return pri;
}
// fun_D700
fun_D700() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -8523690690670017280;
    var_88 = 80;
    pri = fun_9218(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_D788
fun_D788() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 3361558482559954905;
    var_88 = 80;
    pri = fun_9218(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
